#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include "libqsctpsocket.hpp"
#include <string.h>
#include "libqtcpserver.hpp"
#include "libqtcpsocket.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsctpserver.hpp"
#include "libqsctpserver.h"

/// https://doc.qt.io/qt-6/qsctpserver.html

/// q_sctpserver_new constructs a new QSctpServer object.
///
///
QSctpServer* q_sctpserver_new() {
    return QSctpServer_new();
}

/// q_sctpserver_new2 constructs a new QSctpServer object.
///
/// ``` QObject* parent ```
QSctpServer* q_sctpserver_new2(void* parent) {
    return QSctpServer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSctpServer* self ```
QMetaObject* q_sctpserver_meta_object(void* self) {
    return QSctpServer_MetaObject((QSctpServer*)self);
}

/// ``` QSctpServer* self, const char* param1 ```
void* q_sctpserver_metacast(void* self, const char* param1) {
    return QSctpServer_Metacast((QSctpServer*)self, param1);
}

/// ``` QSctpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sctpserver_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSctpServer_Metacall((QSctpServer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSctpServer* self, int32_t (*slot)(QSctpServer*, enum QMetaObject__Call, int, void*) ```
void q_sctpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSctpServer_OnMetacall((QSctpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sctpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSctpServer_QBaseMetacall((QSctpServer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sctpserver_tr(const char* s) {
    libqt_string _str = QSctpServer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
///
/// ``` QSctpServer* self, int count ```
void q_sctpserver_set_maximum_channel_count(void* self, int count) {
    QSctpServer_SetMaximumChannelCount((QSctpServer*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_maximum_channel_count(void* self) {
    return QSctpServer_MaximumChannelCount((QSctpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
///
/// ``` QSctpServer* self ```
QSctpSocket* q_sctpserver_next_pending_datagram_connection(void* self) {
    return QSctpServer_NextPendingDatagramConnection((QSctpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// ``` QSctpServer* self, intptr_t handle ```
void q_sctpserver_incoming_connection(void* self, intptr_t handle) {
    QSctpServer_IncomingConnection((QSctpServer*)self, handle);
}

/// Allows for overriding the related default method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, intptr_t) ```
void q_sctpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t)) {
    QSctpServer_OnIncomingConnection((QSctpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpServer* self, intptr_t handle ```
void q_sctpserver_qbase_incoming_connection(void* self, intptr_t handle) {
    QSctpServer_QBaseIncomingConnection((QSctpServer*)self, handle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sctpserver_tr2(const char* s, const char* c) {
    libqt_string _str = QSctpServer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sctpserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSctpServer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_listen(void* self) {
    return QTcpServer_Listen((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// ``` QSctpServer* self ```
void q_sctpserver_close(void* self) {
    QTcpServer_Close((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_listening(void* self) {
    return QTcpServer_IsListening((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// ``` QSctpServer* self, int numConnections ```
void q_sctpserver_set_max_pending_connections(void* self, int numConnections) {
    QTcpServer_SetMaxPendingConnections((QTcpServer*)self, numConnections);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_max_pending_connections(void* self) {
    return QTcpServer_MaxPendingConnections((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// ``` QSctpServer* self, int size ```
void q_sctpserver_set_listen_backlog_size(void* self, int size) {
    QTcpServer_SetListenBacklogSize((QTcpServer*)self, size);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_listen_backlog_size(void* self) {
    return QTcpServer_ListenBacklogSize((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// ``` QSctpServer* self ```
unsigned short q_sctpserver_server_port(void* self) {
    return QTcpServer_ServerPort((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// ``` QSctpServer* self ```
QHostAddress* q_sctpserver_server_address(void* self) {
    return QTcpServer_ServerAddress((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// ``` QSctpServer* self ```
intptr_t q_sctpserver_socket_descriptor(void* self) {
    return QTcpServer_SocketDescriptor((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// ``` QSctpServer* self, intptr_t socketDescriptor ```
bool q_sctpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QTcpServer_SetSocketDescriptor((QTcpServer*)self, socketDescriptor);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_wait_for_new_connection(void* self) {
    return QTcpServer_WaitForNewConnection((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// ``` QSctpServer* self ```
int64_t q_sctpserver_server_error(void* self) {
    return QTcpServer_ServerError((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// ``` QSctpServer* self ```
const char* q_sctpserver_error_string(void* self) {
    libqt_string _str = QTcpServer_ErrorString((QTcpServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// ``` QSctpServer* self ```
void q_sctpserver_pause_accepting(void* self) {
    QTcpServer_PauseAccepting((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// ``` QSctpServer* self ```
void q_sctpserver_resume_accepting(void* self) {
    QTcpServer_ResumeAccepting((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// ``` QSctpServer* self, QNetworkProxy* networkProxy ```
void q_sctpserver_set_proxy(void* self, void* networkProxy) {
    QTcpServer_SetProxy((QTcpServer*)self, (QNetworkProxy*)networkProxy);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// ``` QSctpServer* self ```
QNetworkProxy* q_sctpserver_proxy(void* self) {
    return QTcpServer_Proxy((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QSctpServer* self ```
void q_sctpserver_new_connection(void* self) {
    QTcpServer_NewConnection((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// ``` QSctpServer* self, void (*slot)(QTcpServer*) ```
void q_sctpserver_on_new_connection(void* self, void (*slot)(void*)) {
    QTcpServer_Connect_NewConnection((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QSctpServer* self, enum QAbstractSocket__SocketError socketError ```
void q_sctpserver_accept_error(void* self, int64_t socketError) {
    QTcpServer_AcceptError((QTcpServer*)self, socketError);
}

/// Inherited from QTcpServer
///
/// ``` QSctpServer* self, void (*slot)(QTcpServer*, enum QAbstractSocket__SocketError) ```
void q_sctpserver_on_accept_error(void* self, void (*slot)(void*, int64_t)) {
    QTcpServer_Connect_AcceptError((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSctpServer* self, QHostAddress* address ```
bool q_sctpserver_listen1(void* self, void* address) {
    return QTcpServer_Listen1((QTcpServer*)self, (QHostAddress*)address);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSctpServer* self, QHostAddress* address, unsigned short port ```
bool q_sctpserver_listen2(void* self, void* address, unsigned short port) {
    return QTcpServer_Listen2((QTcpServer*)self, (QHostAddress*)address, port);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSctpServer* self, int msec ```
bool q_sctpserver_wait_for_new_connection1(void* self, int msec) {
    return QTcpServer_WaitForNewConnection1((QTcpServer*)self, msec);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSctpServer* self, int msec, bool* timedOut ```
bool q_sctpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QTcpServer_WaitForNewConnection2((QTcpServer*)self, msec, (bool*)timedOut);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSctpServer* self ```
const char* q_sctpserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSctpServer* self, const char* name ```
void q_sctpserver_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSctpServer* self, bool b ```
bool q_sctpserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSctpServer* self ```
QThread* q_sctpserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSctpServer* self, QThread* thread ```
void q_sctpserver_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSctpServer* self, int interval ```
int32_t q_sctpserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSctpServer* self, int id ```
void q_sctpserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSctpServer* self ```
libqt_list /* of QObject* */ q_sctpserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSctpServer* self, QObject* parent ```
void q_sctpserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSctpServer* self, QObject* filterObj ```
void q_sctpserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSctpServer* self, QObject* obj ```
void q_sctpserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sctpserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSctpServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sctpserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sctpserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sctpserver_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSctpServer* self ```
void q_sctpserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSctpServer* self ```
void q_sctpserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSctpServer* self, const char* name, QVariant* value ```
bool q_sctpserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSctpServer* self, const char* name ```
QVariant* q_sctpserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSctpServer* self ```
const char** q_sctpserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSctpServer* self ```
QBindingStorage* q_sctpserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSctpServer* self ```
QBindingStorage* q_sctpserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpServer* self ```
void q_sctpserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSctpServer* self, void (*slot)(QObject*) ```
void q_sctpserver_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSctpServer* self ```
QObject* q_sctpserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSctpServer* self, const char* classname ```
bool q_sctpserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSctpServer* self ```
void q_sctpserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSctpServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sctpserver_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sctpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSctpServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sctpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpServer* self, QObject* param1 ```
void q_sctpserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSctpServer* self, void (*slot)(QObject*, QObject*) ```
void q_sctpserver_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
bool q_sctpserver_has_pending_connections(void* self) {
    return QSctpServer_HasPendingConnections((QSctpServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
bool q_sctpserver_qbase_has_pending_connections(void* self) {
    return QSctpServer_QBaseHasPendingConnections((QSctpServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)() ```
void q_sctpserver_on_has_pending_connections(void* self, bool (*slot)()) {
    QSctpServer_OnHasPendingConnections((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
QTcpSocket* q_sctpserver_next_pending_connection(void* self) {
    return QSctpServer_NextPendingConnection((QSctpServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
QTcpSocket* q_sctpserver_qbase_next_pending_connection(void* self) {
    return QSctpServer_QBaseNextPendingConnection((QSctpServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, QTcpSocket* (*slot)() ```
void q_sctpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)()) {
    QSctpServer_OnNextPendingConnection((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
bool q_sctpserver_event(void* self, void* event) {
    return QSctpServer_Event((QSctpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
bool q_sctpserver_qbase_event(void* self, void* event) {
    return QSctpServer_QBaseEvent((QSctpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)(QSctpServer*, QEvent*) ```
void q_sctpserver_on_event(void* self, bool (*slot)(void*, void*)) {
    QSctpServer_OnEvent((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QObject* watched, QEvent* event ```
bool q_sctpserver_event_filter(void* self, void* watched, void* event) {
    return QSctpServer_EventFilter((QSctpServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QObject* watched, QEvent* event ```
bool q_sctpserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QSctpServer_QBaseEventFilter((QSctpServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)(QSctpServer*, QObject*, QEvent*) ```
void q_sctpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSctpServer_OnEventFilter((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QTimerEvent* event ```
void q_sctpserver_timer_event(void* self, void* event) {
    QSctpServer_TimerEvent((QSctpServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QTimerEvent* event ```
void q_sctpserver_qbase_timer_event(void* self, void* event) {
    QSctpServer_QBaseTimerEvent((QSctpServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QTimerEvent*) ```
void q_sctpserver_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSctpServer_OnTimerEvent((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QChildEvent* event ```
void q_sctpserver_child_event(void* self, void* event) {
    QSctpServer_ChildEvent((QSctpServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QChildEvent* event ```
void q_sctpserver_qbase_child_event(void* self, void* event) {
    QSctpServer_QBaseChildEvent((QSctpServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QChildEvent*) ```
void q_sctpserver_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSctpServer_OnChildEvent((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
void q_sctpserver_custom_event(void* self, void* event) {
    QSctpServer_CustomEvent((QSctpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
void q_sctpserver_qbase_custom_event(void* self, void* event) {
    QSctpServer_QBaseCustomEvent((QSctpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QEvent*) ```
void q_sctpserver_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSctpServer_OnCustomEvent((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_connect_notify(void* self, void* signal) {
    QSctpServer_ConnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_qbase_connect_notify(void* self, void* signal) {
    QSctpServer_QBaseConnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QMetaMethod*) ```
void q_sctpserver_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSctpServer_OnConnectNotify((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_disconnect_notify(void* self, void* signal) {
    QSctpServer_DisconnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_qbase_disconnect_notify(void* self, void* signal) {
    QSctpServer_QBaseDisconnectNotify((QSctpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QMetaMethod*) ```
void q_sctpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSctpServer_OnDisconnectNotify((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QTcpSocket* socket ```
void q_sctpserver_add_pending_connection(void* self, void* socket) {
    QSctpServer_AddPendingConnection((QSctpServer*)self, (QTcpSocket*)socket);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QTcpSocket* socket ```
void q_sctpserver_qbase_add_pending_connection(void* self, void* socket) {
    QSctpServer_QBaseAddPendingConnection((QSctpServer*)self, (QTcpSocket*)socket);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QTcpSocket*) ```
void q_sctpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*)) {
    QSctpServer_OnAddPendingConnection((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
QObject* q_sctpserver_sender(void* self) {
    return QSctpServer_Sender((QSctpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
QObject* q_sctpserver_qbase_sender(void* self) {
    return QSctpServer_QBaseSender((QSctpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, QObject* (*slot)() ```
void q_sctpserver_on_sender(void* self, QObject* (*slot)()) {
    QSctpServer_OnSender((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_sender_signal_index(void* self) {
    return QSctpServer_SenderSignalIndex((QSctpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_qbase_sender_signal_index(void* self) {
    return QSctpServer_QBaseSenderSignalIndex((QSctpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, int32_t (*slot)() ```
void q_sctpserver_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSctpServer_OnSenderSignalIndex((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, const char* signal ```
int32_t q_sctpserver_receivers(void* self, const char* signal) {
    return QSctpServer_Receivers((QSctpServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, const char* signal ```
int32_t q_sctpserver_qbase_receivers(void* self, const char* signal) {
    return QSctpServer_QBaseReceivers((QSctpServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, int32_t (*slot)(QSctpServer*, const char*) ```
void q_sctpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSctpServer_OnReceivers((QSctpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
bool q_sctpserver_is_signal_connected(void* self, void* signal) {
    return QSctpServer_IsSignalConnected((QSctpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
bool q_sctpserver_qbase_is_signal_connected(void* self, void* signal) {
    return QSctpServer_QBaseIsSignalConnected((QSctpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)(QSctpServer*, QMetaMethod*) ```
void q_sctpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSctpServer_OnIsSignalConnected((QSctpServer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSctpServer* self ```
void q_sctpserver_delete(void* self) {
    QSctpServer_Delete((QSctpServer*)(self));
}