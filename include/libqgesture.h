#pragma once
#ifndef SRCQT6C_LIBQGESTURE_H
#define SRCQT6C_LIBQGESTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgesture.html

/// q_gesture_new constructs a new QGesture object.
///
///
QGesture* q_gesture_new();

/// q_gesture_new2 constructs a new QGesture object.
///
/// ``` QObject* parent ```
QGesture* q_gesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGesture* self ```
const QMetaObject* q_gesture_meta_object(void* self);

/// ``` QGesture* self, const char* param1 ```
void* q_gesture_metacast(void* self, const char* param1);

/// ``` QGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_gesture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGesture* self, int32_t (*slot)(QGesture*, enum QMetaObject__Call, int, void*) ```
void q_gesture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_gesture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_gesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// ``` QGesture* self ```
int64_t q_gesture_gesture_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// ``` QGesture* self ```
int64_t q_gesture_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// ``` QGesture* self ```
QPointF* q_gesture_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// ``` QGesture* self, QPointF* value ```
void q_gesture_set_hot_spot(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// ``` QGesture* self ```
bool q_gesture_has_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// ``` QGesture* self ```
void q_gesture_unset_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// ``` QGesture* self, enum QGesture__GestureCancelPolicy policy ```
void q_gesture_set_gesture_cancel_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// ``` QGesture* self ```
int64_t q_gesture_gesture_cancel_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_gesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_gesture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGesture* self ```
const char* q_gesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGesture* self, char* name ```
void q_gesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGesture* self ```
bool q_gesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGesture* self ```
bool q_gesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGesture* self ```
bool q_gesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGesture* self ```
bool q_gesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGesture* self, bool b ```
bool q_gesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGesture* self ```
QThread* q_gesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGesture* self, QThread* thread ```
bool q_gesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGesture* self, int interval ```
int32_t q_gesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGesture* self, int id ```
void q_gesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGesture* self, enum Qt__TimerId id ```
void q_gesture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGesture* self ```
libqt_list /* of QObject* */ q_gesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGesture* self, QObject* parent ```
void q_gesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGesture* self, QObject* filterObj ```
void q_gesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGesture* self, QObject* obj ```
void q_gesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_gesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGesture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_gesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_gesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_gesture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGesture* self ```
void q_gesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGesture* self ```
void q_gesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGesture* self, const char* name, QVariant* value ```
bool q_gesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGesture* self, const char* name ```
QVariant* q_gesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGesture* self ```
const char** q_gesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGesture* self ```
QBindingStorage* q_gesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGesture* self ```
const QBindingStorage* q_gesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGesture* self ```
void q_gesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGesture* self, void (*slot)(QObject*) ```
void q_gesture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGesture* self ```
QObject* q_gesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGesture* self, const char* classname ```
bool q_gesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGesture* self ```
void q_gesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGesture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_gesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGesture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_gesture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_gesture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGesture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_gesture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGesture* self, QObject* param1 ```
void q_gesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGesture* self, void (*slot)(QObject*, QObject*) ```
void q_gesture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QEvent* event ```
bool q_gesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QEvent* event ```
bool q_gesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, bool (*slot)(QGesture*, QEvent*) ```
void q_gesture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QObject* watched, QEvent* event ```
bool q_gesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QObject* watched, QEvent* event ```
bool q_gesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, bool (*slot)(QGesture*, QObject*, QEvent*) ```
void q_gesture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QTimerEvent* event ```
void q_gesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QTimerEvent* event ```
void q_gesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, void (*slot)(QGesture*, QTimerEvent*) ```
void q_gesture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QChildEvent* event ```
void q_gesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QChildEvent* event ```
void q_gesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, void (*slot)(QGesture*, QChildEvent*) ```
void q_gesture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QEvent* event ```
void q_gesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QEvent* event ```
void q_gesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, void (*slot)(QGesture*, QEvent*) ```
void q_gesture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QMetaMethod* signal ```
void q_gesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QMetaMethod* signal ```
void q_gesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, void (*slot)(QGesture*, QMetaMethod*) ```
void q_gesture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QMetaMethod* signal ```
void q_gesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QMetaMethod* signal ```
void q_gesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, void (*slot)(QGesture*, QMetaMethod*) ```
void q_gesture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self ```
QObject* q_gesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self ```
QObject* q_gesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, QObject* (*slot)() ```
void q_gesture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self ```
int32_t q_gesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self ```
int32_t q_gesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, int32_t (*slot)() ```
void q_gesture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, const char* signal ```
int32_t q_gesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, const char* signal ```
int32_t q_gesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, int32_t (*slot)(QGesture*, const char*) ```
void q_gesture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGesture* self, QMetaMethod* signal ```
bool q_gesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGesture* self, QMetaMethod* signal ```
bool q_gesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGesture* self, bool (*slot)(QGesture*, QMetaMethod*) ```
void q_gesture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGesture* self, void (*slot)(QObject*, const char*) ```
void q_gesture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#dtor.QGesture)
///
/// Delete this object from C++ memory.
///
/// ``` QGesture* self ```
void q_gesture_delete(void* self);

/// https://doc.qt.io/qt-6/qpangesture.html

/// q_pangesture_new constructs a new QPanGesture object.
///
///
QPanGesture* q_pangesture_new();

/// q_pangesture_new2 constructs a new QPanGesture object.
///
/// ``` QObject* parent ```
QPanGesture* q_pangesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPanGesture* self ```
const QMetaObject* q_pangesture_meta_object(void* self);

