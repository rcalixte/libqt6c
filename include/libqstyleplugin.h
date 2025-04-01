#pragma once
#ifndef SRCQT6C_LIBQSTYLEPLUGIN_H
#define SRCQT6C_LIBQSTYLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqstyle.h"
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qstyleplugin.html

/// q_styleplugin_new constructs a new QStylePlugin object.
///
///
QStylePlugin* q_styleplugin_new();

/// q_styleplugin_new2 constructs a new QStylePlugin object.
///
/// ``` QObject* parent ```
QStylePlugin* q_styleplugin_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStylePlugin* self ```
QMetaObject* q_styleplugin_meta_object(void* self);

/// ``` QStylePlugin* self, const char* param1 ```
void* q_styleplugin_metacast(void* self, const char* param1);

/// ``` QStylePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_styleplugin_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QStylePlugin* self, int32_t (*slot)(QStylePlugin*, enum QMetaObject__Call, int, void*) ```
void q_styleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QStylePlugin* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_styleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_styleplugin_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleplugin.html#create)
///
/// ``` QStylePlugin* self, const char* key ```
QStyle* q_styleplugin_create(void* self, const char* key);

/// Allows for overriding the related default method
///
/// ``` QStylePlugin* self, QStyle* (*slot)(QStylePlugin*, const char*) ```
void q_styleplugin_on_create(void* self, QStyle* (*slot)(void*, const char*));

/// Base class method implementation
///
/// ``` QStylePlugin* self, const char* key ```
QStyle* q_styleplugin_qbase_create(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_styleplugin_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_styleplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStylePlugin* self ```
const char* q_styleplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStylePlugin* self, const char* name ```
void q_styleplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStylePlugin* self ```
bool q_styleplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStylePlugin* self, bool b ```
bool q_styleplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStylePlugin* self ```
QThread* q_styleplugin_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStylePlugin* self, QThread* thread ```
void q_styleplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStylePlugin* self, int interval ```
int32_t q_styleplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStylePlugin* self, int id ```
void q_styleplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStylePlugin* self ```
libqt_list /* of QObject* */ q_styleplugin_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStylePlugin* self, QObject* parent ```
void q_styleplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStylePlugin* self, QObject* filterObj ```
void q_styleplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStylePlugin* self, QObject* obj ```
void q_styleplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_styleplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStylePlugin* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_styleplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_styleplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_styleplugin_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStylePlugin* self, const char* name, QVariant* value ```
bool q_styleplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStylePlugin* self, const char* name ```
QVariant* q_styleplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStylePlugin* self ```
const char** q_styleplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStylePlugin* self ```
QBindingStorage* q_styleplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStylePlugin* self ```
QBindingStorage* q_styleplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QStylePlugin* self, void (*slot)(QObject*) ```
void q_styleplugin_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStylePlugin* self ```
QObject* q_styleplugin_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStylePlugin* self, const char* classname ```
bool q_styleplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStylePlugin* self ```
void q_styleplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStylePlugin* self, int interval, enum Qt__TimerType timerType ```
int32_t q_styleplugin_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_styleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStylePlugin* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_styleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStylePlugin* self, QObject* param1 ```
void q_styleplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QStylePlugin* self, void (*slot)(QObject*, QObject*) ```
void q_styleplugin_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
bool q_styleplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
bool q_styleplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, bool (*slot)(QStylePlugin*, QEvent*) ```
void q_styleplugin_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QObject* watched, QEvent* event ```
bool q_styleplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QObject* watched, QEvent* event ```
bool q_styleplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, bool (*slot)(QStylePlugin*, QObject*, QEvent*) ```
void q_styleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QTimerEvent* event ```
void q_styleplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QTimerEvent* event ```
void q_styleplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QTimerEvent*) ```
void q_styleplugin_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QChildEvent* event ```
void q_styleplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QChildEvent* event ```
void q_styleplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QChildEvent*) ```
void q_styleplugin_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
void q_styleplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QEvent* event ```
void q_styleplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QEvent*) ```
void q_styleplugin_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QMetaMethod*) ```
void q_styleplugin_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
void q_styleplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, void (*slot)(QStylePlugin*, QMetaMethod*) ```
void q_styleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self ```
QObject* q_styleplugin_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self ```
QObject* q_styleplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, QObject* (*slot)() ```
void q_styleplugin_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self ```
int32_t q_styleplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self ```
int32_t q_styleplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, int32_t (*slot)() ```
void q_styleplugin_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, const char* signal ```
int32_t q_styleplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, const char* signal ```
int32_t q_styleplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, int32_t (*slot)(QStylePlugin*, const char*) ```
void q_styleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
bool q_styleplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStylePlugin* self, QMetaMethod* signal ```
bool q_styleplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStylePlugin* self, bool (*slot)(QStylePlugin*, QMetaMethod*) ```
void q_styleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QStylePlugin* self ```
void q_styleplugin_delete(void* self);

#endif
