#pragma once
#ifndef SRCQT6C_LIBQPOINTINGDEVICE_H
#define SRCQT6C_LIBQPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqeventpoint.h"
#include "libqinputdevice.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html

/// q_pointingdeviceuniqueid_new constructs a new QPointingDeviceUniqueId object.
///
/// ``` QPointingDeviceUniqueId* other ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new(void* other);

/// q_pointingdeviceuniqueid_new2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
///
/// ``` QPointingDeviceUniqueId* other ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new2(void* other);

/// q_pointingdeviceuniqueid_new3 constructs a new QPointingDeviceUniqueId object.
///
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new3();

/// q_pointingdeviceuniqueid_new4 constructs a new QPointingDeviceUniqueId object.
///
/// ``` QPointingDeviceUniqueId* param1 ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new4(void* param1);

/// q_pointingdeviceuniqueid_copy_assign shallow copies `other` into `self`.
///
/// ``` QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other ```
void q_pointingdeviceuniqueid_copy_assign(void* self, void* other);

/// q_pointingdeviceuniqueid_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other ```
void q_pointingdeviceuniqueid_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
///
/// ``` long long id ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_from_numeric_id(long long id);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
///
/// ``` QPointingDeviceUniqueId* self ```
bool q_pointingdeviceuniqueid_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
///
/// ``` QPointingDeviceUniqueId* self ```
long long q_pointingdeviceuniqueid_numeric_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#dtor.QPointingDeviceUniqueId)
///
/// Delete this object from C++ memory.
///
/// ``` QPointingDeviceUniqueId* self ```
void q_pointingdeviceuniqueid_delete(void* self);

/// https://doc.qt.io/qt-6/qpointingdevice.html

/// q_pointingdevice_new constructs a new QPointingDevice object.
///
///
QPointingDevice* q_pointingdevice_new();

/// q_pointingdevice_new2 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount ```
QPointingDevice* q_pointingdevice_new2(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount);

/// q_pointingdevice_new3 constructs a new QPointingDevice object.
///
/// ``` QObject* parent ```
QPointingDevice* q_pointingdevice_new3(void* parent);

/// q_pointingdevice_new4 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount, const char* seatName ```
QPointingDevice* q_pointingdevice_new4(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName);

/// q_pointingdevice_new5 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount, const char* seatName, QPointingDeviceUniqueId* uniqueId ```
QPointingDevice* q_pointingdevice_new5(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId);

