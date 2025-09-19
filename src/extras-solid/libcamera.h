#pragma once
#ifndef SRC_EXTRAS_SOLIDQT6C_LIBCAMERA_H
#define SRC_EXTRAS_SOLIDQT6C_LIBCAMERA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-camera.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__Camera*
const QMetaObject* k_solid__camera_meta_object(void* self);

/// @param self Solid__Camera*
/// @param param1 const char*
void* k_solid__camera_metacast(void* self, const char* param1);

/// @param self Solid__Camera*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_solid__camera_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_solid__camera_tr(const char* s);

/// [Qt documentation](https://api.kde.org/solid-camera.html#deviceInterfaceType)
///
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__camera_device_interface_type();

/// [Qt documentation](https://api.kde.org/solid-camera.html#supportedProtocols)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Camera*
const char** k_solid__camera_supported_protocols(void* self);

/// [Qt documentation](https://api.kde.org/solid-camera.html#supportedDrivers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Camera*
const char** k_solid__camera_supported_drivers(void* self);

/// [Qt documentation](https://api.kde.org/solid-camera.html#driverHandle)
///
/// @param self Solid__Camera*
/// @param driver const char*
QVariant* k_solid__camera_driver_handle(void* self, const char* driver);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_solid__camera_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_solid__camera_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/solid-camera.html#supportedDrivers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Camera*
/// @param protocol const char*
const char** k_solid__camera_supported_drivers1(void* self, const char* protocol);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__Camera*
bool k_solid__camera_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__camera_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__camera_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__camera_type_description(int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__Camera*
/// @param event QEvent*
bool k_solid__camera_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__Camera*
/// @param watched QObject*
/// @param event QEvent*
bool k_solid__camera_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Camera*
const char* k_solid__camera_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__Camera*
/// @param name char*
void k_solid__camera_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__Camera*
bool k_solid__camera_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__Camera*
bool k_solid__camera_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__Camera*
bool k_solid__camera_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__Camera*
bool k_solid__camera_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__Camera*
/// @param b bool
bool k_solid__camera_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__Camera*
QThread* k_solid__camera_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__Camera*
/// @param thread QThread*
bool k_solid__camera_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__Camera*
/// @param interval int
int32_t k_solid__camera_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__Camera*
/// @param id int
void k_solid__camera_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__Camera*
/// @param id enum Qt__TimerId
void k_solid__camera_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__Camera*
libqt_list /* of QObject* */ k_solid__camera_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__Camera*
/// @param parent QObject*
void k_solid__camera_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__Camera*
/// @param filterObj QObject*
void k_solid__camera_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__Camera*
/// @param obj QObject*
void k_solid__camera_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_solid__camera_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__Camera*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_solid__camera_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_solid__camera_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_solid__camera_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__Camera*
void k_solid__camera_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__Camera*
void k_solid__camera_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__Camera*
/// @param name const char*
/// @param value QVariant*
bool k_solid__camera_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__Camera*
/// @param name const char*
QVariant* k_solid__camera_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Camera*
const char** k_solid__camera_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__Camera*
QBindingStorage* k_solid__camera_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__Camera*
const QBindingStorage* k_solid__camera_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Camera*
void k_solid__camera_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Camera*
/// @param callback void func(Solid__Camera* self)
void k_solid__camera_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__Camera*
QObject* k_solid__camera_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__Camera*
/// @param classname const char*
bool k_solid__camera_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__Camera*
void k_solid__camera_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__Camera*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_solid__camera_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__Camera*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_solid__camera_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__camera_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__Camera*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__camera_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Camera*
/// @param param1 QObject*
void k_solid__camera_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Camera*
/// @param callback void func(Solid__Camera* self, QObject* param1)
void k_solid__camera_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__Camera*
/// @param callback void func(Solid__Camera* self, const char* objectName)
void k_solid__camera_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__Camera*
void k_solid__camera_delete(void* self);

#endif
