#pragma once
#ifndef LIBQPOINTINGDEVICE_H
#define LIBQPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html)

/// q_pointingdeviceuniqueid_new constructs a new QPointingDeviceUniqueId object.
///
/// @param other QPointingDeviceUniqueId*
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html)

/// q_pointingdeviceuniqueid_new2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
///
/// @param other QPointingDeviceUniqueId*
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html)

/// q_pointingdeviceuniqueid_new3 constructs a new QPointingDeviceUniqueId object.
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html)

/// q_pointingdeviceuniqueid_new4 constructs a new QPointingDeviceUniqueId object.
///
/// @param param1 QPointingDeviceUniqueId*
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new4(const void* param1);

/// q_pointingdeviceuniqueid_copy_assign shallow copies `other` into `self`.
///
/// @param self QPointingDeviceUniqueId*
/// @param other QPointingDeviceUniqueId*
///
void q_pointingdeviceuniqueid_copy_assign(void* self, void* other);

/// q_pointingdeviceuniqueid_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPointingDeviceUniqueId*
/// @param other QPointingDeviceUniqueId*
///
void q_pointingdeviceuniqueid_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
///
/// @param id int64_t
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_from_numeric_id(int64_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
///
/// @param self const QPointingDeviceUniqueId*
///
bool q_pointingdeviceuniqueid_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
///
/// @param self const QPointingDeviceUniqueId*
///
int64_t q_pointingdeviceuniqueid_numeric_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#dtor.QPointingDeviceUniqueId)
///
/// Delete this object from C++ memory.
///
/// @param self QPointingDeviceUniqueId*
///
void q_pointingdeviceuniqueid_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice-h.html#qHash)
///
/// @param key QPointingDeviceUniqueId*
/// @param seed size_t
///
size_t q_qpointingdevice_h_q_hash(void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)

/// q_pointingdevice_new constructs a new QPointingDevice object.
///
QPointingDevice* q_pointingdevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)

/// q_pointingdevice_new2 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId int64_t
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
///
QPointingDevice* q_pointingdevice_new2(const char* name, int64_t systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)

/// q_pointingdevice_new3 constructs a new QPointingDevice object.
///
/// @param parent QObject*
///
QPointingDevice* q_pointingdevice_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)

/// q_pointingdevice_new4 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId int64_t
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
/// @param seatName const char*
///
QPointingDevice* q_pointingdevice_new4(const char* name, int64_t systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount, const char* seatName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)

/// q_pointingdevice_new5 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId int64_t
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
/// @param seatName const char*
/// @param uniqueId QPointingDeviceUniqueId*
///
QPointingDevice* q_pointingdevice_new5(const char* name, int64_t systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)

