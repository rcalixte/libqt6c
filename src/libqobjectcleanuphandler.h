#pragma once
#ifndef SRCQT6C_LIBQOBJECTCLEANUPHANDLER_H
#define SRCQT6C_LIBQOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qobjectcleanuphandler.html

/// q_objectcleanuphandler_new constructs a new QObjectCleanupHandler object.
///
///
QObjectCleanupHandler* q_objectcleanuphandler_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QObjectCleanupHandler* self ```
const QMetaObject* q_objectcleanuphandler_meta_object(void* self);

/// ``` QObjectCleanupHandler* self, const char* param1 ```
void* q_objectcleanuphandler_metacast(void* self, const char* param1);

/// ``` QObjectCleanupHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_objectcleanuphandler_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QObjectCleanupHandler* self, int32_t (*slot)(QObjectCleanupHandler*, enum QMetaObject__Call, int, void*) ```
void q_objectcleanuphandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QObjectCleanupHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_objectcleanuphandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_objectcleanuphandler_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#add)
///
/// ``` QObjectCleanupHandler* self, QObject* object ```
QObject* q_objectcleanuphandler_add(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#remove)
///
/// ``` QObjectCleanupHandler* self, QObject* object ```
void q_objectcleanuphandler_remove(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#isEmpty)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#clear)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_objectcleanuphandler_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QObjectCleanupHandler* self ```
const char* q_objectcleanuphandler_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QObjectCleanupHandler* self, char* name ```
void q_objectcleanuphandler_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QObjectCleanupHandler* self ```
bool q_objectcleanuphandler_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QObjectCleanupHandler* self, bool b ```
bool q_objectcleanuphandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QObjectCleanupHandler* self ```
QThread* q_objectcleanuphandler_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QObjectCleanupHandler* self, QThread* thread ```
bool q_objectcleanuphandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObjectCleanupHandler* self, int interval ```
int32_t q_objectcleanuphandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QObjectCleanupHandler* self, int id ```
void q_objectcleanuphandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QObjectCleanupHandler* self, enum Qt__TimerId id ```
void q_objectcleanuphandler_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QObjectCleanupHandler* self ```
libqt_list /* of QObject* */ q_objectcleanuphandler_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QObjectCleanupHandler* self, QObject* parent ```
void q_objectcleanuphandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QObjectCleanupHandler* self, QObject* filterObj ```
void q_objectcleanuphandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QObjectCleanupHandler* self, QObject* obj ```
void q_objectcleanuphandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_objectcleanuphandler_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObjectCleanupHandler* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_objectcleanuphandler_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_objectcleanuphandler_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_objectcleanuphandler_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QObjectCleanupHandler* self, const char* name, QVariant* value ```
bool q_objectcleanuphandler_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QObjectCleanupHandler* self, const char* name ```
QVariant* q_objectcleanuphandler_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QObjectCleanupHandler* self ```
const char** q_objectcleanuphandler_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObjectCleanupHandler* self ```
QBindingStorage* q_objectcleanuphandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObjectCleanupHandler* self ```
const QBindingStorage* q_objectcleanuphandler_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObject*) ```
void q_objectcleanuphandler_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QObjectCleanupHandler* self ```
QObject* q_objectcleanuphandler_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QObjectCleanupHandler* self, const char* classname ```
bool q_objectcleanuphandler_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QObjectCleanupHandler* self, QThread* thread, Disambiguated_t* param2 ```
bool q_objectcleanuphandler_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObjectCleanupHandler* self, int interval, enum Qt__TimerType timerType ```
int32_t q_objectcleanuphandler_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_objectcleanuphandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObjectCleanupHandler* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_objectcleanuphandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObjectCleanupHandler* self, QObject* param1 ```
void q_objectcleanuphandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObject*, QObject*) ```
void q_objectcleanuphandler_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
bool q_objectcleanuphandler_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
bool q_objectcleanuphandler_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, bool (*slot)(QObjectCleanupHandler*, QEvent*) ```
void q_objectcleanuphandler_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QObject* watched, QEvent* event ```
bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QObject* watched, QEvent* event ```
bool q_objectcleanuphandler_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, bool (*slot)(QObjectCleanupHandler*, QObject*, QEvent*) ```
void q_objectcleanuphandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QTimerEvent* event ```
void q_objectcleanuphandler_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QTimerEvent* event ```
void q_objectcleanuphandler_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QTimerEvent*) ```
void q_objectcleanuphandler_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QChildEvent* event ```
void q_objectcleanuphandler_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QChildEvent* event ```
void q_objectcleanuphandler_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QChildEvent*) ```
void q_objectcleanuphandler_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
void q_objectcleanuphandler_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QEvent* event ```
void q_objectcleanuphandler_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QEvent*) ```
void q_objectcleanuphandler_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QMetaMethod*) ```
void q_objectcleanuphandler_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
void q_objectcleanuphandler_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObjectCleanupHandler*, QMetaMethod*) ```
void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
QObject* q_objectcleanuphandler_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
QObject* q_objectcleanuphandler_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QObject* (*slot)() ```
void q_objectcleanuphandler_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
int32_t q_objectcleanuphandler_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self ```
int32_t q_objectcleanuphandler_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, int32_t (*slot)() ```
void q_objectcleanuphandler_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, const char* signal ```
int32_t q_objectcleanuphandler_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, const char* signal ```
int32_t q_objectcleanuphandler_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, int32_t (*slot)(QObjectCleanupHandler*, const char*) ```
void q_objectcleanuphandler_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
bool q_objectcleanuphandler_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, QMetaMethod* signal ```
bool q_objectcleanuphandler_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QObjectCleanupHandler* self, bool (*slot)(QObjectCleanupHandler*, QMetaMethod*) ```
void q_objectcleanuphandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QObjectCleanupHandler* self, void (*slot)(QObject*, const char*) ```
void q_objectcleanuphandler_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#dtor.QObjectCleanupHandler)
///
/// Delete this object from C++ memory.
///
/// ``` QObjectCleanupHandler* self ```
void q_objectcleanuphandler_delete(void* self);

#endif
