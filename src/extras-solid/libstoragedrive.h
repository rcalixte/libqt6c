#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBSTORAGEDRIVE_H
#define SRC_EXTRAS_SOLID_QT6C_LIBSTORAGEDRIVE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-storagedrive.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__StorageDrive*
const QMetaObject* k_solid__storagedrive_meta_object(void* self);

/// @param self Solid__StorageDrive*
/// @param param1 const char*
void* k_solid__storagedrive_metacast(void* self, const char* param1);

/// @param self Solid__StorageDrive*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_solid__storagedrive_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_solid__storagedrive_tr(const char* s);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#deviceInterfaceType)
///
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__storagedrive_device_interface_type();

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#bus)
///
/// @param self Solid__StorageDrive*
///
/// @return enum Solid__StorageDrive__Bus
int32_t k_solid__storagedrive_bus(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#driveType)
///
/// @param self Solid__StorageDrive*
///
/// @return enum Solid__StorageDrive__DriveType
int32_t k_solid__storagedrive_drive_type(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#isRemovable)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_removable(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#isHotpluggable)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_hotpluggable(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#size)
///
/// @param self Solid__StorageDrive*
uint64_t k_solid__storagedrive_size(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#isInUse)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_in_use(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#timeDetected)
///
/// @param self Solid__StorageDrive*
QDateTime* k_solid__storagedrive_time_detected(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagedrive.html#timeMediaDetected)
///
/// @param self Solid__StorageDrive*
QDateTime* k_solid__storagedrive_time_media_detected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_solid__storagedrive_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_solid__storagedrive_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__storagedrive_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__storagedrive_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__storagedrive_type_description(int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__StorageDrive*
/// @param event QEvent*
bool k_solid__storagedrive_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__StorageDrive*
/// @param watched QObject*
/// @param event QEvent*
bool k_solid__storagedrive_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageDrive*
const char* k_solid__storagedrive_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__StorageDrive*
/// @param name char*
void k_solid__storagedrive_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__StorageDrive*
bool k_solid__storagedrive_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__StorageDrive*
/// @param b bool
bool k_solid__storagedrive_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__StorageDrive*
QThread* k_solid__storagedrive_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageDrive*
/// @param thread QThread*
bool k_solid__storagedrive_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageDrive*
/// @param interval int
int32_t k_solid__storagedrive_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageDrive*
/// @param id int
void k_solid__storagedrive_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageDrive*
/// @param id enum Qt__TimerId
void k_solid__storagedrive_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__StorageDrive*
libqt_list /* of QObject* */ k_solid__storagedrive_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__StorageDrive*
/// @param parent QObject*
void k_solid__storagedrive_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__StorageDrive*
/// @param filterObj QObject*
void k_solid__storagedrive_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__StorageDrive*
/// @param obj QObject*
void k_solid__storagedrive_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_solid__storagedrive_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__StorageDrive*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_solid__storagedrive_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_solid__storagedrive_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_solid__storagedrive_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__StorageDrive*
void k_solid__storagedrive_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__StorageDrive*
void k_solid__storagedrive_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__StorageDrive*
/// @param name const char*
/// @param value QVariant*
bool k_solid__storagedrive_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__StorageDrive*
/// @param name const char*
QVariant* k_solid__storagedrive_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageDrive*
const char** k_solid__storagedrive_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageDrive*
QBindingStorage* k_solid__storagedrive_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageDrive*
const QBindingStorage* k_solid__storagedrive_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
void k_solid__storagedrive_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
/// @param callback void func(Solid__StorageDrive* self)
void k_solid__storagedrive_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__StorageDrive*
QObject* k_solid__storagedrive_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__StorageDrive*
/// @param classname const char*
bool k_solid__storagedrive_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__StorageDrive*
void k_solid__storagedrive_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageDrive*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_solid__storagedrive_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageDrive*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_solid__storagedrive_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__storagedrive_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__StorageDrive*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__storagedrive_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
/// @param param1 QObject*
void k_solid__storagedrive_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageDrive*
/// @param callback void func(Solid__StorageDrive* self, QObject* param1)
void k_solid__storagedrive_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__StorageDrive*
/// @param callback void func(Solid__StorageDrive* self, const char* objectName)
void k_solid__storagedrive_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__StorageDrive*
void k_solid__storagedrive_delete(void* self);

/// https://api.kde.org/solid-storagedrive.html#types

typedef enum {
    SOLID_STORAGEDRIVE_BUS_IDE = 0,
    SOLID_STORAGEDRIVE_BUS_USB = 1,
    SOLID_STORAGEDRIVE_BUS_IEEE1394 = 2,
    SOLID_STORAGEDRIVE_BUS_SCSI = 3,
    SOLID_STORAGEDRIVE_BUS_SATA = 4,
    SOLID_STORAGEDRIVE_BUS_PLATFORM = 5
} Solid__StorageDrive__Bus;

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
