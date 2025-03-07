#include "libqevent.hpp"
#include "libqaccessible.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqaccessiblebridge.hpp"
#include "libqaccessiblebridge.h"

/// https://doc.qt.io/qt-6/qaccessiblebridge.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#setRootObject)
///
/// ``` QAccessibleBridge* self, QAccessibleInterface* rootObject ```
void q_accessiblebridge_set_root_object(void* self, void* rootObject) {
    QAccessibleBridge_SetRootObject((QAccessibleBridge*)self, (QAccessibleInterface*)rootObject);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#notifyAccessibilityUpdate)
///
/// ``` QAccessibleBridge* self, QAccessibleEvent* event ```
void q_accessiblebridge_notify_accessibility_update(void* self, void* event) {
    QAccessibleBridge_NotifyAccessibilityUpdate((QAccessibleBridge*)self, (QAccessibleEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#operator=)
///
/// ``` QAccessibleBridge* self, QAccessibleBridge* param1 ```
void q_accessiblebridge_operator_assign(void* self, void* param1) {
    QAccessibleBridge_OperatorAssign((QAccessibleBridge*)self, (QAccessibleBridge*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleBridge* self ```
void q_accessiblebridge_delete(void* self) {
    QAccessibleBridge_Delete((QAccessibleBridge*)(self));
}

/// https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html

/// q_accessiblebridgeplugin_new constructs a new QAccessibleBridgePlugin object.
///
///
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new() {
    return QAccessibleBridgePlugin_new();
}

/// q_accessiblebridgeplugin_new2 constructs a new QAccessibleBridgePlugin object.
///
/// ``` QObject* parent ```
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new2(void* parent) {
    return QAccessibleBridgePlugin_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAccessibleBridgePlugin* self ```
QMetaObject* q_accessiblebridgeplugin_meta_object(void* self) {
    return QAccessibleBridgePlugin_MetaObject((QAccessibleBridgePlugin*)self);
}

/// ``` QAccessibleBridgePlugin* self, const char* param1 ```
void* q_accessiblebridgeplugin_metacast(void* self, const char* param1) {
    return QAccessibleBridgePlugin_Metacast((QAccessibleBridgePlugin*)self, param1);
}

/// ``` QAccessibleBridgePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessiblebridgeplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessibleBridgePlugin_Metacall((QAccessibleBridgePlugin*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleBridgePlugin* self, int32_t (*slot)(QAccessibleBridgePlugin*, enum QMetaObject__Call, int, void*) ```
void q_accessiblebridgeplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAccessibleBridgePlugin_OnMetacall((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleBridgePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessiblebridgeplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessibleBridgePlugin_QBaseMetacall((QAccessibleBridgePlugin*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_accessiblebridgeplugin_tr(const char* s) {
    libqt_string _str = QAccessibleBridgePlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// ``` QAccessibleBridgePlugin* self, const char* key ```
QAccessibleBridge* q_accessiblebridgeplugin_create(void* self, const char* key) {
    return QAccessibleBridgePlugin_Create((QAccessibleBridgePlugin*)self, qstring(key));
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleBridgePlugin* self, QAccessibleBridge* (*slot)(QAccessibleBridgePlugin*, const char*) ```
void q_accessiblebridgeplugin_on_create(void* self, QAccessibleBridge* (*slot)(void*, const char*)) {
    QAccessibleBridgePlugin_OnCreate((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleBridgePlugin* self, const char* key ```
QAccessibleBridge* q_accessiblebridgeplugin_qbase_create(void* self, const char* key) {
    return QAccessibleBridgePlugin_QBaseCreate((QAccessibleBridgePlugin*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_accessiblebridgeplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QAccessibleBridgePlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_accessiblebridgeplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAccessibleBridgePlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAccessibleBridgePlugin* self ```
const char* q_accessiblebridgeplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAccessibleBridgePlugin* self, const char* name ```
void q_accessiblebridgeplugin_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAccessibleBridgePlugin* self, bool b ```
bool q_accessiblebridgeplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAccessibleBridgePlugin* self ```
QThread* q_accessiblebridgeplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAccessibleBridgePlugin* self, QThread* thread ```
void q_accessiblebridgeplugin_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessibleBridgePlugin* self, int interval ```
int32_t q_accessiblebridgeplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAccessibleBridgePlugin* self, int id ```
void q_accessiblebridgeplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAccessibleBridgePlugin* self ```
libqt_list /* of QObject* */ q_accessiblebridgeplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAccessibleBridgePlugin* self, QObject* parent ```
void q_accessiblebridgeplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAccessibleBridgePlugin* self, QObject* filterObj ```
void q_accessiblebridgeplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAccessibleBridgePlugin* self, QObject* obj ```
void q_accessiblebridgeplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessibleBridgePlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_accessiblebridgeplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_accessiblebridgeplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAccessibleBridgePlugin* self, const char* name, QVariant* value ```
bool q_accessiblebridgeplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAccessibleBridgePlugin* self, const char* name ```
QVariant* q_accessiblebridgeplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAccessibleBridgePlugin* self ```
const char** q_accessiblebridgeplugin_dynamic_property_names(void* self) {
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
/// ``` QAccessibleBridgePlugin* self ```
QBindingStorage* q_accessiblebridgeplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAccessibleBridgePlugin* self ```
QBindingStorage* q_accessiblebridgeplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QObject*) ```
void q_accessiblebridgeplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAccessibleBridgePlugin* self ```
QObject* q_accessiblebridgeplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAccessibleBridgePlugin* self, const char* classname ```
bool q_accessiblebridgeplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessibleBridgePlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_accessiblebridgeplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessibleBridgePlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessibleBridgePlugin* self, QObject* param1 ```
void q_accessiblebridgeplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QObject*, QObject*) ```
void q_accessiblebridgeplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
bool q_accessiblebridgeplugin_event(void* self, void* event) {
    return QAccessibleBridgePlugin_Event((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
bool q_accessiblebridgeplugin_qbase_event(void* self, void* event) {
    return QAccessibleBridgePlugin_QBaseEvent((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, bool (*slot)(QAccessibleBridgePlugin*, QEvent*) ```
void q_accessiblebridgeplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QObject* watched, QEvent* event ```
bool q_accessiblebridgeplugin_event_filter(void* self, void* watched, void* event) {
    return QAccessibleBridgePlugin_EventFilter((QAccessibleBridgePlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QObject* watched, QEvent* event ```
bool q_accessiblebridgeplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QAccessibleBridgePlugin_QBaseEventFilter((QAccessibleBridgePlugin*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, bool (*slot)(QAccessibleBridgePlugin*, QObject*, QEvent*) ```
void q_accessiblebridgeplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAccessibleBridgePlugin_OnEventFilter((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QTimerEvent* event ```
void q_accessiblebridgeplugin_timer_event(void* self, void* event) {
    QAccessibleBridgePlugin_TimerEvent((QAccessibleBridgePlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QTimerEvent* event ```
void q_accessiblebridgeplugin_qbase_timer_event(void* self, void* event) {
    QAccessibleBridgePlugin_QBaseTimerEvent((QAccessibleBridgePlugin*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QTimerEvent*) ```
void q_accessiblebridgeplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnTimerEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QChildEvent* event ```
void q_accessiblebridgeplugin_child_event(void* self, void* event) {
    QAccessibleBridgePlugin_ChildEvent((QAccessibleBridgePlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QChildEvent* event ```
void q_accessiblebridgeplugin_qbase_child_event(void* self, void* event) {
    QAccessibleBridgePlugin_QBaseChildEvent((QAccessibleBridgePlugin*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QChildEvent*) ```
void q_accessiblebridgeplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnChildEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
void q_accessiblebridgeplugin_custom_event(void* self, void* event) {
    QAccessibleBridgePlugin_CustomEvent((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
void q_accessiblebridgeplugin_qbase_custom_event(void* self, void* event) {
    QAccessibleBridgePlugin_QBaseCustomEvent((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QEvent*) ```
void q_accessiblebridgeplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnCustomEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_connect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_ConnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_qbase_connect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_QBaseConnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QMetaMethod*) ```
void q_accessiblebridgeplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnConnectNotify((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_disconnect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_DisconnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_qbase_disconnect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_QBaseDisconnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QMetaMethod*) ```
void q_accessiblebridgeplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnDisconnectNotify((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
QObject* q_accessiblebridgeplugin_sender(void* self) {
    return QAccessibleBridgePlugin_Sender((QAccessibleBridgePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
QObject* q_accessiblebridgeplugin_qbase_sender(void* self) {
    return QAccessibleBridgePlugin_QBaseSender((QAccessibleBridgePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QObject* (*slot)() ```
void q_accessiblebridgeplugin_on_sender(void* self, QObject* (*slot)()) {
    QAccessibleBridgePlugin_OnSender((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
int32_t q_accessiblebridgeplugin_sender_signal_index(void* self) {
    return QAccessibleBridgePlugin_SenderSignalIndex((QAccessibleBridgePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
int32_t q_accessiblebridgeplugin_qbase_sender_signal_index(void* self) {
    return QAccessibleBridgePlugin_QBaseSenderSignalIndex((QAccessibleBridgePlugin*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, int32_t (*slot)() ```
void q_accessiblebridgeplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAccessibleBridgePlugin_OnSenderSignalIndex((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, const char* signal ```
int32_t q_accessiblebridgeplugin_receivers(void* self, const char* signal) {
    return QAccessibleBridgePlugin_Receivers((QAccessibleBridgePlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, const char* signal ```
int32_t q_accessiblebridgeplugin_qbase_receivers(void* self, const char* signal) {
    return QAccessibleBridgePlugin_QBaseReceivers((QAccessibleBridgePlugin*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, int32_t (*slot)(QAccessibleBridgePlugin*, const char*) ```
void q_accessiblebridgeplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAccessibleBridgePlugin_OnReceivers((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
bool q_accessiblebridgeplugin_is_signal_connected(void* self, void* signal) {
    return QAccessibleBridgePlugin_IsSignalConnected((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
bool q_accessiblebridgeplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QAccessibleBridgePlugin_QBaseIsSignalConnected((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, bool (*slot)(QAccessibleBridgePlugin*, QMetaMethod*) ```
void q_accessiblebridgeplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnIsSignalConnected((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_delete(void* self) {
    QAccessibleBridgePlugin_Delete((QAccessibleBridgePlugin*)(self));
}