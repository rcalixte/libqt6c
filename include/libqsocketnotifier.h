#pragma once
#ifndef SRCQT6C_LIBQSOCKETNOTIFIER_H
#define SRCQT6C_LIBQSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsocketnotifier.html

/// q_socketnotifier_new constructs a new QSocketNotifier object.
///
/// ``` enum QSocketNotifier__Type param1 ```
QSocketNotifier* q_socketnotifier_new(int64_t param1);

/// q_socketnotifier_new2 constructs a new QSocketNotifier object.
///
/// ``` intptr_t socket, enum QSocketNotifier__Type param2 ```
QSocketNotifier* q_socketnotifier_new2(intptr_t socket, int64_t param2);

/// q_socketnotifier_new3 constructs a new QSocketNotifier object.
///
/// ``` enum QSocketNotifier__Type param1, QObject* parent ```
QSocketNotifier* q_socketnotifier_new3(int64_t param1, void* parent);

/// q_socketnotifier_new4 constructs a new QSocketNotifier object.
///
/// ``` intptr_t socket, enum QSocketNotifier__Type param2, QObject* parent ```
QSocketNotifier* q_socketnotifier_new4(intptr_t socket, int64_t param2, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSocketNotifier* self ```
const QMetaObject* q_socketnotifier_meta_object(void* self);

/// ``` QSocketNotifier* self, const char* param1 ```
void* q_socketnotifier_metacast(void* self, const char* param1);

/// ``` QSocketNotifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_socketnotifier_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSocketNotifier* self, int32_t (*slot)(QSocketNotifier*, enum QMetaObject__Call, int, void*) ```
void q_socketnotifier_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSocketNotifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_socketnotifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_socketnotifier_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#setSocket)
///
/// ``` QSocketNotifier* self, intptr_t socket ```
void q_socketnotifier_set_socket(void* self, intptr_t socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#socket)
///
/// ``` QSocketNotifier* self ```
intptr_t q_socketnotifier_socket(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#type)
///
/// ``` QSocketNotifier* self ```
int64_t q_socketnotifier_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#isValid)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#isEnabled)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#setEnabled)
///
/// ``` QSocketNotifier* self, bool enabled ```
void q_socketnotifier_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// ``` QSocketNotifier* self, QEvent* param1 ```
bool q_socketnotifier_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QSocketNotifier* self, bool (*slot)(QSocketNotifier*, QEvent*) ```
void q_socketnotifier_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#event)
///
/// Base class method implementation
///
/// ``` QSocketNotifier* self, QEvent* param1 ```
bool q_socketnotifier_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_socketnotifier_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_socketnotifier_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSocketNotifier* self ```
const char* q_socketnotifier_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSocketNotifier* self, char* name ```
void q_socketnotifier_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSocketNotifier* self ```
bool q_socketnotifier_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSocketNotifier* self, bool b ```
bool q_socketnotifier_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSocketNotifier* self ```
QThread* q_socketnotifier_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSocketNotifier* self, QThread* thread ```
bool q_socketnotifier_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSocketNotifier* self, int interval ```
int32_t q_socketnotifier_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSocketNotifier* self, int id ```
void q_socketnotifier_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSocketNotifier* self, enum Qt__TimerId id ```
void q_socketnotifier_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSocketNotifier* self ```
libqt_list /* of QObject* */ q_socketnotifier_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSocketNotifier* self, QObject* parent ```
void q_socketnotifier_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSocketNotifier* self, QObject* filterObj ```
void q_socketnotifier_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSocketNotifier* self, QObject* obj ```
void q_socketnotifier_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_socketnotifier_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSocketNotifier* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_socketnotifier_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_socketnotifier_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_socketnotifier_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSocketNotifier* self, const char* name, QVariant* value ```
bool q_socketnotifier_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSocketNotifier* self, const char* name ```
QVariant* q_socketnotifier_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSocketNotifier* self ```
const char** q_socketnotifier_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSocketNotifier* self ```
QBindingStorage* q_socketnotifier_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSocketNotifier* self ```
const QBindingStorage* q_socketnotifier_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSocketNotifier* self, void (*slot)(QObject*) ```
void q_socketnotifier_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSocketNotifier* self ```
QObject* q_socketnotifier_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSocketNotifier* self, const char* classname ```
bool q_socketnotifier_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSocketNotifier* self, QThread* thread, Disambiguated_t* param2 ```
bool q_socketnotifier_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSocketNotifier* self, int interval, enum Qt__TimerType timerType ```
int32_t q_socketnotifier_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_socketnotifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSocketNotifier* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_socketnotifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSocketNotifier* self, QObject* param1 ```
void q_socketnotifier_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSocketNotifier* self, void (*slot)(QObject*, QObject*) ```
void q_socketnotifier_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QObject* watched, QEvent* event ```
bool q_socketnotifier_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QObject* watched, QEvent* event ```
bool q_socketnotifier_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, bool (*slot)(QSocketNotifier*, QObject*, QEvent*) ```
void q_socketnotifier_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QTimerEvent* event ```
void q_socketnotifier_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QTimerEvent* event ```
void q_socketnotifier_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QTimerEvent*) ```
void q_socketnotifier_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QChildEvent* event ```
void q_socketnotifier_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QChildEvent* event ```
void q_socketnotifier_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QChildEvent*) ```
void q_socketnotifier_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QEvent* event ```
void q_socketnotifier_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QEvent* event ```
void q_socketnotifier_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QEvent*) ```
void q_socketnotifier_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QMetaMethod*) ```
void q_socketnotifier_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
void q_socketnotifier_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QMetaMethod*) ```
void q_socketnotifier_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self ```
QObject* q_socketnotifier_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self ```
QObject* q_socketnotifier_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, QObject* (*slot)() ```
void q_socketnotifier_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self ```
int32_t q_socketnotifier_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self ```
int32_t q_socketnotifier_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, int32_t (*slot)() ```
void q_socketnotifier_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, const char* signal ```
int32_t q_socketnotifier_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, const char* signal ```
int32_t q_socketnotifier_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, int32_t (*slot)(QSocketNotifier*, const char*) ```
void q_socketnotifier_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
bool q_socketnotifier_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSocketNotifier* self, QMetaMethod* signal ```
bool q_socketnotifier_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSocketNotifier* self, bool (*slot)(QSocketNotifier*, QMetaMethod*) ```
void q_socketnotifier_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#activated)
///
/// Wrapper to allow calling private signal
///
/// ``` QSocketNotifier* self, void (*slot)(QSocketNotifier*, QSocketDescriptor*, enum QSocketNotifier__Type) ```
void q_socketnotifier_on_activated(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSocketNotifier* self, void (*slot)(QObject*, const char*) ```
void q_socketnotifier_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketnotifier.html#dtor.QSocketNotifier)
///
/// Delete this object from C++ memory.
///
/// ``` QSocketNotifier* self ```
void q_socketnotifier_delete(void* self);

/// https://doc.qt.io/qt-6/qsocketdescriptor.html

/// q_socketdescriptor_new constructs a new QSocketDescriptor object.
///
/// ``` QSocketDescriptor* other ```
QSocketDescriptor* q_socketdescriptor_new(void* other);

/// q_socketdescriptor_new2 constructs a new QSocketDescriptor object and invalidates the source QSocketDescriptor object.
///
/// ``` QSocketDescriptor* other ```
QSocketDescriptor* q_socketdescriptor_new2(void* other);

/// q_socketdescriptor_new3 constructs a new QSocketDescriptor object.
///
///
QSocketDescriptor* q_socketdescriptor_new3();

/// q_socketdescriptor_new4 constructs a new QSocketDescriptor object.
///
/// ``` QSocketDescriptor* param1 ```
QSocketDescriptor* q_socketdescriptor_new4(void* param1);

/// q_socketdescriptor_new5 constructs a new QSocketDescriptor object.
///
/// ``` int descriptor ```
QSocketDescriptor* q_socketdescriptor_new5(int descriptor);

/// q_socketdescriptor_copy_assign shallow copies `other` into `self`.
///
/// ``` QSocketDescriptor* self, QSocketDescriptor* other ```
void q_socketdescriptor_copy_assign(void* self, void* other);

/// q_socketdescriptor_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSocketDescriptor* self, QSocketDescriptor* other ```
void q_socketdescriptor_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#operator)
///
/// ``` QSocketDescriptor* self ```
int32_t q_socketdescriptor_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#isValid)
///
/// ``` QSocketDescriptor* self ```
bool q_socketdescriptor_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsocketdescriptor.html#dtor.QSocketDescriptor)
///
/// Delete this object from C++ memory.
///
/// ``` QSocketDescriptor* self ```
void q_socketdescriptor_delete(void* self);

/// https://doc.qt.io/qt-6/qsocketnotifier.html#types

typedef enum {
    QSOCKETNOTIFIER_TYPE_READ = 0,
    QSOCKETNOTIFIER_TYPE_WRITE = 1,
    QSOCKETNOTIFIER_TYPE_EXCEPTION = 2
} QSocketNotifier__Type;

#endif
