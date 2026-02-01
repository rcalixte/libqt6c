#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBOPTICALDRIVE_H
#define SRC_EXTRAS_SOLID_QT6C_LIBOPTICALDRIVE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__OpticalDrive*
///
const QMetaObject* k_solid__opticaldrive_meta_object(void* self);

/// @param self Solid__OpticalDrive*
/// @param param1 const char*
///
void* k_solid__opticaldrive_metacast(void* self, const char* param1);

/// @param self Solid__OpticalDrive*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__opticaldrive_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_solid__opticaldrive_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#deviceInterfaceType)
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__opticaldrive_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#supportedMedia)
///
/// @param self Solid__OpticalDrive*
///
/// @return flag of enum Solid__OpticalDrive__MediumType
///
int32_t k_solid__opticaldrive_supported_media(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#readSpeed)
///
/// @param self Solid__OpticalDrive*
///
int32_t k_solid__opticaldrive_read_speed(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#writeSpeed)
///
/// @param self Solid__OpticalDrive*
///
int32_t k_solid__opticaldrive_write_speed(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#writeSpeeds)
///
/// @param self Solid__OpticalDrive*
///
/// @return libqt_list of int
///
libqt_list k_solid__opticaldrive_write_speeds(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#eject)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_eject(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectPressed)
///
/// @param self Solid__OpticalDrive*
/// @param udi const char*
///
void k_solid__opticaldrive_eject_pressed(void* self, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectPressed)
///
/// @param self Solid__OpticalDrive*
/// @param callback void func(Solid__OpticalDrive* self, const char* udi)
///
void k_solid__opticaldrive_on_eject_pressed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectDone)
///
/// @param self Solid__OpticalDrive*
/// @param error enum Solid__ErrorType
/// @param errorData QVariant*
/// @param udi const char*
///
void k_solid__opticaldrive_eject_done(void* self, int32_t error, void* errorData, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectDone)
///
/// @param self Solid__OpticalDrive*
/// @param callback void func(Solid__OpticalDrive* self, enum Solid__ErrorType error, QVariant* errorData, const char* udi)
///
void k_solid__opticaldrive_on_eject_done(void* self, void (*callback)(void*, int32_t, void*, const char*));

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectRequested)
///
/// @param self Solid__OpticalDrive*
/// @param udi const char*
///
void k_solid__opticaldrive_eject_requested(void* self, const char* udi);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#ejectRequested)
///
/// @param self Solid__OpticalDrive*
/// @param callback void func(Solid__OpticalDrive* self, const char* udi)
///
void k_solid__opticaldrive_on_eject_requested(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__opticaldrive_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__opticaldrive_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#bus)
///
/// @param self Solid__OpticalDrive*
///
/// @return enum Solid__StorageDrive__Bus
///
int32_t k_solid__opticaldrive_bus(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#driveType)
///
/// @param self Solid__OpticalDrive*
///
/// @return enum Solid__StorageDrive__DriveType
///
int32_t k_solid__opticaldrive_drive_type(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#isRemovable)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_removable(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#isHotpluggable)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_hotpluggable(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#size)
///
/// @param self Solid__OpticalDrive*
///
uint64_t k_solid__opticaldrive_size(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#isInUse)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_in_use(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeDetected)
///
/// @param self Solid__OpticalDrive*
///
QDateTime* k_solid__opticaldrive_time_detected(void* self);

/// Inherited from Solid::StorageDrive
///
/// [Upstream resources](https://api.kde.org/solid-storagedrive.html#timeMediaDetected)
///
/// @param self Solid__OpticalDrive*
///
QDateTime* k_solid__opticaldrive_time_media_detected(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__opticaldrive_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__opticaldrive_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__opticaldrive_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__OpticalDrive*
/// @param event QEvent*
///
bool k_solid__opticaldrive_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__OpticalDrive*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__opticaldrive_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__OpticalDrive*
///
const char* k_solid__opticaldrive_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__OpticalDrive*
/// @param name char*
///
void k_solid__opticaldrive_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__OpticalDrive*
/// @param b bool
///
bool k_solid__opticaldrive_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__OpticalDrive*
///
QThread* k_solid__opticaldrive_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__OpticalDrive*
/// @param thread QThread*
///
bool k_solid__opticaldrive_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__OpticalDrive*
/// @param interval int
///
int32_t k_solid__opticaldrive_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__OpticalDrive*
/// @param time int64_t of nanoseconds
///
int32_t k_solid__opticaldrive_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__OpticalDrive*
/// @param id int
///
void k_solid__opticaldrive_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__OpticalDrive*
/// @param id enum Qt__TimerId
///
void k_solid__opticaldrive_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__OpticalDrive*
///
/// @return libqt_list of QObject*
///
libqt_list k_solid__opticaldrive_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__OpticalDrive*
/// @param parent QObject*
///
void k_solid__opticaldrive_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__OpticalDrive*
/// @param filterObj QObject*
///
void k_solid__opticaldrive_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__OpticalDrive*
/// @param obj QObject*
///
void k_solid__opticaldrive_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_solid__opticaldrive_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__opticaldrive_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__OpticalDrive*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__opticaldrive_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__opticaldrive_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__opticaldrive_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Solid__OpticalDrive*
///
bool k_solid__opticaldrive_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Solid__OpticalDrive*
/// @param receiver QObject*
///
bool k_solid__opticaldrive_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__opticaldrive_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__OpticalDrive*
///
void k_solid__opticaldrive_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__OpticalDrive*
///
void k_solid__opticaldrive_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__OpticalDrive*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__opticaldrive_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__OpticalDrive*
/// @param name const char*
///
QVariant* k_solid__opticaldrive_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Solid__OpticalDrive*
///
const char** k_solid__opticaldrive_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__OpticalDrive*
///
QBindingStorage* k_solid__opticaldrive_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__OpticalDrive*
///
const QBindingStorage* k_solid__opticaldrive_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDrive*
///
void k_solid__opticaldrive_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDrive*
/// @param callback void func(Solid__OpticalDrive* self)
///
void k_solid__opticaldrive_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__OpticalDrive*
///
QObject* k_solid__opticaldrive_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__OpticalDrive*
/// @param classname const char*
///
bool k_solid__opticaldrive_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__OpticalDrive*
///
void k_solid__opticaldrive_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__OpticalDrive*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__opticaldrive_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__OpticalDrive*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__opticaldrive_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_solid__opticaldrive_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_solid__opticaldrive_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__OpticalDrive*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__opticaldrive_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Solid__OpticalDrive*
/// @param signal const char*
///
bool k_solid__opticaldrive_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Solid__OpticalDrive*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_solid__opticaldrive_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Solid__OpticalDrive*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__opticaldrive_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Solid__OpticalDrive*
/// @param receiver QObject*
/// @param member const char*
///
bool k_solid__opticaldrive_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDrive*
/// @param param1 QObject*
///
void k_solid__opticaldrive_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDrive*
/// @param callback void func(Solid__OpticalDrive* self, QObject* param1)
///
void k_solid__opticaldrive_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__OpticalDrive*
/// @param callback void func(Solid__OpticalDrive* self, const char* objectName)
///
void k_solid__opticaldrive_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__OpticalDrive*
///
void k_solid__opticaldrive_delete(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldrive.html#public-types)

typedef enum {
    SOLID_OPTICALDRIVE_MEDIUMTYPE_UNKNOWNMEDIUMTYPE = 0,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_CDR = 1,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_CDRW = 2,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVD = 4,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDR = 8,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDRW = 16,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDRAM = 32,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDPLUSR = 64,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDPLUSRW = 128,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDPLUSDL = 256,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_DVDPLUSDLRW = 512,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_BD = 1024,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_BDR = 2048,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_BDRE = 4096,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_HDDVD = 8192,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_HDDVDR = 16384,
    SOLID_OPTICALDRIVE_MEDIUMTYPE_HDDVDRW = 32768
} Solid__OpticalDrive__MediumType;

#endif
