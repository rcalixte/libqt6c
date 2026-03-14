#include "libqbluetoothaddress.hpp"
#include "libqbluetoothserviceinfo.hpp"
#include "libqbluetoothsocket.hpp"
#include "libqbluetoothuuid.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqbluetoothserver.hpp"
#include "libqbluetoothserver.h"

QBluetoothServer* q_bluetoothserver_new(int32_t serverType) {
    return QBluetoothServer_new(serverType);
}

QBluetoothServer* q_bluetoothserver_new2(int32_t serverType, void* parent) {
    return QBluetoothServer_new2(serverType, (QObject*)parent);
}

const QMetaObject* q_bluetoothserver_meta_object(void* self) {
    return QBluetoothServer_MetaObject((QBluetoothServer*)self);
}

void q_bluetoothserver_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBluetoothServer_OnMetaObject((QBluetoothServer*)self, (intptr_t)callback);
}

const QMetaObject* q_bluetoothserver_super_meta_object(void* self) {
    return QBluetoothServer_SuperMetaObject((QBluetoothServer*)self);
}

void* q_bluetoothserver_metacast(void* self, const char* param1) {
    return QBluetoothServer_Metacast((QBluetoothServer*)self, param1);
}

void q_bluetoothserver_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBluetoothServer_OnMetacast((QBluetoothServer*)self, (intptr_t)callback);
}

void* q_bluetoothserver_super_metacast(void* self, const char* param1) {
    return QBluetoothServer_SuperMetacast((QBluetoothServer*)self, param1);
}

int32_t q_bluetoothserver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothServer_Metacall((QBluetoothServer*)self, param1, param2, param3);
}

void q_bluetoothserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBluetoothServer_OnMetacall((QBluetoothServer*)self, (intptr_t)callback);
}

int32_t q_bluetoothserver_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothServer_SuperMetacall((QBluetoothServer*)self, param1, param2, param3);
}

const char* q_bluetoothserver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothserver_close(void* self) {
    QBluetoothServer_Close((QBluetoothServer*)self);
}

bool q_bluetoothserver_listen(void* self) {
    return QBluetoothServer_Listen((QBluetoothServer*)self);
}

QBluetoothServiceInfo* q_bluetoothserver_listen2(void* self, void* uuid) {
    return QBluetoothServer_Listen2((QBluetoothServer*)self, (QBluetoothUuid*)uuid);
}

bool q_bluetoothserver_is_listening(void* self) {
    return QBluetoothServer_IsListening((QBluetoothServer*)self);
}

void q_bluetoothserver_set_max_pending_connections(void* self, int numConnections) {
    QBluetoothServer_SetMaxPendingConnections((QBluetoothServer*)self, numConnections);
}

int32_t q_bluetoothserver_max_pending_connections(void* self) {
    return QBluetoothServer_MaxPendingConnections((QBluetoothServer*)self);
}

bool q_bluetoothserver_has_pending_connections(void* self) {
    return QBluetoothServer_HasPendingConnections((QBluetoothServer*)self);
}

QBluetoothSocket* q_bluetoothserver_next_pending_connection(void* self) {
    return QBluetoothServer_NextPendingConnection((QBluetoothServer*)self);
}

QBluetoothAddress* q_bluetoothserver_server_address(void* self) {
    return QBluetoothServer_ServerAddress((QBluetoothServer*)self);
}

unsigned short q_bluetoothserver_server_port(void* self) {
    return QBluetoothServer_ServerPort((QBluetoothServer*)self);
}

void q_bluetoothserver_set_security_flags(void* self, int32_t security) {
    QBluetoothServer_SetSecurityFlags((QBluetoothServer*)self, security);
}

int32_t q_bluetoothserver_security_flags(void* self) {
    return QBluetoothServer_SecurityFlags((QBluetoothServer*)self);
}

int32_t q_bluetoothserver_server_type(void* self) {
    return QBluetoothServer_ServerType((QBluetoothServer*)self);
}

int32_t q_bluetoothserver_error(void* self) {
    return QBluetoothServer_Error((QBluetoothServer*)self);
}

void q_bluetoothserver_new_connection(void* self) {
    QBluetoothServer_NewConnection((QBluetoothServer*)self);
}