/// q_pointingdevice_new6 constructs a new QPointingDevice object.
///
/// @param name const char*
/// @param systemId int64_t
/// @param devType enum QInputDevice__DeviceType
/// @param pType enum QPointingDevice__PointerType
/// @param caps flag of enum QInputDevice__Capability
/// @param maxPoints int
/// @param buttonCount int
/// @param seatName const char*
/// @param uniqueId QPointingDeviceUniqueId*
/// @param parent QObject*
///
QPointingDevice* q_pointingdevice_new6(const char* name, int64_t systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPointingDevice*
///
const QMetaObject* q_pointingdevice_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPointingDevice*
/// @param callback const QMetaObject* func(const QPointingDevice* self)
///
void q_pointingdevice_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPointingDevice*
///
const QMetaObject* q_pointingdevice_super_meta_object(const void* self);

/// @param self QPointingDevice*
/// @param param1 const char*
///
void* q_pointingdevice_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPointingDevice*
/// @param callback void* func(QPointingDevice* self, const char* param1)
///
void q_pointingdevice_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPointingDevice*
/// @param param1 const char*
///
void* q_pointingdevice_super_metacast(void* self, const char* param1);

/// @param self QPointingDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pointingdevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPointingDevice*
/// @param callback int32_t func(QPointingDevice* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pointingdevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPointingDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pointingdevice_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pointingdevice_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
///
/// @param self QPointingDevice*
/// @param devType enum QInputDevice__DeviceType
///
void q_pointingdevice_set_type(void* self, int32_t devType);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
///
/// @param self QPointingDevice*
/// @param caps flag of enum QInputDevice__Capability
///
void q_pointingdevice_set_capabilities(void* self, int32_t caps);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
///
/// @param self QPointingDevice*
/// @param c int
///
void q_pointingdevice_set_maximum_touch_points(void* self, int c);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
///
/// @param self const QPointingDevice*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_pointingdevice_pointer_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
///
/// @param self const QPointingDevice*
///
int32_t q_pointingdevice_maximum_points(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
///
/// @param self const QPointingDevice*
///
int32_t q_pointingdevice_button_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
///
/// @param self const QPointingDevice*
///
QPointingDeviceUniqueId* q_pointingdevice_unique_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
const QPointingDevice* q_pointingdevice_primary_pointing_device();

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#operator-eq-eq)
///
/// @param self const QPointingDevice*
/// @param other QPointingDevice*
///
bool q_pointingdevice_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// @param self const QPointingDevice*
/// @param grabber QObject*
/// @param transition enum QPointingDevice__GrabTransition
/// @param event QPointerEvent*
/// @param point QEventPoint*
///
void q_pointingdevice_grab_changed(const void* self, void* grabber, int32_t transition, const void* event, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// @param self QPointingDevice*
/// @param callback void func(const QPointingDevice* self, QObject* grabber, enum QPointingDevice__GrabTransition transition, QPointerEvent* event, QEventPoint* point)
///
void q_pointingdevice_on_grab_changed(void* self, void (*callback)(const void*, void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pointingdevice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pointingdevice_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
/// @param seatName const char*
///
const QPointingDevice* q_pointingdevice_primary_pointing_device1(const char* seatName);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPointingDevice*
///
const char* q_pointingdevice_name(const void* self);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#type)
///
/// @param self const QPointingDevice*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_pointingdevice_type(const void* self);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
///
/// @param self const QPointingDevice*
///
/// @return flag of enum QInputDevice__Capability
///
int32_t q_pointingdevice_capabilities(const void* self);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
///
/// @param self const QPointingDevice*
/// @param cap enum QInputDevice__Capability
///
bool q_pointingdevice_has_capability(const void* self, int32_t cap);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
///
/// @param self const QPointingDevice*
///
int64_t q_pointingdevice_system_id(const void* self);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPointingDevice*
///
const char* q_pointingdevice_seat_name(const void* self);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
///
/// @param self const QPointingDevice*
///
QRect* q_pointingdevice_available_virtual_geometry(const void* self);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_pointingdevice_seat_names();

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#devices)
///
/// @return libqt_list of QInputDevice*
///
libqt_list q_pointingdevice_devices();

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
const QInputDevice* q_pointingdevice_primary_keyboard();

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// @param self QPointingDevice*
/// @param area QRect*
///
void q_pointingdevice_available_virtual_geometry_changed(void* self, void* area);

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QRect* area)
///
void q_pointingdevice_on_available_virtual_geometry_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QInputDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
/// @param seatName const char*
///
const QInputDevice* q_pointingdevice_primary_keyboard1(const char* seatName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPointingDevice*
///
const char* q_pointingdevice_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPointingDevice*
/// @param name const char*
///
void q_pointingdevice_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPointingDevice*
///
bool q_pointingdevice_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPointingDevice*
///
bool q_pointingdevice_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPointingDevice*
///
bool q_pointingdevice_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPointingDevice*
///
bool q_pointingdevice_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPointingDevice*
/// @param b bool
///
bool q_pointingdevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPointingDevice*
///
QThread* q_pointingdevice_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPointingDevice*
/// @param thread QThread*
///
bool q_pointingdevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPointingDevice*
/// @param interval int
///
int32_t q_pointingdevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPointingDevice*
/// @param time int64_t of nanoseconds
///
int32_t q_pointingdevice_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPointingDevice*
/// @param id int
///
void q_pointingdevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPointingDevice*
/// @param id enum Qt__TimerId
///
void q_pointingdevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPointingDevice*
///
/// @return libqt_list of QObject*
///
libqt_list q_pointingdevice_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPointingDevice*
/// @param parent QObject*
///
void q_pointingdevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPointingDevice*
/// @param filterObj QObject*
///
void q_pointingdevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPointingDevice*
/// @param obj QObject*
///
void q_pointingdevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pointingdevice_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pointingdevice_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPointingDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pointingdevice_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pointingdevice_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pointingdevice_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPointingDevice*
///
bool q_pointingdevice_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPointingDevice*
/// @param receiver QObject*
///
bool q_pointingdevice_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pointingdevice_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPointingDevice*
///
void q_pointingdevice_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPointingDevice*
///
void q_pointingdevice_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPointingDevice*
/// @param name const char*
/// @param value QVariant*
///
bool q_pointingdevice_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPointingDevice*
/// @param name const char*
///
QVariant* q_pointingdevice_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPointingDevice*
///
const char** q_pointingdevice_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPointingDevice*
///
QBindingStorage* q_pointingdevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPointingDevice*
///
const QBindingStorage* q_pointingdevice_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
///
void q_pointingdevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self)
///
void q_pointingdevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPointingDevice*
///
QObject* q_pointingdevice_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPointingDevice*
/// @param classname const char*
///
bool q_pointingdevice_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPointingDevice*
///
void q_pointingdevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPointingDevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pointingdevice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPointingDevice*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pointingdevice_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_pointingdevice_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_pointingdevice_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPointingDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pointingdevice_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPointingDevice*
/// @param signal const char*
///
bool q_pointingdevice_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPointingDevice*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pointingdevice_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPointingDevice*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pointingdevice_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPointingDevice*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pointingdevice_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
/// @param param1 QObject*
///
void q_pointingdevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QObject* param1)
///
void q_pointingdevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
///
bool q_pointingdevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
///
bool q_pointingdevice_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback bool func(QPointingDevice* self, QEvent* event)
///
void q_pointingdevice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pointingdevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pointingdevice_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback bool func(QPointingDevice* self, QObject* watched, QEvent* event)
///
void q_pointingdevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QTimerEvent*
///
void q_pointingdevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QTimerEvent*
///
void q_pointingdevice_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QTimerEvent* event)
///
void q_pointingdevice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QChildEvent*
///
void q_pointingdevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QChildEvent*
///
void q_pointingdevice_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QChildEvent* event)
///
void q_pointingdevice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
///
void q_pointingdevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param event QEvent*
///
void q_pointingdevice_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QEvent* event)
///
void q_pointingdevice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
///
void q_pointingdevice_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
///
void q_pointingdevice_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QMetaMethod* signal)
///
void q_pointingdevice_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
///
void q_pointingdevice_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param signal QMetaMethod*
///
void q_pointingdevice_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, QMetaMethod* signal)
///
void q_pointingdevice_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPointingDevice*
///
QObject* q_pointingdevice_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPointingDevice*
///
QObject* q_pointingdevice_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback QObject* func(QPointingDevice* self)
///
void q_pointingdevice_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPointingDevice*
///
int32_t q_pointingdevice_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPointingDevice*
///
int32_t q_pointingdevice_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback int32_t func(QPointingDevice* self)
///
void q_pointingdevice_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPointingDevice*
/// @param signal const char*
///
int32_t q_pointingdevice_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPointingDevice*
/// @param signal const char*
///
int32_t q_pointingdevice_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback int32_t func(QPointingDevice* self, const char* signal)
///
void q_pointingdevice_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPointingDevice*
/// @param signal QMetaMethod*
///
bool q_pointingdevice_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPointingDevice*
/// @param signal QMetaMethod*
///
bool q_pointingdevice_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPointingDevice*
/// @param callback bool func(QPointingDevice* self, QMetaMethod* signal)
///
void q_pointingdevice_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPointingDevice*
/// @param callback void func(QPointingDevice* self, const char* objectName)
///
void q_pointingdevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#dtor.QPointingDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QPointingDevice*
///
void q_pointingdevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#public-types)

typedef enum {
    QPOINTINGDEVICE_POINTERTYPE_UNKNOWN = 0,
    QPOINTINGDEVICE_POINTERTYPE_GENERIC = 1,
    QPOINTINGDEVICE_POINTERTYPE_FINGER = 2,
    QPOINTINGDEVICE_POINTERTYPE_PEN = 4,
    QPOINTINGDEVICE_POINTERTYPE_ERASER = 8,
    QPOINTINGDEVICE_POINTERTYPE_CURSOR = 16,
    QPOINTINGDEVICE_POINTERTYPE_ALLPOINTERTYPES = 32767
} QPointingDevice__PointerType;

/// [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#public-types)

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
