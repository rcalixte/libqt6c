#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqobjectcleanuphandler.hpp"
#include "libqobjectcleanuphandler.h"

/// https://doc.qt.io/qt-6/qobjectcleanuphandler.html

/// q_objectcleanuphandler_new constructs a new QObjectCleanupHandler object.
///
///
QObjectCleanupHandler* q_objectcleanuphandler_new() {
    return QObjectCleanupHandler_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QObjectCleanupHandler* self ```
QMetaObject* q_objectcleanuphandler_meta_object(void* self) {
    return QObjectCleanupHandler_MetaObject((QObjectCleanupHandler*)self);
}

/// ``` QObjectCleanupHandler* self, const char* param1 ```
void* q_objectcleanuphandler_metacast(void* self, const char* param1) {
    return QObjectCleanupHandler_Metacast((QObjectCleanupHandler*)self, param1);
}

/// ``` QObjectCleanupHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_objectcleanuphandler_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObjectCleanupHandler_Metacall((QObjectCleanupHandler*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QObjectCleanupHandler* self, int32_t (*slot)(QObjectCleanupHandler*, enum QMetaObject__Call, int, void*) ```
void q_objectcleanuphandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QObjectCleanupHandler_OnMetacall((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObjectCleanupHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_objectcleanuphandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObjectCleanupHandler_QBaseMetacall((QObjectCleanupHandler*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_objectcleanuphandler_tr(const char* s) {
    libqt_string _str = QObjectCleanupHandler_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#add)
///
/// ``` QObjectCleanupHandler* self, QObject* object ```
QObject* q_objectcleanuphandler_add(void* self, void* object) {
    return QObjectCleanupHandler_Add((QObjectCleanupHandler*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#remove)
///
/// ``` QObjectCleanupHandler* self, QObject* object ```
void q_objectcleanuphandler_remove(void* self, void* object) {
    QObjectCleanupHandler_Remove((QObjectCleanupHandler*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#isEmpty)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_empty(void* self) {
    return QObjectCleanupHandler_IsEmpty((QObjectCleanupHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#clear)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_clear(void* self) {
    QObjectCleanupHandler_Clear((QObjectCleanupHandler*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_objectcleanuphandler_tr2(const char* s, const char* c) {
    libqt_string _str = QObjectCleanupHandler_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObjectCleanupHandler_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QObjectCleanupHandler* self ```
const char* q_objectcleanuphandler_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QObjectCleanupHandler* self, const char* name ```
void q_objectcleanuphandler_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QObjectCleanupHandler* self, bool b ```
bool q_objectcleanuphandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QObjectCleanupHandler* self ```
QThread* q_objectcleanuphandler_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QObjectCleanupHandler* self, QThread* thread ```
void q_objectcleanuphandler_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObjectCleanupHandler* self, int interval ```
int32_t q_objectcleanuphandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QObjectCleanupHandler* self, int id ```
void q_objectcleanuphandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QObjectCleanupHandler* self ```
libqt_list /* of QObject* */ q_objectcleanuphandler_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QObjectCleanupHandler* self, QObject* parent ```
void q_objectcleanuphandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QObjectCleanupHandler* self, QObject* filterObj ```
void q_objectcleanuphandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QObjectCleanupHandler* self, QObject* obj ```
void q_objectcleanuphandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_objectcleanuphandler_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObjectCleanupHandler* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_objectcleanuphandler_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_objectcleanuphandler_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_objectcleanuphandler_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QObjectCleanupHandler* self, const char* name, QVariant* value ```
bool q_objectcleanuphandler_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QObjectCleanupHandler* self, const char* name ```
QVariant* q_objectcleanuphandler_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QObjectCleanupHandler* self ```
const char** q_objectcleanuphandler_dynamic_property_names(void* self) {
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
/// ``` QObjectCleanupHandler* self ```
QBindingStorage* q_objectcleanuphandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObjectCleanupHandler* self ```
QBindingStorage* q_objectcleanuphandler_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObject*) ```
void q_objectcleanuphandler_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QObjectCleanupHandler* self ```
QObject* q_objectcleanuphandler_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QObjectCleanupHandler* self, const char* classname ```
bool q_objectcleanuphandler_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObjectCleanupHandler* self, int interval, enum Qt__TimerType timerType ```
int32_t q_objectcleanuphandler_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_objectcleanuphandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObjectCleanupHandler* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_objectcleanuphandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObjectCleanupHandler* self, QObject* param1 ```
void q_objectcleanuphandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObject*, QObject*) ```
void q_objectcleanuphandler_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
bool q_objectcleanuphandler_event(void* self, void* event) {
    return QObjectCleanupHandler_Event((QObjectCleanupHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
bool q_objectcleanuphandler_qbase_event(void* self, void* event) {
    return QObjectCleanupHandler_QBaseEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, bool (*slot)(QObjectCleanupHandler*, QEvent*) ```
void q_objectcleanuphandler_on_event(void* self, bool (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QObject* watched, QEvent* event ```
bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event) {
    return QObjectCleanupHandler_EventFilter((QObjectCleanupHandler*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QObject* watched, QEvent* event ```
bool q_objectcleanuphandler_qbase_event_filter(void* self, void* watched, void* event) {
    return QObjectCleanupHandler_QBaseEventFilter((QObjectCleanupHandler*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, bool (*slot)(QObjectCleanupHandler*, QObject*, QEvent*) ```
void q_objectcleanuphandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QObjectCleanupHandler_OnEventFilter((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QTimerEvent* event ```
void q_objectcleanuphandler_timer_event(void* self, void* event) {
    QObjectCleanupHandler_TimerEvent((QObjectCleanupHandler*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QTimerEvent* event ```
void q_objectcleanuphandler_qbase_timer_event(void* self, void* event) {
    QObjectCleanupHandler_QBaseTimerEvent((QObjectCleanupHandler*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QTimerEvent*) ```
void q_objectcleanuphandler_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnTimerEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QChildEvent* event ```
void q_objectcleanuphandler_child_event(void* self, void* event) {
    QObjectCleanupHandler_ChildEvent((QObjectCleanupHandler*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QChildEvent* event ```
void q_objectcleanuphandler_qbase_child_event(void* self, void* event) {
    QObjectCleanupHandler_QBaseChildEvent((QObjectCleanupHandler*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QChildEvent*) ```
void q_objectcleanuphandler_on_child_event(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnChildEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
void q_objectcleanuphandler_custom_event(void* self, void* event) {
    QObjectCleanupHandler_CustomEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
void q_objectcleanuphandler_qbase_custom_event(void* self, void* event) {
    QObjectCleanupHandler_QBaseCustomEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QEvent*) ```
void q_objectcleanuphandler_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnCustomEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_connect_notify(void* self, void* signal) {
    QObjectCleanupHandler_ConnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_qbase_connect_notify(void* self, void* signal) {
    QObjectCleanupHandler_QBaseConnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QMetaMethod*) ```
void q_objectcleanuphandler_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnConnectNotify((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_disconnect_notify(void* self, void* signal) {
    QObjectCleanupHandler_DisconnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_qbase_disconnect_notify(void* self, void* signal) {
    QObjectCleanupHandler_QBaseDisconnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QMetaMethod*) ```
void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnDisconnectNotify((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
QObject* q_objectcleanuphandler_sender(void* self) {
    return QObjectCleanupHandler_Sender((QObjectCleanupHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
QObject* q_objectcleanuphandler_qbase_sender(void* self) {
    return QObjectCleanupHandler_QBaseSender((QObjectCleanupHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QObject* (*slot)() ```
void q_objectcleanuphandler_on_sender(void* self, QObject* (*slot)()) {
    QObjectCleanupHandler_OnSender((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
int32_t q_objectcleanuphandler_sender_signal_index(void* self) {
    return QObjectCleanupHandler_SenderSignalIndex((QObjectCleanupHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
int32_t q_objectcleanuphandler_qbase_sender_signal_index(void* self) {
    return QObjectCleanupHandler_QBaseSenderSignalIndex((QObjectCleanupHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, int32_t (*slot)() ```
void q_objectcleanuphandler_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QObjectCleanupHandler_OnSenderSignalIndex((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, const char* signal ```
int32_t q_objectcleanuphandler_receivers(void* self, const char* signal) {
    return QObjectCleanupHandler_Receivers((QObjectCleanupHandler*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, const char* signal ```
int32_t q_objectcleanuphandler_qbase_receivers(void* self, const char* signal) {
    return QObjectCleanupHandler_QBaseReceivers((QObjectCleanupHandler*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, int32_t (*slot)(QObjectCleanupHandler*, const char*) ```
void q_objectcleanuphandler_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QObjectCleanupHandler_OnReceivers((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
bool q_objectcleanuphandler_is_signal_connected(void* self, void* signal) {
    return QObjectCleanupHandler_IsSignalConnected((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
bool q_objectcleanuphandler_qbase_is_signal_connected(void* self, void* signal) {
    return QObjectCleanupHandler_QBaseIsSignalConnected((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, bool (*slot)(QObjectCleanupHandler*, QMetaMethod*) ```
void q_objectcleanuphandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnIsSignalConnected((QObjectCleanupHandler*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_delete(void* self) {
    QObjectCleanupHandler_Delete((QObjectCleanupHandler*)(self));
}