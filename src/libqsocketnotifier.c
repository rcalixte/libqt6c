#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include <stdio.h>
#include "libqcoreevent.hpp"
#include "libqsocketnotifier.hpp"
#include "libqsocketnotifier.h"

/// https://doc.qt.io/qt-6/qsocketnotifier.html

/// q_socketnotifier_new constructs a new QSocketNotifier object.
///
/// ``` enum QSocketNotifier__Type param1 ```
QSocketNotifier* q_socketnotifier_new(int64_t param1) {
    return QSocketNotifier_new(param1);
}

/// q_socketnotifier_new2 constructs a new QSocketNotifier object.
///
/// ``` intptr_t socket, enum QSocketNotifier__Type param2 ```
QSocketNotifier* q_socketnotifier_new2(intptr_t socket, int64_t param2) {
    return QSocketNotifier_new2(socket, param2);
}

/// q_socketnotifier_new3 constructs a new QSocketNotifier object.
///
/// ``` enum QSocketNotifier__Type param1, QObject* parent ```
QSocketNotifier* q_socketnotifier_new3(int64_t param1, void* parent) {
    return QSocketNotifier_new3(param1, (QObject*)parent);
}

/// q_socketnotifier_new4 constructs a new QSocketNotifier object.
///
/// ``` intptr_t socket, enum QSocketNotifier__Type param2, QObject* parent ```
QSocketNotifier* q_socketnotifier_new4(intptr_t socket, int64_t param2, void* parent) {
    return QSocketNotifier_new4(socket, param2, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSocketNotifier* self ```
QMetaObject* q_socketnotifier_meta_object(void* self) {
    return QSocketNotifier_MetaObject((QSocketNotifier*)self);
}

/// ``` QSocketNotifier* self, const char* param1 ```
void* q_socketnotifier_metacast(void* self, const char* param1) {
    return QSocketNotifier_Metacast((QSocketNotifier*)self, param1);
}

/// ``` QSocketNotifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_socketnotifier_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSocketNotifier_Metacall((QSocketNotifier*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSocketNotifier* self, int32_t (*slot)(QSocketNotifier*, enum QMetaObject__Call, int, void*) ```
void q_socketnotifier_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSocketNotifier_OnMetacall((QSocketNotifier*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSocketNotifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_socketnotifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSocketNotifier_QBaseMetacall((QSocketNotifier*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_socketnotifier_tr(const char* s) {
    libqt_string _str = QSocketNotifier_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#setSocket)
///
/// ``` QSocketNotifier* self, intptr_t socket ```
void q_socketnotifier_set_socket(void* self, intptr_t socket) {
    QSocketNotifier_SetSocket((QSocketNotifier*)self, socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#socket)
///
/// ``` QSocketNotifier* self ```
intptr_t q_socketnotifier_socket(void* self) {
    return QSocketNotifier_Socket((QSocketNotifier*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#type)
///
/// ``` QSocketNotifier* self ```
int64_t q_socketnotifier_type(void* self) {
    return QSocketNotifier_Type((QSocketNotifier*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#isValid)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_valid(void* self) {
    return QSocketNotifier_IsValid((QSocketNotifier*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#isEnabled)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_enabled(void* self) {
    return QSocketNotifier_IsEnabled((QSocketNotifier*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#setEnabled)
///
/// ``` QSocketNotifier* self, bool enabled ```
void q_socketnotifier_set_enabled(void* self, bool enabled) {
    QSocketNotifier_SetEnabled((QSocketNotifier*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// ``` QSocketNotifier* self, QEvent* param1 ```
bool q_socketnotifier_event(void* self, void* param1) {
    return QSocketNotifier_Event((QSocketNotifier*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QSocketNotifier* self, bool (*slot)(QSocketNotifier*, QEvent*) ```
void q_socketnotifier_on_event(void* self, bool (*slot)(void*, void*)) {
    QSocketNotifier_OnEvent((QSocketNotifier*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSocketNotifier* self, QEvent* param1 ```
bool q_socketnotifier_qbase_event(void* self, void* param1) {
    return QSocketNotifier_QBaseEvent((QSocketNotifier*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_socketnotifier_tr2(const char* s, const char* c) {
    libqt_string _str = QSocketNotifier_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_socketnotifier_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSocketNotifier_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSocketNotifier* self ```
const char* q_socketnotifier_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSocketNotifier* self, const char* name ```
void q_socketnotifier_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSocketNotifier* self, bool b ```
bool q_socketnotifier_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSocketNotifier* self ```
QThread* q_socketnotifier_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSocketNotifier* self, QThread* thread ```
void q_socketnotifier_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSocketNotifier* self, int interval ```
int32_t q_socketnotifier_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSocketNotifier* self, int id ```
void q_socketnotifier_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSocketNotifier* self ```
libqt_list /* of QObject* */ q_socketnotifier_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSocketNotifier* self, QObject* parent ```
void q_socketnotifier_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSocketNotifier* self, QObject* filterObj ```
void q_socketnotifier_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSocketNotifier* self, QObject* obj ```
void q_socketnotifier_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_socketnotifier_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSocketNotifier* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_socketnotifier_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_socketnotifier_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_socketnotifier_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSocketNotifier* self, const char* name, QVariant* value ```
bool q_socketnotifier_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSocketNotifier* self, const char* name ```
QVariant* q_socketnotifier_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSocketNotifier* self ```
const char** q_socketnotifier_dynamic_property_names(void* self) {
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
/// ``` QSocketNotifier* self ```
QBindingStorage* q_socketnotifier_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSocketNotifier* self ```
QBindingStorage* q_socketnotifier_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSocketNotifier* self, void (*slot)(QObject*) ```
void q_socketnotifier_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSocketNotifier* self ```
QObject* q_socketnotifier_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSocketNotifier* self, const char* classname ```
bool q_socketnotifier_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSocketNotifier* self, int interval, enum Qt__TimerType timerType ```
int32_t q_socketnotifier_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_socketnotifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSocketNotifier* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_socketnotifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSocketNotifier* self, QObject* param1 ```
void q_socketnotifier_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSocketNotifier* self, void (*slot)(QObject*, QObject*) ```
void q_socketnotifier_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QObject* watched, QEvent* event ```
bool q_socketnotifier_event_filter(void* self, void* watched, void* event) {
    return QSocketNotifier_EventFilter((QSocketNotifier*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QObject* watched, QEvent* event ```
bool q_socketnotifier_qbase_event_filter(void* self, void* watched, void* event) {
    return QSocketNotifier_QBaseEventFilter((QSocketNotifier*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, bool (*slot)(QSocketNotifier*, QObject*, QEvent*) ```
void q_socketnotifier_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSocketNotifier_OnEventFilter((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QTimerEvent* event ```
void q_socketnotifier_timer_event(void* self, void* event) {
    QSocketNotifier_TimerEvent((QSocketNotifier*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QTimerEvent* event ```
void q_socketnotifier_qbase_timer_event(void* self, void* event) {
    QSocketNotifier_QBaseTimerEvent((QSocketNotifier*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QTimerEvent*) ```
void q_socketnotifier_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSocketNotifier_OnTimerEvent((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QChildEvent* event ```
void q_socketnotifier_child_event(void* self, void* event) {
    QSocketNotifier_ChildEvent((QSocketNotifier*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QChildEvent* event ```
void q_socketnotifier_qbase_child_event(void* self, void* event) {
    QSocketNotifier_QBaseChildEvent((QSocketNotifier*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QChildEvent*) ```
void q_socketnotifier_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSocketNotifier_OnChildEvent((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QEvent* event ```
void q_socketnotifier_custom_event(void* self, void* event) {
    QSocketNotifier_CustomEvent((QSocketNotifier*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QEvent* event ```
void q_socketnotifier_qbase_custom_event(void* self, void* event) {
    QSocketNotifier_QBaseCustomEvent((QSocketNotifier*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QEvent*) ```
void q_socketnotifier_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSocketNotifier_OnCustomEvent((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_connect_notify(void* self, void* signal) {
    QSocketNotifier_ConnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_qbase_connect_notify(void* self, void* signal) {
    QSocketNotifier_QBaseConnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QMetaMethod*) ```
void q_socketnotifier_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSocketNotifier_OnConnectNotify((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_disconnect_notify(void* self, void* signal) {
    QSocketNotifier_DisconnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_qbase_disconnect_notify(void* self, void* signal) {
    QSocketNotifier_QBaseDisconnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QMetaMethod*) ```
void q_socketnotifier_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSocketNotifier_OnDisconnectNotify((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self ```
QObject* q_socketnotifier_sender(void* self) {
    return QSocketNotifier_Sender((QSocketNotifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self ```
QObject* q_socketnotifier_qbase_sender(void* self) {
    return QSocketNotifier_QBaseSender((QSocketNotifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, QObject* (*slot)() ```
void q_socketnotifier_on_sender(void* self, QObject* (*slot)()) {
    QSocketNotifier_OnSender((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self ```
int32_t q_socketnotifier_sender_signal_index(void* self) {
    return QSocketNotifier_SenderSignalIndex((QSocketNotifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self ```
int32_t q_socketnotifier_qbase_sender_signal_index(void* self) {
    return QSocketNotifier_QBaseSenderSignalIndex((QSocketNotifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, int32_t (*slot)() ```
void q_socketnotifier_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSocketNotifier_OnSenderSignalIndex((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, const char* signal ```
int32_t q_socketnotifier_receivers(void* self, const char* signal) {
    return QSocketNotifier_Receivers((QSocketNotifier*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, const char* signal ```
int32_t q_socketnotifier_qbase_receivers(void* self, const char* signal) {
    return QSocketNotifier_QBaseReceivers((QSocketNotifier*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, int32_t (*slot)(QSocketNotifier*, const char*) ```
void q_socketnotifier_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSocketNotifier_OnReceivers((QSocketNotifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
bool q_socketnotifier_is_signal_connected(void* self, void* signal) {
    return QSocketNotifier_IsSignalConnected((QSocketNotifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
bool q_socketnotifier_qbase_is_signal_connected(void* self, void* signal) {
    return QSocketNotifier_QBaseIsSignalConnected((QSocketNotifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, bool (*slot)(QSocketNotifier*, QMetaMethod*) ```
void q_socketnotifier_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSocketNotifier_OnIsSignalConnected((QSocketNotifier*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_delete(void* self) {
    QSocketNotifier_Delete((QSocketNotifier*)(self));
}

/// https://doc.qt.io/qt-6/qsocketdescriptor.html

/// q_socketdescriptor_new constructs a new QSocketDescriptor object.
///
/// ``` QSocketDescriptor* other ```
QSocketDescriptor* q_socketdescriptor_new(void* other) {
    return QSocketDescriptor_new((QSocketDescriptor*)other);
}

/// q_socketdescriptor_new2 constructs a new QSocketDescriptor object and invalidates the source QSocketDescriptor object.
///
/// ``` QSocketDescriptor* other ```
QSocketDescriptor* q_socketdescriptor_new2(void* other) {
    return QSocketDescriptor_new2((QSocketDescriptor*)other);
}

/// q_socketdescriptor_new3 constructs a new QSocketDescriptor object.
///
///
QSocketDescriptor* q_socketdescriptor_new3() {
    return QSocketDescriptor_new3();
}

/// q_socketdescriptor_new4 constructs a new QSocketDescriptor object.
///
/// ``` QSocketDescriptor* param1 ```
QSocketDescriptor* q_socketdescriptor_new4(void* param1) {
    return QSocketDescriptor_new4((QSocketDescriptor*)param1);
}

/// q_socketdescriptor_new5 constructs a new QSocketDescriptor object.
///
/// ``` int descriptor,  ```
QSocketDescriptor* q_socketdescriptor_new5(int descriptor) {
#ifdef __linux__
    return QSocketDescriptor_new5(descriptor);
#else
    fprintf(stderr, "Error: Unsupported operating system\n");
    abort();
#endif
}
/// q_socketdescriptor_copy_assign shallow copies `other` into `self`.
///
/// ``` QSocketDescriptor* self, QSocketDescriptor* other ```
void q_socketdescriptor_copy_assign(void* self, void* other) {
    QSocketDescriptor_CopyAssign((QSocketDescriptor*)self, (QSocketDescriptor*)other);
}

/// q_socketdescriptor_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSocketDescriptor* self, QSocketDescriptor* other ```
void q_socketdescriptor_move_assign(void* self, void* other) {
    QSocketDescriptor_MoveAssign((QSocketDescriptor*)self, (QSocketDescriptor*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#operator int)
///
/// ``` QSocketDescriptor* self ```
int32_t q_socketdescriptor_to_int(void* self) {
#ifndef __linux__
    fprintf(stderr, "Error: Unsupported operating system\n");
    abort();
#endif

    return QSocketDescriptor_ToInt((QSocketDescriptor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#isValid)
///
/// ``` QSocketDescriptor* self ```
bool q_socketdescriptor_is_valid(void* self) {
    return QSocketDescriptor_IsValid((QSocketDescriptor*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSocketDescriptor* self ```
void q_socketdescriptor_delete(void* self) {
    QSocketDescriptor_Delete((QSocketDescriptor*)(self));
}