/// q_pointingdevice_new6 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount, const char* seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent ```
QPointingDevice* q_pointingdevice_new6(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPointingDevice* self ```
const QMetaObject* q_pointingdevice_meta_object(void* self);

/// ``` QPointingDevice* self, const char* param1 ```
void* q_pointingdevice_metacast(void* self, const char* param1);

/// ``` QPointingDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pointingdevice_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPointingDevice* self, int32_t (*slot)(QPointingDevice*, enum QMetaObject__Call, int, void*) ```
void q_pointingdevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPointingDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pointingdevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pointingdevice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
///
/// ``` QPointingDevice* self, enum QInputDevice__DeviceType devType ```
void q_pointingdevice_set_type(void* self, int64_t devType);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
///
/// ``` QPointingDevice* self, int caps ```
void q_pointingdevice_set_capabilities(void* self, int64_t caps);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
///
/// ``` QPointingDevice* self, int c ```
void q_pointingdevice_set_maximum_touch_points(void* self, int c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
///
/// ``` QPointingDevice* self ```
int64_t q_pointingdevice_pointer_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_maximum_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_button_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
///
/// ``` QPointingDevice* self ```
QPointingDeviceUniqueId* q_pointingdevice_unique_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
///
const QPointingDevice* q_pointingdevice_primary_pointing_device();

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#operator==)
///
/// ``` QPointingDevice* self, QPointingDevice* other ```
bool q_pointingdevice_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// ``` QPointingDevice* self, QObject* grabber, enum QPointingDevice__GrabTransition transition, QPointerEvent* event, QEventPoint* point ```
void q_pointingdevice_grab_changed(void* self, void* grabber, int64_t transition, void* event, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QObject*, enum QPointingDevice__GrabTransition, QPointerEvent*, QEventPoint*) ```
void q_pointingdevice_on_grab_changed(void* self, void (*slot)(void*, void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pointingdevice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pointingdevice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
/// ``` const char* seatName ```
const QPointingDevice* q_pointingdevice_primary_pointing_device1(const char* seatName);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#name)
///
/// ``` QPointingDevice* self ```
const char* q_pointingdevice_name(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#type)
///
/// ``` QPointingDevice* self ```
int64_t q_pointingdevice_type(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
///
/// ``` QPointingDevice* self ```
int64_t q_pointingdevice_capabilities(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
///
/// ``` QPointingDevice* self, enum QInputDevice__Capability cap ```
bool q_pointingdevice_has_capability(void* self, int64_t cap);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
///
/// ``` QPointingDevice* self ```
long long q_pointingdevice_system_id(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
///
/// ``` QPointingDevice* self ```
const char* q_pointingdevice_seat_name(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
///
/// ``` QPointingDevice* self ```
QRect* q_pointingdevice_available_virtual_geometry(void* self);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
///
///
const char** q_pointingdevice_seat_names();

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#devices)
///
///
libqt_list /* of QInputDevice* */ q_pointingdevice_devices();

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
///
const QInputDevice* q_pointingdevice_primary_keyboard();

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// ``` QPointingDevice* self, QRect* area ```
void q_pointingdevice_available_virtual_geometry_changed(void* self, void* area);

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// ``` QPointingDevice* self, void (*slot)(QInputDevice*, QRect*) ```
void q_pointingdevice_on_available_virtual_geometry_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
/// ``` const char* seatName ```
const QInputDevice* q_pointingdevice_primary_keyboard1(const char* seatName);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPointingDevice* self ```
const char* q_pointingdevice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPointingDevice* self, char* name ```
void q_pointingdevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPointingDevice* self, bool b ```
bool q_pointingdevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPointingDevice* self ```
QThread* q_pointingdevice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPointingDevice* self, QThread* thread ```
void q_pointingdevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPointingDevice* self, int interval ```
int32_t q_pointingdevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPointingDevice* self, int id ```
void q_pointingdevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPointingDevice* self ```
libqt_list /* of QObject* */ q_pointingdevice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPointingDevice* self, QObject* parent ```
void q_pointingdevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPointingDevice* self, QObject* filterObj ```
void q_pointingdevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPointingDevice* self, QObject* obj ```
void q_pointingdevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pointingdevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPointingDevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pointingdevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pointingdevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pointingdevice_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPointingDevice* self, const char* name, QVariant* value ```
bool q_pointingdevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPointingDevice* self, const char* name ```
QVariant* q_pointingdevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPointingDevice* self ```
const char** q_pointingdevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPointingDevice* self ```
QBindingStorage* q_pointingdevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPointingDevice* self ```
const QBindingStorage* q_pointingdevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPointingDevice* self, void (*slot)(QObject*) ```
void q_pointingdevice_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPointingDevice* self ```
QObject* q_pointingdevice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPointingDevice* self, const char* classname ```
bool q_pointingdevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPointingDevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pointingdevice_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pointingdevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPointingDevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pointingdevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPointingDevice* self, QObject* param1 ```
void q_pointingdevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPointingDevice* self, void (*slot)(QObject*, QObject*) ```
void q_pointingdevice_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
bool q_pointingdevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
bool q_pointingdevice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, bool (*slot)(QPointingDevice*, QEvent*) ```
void q_pointingdevice_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QObject* watched, QEvent* event ```
bool q_pointingdevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QObject* watched, QEvent* event ```
bool q_pointingdevice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, bool (*slot)(QPointingDevice*, QObject*, QEvent*) ```
void q_pointingdevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QTimerEvent* event ```
void q_pointingdevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QTimerEvent* event ```
void q_pointingdevice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QTimerEvent*) ```
void q_pointingdevice_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QChildEvent* event ```
void q_pointingdevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QChildEvent* event ```
void q_pointingdevice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QChildEvent*) ```
void q_pointingdevice_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
void q_pointingdevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
void q_pointingdevice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QEvent*) ```
void q_pointingdevice_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QMetaMethod*) ```
void q_pointingdevice_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QMetaMethod*) ```
void q_pointingdevice_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self ```
QObject* q_pointingdevice_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self ```
QObject* q_pointingdevice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, QObject* (*slot)() ```
void q_pointingdevice_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, int32_t (*slot)() ```
void q_pointingdevice_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, const char* signal ```
int32_t q_pointingdevice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, const char* signal ```
int32_t q_pointingdevice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, int32_t (*slot)(QPointingDevice*, const char*) ```
void q_pointingdevice_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
bool q_pointingdevice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
bool q_pointingdevice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, bool (*slot)(QPointingDevice*, QMetaMethod*) ```
void q_pointingdevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPointingDevice* self, void (*slot)(QObject*, const char*) ```
void q_pointingdevice_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#dtor.QPointingDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QPointingDevice* self ```
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
