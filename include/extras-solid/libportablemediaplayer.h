#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBPORTABLEMEDIAPLAYER_H
#define SRC_EXTRAS_SOLID_QT6C_LIBPORTABLEMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-portablemediaplayer.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__PortableMediaPlayer*
///
const QMetaObject* k_solid__portablemediaplayer_meta_object(void* self);

/// @param self Solid__PortableMediaPlayer*
/// @param param1 const char*
///
void* k_solid__portablemediaplayer_metacast(void* self, const char* param1);

/// @param self Solid__PortableMediaPlayer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__portablemediaplayer_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_solid__portablemediaplayer_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-portablemediaplayer.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__portablemediaplayer_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-portablemediaplayer.html#supportedProtocols)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__PortableMediaPlayer*
///
const char** k_solid__portablemediaplayer_supported_protocols(void* self);

/// [Upstream resources](https://api.kde.org/solid-portablemediaplayer.html#supportedDrivers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__PortableMediaPlayer*
///
const char** k_solid__portablemediaplayer_supported_drivers(void* self);

/// [Upstream resources](https://api.kde.org/solid-portablemediaplayer.html#driverHandle)
///
/// @param self Solid__PortableMediaPlayer*
/// @param driver const char*
///
QVariant* k_solid__portablemediaplayer_driver_handle(void* self, const char* driver);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__portablemediaplayer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__portablemediaplayer_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/solid-portablemediaplayer.html#supportedDrivers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__PortableMediaPlayer*
/// @param protocol const char*
///
const char** k_solid__portablemediaplayer_supported_drivers1(void* self, const char* protocol);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__PortableMediaPlayer*
///
bool k_solid__portablemediaplayer_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__portablemediaplayer_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__portablemediaplayer_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__portablemediaplayer_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__PortableMediaPlayer*
/// @param event QEvent*
///
bool k_solid__portablemediaplayer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__PortableMediaPlayer*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__portablemediaplayer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__PortableMediaPlayer*
///
const char* k_solid__portablemediaplayer_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__PortableMediaPlayer*
/// @param name char*
///
void k_solid__portablemediaplayer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__PortableMediaPlayer*
///
bool k_solid__portablemediaplayer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__PortableMediaPlayer*
///
bool k_solid__portablemediaplayer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__PortableMediaPlayer*
///
bool k_solid__portablemediaplayer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__PortableMediaPlayer*
///
bool k_solid__portablemediaplayer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__PortableMediaPlayer*
/// @param b bool
///
bool k_solid__portablemediaplayer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__PortableMediaPlayer*
///
QThread* k_solid__portablemediaplayer_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__PortableMediaPlayer*
/// @param thread QThread*
///
bool k_solid__portablemediaplayer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__PortableMediaPlayer*
/// @param interval int
///
int32_t k_solid__portablemediaplayer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__PortableMediaPlayer*
/// @param id int
///
void k_solid__portablemediaplayer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__PortableMediaPlayer*
/// @param id enum Qt__TimerId
///
void k_solid__portablemediaplayer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__PortableMediaPlayer*
///
libqt_list /* of QObject* */ k_solid__portablemediaplayer_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__PortableMediaPlayer*
/// @param parent QObject*
///
void k_solid__portablemediaplayer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__PortableMediaPlayer*
/// @param filterObj QObject*
///
void k_solid__portablemediaplayer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__PortableMediaPlayer*
/// @param obj QObject*
///
void k_solid__portablemediaplayer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__portablemediaplayer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__PortableMediaPlayer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__portablemediaplayer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__portablemediaplayer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__portablemediaplayer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__PortableMediaPlayer*
///
void k_solid__portablemediaplayer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__PortableMediaPlayer*
///
void k_solid__portablemediaplayer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__PortableMediaPlayer*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__portablemediaplayer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__PortableMediaPlayer*
/// @param name const char*
///
QVariant* k_solid__portablemediaplayer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__PortableMediaPlayer*
///
const char** k_solid__portablemediaplayer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__PortableMediaPlayer*
///
QBindingStorage* k_solid__portablemediaplayer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__PortableMediaPlayer*
///
const QBindingStorage* k_solid__portablemediaplayer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__PortableMediaPlayer*
///
void k_solid__portablemediaplayer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__PortableMediaPlayer*
/// @param callback void func(Solid__PortableMediaPlayer* self)
///
void k_solid__portablemediaplayer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__PortableMediaPlayer*
///
QObject* k_solid__portablemediaplayer_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__PortableMediaPlayer*
/// @param classname const char*
///
bool k_solid__portablemediaplayer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__PortableMediaPlayer*
///
void k_solid__portablemediaplayer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__PortableMediaPlayer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_solid__portablemediaplayer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__PortableMediaPlayer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__portablemediaplayer_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_solid__portablemediaplayer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__PortableMediaPlayer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__portablemediaplayer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__PortableMediaPlayer*
/// @param param1 QObject*
///
void k_solid__portablemediaplayer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__PortableMediaPlayer*
/// @param callback void func(Solid__PortableMediaPlayer* self, QObject* param1)
///
void k_solid__portablemediaplayer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__PortableMediaPlayer*
/// @param callback void func(Solid__PortableMediaPlayer* self, const char* objectName)
///
void k_solid__portablemediaplayer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__PortableMediaPlayer*
///
void k_solid__portablemediaplayer_delete(void* self);

#endif