void q_bluetoothserver_on_new_connection(void* self, void (*callback)(void*)) {
    QBluetoothServer_Connect_NewConnection((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_error_occurred(void* self, int32_t error) {
    QBluetoothServer_ErrorOccurred((QBluetoothServer*)self, error);
}

void q_bluetoothserver_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothServer_Connect_ErrorOccurred((QBluetoothServer*)self, (intptr_t)callback);
}

const char* q_bluetoothserver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_bluetoothserver_listen1(void* self, void* address) {
    return QBluetoothServer_Listen1((QBluetoothServer*)self, (QBluetoothAddress*)address);
}

bool q_bluetoothserver_listen22(void* self, void* address, unsigned short port) {
    return QBluetoothServer_Listen22((QBluetoothServer*)self, (QBluetoothAddress*)address, port);
}

QBluetoothServiceInfo* q_bluetoothserver_listen23(void* self, void* uuid, const char* serviceName) {
    return QBluetoothServer_Listen23((QBluetoothServer*)self, (QBluetoothUuid*)uuid, qstring(serviceName));
}

const char* q_bluetoothserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothserver_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_bluetoothserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_bluetoothserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_bluetoothserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_bluetoothserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_bluetoothserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_bluetoothserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_bluetoothserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_bluetoothserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_bluetoothserver_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_bluetoothserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_bluetoothserver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_bluetoothserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_bluetoothserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_bluetoothserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_bluetoothserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_bluetoothserver_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_bluetoothserver_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_bluetoothserver_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_bluetoothserver_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_bluetoothserver_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_bluetoothserver_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_bluetoothserver_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_bluetoothserver_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_bluetoothserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_bluetoothserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_bluetoothserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_bluetoothserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_bluetoothserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bluetoothserver_dynamic_property_names\n");
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

QBindingStorage* q_bluetoothserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_bluetoothserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_bluetoothserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_bluetoothserver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_bluetoothserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_bluetoothserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_bluetoothserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_bluetoothserver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_bluetoothserver_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_bluetoothserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_bluetoothserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_bluetoothserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_bluetoothserver_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_bluetoothserver_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_bluetoothserver_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_bluetoothserver_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_bluetoothserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_bluetoothserver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_bluetoothserver_event(void* self, void* event) {
    return QBluetoothServer_Event((QBluetoothServer*)self, (QEvent*)event);
}

bool q_bluetoothserver_super_event(void* self, void* event) {
    return QBluetoothServer_SuperEvent((QBluetoothServer*)self, (QEvent*)event);
}

void q_bluetoothserver_on_event(void* self, bool (*callback)(void*, void*)) {
    QBluetoothServer_OnEvent((QBluetoothServer*)self, (intptr_t)callback);
}

bool q_bluetoothserver_event_filter(void* self, void* watched, void* event) {
    return QBluetoothServer_EventFilter((QBluetoothServer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_bluetoothserver_super_event_filter(void* self, void* watched, void* event) {
    return QBluetoothServer_SuperEventFilter((QBluetoothServer*)self, (QObject*)watched, (QEvent*)event);
}

void q_bluetoothserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBluetoothServer_OnEventFilter((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_timer_event(void* self, void* event) {
    QBluetoothServer_TimerEvent((QBluetoothServer*)self, (QTimerEvent*)event);
}

void q_bluetoothserver_super_timer_event(void* self, void* event) {
    QBluetoothServer_SuperTimerEvent((QBluetoothServer*)self, (QTimerEvent*)event);
}

void q_bluetoothserver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothServer_OnTimerEvent((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_child_event(void* self, void* event) {
    QBluetoothServer_ChildEvent((QBluetoothServer*)self, (QChildEvent*)event);
}

void q_bluetoothserver_super_child_event(void* self, void* event) {
    QBluetoothServer_SuperChildEvent((QBluetoothServer*)self, (QChildEvent*)event);
}

void q_bluetoothserver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothServer_OnChildEvent((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_custom_event(void* self, void* event) {
    QBluetoothServer_CustomEvent((QBluetoothServer*)self, (QEvent*)event);
}

void q_bluetoothserver_super_custom_event(void* self, void* event) {
    QBluetoothServer_SuperCustomEvent((QBluetoothServer*)self, (QEvent*)event);
}

void q_bluetoothserver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothServer_OnCustomEvent((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_connect_notify(void* self, void* signal) {
    QBluetoothServer_ConnectNotify((QBluetoothServer*)self, (QMetaMethod*)signal);
}

void q_bluetoothserver_super_connect_notify(void* self, void* signal) {
    QBluetoothServer_SuperConnectNotify((QBluetoothServer*)self, (QMetaMethod*)signal);
}

void q_bluetoothserver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothServer_OnConnectNotify((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_disconnect_notify(void* self, void* signal) {
    QBluetoothServer_DisconnectNotify((QBluetoothServer*)self, (QMetaMethod*)signal);
}

void q_bluetoothserver_super_disconnect_notify(void* self, void* signal) {
    QBluetoothServer_SuperDisconnectNotify((QBluetoothServer*)self, (QMetaMethod*)signal);
}

void q_bluetoothserver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothServer_OnDisconnectNotify((QBluetoothServer*)self, (intptr_t)callback);
}

QObject* q_bluetoothserver_sender(void* self) {
    return QBluetoothServer_Sender((QBluetoothServer*)self);
}

QObject* q_bluetoothserver_super_sender(void* self) {
    return QBluetoothServer_SuperSender((QBluetoothServer*)self);
}

void q_bluetoothserver_on_sender(void* self, QObject* (*callback)()) {
    QBluetoothServer_OnSender((QBluetoothServer*)self, (intptr_t)callback);
}

int32_t q_bluetoothserver_sender_signal_index(void* self) {
    return QBluetoothServer_SenderSignalIndex((QBluetoothServer*)self);
}

int32_t q_bluetoothserver_super_sender_signal_index(void* self) {
    return QBluetoothServer_SuperSenderSignalIndex((QBluetoothServer*)self);
}

void q_bluetoothserver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBluetoothServer_OnSenderSignalIndex((QBluetoothServer*)self, (intptr_t)callback);
}

int32_t q_bluetoothserver_receivers(void* self, const char* signal) {
    return QBluetoothServer_Receivers((QBluetoothServer*)self, signal);
}

int32_t q_bluetoothserver_super_receivers(void* self, const char* signal) {
    return QBluetoothServer_SuperReceivers((QBluetoothServer*)self, signal);
}

void q_bluetoothserver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBluetoothServer_OnReceivers((QBluetoothServer*)self, (intptr_t)callback);
}

bool q_bluetoothserver_is_signal_connected(void* self, void* signal) {
    return QBluetoothServer_IsSignalConnected((QBluetoothServer*)self, (QMetaMethod*)signal);
}

bool q_bluetoothserver_super_is_signal_connected(void* self, void* signal) {
    return QBluetoothServer_SuperIsSignalConnected((QBluetoothServer*)self, (QMetaMethod*)signal);
}

void q_bluetoothserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBluetoothServer_OnIsSignalConnected((QBluetoothServer*)self, (intptr_t)callback);
}

void q_bluetoothserver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_bluetoothserver_delete(void* self) {
    QBluetoothServer_Delete((QBluetoothServer*)(self));
}
