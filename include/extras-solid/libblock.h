#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBBLOCK_H
#define SRC_EXTRAS_SOLID_QT6C_LIBBLOCK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-block.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__Block*
///
const QMetaObject* k_solid__block_meta_object(void* self);

/// @param self Solid__Block*
/// @param param1 const char*
///
void* k_solid__block_metacast(void* self, const char* param1);

/// @param self Solid__Block*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__block_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_solid__block_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-block.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__block_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-block.html#deviceMajor)
///
/// @param self Solid__Block*
///
int32_t k_solid__block_device_major(void* self);

/// [Upstream resources](https://api.kde.org/solid-block.html#deviceMinor)
///
/// @param self Solid__Block*
///
int32_t k_solid__block_device_minor(void* self);

/// [Upstream resources](https://api.kde.org/solid-block.html#device)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Block*
///
const char* k_solid__block_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__block_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__block_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__Block*
///
bool k_solid__block_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__block_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__block_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__block_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__Block*
/// @param event QEvent*
///
bool k_solid__block_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__Block*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__block_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Block*
///
const char* k_solid__block_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__Block*
/// @param name char*
///
void k_solid__block_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__Block*
///
bool k_solid__block_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__Block*
///
bool k_solid__block_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__Block*
///
bool k_solid__block_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__Block*
///
bool k_solid__block_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__Block*
/// @param b bool
///
bool k_solid__block_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__Block*
///
QThread* k_solid__block_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__Block*
/// @param thread QThread*
///
bool k_solid__block_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__Block*
/// @param interval int
///
int32_t k_solid__block_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__Block*
/// @param id int
///
void k_solid__block_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__Block*
/// @param id enum Qt__TimerId
///
void k_solid__block_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__Block*
///
libqt_list /* of QObject* */ k_solid__block_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__Block*
/// @param parent QObject*
///
void k_solid__block_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__Block*
/// @param filterObj QObject*
///
void k_solid__block_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__Block*
/// @param obj QObject*
///
void k_solid__block_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__block_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__Block*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__block_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__block_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__block_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__Block*
///
void k_solid__block_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__Block*
///
void k_solid__block_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__Block*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__block_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__Block*
/// @param name const char*
///
QVariant* k_solid__block_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Solid__Block*
///
const char** k_solid__block_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__Block*
///
QBindingStorage* k_solid__block_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__Block*
///
const QBindingStorage* k_solid__block_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Block*
///
void k_solid__block_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Block*
/// @param callback void func(Solid__Block* self)
///
void k_solid__block_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__Block*
///
QObject* k_solid__block_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__Block*
/// @param classname const char*
///
bool k_solid__block_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__Block*
///
void k_solid__block_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__Block*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_solid__block_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__Block*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__block_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_solid__block_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__Block*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__block_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Block*
/// @param param1 QObject*
///
void k_solid__block_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__Block*
/// @param callback void func(Solid__Block* self, QObject* param1)
///
void k_solid__block_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__Block*
/// @param callback void func(Solid__Block* self, const char* objectName)
///
void k_solid__block_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__Block*
///
void k_solid__block_delete(void* self);

#endif
