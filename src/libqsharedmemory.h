#pragma once
#ifndef SRC_QT6C_LIBQSHAREDMEMORY_H
#define SRC_QT6C_LIBQSHAREDMEMORY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html)

/// q_sharedmemory_new constructs a new QSharedMemory object.
///
QSharedMemory* q_sharedmemory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html)

/// q_sharedmemory_new2 constructs a new QSharedMemory object.
///
/// @param key QNativeIpcKey*
///
QSharedMemory* q_sharedmemory_new2(void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html)

/// q_sharedmemory_new3 constructs a new QSharedMemory object.
///
/// @param key const char*
///
QSharedMemory* q_sharedmemory_new3(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html)

/// q_sharedmemory_new4 constructs a new QSharedMemory object.
///
/// @param parent QObject*
///
QSharedMemory* q_sharedmemory_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html)

/// q_sharedmemory_new5 constructs a new QSharedMemory object.
///
/// @param key QNativeIpcKey*
/// @param parent QObject*
///
QSharedMemory* q_sharedmemory_new5(void* key, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html)

/// q_sharedmemory_new6 constructs a new QSharedMemory object.
///
/// @param key const char*
/// @param parent QObject*
///
QSharedMemory* q_sharedmemory_new6(const char* key, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSharedMemory*
///
const QMetaObject* q_sharedmemory_meta_object(void* self);

/// @param self QSharedMemory*
/// @param param1 const char*
///
void* q_sharedmemory_metacast(void* self, const char* param1);

/// @param self QSharedMemory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sharedmemory_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSharedMemory*
/// @param callback int32_t func(QSharedMemory* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sharedmemory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSharedMemory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sharedmemory_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_sharedmemory_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#setKey)
///
/// @param self QSharedMemory*
/// @param key const char*
///
void q_sharedmemory_set_key(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSharedMemory*
///
const char* q_sharedmemory_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#setNativeKey)
///
/// @param self QSharedMemory*
/// @param key QNativeIpcKey*
///
void q_sharedmemory_set_native_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#setNativeKey)
///
/// @param self QSharedMemory*
/// @param key const char*
///
void q_sharedmemory_set_native_key2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#nativeKey)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSharedMemory*
///
const char* q_sharedmemory_native_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#nativeIpcKey)
///
/// @param self QSharedMemory*
///
QNativeIpcKey* q_sharedmemory_native_ipc_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#create)
///
/// @param self QSharedMemory*
/// @param size int64_t
///
bool q_sharedmemory_create(void* self, int64_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#size)
///
/// @param self QSharedMemory*
///
int64_t q_sharedmemory_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#attach)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_attach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#isAttached)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_is_attached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#detach)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#data)
///
/// @param self QSharedMemory*
///
void* q_sharedmemory_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#constData)
///
/// @param self QSharedMemory*
///
const void* q_sharedmemory_const_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#data)
///
/// @param self QSharedMemory*
///
const void* q_sharedmemory_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#lock)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_lock(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#unlock)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_unlock(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#error)
///
/// @param self QSharedMemory*
///
/// @return enum QSharedMemory__SharedMemoryError
///
int32_t q_sharedmemory_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSharedMemory*
///
const char* q_sharedmemory_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#isKeyTypeSupported)
///
/// @param type enum QNativeIpcKey__Type
///
bool q_sharedmemory_is_key_type_supported(uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#platformSafeKey)
///
/// @param key const char*
///
QNativeIpcKey* q_sharedmemory_platform_safe_key(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#legacyNativeKey)
///
/// @param key const char*
///
QNativeIpcKey* q_sharedmemory_legacy_native_key(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_sharedmemory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sharedmemory_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#setNativeKey)
///
/// @param self QSharedMemory*
/// @param key const char*
/// @param type enum QNativeIpcKey__Type
///
void q_sharedmemory_set_native_key22(void* self, const char* key, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#create)
///
/// @param self QSharedMemory*
/// @param size int64_t
/// @param mode enum QSharedMemory__AccessMode
///
bool q_sharedmemory_create2(void* self, int64_t size, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#attach)
///
/// @param self QSharedMemory*
/// @param mode enum QSharedMemory__AccessMode
///
bool q_sharedmemory_attach1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#platformSafeKey)
///
/// @param key const char*
/// @param type enum QNativeIpcKey__Type
///
QNativeIpcKey* q_sharedmemory_platform_safe_key2(const char* key, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#legacyNativeKey)
///
/// @param key const char*
/// @param type enum QNativeIpcKey__Type
///
QNativeIpcKey* q_sharedmemory_legacy_native_key2(const char* key, uint16_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSharedMemory*
///
const char* q_sharedmemory_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSharedMemory*
/// @param name char*
///
void q_sharedmemory_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSharedMemory*
///
bool q_sharedmemory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSharedMemory*
/// @param b bool
///
bool q_sharedmemory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSharedMemory*
///
QThread* q_sharedmemory_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSharedMemory*
/// @param thread QThread*
///
bool q_sharedmemory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSharedMemory*
/// @param interval int
///
int32_t q_sharedmemory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSharedMemory*
/// @param id int
///
void q_sharedmemory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSharedMemory*
/// @param id enum Qt__TimerId
///
void q_sharedmemory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSharedMemory*
///
libqt_list /* of QObject* */ q_sharedmemory_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSharedMemory*
/// @param parent QObject*
///
void q_sharedmemory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSharedMemory*
/// @param filterObj QObject*
///
void q_sharedmemory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSharedMemory*
/// @param obj QObject*
///
void q_sharedmemory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sharedmemory_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSharedMemory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sharedmemory_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sharedmemory_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sharedmemory_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSharedMemory*
///
void q_sharedmemory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSharedMemory*
///
void q_sharedmemory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSharedMemory*
/// @param name const char*
/// @param value QVariant*
///
bool q_sharedmemory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSharedMemory*
/// @param name const char*
///
QVariant* q_sharedmemory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSharedMemory*
///
const char** q_sharedmemory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSharedMemory*
///
QBindingStorage* q_sharedmemory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSharedMemory*
///
const QBindingStorage* q_sharedmemory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSharedMemory*
///
void q_sharedmemory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self)
///
void q_sharedmemory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSharedMemory*
///
QObject* q_sharedmemory_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSharedMemory*
/// @param classname const char*
///
bool q_sharedmemory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSharedMemory*
///
void q_sharedmemory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSharedMemory*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_sharedmemory_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSharedMemory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sharedmemory_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sharedmemory_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSharedMemory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sharedmemory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSharedMemory*
/// @param param1 QObject*
///
void q_sharedmemory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, QObject* param1)
///
void q_sharedmemory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QEvent*
///
bool q_sharedmemory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QEvent*
///
bool q_sharedmemory_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback bool func(QSharedMemory* self, QEvent* event)
///
void q_sharedmemory_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sharedmemory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sharedmemory_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback bool func(QSharedMemory* self, QObject* watched, QEvent* event)
///
void q_sharedmemory_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QTimerEvent*
///
void q_sharedmemory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QTimerEvent*
///
void q_sharedmemory_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, QTimerEvent* event)
///
void q_sharedmemory_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QChildEvent*
///
void q_sharedmemory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QChildEvent*
///
void q_sharedmemory_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, QChildEvent* event)
///
void q_sharedmemory_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QEvent*
///
void q_sharedmemory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param event QEvent*
///
void q_sharedmemory_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, QEvent* event)
///
void q_sharedmemory_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal QMetaMethod*
///
void q_sharedmemory_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal QMetaMethod*
///
void q_sharedmemory_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, QMetaMethod* signal)
///
void q_sharedmemory_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal QMetaMethod*
///
void q_sharedmemory_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal QMetaMethod*
///
void q_sharedmemory_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, QMetaMethod* signal)
///
void q_sharedmemory_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
///
QObject* q_sharedmemory_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
///
QObject* q_sharedmemory_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback QObject* func()
///
void q_sharedmemory_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
///
int32_t q_sharedmemory_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
///
int32_t q_sharedmemory_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback int32_t func()
///
void q_sharedmemory_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal const char*
///
int32_t q_sharedmemory_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal const char*
///
int32_t q_sharedmemory_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback int32_t func(QSharedMemory* self, const char* signal)
///
void q_sharedmemory_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal QMetaMethod*
///
bool q_sharedmemory_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param signal QMetaMethod*
///
bool q_sharedmemory_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSharedMemory*
/// @param callback bool func(QSharedMemory* self, QMetaMethod* signal)
///
void q_sharedmemory_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSharedMemory*
/// @param callback void func(QSharedMemory* self, const char* objectName)
///
void q_sharedmemory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#dtor.QSharedMemory)
///
/// Delete this object from C++ memory.
///
/// @param self QSharedMemory*
///
void q_sharedmemory_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#public-types)

typedef enum {
    QSHAREDMEMORY_ACCESSMODE_READONLY = 0,
    QSHAREDMEMORY_ACCESSMODE_READWRITE = 1
} QSharedMemory__AccessMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qsharedmemory.html#public-types)

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
