#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "libqtcpsocket.hpp"
#include "../libqcoreevent.hpp"
#include "libqtcpserver.hpp"
#include "libqtcpserver.h"

QTcpServer* q_tcpserver_new() {
    return QTcpServer_new();
}

QTcpServer* q_tcpserver_new2(void* parent) {
    return QTcpServer_new2((QObject*)parent);
}

const QMetaObject* q_tcpserver_meta_object(void* self) {
    return QTcpServer_MetaObject((QTcpServer*)self);
}

void* q_tcpserver_metacast(void* self, const char* param1) {
    return QTcpServer_Metacast((QTcpServer*)self, param1);
}

int32_t q_tcpserver_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpServer_Metacall((QTcpServer*)self, param1, param2, param3);
}

void q_tcpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTcpServer_OnMetacall((QTcpServer*)self, (intptr_t)slot);
}

int32_t q_tcpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpServer_QBaseMetacall((QTcpServer*)self, param1, param2, param3);
}

const char* q_tcpserver_tr(const char* s) {
    libqt_string _str = QTcpServer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tcpserver_listen(void* self) {
    return QTcpServer_Listen((QTcpServer*)self);
}

void q_tcpserver_close(void* self) {
    QTcpServer_Close((QTcpServer*)self);
}

bool q_tcpserver_is_listening(void* self) {
    return QTcpServer_IsListening((QTcpServer*)self);
}

void q_tcpserver_set_max_pending_connections(void* self, int numConnections) {
    QTcpServer_SetMaxPendingConnections((QTcpServer*)self, numConnections);
}

int32_t q_tcpserver_max_pending_connections(void* self) {
    return QTcpServer_MaxPendingConnections((QTcpServer*)self);
}

void q_tcpserver_set_listen_backlog_size(void* self, int size) {
    QTcpServer_SetListenBacklogSize((QTcpServer*)self, size);
}

int32_t q_tcpserver_listen_backlog_size(void* self) {
    return QTcpServer_ListenBacklogSize((QTcpServer*)self);
}

unsigned short q_tcpserver_server_port(void* self) {
    return QTcpServer_ServerPort((QTcpServer*)self);
}

QHostAddress* q_tcpserver_server_address(void* self) {
    return QTcpServer_ServerAddress((QTcpServer*)self);
}

intptr_t q_tcpserver_socket_descriptor(void* self) {
    return QTcpServer_SocketDescriptor((QTcpServer*)self);
}

bool q_tcpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QTcpServer_SetSocketDescriptor((QTcpServer*)self, socketDescriptor);
}

bool q_tcpserver_wait_for_new_connection(void* self) {
    return QTcpServer_WaitForNewConnection((QTcpServer*)self);
}

bool q_tcpserver_has_pending_connections(void* self) {
    return QTcpServer_HasPendingConnections((QTcpServer*)self);
}

void q_tcpserver_on_has_pending_connections(void* self, bool (*slot)()) {
    QTcpServer_OnHasPendingConnections((QTcpServer*)self, (intptr_t)slot);
}

bool q_tcpserver_qbase_has_pending_connections(void* self) {
    return QTcpServer_QBaseHasPendingConnections((QTcpServer*)self);
}

QTcpSocket* q_tcpserver_next_pending_connection(void* self) {
    return QTcpServer_NextPendingConnection((QTcpServer*)self);
}

void q_tcpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)()) {
    QTcpServer_OnNextPendingConnection((QTcpServer*)self, (intptr_t)slot);
}

QTcpSocket* q_tcpserver_qbase_next_pending_connection(void* self) {
    return QTcpServer_QBaseNextPendingConnection((QTcpServer*)self);
}

int64_t q_tcpserver_server_error(void* self) {
    return QTcpServer_ServerError((QTcpServer*)self);
}

