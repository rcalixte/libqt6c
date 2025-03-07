#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "libqtcpsocket.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqtcpserver.hpp"
#include "libqtcpserver.h"

/// https://doc.qt.io/qt-6/qtcpserver.html

/// q_tcpserver_new constructs a new QTcpServer object.
///
///
QTcpServer* q_tcpserver_new() {
    return QTcpServer_new();
}

/// q_tcpserver_new2 constructs a new QTcpServer object.
///
/// ``` QObject* parent ```
QTcpServer* q_tcpserver_new2(void* parent) {
    return QTcpServer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTcpServer* self ```
QMetaObject* q_tcpserver_meta_object(void* self) {
    return QTcpServer_MetaObject((QTcpServer*)self);
}

/// ``` QTcpServer* self, const char* param1 ```
void* q_tcpserver_metacast(void* self, const char* param1) {
    return QTcpServer_Metacast((QTcpServer*)self, param1);
}

/// ``` QTcpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpserver_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpServer_Metacall((QTcpServer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, int32_t (*slot)(QTcpServer*, enum QMetaObject__Call, int, void*) ```
void q_tcpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTcpServer_OnMetacall((QTcpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTcpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpServer_QBaseMetacall((QTcpServer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tcpserver_tr(const char* s) {
    libqt_string _str = QTcpServer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_listen(void* self) {
    return QTcpServer_Listen((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// ``` QTcpServer* self ```
void q_tcpserver_close(void* self) {
    QTcpServer_Close((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_listening(void* self) {
    return QTcpServer_IsListening((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// ``` QTcpServer* self, int numConnections ```
void q_tcpserver_set_max_pending_connections(void* self, int numConnections) {
    QTcpServer_SetMaxPendingConnections((QTcpServer*)self, numConnections);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_max_pending_connections(void* self) {
    return QTcpServer_MaxPendingConnections((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// ``` QTcpServer* self, int size ```
void q_tcpserver_set_listen_backlog_size(void* self, int size) {
    QTcpServer_SetListenBacklogSize((QTcpServer*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_listen_backlog_size(void* self) {
    return QTcpServer_ListenBacklogSize((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// ``` QTcpServer* self ```
unsigned short q_tcpserver_server_port(void* self) {
    return QTcpServer_ServerPort((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// ``` QTcpServer* self ```
QHostAddress* q_tcpserver_server_address(void* self) {
    return QTcpServer_ServerAddress((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// ``` QTcpServer* self ```
intptr_t q_tcpserver_socket_descriptor(void* self) {
    return QTcpServer_SocketDescriptor((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// ``` QTcpServer* self, intptr_t socketDescriptor ```
bool q_tcpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QTcpServer_SetSocketDescriptor((QTcpServer*)self, socketDescriptor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_wait_for_new_connection(void* self) {
    return QTcpServer_WaitForNewConnection((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_has_pending_connections(void* self) {
    return QTcpServer_HasPendingConnections((QTcpServer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, bool (*slot)() ```
void q_tcpserver_on_has_pending_connections(void* self, bool (*slot)()) {
    QTcpServer_OnHasPendingConnections((QTcpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTcpServer* self ```
bool q_tcpserver_qbase_has_pending_connections(void* self) {
    return QTcpServer_QBaseHasPendingConnections((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// ``` QTcpServer* self ```
QTcpSocket* q_tcpserver_next_pending_connection(void* self) {
    return QTcpServer_NextPendingConnection((QTcpServer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, QTcpSocket* (*slot)() ```
void q_tcpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)()) {
    QTcpServer_OnNextPendingConnection((QTcpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTcpServer* self ```
QTcpSocket* q_tcpserver_qbase_next_pending_connection(void* self) {
    return QTcpServer_QBaseNextPendingConnection((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// ``` QTcpServer* self ```
int64_t q_tcpserver_server_error(void* self) {
    return QTcpServer_ServerError((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// ``` QTcpServer* self ```
const char* q_tcpserver_error_string(void* self) {
    libqt_string _str = QTcpServer_ErrorString((QTcpServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// ``` QTcpServer* self ```
void q_tcpserver_pause_accepting(void* self) {
    QTcpServer_PauseAccepting((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// ``` QTcpServer* self ```
void q_tcpserver_resume_accepting(void* self) {
    QTcpServer_ResumeAccepting((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// ``` QTcpServer* self, QNetworkProxy* networkProxy ```
void q_tcpserver_set_proxy(void* self, void* networkProxy) {
    QTcpServer_SetProxy((QTcpServer*)self, (QNetworkProxy*)networkProxy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// ``` QTcpServer* self ```
QNetworkProxy* q_tcpserver_proxy(void* self) {
    return QTcpServer_Proxy((QTcpServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
///
/// ``` QTcpServer* self, intptr_t handle ```
void q_tcpserver_incoming_connection(void* self, intptr_t handle) {
    QTcpServer_IncomingConnection((QTcpServer*)self, handle);
}

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, intptr_t) ```
void q_tcpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t)) {
    QTcpServer_OnIncomingConnection((QTcpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTcpServer* self, intptr_t handle ```
void q_tcpserver_qbase_incoming_connection(void* self, intptr_t handle) {
    QTcpServer_QBaseIncomingConnection((QTcpServer*)self, handle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// ``` QTcpServer* self, QTcpSocket* socket ```
void q_tcpserver_add_pending_connection(void* self, void* socket) {
    QTcpServer_AddPendingConnection((QTcpServer*)self, (QTcpSocket*)socket);
}

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QTcpSocket*) ```
void q_tcpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnAddPendingConnection((QTcpServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTcpServer* self, QTcpSocket* socket ```
void q_tcpserver_qbase_add_pending_connection(void* self, void* socket) {
    QTcpServer_QBaseAddPendingConnection((QTcpServer*)self, (QTcpSocket*)socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QTcpServer* self ```
void q_tcpserver_new_connection(void* self) {
    QTcpServer_NewConnection((QTcpServer*)self);
}

/// ``` QTcpServer* self, void (*slot)(QTcpServer*) ```
void q_tcpserver_on_new_connection(void* self, void (*slot)(void*)) {
    QTcpServer_Connect_NewConnection((QTcpServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QTcpServer* self, enum QAbstractSocket__SocketError socketError ```
void q_tcpserver_accept_error(void* self, int64_t socketError) {
    QTcpServer_AcceptError((QTcpServer*)self, socketError);
}

/// ``` QTcpServer* self, void (*slot)(QTcpServer*, enum QAbstractSocket__SocketError) ```
void q_tcpserver_on_accept_error(void* self, void (*slot)(void*, int64_t)) {
    QTcpServer_Connect_AcceptError((QTcpServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tcpserver_tr2(const char* s, const char* c) {
    libqt_string _str = QTcpServer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tcpserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTcpServer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QTcpServer* self, QHostAddress* address ```
bool q_tcpserver_listen1(void* self, void* address) {
    return QTcpServer_Listen1((QTcpServer*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QTcpServer* self, QHostAddress* address, unsigned short port ```
bool q_tcpserver_listen2(void* self, void* address, unsigned short port) {
    return QTcpServer_Listen2((QTcpServer*)self, (QHostAddress*)address, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QTcpServer* self, int msec ```
bool q_tcpserver_wait_for_new_connection1(void* self, int msec) {
    return QTcpServer_WaitForNewConnection1((QTcpServer*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QTcpServer* self, int msec, bool* timedOut ```
bool q_tcpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QTcpServer_WaitForNewConnection2((QTcpServer*)self, msec, (bool*)timedOut);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTcpServer* self ```
const char* q_tcpserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTcpServer* self, const char* name ```
void q_tcpserver_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTcpServer* self, bool b ```
bool q_tcpserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTcpServer* self ```
QThread* q_tcpserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTcpServer* self, QThread* thread ```
void q_tcpserver_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpServer* self, int interval ```
int32_t q_tcpserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTcpServer* self, int id ```
void q_tcpserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTcpServer* self ```
libqt_list /* of QObject* */ q_tcpserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTcpServer* self, QObject* parent ```
void q_tcpserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTcpServer* self, QObject* filterObj ```
void q_tcpserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTcpServer* self, QObject* obj ```
void q_tcpserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tcpserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tcpserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tcpserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tcpserver_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTcpServer* self ```
void q_tcpserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTcpServer* self ```
void q_tcpserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTcpServer* self, const char* name, QVariant* value ```
bool q_tcpserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTcpServer* self, const char* name ```
QVariant* q_tcpserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTcpServer* self ```
const char** q_tcpserver_dynamic_property_names(void* self) {
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
/// ``` QTcpServer* self ```
QBindingStorage* q_tcpserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpServer* self ```
QBindingStorage* q_tcpserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpServer* self ```
void q_tcpserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTcpServer* self, void (*slot)(QObject*) ```
void q_tcpserver_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTcpServer* self ```
QObject* q_tcpserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTcpServer* self, const char* classname ```
bool q_tcpserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTcpServer* self ```
void q_tcpserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tcpserver_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpServer* self, QObject* param1 ```
void q_tcpserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTcpServer* self, void (*slot)(QObject*, QObject*) ```
void q_tcpserver_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
bool q_tcpserver_event(void* self, void* event) {
    return QTcpServer_Event((QTcpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
bool q_tcpserver_qbase_event(void* self, void* event) {
    return QTcpServer_QBaseEvent((QTcpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, bool (*slot)(QTcpServer*, QEvent*) ```
void q_tcpserver_on_event(void* self, bool (*slot)(void*, void*)) {
    QTcpServer_OnEvent((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QObject* watched, QEvent* event ```
bool q_tcpserver_event_filter(void* self, void* watched, void* event) {
    return QTcpServer_EventFilter((QTcpServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QObject* watched, QEvent* event ```
bool q_tcpserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QTcpServer_QBaseEventFilter((QTcpServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, bool (*slot)(QTcpServer*, QObject*, QEvent*) ```
void q_tcpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTcpServer_OnEventFilter((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QTimerEvent* event ```
void q_tcpserver_timer_event(void* self, void* event) {
    QTcpServer_TimerEvent((QTcpServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QTimerEvent* event ```
void q_tcpserver_qbase_timer_event(void* self, void* event) {
    QTcpServer_QBaseTimerEvent((QTcpServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QTimerEvent*) ```
void q_tcpserver_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnTimerEvent((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QChildEvent* event ```
void q_tcpserver_child_event(void* self, void* event) {
    QTcpServer_ChildEvent((QTcpServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QChildEvent* event ```
void q_tcpserver_qbase_child_event(void* self, void* event) {
    QTcpServer_QBaseChildEvent((QTcpServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QChildEvent*) ```
void q_tcpserver_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnChildEvent((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
void q_tcpserver_custom_event(void* self, void* event) {
    QTcpServer_CustomEvent((QTcpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
void q_tcpserver_qbase_custom_event(void* self, void* event) {
    QTcpServer_QBaseCustomEvent((QTcpServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QEvent*) ```
void q_tcpserver_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnCustomEvent((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_connect_notify(void* self, void* signal) {
    QTcpServer_ConnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_qbase_connect_notify(void* self, void* signal) {
    QTcpServer_QBaseConnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QMetaMethod*) ```
void q_tcpserver_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnConnectNotify((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_disconnect_notify(void* self, void* signal) {
    QTcpServer_DisconnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_qbase_disconnect_notify(void* self, void* signal) {
    QTcpServer_QBaseDisconnectNotify((QTcpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QMetaMethod*) ```
void q_tcpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTcpServer_OnDisconnectNotify((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self ```
QObject* q_tcpserver_sender(void* self) {
    return QTcpServer_Sender((QTcpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self ```
QObject* q_tcpserver_qbase_sender(void* self) {
    return QTcpServer_QBaseSender((QTcpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, QObject* (*slot)() ```
void q_tcpserver_on_sender(void* self, QObject* (*slot)()) {
    QTcpServer_OnSender((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_sender_signal_index(void* self) {
    return QTcpServer_SenderSignalIndex((QTcpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_qbase_sender_signal_index(void* self) {
    return QTcpServer_QBaseSenderSignalIndex((QTcpServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, int32_t (*slot)() ```
void q_tcpserver_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTcpServer_OnSenderSignalIndex((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, const char* signal ```
int32_t q_tcpserver_receivers(void* self, const char* signal) {
    return QTcpServer_Receivers((QTcpServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, const char* signal ```
int32_t q_tcpserver_qbase_receivers(void* self, const char* signal) {
    return QTcpServer_QBaseReceivers((QTcpServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, int32_t (*slot)(QTcpServer*, const char*) ```
void q_tcpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTcpServer_OnReceivers((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
bool q_tcpserver_is_signal_connected(void* self, void* signal) {
    return QTcpServer_IsSignalConnected((QTcpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
bool q_tcpserver_qbase_is_signal_connected(void* self, void* signal) {
    return QTcpServer_QBaseIsSignalConnected((QTcpServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, bool (*slot)(QTcpServer*, QMetaMethod*) ```
void q_tcpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTcpServer_OnIsSignalConnected((QTcpServer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTcpServer* self ```
void q_tcpserver_delete(void* self) {
    QTcpServer_Delete((QTcpServer*)(self));
}