#pragma once
#ifndef SRC_QT6C_LIBQINPUTDEVICE_H
#define SRC_QT6C_LIBQINPUTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html)

/// q_inputdevice_new constructs a new QInputDevice object.
///
QInputDevice* q_inputdevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html)

/// q_inputdevice_new2 constructs a new QInputDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param type enum QInputDevice__DeviceType
///
QInputDevice* q_inputdevice_new2(const char* name, long long systemId, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html)

/// q_inputdevice_new3 constructs a new QInputDevice object.
///
/// @param parent QObject*
///
QInputDevice* q_inputdevice_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html)

/// q_inputdevice_new4 constructs a new QInputDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param type enum QInputDevice__DeviceType
/// @param seatName const char*
///
QInputDevice* q_inputdevice_new4(const char* name, long long systemId, int32_t type, const char* seatName);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html)

/// q_inputdevice_new5 constructs a new QInputDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param type enum QInputDevice__DeviceType
/// @param seatName const char*
/// @param parent QObject*
///
QInputDevice* q_inputdevice_new5(const char* name, long long systemId, int32_t type, const char* seatName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QInputDevice*
///
const QMetaObject* q_inputdevice_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QInputDevice*
/// @param callback const QMetaObject* func()
///
void q_inputdevice_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QInputDevice*
///
const QMetaObject* q_inputdevice_qbase_meta_object(void* self);

/// @param self QInputDevice*
/// @param param1 const char*
///
void* q_inputdevice_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QInputDevice*
/// @param callback void* func(QInputDevice* self, const char* param1)
///
void q_inputdevice_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QInputDevice*
/// @param param1 const char*
///
void* q_inputdevice_qbase_metacast(void* self, const char* param1);

/// @param self QInputDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_inputdevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QInputDevice*
/// @param callback int32_t func(QInputDevice* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_inputdevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QInputDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_inputdevice_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_inputdevice_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QInputDevice*
///
const char* q_inputdevice_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#type)
///
/// @param self QInputDevice*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_inputdevice_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
///
/// @param self QInputDevice*
///
/// @return flag of enum QInputDevice__Capability
///
int32_t q_inputdevice_capabilities(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
///
/// @param self QInputDevice*
/// @param cap enum QInputDevice__Capability
///
bool q_inputdevice_has_capability(void* self, int32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
///
/// @param self QInputDevice*
///
long long q_inputdevice_system_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QInputDevice*
///
const char* q_inputdevice_seat_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
///
/// @param self QInputDevice*
///
QRect* q_inputdevice_available_virtual_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_inputdevice_seat_names();

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#devices)
///
/// @return libqt_list of QInputDevice*
///
libqt_list q_inputdevice_devices();

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
const QInputDevice* q_inputdevice_primary_keyboard();

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#operator-eq-eq)
///
/// @param self QInputDevice*
/// @param other QInputDevice*
///
bool q_inputdevice_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// @param self QInputDevice*
/// @param area QRect*
///
void q_inputdevice_available_virtual_geometry_changed(void* self, void* area);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QRect* area)
///
void q_inputdevice_on_available_virtual_geometry_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_inputdevice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_inputdevice_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
/// @param seatName const char*
///
const QInputDevice* q_inputdevice_primary_keyboard1(const char* seatName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QInputDevice*
///
const char* q_inputdevice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QInputDevice*
/// @param name char*
///
void q_inputdevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QInputDevice*
///
bool q_inputdevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QInputDevice*
///
bool q_inputdevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QInputDevice*
///
bool q_inputdevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QInputDevice*
///
bool q_inputdevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QInputDevice*
/// @param b bool
///
bool q_inputdevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QInputDevice*
///
QThread* q_inputdevice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QInputDevice*
/// @param thread QThread*
///
bool q_inputdevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputDevice*
/// @param interval int
///
int32_t q_inputdevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputDevice*
/// @param time int64_t of nanoseconds
///
int32_t q_inputdevice_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QInputDevice*
/// @param id int
///
void q_inputdevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QInputDevice*
/// @param id enum Qt__TimerId
///
void q_inputdevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QInputDevice*
///
/// @return libqt_list of QObject*
///
libqt_list q_inputdevice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QInputDevice*
/// @param parent QObject*
///
void q_inputdevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QInputDevice*
/// @param filterObj QObject*
///
void q_inputdevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QInputDevice*
/// @param obj QObject*
///
void q_inputdevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_inputdevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QInputDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_inputdevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_inputdevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_inputdevice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QInputDevice*
///
void q_inputdevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QInputDevice*
///
void q_inputdevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QInputDevice*
/// @param name const char*
/// @param value QVariant*
///
bool q_inputdevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QInputDevice*
/// @param name const char*
///
QVariant* q_inputdevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QInputDevice*
///
const char** q_inputdevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QInputDevice*
///
QBindingStorage* q_inputdevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QInputDevice*
///
const QBindingStorage* q_inputdevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDevice*
///
void q_inputdevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self)
///
void q_inputdevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QInputDevice*
///
QObject* q_inputdevice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QInputDevice*
/// @param classname const char*
///
bool q_inputdevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QInputDevice*
///
void q_inputdevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputDevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_inputdevice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputDevice*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_inputdevice_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_inputdevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QInputDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_inputdevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDevice*
/// @param param1 QObject*
///
void q_inputdevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QObject* param1)
///
void q_inputdevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param event QEvent*
///
bool q_inputdevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param event QEvent*
///
bool q_inputdevice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback bool func(QInputDevice* self, QEvent* event)
///
void q_inputdevice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_inputdevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_inputdevice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback bool func(QInputDevice* self, QObject* watched, QEvent* event)
///
void q_inputdevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param event QTimerEvent*
///
void q_inputdevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param event QTimerEvent*
///
void q_inputdevice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QTimerEvent* event)
///
void q_inputdevice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param event QChildEvent*
///
void q_inputdevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param event QChildEvent*
///
void q_inputdevice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QChildEvent* event)
///
void q_inputdevice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param event QEvent*
///
void q_inputdevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param event QEvent*
///
void q_inputdevice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QEvent* event)
///
void q_inputdevice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param signal QMetaMethod*
///
void q_inputdevice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param signal QMetaMethod*
///
void q_inputdevice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QMetaMethod* signal)
///
void q_inputdevice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param signal QMetaMethod*
///
void q_inputdevice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param signal QMetaMethod*
///
void q_inputdevice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, QMetaMethod* signal)
///
void q_inputdevice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
///
QObject* q_inputdevice_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
///
QObject* q_inputdevice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback QObject* func()
///
void q_inputdevice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
///
int32_t q_inputdevice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
///
int32_t q_inputdevice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback int32_t func()
///
void q_inputdevice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param signal const char*
///
int32_t q_inputdevice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param signal const char*
///
int32_t q_inputdevice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback int32_t func(QInputDevice* self, const char* signal)
///
void q_inputdevice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDevice*
/// @param signal QMetaMethod*
///
bool q_inputdevice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDevice*
/// @param signal QMetaMethod*
///
bool q_inputdevice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDevice*
/// @param callback bool func(QInputDevice* self, QMetaMethod* signal)
///
void q_inputdevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QInputDevice*
/// @param callback void func(QInputDevice* self, const char* objectName)
///
void q_inputdevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#dtor.QInputDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QInputDevice*
///
void q_inputdevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#public-types)