const char* q_tcpserver_error_string(void* self) {
    libqt_string _str = QTcpServer_ErrorString((QTcpServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tcpserver_pause_accepting(void* self) {
    QTcpServer_PauseAccepting((QTcpServer*)self);
}

void q_tcpserver_resume_accepting(void* self) {
    QTcpServer_ResumeAccepting((QTcpServer*)self);
}

void q_tcpserver_set_proxy(void* self, void* networkProxy) {
    QTcpServer_SetProxy((QTcpServer*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_tcpserver_proxy(void* self) {
    return QTcpServer_Proxy((QTcpServer*)self);
}

void q_tcpserver_incoming_connection(void* self, intptr_t handle) {
    QTcpServer_IncomingConnection((QTcpServer*)self, handle);
}

void q_tcpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t)) {
    QTcpServer_OnIncomingConnection((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_qbase_incoming_connection(void* self, intptr_t handle) {
    QTcpServer_QBaseIncomingConnection((QTcpServer*)self, handle);
}

void q_tcpserver_add_pending_connection(void* self, void* socket) {
    QTcpServer_AddPendingConnection((QTcpServer*)self, (QTcpSocket*)socket);
}

void q_tcpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnAddPendingConnection((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_qbase_add_pending_connection(void* self, void* socket) {
    QTcpServer_QBaseAddPendingConnection((QTcpServer*)self, (QTcpSocket*)socket);
}

void q_tcpserver_new_connection(void* self) {
    QTcpServer_NewConnection((QTcpServer*)self);
}

void q_tcpserver_on_new_connection(void* self, void (*slot)(void*)) {
    QTcpServer_Connect_NewConnection((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_accept_error(void* self, int64_t socketError) {
    QTcpServer_AcceptError((QTcpServer*)self, socketError);
}

void q_tcpserver_on_accept_error(void* self, void (*slot)(void*, int64_t)) {
    QTcpServer_Connect_AcceptError((QTcpServer*)self, (intptr_t)slot);
}

const char* q_tcpserver_tr2(const char* s, const char* c) {
    libqt_string _str = QTcpServer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tcpserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTcpServer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tcpserver_listen1(void* self, void* address) {
    return QTcpServer_Listen1((QTcpServer*)self, (QHostAddress*)address);
}

bool q_tcpserver_listen2(void* self, void* address, unsigned short port) {
    return QTcpServer_Listen2((QTcpServer*)self, (QHostAddress*)address, port);
}

bool q_tcpserver_wait_for_new_connection1(void* self, int msec) {
    return QTcpServer_WaitForNewConnection1((QTcpServer*)self, msec);
}

bool q_tcpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QTcpServer_WaitForNewConnection2((QTcpServer*)self, msec, (bool*)timedOut);
}

const char* q_tcpserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tcpserver_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_tcpserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tcpserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tcpserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tcpserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tcpserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tcpserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_tcpserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tcpserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_tcpserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_tcpserver_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tcpserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tcpserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_tcpserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tcpserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tcpserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tcpserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tcpserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tcpserver_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_tcpserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tcpserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tcpserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tcpserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tcpserver_dynamic_property_names(void* self) {
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

QBindingStorage* q_tcpserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_tcpserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tcpserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tcpserver_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_tcpserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tcpserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tcpserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_tcpserver_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_tcpserver_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_tcpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_tcpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_tcpserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tcpserver_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_tcpserver_event(void* self, void* event) {
    return QTcpServer_Event((QTcpServer*)self, (QEvent*)event);
}

bool q_tcpserver_qbase_event(void* self, void* event) {
    return QTcpServer_QBaseEvent((QTcpServer*)self, (QEvent*)event);
}

void q_tcpserver_on_event(void* self, bool (*slot)(void*, void*)) {
    QTcpServer_OnEvent((QTcpServer*)self, (intptr_t)slot);
}

bool q_tcpserver_event_filter(void* self, void* watched, void* event) {
    return QTcpServer_EventFilter((QTcpServer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_tcpserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QTcpServer_QBaseEventFilter((QTcpServer*)self, (QObject*)watched, (QEvent*)event);
}

void q_tcpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTcpServer_OnEventFilter((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_timer_event(void* self, void* event) {
    QTcpServer_TimerEvent((QTcpServer*)self, (QTimerEvent*)event);
}

void q_tcpserver_qbase_timer_event(void* self, void* event) {
    QTcpServer_QBaseTimerEvent((QTcpServer*)self, (QTimerEvent*)event);
}

void q_tcpserver_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnTimerEvent((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_child_event(void* self, void* event) {
    QTcpServer_ChildEvent((QTcpServer*)self, (QChildEvent*)event);
}

void q_tcpserver_qbase_child_event(void* self, void* event) {
    QTcpServer_QBaseChildEvent((QTcpServer*)self, (QChildEvent*)event);
}

void q_tcpserver_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnChildEvent((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_custom_event(void* self, void* event) {
    QTcpServer_CustomEvent((QTcpServer*)self, (QEvent*)event);
}

void q_tcpserver_qbase_custom_event(void* self, void* event) {
    QTcpServer_QBaseCustomEvent((QTcpServer*)self, (QEvent*)event);
}

void q_tcpserver_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnCustomEvent((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_connect_notify(void* self, void* signal) {
    QTcpServer_ConnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

void q_tcpserver_qbase_connect_notify(void* self, void* signal) {
    QTcpServer_QBaseConnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

void q_tcpserver_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnConnectNotify((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_disconnect_notify(void* self, void* signal) {
    QTcpServer_DisconnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

void q_tcpserver_qbase_disconnect_notify(void* self, void* signal) {
    QTcpServer_QBaseDisconnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

void q_tcpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnDisconnectNotify((QTcpServer*)self, (intptr_t)slot);
}

QObject* q_tcpserver_sender(void* self) {
    return QTcpServer_Sender((QTcpServer*)self);
}

QObject* q_tcpserver_qbase_sender(void* self) {
    return QTcpServer_QBaseSender((QTcpServer*)self);
}

void q_tcpserver_on_sender(void* self, QObject* (*slot)()) {
    QTcpServer_OnSender((QTcpServer*)self, (intptr_t)slot);
}

int32_t q_tcpserver_sender_signal_index(void* self) {
    return QTcpServer_SenderSignalIndex((QTcpServer*)self);
}

int32_t q_tcpserver_qbase_sender_signal_index(void* self) {
    return QTcpServer_QBaseSenderSignalIndex((QTcpServer*)self);
}

void q_tcpserver_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTcpServer_OnSenderSignalIndex((QTcpServer*)self, (intptr_t)slot);
}

int32_t q_tcpserver_receivers(void* self, const char* signal) {
    return QTcpServer_Receivers((QTcpServer*)self, signal);
}

int32_t q_tcpserver_qbase_receivers(void* self, const char* signal) {
    return QTcpServer_QBaseReceivers((QTcpServer*)self, signal);
}

void q_tcpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTcpServer_OnReceivers((QTcpServer*)self, (intptr_t)slot);
}

bool q_tcpserver_is_signal_connected(void* self, void* signal) {
    return QTcpServer_IsSignalConnected((QTcpServer*)self, (QMetaMethod*)signal);
}

bool q_tcpserver_qbase_is_signal_connected(void* self, void* signal) {
    return QTcpServer_QBaseIsSignalConnected((QTcpServer*)self, (QMetaMethod*)signal);
}

void q_tcpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTcpServer_OnIsSignalConnected((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_on_pending_connection_available(void* self, void (*slot)(void*)) {
    QTcpServer_Connect_PendingConnectionAvailable((QTcpServer*)self, (intptr_t)slot);
}

void q_tcpserver_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_tcpserver_delete(void* self) {
    QTcpServer_Delete((QTcpServer*)(self));
}
