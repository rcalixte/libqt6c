#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqstyleplugin.hpp"
#include "libqstyleplugin.h"

/// https://doc.qt.io/qt-6/qstyleplugin.html

/// q_styleplugin_new constructs a new QStylePlugin object.
///
///
QStylePlugin* q_styleplugin_new() {
    return QStylePlugin_new();
}

/// q_styleplugin_new2 constructs a new QStylePlugin object.
///
/// ``` QObject* parent ```
QStylePlugin* q_styleplugin_new2(void* parent) {
    return QStylePlugin_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStylePlugin* self ```
QMetaObject* q_styleplugin_meta_object(void* self) {
    return QStylePlugin_MetaObject((QStylePlugin*)self);
}

/// ``` QStylePlugin* self, const char* param1 ```
void* q_styleplugin_metacast(void* self, const char* param1) {
    return QStylePlugin_Metacast((QStylePlugin*)self, param1);
}

/// ``` QStylePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_styleplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStylePlugin_Metacall((QStylePlugin*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QStylePlugin* self, int32_t (*slot)(QStylePlugin*, enum QMetaObject__Call, int, void*) ```
void q_styleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStylePlugin_OnMetacall((QStylePlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStylePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_styleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStylePlugin_QBaseMetacall((QStylePlugin*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_styleplugin_tr(const char* s) {
    libqt_string _str = QStylePlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleplugin.html#create)
///
/// ``` QStylePlugin* self, const char* key ```
QStyle* q_styleplugin_create(void* self, const char* key) {
    return QStylePlugin_Create((QStylePlugin*)self, qstring(key));
}

/// Allows for overriding the related default method
///
/// ``` QStylePlugin* self, QStyle* (*slot)(QStylePlugin*, const char*) ```
void q_styleplugin_on_create(void* self, QStyle* (*slot)(void*, const char*)) {
    QStylePlugin_OnCreate((QStylePlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStylePlugin* self, const char* key ```
QStyle* q_styleplugin_qbase_create(void* self, const char* key) {
    return QStylePlugin_QBaseCreate((QStylePlugin*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_styleplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QStylePlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_styleplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStylePlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStylePlugin* self ```
const char* q_styleplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStylePlugin* self, const char* name ```
void q_styleplugin_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStylePlugin* self, bool b ```
bool q_styleplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStylePlugin* self ```
QThread* q_styleplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStylePlugin* self, QThread* thread ```
void q_styleplugin_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStylePlugin* self, int interval ```
int32_t q_styleplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStylePlugin* self, int id ```
void q_styleplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStylePlugin* self ```
libqt_list /* of QObject* */ q_styleplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStylePlugin* self, QObject* parent ```
void q_styleplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStylePlugin* self, QObject* filterObj ```
void q_styleplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStylePlugin* self, QObject* obj ```
void q_styleplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_styleplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStylePlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_styleplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_styleplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_styleplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStylePlugin* self, const char* name, QVariant* value ```
bool q_styleplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStylePlugin* self, const char* name ```
QVariant* q_styleplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStylePlugin* self ```
const char** q_styleplugin_dynamic_property_names(void* self) {
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
/// ``` QStylePlugin* self ```
QBindingStorage* q_styleplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStylePlugin* self ```
QBindingStorage* q_styleplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStylePlugin* self, void (*slot)(QObject*) ```
void q_styleplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStylePlugin* self ```
QObject* q_styleplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStylePlugin* self, const char* classname ```
bool q_styleplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStylePlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_styleplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_styleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStylePlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_styleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStylePlugin* self, QObject* param1 ```
void q_styleplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStylePlugin* self, void (*slot)(QObject*, QObject*) ```
void q_styleplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
bool q_styleplugin_event(void* self, void* event) {
    return QStylePlugin_Event((QStylePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
bool q_styleplugin_qbase_event(void* self, void* event) {
    return QStylePlugin_QBaseEvent((QStylePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, bool (*slot)(QStylePlugin*, QEvent*) ```
void q_styleplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QStylePlugin_OnEvent((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QObject* watched, QEvent* event ```
bool q_styleplugin_event_filter(void* self, void* watched, void* event) {
    return QStylePlugin_EventFilter((QStylePlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QObject* watched, QEvent* event ```
bool q_styleplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QStylePlugin_QBaseEventFilter((QStylePlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, bool (*slot)(QStylePlugin*, QObject*, QEvent*) ```
void q_styleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStylePlugin_OnEventFilter((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QTimerEvent* event ```
void q_styleplugin_timer_event(void* self, void* event) {
    QStylePlugin_TimerEvent((QStylePlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QTimerEvent* event ```
void q_styleplugin_qbase_timer_event(void* self, void* event) {
    QStylePlugin_QBaseTimerEvent((QStylePlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QTimerEvent*) ```
void q_styleplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnTimerEvent((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QChildEvent* event ```
void q_styleplugin_child_event(void* self, void* event) {
    QStylePlugin_ChildEvent((QStylePlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QChildEvent* event ```
void q_styleplugin_qbase_child_event(void* self, void* event) {
    QStylePlugin_QBaseChildEvent((QStylePlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QChildEvent*) ```
void q_styleplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnChildEvent((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
void q_styleplugin_custom_event(void* self, void* event) {
    QStylePlugin_CustomEvent((QStylePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
void q_styleplugin_qbase_custom_event(void* self, void* event) {
    QStylePlugin_QBaseCustomEvent((QStylePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QEvent*) ```
void q_styleplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnCustomEvent((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_connect_notify(void* self, void* signal) {
    QStylePlugin_ConnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_qbase_connect_notify(void* self, void* signal) {
    QStylePlugin_QBaseConnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QMetaMethod*) ```
void q_styleplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnConnectNotify((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_disconnect_notify(void* self, void* signal) {
    QStylePlugin_DisconnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_qbase_disconnect_notify(void* self, void* signal) {
    QStylePlugin_QBaseDisconnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QMetaMethod*) ```
void q_styleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStylePlugin_OnDisconnectNotify((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self ```
QObject* q_styleplugin_sender(void* self) {
    return QStylePlugin_Sender((QStylePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self ```
QObject* q_styleplugin_qbase_sender(void* self) {
    return QStylePlugin_QBaseSender((QStylePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, QObject* (*slot)() ```
void q_styleplugin_on_sender(void* self, QObject* (*slot)()) {
    QStylePlugin_OnSender((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self ```
int32_t q_styleplugin_sender_signal_index(void* self) {
    return QStylePlugin_SenderSignalIndex((QStylePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self ```
int32_t q_styleplugin_qbase_sender_signal_index(void* self) {
    return QStylePlugin_QBaseSenderSignalIndex((QStylePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, int32_t (*slot)() ```
void q_styleplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStylePlugin_OnSenderSignalIndex((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, const char* signal ```
int32_t q_styleplugin_receivers(void* self, const char* signal) {
    return QStylePlugin_Receivers((QStylePlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, const char* signal ```
int32_t q_styleplugin_qbase_receivers(void* self, const char* signal) {
    return QStylePlugin_QBaseReceivers((QStylePlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, int32_t (*slot)(QStylePlugin*, const char*) ```
void q_styleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStylePlugin_OnReceivers((QStylePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
bool q_styleplugin_is_signal_connected(void* self, void* signal) {
    return QStylePlugin_IsSignalConnected((QStylePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
bool q_styleplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QStylePlugin_QBaseIsSignalConnected((QStylePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, bool (*slot)(QStylePlugin*, QMetaMethod*) ```
void q_styleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStylePlugin_OnIsSignalConnected((QStylePlugin*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStylePlugin* self ```
void q_styleplugin_delete(void* self) {
    QStylePlugin_Delete((QStylePlugin*)(self));
}