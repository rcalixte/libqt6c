#pragma once
#ifndef SRCQT6C_LIBQSHAREDMEMORY_H
#define SRCQT6C_LIBQSHAREDMEMORY_H

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
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qsharedmemory.html

/// q_sharedmemory_new constructs a new QSharedMemory object.
///
///
QSharedMemory* q_sharedmemory_new();

/// q_sharedmemory_new2 constructs a new QSharedMemory object.
///
/// ``` const char* key ```
QSharedMemory* q_sharedmemory_new2(const char* key);

/// q_sharedmemory_new3 constructs a new QSharedMemory object.
///
/// ``` QObject* parent ```
QSharedMemory* q_sharedmemory_new3(void* parent);

/// q_sharedmemory_new4 constructs a new QSharedMemory object.
///
/// ``` const char* key, QObject* parent ```
QSharedMemory* q_sharedmemory_new4(const char* key, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSharedMemory* self ```
QMetaObject* q_sharedmemory_meta_object(void* self);

/// ``` QSharedMemory* self, const char* param1 ```
void* q_sharedmemory_metacast(void* self, const char* param1);

/// ``` QSharedMemory* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sharedmemory_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSharedMemory* self, int32_t (*slot)(QSharedMemory*, enum QMetaObject__Call, int, void*) ```
void q_sharedmemory_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSharedMemory* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sharedmemory_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sharedmemory_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#setKey)
///
/// ``` QSharedMemory* self, const char* key ```
void q_sharedmemory_set_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#key)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#setNativeKey)
///
/// ``` QSharedMemory* self, const char* key ```
void q_sharedmemory_set_native_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#nativeKey)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_native_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#create)
///
/// ``` QSharedMemory* self, int64_t size ```
bool q_sharedmemory_create(void* self, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#size)
///
/// ``` QSharedMemory* self ```
int64_t q_sharedmemory_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#attach)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_attach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#isAttached)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_attached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#detach)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#data)
///
/// ``` QSharedMemory* self ```
void* q_sharedmemory_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#constData)
///
/// ``` QSharedMemory* self ```
void* q_sharedmemory_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#data)
///
/// ``` QSharedMemory* self ```
void* q_sharedmemory_data2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#lock)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#unlock)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#error)
///
/// ``` QSharedMemory* self ```
int64_t q_sharedmemory_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#errorString)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sharedmemory_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sharedmemory_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#create)
///
/// ``` QSharedMemory* self, int64_t size, enum QSharedMemory__AccessMode mode ```
bool q_sharedmemory_create2(void* self, int64_t size, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#attach)
///
/// ``` QSharedMemory* self, enum QSharedMemory__AccessMode mode ```
bool q_sharedmemory_attach1(void* self, int64_t mode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSharedMemory* self, const char* name ```
void q_sharedmemory_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSharedMemory* self, bool b ```
bool q_sharedmemory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSharedMemory* self ```
QThread* q_sharedmemory_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSharedMemory* self, QThread* thread ```
void q_sharedmemory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSharedMemory* self, int interval ```
int32_t q_sharedmemory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSharedMemory* self, int id ```
void q_sharedmemory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSharedMemory* self ```
libqt_list /* of QObject* */ q_sharedmemory_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSharedMemory* self, QObject* parent ```
void q_sharedmemory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSharedMemory* self, QObject* filterObj ```
void q_sharedmemory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSharedMemory* self, QObject* obj ```
void q_sharedmemory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sharedmemory_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSharedMemory* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sharedmemory_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sharedmemory_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sharedmemory_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSharedMemory* self, const char* name, QVariant* value ```
bool q_sharedmemory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSharedMemory* self, const char* name ```
QVariant* q_sharedmemory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSharedMemory* self ```
const char** q_sharedmemory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSharedMemory* self ```
QBindingStorage* q_sharedmemory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSharedMemory* self ```
QBindingStorage* q_sharedmemory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSharedMemory* self, void (*slot)(QObject*) ```
void q_sharedmemory_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSharedMemory* self ```
QObject* q_sharedmemory_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSharedMemory* self, const char* classname ```
bool q_sharedmemory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSharedMemory* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sharedmemory_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sharedmemory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSharedMemory* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sharedmemory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSharedMemory* self, QObject* param1 ```
void q_sharedmemory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSharedMemory* self, void (*slot)(QObject*, QObject*) ```
void q_sharedmemory_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
bool q_sharedmemory_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
bool q_sharedmemory_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, bool (*slot)(QSharedMemory*, QEvent*) ```
void q_sharedmemory_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QObject* watched, QEvent* event ```
bool q_sharedmemory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QObject* watched, QEvent* event ```
bool q_sharedmemory_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, bool (*slot)(QSharedMemory*, QObject*, QEvent*) ```
void q_sharedmemory_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QTimerEvent* event ```
void q_sharedmemory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QTimerEvent* event ```
void q_sharedmemory_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QTimerEvent*) ```
void q_sharedmemory_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QChildEvent* event ```
void q_sharedmemory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QChildEvent* event ```
void q_sharedmemory_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QChildEvent*) ```
void q_sharedmemory_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
void q_sharedmemory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
void q_sharedmemory_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QEvent*) ```
void q_sharedmemory_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QMetaMethod*) ```
void q_sharedmemory_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QMetaMethod*) ```
void q_sharedmemory_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self ```
QObject* q_sharedmemory_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self ```
QObject* q_sharedmemory_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, QObject* (*slot)() ```
void q_sharedmemory_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self ```
int32_t q_sharedmemory_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self ```
int32_t q_sharedmemory_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, int32_t (*slot)() ```
void q_sharedmemory_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, const char* signal ```
int32_t q_sharedmemory_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, const char* signal ```
int32_t q_sharedmemory_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, int32_t (*slot)(QSharedMemory*, const char*) ```
void q_sharedmemory_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
bool q_sharedmemory_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
bool q_sharedmemory_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, bool (*slot)(QSharedMemory*, QMetaMethod*) ```
void q_sharedmemory_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_delete(void* self);

/// https://doc.qt.io/qt-6/qsharedmemory.html#types

typedef enum {
    QSHAREDMEMORY_ACCESSMODE_READONLY = 0,
    QSHAREDMEMORY_ACCESSMODE_READWRITE = 1
} QSharedMemory__AccessMode;

typedef enum {
    QSHAREDMEMORY_SHAREDMEMORYERROR_NOERROR = 0,
    QSHAREDMEMORY_SHAREDMEMORYERROR_PERMISSIONDENIED = 1,
    QSHAREDMEMORY_SHAREDMEMORYERROR_INVALIDSIZE = 2,
    QSHAREDMEMORY_SHAREDMEMORYERROR_KEYERROR = 3,
    QSHAREDMEMORY_SHAREDMEMORYERROR_ALREADYEXISTS = 4,
    QSHAREDMEMORY_SHAREDMEMORYERROR_NOTFOUND = 5,
    QSHAREDMEMORY_SHAREDMEMORYERROR_LOCKERROR = 6,
    QSHAREDMEMORY_SHAREDMEMORYERROR_OUTOFRESOURCES = 7,
    QSHAREDMEMORY_SHAREDMEMORYERROR_UNKNOWNERROR = 8
} QSharedMemory__SharedMemoryError;

#endif
