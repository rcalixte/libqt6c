#pragma once
#ifndef SRC_EXTRAS_SOLIDQT6C_LIBSTORAGEVOLUME_H
#define SRC_EXTRAS_SOLIDQT6C_LIBSTORAGEVOLUME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-storagevolume.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__StorageVolume*
const QMetaObject* k_solid__storagevolume_meta_object(void* self);

/// @param self Solid__StorageVolume*
/// @param param1 const char*
void* k_solid__storagevolume_metacast(void* self, const char* param1);

/// @param self Solid__StorageVolume*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_solid__storagevolume_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_solid__storagevolume_tr(const char* s);

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#deviceInterfaceType)
///
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__storagevolume_device_interface_type();

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#isIgnored)
///
/// @param self Solid__StorageVolume*
bool k_solid__storagevolume_is_ignored(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#usage)
///
/// @param self Solid__StorageVolume*
///
/// @return enum Solid__StorageVolume__UsageType
int32_t k_solid__storagevolume_usage(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#fsType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageVolume*
const char* k_solid__storagevolume_fs_type(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageVolume*
const char* k_solid__storagevolume_label(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#uuid)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageVolume*
const char* k_solid__storagevolume_uuid(void* self);

/// [Qt documentation](https://api.kde.org/solid-storagevolume.html#size)
///
/// @param self Solid__StorageVolume*
uint64_t k_solid__storagevolume_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_solid__storagevolume_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_solid__storagevolume_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__StorageVolume*
bool k_solid__storagevolume_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param typeVal enum Solid__DeviceInterface__Type
const char* k_solid__storagevolume_type_to_string(int32_t typeVal);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param typeVal const char*
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__storagevolume_string_to_type(const char* typeVal);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param typeVal enum Solid__DeviceInterface__Type
const char* k_solid__storagevolume_type_description(int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__StorageVolume*
/// @param event QEvent*
bool k_solid__storagevolume_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__StorageVolume*
/// @param watched QObject*
/// @param event QEvent*
bool k_solid__storagevolume_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageVolume*
const char* k_solid__storagevolume_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__StorageVolume*
/// @param name char*
void k_solid__storagevolume_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__StorageVolume*
bool k_solid__storagevolume_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__StorageVolume*
bool k_solid__storagevolume_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__StorageVolume*
bool k_solid__storagevolume_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__StorageVolume*
bool k_solid__storagevolume_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__StorageVolume*
/// @param b bool
bool k_solid__storagevolume_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__StorageVolume*
QThread* k_solid__storagevolume_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageVolume*
/// @param thread QThread*
bool k_solid__storagevolume_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageVolume*
/// @param interval int
int32_t k_solid__storagevolume_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageVolume*
/// @param id int
void k_solid__storagevolume_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__StorageVolume*
/// @param id enum Qt__TimerId
void k_solid__storagevolume_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__StorageVolume*
libqt_list /* of QObject* */ k_solid__storagevolume_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__StorageVolume*
/// @param parent QObject*
void k_solid__storagevolume_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__StorageVolume*
/// @param filterObj QObject*
void k_solid__storagevolume_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__StorageVolume*
/// @param obj QObject*
void k_solid__storagevolume_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_solid__storagevolume_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__StorageVolume*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_solid__storagevolume_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_solid__storagevolume_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_solid__storagevolume_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__StorageVolume*
void k_solid__storagevolume_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__StorageVolume*
void k_solid__storagevolume_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__StorageVolume*
/// @param name const char*
/// @param value QVariant*
bool k_solid__storagevolume_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__StorageVolume*
/// @param name const char*
QVariant* k_solid__storagevolume_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__StorageVolume*
const char** k_solid__storagevolume_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageVolume*
QBindingStorage* k_solid__storagevolume_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__StorageVolume*
const QBindingStorage* k_solid__storagevolume_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageVolume*
void k_solid__storagevolume_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageVolume*
/// @param callback void func(Solid__StorageVolume* self)
void k_solid__storagevolume_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__StorageVolume*
QObject* k_solid__storagevolume_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__StorageVolume*
/// @param classname const char*
bool k_solid__storagevolume_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__StorageVolume*
void k_solid__storagevolume_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__StorageVolume*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_solid__storagevolume_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__StorageVolume*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_solid__storagevolume_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_solid__storagevolume_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__StorageVolume*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_solid__storagevolume_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageVolume*
/// @param param1 QObject*
void k_solid__storagevolume_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__StorageVolume*
/// @param callback void func(Solid__StorageVolume* self, QObject* param1)
void k_solid__storagevolume_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__StorageVolume*
/// @param callback void func(Solid__StorageVolume* self, const char* objectName)
void k_solid__storagevolume_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__StorageVolume*
void k_solid__storagevolume_delete(void* self);

/// https://api.kde.org/solid-storagevolume.html#types

typedef enum {
    SOLID_STORAGEVOLUME_USAGETYPE_OTHER = 0,
    SOLID_STORAGEVOLUME_USAGETYPE_UNUSED = 1,
    SOLID_STORAGEVOLUME_USAGETYPE_FILESYSTEM = 2,
    SOLID_STORAGEVOLUME_USAGETYPE_PARTITIONTABLE = 3,
    SOLID_STORAGEVOLUME_USAGETYPE_RAID = 4,
    SOLID_STORAGEVOLUME_USAGETYPE_ENCRYPTED = 5
} Solid__StorageVolume__UsageType;

#endif
