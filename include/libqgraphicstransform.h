#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSTRANSFORM_H
#define SRCQT6C_LIBQGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicstransform.html

/// q_graphicstransform_new constructs a new QGraphicsTransform object.
///
///
QGraphicsTransform* q_graphicstransform_new();

/// q_graphicstransform_new2 constructs a new QGraphicsTransform object.
///
/// ``` QObject* parent ```
QGraphicsTransform* q_graphicstransform_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsTransform* self ```
const QMetaObject* q_graphicstransform_meta_object(void* self);

/// ``` QGraphicsTransform* self, const char* param1 ```
void* q_graphicstransform_metacast(void* self, const char* param1);

/// ``` QGraphicsTransform* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicstransform_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsTransform* self, int32_t (*slot)(QGraphicsTransform*, enum QMetaObject__Call, int, void*) ```
void q_graphicstransform_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsTransform* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicstransform_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicstransform_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// ``` QGraphicsTransform* self, QMatrix4x4* matrix ```
void q_graphicstransform_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QMatrix4x4*) ```
void q_graphicstransform_on_apply_to(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// Base class method implementation
///
/// ``` QGraphicsTransform* self, QMatrix4x4* matrix ```
void q_graphicstransform_qbase_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsTransform* self, void (*slot)() ```
void q_graphicstransform_on_update(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Base class method implementation
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_qbase_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicstransform_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicstransform_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsTransform* self ```
const char* q_graphicstransform_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsTransform* self, char* name ```
void q_graphicstransform_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsTransform* self, bool b ```
bool q_graphicstransform_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsTransform* self ```
QThread* q_graphicstransform_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsTransform* self, QThread* thread ```
bool q_graphicstransform_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsTransform* self, int interval ```
int32_t q_graphicstransform_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsTransform* self, int id ```
void q_graphicstransform_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsTransform* self, enum Qt__TimerId id ```
void q_graphicstransform_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsTransform* self ```
libqt_list /* of QObject* */ q_graphicstransform_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsTransform* self, QObject* parent ```
void q_graphicstransform_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsTransform* self, QObject* filterObj ```
void q_graphicstransform_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsTransform* self, QObject* obj ```
void q_graphicstransform_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicstransform_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsTransform* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicstransform_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicstransform_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicstransform_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsTransform* self, const char* name, QVariant* value ```
bool q_graphicstransform_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsTransform* self, const char* name ```
QVariant* q_graphicstransform_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsTransform* self ```
const char** q_graphicstransform_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsTransform* self ```
QBindingStorage* q_graphicstransform_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsTransform* self ```
const QBindingStorage* q_graphicstransform_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTransform* self, void (*slot)(QObject*) ```
void q_graphicstransform_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsTransform* self ```
QObject* q_graphicstransform_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsTransform* self, const char* classname ```
bool q_graphicstransform_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsTransform* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicstransform_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsTransform* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicstransform_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicstransform_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsTransform* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicstransform_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTransform* self, QObject* param1 ```
void q_graphicstransform_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTransform* self, void (*slot)(QObject*, QObject*) ```
void q_graphicstransform_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
bool q_graphicstransform_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
bool q_graphicstransform_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, bool (*slot)(QGraphicsTransform*, QEvent*) ```
void q_graphicstransform_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QObject* watched, QEvent* event ```
bool q_graphicstransform_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QObject* watched, QEvent* event ```
bool q_graphicstransform_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, bool (*slot)(QGraphicsTransform*, QObject*, QEvent*) ```
void q_graphicstransform_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QTimerEvent* event ```
void q_graphicstransform_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QTimerEvent* event ```
void q_graphicstransform_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QTimerEvent*) ```
void q_graphicstransform_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QChildEvent* event ```
void q_graphicstransform_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QChildEvent* event ```
void q_graphicstransform_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QChildEvent*) ```
void q_graphicstransform_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
void q_graphicstransform_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
void q_graphicstransform_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QEvent*) ```
void q_graphicstransform_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QMetaMethod*) ```
void q_graphicstransform_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QMetaMethod*) ```
void q_graphicstransform_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self ```
QObject* q_graphicstransform_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self ```
QObject* q_graphicstransform_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QObject* (*slot)() ```
void q_graphicstransform_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self ```
int32_t q_graphicstransform_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self ```
int32_t q_graphicstransform_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, int32_t (*slot)() ```
void q_graphicstransform_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, const char* signal ```
int32_t q_graphicstransform_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, const char* signal ```
int32_t q_graphicstransform_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, int32_t (*slot)(QGraphicsTransform*, const char*) ```
void q_graphicstransform_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
bool q_graphicstransform_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
bool q_graphicstransform_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, bool (*slot)(QGraphicsTransform*, QMetaMethod*) ```
void q_graphicstransform_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsTransform* self, void (*slot)(QObject*, const char*) ```
void q_graphicstransform_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#dtor.QGraphicsTransform)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscale.html

/// q_graphicsscale_new constructs a new QGraphicsScale object.
///
///
QGraphicsScale* q_graphicsscale_new();

/// q_graphicsscale_new2 constructs a new QGraphicsScale object.
///
/// ``` QObject* parent ```
QGraphicsScale* q_graphicsscale_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsScale* self ```
const QMetaObject* q_graphicsscale_meta_object(void* self);

