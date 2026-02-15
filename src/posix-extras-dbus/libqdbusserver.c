#include "../libqcoreevent.hpp"
#include "libqdbusconnection.hpp"
#include "libqdbuserror.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqdbusserver.hpp"
#include "libqdbusserver.h"

QDBusServer* q_dbusserver_new(const char* address) {
    return QDBusServer_new(qstring(address));
}

QDBusServer* q_dbusserver_new2() {
    return QDBusServer_new2();
}

QDBusServer* q_dbusserver_new3(const char* address, void* parent) {
    return QDBusServer_new3(qstring(address), (QObject*)parent);
}

QDBusServer* q_dbusserver_new4(void* parent) {
    return QDBusServer_new4((QObject*)parent);
}

const QMetaObject* q_dbusserver_meta_object(void* self) {
    return QDBusServer_MetaObject((QDBusServer*)self);
}

void q_dbusserver_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDBusServer_OnMetaObject((QDBusServer*)self, (intptr_t)callback);
}

const QMetaObject* q_dbusserver_qbase_meta_object(void* self) {
    return QDBusServer_QBaseMetaObject((QDBusServer*)self);
}

void* q_dbusserver_metacast(void* self, const char* param1) {
    return QDBusServer_Metacast((QDBusServer*)self, param1);
}

void q_dbusserver_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDBusServer_OnMetacast((QDBusServer*)self, (intptr_t)callback);
}

void* q_dbusserver_qbase_metacast(void* self, const char* param1) {
    return QDBusServer_QBaseMetacast((QDBusServer*)self, param1);
}

int32_t q_dbusserver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusServer_Metacall((QDBusServer*)self, param1, param2, param3);
}

void q_dbusserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDBusServer_OnMetacall((QDBusServer*)self, (intptr_t)callback);
}

int32_t q_dbusserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusServer_QBaseMetacall((QDBusServer*)self, param1, param2, param3);
}

const char* q_dbusserver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dbusserver_is_connected(void* self) {
    return QDBusServer_IsConnected((QDBusServer*)self);
}

QDBusError* q_dbusserver_last_error(void* self) {
    return QDBusServer_LastError((QDBusServer*)self);
}

const char* q_dbusserver_address(void* self) {
    libqt_string _str = QDBusServer_Address((QDBusServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusserver_set_anonymous_authentication_allowed(void* self, bool value) {
    QDBusServer_SetAnonymousAuthenticationAllowed((QDBusServer*)self, value);
}

bool q_dbusserver_is_anonymous_authentication_allowed(void* self) {
    return QDBusServer_IsAnonymousAuthenticationAllowed((QDBusServer*)self);
}

void q_dbusserver_new_connection(void* self, void* connection) {
    QDBusServer_NewConnection((QDBusServer*)self, (QDBusConnection*)connection);
}

void q_dbusserver_on_new_connection(void* self, void (*callback)(void*, void*)) {
    QDBusServer_Connect_NewConnection((QDBusServer*)self, (intptr_t)callback);
}

const char* q_dbusserver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusserver_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dbusserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dbusserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dbusserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dbusserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dbusserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dbusserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dbusserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dbusserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dbusserver_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dbusserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dbusserver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dbusserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dbusserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dbusserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dbusserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dbusserver_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_dbusserver_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dbusserver_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dbusserver_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_dbusserver_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dbusserver_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_dbusserver_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_dbusserver_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_dbusserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dbusserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dbusserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dbusserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dbusserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusserver_dynamic_property_names\n");
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

QBindingStorage* q_dbusserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dbusserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dbusserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dbusserver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dbusserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dbusserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dbusserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_dbusserver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dbusserver_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dbusserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_dbusserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dbusserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_dbusserver_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_dbusserver_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_dbusserver_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_dbusserver_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_dbusserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dbusserver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dbusserver_event(void* self, void* event) {
    return QDBusServer_Event((QDBusServer*)self, (QEvent*)event);
}

bool q_dbusserver_qbase_event(void* self, void* event) {
    return QDBusServer_QBaseEvent((QDBusServer*)self, (QEvent*)event);
}

void q_dbusserver_on_event(void* self, bool (*callback)(void*, void*)) {
    QDBusServer_OnEvent((QDBusServer*)self, (intptr_t)callback);
}

bool q_dbusserver_event_filter(void* self, void* watched, void* event) {
    return QDBusServer_EventFilter((QDBusServer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dbusserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QDBusServer_QBaseEventFilter((QDBusServer*)self, (QObject*)watched, (QEvent*)event);
}

void q_dbusserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDBusServer_OnEventFilter((QDBusServer*)self, (intptr_t)callback);
}

void q_dbusserver_timer_event(void* self, void* event) {
    QDBusServer_TimerEvent((QDBusServer*)self, (QTimerEvent*)event);
}

void q_dbusserver_qbase_timer_event(void* self, void* event) {
    QDBusServer_QBaseTimerEvent((QDBusServer*)self, (QTimerEvent*)event);
}

void q_dbusserver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDBusServer_OnTimerEvent((QDBusServer*)self, (intptr_t)callback);
}

void q_dbusserver_child_event(void* self, void* event) {
    QDBusServer_ChildEvent((QDBusServer*)self, (QChildEvent*)event);
}

void q_dbusserver_qbase_child_event(void* self, void* event) {
    QDBusServer_QBaseChildEvent((QDBusServer*)self, (QChildEvent*)event);
}

void q_dbusserver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDBusServer_OnChildEvent((QDBusServer*)self, (intptr_t)callback);
}

void q_dbusserver_custom_event(void* self, void* event) {
    QDBusServer_CustomEvent((QDBusServer*)self, (QEvent*)event);
}

void q_dbusserver_qbase_custom_event(void* self, void* event) {
    QDBusServer_QBaseCustomEvent((QDBusServer*)self, (QEvent*)event);
}

void q_dbusserver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDBusServer_OnCustomEvent((QDBusServer*)self, (intptr_t)callback);
}

void q_dbusserver_connect_notify(void* self, void* signal) {
    QDBusServer_ConnectNotify((QDBusServer*)self, (QMetaMethod*)signal);
}

void q_dbusserver_qbase_connect_notify(void* self, void* signal) {
    QDBusServer_QBaseConnectNotify((QDBusServer*)self, (QMetaMethod*)signal);
}

void q_dbusserver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusServer_OnConnectNotify((QDBusServer*)self, (intptr_t)callback);
}

