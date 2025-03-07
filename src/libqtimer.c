#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqtimer.hpp"
#include "libqtimer.h"

/// https://doc.qt.io/qt-6/qtimer.html

/// q_timer_new constructs a new QTimer object.
///
///
QTimer* q_timer_new() {
    return QTimer_new();
}

/// q_timer_new2 constructs a new QTimer object.
///
/// ``` QObject* parent ```
QTimer* q_timer_new2(void* parent) {
    return QTimer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTimer* self ```
QMetaObject* q_timer_meta_object(void* self) {
    return QTimer_MetaObject((QTimer*)self);
}

/// ``` QTimer* self, const char* param1 ```
void* q_timer_metacast(void* self, const char* param1) {
    return QTimer_Metacast((QTimer*)self, param1);
}

/// ``` QTimer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimer_Metacall((QTimer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTimer* self, int32_t (*slot)(QTimer*, enum QMetaObject__Call, int, void*) ```
void q_timer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTimer_OnMetacall((QTimer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimer_QBaseMetacall((QTimer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_timer_tr(const char* s) {
    libqt_string _str = QTimer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#isActive)
///
/// ``` QTimer* self ```
bool q_timer_is_active(void* self) {
    return QTimer_IsActive((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#timerId)
///
/// ``` QTimer* self ```
int32_t q_timer_timer_id(void* self) {
    return QTimer_TimerId((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#setInterval)
///
/// ``` QTimer* self, int msec ```
void q_timer_set_interval(void* self, int msec) {
    QTimer_SetInterval((QTimer*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#interval)
///
/// ``` QTimer* self ```
int32_t q_timer_interval(void* self) {
    return QTimer_Interval((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#remainingTime)
///
/// ``` QTimer* self ```
int32_t q_timer_remaining_time(void* self) {
    return QTimer_RemainingTime((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#setTimerType)
///
/// ``` QTimer* self, enum Qt__TimerType atype ```
void q_timer_set_timer_type(void* self, int64_t atype) {
    QTimer_SetTimerType((QTimer*)self, atype);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#timerType)
///
/// ``` QTimer* self ```
int64_t q_timer_timer_type(void* self) {
    return QTimer_TimerType((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#setSingleShot)
///
/// ``` QTimer* self, bool singleShot ```
void q_timer_set_single_shot(void* self, bool singleShot) {
    QTimer_SetSingleShot((QTimer*)self, singleShot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#isSingleShot)
///
/// ``` QTimer* self ```
bool q_timer_is_single_shot(void* self) {
    return QTimer_IsSingleShot((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#start)
///
/// ``` QTimer* self, int msec ```
void q_timer_start(void* self, int msec) {
    QTimer_Start((QTimer*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#start)
///
/// ``` QTimer* self ```
void q_timer_start2(void* self) {
    QTimer_Start2((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#stop)
///
/// ``` QTimer* self ```
void q_timer_stop(void* self) {
    QTimer_Stop((QTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimer.html#timerEvent)
///
/// ``` QTimer* self, QTimerEvent* param1 ```
void q_timer_timer_event(void* self, void* param1) {
    QTimer_TimerEvent((QTimer*)self, (QTimerEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTimer* self, void (*slot)(QTimer*, QTimerEvent*) ```
void q_timer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTimer_OnTimerEvent((QTimer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimer* self, QTimerEvent* param1 ```
void q_timer_qbase_timer_event(void* self, void* param1) {
    QTimer_QBaseTimerEvent((QTimer*)self, (QTimerEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_timer_tr2(const char* s, const char* c) {
    libqt_string _str = QTimer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_timer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTimer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTimer* self ```
const char* q_timer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTimer* self, const char* name ```
void q_timer_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTimer* self ```
bool q_timer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTimer* self ```
bool q_timer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTimer* self ```
bool q_timer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTimer* self ```
bool q_timer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTimer* self, bool b ```
bool q_timer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTimer* self ```
QThread* q_timer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTimer* self, QThread* thread ```
void q_timer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimer* self, int interval ```
int32_t q_timer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTimer* self, int id ```
void q_timer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTimer* self ```
libqt_list /* of QObject* */ q_timer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTimer* self, QObject* parent ```
void q_timer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTimer* self, QObject* filterObj ```
void q_timer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTimer* self, QObject* obj ```
void q_timer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_timer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_timer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_timer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_timer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTimer* self ```
void q_timer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTimer* self ```
void q_timer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTimer* self, const char* name, QVariant* value ```
bool q_timer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTimer* self, const char* name ```
QVariant* q_timer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTimer* self ```
const char** q_timer_dynamic_property_names(void* self) {
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
/// ``` QTimer* self ```
QBindingStorage* q_timer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTimer* self ```
QBindingStorage* q_timer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimer* self ```
void q_timer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTimer* self, void (*slot)(QObject*) ```
void q_timer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTimer* self ```
QObject* q_timer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTimer* self, const char* classname ```
bool q_timer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTimer* self ```
void q_timer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_timer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimer* self, QObject* param1 ```
void q_timer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTimer* self, void (*slot)(QObject*, QObject*) ```
void q_timer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QEvent* event ```
bool q_timer_event(void* self, void* event) {
    return QTimer_Event((QTimer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QEvent* event ```
bool q_timer_qbase_event(void* self, void* event) {
    return QTimer_QBaseEvent((QTimer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, bool (*slot)(QTimer*, QEvent*) ```
void q_timer_on_event(void* self, bool (*slot)(void*, void*)) {
    QTimer_OnEvent((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QObject* watched, QEvent* event ```
bool q_timer_event_filter(void* self, void* watched, void* event) {
    return QTimer_EventFilter((QTimer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QObject* watched, QEvent* event ```
bool q_timer_qbase_event_filter(void* self, void* watched, void* event) {
    return QTimer_QBaseEventFilter((QTimer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, bool (*slot)(QTimer*, QObject*, QEvent*) ```
void q_timer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTimer_OnEventFilter((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QChildEvent* event ```
void q_timer_child_event(void* self, void* event) {
    QTimer_ChildEvent((QTimer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QChildEvent* event ```
void q_timer_qbase_child_event(void* self, void* event) {
    QTimer_QBaseChildEvent((QTimer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, void (*slot)(QTimer*, QChildEvent*) ```
void q_timer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTimer_OnChildEvent((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QEvent* event ```
void q_timer_custom_event(void* self, void* event) {
    QTimer_CustomEvent((QTimer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QEvent* event ```
void q_timer_qbase_custom_event(void* self, void* event) {
    QTimer_QBaseCustomEvent((QTimer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, void (*slot)(QTimer*, QEvent*) ```
void q_timer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTimer_OnCustomEvent((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QMetaMethod* signal ```
void q_timer_connect_notify(void* self, void* signal) {
    QTimer_ConnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QMetaMethod* signal ```
void q_timer_qbase_connect_notify(void* self, void* signal) {
    QTimer_QBaseConnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, void (*slot)(QTimer*, QMetaMethod*) ```
void q_timer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTimer_OnConnectNotify((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QMetaMethod* signal ```
void q_timer_disconnect_notify(void* self, void* signal) {
    QTimer_DisconnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QMetaMethod* signal ```
void q_timer_qbase_disconnect_notify(void* self, void* signal) {
    QTimer_QBaseDisconnectNotify((QTimer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, void (*slot)(QTimer*, QMetaMethod*) ```
void q_timer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTimer_OnDisconnectNotify((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self ```
QObject* q_timer_sender(void* self) {
    return QTimer_Sender((QTimer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self ```
QObject* q_timer_qbase_sender(void* self) {
    return QTimer_QBaseSender((QTimer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, QObject* (*slot)() ```
void q_timer_on_sender(void* self, QObject* (*slot)()) {
    QTimer_OnSender((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self ```
int32_t q_timer_sender_signal_index(void* self) {
    return QTimer_SenderSignalIndex((QTimer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self ```
int32_t q_timer_qbase_sender_signal_index(void* self) {
    return QTimer_QBaseSenderSignalIndex((QTimer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, int32_t (*slot)() ```
void q_timer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTimer_OnSenderSignalIndex((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, const char* signal ```
int32_t q_timer_receivers(void* self, const char* signal) {
    return QTimer_Receivers((QTimer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, const char* signal ```
int32_t q_timer_qbase_receivers(void* self, const char* signal) {
    return QTimer_QBaseReceivers((QTimer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, int32_t (*slot)(QTimer*, const char*) ```
void q_timer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTimer_OnReceivers((QTimer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimer* self, QMetaMethod* signal ```
bool q_timer_is_signal_connected(void* self, void* signal) {
    return QTimer_IsSignalConnected((QTimer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimer* self, QMetaMethod* signal ```
bool q_timer_qbase_is_signal_connected(void* self, void* signal) {
    return QTimer_QBaseIsSignalConnected((QTimer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimer* self, bool (*slot)(QTimer*, QMetaMethod*) ```
void q_timer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTimer_OnIsSignalConnected((QTimer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTimer* self ```
void q_timer_delete(void* self) {
    QTimer_Delete((QTimer*)(self));
}