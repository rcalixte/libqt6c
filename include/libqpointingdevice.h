#pragma once
#ifndef SRCQT6C_LIBQPOINTINGDEVICE_H
#define SRCQT6C_LIBQPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html

/// q_pointingdeviceuniqueid_new constructs a new QPointingDeviceUniqueId object.
///
/// @param other QPointingDeviceUniqueId*
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new(void* other);

/// q_pointingdeviceuniqueid_new2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
///
/// @param other QPointingDeviceUniqueId*
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new2(void* other);

/// q_pointingdeviceuniqueid_new3 constructs a new QPointingDeviceUniqueId object.
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new3();

/// q_pointingdeviceuniqueid_new4 constructs a new QPointingDeviceUniqueId object.
///
/// @param param1 QPointingDeviceUniqueId*
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new4(void* param1);

/// q_pointingdeviceuniqueid_copy_assign shallow copies `other` into `self`.
///
/// @param self QPointingDeviceUniqueId*
/// @param other QPointingDeviceUniqueId*
void q_pointingdeviceuniqueid_copy_assign(void* self, void* other);

/// q_pointingdeviceuniqueid_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPointingDeviceUniqueId*
/// @param other QPointingDeviceUniqueId*
void q_pointingdeviceuniqueid_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
///
/// @param id long long
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_from_numeric_id(long long id);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
///
/// @param self QPointingDeviceUniqueId*
bool q_pointingdeviceuniqueid_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
///
/// @param self QPointingDeviceUniqueId*
long long q_pointingdeviceuniqueid_numeric_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#dtor.QPointingDeviceUniqueId)
///
/// Delete this object from C++ memory.
///
/// @param self QPointingDeviceUniqueId*
void q_pointingdeviceuniqueid_delete(void* self);

/// https://doc.qt.io/qt-6/qpointingdevice.html

/// q_pointingdevice_new constructs a new QPointingDevice object.
///
QPointingDevice* q_pointingdevice_new();

/// q_pointingdevice_new2 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
QPointingDevice* q_pointingdevice_new2(const char* name, long long systemId, int32_t devType, int32_t pType, int64_t caps, int maxPoints, int buttonCount);

/// q_pointingdevice_new3 constructs a new QPointingDevice object.
///
/// @param parent QObject*
QPointingDevice* q_pointingdevice_new3(void* parent);

/// q_pointingdevice_new4 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
/// @param seatName const char*
QPointingDevice* q_pointingdevice_new4(const char* name, long long systemId, int32_t devType, int32_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName);

/// q_pointingdevice_new5 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
/// @param seatName const char*
/// @param uniqueId QPointingDeviceUniqueId*
QPointingDevice* q_pointingdevice_new5(const char* name, long long systemId, int32_t devType, int32_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId);

