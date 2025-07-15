#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEBRIDGE_H
#define SRCQT6C_LIBQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qaccessiblebridge.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#setRootObject)
///
/// ``` QAccessibleBridge* self, QAccessibleInterface* rootObject ```
void q_accessiblebridge_set_root_object(void* self, void* rootObject);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#notifyAccessibilityUpdate)
///
/// ``` QAccessibleBridge* self, QAccessibleEvent* event ```
void q_accessiblebridge_notify_accessibility_update(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#operator=)
///
/// ``` QAccessibleBridge* self, QAccessibleBridge* param1 ```
void q_accessiblebridge_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridge.html#dtor.QAccessibleBridge)
///
/// Delete this object from C++ memory.
///
/// ``` QAccessibleBridge* self ```
void q_accessiblebridge_delete(void* self);

/// https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html

/// q_accessiblebridgeplugin_new constructs a new QAccessibleBridgePlugin object.
///
///
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new();

/// q_accessiblebridgeplugin_new2 constructs a new QAccessibleBridgePlugin object.
///
/// ``` QObject* parent ```
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAccessibleBridgePlugin* self ```
const QMetaObject* q_accessiblebridgeplugin_meta_object(void* self);

/// ``` QAccessibleBridgePlugin* self, const char* param1 ```
void* q_accessiblebridgeplugin_metacast(void* self, const char* param1);

/// ``` QAccessibleBridgePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessiblebridgeplugin_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAccessibleBridgePlugin* self, int32_t (*slot)(QAccessibleBridgePlugin*, enum QMetaObject__Call, int, void*) ```
void q_accessiblebridgeplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAccessibleBridgePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessiblebridgeplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_accessiblebridgeplugin_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// ``` QAccessibleBridgePlugin* self, const char* key ```
QAccessibleBridge* q_accessiblebridgeplugin_create(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleBridgePlugin* self, QAccessibleBridge* (*slot)(QAccessibleBridgePlugin*, const char*) ```
void q_accessiblebridgeplugin_on_create(void* self, QAccessibleBridge* (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// Base class method implementation
///
/// ``` QAccessibleBridgePlugin* self, const char* key ```
QAccessibleBridge* q_accessiblebridgeplugin_qbase_create(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_accessiblebridgeplugin_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_accessiblebridgeplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAccessibleBridgePlugin* self ```
const char* q_accessiblebridgeplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAccessibleBridgePlugin* self, char* name ```
void q_accessiblebridgeplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAccessibleBridgePlugin* self ```
bool q_accessiblebridgeplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAccessibleBridgePlugin* self, bool b ```
bool q_accessiblebridgeplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAccessibleBridgePlugin* self ```
QThread* q_accessiblebridgeplugin_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAccessibleBridgePlugin* self, QThread* thread ```
bool q_accessiblebridgeplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessibleBridgePlugin* self, int interval ```
int32_t q_accessiblebridgeplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAccessibleBridgePlugin* self, int id ```
void q_accessiblebridgeplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAccessibleBridgePlugin* self, enum Qt__TimerId id ```
void q_accessiblebridgeplugin_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAccessibleBridgePlugin* self ```
libqt_list /* of QObject* */ q_accessiblebridgeplugin_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAccessibleBridgePlugin* self, QObject* parent ```
void q_accessiblebridgeplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAccessibleBridgePlugin* self, QObject* filterObj ```
void q_accessiblebridgeplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAccessibleBridgePlugin* self, QObject* obj ```
void q_accessiblebridgeplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessibleBridgePlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_accessiblebridgeplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_accessiblebridgeplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAccessibleBridgePlugin* self, const char* name, QVariant* value ```
bool q_accessiblebridgeplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAccessibleBridgePlugin* self, const char* name ```
QVariant* q_accessiblebridgeplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAccessibleBridgePlugin* self ```
const char** q_accessiblebridgeplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAccessibleBridgePlugin* self ```
QBindingStorage* q_accessiblebridgeplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAccessibleBridgePlugin* self ```
const QBindingStorage* q_accessiblebridgeplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QObject*) ```
void q_accessiblebridgeplugin_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAccessibleBridgePlugin* self ```
QObject* q_accessiblebridgeplugin_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAccessibleBridgePlugin* self, const char* classname ```
bool q_accessiblebridgeplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAccessibleBridgePlugin* self, QThread* thread, Disambiguated_t* param2 ```
bool q_accessiblebridgeplugin_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessibleBridgePlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_accessiblebridgeplugin_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessibleBridgePlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessiblebridgeplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessibleBridgePlugin* self, QObject* param1 ```
void q_accessiblebridgeplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QObject*, QObject*) ```
void q_accessiblebridgeplugin_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
bool q_accessiblebridgeplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
bool q_accessiblebridgeplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, bool (*slot)(QAccessibleBridgePlugin*, QEvent*) ```
void q_accessiblebridgeplugin_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QObject* watched, QEvent* event ```
bool q_accessiblebridgeplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QObject* watched, QEvent* event ```
bool q_accessiblebridgeplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, bool (*slot)(QAccessibleBridgePlugin*, QObject*, QEvent*) ```
void q_accessiblebridgeplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QTimerEvent* event ```
void q_accessiblebridgeplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QTimerEvent* event ```
void q_accessiblebridgeplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QTimerEvent*) ```
void q_accessiblebridgeplugin_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QChildEvent* event ```
void q_accessiblebridgeplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QChildEvent* event ```
void q_accessiblebridgeplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QChildEvent*) ```
void q_accessiblebridgeplugin_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
void q_accessiblebridgeplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QEvent* event ```
void q_accessiblebridgeplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QEvent*) ```
void q_accessiblebridgeplugin_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QMetaMethod*) ```
void q_accessiblebridgeplugin_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
void q_accessiblebridgeplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QAccessibleBridgePlugin*, QMetaMethod*) ```
void q_accessiblebridgeplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
QObject* q_accessiblebridgeplugin_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
QObject* q_accessiblebridgeplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QObject* (*slot)() ```
void q_accessiblebridgeplugin_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
int32_t q_accessiblebridgeplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self ```
int32_t q_accessiblebridgeplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, int32_t (*slot)() ```
void q_accessiblebridgeplugin_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, const char* signal ```
int32_t q_accessiblebridgeplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, const char* signal ```
int32_t q_accessiblebridgeplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, int32_t (*slot)(QAccessibleBridgePlugin*, const char*) ```
void q_accessiblebridgeplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
bool q_accessiblebridgeplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, QMetaMethod* signal ```
bool q_accessiblebridgeplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleBridgePlugin* self, bool (*slot)(QAccessibleBridgePlugin*, QMetaMethod*) ```
void q_accessiblebridgeplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAccessibleBridgePlugin* self, void (*slot)(QObject*, const char*) ```
void q_accessiblebridgeplugin_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#dtor.QAccessibleBridgePlugin)
///
/// Delete this object from C++ memory.
///
/// ``` QAccessibleBridgePlugin* self ```
void q_accessiblebridgeplugin_delete(void* self);

#endif