void q_dbusserver_disconnect_notify(void* self, void* signal) {
    QDBusServer_DisconnectNotify((QDBusServer*)self, (QMetaMethod*)signal);
}

void q_dbusserver_qbase_disconnect_notify(void* self, void* signal) {
    QDBusServer_QBaseDisconnectNotify((QDBusServer*)self, (QMetaMethod*)signal);
}

void q_dbusserver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusServer_OnDisconnectNotify((QDBusServer*)self, (intptr_t)callback);
}

QObject* q_dbusserver_sender(void* self) {
    return QDBusServer_Sender((QDBusServer*)self);
}

QObject* q_dbusserver_qbase_sender(void* self) {
    return QDBusServer_QBaseSender((QDBusServer*)self);
}

void q_dbusserver_on_sender(void* self, QObject* (*callback)()) {
    QDBusServer_OnSender((QDBusServer*)self, (intptr_t)callback);
}

int32_t q_dbusserver_sender_signal_index(void* self) {
    return QDBusServer_SenderSignalIndex((QDBusServer*)self);
}

int32_t q_dbusserver_qbase_sender_signal_index(void* self) {
    return QDBusServer_QBaseSenderSignalIndex((QDBusServer*)self);
}

void q_dbusserver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDBusServer_OnSenderSignalIndex((QDBusServer*)self, (intptr_t)callback);
}

int32_t q_dbusserver_receivers(void* self, const char* signal) {
    return QDBusServer_Receivers((QDBusServer*)self, signal);
}

int32_t q_dbusserver_qbase_receivers(void* self, const char* signal) {
    return QDBusServer_QBaseReceivers((QDBusServer*)self, signal);
}

void q_dbusserver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDBusServer_OnReceivers((QDBusServer*)self, (intptr_t)callback);
}

bool q_dbusserver_is_signal_connected(void* self, void* signal) {
    return QDBusServer_IsSignalConnected((QDBusServer*)self, (QMetaMethod*)signal);
}

bool q_dbusserver_qbase_is_signal_connected(void* self, void* signal) {
    return QDBusServer_QBaseIsSignalConnected((QDBusServer*)self, (QMetaMethod*)signal);
}

void q_dbusserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDBusServer_OnIsSignalConnected((QDBusServer*)self, (intptr_t)callback);
}

void q_dbusserver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dbusserver_delete(void* self) {
    QDBusServer_Delete((QDBusServer*)(self));
}
