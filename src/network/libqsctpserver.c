#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsctpsocket.hpp"
#include "libqtcpserver.hpp"
#include "libqtcpsocket.hpp"
#include "libqsctpserver.hpp"
#include "libqsctpserver.h"

QSctpServer* q_sctpserver_new() {
    return QSctpServer_new();
}

QSctpServer* q_sctpserver_new2(void* parent) {
    return QSctpServer_new2((QObject*)parent);
}

const QMetaObject* q_sctpserver_meta_object(void* self) {
    return QSctpServer_MetaObject((QSctpServer*)self);
}

void* q_sctpserver_metacast(void* self, const char* param1) {
    return QSctpServer_Metacast((QSctpServer*)self, param1);
}

int32_t q_sctpserver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSctpServer_Metacall((QSctpServer*)self, param1, param2, param3);
}

void q_sctpserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSctpServer_OnMetacall((QSctpServer*)self, (intptr_t)callback);
}

int32_t q_sctpserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSctpServer_QBaseMetacall((QSctpServer*)self, param1, param2, param3);
}

const char* q_sctpserver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpserver_set_maximum_channel_count(void* self, int count) {
    QSctpServer_SetMaximumChannelCount((QSctpServer*)self, count);
}

int32_t q_sctpserver_maximum_channel_count(void* self) {
    return QSctpServer_MaximumChannelCount((QSctpServer*)self);
}

QSctpSocket* q_sctpserver_next_pending_datagram_connection(void* self) {
    return QSctpServer_NextPendingDatagramConnection((QSctpServer*)self);
}

void q_sctpserver_incoming_connection(void* self, intptr_t handle) {
    QSctpServer_IncomingConnection((QSctpServer*)self, handle);
}