/// ``` QPanGesture* self, const char* param1 ```
void* q_pangesture_metacast(void* self, const char* param1);

/// ``` QPanGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pangesture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPanGesture* self, int32_t (*slot)(QPanGesture*, enum QMetaObject__Call, int, void*) ```
void q_pangesture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPanGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pangesture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pangesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#lastOffset)
///
/// ``` QPanGesture* self ```
QPointF* q_pangesture_last_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#offset)
///
/// ``` QPanGesture* self ```
QPointF* q_pangesture_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#delta)
///
/// ``` QPanGesture* self ```
QPointF* q_pangesture_delta(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#acceleration)
///
/// ``` QPanGesture* self ```
double q_pangesture_acceleration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#setLastOffset)
///
/// ``` QPanGesture* self, QPointF* value ```
void q_pangesture_set_last_offset(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#setOffset)
///
/// ``` QPanGesture* self, QPointF* value ```
void q_pangesture_set_offset(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#setAcceleration)
///
/// ``` QPanGesture* self, double value ```
void q_pangesture_set_acceleration(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pangesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pangesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// ``` QPanGesture* self ```
int64_t q_pangesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// ``` QPanGesture* self ```
int64_t q_pangesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// ``` QPanGesture* self ```
QPointF* q_pangesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// ``` QPanGesture* self, QPointF* value ```
void q_pangesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// ``` QPanGesture* self ```
bool q_pangesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// ``` QPanGesture* self ```
void q_pangesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// ``` QPanGesture* self, enum QGesture__GestureCancelPolicy policy ```
void q_pangesture_set_gesture_cancel_policy(void* self, int64_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// ``` QPanGesture* self ```
int64_t q_pangesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPanGesture* self ```
const char* q_pangesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPanGesture* self, char* name ```
void q_pangesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPanGesture* self ```
bool q_pangesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPanGesture* self ```
bool q_pangesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPanGesture* self ```
bool q_pangesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPanGesture* self ```
bool q_pangesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPanGesture* self, bool b ```
bool q_pangesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPanGesture* self ```
QThread* q_pangesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPanGesture* self, QThread* thread ```
bool q_pangesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPanGesture* self, int interval ```
int32_t q_pangesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPanGesture* self, int id ```
void q_pangesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPanGesture* self, enum Qt__TimerId id ```
void q_pangesture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPanGesture* self ```
libqt_list /* of QObject* */ q_pangesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPanGesture* self, QObject* parent ```
void q_pangesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPanGesture* self, QObject* filterObj ```
void q_pangesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPanGesture* self, QObject* obj ```
void q_pangesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pangesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPanGesture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pangesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pangesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pangesture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPanGesture* self ```
void q_pangesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPanGesture* self ```
void q_pangesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPanGesture* self, const char* name, QVariant* value ```
bool q_pangesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPanGesture* self, const char* name ```
QVariant* q_pangesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPanGesture* self ```
const char** q_pangesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPanGesture* self ```
QBindingStorage* q_pangesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPanGesture* self ```
const QBindingStorage* q_pangesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPanGesture* self ```
void q_pangesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPanGesture* self, void (*slot)(QObject*) ```
void q_pangesture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPanGesture* self ```
QObject* q_pangesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPanGesture* self, const char* classname ```
bool q_pangesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPanGesture* self ```
void q_pangesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPanGesture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pangesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPanGesture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pangesture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pangesture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPanGesture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pangesture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPanGesture* self, QObject* param1 ```
void q_pangesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPanGesture* self, void (*slot)(QObject*, QObject*) ```
void q_pangesture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QEvent* event ```
bool q_pangesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QEvent* event ```
bool q_pangesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, bool (*slot)(QPanGesture*, QEvent*) ```
void q_pangesture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QObject* watched, QEvent* event ```
bool q_pangesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QObject* watched, QEvent* event ```
bool q_pangesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, bool (*slot)(QPanGesture*, QObject*, QEvent*) ```
void q_pangesture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QTimerEvent* event ```
void q_pangesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QTimerEvent* event ```
void q_pangesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, void (*slot)(QPanGesture*, QTimerEvent*) ```
void q_pangesture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QChildEvent* event ```
void q_pangesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QChildEvent* event ```
void q_pangesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, void (*slot)(QPanGesture*, QChildEvent*) ```
void q_pangesture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QEvent* event ```
void q_pangesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QEvent* event ```
void q_pangesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, void (*slot)(QPanGesture*, QEvent*) ```
void q_pangesture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QMetaMethod* signal ```
void q_pangesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QMetaMethod* signal ```
void q_pangesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, void (*slot)(QPanGesture*, QMetaMethod*) ```
void q_pangesture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QMetaMethod* signal ```
void q_pangesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QMetaMethod* signal ```
void q_pangesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, void (*slot)(QPanGesture*, QMetaMethod*) ```
void q_pangesture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self ```
QObject* q_pangesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self ```
QObject* q_pangesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, QObject* (*slot)() ```
void q_pangesture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self ```
int32_t q_pangesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self ```
int32_t q_pangesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, int32_t (*slot)() ```
void q_pangesture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, const char* signal ```
int32_t q_pangesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, const char* signal ```
int32_t q_pangesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, int32_t (*slot)(QPanGesture*, const char*) ```
void q_pangesture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPanGesture* self, QMetaMethod* signal ```
bool q_pangesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPanGesture* self, QMetaMethod* signal ```
bool q_pangesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPanGesture* self, bool (*slot)(QPanGesture*, QMetaMethod*) ```
void q_pangesture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPanGesture* self, void (*slot)(QObject*, const char*) ```
void q_pangesture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#dtor.QPanGesture)
///
/// Delete this object from C++ memory.
///
/// ``` QPanGesture* self ```
void q_pangesture_delete(void* self);

/// https://doc.qt.io/qt-6/qpinchgesture.html

/// q_pinchgesture_new constructs a new QPinchGesture object.
///
///
QPinchGesture* q_pinchgesture_new();

/// q_pinchgesture_new2 constructs a new QPinchGesture object.
///
/// ``` QObject* parent ```
QPinchGesture* q_pinchgesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPinchGesture* self ```
const QMetaObject* q_pinchgesture_meta_object(void* self);

/// ``` QPinchGesture* self, const char* param1 ```
void* q_pinchgesture_metacast(void* self, const char* param1);

/// ``` QPinchGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pinchgesture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPinchGesture* self, int32_t (*slot)(QPinchGesture*, enum QMetaObject__Call, int, void*) ```
void q_pinchgesture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPinchGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pinchgesture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pinchgesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#totalChangeFlags)
///
/// ``` QPinchGesture* self ```
int64_t q_pinchgesture_total_change_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalChangeFlags)
///
/// ``` QPinchGesture* self, int value ```
void q_pinchgesture_set_total_change_flags(void* self, int64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#changeFlags)
///
/// ``` QPinchGesture* self ```
int64_t q_pinchgesture_change_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setChangeFlags)
///
/// ``` QPinchGesture* self, int value ```
void q_pinchgesture_set_change_flags(void* self, int64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#startCenterPoint)
///
/// ``` QPinchGesture* self ```
QPointF* q_pinchgesture_start_center_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#lastCenterPoint)
///
/// ``` QPinchGesture* self ```
QPointF* q_pinchgesture_last_center_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#centerPoint)
///
/// ``` QPinchGesture* self ```
QPointF* q_pinchgesture_center_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setStartCenterPoint)
///
/// ``` QPinchGesture* self, QPointF* value ```
void q_pinchgesture_set_start_center_point(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setLastCenterPoint)
///
/// ``` QPinchGesture* self, QPointF* value ```
void q_pinchgesture_set_last_center_point(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setCenterPoint)
///
/// ``` QPinchGesture* self, QPointF* value ```
void q_pinchgesture_set_center_point(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#totalScaleFactor)
///
/// ``` QPinchGesture* self ```
double q_pinchgesture_total_scale_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#lastScaleFactor)
///
/// ``` QPinchGesture* self ```
double q_pinchgesture_last_scale_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#scaleFactor)
///
/// ``` QPinchGesture* self ```
double q_pinchgesture_scale_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalScaleFactor)
///
/// ``` QPinchGesture* self, double value ```
void q_pinchgesture_set_total_scale_factor(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setLastScaleFactor)
///
/// ``` QPinchGesture* self, double value ```
void q_pinchgesture_set_last_scale_factor(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setScaleFactor)
///
/// ``` QPinchGesture* self, double value ```
void q_pinchgesture_set_scale_factor(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#totalRotationAngle)
///
/// ``` QPinchGesture* self ```
double q_pinchgesture_total_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#lastRotationAngle)
///
/// ``` QPinchGesture* self ```
double q_pinchgesture_last_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#rotationAngle)
///
/// ``` QPinchGesture* self ```
double q_pinchgesture_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalRotationAngle)
///
/// ``` QPinchGesture* self, double value ```
void q_pinchgesture_set_total_rotation_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setLastRotationAngle)
///
/// ``` QPinchGesture* self, double value ```
void q_pinchgesture_set_last_rotation_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setRotationAngle)
///
/// ``` QPinchGesture* self, double value ```
void q_pinchgesture_set_rotation_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pinchgesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pinchgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// ``` QPinchGesture* self ```
int64_t q_pinchgesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// ``` QPinchGesture* self ```
int64_t q_pinchgesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// ``` QPinchGesture* self ```
QPointF* q_pinchgesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// ``` QPinchGesture* self, QPointF* value ```
void q_pinchgesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// ``` QPinchGesture* self ```
bool q_pinchgesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// ``` QPinchGesture* self ```
void q_pinchgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// ``` QPinchGesture* self, enum QGesture__GestureCancelPolicy policy ```
void q_pinchgesture_set_gesture_cancel_policy(void* self, int64_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// ``` QPinchGesture* self ```
int64_t q_pinchgesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPinchGesture* self ```
const char* q_pinchgesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPinchGesture* self, char* name ```
void q_pinchgesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPinchGesture* self ```
bool q_pinchgesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPinchGesture* self ```
bool q_pinchgesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPinchGesture* self ```
bool q_pinchgesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPinchGesture* self ```
bool q_pinchgesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPinchGesture* self, bool b ```
bool q_pinchgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPinchGesture* self ```
QThread* q_pinchgesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPinchGesture* self, QThread* thread ```
bool q_pinchgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPinchGesture* self, int interval ```
int32_t q_pinchgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPinchGesture* self, int id ```
void q_pinchgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPinchGesture* self, enum Qt__TimerId id ```
void q_pinchgesture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPinchGesture* self ```
libqt_list /* of QObject* */ q_pinchgesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPinchGesture* self, QObject* parent ```
void q_pinchgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPinchGesture* self, QObject* filterObj ```
void q_pinchgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPinchGesture* self, QObject* obj ```
void q_pinchgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pinchgesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPinchGesture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pinchgesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pinchgesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pinchgesture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPinchGesture* self ```
void q_pinchgesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPinchGesture* self ```
void q_pinchgesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPinchGesture* self, const char* name, QVariant* value ```
bool q_pinchgesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPinchGesture* self, const char* name ```
QVariant* q_pinchgesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPinchGesture* self ```
const char** q_pinchgesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPinchGesture* self ```
QBindingStorage* q_pinchgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPinchGesture* self ```
const QBindingStorage* q_pinchgesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPinchGesture* self ```
void q_pinchgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPinchGesture* self, void (*slot)(QObject*) ```
void q_pinchgesture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPinchGesture* self ```
QObject* q_pinchgesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPinchGesture* self, const char* classname ```
bool q_pinchgesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPinchGesture* self ```
void q_pinchgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPinchGesture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pinchgesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPinchGesture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pinchgesture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pinchgesture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPinchGesture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pinchgesture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPinchGesture* self, QObject* param1 ```
void q_pinchgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPinchGesture* self, void (*slot)(QObject*, QObject*) ```
void q_pinchgesture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QEvent* event ```
bool q_pinchgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QEvent* event ```
bool q_pinchgesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, bool (*slot)(QPinchGesture*, QEvent*) ```
void q_pinchgesture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QObject* watched, QEvent* event ```
bool q_pinchgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QObject* watched, QEvent* event ```
bool q_pinchgesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, bool (*slot)(QPinchGesture*, QObject*, QEvent*) ```
void q_pinchgesture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QTimerEvent* event ```
void q_pinchgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QTimerEvent* event ```
void q_pinchgesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, void (*slot)(QPinchGesture*, QTimerEvent*) ```
void q_pinchgesture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QChildEvent* event ```
void q_pinchgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QChildEvent* event ```
void q_pinchgesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, void (*slot)(QPinchGesture*, QChildEvent*) ```
void q_pinchgesture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QEvent* event ```
void q_pinchgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QEvent* event ```
void q_pinchgesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, void (*slot)(QPinchGesture*, QEvent*) ```
void q_pinchgesture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QMetaMethod* signal ```
void q_pinchgesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QMetaMethod* signal ```
void q_pinchgesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, void (*slot)(QPinchGesture*, QMetaMethod*) ```
void q_pinchgesture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QMetaMethod* signal ```
void q_pinchgesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QMetaMethod* signal ```
void q_pinchgesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, void (*slot)(QPinchGesture*, QMetaMethod*) ```
void q_pinchgesture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self ```
QObject* q_pinchgesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self ```
QObject* q_pinchgesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, QObject* (*slot)() ```
void q_pinchgesture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self ```
int32_t q_pinchgesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self ```
int32_t q_pinchgesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, int32_t (*slot)() ```
void q_pinchgesture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, const char* signal ```
int32_t q_pinchgesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, const char* signal ```
int32_t q_pinchgesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, int32_t (*slot)(QPinchGesture*, const char*) ```
void q_pinchgesture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPinchGesture* self, QMetaMethod* signal ```
bool q_pinchgesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPinchGesture* self, QMetaMethod* signal ```
bool q_pinchgesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPinchGesture* self, bool (*slot)(QPinchGesture*, QMetaMethod*) ```
void q_pinchgesture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPinchGesture* self, void (*slot)(QObject*, const char*) ```
void q_pinchgesture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#dtor.QPinchGesture)
///
/// Delete this object from C++ memory.
///
/// ``` QPinchGesture* self ```
void q_pinchgesture_delete(void* self);

/// https://doc.qt.io/qt-6/qswipegesture.html

/// q_swipegesture_new constructs a new QSwipeGesture object.
///
///
QSwipeGesture* q_swipegesture_new();

/// q_swipegesture_new2 constructs a new QSwipeGesture object.
///
/// ``` QObject* parent ```
QSwipeGesture* q_swipegesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSwipeGesture* self ```
const QMetaObject* q_swipegesture_meta_object(void* self);

/// ``` QSwipeGesture* self, const char* param1 ```
void* q_swipegesture_metacast(void* self, const char* param1);

/// ``` QSwipeGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_swipegesture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSwipeGesture* self, int32_t (*slot)(QSwipeGesture*, enum QMetaObject__Call, int, void*) ```
void q_swipegesture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSwipeGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_swipegesture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_swipegesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#horizontalDirection)
///
/// ``` QSwipeGesture* self ```
int64_t q_swipegesture_horizontal_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#verticalDirection)
///
/// ``` QSwipeGesture* self ```
int64_t q_swipegesture_vertical_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#swipeAngle)
///
/// ``` QSwipeGesture* self ```
double q_swipegesture_swipe_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#setSwipeAngle)
///
/// ``` QSwipeGesture* self, double value ```
void q_swipegesture_set_swipe_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_swipegesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_swipegesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// ``` QSwipeGesture* self ```
int64_t q_swipegesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// ``` QSwipeGesture* self ```
int64_t q_swipegesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// ``` QSwipeGesture* self ```
QPointF* q_swipegesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// ``` QSwipeGesture* self, QPointF* value ```
void q_swipegesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// ``` QSwipeGesture* self ```
bool q_swipegesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// ``` QSwipeGesture* self ```
void q_swipegesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// ``` QSwipeGesture* self, enum QGesture__GestureCancelPolicy policy ```
void q_swipegesture_set_gesture_cancel_policy(void* self, int64_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// ``` QSwipeGesture* self ```
int64_t q_swipegesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSwipeGesture* self ```
const char* q_swipegesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSwipeGesture* self, char* name ```
void q_swipegesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSwipeGesture* self ```
bool q_swipegesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSwipeGesture* self ```
bool q_swipegesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSwipeGesture* self ```
bool q_swipegesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSwipeGesture* self ```
bool q_swipegesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSwipeGesture* self, bool b ```
bool q_swipegesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSwipeGesture* self ```
QThread* q_swipegesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSwipeGesture* self, QThread* thread ```
bool q_swipegesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSwipeGesture* self, int interval ```
int32_t q_swipegesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSwipeGesture* self, int id ```
void q_swipegesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSwipeGesture* self, enum Qt__TimerId id ```
void q_swipegesture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSwipeGesture* self ```
libqt_list /* of QObject* */ q_swipegesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSwipeGesture* self, QObject* parent ```
void q_swipegesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSwipeGesture* self, QObject* filterObj ```
void q_swipegesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSwipeGesture* self, QObject* obj ```
void q_swipegesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_swipegesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSwipeGesture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_swipegesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_swipegesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_swipegesture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSwipeGesture* self ```
void q_swipegesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSwipeGesture* self ```
void q_swipegesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSwipeGesture* self, const char* name, QVariant* value ```
bool q_swipegesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSwipeGesture* self, const char* name ```
QVariant* q_swipegesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSwipeGesture* self ```
const char** q_swipegesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSwipeGesture* self ```
QBindingStorage* q_swipegesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSwipeGesture* self ```
const QBindingStorage* q_swipegesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSwipeGesture* self ```
void q_swipegesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSwipeGesture* self, void (*slot)(QObject*) ```
void q_swipegesture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSwipeGesture* self ```
QObject* q_swipegesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSwipeGesture* self, const char* classname ```
bool q_swipegesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSwipeGesture* self ```
void q_swipegesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSwipeGesture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_swipegesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSwipeGesture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_swipegesture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_swipegesture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSwipeGesture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_swipegesture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSwipeGesture* self, QObject* param1 ```
void q_swipegesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSwipeGesture* self, void (*slot)(QObject*, QObject*) ```
void q_swipegesture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QEvent* event ```
bool q_swipegesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QEvent* event ```
bool q_swipegesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, bool (*slot)(QSwipeGesture*, QEvent*) ```
void q_swipegesture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QObject* watched, QEvent* event ```
bool q_swipegesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QObject* watched, QEvent* event ```
bool q_swipegesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, bool (*slot)(QSwipeGesture*, QObject*, QEvent*) ```
void q_swipegesture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QTimerEvent* event ```
void q_swipegesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QTimerEvent* event ```
void q_swipegesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, void (*slot)(QSwipeGesture*, QTimerEvent*) ```
void q_swipegesture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QChildEvent* event ```
void q_swipegesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QChildEvent* event ```
void q_swipegesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, void (*slot)(QSwipeGesture*, QChildEvent*) ```
void q_swipegesture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QEvent* event ```
void q_swipegesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QEvent* event ```
void q_swipegesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, void (*slot)(QSwipeGesture*, QEvent*) ```
void q_swipegesture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QMetaMethod* signal ```
void q_swipegesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QMetaMethod* signal ```
void q_swipegesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, void (*slot)(QSwipeGesture*, QMetaMethod*) ```
void q_swipegesture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QMetaMethod* signal ```
void q_swipegesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QMetaMethod* signal ```
void q_swipegesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, void (*slot)(QSwipeGesture*, QMetaMethod*) ```
void q_swipegesture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self ```
QObject* q_swipegesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self ```
QObject* q_swipegesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, QObject* (*slot)() ```
void q_swipegesture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self ```
int32_t q_swipegesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self ```
int32_t q_swipegesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, int32_t (*slot)() ```
void q_swipegesture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, const char* signal ```
int32_t q_swipegesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, const char* signal ```
int32_t q_swipegesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, int32_t (*slot)(QSwipeGesture*, const char*) ```
void q_swipegesture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSwipeGesture* self, QMetaMethod* signal ```
bool q_swipegesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSwipeGesture* self, QMetaMethod* signal ```
bool q_swipegesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSwipeGesture* self, bool (*slot)(QSwipeGesture*, QMetaMethod*) ```
void q_swipegesture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSwipeGesture* self, void (*slot)(QObject*, const char*) ```
void q_swipegesture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#dtor.QSwipeGesture)
///
/// Delete this object from C++ memory.
///
/// ``` QSwipeGesture* self ```
void q_swipegesture_delete(void* self);

/// https://doc.qt.io/qt-6/qtapgesture.html

/// q_tapgesture_new constructs a new QTapGesture object.
///
///
QTapGesture* q_tapgesture_new();

/// q_tapgesture_new2 constructs a new QTapGesture object.
///
/// ``` QObject* parent ```
QTapGesture* q_tapgesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTapGesture* self ```
const QMetaObject* q_tapgesture_meta_object(void* self);

/// ``` QTapGesture* self, const char* param1 ```
void* q_tapgesture_metacast(void* self, const char* param1);

/// ``` QTapGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tapgesture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTapGesture* self, int32_t (*slot)(QTapGesture*, enum QMetaObject__Call, int, void*) ```
void q_tapgesture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTapGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tapgesture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tapgesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapgesture.html#position)
///
/// ``` QTapGesture* self ```
QPointF* q_tapgesture_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapgesture.html#setPosition)
///
/// ``` QTapGesture* self, QPointF* pos ```
void q_tapgesture_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tapgesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tapgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// ``` QTapGesture* self ```
int64_t q_tapgesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// ``` QTapGesture* self ```
int64_t q_tapgesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// ``` QTapGesture* self ```
QPointF* q_tapgesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// ``` QTapGesture* self, QPointF* value ```
void q_tapgesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// ``` QTapGesture* self ```
bool q_tapgesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// ``` QTapGesture* self ```
void q_tapgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// ``` QTapGesture* self, enum QGesture__GestureCancelPolicy policy ```
void q_tapgesture_set_gesture_cancel_policy(void* self, int64_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// ``` QTapGesture* self ```
int64_t q_tapgesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTapGesture* self ```
const char* q_tapgesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTapGesture* self, char* name ```
void q_tapgesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTapGesture* self ```
bool q_tapgesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTapGesture* self ```
bool q_tapgesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTapGesture* self ```
bool q_tapgesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTapGesture* self ```
bool q_tapgesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTapGesture* self, bool b ```
bool q_tapgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTapGesture* self ```
QThread* q_tapgesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTapGesture* self, QThread* thread ```
bool q_tapgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTapGesture* self, int interval ```
int32_t q_tapgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTapGesture* self, int id ```
void q_tapgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTapGesture* self, enum Qt__TimerId id ```
void q_tapgesture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTapGesture* self ```
libqt_list /* of QObject* */ q_tapgesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTapGesture* self, QObject* parent ```
void q_tapgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTapGesture* self, QObject* filterObj ```
void q_tapgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTapGesture* self, QObject* obj ```
void q_tapgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tapgesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTapGesture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tapgesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tapgesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tapgesture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTapGesture* self ```
void q_tapgesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTapGesture* self ```
void q_tapgesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTapGesture* self, const char* name, QVariant* value ```
bool q_tapgesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTapGesture* self, const char* name ```
QVariant* q_tapgesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTapGesture* self ```
const char** q_tapgesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTapGesture* self ```
QBindingStorage* q_tapgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTapGesture* self ```
const QBindingStorage* q_tapgesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapGesture* self ```
void q_tapgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapGesture* self, void (*slot)(QObject*) ```
void q_tapgesture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTapGesture* self ```
QObject* q_tapgesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTapGesture* self, const char* classname ```
bool q_tapgesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTapGesture* self ```
void q_tapgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTapGesture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_tapgesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTapGesture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tapgesture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tapgesture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTapGesture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tapgesture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapGesture* self, QObject* param1 ```
void q_tapgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapGesture* self, void (*slot)(QObject*, QObject*) ```
void q_tapgesture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QEvent* event ```
bool q_tapgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QEvent* event ```
bool q_tapgesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, bool (*slot)(QTapGesture*, QEvent*) ```
void q_tapgesture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QObject* watched, QEvent* event ```
bool q_tapgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QObject* watched, QEvent* event ```
bool q_tapgesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, bool (*slot)(QTapGesture*, QObject*, QEvent*) ```
void q_tapgesture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QTimerEvent* event ```
void q_tapgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QTimerEvent* event ```
void q_tapgesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, void (*slot)(QTapGesture*, QTimerEvent*) ```
void q_tapgesture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QChildEvent* event ```
void q_tapgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QChildEvent* event ```
void q_tapgesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, void (*slot)(QTapGesture*, QChildEvent*) ```
void q_tapgesture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QEvent* event ```
void q_tapgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QEvent* event ```
void q_tapgesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, void (*slot)(QTapGesture*, QEvent*) ```
void q_tapgesture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QMetaMethod* signal ```
void q_tapgesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QMetaMethod* signal ```
void q_tapgesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, void (*slot)(QTapGesture*, QMetaMethod*) ```
void q_tapgesture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QMetaMethod* signal ```
void q_tapgesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QMetaMethod* signal ```
void q_tapgesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, void (*slot)(QTapGesture*, QMetaMethod*) ```
void q_tapgesture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self ```
QObject* q_tapgesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self ```
QObject* q_tapgesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, QObject* (*slot)() ```
void q_tapgesture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self ```
int32_t q_tapgesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self ```
int32_t q_tapgesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, int32_t (*slot)() ```
void q_tapgesture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, const char* signal ```
int32_t q_tapgesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, const char* signal ```
int32_t q_tapgesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, int32_t (*slot)(QTapGesture*, const char*) ```
void q_tapgesture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapGesture* self, QMetaMethod* signal ```
bool q_tapgesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapGesture* self, QMetaMethod* signal ```
bool q_tapgesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapGesture* self, bool (*slot)(QTapGesture*, QMetaMethod*) ```
void q_tapgesture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTapGesture* self, void (*slot)(QObject*, const char*) ```
void q_tapgesture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtapgesture.html#dtor.QTapGesture)
///
/// Delete this object from C++ memory.
///
/// ``` QTapGesture* self ```
void q_tapgesture_delete(void* self);

/// https://doc.qt.io/qt-6/qtapandholdgesture.html

/// q_tapandholdgesture_new constructs a new QTapAndHoldGesture object.
///
///
QTapAndHoldGesture* q_tapandholdgesture_new();

/// q_tapandholdgesture_new2 constructs a new QTapAndHoldGesture object.
///
/// ``` QObject* parent ```
QTapAndHoldGesture* q_tapandholdgesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTapAndHoldGesture* self ```
const QMetaObject* q_tapandholdgesture_meta_object(void* self);

/// ``` QTapAndHoldGesture* self, const char* param1 ```
void* q_tapandholdgesture_metacast(void* self, const char* param1);

/// ``` QTapAndHoldGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tapandholdgesture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTapAndHoldGesture* self, int32_t (*slot)(QTapAndHoldGesture*, enum QMetaObject__Call, int, void*) ```
void q_tapandholdgesture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTapAndHoldGesture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tapandholdgesture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tapandholdgesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#position)
///
/// ``` QTapAndHoldGesture* self ```
QPointF* q_tapandholdgesture_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#setPosition)
///
/// ``` QTapAndHoldGesture* self, QPointF* pos ```
void q_tapandholdgesture_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#setTimeout)
///
/// ``` int msecs ```
void q_tapandholdgesture_set_timeout(int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#timeout)
///
///
int32_t q_tapandholdgesture_timeout();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tapandholdgesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tapandholdgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// ``` QTapAndHoldGesture* self ```
int64_t q_tapandholdgesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// ``` QTapAndHoldGesture* self ```
int64_t q_tapandholdgesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// ``` QTapAndHoldGesture* self ```
QPointF* q_tapandholdgesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// ``` QTapAndHoldGesture* self, QPointF* value ```
void q_tapandholdgesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// ``` QTapAndHoldGesture* self ```
bool q_tapandholdgesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// ``` QTapAndHoldGesture* self ```
void q_tapandholdgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// ``` QTapAndHoldGesture* self, enum QGesture__GestureCancelPolicy policy ```
void q_tapandholdgesture_set_gesture_cancel_policy(void* self, int64_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// ``` QTapAndHoldGesture* self ```
int64_t q_tapandholdgesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTapAndHoldGesture* self ```
const char* q_tapandholdgesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTapAndHoldGesture* self, char* name ```
void q_tapandholdgesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTapAndHoldGesture* self ```
bool q_tapandholdgesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTapAndHoldGesture* self ```
bool q_tapandholdgesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTapAndHoldGesture* self ```
bool q_tapandholdgesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTapAndHoldGesture* self ```
bool q_tapandholdgesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTapAndHoldGesture* self, bool b ```
bool q_tapandholdgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTapAndHoldGesture* self ```
QThread* q_tapandholdgesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTapAndHoldGesture* self, QThread* thread ```
bool q_tapandholdgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTapAndHoldGesture* self, int interval ```
int32_t q_tapandholdgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTapAndHoldGesture* self, int id ```
void q_tapandholdgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTapAndHoldGesture* self, enum Qt__TimerId id ```
void q_tapandholdgesture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTapAndHoldGesture* self ```
libqt_list /* of QObject* */ q_tapandholdgesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTapAndHoldGesture* self, QObject* parent ```
void q_tapandholdgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTapAndHoldGesture* self, QObject* filterObj ```
void q_tapandholdgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTapAndHoldGesture* self, QObject* obj ```
void q_tapandholdgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tapandholdgesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTapAndHoldGesture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tapandholdgesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tapandholdgesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tapandholdgesture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTapAndHoldGesture* self ```
void q_tapandholdgesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTapAndHoldGesture* self ```
void q_tapandholdgesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTapAndHoldGesture* self, const char* name, QVariant* value ```
bool q_tapandholdgesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTapAndHoldGesture* self, const char* name ```
QVariant* q_tapandholdgesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTapAndHoldGesture* self ```
const char** q_tapandholdgesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTapAndHoldGesture* self ```
QBindingStorage* q_tapandholdgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTapAndHoldGesture* self ```
const QBindingStorage* q_tapandholdgesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapAndHoldGesture* self ```
void q_tapandholdgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QObject*) ```
void q_tapandholdgesture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTapAndHoldGesture* self ```
QObject* q_tapandholdgesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTapAndHoldGesture* self, const char* classname ```
bool q_tapandholdgesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTapAndHoldGesture* self ```
void q_tapandholdgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTapAndHoldGesture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_tapandholdgesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTapAndHoldGesture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tapandholdgesture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tapandholdgesture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTapAndHoldGesture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tapandholdgesture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapAndHoldGesture* self, QObject* param1 ```
void q_tapandholdgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QObject*, QObject*) ```
void q_tapandholdgesture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QEvent* event ```
bool q_tapandholdgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QEvent* event ```
bool q_tapandholdgesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, bool (*slot)(QTapAndHoldGesture*, QEvent*) ```
void q_tapandholdgesture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QObject* watched, QEvent* event ```
bool q_tapandholdgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QObject* watched, QEvent* event ```
bool q_tapandholdgesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, bool (*slot)(QTapAndHoldGesture*, QObject*, QEvent*) ```
void q_tapandholdgesture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QTimerEvent* event ```
void q_tapandholdgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QTimerEvent* event ```
void q_tapandholdgesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QTapAndHoldGesture*, QTimerEvent*) ```
void q_tapandholdgesture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QChildEvent* event ```
void q_tapandholdgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QChildEvent* event ```
void q_tapandholdgesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QTapAndHoldGesture*, QChildEvent*) ```
void q_tapandholdgesture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QEvent* event ```
void q_tapandholdgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QEvent* event ```
void q_tapandholdgesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QTapAndHoldGesture*, QEvent*) ```
void q_tapandholdgesture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QMetaMethod* signal ```
void q_tapandholdgesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QMetaMethod* signal ```
void q_tapandholdgesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QTapAndHoldGesture*, QMetaMethod*) ```
void q_tapandholdgesture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QMetaMethod* signal ```
void q_tapandholdgesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QMetaMethod* signal ```
void q_tapandholdgesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QTapAndHoldGesture*, QMetaMethod*) ```
void q_tapandholdgesture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self ```
QObject* q_tapandholdgesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self ```
QObject* q_tapandholdgesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QObject* (*slot)() ```
void q_tapandholdgesture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self ```
int32_t q_tapandholdgesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self ```
int32_t q_tapandholdgesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, int32_t (*slot)() ```
void q_tapandholdgesture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, const char* signal ```
int32_t q_tapandholdgesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, const char* signal ```
int32_t q_tapandholdgesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, int32_t (*slot)(QTapAndHoldGesture*, const char*) ```
void q_tapandholdgesture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QMetaMethod* signal ```
bool q_tapandholdgesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, QMetaMethod* signal ```
bool q_tapandholdgesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTapAndHoldGesture* self, bool (*slot)(QTapAndHoldGesture*, QMetaMethod*) ```
void q_tapandholdgesture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTapAndHoldGesture* self, void (*slot)(QObject*, const char*) ```
void q_tapandholdgesture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#dtor.QTapAndHoldGesture)
///
/// Delete this object from C++ memory.
///
/// ``` QTapAndHoldGesture* self ```
void q_tapandholdgesture_delete(void* self);

/// https://doc.qt.io/qt-6/qgestureevent.html

/// q_gestureevent_new constructs a new QGestureEvent object.
///
/// ``` libqt_list /* of QGesture* */ gestures ```
QGestureEvent* q_gestureevent_new(libqt_list gestures);

/// q_gestureevent_new2 constructs a new QGestureEvent object.
///
/// ``` QGestureEvent* param1 ```
QGestureEvent* q_gestureevent_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#gestures)
///
/// ``` QGestureEvent* self ```
libqt_list /* of QGesture* */ q_gestureevent_gestures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#gesture)
///
/// ``` QGestureEvent* self, enum Qt__GestureType typeVal ```
QGesture* q_gestureevent_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#activeGestures)
///
/// ``` QGestureEvent* self ```
libqt_list /* of QGesture* */ q_gestureevent_active_gestures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#canceledGestures)
///
/// ``` QGestureEvent* self ```
libqt_list /* of QGesture* */ q_gestureevent_canceled_gestures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#setAccepted)
///
/// ``` QGestureEvent* self, QGesture* param1, bool param2 ```
void q_gestureevent_set_accepted(void* self, void* param1, bool param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#accept)
///
/// ``` QGestureEvent* self, QGesture* param1 ```
void q_gestureevent_accept(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#ignore)
///
/// ``` QGestureEvent* self, QGesture* param1 ```
void q_gestureevent_ignore(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#isAccepted)
///
/// ``` QGestureEvent* self, QGesture* param1 ```
bool q_gestureevent_is_accepted(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#setAccepted)
///
/// ``` QGestureEvent* self, enum Qt__GestureType param1, bool param2 ```
void q_gestureevent_set_accepted2(void* self, int64_t param1, bool param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#accept)
///
/// ``` QGestureEvent* self, enum Qt__GestureType param1 ```
void q_gestureevent_accept_with_qt_gesture_type(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#ignore)
///
/// ``` QGestureEvent* self, enum Qt__GestureType param1 ```
void q_gestureevent_ignore_with_qt_gesture_type(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#isAccepted)
///
/// ``` QGestureEvent* self, enum Qt__GestureType param1 ```
bool q_gestureevent_is_accepted_with_qt_gesture_type(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#setWidget)
///
/// ``` QGestureEvent* self, QWidget* widget ```
void q_gestureevent_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#widget)
///
/// ``` QGestureEvent* self ```
QWidget* q_gestureevent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#mapToGraphicsScene)
///
/// ``` QGestureEvent* self, QPointF* gesturePoint ```
QPointF* q_gestureevent_map_to_graphics_scene(void* self, void* gesturePoint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGestureEvent* self ```
int64_t q_gestureevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGestureEvent* self ```
bool q_gestureevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGestureEvent* self ```
bool q_gestureevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGestureEvent* self ```
bool q_gestureevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGestureEvent* self ```
bool q_gestureevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_gestureevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_gestureevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGestureEvent* self ```
QEvent* q_gestureevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGestureEvent* self ```
QEvent* q_gestureevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGestureEvent* self, QEvent* (*slot)() ```
void q_gestureevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#dtor.QGestureEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGestureEvent* self ```
void q_gestureevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgesture.html#types

typedef enum {
    QGESTURE_GESTURECANCELPOLICY_CANCELNONE = 0,
    QGESTURE_GESTURECANCELPOLICY_CANCELALLINCONTEXT = 1
} QGesture__GestureCancelPolicy;

typedef enum {
    QPINCHGESTURE_CHANGEFLAG_SCALEFACTORCHANGED = 1,
    QPINCHGESTURE_CHANGEFLAG_ROTATIONANGLECHANGED = 2,
    QPINCHGESTURE_CHANGEFLAG_CENTERPOINTCHANGED = 4
} QPinchGesture__ChangeFlag;

typedef enum {
    QSWIPEGESTURE_SWIPEDIRECTION_NODIRECTION = 0,
    QSWIPEGESTURE_SWIPEDIRECTION_LEFT = 1,
    QSWIPEGESTURE_SWIPEDIRECTION_RIGHT = 2,
    QSWIPEGESTURE_SWIPEDIRECTION_UP = 3,
    QSWIPEGESTURE_SWIPEDIRECTION_DOWN = 4
} QSwipeGesture__SwipeDirection;

#endif
