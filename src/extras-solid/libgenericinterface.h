#pragma once
#ifndef EXTRAS_SOLID_LIBGENERICINTERFACE_H
#define EXTRAS_SOLID_LIBGENERICINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Solid__GenericInterface*
///
const QMetaObject* k_solid__genericinterface_meta_object(const void* self);

/// @param self Solid__GenericInterface*
/// @param param1 const char*
///
void* k_solid__genericinterface_metacast(void* self, const char* param1);

/// @param self Solid__GenericInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__genericinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_solid__genericinterface_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__genericinterface_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#property)
///
/// @param self const Solid__GenericInterface*
/// @param key const char*
///
QVariant* k_solid__genericinterface_property(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#allProperties)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const Solid__GenericInterface*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map k_solid__genericinterface_all_properties(const void* self);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#propertyExists)
///
/// @param self const Solid__GenericInterface*
/// @param key const char*
///
bool k_solid__genericinterface_property_exists(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#propertyChanged)
///
/// @param self Solid__GenericInterface*
/// @param changes libqt_map of const char* to int
///
void k_solid__genericinterface_property_changed(void* self, libqt_map changes);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#propertyChanged)
///
/// @param self Solid__GenericInterface*
/// @param callback void func(Solid__GenericInterface* self, libqt_map of const char* to int changes)
///
void k_solid__genericinterface_on_property_changed(void* self, void (*callback)(void*, libqt_map));

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#conditionRaised)
///
/// @param self Solid__GenericInterface*
/// @param condition const char*
/// @param reason const char*
///
void k_solid__genericinterface_condition_raised(void* self, const char* condition, const char* reason);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#conditionRaised)
///
/// @param self Solid__GenericInterface*
/// @param callback void func(Solid__GenericInterface* self, const char* condition, const char* reason)
///
void k_solid__genericinterface_on_condition_raised(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__genericinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__genericinterface_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self const Solid__GenericInterface*
///
bool k_solid__genericinterface_is_valid(const void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__genericinterface_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__genericinterface_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__genericinterface_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__GenericInterface*
/// @param event QEvent*
///
bool k_solid__genericinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__GenericInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__genericinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Solid__GenericInterface*
///
const char* k_solid__genericinterface_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__GenericInterface*
/// @param name const char*
///
void k_solid__genericinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Solid__GenericInterface*
///
bool k_solid__genericinterface_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Solid__GenericInterface*
///
bool k_solid__genericinterface_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Solid__GenericInterface*
///
bool k_solid__genericinterface_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Solid__GenericInterface*
///
bool k_solid__genericinterface_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__GenericInterface*
/// @param b bool
///
bool k_solid__genericinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Solid__GenericInterface*
///
QThread* k_solid__genericinterface_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__GenericInterface*
/// @param thread QThread*
///
bool k_solid__genericinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__GenericInterface*
/// @param interval int
///
int32_t k_solid__genericinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__GenericInterface*
/// @param time int64_t of nanoseconds
///
int32_t k_solid__genericinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__GenericInterface*
/// @param id int
///
void k_solid__genericinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__GenericInterface*
/// @param id enum Qt__TimerId
///
void k_solid__genericinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Solid__GenericInterface*
///
/// @return libqt_list of QObject*
///
libqt_list k_solid__genericinterface_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__GenericInterface*
/// @param parent QObject*
///
void k_solid__genericinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__GenericInterface*
/// @param filterObj QObject*
///
void k_solid__genericinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__GenericInterface*
/// @param obj QObject*
///
void k_solid__genericinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_solid__genericinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__genericinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Solid__GenericInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__genericinterface_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__genericinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__genericinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__GenericInterface*
///
bool k_solid__genericinterface_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__GenericInterface*
/// @param receiver QObject*
///
bool k_solid__genericinterface_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__genericinterface_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Solid__GenericInterface*
///
void k_solid__genericinterface_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Solid__GenericInterface*
///
void k_solid__genericinterface_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__GenericInterface*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__genericinterface_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Solid__GenericInterface*
///
const char** k_solid__genericinterface_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__GenericInterface*
///
QBindingStorage* k_solid__genericinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Solid__GenericInterface*
///
const QBindingStorage* k_solid__genericinterface_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__GenericInterface*
///
void k_solid__genericinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__GenericInterface*
/// @param callback void func(Solid__GenericInterface* self)
///
void k_solid__genericinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Solid__GenericInterface*
///
QObject* k_solid__genericinterface_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Solid__GenericInterface*
/// @param classname const char*
///
bool k_solid__genericinterface_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__GenericInterface*
///
void k_solid__genericinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__GenericInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__genericinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__GenericInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__genericinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_solid__genericinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_solid__genericinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Solid__GenericInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__genericinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__GenericInterface*
/// @param signal const char*
///
bool k_solid__genericinterface_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__GenericInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_solid__genericinterface_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__GenericInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__genericinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__GenericInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__genericinterface_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__GenericInterface*
/// @param param1 QObject*
///
void k_solid__genericinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__GenericInterface*
/// @param callback void func(Solid__GenericInterface* self, QObject* param1)
///
void k_solid__genericinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__GenericInterface*
/// @param callback void func(Solid__GenericInterface* self, const char* objectName)
///
void k_solid__genericinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__GenericInterface*
///
void k_solid__genericinterface_delete(void* self);

/// [Upstream resources](https://api.kde.org/solid-genericinterface.html#public-types)

typedef enum {
    SOLID_GENERICINTERFACE_PROPERTYCHANGE_PROPERTYMODIFIED = 0,
    SOLID_GENERICINTERFACE_PROPERTYCHANGE_PROPERTYADDED = 1,
    SOLID_GENERICINTERFACE_PROPERTYCHANGE_PROPERTYREMOVED = 2
} Solid__GenericInterface__PropertyChange;

#endif
