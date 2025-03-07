#include "libqaccessible.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqaccessibleplugin.hpp"
#include "libqaccessibleplugin.h"

/// https://doc.qt.io/qt-6/qaccessibleplugin.html

/// q_accessibleplugin_new constructs a new QAccessiblePlugin object.
///
///
QAccessiblePlugin* q_accessibleplugin_new() {
    return QAccessiblePlugin_new();
}

/// q_accessibleplugin_new2 constructs a new QAccessiblePlugin object.
///
/// ``` QObject* parent ```
QAccessiblePlugin* q_accessibleplugin_new2(void* parent) {
    return QAccessiblePlugin_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAccessiblePlugin* self ```
QMetaObject* q_accessibleplugin_meta_object(void* self) {
    return QAccessiblePlugin_MetaObject((QAccessiblePlugin*)self);
}

/// ``` QAccessiblePlugin* self, const char* param1 ```
void* q_accessibleplugin_metacast(void* self, const char* param1) {
    return QAccessiblePlugin_Metacast((QAccessiblePlugin*)self, param1);
}

/// ``` QAccessiblePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessibleplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessiblePlugin_Metacall((QAccessiblePlugin*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAccessiblePlugin* self, int32_t (*slot)(QAccessiblePlugin*, enum QMetaObject__Call, int, void*) ```
void q_accessibleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAccessiblePlugin_OnMetacall((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessiblePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessibleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessiblePlugin_QBaseMetacall((QAccessiblePlugin*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_accessibleplugin_tr(const char* s) {
    libqt_string _str = QAccessiblePlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleplugin.html#create)
///
/// ``` QAccessiblePlugin* self, const char* key, QObject* object ```
QAccessibleInterface* q_accessibleplugin_create(void* self, const char* key, void* object) {
    return QAccessiblePlugin_Create((QAccessiblePlugin*)self, qstring(key), (QObject*)object);
}

/// Allows for overriding the related default method
///
/// ``` QAccessiblePlugin* self, QAccessibleInterface* (*slot)(QAccessiblePlugin*, const char*, QObject*) ```
void q_accessibleplugin_on_create(void* self, QAccessibleInterface* (*slot)(void*, const char*, void*)) {
    QAccessiblePlugin_OnCreate((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessiblePlugin* self, const char* key, QObject* object ```
QAccessibleInterface* q_accessibleplugin_qbase_create(void* self, const char* key, void* object) {
    return QAccessiblePlugin_QBaseCreate((QAccessiblePlugin*)self, qstring(key), (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_accessibleplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QAccessiblePlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_accessibleplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAccessiblePlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAccessiblePlugin* self ```
const char* q_accessibleplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAccessiblePlugin* self, const char* name ```
void q_accessibleplugin_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAccessiblePlugin* self, bool b ```
bool q_accessibleplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAccessiblePlugin* self ```
QThread* q_accessibleplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAccessiblePlugin* self, QThread* thread ```
void q_accessibleplugin_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessiblePlugin* self, int interval ```
int32_t q_accessibleplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAccessiblePlugin* self, int id ```
void q_accessibleplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAccessiblePlugin* self ```
libqt_list /* of QObject* */ q_accessibleplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAccessiblePlugin* self, QObject* parent ```
void q_accessibleplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAccessiblePlugin* self, QObject* filterObj ```
void q_accessibleplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAccessiblePlugin* self, QObject* obj ```
void q_accessibleplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_accessibleplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessiblePlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_accessibleplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_accessibleplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_accessibleplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAccessiblePlugin* self, const char* name, QVariant* value ```
bool q_accessibleplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAccessiblePlugin* self, const char* name ```
QVariant* q_accessibleplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAccessiblePlugin* self ```
const char** q_accessibleplugin_dynamic_property_names(void* self) {
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
/// ``` QAccessiblePlugin* self ```
QBindingStorage* q_accessibleplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAccessiblePlugin* self ```
QBindingStorage* q_accessibleplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAccessiblePlugin* self, void (*slot)(QObject*) ```
void q_accessibleplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAccessiblePlugin* self ```
QObject* q_accessibleplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAccessiblePlugin* self, const char* classname ```
bool q_accessibleplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessiblePlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_accessibleplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessibleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessiblePlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessibleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessiblePlugin* self, QObject* param1 ```
void q_accessibleplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAccessiblePlugin* self, void (*slot)(QObject*, QObject*) ```
void q_accessibleplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
bool q_accessibleplugin_event(void* self, void* event) {
    return QAccessiblePlugin_Event((QAccessiblePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
bool q_accessibleplugin_qbase_event(void* self, void* event) {
    return QAccessiblePlugin_QBaseEvent((QAccessiblePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, bool (*slot)(QAccessiblePlugin*, QEvent*) ```
void q_accessibleplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QAccessiblePlugin_OnEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QObject* watched, QEvent* event ```
bool q_accessibleplugin_event_filter(void* self, void* watched, void* event) {
    return QAccessiblePlugin_EventFilter((QAccessiblePlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QObject* watched, QEvent* event ```
bool q_accessibleplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QAccessiblePlugin_QBaseEventFilter((QAccessiblePlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, bool (*slot)(QAccessiblePlugin*, QObject*, QEvent*) ```
void q_accessibleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAccessiblePlugin_OnEventFilter((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QTimerEvent* event ```
void q_accessibleplugin_timer_event(void* self, void* event) {
    QAccessiblePlugin_TimerEvent((QAccessiblePlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QTimerEvent* event ```
void q_accessibleplugin_qbase_timer_event(void* self, void* event) {
    QAccessiblePlugin_QBaseTimerEvent((QAccessiblePlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QTimerEvent*) ```
void q_accessibleplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnTimerEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QChildEvent* event ```
void q_accessibleplugin_child_event(void* self, void* event) {
    QAccessiblePlugin_ChildEvent((QAccessiblePlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QChildEvent* event ```
void q_accessibleplugin_qbase_child_event(void* self, void* event) {
    QAccessiblePlugin_QBaseChildEvent((QAccessiblePlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QChildEvent*) ```
void q_accessibleplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnChildEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
void q_accessibleplugin_custom_event(void* self, void* event) {
    QAccessiblePlugin_CustomEvent((QAccessiblePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
void q_accessibleplugin_qbase_custom_event(void* self, void* event) {
    QAccessiblePlugin_QBaseCustomEvent((QAccessiblePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QEvent*) ```
void q_accessibleplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnCustomEvent((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_connect_notify(void* self, void* signal) {
    QAccessiblePlugin_ConnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_qbase_connect_notify(void* self, void* signal) {
    QAccessiblePlugin_QBaseConnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QMetaMethod*) ```
void q_accessibleplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnConnectNotify((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_disconnect_notify(void* self, void* signal) {
    QAccessiblePlugin_DisconnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_qbase_disconnect_notify(void* self, void* signal) {
    QAccessiblePlugin_QBaseDisconnectNotify((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QMetaMethod*) ```
void q_accessibleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessiblePlugin_OnDisconnectNotify((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
QObject* q_accessibleplugin_sender(void* self) {
    return QAccessiblePlugin_Sender((QAccessiblePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
QObject* q_accessibleplugin_qbase_sender(void* self) {
    return QAccessiblePlugin_QBaseSender((QAccessiblePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QObject* (*slot)() ```
void q_accessibleplugin_on_sender(void* self, QObject* (*slot)()) {
    QAccessiblePlugin_OnSender((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
int32_t q_accessibleplugin_sender_signal_index(void* self) {
    return QAccessiblePlugin_SenderSignalIndex((QAccessiblePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
int32_t q_accessibleplugin_qbase_sender_signal_index(void* self) {
    return QAccessiblePlugin_QBaseSenderSignalIndex((QAccessiblePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, int32_t (*slot)() ```
void q_accessibleplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAccessiblePlugin_OnSenderSignalIndex((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, const char* signal ```
int32_t q_accessibleplugin_receivers(void* self, const char* signal) {
    return QAccessiblePlugin_Receivers((QAccessiblePlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, const char* signal ```
int32_t q_accessibleplugin_qbase_receivers(void* self, const char* signal) {
    return QAccessiblePlugin_QBaseReceivers((QAccessiblePlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, int32_t (*slot)(QAccessiblePlugin*, const char*) ```
void q_accessibleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAccessiblePlugin_OnReceivers((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
bool q_accessibleplugin_is_signal_connected(void* self, void* signal) {
    return QAccessiblePlugin_IsSignalConnected((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
bool q_accessibleplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QAccessiblePlugin_QBaseIsSignalConnected((QAccessiblePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, bool (*slot)(QAccessiblePlugin*, QMetaMethod*) ```
void q_accessibleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAccessiblePlugin_OnIsSignalConnected((QAccessiblePlugin*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_delete(void* self) {
    QAccessiblePlugin_Delete((QAccessiblePlugin*)(self));
}