/// ``` QGraphicsScale* self, const char* param1 ```
void* q_graphicsscale_metacast(void* self, const char* param1);

/// ``` QGraphicsScale* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscale_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsScale* self, int32_t (*slot)(QGraphicsScale*, enum QMetaObject__Call, int, void*) ```
void q_graphicsscale_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsScale* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscale_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsscale_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#origin)
///
/// ``` QGraphicsScale* self ```
QVector3D* q_graphicsscale_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setOrigin)
///
/// ``` QGraphicsScale* self, QVector3D* point ```
void q_graphicsscale_set_origin(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScale)
///
/// ``` QGraphicsScale* self ```
double q_graphicsscale_x_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setXScale)
///
/// ``` QGraphicsScale* self, double xScale ```
void q_graphicsscale_set_x_scale(void* self, double xScale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScale)
///
/// ``` QGraphicsScale* self ```
double q_graphicsscale_y_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setYScale)
///
/// ``` QGraphicsScale* self, double yScale ```
void q_graphicsscale_set_y_scale(void* self, double yScale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScale)
///
/// ``` QGraphicsScale* self ```
double q_graphicsscale_z_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setZScale)
///
/// ``` QGraphicsScale* self, double zScale ```
void q_graphicsscale_set_z_scale(void* self, double zScale);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// ``` QGraphicsScale* self, QMatrix4x4* matrix ```
void q_graphicsscale_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QMatrix4x4*) ```
void q_graphicsscale_on_apply_to(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// Base class method implementation
///
/// ``` QGraphicsScale* self, QMatrix4x4* matrix ```
void q_graphicsscale_qbase_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_origin_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_origin_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_x_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_x_scale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_y_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_y_scale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_z_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_z_scale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_scale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsscale_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsscale_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsScale* self ```
const char* q_graphicsscale_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsScale* self, char* name ```
void q_graphicsscale_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsScale* self, bool b ```
bool q_graphicsscale_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsScale* self ```
QThread* q_graphicsscale_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsScale* self, QThread* thread ```
bool q_graphicsscale_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScale* self, int interval ```
int32_t q_graphicsscale_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsScale* self, int id ```
void q_graphicsscale_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsScale* self, enum Qt__TimerId id ```
void q_graphicsscale_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsScale* self ```
libqt_list /* of QObject* */ q_graphicsscale_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsScale* self, QObject* parent ```
void q_graphicsscale_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsScale* self, QObject* filterObj ```
void q_graphicsscale_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsScale* self, QObject* obj ```
void q_graphicsscale_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsscale_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScale* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsscale_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsscale_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsscale_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsScale* self, const char* name, QVariant* value ```
bool q_graphicsscale_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsScale* self, const char* name ```
QVariant* q_graphicsscale_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsScale* self ```
const char** q_graphicsscale_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsScale* self ```
QBindingStorage* q_graphicsscale_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsScale* self ```
const QBindingStorage* q_graphicsscale_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScale* self, void (*slot)(QObject*) ```
void q_graphicsscale_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsScale* self ```
QObject* q_graphicsscale_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsScale* self, const char* classname ```
bool q_graphicsscale_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsScale* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicsscale_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScale* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsscale_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscale_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScale* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscale_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScale* self, QObject* param1 ```
void q_graphicsscale_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScale* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsscale_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
bool q_graphicsscale_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
bool q_graphicsscale_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, bool (*slot)(QGraphicsScale*, QEvent*) ```
void q_graphicsscale_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QObject* watched, QEvent* event ```
bool q_graphicsscale_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QObject* watched, QEvent* event ```
bool q_graphicsscale_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, bool (*slot)(QGraphicsScale*, QObject*, QEvent*) ```
void q_graphicsscale_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QTimerEvent* event ```
void q_graphicsscale_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QTimerEvent* event ```
void q_graphicsscale_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QTimerEvent*) ```
void q_graphicsscale_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QChildEvent* event ```
void q_graphicsscale_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QChildEvent* event ```
void q_graphicsscale_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QChildEvent*) ```
void q_graphicsscale_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
void q_graphicsscale_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
void q_graphicsscale_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QEvent*) ```
void q_graphicsscale_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QMetaMethod*) ```
void q_graphicsscale_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QMetaMethod*) ```
void q_graphicsscale_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_qbase_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)() ```
void q_graphicsscale_on_update(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self ```
QObject* q_graphicsscale_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self ```
QObject* q_graphicsscale_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, QObject* (*slot)() ```
void q_graphicsscale_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self ```
int32_t q_graphicsscale_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self ```
int32_t q_graphicsscale_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, int32_t (*slot)() ```
void q_graphicsscale_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, const char* signal ```
int32_t q_graphicsscale_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, const char* signal ```
int32_t q_graphicsscale_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, int32_t (*slot)(QGraphicsScale*, const char*) ```
void q_graphicsscale_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
bool q_graphicsscale_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
bool q_graphicsscale_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, bool (*slot)(QGraphicsScale*, QMetaMethod*) ```
void q_graphicsscale_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsScale* self, void (*slot)(QObject*, const char*) ```
void q_graphicsscale_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#dtor.QGraphicsScale)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsrotation.html

/// q_graphicsrotation_new constructs a new QGraphicsRotation object.
///
///
QGraphicsRotation* q_graphicsrotation_new();

/// q_graphicsrotation_new2 constructs a new QGraphicsRotation object.
///
/// ``` QObject* parent ```
QGraphicsRotation* q_graphicsrotation_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsRotation* self ```
const QMetaObject* q_graphicsrotation_meta_object(void* self);

/// ``` QGraphicsRotation* self, const char* param1 ```
void* q_graphicsrotation_metacast(void* self, const char* param1);

/// ``` QGraphicsRotation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsrotation_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsRotation* self, int32_t (*slot)(QGraphicsRotation*, enum QMetaObject__Call, int, void*) ```
void q_graphicsrotation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsRotation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsrotation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsrotation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#origin)
///
/// ``` QGraphicsRotation* self ```
QVector3D* q_graphicsrotation_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setOrigin)
///
/// ``` QGraphicsRotation* self, QVector3D* point ```
void q_graphicsrotation_set_origin(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angle)
///
/// ``` QGraphicsRotation* self ```
double q_graphicsrotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAngle)
///
/// ``` QGraphicsRotation* self, double angle ```
void q_graphicsrotation_set_angle(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axis)
///
/// ``` QGraphicsRotation* self ```
QVector3D* q_graphicsrotation_axis(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// ``` QGraphicsRotation* self, QVector3D* axis ```
void q_graphicsrotation_set_axis(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// ``` QGraphicsRotation* self, enum Qt__Axis axis ```
void q_graphicsrotation_set_axis_with_axis(void* self, int64_t axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// ``` QGraphicsRotation* self, QMatrix4x4* matrix ```
void q_graphicsrotation_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QMatrix4x4*) ```
void q_graphicsrotation_on_apply_to(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// Base class method implementation
///
/// ``` QGraphicsRotation* self, QMatrix4x4* matrix ```
void q_graphicsrotation_qbase_apply_to(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_origin_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*) ```
void q_graphicsrotation_on_origin_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_angle_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*) ```
void q_graphicsrotation_on_angle_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_axis_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*) ```
void q_graphicsrotation_on_axis_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsrotation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsrotation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsRotation* self ```
const char* q_graphicsrotation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsRotation* self, char* name ```
void q_graphicsrotation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsRotation* self, bool b ```
bool q_graphicsrotation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsRotation* self ```
QThread* q_graphicsrotation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsRotation* self, QThread* thread ```
bool q_graphicsrotation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsRotation* self, int interval ```
int32_t q_graphicsrotation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsRotation* self, int id ```
void q_graphicsrotation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsRotation* self, enum Qt__TimerId id ```
void q_graphicsrotation_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsRotation* self ```
libqt_list /* of QObject* */ q_graphicsrotation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsRotation* self, QObject* parent ```
void q_graphicsrotation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsRotation* self, QObject* filterObj ```
void q_graphicsrotation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsRotation* self, QObject* obj ```
void q_graphicsrotation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsrotation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsRotation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsrotation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsrotation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsrotation_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsRotation* self, const char* name, QVariant* value ```
bool q_graphicsrotation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsRotation* self, const char* name ```
QVariant* q_graphicsrotation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsRotation* self ```
const char** q_graphicsrotation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsRotation* self ```
QBindingStorage* q_graphicsrotation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsRotation* self ```
const QBindingStorage* q_graphicsrotation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsRotation* self, void (*slot)(QObject*) ```
void q_graphicsrotation_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsRotation* self ```
QObject* q_graphicsrotation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsRotation* self, const char* classname ```
bool q_graphicsrotation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsRotation* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicsrotation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsRotation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsrotation_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsrotation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsRotation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsrotation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsRotation* self, QObject* param1 ```
void q_graphicsrotation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsRotation* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsrotation_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
bool q_graphicsrotation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
bool q_graphicsrotation_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, bool (*slot)(QGraphicsRotation*, QEvent*) ```
void q_graphicsrotation_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QObject* watched, QEvent* event ```
bool q_graphicsrotation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QObject* watched, QEvent* event ```
bool q_graphicsrotation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, bool (*slot)(QGraphicsRotation*, QObject*, QEvent*) ```
void q_graphicsrotation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QTimerEvent* event ```
void q_graphicsrotation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QTimerEvent* event ```
void q_graphicsrotation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QTimerEvent*) ```
void q_graphicsrotation_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QChildEvent* event ```
void q_graphicsrotation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QChildEvent* event ```
void q_graphicsrotation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QChildEvent*) ```
void q_graphicsrotation_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
void q_graphicsrotation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
void q_graphicsrotation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QEvent*) ```
void q_graphicsrotation_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QMetaMethod*) ```
void q_graphicsrotation_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QMetaMethod*) ```
void q_graphicsrotation_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_qbase_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)() ```
void q_graphicsrotation_on_update(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self ```
QObject* q_graphicsrotation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self ```
QObject* q_graphicsrotation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QObject* (*slot)() ```
void q_graphicsrotation_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self ```
int32_t q_graphicsrotation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self ```
int32_t q_graphicsrotation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, int32_t (*slot)() ```
void q_graphicsrotation_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, const char* signal ```
int32_t q_graphicsrotation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, const char* signal ```
int32_t q_graphicsrotation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, int32_t (*slot)(QGraphicsRotation*, const char*) ```
void q_graphicsrotation_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
bool q_graphicsrotation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
bool q_graphicsrotation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, bool (*slot)(QGraphicsRotation*, QMetaMethod*) ```
void q_graphicsrotation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsRotation* self, void (*slot)(QObject*, const char*) ```
void q_graphicsrotation_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#dtor.QGraphicsRotation)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_delete(void* self);

#endif
