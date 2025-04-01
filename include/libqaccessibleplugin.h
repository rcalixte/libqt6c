#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEPLUGIN_H
#define SRCQT6C_LIBQACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qaccessibleplugin.html

/// q_accessibleplugin_new constructs a new QAccessiblePlugin object.
///
///
QAccessiblePlugin* q_accessibleplugin_new();

/// q_accessibleplugin_new2 constructs a new QAccessiblePlugin object.
///
/// ``` QObject* parent ```
QAccessiblePlugin* q_accessibleplugin_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAccessiblePlugin* self ```
QMetaObject* q_accessibleplugin_meta_object(void* self);

/// ``` QAccessiblePlugin* self, const char* param1 ```
void* q_accessibleplugin_metacast(void* self, const char* param1);

/// ``` QAccessiblePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessibleplugin_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAccessiblePlugin* self, int32_t (*slot)(QAccessiblePlugin*, enum QMetaObject__Call, int, void*) ```
void q_accessibleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAccessiblePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_accessibleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_accessibleplugin_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleplugin.html#create)
///
/// ``` QAccessiblePlugin* self, const char* key, QObject* object ```
QAccessibleInterface* q_accessibleplugin_create(void* self, const char* key, void* object);

/// Allows for overriding the related default method
///
/// ``` QAccessiblePlugin* self, QAccessibleInterface* (*slot)(QAccessiblePlugin*, const char*, QObject*) ```
void q_accessibleplugin_on_create(void* self, QAccessibleInterface* (*slot)(void*, const char*, void*));

/// Base class method implementation
///
/// ``` QAccessiblePlugin* self, const char* key, QObject* object ```
QAccessibleInterface* q_accessibleplugin_qbase_create(void* self, const char* key, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_accessibleplugin_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_accessibleplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAccessiblePlugin* self ```
const char* q_accessibleplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAccessiblePlugin* self, const char* name ```
void q_accessibleplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAccessiblePlugin* self ```
bool q_accessibleplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAccessiblePlugin* self, bool b ```
bool q_accessibleplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAccessiblePlugin* self ```
QThread* q_accessibleplugin_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAccessiblePlugin* self, QThread* thread ```
void q_accessibleplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessiblePlugin* self, int interval ```
int32_t q_accessibleplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAccessiblePlugin* self, int id ```
void q_accessibleplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAccessiblePlugin* self ```
libqt_list /* of QObject* */ q_accessibleplugin_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAccessiblePlugin* self, QObject* parent ```
void q_accessibleplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAccessiblePlugin* self, QObject* filterObj ```
void q_accessibleplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAccessiblePlugin* self, QObject* obj ```
void q_accessibleplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_accessibleplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessiblePlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_accessibleplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_accessibleplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_accessibleplugin_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAccessiblePlugin* self, const char* name, QVariant* value ```
bool q_accessibleplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAccessiblePlugin* self, const char* name ```
QVariant* q_accessibleplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAccessiblePlugin* self ```
const char** q_accessibleplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAccessiblePlugin* self ```
QBindingStorage* q_accessibleplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAccessiblePlugin* self ```
QBindingStorage* q_accessibleplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QAccessiblePlugin* self, void (*slot)(QObject*) ```
void q_accessibleplugin_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAccessiblePlugin* self ```
QObject* q_accessibleplugin_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAccessiblePlugin* self, const char* classname ```
bool q_accessibleplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAccessiblePlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_accessibleplugin_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessibleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAccessiblePlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_accessibleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAccessiblePlugin* self, QObject* param1 ```
void q_accessibleplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QAccessiblePlugin* self, void (*slot)(QObject*, QObject*) ```
void q_accessibleplugin_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
bool q_accessibleplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
bool q_accessibleplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, bool (*slot)(QAccessiblePlugin*, QEvent*) ```
void q_accessibleplugin_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QObject* watched, QEvent* event ```
bool q_accessibleplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QObject* watched, QEvent* event ```
bool q_accessibleplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, bool (*slot)(QAccessiblePlugin*, QObject*, QEvent*) ```
void q_accessibleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QTimerEvent* event ```
void q_accessibleplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QTimerEvent* event ```
void q_accessibleplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QTimerEvent*) ```
void q_accessibleplugin_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QChildEvent* event ```
void q_accessibleplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QChildEvent* event ```
void q_accessibleplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QChildEvent*) ```
void q_accessibleplugin_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
void q_accessibleplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QEvent* event ```
void q_accessibleplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QEvent*) ```
void q_accessibleplugin_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QMetaMethod*) ```
void q_accessibleplugin_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
void q_accessibleplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, void (*slot)(QAccessiblePlugin*, QMetaMethod*) ```
void q_accessibleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
QObject* q_accessibleplugin_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
QObject* q_accessibleplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QObject* (*slot)() ```
void q_accessibleplugin_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
int32_t q_accessibleplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self ```
int32_t q_accessibleplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, int32_t (*slot)() ```
void q_accessibleplugin_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, const char* signal ```
int32_t q_accessibleplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, const char* signal ```
int32_t q_accessibleplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, int32_t (*slot)(QAccessiblePlugin*, const char*) ```
void q_accessibleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
bool q_accessibleplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, QMetaMethod* signal ```
bool q_accessibleplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessiblePlugin* self, bool (*slot)(QAccessiblePlugin*, QMetaMethod*) ```
void q_accessibleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QAccessiblePlugin* self ```
void q_accessibleplugin_delete(void* self);

#endif