/// q_pointingdevice_new6 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId long long
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
/// @param seatName const char*
/// @param uniqueId QPointingDeviceUniqueId*
/// @param parent QObject*
QPointingDevice* q_pointingdevice_new6(const char* name, long long systemId, int32_t devType, int32_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPointingDevice*
const QMetaObject* q_pointingdevice_meta_object(void* self);

/// @param self QPointingDevice*
/// @param param1 const char*
void* q_pointingdevice_metacast(void* self, const char* param1);

/// @param self QPointingDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pointingdevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPointingDevice*
/// @param callback int32_t fn(QPointingDevice*, enum QMetaObject__Call, int, void*)
void q_pointingdevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPointingDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pointingdevice_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pointingdevice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
///
/// @param self QPointingDevice*
/// @param devType enum QInputDevice__DeviceType
void q_pointingdevice_set_type(void* self, int32_t devType);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
///
/// @param self QPointingDevice*
/// @param caps flag of enum QInputDevice__Capability
void q_pointingdevice_set_capabilities(void* self, int64_t caps);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
///
/// @param self QPointingDevice*
/// @param c int
void q_pointingdevice_set_maximum_touch_points(void* self, int c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
///
/// @param self QPointingDevice*
///
/// @return enum QPointingDevice__PointerType
int32_t q_pointingdevice_pointer_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
///
/// @param self QPointingDevice*
int32_t q_pointingdevice_maximum_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
///
/// @param self QPointingDevice*
int32_t q_pointingdevice_button_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
///
/// @param self QPointingDevice*
QPointingDeviceUniqueId* q_pointingdevice_unique_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
const QPointingDevice* q_pointingdevice_primary_pointing_device();

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#operator-eq-eq)
///
/// @param self QPointingDevice*
/// @param other QPointingDevice*
bool q_pointingdevice_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// @param self QPointingDevice*
/// @param grabber QObject*
/// @param transition enum QPointingDevice__GrabTransition
/// @param event QPointerEvent*
/// @param point QEventPoint*
void q_pointingdevice_grab_changed(void* self, void* grabber, int32_t transition, void* event, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QObject*, enum QPointingDevice__GrabTransition, QPointerEvent*, QEventPoint*)
void q_pointingdevice_on_grab_changed(void* self, void (*callback)(void*, void*, int32_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pointingdevice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pointingdevice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
/// @param seatName const char*
const QPointingDevice* q_pointingdevice_primary_pointing_device1(const char* seatName);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPointingDevice*
const char* q_pointingdevice_name(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#type)
///
/// @param self QPointingDevice*
///
/// @return enum QInputDevice__DeviceType
int32_t q_pointingdevice_type(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
///
/// @param self QPointingDevice*
///
/// @return flag of enum QInputDevice__Capability
int64_t q_pointingdevice_capabilities(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
///
/// @param self QPointingDevice*
/// @param cap enum QInputDevice__Capability
bool q_pointingdevice_has_capability(void* self, int32_t cap);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
///
/// @param self QPointingDevice*
long long q_pointingdevice_system_id(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPointingDevice*
const char* q_pointingdevice_seat_name(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
///
/// @param self QPointingDevice*
QRect* q_pointingdevice_available_virtual_geometry(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_pointingdevice_seat_names();

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#devices)
///
libqt_list /* of QInputDevice* */ q_pointingdevice_devices();

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
const QInputDevice* q_pointingdevice_primary_keyboard();

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// @param self QPointingDevice*
/// @param area QRect*
void q_pointingdevice_available_virtual_geometry_changed(void* self, void* area);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QRect*)
void q_pointingdevice_on_available_virtual_geometry_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
/// @param seatName const char*
const QInputDevice* q_pointingdevice_primary_keyboard1(const char* seatName);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPointingDevice*
const char* q_pointingdevice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPointingDevice*
/// @param name char*
void q_pointingdevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPointingDevice*
bool q_pointingdevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPointingDevice*
bool q_pointingdevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPointingDevice*
bool q_pointingdevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPointingDevice*
bool q_pointingdevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPointingDevice*
/// @param b bool
bool q_pointingdevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPointingDevice*
QThread* q_pointingdevice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPointingDevice*
/// @param thread QThread*
bool q_pointingdevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPointingDevice*
/// @param interval int
int32_t q_pointingdevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPointingDevice*
/// @param id int
void q_pointingdevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPointingDevice*
/// @param id enum Qt__TimerId
void q_pointingdevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPointingDevice*
libqt_list /* of QObject* */ q_pointingdevice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPointingDevice*
/// @param parent QObject*
void q_pointingdevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPointingDevice*
/// @param filterObj QObject*
void q_pointingdevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPointingDevice*
/// @param obj QObject*
void q_pointingdevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pointingdevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPointingDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pointingdevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pointingdevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pointingdevice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPointingDevice*
void q_pointingdevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPointingDevice*
void q_pointingdevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPointingDevice*
/// @param name const char*
/// @param value QVariant*
bool q_pointingdevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPointingDevice*
/// @param name const char*
QVariant* q_pointingdevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPointingDevice*
const char** q_pointingdevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPointingDevice*
QBindingStorage* q_pointingdevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPointingDevice*
const QBindingStorage* q_pointingdevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
void q_pointingdevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*)
void q_pointingdevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPointingDevice*
QObject* q_pointingdevice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPointingDevice*
/// @param classname const char*
bool q_pointingdevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPointingDevice*
void q_pointingdevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPointingDevice*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pointingdevice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPointingDevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pointingdevice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pointingdevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPointingDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pointingdevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
/// @param param1 QObject*
void q_pointingdevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QObject*)
void q_pointingdevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
bool q_pointingdevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
bool q_pointingdevice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback bool fn(QPointingDevice*, QEvent*)
void q_pointingdevice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param watched QObject*
/// @param event QEvent*
bool q_pointingdevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param watched QObject*
/// @param event QEvent*
bool q_pointingdevice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback bool fn(QPointingDevice*, QObject*, QEvent*)
void q_pointingdevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QTimerEvent*
void q_pointingdevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QTimerEvent*
void q_pointingdevice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QTimerEvent*)
void q_pointingdevice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QChildEvent*
void q_pointingdevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QChildEvent*
void q_pointingdevice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QChildEvent*)
void q_pointingdevice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
void q_pointingdevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
void q_pointingdevice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QEvent*)
void q_pointingdevice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
void q_pointingdevice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
void q_pointingdevice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QMetaMethod*)
void q_pointingdevice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
void q_pointingdevice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
void q_pointingdevice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, QMetaMethod*)
void q_pointingdevice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
QObject* q_pointingdevice_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
QObject* q_pointingdevice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback QObject* fn()
void q_pointingdevice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
int32_t q_pointingdevice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
int32_t q_pointingdevice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback int32_t fn()
void q_pointingdevice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal const char*
int32_t q_pointingdevice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal const char*
int32_t q_pointingdevice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback int32_t fn(QPointingDevice*, const char*)
void q_pointingdevice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
bool q_pointingdevice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
bool q_pointingdevice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback bool fn(QPointingDevice*, QMetaMethod*)
void q_pointingdevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPointingDevice*
/// @param callback void fn(QPointingDevice*, const char*)
void q_pointingdevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#dtor.QPointingDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QPointingDevice*
void q_pointingdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qpointingdevice.html#types

typedef enum {
    QPOINTINGDEVICE_POINTERTYPE_UNKNOWN = 0,
    QPOINTINGDEVICE_POINTERTYPE_GENERIC = 1,
    QPOINTINGDEVICE_POINTERTYPE_FINGER = 2,
    QPOINTINGDEVICE_POINTERTYPE_PEN = 4,
    QPOINTINGDEVICE_POINTERTYPE_ERASER = 8,
    QPOINTINGDEVICE_POINTERTYPE_CURSOR = 16,
    QPOINTINGDEVICE_POINTERTYPE_ALLPOINTERTYPES = 32767
} QPointingDevice__PointerType;

typedef enum {
    QPOINTINGDEVICE_GRABTRANSITION_GRABPASSIVE = 1,
    QPOINTINGDEVICE_GRABTRANSITION_UNGRABPASSIVE = 2,
    QPOINTINGDEVICE_GRABTRANSITION_CANCELGRABPASSIVE = 3,
    QPOINTINGDEVICE_GRABTRANSITION_OVERRIDEGRABPASSIVE = 4,
    QPOINTINGDEVICE_GRABTRANSITION_GRABEXCLUSIVE = 16,
    QPOINTINGDEVICE_GRABTRANSITION_UNGRABEXCLUSIVE = 32,
    QPOINTINGDEVICE_GRABTRANSITION_CANCELGRABEXCLUSIVE = 48
} QPointingDevice__GrabTransition;

#endif
