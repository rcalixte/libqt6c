#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqeventloop.hpp"
#include "libqeventloop.h"

/// https://doc.qt.io/qt-6/qeventloop.html

/// q_eventloop_new constructs a new QEventLoop object.
///
///
QEventLoop* q_eventloop_new() {
    return QEventLoop_new();
}

/// q_eventloop_new2 constructs a new QEventLoop object.
///
/// ``` QObject* parent ```
QEventLoop* q_eventloop_new2(void* parent) {
    return QEventLoop_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QEventLoop* self ```
QMetaObject* q_eventloop_meta_object(void* self) {
    return QEventLoop_MetaObject((QEventLoop*)self);
}

/// ``` QEventLoop* self, const char* param1 ```
void* q_eventloop_metacast(void* self, const char* param1) {
    return QEventLoop_Metacast((QEventLoop*)self, param1);
}

/// ``` QEventLoop* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_eventloop_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QEventLoop_Metacall((QEventLoop*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QEventLoop* self, int32_t (*slot)(QEventLoop*, enum QMetaObject__Call, int, void*) ```
void q_eventloop_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QEventLoop_OnMetacall((QEventLoop*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QEventLoop* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_eventloop_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QEventLoop_QBaseMetacall((QEventLoop*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_eventloop_tr(const char* s) {
    libqt_string _str = QEventLoop_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// ``` QEventLoop* self ```
bool q_eventloop_process_events(void* self) {
    return QEventLoop_ProcessEvents((QEventLoop*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// ``` QEventLoop* self, int flags, int maximumTime ```
void q_eventloop_process_events2(void* self, int64_t flags, int maximumTime) {
    QEventLoop_ProcessEvents2((QEventLoop*)self, flags, maximumTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exec)
///
/// ``` QEventLoop* self ```
int32_t q_eventloop_exec(void* self) {
    return QEventLoop_Exec((QEventLoop*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#isRunning)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_running(void* self) {
    return QEventLoop_IsRunning((QEventLoop*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#wakeUp)
///
/// ``` QEventLoop* self ```
void q_eventloop_wake_up(void* self) {
    QEventLoop_WakeUp((QEventLoop*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// ``` QEventLoop* self, QEvent* event ```
bool q_eventloop_event(void* self, void* event) {
    return QEventLoop_Event((QEventLoop*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QEventLoop* self, bool (*slot)(QEventLoop*, QEvent*) ```
void q_eventloop_on_event(void* self, bool (*slot)(void*, void*)) {
    QEventLoop_OnEvent((QEventLoop*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QEventLoop* self, QEvent* event ```
bool q_eventloop_qbase_event(void* self, void* event) {
    return QEventLoop_QBaseEvent((QEventLoop*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exit)
///
/// ``` QEventLoop* self ```
void q_eventloop_exit(void* self) {
    QEventLoop_Exit((QEventLoop*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#quit)
///
/// ``` QEventLoop* self ```
void q_eventloop_quit(void* self) {
    QEventLoop_Quit((QEventLoop*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_eventloop_tr2(const char* s, const char* c) {
    libqt_string _str = QEventLoop_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_eventloop_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QEventLoop_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// ``` QEventLoop* self, int flags ```
bool q_eventloop_process_events1(void* self, int64_t flags) {
    return QEventLoop_ProcessEvents1((QEventLoop*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exec)
///
/// ``` QEventLoop* self, int flags ```
int32_t q_eventloop_exec1(void* self, int64_t flags) {
    return QEventLoop_Exec1((QEventLoop*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exit)
///
/// ``` QEventLoop* self, int returnCode ```
void q_eventloop_exit1(void* self, int returnCode) {
    QEventLoop_Exit1((QEventLoop*)self, returnCode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QEventLoop* self ```
const char* q_eventloop_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QEventLoop* self, const char* name ```
void q_eventloop_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QEventLoop* self ```
bool q_eventloop_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QEventLoop* self, bool b ```
bool q_eventloop_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QEventLoop* self ```
QThread* q_eventloop_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QEventLoop* self, QThread* thread ```
void q_eventloop_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QEventLoop* self, int interval ```
int32_t q_eventloop_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QEventLoop* self, int id ```
void q_eventloop_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QEventLoop* self ```
libqt_list /* of QObject* */ q_eventloop_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QEventLoop* self, QObject* parent ```
void q_eventloop_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QEventLoop* self, QObject* filterObj ```
void q_eventloop_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QEventLoop* self, QObject* obj ```
void q_eventloop_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_eventloop_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QEventLoop* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_eventloop_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_eventloop_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_eventloop_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QEventLoop* self ```
void q_eventloop_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QEventLoop* self ```
void q_eventloop_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QEventLoop* self, const char* name, QVariant* value ```
bool q_eventloop_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QEventLoop* self, const char* name ```
QVariant* q_eventloop_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QEventLoop* self ```
const char** q_eventloop_dynamic_property_names(void* self) {
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
/// ``` QEventLoop* self ```
QBindingStorage* q_eventloop_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QEventLoop* self ```
QBindingStorage* q_eventloop_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QEventLoop* self ```
void q_eventloop_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QEventLoop* self, void (*slot)(QObject*) ```
void q_eventloop_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QEventLoop* self ```
QObject* q_eventloop_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QEventLoop* self, const char* classname ```
bool q_eventloop_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QEventLoop* self ```
void q_eventloop_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QEventLoop* self, int interval, enum Qt__TimerType timerType ```
int32_t q_eventloop_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_eventloop_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QEventLoop* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_eventloop_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QEventLoop* self, QObject* param1 ```
void q_eventloop_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QEventLoop* self, void (*slot)(QObject*, QObject*) ```
void q_eventloop_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QObject* watched, QEvent* event ```
bool q_eventloop_event_filter(void* self, void* watched, void* event) {
    return QEventLoop_EventFilter((QEventLoop*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QObject* watched, QEvent* event ```
bool q_eventloop_qbase_event_filter(void* self, void* watched, void* event) {
    return QEventLoop_QBaseEventFilter((QEventLoop*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, bool (*slot)(QEventLoop*, QObject*, QEvent*) ```
void q_eventloop_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QEventLoop_OnEventFilter((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QTimerEvent* event ```
void q_eventloop_timer_event(void* self, void* event) {
    QEventLoop_TimerEvent((QEventLoop*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QTimerEvent* event ```
void q_eventloop_qbase_timer_event(void* self, void* event) {
    QEventLoop_QBaseTimerEvent((QEventLoop*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QTimerEvent*) ```
void q_eventloop_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnTimerEvent((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QChildEvent* event ```
void q_eventloop_child_event(void* self, void* event) {
    QEventLoop_ChildEvent((QEventLoop*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QChildEvent* event ```
void q_eventloop_qbase_child_event(void* self, void* event) {
    QEventLoop_QBaseChildEvent((QEventLoop*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QChildEvent*) ```
void q_eventloop_on_child_event(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnChildEvent((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QEvent* event ```
void q_eventloop_custom_event(void* self, void* event) {
    QEventLoop_CustomEvent((QEventLoop*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QEvent* event ```
void q_eventloop_qbase_custom_event(void* self, void* event) {
    QEventLoop_QBaseCustomEvent((QEventLoop*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QEvent*) ```
void q_eventloop_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnCustomEvent((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_connect_notify(void* self, void* signal) {
    QEventLoop_ConnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_qbase_connect_notify(void* self, void* signal) {
    QEventLoop_QBaseConnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QMetaMethod*) ```
void q_eventloop_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnConnectNotify((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_disconnect_notify(void* self, void* signal) {
    QEventLoop_DisconnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_qbase_disconnect_notify(void* self, void* signal) {
    QEventLoop_QBaseDisconnectNotify((QEventLoop*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QMetaMethod*) ```
void q_eventloop_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QEventLoop_OnDisconnectNotify((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self ```
QObject* q_eventloop_sender(void* self) {
    return QEventLoop_Sender((QEventLoop*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self ```
QObject* q_eventloop_qbase_sender(void* self) {
    return QEventLoop_QBaseSender((QEventLoop*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, QObject* (*slot)() ```
void q_eventloop_on_sender(void* self, QObject* (*slot)()) {
    QEventLoop_OnSender((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self ```
int32_t q_eventloop_sender_signal_index(void* self) {
    return QEventLoop_SenderSignalIndex((QEventLoop*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self ```
int32_t q_eventloop_qbase_sender_signal_index(void* self) {
    return QEventLoop_QBaseSenderSignalIndex((QEventLoop*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, int32_t (*slot)() ```
void q_eventloop_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QEventLoop_OnSenderSignalIndex((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, const char* signal ```
int32_t q_eventloop_receivers(void* self, const char* signal) {
    return QEventLoop_Receivers((QEventLoop*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, const char* signal ```
int32_t q_eventloop_qbase_receivers(void* self, const char* signal) {
    return QEventLoop_QBaseReceivers((QEventLoop*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, int32_t (*slot)(QEventLoop*, const char*) ```
void q_eventloop_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QEventLoop_OnReceivers((QEventLoop*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
bool q_eventloop_is_signal_connected(void* self, void* signal) {
    return QEventLoop_IsSignalConnected((QEventLoop*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
bool q_eventloop_qbase_is_signal_connected(void* self, void* signal) {
    return QEventLoop_QBaseIsSignalConnected((QEventLoop*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, bool (*slot)(QEventLoop*, QMetaMethod*) ```
void q_eventloop_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QEventLoop_OnIsSignalConnected((QEventLoop*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QEventLoop* self ```
void q_eventloop_delete(void* self) {
    QEventLoop_Delete((QEventLoop*)(self));
}

/// https://doc.qt.io/qt-6/qeventlooplocker.html

/// q_eventlooplocker_new constructs a new QEventLoopLocker object.
///
///
QEventLoopLocker* q_eventlooplocker_new() {
    return QEventLoopLocker_new();
}

/// q_eventlooplocker_new2 constructs a new QEventLoopLocker object.
///
/// ``` QEventLoop* loop ```
QEventLoopLocker* q_eventlooplocker_new2(void* loop) {
    return QEventLoopLocker_new2((QEventLoop*)loop);
}

/// q_eventlooplocker_new3 constructs a new QEventLoopLocker object.
///
/// ``` QThread* thread ```
QEventLoopLocker* q_eventlooplocker_new3(void* thread) {
    return QEventLoopLocker_new3((QThread*)thread);
}

/// Delete this object from C++ memory.
///
/// ``` QEventLoopLocker* self ```
void q_eventlooplocker_delete(void* self) {
    QEventLoopLocker_Delete((QEventLoopLocker*)(self));
}