void q_sctpserver_on_incoming_connection(void* self, void (*callback)(void*, intptr_t)) {
    QSctpServer_OnIncomingConnection((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_qbase_incoming_connection(void* self, intptr_t handle) {
    QSctpServer_QBaseIncomingConnection((QSctpServer*)self, handle);
}

const char* q_sctpserver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sctpserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sctpserver_listen(void* self) {
    return QTcpServer_Listen((QTcpServer*)self);
}

void q_sctpserver_close(void* self) {
    QTcpServer_Close((QTcpServer*)self);
}

bool q_sctpserver_is_listening(void* self) {
    return QTcpServer_IsListening((QTcpServer*)self);
}

void q_sctpserver_set_max_pending_connections(void* self, int numConnections) {
    QTcpServer_SetMaxPendingConnections((QTcpServer*)self, numConnections);
}

int32_t q_sctpserver_max_pending_connections(void* self) {
    return QTcpServer_MaxPendingConnections((QTcpServer*)self);
}

void q_sctpserver_set_listen_backlog_size(void* self, int size) {
    QTcpServer_SetListenBacklogSize((QTcpServer*)self, size);
}

int32_t q_sctpserver_listen_backlog_size(void* self) {
    return QTcpServer_ListenBacklogSize((QTcpServer*)self);
}

unsigned short q_sctpserver_server_port(void* self) {
    return QTcpServer_ServerPort((QTcpServer*)self);
}

QHostAddress* q_sctpserver_server_address(void* self) {
    return QTcpServer_ServerAddress((QTcpServer*)self);
}

intptr_t q_sctpserver_socket_descriptor(void* self) {
    return QTcpServer_SocketDescriptor((QTcpServer*)self);
}

bool q_sctpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QTcpServer_SetSocketDescriptor((QTcpServer*)self, socketDescriptor);
}

bool q_sctpserver_wait_for_new_connection(void* self) {
    return QTcpServer_WaitForNewConnection((QTcpServer*)self);
}

int32_t q_sctpserver_server_error(void* self) {
    return QTcpServer_ServerError((QTcpServer*)self);
}

const char* q_sctpserver_error_string(void* self) {
    libqt_string _str = QTcpServer_ErrorString((QTcpServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpserver_pause_accepting(void* self) {
    QTcpServer_PauseAccepting((QTcpServer*)self);
}

void q_sctpserver_resume_accepting(void* self) {
    QTcpServer_ResumeAccepting((QTcpServer*)self);
}

void q_sctpserver_set_proxy(void* self, void* networkProxy) {
    QTcpServer_SetProxy((QTcpServer*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_sctpserver_proxy(void* self) {
    return QTcpServer_Proxy((QTcpServer*)self);
}

void q_sctpserver_new_connection(void* self) {
    QTcpServer_NewConnection((QTcpServer*)self);
}

void q_sctpserver_on_new_connection(void* self, void (*callback)(void*)) {
    QTcpServer_Connect_NewConnection((QTcpServer*)self, (intptr_t)callback);
}

void q_sctpserver_accept_error(void* self, int32_t socketError) {
    QTcpServer_AcceptError((QTcpServer*)self, socketError);
}

void q_sctpserver_on_accept_error(void* self, void (*callback)(void*, int32_t)) {
    QTcpServer_Connect_AcceptError((QTcpServer*)self, (intptr_t)callback);
}

bool q_sctpserver_listen1(void* self, void* address) {
    return QTcpServer_Listen1((QTcpServer*)self, (QHostAddress*)address);
}

bool q_sctpserver_listen2(void* self, void* address, unsigned short port) {
    return QTcpServer_Listen2((QTcpServer*)self, (QHostAddress*)address, port);
}

bool q_sctpserver_wait_for_new_connection1(void* self, int msec) {
    return QTcpServer_WaitForNewConnection1((QTcpServer*)self, msec);
}

bool q_sctpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QTcpServer_WaitForNewConnection2((QTcpServer*)self, msec, (bool*)timedOut);
}

const char* q_sctpserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpserver_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sctpserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sctpserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sctpserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sctpserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sctpserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sctpserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sctpserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sctpserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sctpserver_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sctpserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sctpserver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sctpserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sctpserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sctpserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sctpserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sctpserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sctpserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sctpserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sctpserver_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sctpserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sctpserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sctpserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sctpserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sctpserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sctpserver_dynamic_property_names\n");
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

QBindingStorage* q_sctpserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sctpserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sctpserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sctpserver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sctpserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sctpserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sctpserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sctpserver_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sctpserver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sctpserver_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sctpserver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sctpserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sctpserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sctpserver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sctpserver_has_pending_connections(void* self) {
    return QSctpServer_HasPendingConnections((QSctpServer*)self);
}

bool q_sctpserver_qbase_has_pending_connections(void* self) {
    return QSctpServer_QBaseHasPendingConnections((QSctpServer*)self);
}

void q_sctpserver_on_has_pending_connections(void* self, bool (*callback)()) {
    QSctpServer_OnHasPendingConnections((QSctpServer*)self, (intptr_t)callback);
}

QTcpSocket* q_sctpserver_next_pending_connection(void* self) {
    return QSctpServer_NextPendingConnection((QSctpServer*)self);
}

QTcpSocket* q_sctpserver_qbase_next_pending_connection(void* self) {
    return QSctpServer_QBaseNextPendingConnection((QSctpServer*)self);
}

void q_sctpserver_on_next_pending_connection(void* self, QTcpSocket* (*callback)()) {
    QSctpServer_OnNextPendingConnection((QSctpServer*)self, (intptr_t)callback);
}

bool q_sctpserver_event(void* self, void* event) {
    return QSctpServer_Event((QSctpServer*)self, (QEvent*)event);
}

bool q_sctpserver_qbase_event(void* self, void* event) {
    return QSctpServer_QBaseEvent((QSctpServer*)self, (QEvent*)event);
}

void q_sctpserver_on_event(void* self, bool (*callback)(void*, void*)) {
    QSctpServer_OnEvent((QSctpServer*)self, (intptr_t)callback);
}

bool q_sctpserver_event_filter(void* self, void* watched, void* event) {
    return QSctpServer_EventFilter((QSctpServer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sctpserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QSctpServer_QBaseEventFilter((QSctpServer*)self, (QObject*)watched, (QEvent*)event);
}

void q_sctpserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSctpServer_OnEventFilter((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_timer_event(void* self, void* event) {
    QSctpServer_TimerEvent((QSctpServer*)self, (QTimerEvent*)event);
}

void q_sctpserver_qbase_timer_event(void* self, void* event) {
    QSctpServer_QBaseTimerEvent((QSctpServer*)self, (QTimerEvent*)event);
}

void q_sctpserver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSctpServer_OnTimerEvent((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_child_event(void* self, void* event) {
    QSctpServer_ChildEvent((QSctpServer*)self, (QChildEvent*)event);
}

void q_sctpserver_qbase_child_event(void* self, void* event) {
    QSctpServer_QBaseChildEvent((QSctpServer*)self, (QChildEvent*)event);
}

void q_sctpserver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSctpServer_OnChildEvent((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_custom_event(void* self, void* event) {
    QSctpServer_CustomEvent((QSctpServer*)self, (QEvent*)event);
}

void q_sctpserver_qbase_custom_event(void* self, void* event) {
    QSctpServer_QBaseCustomEvent((QSctpServer*)self, (QEvent*)event);
}

void q_sctpserver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSctpServer_OnCustomEvent((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_connect_notify(void* self, void* signal) {
    QSctpServer_ConnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

void q_sctpserver_qbase_connect_notify(void* self, void* signal) {
    QSctpServer_QBaseConnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

void q_sctpserver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSctpServer_OnConnectNotify((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_disconnect_notify(void* self, void* signal) {
    QSctpServer_DisconnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

void q_sctpserver_qbase_disconnect_notify(void* self, void* signal) {
    QSctpServer_QBaseDisconnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

void q_sctpserver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSctpServer_OnDisconnectNotify((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_add_pending_connection(void* self, void* socket) {
    QSctpServer_AddPendingConnection((QSctpServer*)self, (QTcpSocket*)socket);
}

void q_sctpserver_qbase_add_pending_connection(void* self, void* socket) {
    QSctpServer_QBaseAddPendingConnection((QSctpServer*)self, (QTcpSocket*)socket);
}

void q_sctpserver_on_add_pending_connection(void* self, void (*callback)(void*, void*)) {
    QSctpServer_OnAddPendingConnection((QSctpServer*)self, (intptr_t)callback);
}

QObject* q_sctpserver_sender(void* self) {
    return QSctpServer_Sender((QSctpServer*)self);
}

QObject* q_sctpserver_qbase_sender(void* self) {
    return QSctpServer_QBaseSender((QSctpServer*)self);
}

void q_sctpserver_on_sender(void* self, QObject* (*callback)()) {
    QSctpServer_OnSender((QSctpServer*)self, (intptr_t)callback);
}

int32_t q_sctpserver_sender_signal_index(void* self) {
    return QSctpServer_SenderSignalIndex((QSctpServer*)self);
}

int32_t q_sctpserver_qbase_sender_signal_index(void* self) {
    return QSctpServer_QBaseSenderSignalIndex((QSctpServer*)self);
}

void q_sctpserver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSctpServer_OnSenderSignalIndex((QSctpServer*)self, (intptr_t)callback);
}

int32_t q_sctpserver_receivers(void* self, const char* signal) {
    return QSctpServer_Receivers((QSctpServer*)self, signal);
}

int32_t q_sctpserver_qbase_receivers(void* self, const char* signal) {
    return QSctpServer_QBaseReceivers((QSctpServer*)self, signal);
}

void q_sctpserver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSctpServer_OnReceivers((QSctpServer*)self, (intptr_t)callback);
}

bool q_sctpserver_is_signal_connected(void* self, void* signal) {
    return QSctpServer_IsSignalConnected((QSctpServer*)self, (QMetaMethod*)signal);
}

bool q_sctpserver_qbase_is_signal_connected(void* self, void* signal) {
    return QSctpServer_QBaseIsSignalConnected((QSctpServer*)self, (QMetaMethod*)signal);
}

void q_sctpserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSctpServer_OnIsSignalConnected((QSctpServer*)self, (intptr_t)callback);
}

void q_sctpserver_on_pending_connection_available(void* self, void (*callback)(void*)) {
    QTcpServer_Connect_PendingConnectionAvailable((QTcpServer*)self, (intptr_t)callback);
}

void q_sctpserver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sctpserver_delete(void* self) {
    QSctpServer_Delete((QSctpServer*)(self));
}
