#pragma once
#ifndef EXTRAS_SOLID_LIBSTORAGEDRIVE_H
#define EXTRAS_SOLID_LIBSTORAGEDRIVE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Solid__StorageDrive*
///
const QMetaObject* k_solid__storagedrive_meta_object(const void* self);

/// @param self Solid__StorageDrive*
/// @param param1 const char*
///
void* k_solid__storagedrive_metacast(void* self, const char* param1);

/// @param self Solid__StorageDrive*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__storagedrive_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_solid__storagedrive_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__storagedrive_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#bus)
///
/// @param self const Solid__StorageDrive*
///
/// @return enum Solid__StorageDrive__Bus
///
int32_t k_solid__storagedrive_bus(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#driveType)
///
/// @param self const Solid__StorageDrive*
///
/// @return enum Solid__StorageDrive__DriveType
///
int32_t k_solid__storagedrive_drive_type(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#isRemovable)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_removable(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#isHotpluggable)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_hotpluggable(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#size)
///
/// @param self const Solid__StorageDrive*
///
uintptr_t k_solid__storagedrive_size(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#isInUse)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_in_use(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeDetected)
///
/// @param self const Solid__StorageDrive*
///
QDateTime* k_solid__storagedrive_time_detected(const void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeMediaDetected)
///
/// @param self const Solid__StorageDrive*
///
QDateTime* k_solid__storagedrive_time_media_detected(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__storagedrive_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__storagedrive_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_valid(const void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__storagedrive_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__storagedrive_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__storagedrive_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__StorageDrive*
/// @param event QEvent*
///
bool k_solid__storagedrive_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__StorageDrive*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__storagedrive_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Solid__StorageDrive*
///
const char* k_solid__storagedrive_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__StorageDrive*
/// @param name const char*
///
void k_solid__storagedrive_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__StorageDrive*
/// @param b bool
///
bool k_solid__storagedrive_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Solid__StorageDrive*
///
QThread* k_solid__storagedrive_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageDrive*
/// @param thread QThread*
///
bool k_solid__storagedrive_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageDrive*
/// @param interval int
///
int32_t k_solid__storagedrive_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageDrive*
/// @param time int64_t of nanoseconds
///
int32_t k_solid__storagedrive_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageDrive*
/// @param id int
///
void k_solid__storagedrive_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageDrive*
/// @param id enum Qt__TimerId
///
void k_solid__storagedrive_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Solid__StorageDrive*
///
/// @return libqt_list of QObject*
///
libqt_list k_solid__storagedrive_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__StorageDrive*
/// @param parent QObject*
///
void k_solid__storagedrive_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__StorageDrive*
/// @param filterObj QObject*
///
void k_solid__storagedrive_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__StorageDrive*
/// @param obj QObject*
///
void k_solid__storagedrive_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_solid__storagedrive_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__storagedrive_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Solid__StorageDrive*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__storagedrive_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__storagedrive_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__storagedrive_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__StorageDrive*
///
bool k_solid__storagedrive_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__StorageDrive*
/// @param receiver QObject*
///
bool k_solid__storagedrive_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__storagedrive_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Solid__StorageDrive*
///
void k_solid__storagedrive_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Solid__StorageDrive*
///
void k_solid__storagedrive_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__StorageDrive*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__storagedrive_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Solid__StorageDrive*
/// @param name const char*
///
QVariant* k_solid__storagedrive_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Solid__StorageDrive*
///
const char** k_solid__storagedrive_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageDrive*
///
QBindingStorage* k_solid__storagedrive_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Solid__StorageDrive*
///
const QBindingStorage* k_solid__storagedrive_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
///
void k_solid__storagedrive_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
/// @param callback void func(Solid__StorageDrive* self)
///
void k_solid__storagedrive_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Solid__StorageDrive*
///
QObject* k_solid__storagedrive_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Solid__StorageDrive*
/// @param classname const char*
///
bool k_solid__storagedrive_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__StorageDrive*
///
void k_solid__storagedrive_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageDrive*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__storagedrive_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageDrive*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__storagedrive_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_solid__storagedrive_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_solid__storagedrive_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Solid__StorageDrive*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__storagedrive_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__StorageDrive*
/// @param signal const char*
///
bool k_solid__storagedrive_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__StorageDrive*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_solid__storagedrive_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__StorageDrive*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__storagedrive_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Solid__StorageDrive*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__storagedrive_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
/// @param param1 QObject*
///
void k_solid__storagedrive_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
/// @param callback void func(Solid__StorageDrive* self, QObject* param1)
///
void k_solid__storagedrive_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__StorageDrive*
/// @param callback void func(Solid__StorageDrive* self, const char* objectName)
///
void k_solid__storagedrive_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__StorageDrive*
///
void k_solid__storagedrive_delete(void* self);

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#public-types)

typedef enum {
    SOLID_STORAGEDRIVE_BUS_IDE = 0,
    SOLID_STORAGEDRIVE_BUS_USB = 1,
    SOLID_STORAGEDRIVE_BUS_IEEE1394 = 2,
    SOLID_STORAGEDRIVE_BUS_SCSI = 3,
    SOLID_STORAGEDRIVE_BUS_SATA = 4,
    SOLID_STORAGEDRIVE_BUS_PLATFORM = 5
} Solid__StorageDrive__Bus;

/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#public-types)

typedef enum {
    SOLID_STORAGEDRIVE_DRIVETYPE_HARDDISK = 0,
    SOLID_STORAGEDRIVE_DRIVETYPE_CDROMDRIVE = 1,
    SOLID_STORAGEDRIVE_DRIVETYPE_FLOPPY = 2,
    SOLID_STORAGEDRIVE_DRIVETYPE_TAPE = 3,
    SOLID_STORAGEDRIVE_DRIVETYPE_COMPACTFLASH = 4,
    SOLID_STORAGEDRIVE_DRIVETYPE_MEMORYSTICK = 5,
    SOLID_STORAGEDRIVE_DRIVETYPE_SMARTMEDIA = 6,
    SOLID_STORAGEDRIVE_DRIVETYPE_SDMMC = 7,
    SOLID_STORAGEDRIVE_DRIVETYPE_XD = 8
} Solid__StorageDrive__DriveType;

#endif
