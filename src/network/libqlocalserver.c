#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqlocalsocket.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqlocalserver.hpp"
#include "libqlocalserver.h"

/// https://doc.qt.io/qt-6/qlocalserver.html

/// q_localserver_new constructs a new QLocalServer object.
///
///
QLocalServer* q_localserver_new() {
    return QLocalServer_new();
}

/// q_localserver_new2 constructs a new QLocalServer object.
///
/// ``` QObject* parent ```
QLocalServer* q_localserver_new2(void* parent) {
    return QLocalServer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLocalServer* self ```
QMetaObject* q_localserver_meta_object(void* self) {
    return QLocalServer_MetaObject((QLocalServer*)self);
}

/// ``` QLocalServer* self, const char* param1 ```
void* q_localserver_metacast(void* self, const char* param1) {
    return QLocalServer_Metacast((QLocalServer*)self, param1);
}

/// ``` QLocalServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localserver_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLocalServer_Metacall((QLocalServer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, int32_t (*slot)(QLocalServer*, enum QMetaObject__Call, int, void*) ```
void q_localserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLocalServer_OnMetacall((QLocalServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLocalServer_QBaseMetacall((QLocalServer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_localserver_tr(const char* s) {
    libqt_string _str = QLocalServer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
///
/// ``` QLocalServer* self ```
void q_localserver_new_connection(void* self) {
    QLocalServer_NewConnection((QLocalServer*)self);
}

/// ``` QLocalServer* self, void (*slot)(QLocalServer*) ```
void q_localserver_on_new_connection(void* self, void (*slot)(void*)) {
    QLocalServer_Connect_NewConnection((QLocalServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#close)
///
/// ``` QLocalServer* self ```
void q_localserver_close(void* self) {
    QLocalServer_Close((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#errorString)
///
/// ``` QLocalServer* self ```
const char* q_localserver_error_string(void* self) {
    libqt_string _str = QLocalServer_ErrorString((QLocalServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// ``` QLocalServer* self ```
bool q_localserver_has_pending_connections(void* self) {
    return QLocalServer_HasPendingConnections((QLocalServer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, bool (*slot)() ```
void q_localserver_on_has_pending_connections(void* self, bool (*slot)()) {
    QLocalServer_OnHasPendingConnections((QLocalServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalServer* self ```
bool q_localserver_qbase_has_pending_connections(void* self) {
    return QLocalServer_QBaseHasPendingConnections((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#isListening)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_listening(void* self) {
    return QLocalServer_IsListening((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#listen)
///
/// ``` QLocalServer* self, const char* name ```
bool q_localserver_listen(void* self, const char* name) {
    return QLocalServer_Listen((QLocalServer*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#listen)
///
/// ``` QLocalServer* self, intptr_t socketDescriptor ```
bool q_localserver_listen_with_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QLocalServer_ListenWithSocketDescriptor((QLocalServer*)self, socketDescriptor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#maxPendingConnections)
///
/// ``` QLocalServer* self ```
int32_t q_localserver_max_pending_connections(void* self) {
    return QLocalServer_MaxPendingConnections((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// ``` QLocalServer* self ```
QLocalSocket* q_localserver_next_pending_connection(void* self) {
    return QLocalServer_NextPendingConnection((QLocalServer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, QLocalSocket* (*slot)() ```
void q_localserver_on_next_pending_connection(void* self, QLocalSocket* (*slot)()) {
    QLocalServer_OnNextPendingConnection((QLocalServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalServer* self ```
QLocalSocket* q_localserver_qbase_next_pending_connection(void* self) {
    return QLocalServer_QBaseNextPendingConnection((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#serverName)
///
/// ``` QLocalServer* self ```
const char* q_localserver_server_name(void* self) {
    libqt_string _str = QLocalServer_ServerName((QLocalServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#fullServerName)
///
/// ``` QLocalServer* self ```
const char* q_localserver_full_server_name(void* self) {
    libqt_string _str = QLocalServer_FullServerName((QLocalServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#removeServer)
///
/// ``` const char* name ```
bool q_localserver_remove_server(const char* name) {
    return QLocalServer_RemoveServer(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#serverError)
///
/// ``` QLocalServer* self ```
int64_t q_localserver_server_error(void* self) {
    return QLocalServer_ServerError((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#setMaxPendingConnections)
///
/// ``` QLocalServer* self, int numConnections ```
void q_localserver_set_max_pending_connections(void* self, int numConnections) {
    QLocalServer_SetMaxPendingConnections((QLocalServer*)self, numConnections);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// ``` QLocalServer* self ```
bool q_localserver_wait_for_new_connection(void* self) {
    return QLocalServer_WaitForNewConnection((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#setListenBacklogSize)
///
/// ``` QLocalServer* self, int size ```
void q_localserver_set_listen_backlog_size(void* self, int size) {
    QLocalServer_SetListenBacklogSize((QLocalServer*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#listenBacklogSize)
///
/// ``` QLocalServer* self ```
int32_t q_localserver_listen_backlog_size(void* self) {
    return QLocalServer_ListenBacklogSize((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#setSocketOptions)
///
/// ``` QLocalServer* self, int options ```
void q_localserver_set_socket_options(void* self, int64_t options) {
    QLocalServer_SetSocketOptions((QLocalServer*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#socketOptions)
///
/// ``` QLocalServer* self ```
int64_t q_localserver_socket_options(void* self) {
    return QLocalServer_SocketOptions((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#socketDescriptor)
///
/// ``` QLocalServer* self ```
intptr_t q_localserver_socket_descriptor(void* self) {
    return QLocalServer_SocketDescriptor((QLocalServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// ``` QLocalServer* self, uintptr_t socketDescriptor ```
void q_localserver_incoming_connection(void* self, uintptr_t socketDescriptor) {
    QLocalServer_IncomingConnection((QLocalServer*)self, socketDescriptor);
}

/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, uintptr_t) ```
void q_localserver_on_incoming_connection(void* self, void (*slot)(void*, uintptr_t)) {
    QLocalServer_OnIncomingConnection((QLocalServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalServer* self, uintptr_t socketDescriptor ```
void q_localserver_qbase_incoming_connection(void* self, uintptr_t socketDescriptor) {
    QLocalServer_QBaseIncomingConnection((QLocalServer*)self, socketDescriptor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_localserver_tr2(const char* s, const char* c) {
    libqt_string _str = QLocalServer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_localserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLocalServer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// ``` QLocalServer* self, int msec ```
bool q_localserver_wait_for_new_connection1(void* self, int msec) {
    return QLocalServer_WaitForNewConnection1((QLocalServer*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// ``` QLocalServer* self, int msec, bool* timedOut ```
bool q_localserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QLocalServer_WaitForNewConnection2((QLocalServer*)self, msec, (bool*)timedOut);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLocalServer* self ```
const char* q_localserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLocalServer* self, const char* name ```
void q_localserver_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLocalServer* self ```
bool q_localserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLocalServer* self, bool b ```
bool q_localserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLocalServer* self ```
QThread* q_localserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLocalServer* self, QThread* thread ```
void q_localserver_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalServer* self, int interval ```
int32_t q_localserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLocalServer* self, int id ```
void q_localserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLocalServer* self ```
libqt_list /* of QObject* */ q_localserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLocalServer* self, QObject* parent ```
void q_localserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLocalServer* self, QObject* filterObj ```
void q_localserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLocalServer* self, QObject* obj ```
void q_localserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_localserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_localserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_localserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_localserver_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLocalServer* self ```
void q_localserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLocalServer* self ```
void q_localserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLocalServer* self, const char* name, QVariant* value ```
bool q_localserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLocalServer* self, const char* name ```
QVariant* q_localserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLocalServer* self ```
const char** q_localserver_dynamic_property_names(void* self) {
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
/// ``` QLocalServer* self ```
QBindingStorage* q_localserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalServer* self ```
QBindingStorage* q_localserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalServer* self ```
void q_localserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QLocalServer* self, void (*slot)(QObject*) ```
void q_localserver_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLocalServer* self ```
QObject* q_localserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLocalServer* self, const char* classname ```
bool q_localserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLocalServer* self ```
void q_localserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_localserver_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalServer* self, QObject* param1 ```
void q_localserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QLocalServer* self, void (*slot)(QObject*, QObject*) ```
void q_localserver_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
bool q_localserver_event(void* self, void* event) {
    return QLocalServer_Event((QLocalServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
bool q_localserver_qbase_event(void* self, void* event) {
    return QLocalServer_QBaseEvent((QLocalServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, bool (*slot)(QLocalServer*, QEvent*) ```
void q_localserver_on_event(void* self, bool (*slot)(void*, void*)) {
    QLocalServer_OnEvent((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QObject* watched, QEvent* event ```
bool q_localserver_event_filter(void* self, void* watched, void* event) {
    return QLocalServer_EventFilter((QLocalServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QObject* watched, QEvent* event ```
bool q_localserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QLocalServer_QBaseEventFilter((QLocalServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, bool (*slot)(QLocalServer*, QObject*, QEvent*) ```
void q_localserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLocalServer_OnEventFilter((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QTimerEvent* event ```
void q_localserver_timer_event(void* self, void* event) {
    QLocalServer_TimerEvent((QLocalServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QTimerEvent* event ```
void q_localserver_qbase_timer_event(void* self, void* event) {
    QLocalServer_QBaseTimerEvent((QLocalServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QTimerEvent*) ```
void q_localserver_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLocalServer_OnTimerEvent((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QChildEvent* event ```
void q_localserver_child_event(void* self, void* event) {
    QLocalServer_ChildEvent((QLocalServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QChildEvent* event ```
void q_localserver_qbase_child_event(void* self, void* event) {
    QLocalServer_QBaseChildEvent((QLocalServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QChildEvent*) ```
void q_localserver_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLocalServer_OnChildEvent((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
void q_localserver_custom_event(void* self, void* event) {
    QLocalServer_CustomEvent((QLocalServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
void q_localserver_qbase_custom_event(void* self, void* event) {
    QLocalServer_QBaseCustomEvent((QLocalServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QEvent*) ```
void q_localserver_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLocalServer_OnCustomEvent((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_connect_notify(void* self, void* signal) {
    QLocalServer_ConnectNotify((QLocalServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_qbase_connect_notify(void* self, void* signal) {
    QLocalServer_QBaseConnectNotify((QLocalServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QMetaMethod*) ```
void q_localserver_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLocalServer_OnConnectNotify((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_disconnect_notify(void* self, void* signal) {
    QLocalServer_DisconnectNotify((QLocalServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_qbase_disconnect_notify(void* self, void* signal) {
    QLocalServer_QBaseDisconnectNotify((QLocalServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QMetaMethod*) ```
void q_localserver_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLocalServer_OnDisconnectNotify((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self ```
QObject* q_localserver_sender(void* self) {
    return QLocalServer_Sender((QLocalServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self ```
QObject* q_localserver_qbase_sender(void* self) {
    return QLocalServer_QBaseSender((QLocalServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, QObject* (*slot)() ```
void q_localserver_on_sender(void* self, QObject* (*slot)()) {
    QLocalServer_OnSender((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self ```
int32_t q_localserver_sender_signal_index(void* self) {
    return QLocalServer_SenderSignalIndex((QLocalServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self ```
int32_t q_localserver_qbase_sender_signal_index(void* self) {
    return QLocalServer_QBaseSenderSignalIndex((QLocalServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, int32_t (*slot)() ```
void q_localserver_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLocalServer_OnSenderSignalIndex((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, const char* signal ```
int32_t q_localserver_receivers(void* self, const char* signal) {
    return QLocalServer_Receivers((QLocalServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, const char* signal ```
int32_t q_localserver_qbase_receivers(void* self, const char* signal) {
    return QLocalServer_QBaseReceivers((QLocalServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, int32_t (*slot)(QLocalServer*, const char*) ```
void q_localserver_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLocalServer_OnReceivers((QLocalServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
bool q_localserver_is_signal_connected(void* self, void* signal) {
    return QLocalServer_IsSignalConnected((QLocalServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
bool q_localserver_qbase_is_signal_connected(void* self, void* signal) {
    return QLocalServer_QBaseIsSignalConnected((QLocalServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, bool (*slot)(QLocalServer*, QMetaMethod*) ```
void q_localserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLocalServer_OnIsSignalConnected((QLocalServer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QLocalServer* self ```
void q_localserver_delete(void* self) {
    QLocalServer_Delete((QLocalServer*)(self));
}