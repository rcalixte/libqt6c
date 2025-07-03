#pragma once
#ifndef SRCQT6C_LIBQSIGNALMAPPER_H
#define SRCQT6C_LIBQSIGNALMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qsignalmapper.html

/// q_signalmapper_new constructs a new QSignalMapper object.
///
///
QSignalMapper* q_signalmapper_new();

/// q_signalmapper_new2 constructs a new QSignalMapper object.
///
/// ``` QObject* parent ```
QSignalMapper* q_signalmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSignalMapper* self ```
const QMetaObject* q_signalmapper_meta_object(void* self);

/// ``` QSignalMapper* self, const char* param1 ```
void* q_signalmapper_metacast(void* self, const char* param1);

/// ``` QSignalMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_signalmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSignalMapper* self, int32_t (*slot)(QSignalMapper*, enum QMetaObject__Call, int, void*) ```
void q_signalmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSignalMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_signalmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_signalmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// ``` QSignalMapper* self, QObject* sender, int id ```
void q_signalmapper_set_mapping(void* self, void* sender, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// ``` QSignalMapper* self, QObject* sender, const char* text ```
void q_signalmapper_set_mapping2(void* self, void* sender, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// ``` QSignalMapper* self, QObject* sender, QObject* object ```
void q_signalmapper_set_mapping3(void* self, void* sender, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#removeMappings)
///
/// ``` QSignalMapper* self, QObject* sender ```
void q_signalmapper_remove_mappings(void* self, void* sender);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// ``` QSignalMapper* self, int id ```
QObject* q_signalmapper_mapping(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// ``` QSignalMapper* self, const char* text ```
QObject* q_signalmapper_mapping_with_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// ``` QSignalMapper* self, QObject* object ```
QObject* q_signalmapper_mapping_with_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// ``` QSignalMapper* self, int param1 ```
void q_signalmapper_mapped_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, int) ```
void q_signalmapper_on_mapped_int(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// ``` QSignalMapper* self, const char* param1 ```
void q_signalmapper_mapped_string(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, const char*) ```
void q_signalmapper_on_mapped_string(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// ``` QSignalMapper* self, QObject* param1 ```
void q_signalmapper_mapped_object(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QObject*) ```
void q_signalmapper_on_mapped_object(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// ``` QSignalMapper* self, QObject* sender ```
void q_signalmapper_map_with_sender(void* self, void* sender);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_signalmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_signalmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSignalMapper* self ```
const char* q_signalmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSignalMapper* self, char* name ```
void q_signalmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSignalMapper* self ```
bool q_signalmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSignalMapper* self, bool b ```
bool q_signalmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSignalMapper* self ```
QThread* q_signalmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSignalMapper* self, QThread* thread ```
void q_signalmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSignalMapper* self, int interval ```
int32_t q_signalmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSignalMapper* self, int id ```
void q_signalmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSignalMapper* self ```
libqt_list /* of QObject* */ q_signalmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSignalMapper* self, QObject* parent ```
void q_signalmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSignalMapper* self, QObject* filterObj ```
void q_signalmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSignalMapper* self, QObject* obj ```
void q_signalmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_signalmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSignalMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_signalmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_signalmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_signalmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSignalMapper* self, const char* name, QVariant* value ```
bool q_signalmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSignalMapper* self, const char* name ```
QVariant* q_signalmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSignalMapper* self ```
const char** q_signalmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSignalMapper* self ```
QBindingStorage* q_signalmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSignalMapper* self ```
const QBindingStorage* q_signalmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSignalMapper* self, void (*slot)(QObject*) ```
void q_signalmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSignalMapper* self ```
QObject* q_signalmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSignalMapper* self, const char* classname ```
bool q_signalmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSignalMapper* self ```
void q_signalmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSignalMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_signalmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_signalmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSignalMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_signalmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSignalMapper* self, QObject* param1 ```
void q_signalmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSignalMapper* self, void (*slot)(QObject*, QObject*) ```
void q_signalmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
bool q_signalmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
bool q_signalmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, bool (*slot)(QSignalMapper*, QEvent*) ```
void q_signalmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QObject* watched, QEvent* event ```
bool q_signalmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QObject* watched, QEvent* event ```
bool q_signalmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, bool (*slot)(QSignalMapper*, QObject*, QEvent*) ```
void q_signalmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QTimerEvent* event ```
void q_signalmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QTimerEvent* event ```
void q_signalmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QTimerEvent*) ```
void q_signalmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QChildEvent* event ```
void q_signalmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QChildEvent* event ```
void q_signalmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QChildEvent*) ```
void q_signalmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
void q_signalmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QEvent* event ```
void q_signalmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QEvent*) ```
void q_signalmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QMetaMethod*) ```
void q_signalmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
void q_signalmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, void (*slot)(QSignalMapper*, QMetaMethod*) ```
void q_signalmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self ```
QObject* q_signalmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self ```
QObject* q_signalmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, QObject* (*slot)() ```
void q_signalmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self ```
int32_t q_signalmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self ```
int32_t q_signalmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, int32_t (*slot)() ```
void q_signalmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, const char* signal ```
int32_t q_signalmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, const char* signal ```
int32_t q_signalmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, int32_t (*slot)(QSignalMapper*, const char*) ```
void q_signalmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
bool q_signalmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSignalMapper* self, QMetaMethod* signal ```
bool q_signalmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSignalMapper* self, bool (*slot)(QSignalMapper*, QMetaMethod*) ```
void q_signalmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSignalMapper* self, void (*slot)(QObject*, const char*) ```
void q_signalmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalmapper.html#dtor.QSignalMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QSignalMapper* self ```
void q_signalmapper_delete(void* self);

#endif
