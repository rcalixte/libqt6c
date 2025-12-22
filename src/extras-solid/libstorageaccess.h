#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBSTORAGEACCESS_H
#define SRC_EXTRAS_SOLID_QT6C_LIBSTORAGEACCESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__StorageAccess*
///
const QMetaObject* k_solid__storageaccess_meta_object(void* self);

/// @param self Solid__StorageAccess*
/// @param param1 const char*
///
void* k_solid__storageaccess_metacast(void* self, const char* param1);

/// @param self Solid__StorageAccess*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__storageaccess_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_solid__storageaccess_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__storageaccess_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#isAccessible)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_accessible(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__StorageAccess*
///
const char* k_solid__storageaccess_file_path(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#isIgnored)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_ignored(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#isEncrypted)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_encrypted(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#setup)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_setup(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardown)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_teardown(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#canCheck)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_can_check(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#check)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_check(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#canRepair)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_can_repair(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#repair)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_repair(void* self);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
///
/// @param self Solid__StorageAccess*
/// @param accessible bool
/// @param udi const char*
///
void k_solid__storageaccess_accessibility_changed(void* self, bool accessible, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#accessibilityChanged)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, bool accessible, const char* udi)
///
void k_solid__storageaccess_on_accessibility_changed(void* self, void (*callback)(void*, bool, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupDone)
///
/// @param self Solid__StorageAccess*
/// @param error enum Solid__ErrorType
/// @param errorData QVariant*
/// @param udi const char*
///
void k_solid__storageaccess_setup_done(void* self, int32_t error, void* errorData, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupDone)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, enum Solid__ErrorType error, QVariant* errorData, const char* udi)
///
void k_solid__storageaccess_on_setup_done(void* self, void (*callback)(void*, int32_t, void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownDone)
///
/// @param self Solid__StorageAccess*
/// @param error enum Solid__ErrorType
/// @param errorData QVariant*
/// @param udi const char*
///
void k_solid__storageaccess_teardown_done(void* self, int32_t error, void* errorData, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownDone)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, enum Solid__ErrorType error, QVariant* errorData, const char* udi)
///
void k_solid__storageaccess_on_teardown_done(void* self, void (*callback)(void*, int32_t, void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupRequested)
///
/// @param self Solid__StorageAccess*
/// @param udi const char*
///
void k_solid__storageaccess_setup_requested(void* self, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#setupRequested)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, const char* udi)
///
void k_solid__storageaccess_on_setup_requested(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownRequested)
///
/// @param self Solid__StorageAccess*
/// @param udi const char*
///
void k_solid__storageaccess_teardown_requested(void* self, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#teardownRequested)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, const char* udi)
///
void k_solid__storageaccess_on_teardown_requested(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkRequested)
///
/// @param self Solid__StorageAccess*
/// @param udi const char*
///
void k_solid__storageaccess_check_requested(void* self, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkRequested)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, const char* udi)
///
void k_solid__storageaccess_on_check_requested(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkDone)
///
/// @param self Solid__StorageAccess*
/// @param error enum Solid__ErrorType
/// @param errorData QVariant*
/// @param udi const char*
///
void k_solid__storageaccess_check_done(void* self, int32_t error, void* errorData, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#checkDone)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, enum Solid__ErrorType error, QVariant* errorData, const char* udi)
///
void k_solid__storageaccess_on_check_done(void* self, void (*callback)(void*, int32_t, void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairRequested)
///
/// @param self Solid__StorageAccess*
/// @param udi const char*
///
void k_solid__storageaccess_repair_requested(void* self, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairRequested)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, const char* udi)
///
void k_solid__storageaccess_on_repair_requested(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairDone)
///
/// @param self Solid__StorageAccess*
/// @param error enum Solid__ErrorType
/// @param errorData QVariant*
/// @param udi const char*
///
void k_solid__storageaccess_repair_done(void* self, int32_t error, void* errorData, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-storageaccess.html#repairDone)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, enum Solid__ErrorType error, QVariant* errorData, const char* udi)
///
void k_solid__storageaccess_on_repair_done(void* self, void (*callback)(void*, int32_t, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__storageaccess_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__storageaccess_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__storageaccess_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__storageaccess_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__storageaccess_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__StorageAccess*
/// @param event QEvent*
///
bool k_solid__storageaccess_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__StorageAccess*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__storageaccess_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__StorageAccess*
///
const char* k_solid__storageaccess_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__StorageAccess*
/// @param name char*
///
void k_solid__storageaccess_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__StorageAccess*
///
bool k_solid__storageaccess_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__StorageAccess*
/// @param b bool
///
bool k_solid__storageaccess_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__StorageAccess*
///
QThread* k_solid__storageaccess_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageAccess*
/// @param thread QThread*
///
bool k_solid__storageaccess_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageAccess*
/// @param interval int
///
int32_t k_solid__storageaccess_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageAccess*
/// @param id int
///
void k_solid__storageaccess_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageAccess*
/// @param id enum Qt__TimerId
///
void k_solid__storageaccess_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__StorageAccess*
///
libqt_list /* of QObject* */ k_solid__storageaccess_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__StorageAccess*
/// @param parent QObject*
///
void k_solid__storageaccess_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__StorageAccess*
/// @param filterObj QObject*
///
void k_solid__storageaccess_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__StorageAccess*
/// @param obj QObject*
///
void k_solid__storageaccess_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__storageaccess_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__StorageAccess*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__storageaccess_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__storageaccess_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__storageaccess_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__StorageAccess*
///
void k_solid__storageaccess_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__StorageAccess*
///
void k_solid__storageaccess_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__StorageAccess*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__storageaccess_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__StorageAccess*
/// @param name const char*
///
QVariant* k_solid__storageaccess_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Solid__StorageAccess*
///
const char** k_solid__storageaccess_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageAccess*
///
QBindingStorage* k_solid__storageaccess_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageAccess*
///
const QBindingStorage* k_solid__storageaccess_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageAccess*
///
void k_solid__storageaccess_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self)
///
void k_solid__storageaccess_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__StorageAccess*
///
QObject* k_solid__storageaccess_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__StorageAccess*
/// @param classname const char*
///
bool k_solid__storageaccess_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__StorageAccess*
///
void k_solid__storageaccess_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageAccess*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_solid__storageaccess_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageAccess*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__storageaccess_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_solid__storageaccess_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__StorageAccess*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__storageaccess_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageAccess*
/// @param param1 QObject*
///
void k_solid__storageaccess_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, QObject* param1)
///
void k_solid__storageaccess_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__StorageAccess*
/// @param callback void func(Solid__StorageAccess* self, const char* objectName)
///
void k_solid__storageaccess_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__StorageAccess*
///
void k_solid__storageaccess_delete(void* self);

#endif