typedef enum {
    QINPUTDEVICE_DEVICETYPE_UNKNOWN = 0,
    QINPUTDEVICE_DEVICETYPE_MOUSE = 1,
    QINPUTDEVICE_DEVICETYPE_TOUCHSCREEN = 2,
    QINPUTDEVICE_DEVICETYPE_TOUCHPAD = 4,
    QINPUTDEVICE_DEVICETYPE_PUCK = 8,
    QINPUTDEVICE_DEVICETYPE_STYLUS = 16,
    QINPUTDEVICE_DEVICETYPE_AIRBRUSH = 32,
    QINPUTDEVICE_DEVICETYPE_KEYBOARD = 4096,
    QINPUTDEVICE_DEVICETYPE_ALLDEVICES = 2147483647
} QInputDevice__DeviceType;

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#public-types)

typedef enum {
    QINPUTDEVICE_CAPABILITY_NONE = 0,
    QINPUTDEVICE_CAPABILITY_POSITION = 1,
    QINPUTDEVICE_CAPABILITY_AREA = 2,
    QINPUTDEVICE_CAPABILITY_PRESSURE = 4,
    QINPUTDEVICE_CAPABILITY_VELOCITY = 8,
    QINPUTDEVICE_CAPABILITY_NORMALIZEDPOSITION = 32,
    QINPUTDEVICE_CAPABILITY_MOUSEEMULATION = 64,
    QINPUTDEVICE_CAPABILITY_PIXELSCROLL = 128,
    QINPUTDEVICE_CAPABILITY_SCROLL = 256,
    QINPUTDEVICE_CAPABILITY_HOVER = 512,
    QINPUTDEVICE_CAPABILITY_ROTATION = 1024,
    QINPUTDEVICE_CAPABILITY_XTILT = 2048,
    QINPUTDEVICE_CAPABILITY_YTILT = 4096,
    QINPUTDEVICE_CAPABILITY_TANGENTIALPRESSURE = 8192,
    QINPUTDEVICE_CAPABILITY_ZPOSITION = 16384,
    QINPUTDEVICE_CAPABILITY_ALL = 2147483647
} QInputDevice__Capability;

#endif
