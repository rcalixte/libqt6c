#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBOPTICALDISC_H
#define SRC_EXTRAS_SOLID_QT6C_LIBOPTICALDISC_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-opticaldisc.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__OpticalDisc*
const QMetaObject* k_solid__opticaldisc_meta_object(void* self);

/// @param self Solid__OpticalDisc*
/// @param param1 const char*
void* k_solid__opticaldisc_metacast(void* self, const char* param1);

/// @param self Solid__OpticalDisc*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_solid__opticaldisc_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_solid__opticaldisc_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#deviceInterfaceType)
///
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__opticaldisc_device_interface_type();

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#availableContent)
///
/// @param self Solid__OpticalDisc*
///
/// @return flag of enum Solid__OpticalDisc__ContentType
int32_t k_solid__opticaldisc_available_content(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#discType)
///
/// @param self Solid__OpticalDisc*
///
/// @return enum Solid__OpticalDisc__DiscType
int32_t k_solid__opticaldisc_disc_type(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#isAppendable)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_appendable(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#isBlank)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_blank(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#isRewritable)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_rewritable(void* self);

/// [Upstream resources](https://api.kde.org/solid-opticaldisc.html#capacity)
///
/// @param self Solid__OpticalDisc*
uint64_t k_solid__opticaldisc_capacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_solid__opticaldisc_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_solid__opticaldisc_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::StorageVolume
///
/// [Upstream resources](https://api.kde.org/solid-storagevolume.html#isIgnored)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_ignored(void* self);

/// Inherited from Solid::StorageVolume
///
/// [Upstream resources](https://api.kde.org/solid-storagevolume.html#usage)
///
/// @param self Solid__OpticalDisc*
///
/// @return enum Solid__StorageVolume__UsageType
int32_t k_solid__opticaldisc_usage(void* self);

/// Inherited from Solid::StorageVolume
///
/// [Upstream resources](https://api.kde.org/solid-storagevolume.html#fsType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__OpticalDisc*
const char* k_solid__opticaldisc_fs_type(void* self);

/// Inherited from Solid::StorageVolume
///
/// [Upstream resources](https://api.kde.org/solid-storagevolume.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__OpticalDisc*
const char* k_solid__opticaldisc_label(void* self);

/// Inherited from Solid::StorageVolume
///
/// [Upstream resources](https://api.kde.org/solid-storagevolume.html#uuid)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__OpticalDisc*
const char* k_solid__opticaldisc_uuid(void* self);

/// Inherited from Solid::StorageVolume
///
/// [Upstream resources](https://api.kde.org/solid-storagevolume.html#size)
///
/// @param self Solid__OpticalDisc*
uint64_t k_solid__opticaldisc_size(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__opticaldisc_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__opticaldisc_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__opticaldisc_type_description(int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__OpticalDisc*
/// @param event QEvent*
bool k_solid__opticaldisc_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__OpticalDisc*
/// @param watched QObject*
/// @param event QEvent*
bool k_solid__opticaldisc_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__OpticalDisc*
const char* k_solid__opticaldisc_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__OpticalDisc*
/// @param name char*
void k_solid__opticaldisc_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__OpticalDisc*
bool k_solid__opticaldisc_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__OpticalDisc*
/// @param b bool
bool k_solid__opticaldisc_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__OpticalDisc*
QThread* k_solid__opticaldisc_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__OpticalDisc*
/// @param thread QThread*
bool k_solid__opticaldisc_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__OpticalDisc*
/// @param interval int
int32_t k_solid__opticaldisc_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__OpticalDisc*
/// @param id int
void k_solid__opticaldisc_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__OpticalDisc*
/// @param id enum Qt__TimerId
void k_solid__opticaldisc_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__OpticalDisc*
libqt_list /* of QObject* */ k_solid__opticaldisc_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__OpticalDisc*
/// @param parent QObject*
void k_solid__opticaldisc_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__OpticalDisc*
/// @param filterObj QObject*
void k_solid__opticaldisc_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__OpticalDisc*
/// @param obj QObject*
void k_solid__opticaldisc_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_solid__opticaldisc_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__OpticalDisc*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_solid__opticaldisc_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_solid__opticaldisc_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_solid__opticaldisc_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__OpticalDisc*
void k_solid__opticaldisc_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__OpticalDisc*
void k_solid__opticaldisc_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__OpticalDisc*
/// @param name const char*
/// @param value QVariant*
bool k_solid__opticaldisc_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__OpticalDisc*
/// @param name const char*
QVariant* k_solid__opticaldisc_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__OpticalDisc*
const char** k_solid__opticaldisc_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__OpticalDisc*
QBindingStorage* k_solid__opticaldisc_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__OpticalDisc*
const QBindingStorage* k_solid__opticaldisc_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDisc*
void k_solid__opticaldisc_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDisc*
/// @param callback void func(Solid__OpticalDisc* self)
void k_solid__opticaldisc_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__OpticalDisc*
QObject* k_solid__opticaldisc_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__OpticalDisc*
/// @param classname const char*
bool k_solid__opticaldisc_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__OpticalDisc*
void k_solid__opticaldisc_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__OpticalDisc*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_solid__opticaldisc_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__OpticalDisc*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_solid__opticaldisc_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__opticaldisc_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__OpticalDisc*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__opticaldisc_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDisc*
/// @param param1 QObject*
void k_solid__opticaldisc_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__OpticalDisc*
/// @param callback void func(Solid__OpticalDisc* self, QObject* param1)
void k_solid__opticaldisc_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__OpticalDisc*
/// @param callback void func(Solid__OpticalDisc* self, const char* objectName)
void k_solid__opticaldisc_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__OpticalDisc*
void k_solid__opticaldisc_delete(void* self);

/// https://api.kde.org/solid-opticaldisc.html#types

typedef enum {
    SOLID_OPTICALDISC_CONTENTTYPE_NOCONTENT = 0,
    SOLID_OPTICALDISC_CONTENTTYPE_AUDIO = 1,
    SOLID_OPTICALDISC_CONTENTTYPE_DATA = 2,
    SOLID_OPTICALDISC_CONTENTTYPE_VIDEOCD = 4,
    SOLID_OPTICALDISC_CONTENTTYPE_SUPERVIDEOCD = 8,
    SOLID_OPTICALDISC_CONTENTTYPE_VIDEODVD = 16,
    SOLID_OPTICALDISC_CONTENTTYPE_VIDEOBLURAY = 32
} Solid__OpticalDisc__ContentType;

typedef enum {
    SOLID_OPTICALDISC_DISCTYPE_UNKNOWNDISCTYPE = -1,
    SOLID_OPTICALDISC_DISCTYPE_CDROM = 0,
    SOLID_OPTICALDISC_DISCTYPE_CDRECORDABLE = 1,
    SOLID_OPTICALDISC_DISCTYPE_CDREWRITABLE = 2,
    SOLID_OPTICALDISC_DISCTYPE_DVDROM = 3,
    SOLID_OPTICALDISC_DISCTYPE_DVDRAM = 4,
    SOLID_OPTICALDISC_DISCTYPE_DVDRECORDABLE = 5,
    SOLID_OPTICALDISC_DISCTYPE_DVDREWRITABLE = 6,
    SOLID_OPTICALDISC_DISCTYPE_DVDPLUSRECORDABLE = 7,
    SOLID_OPTICALDISC_DISCTYPE_DVDPLUSREWRITABLE = 8,
    SOLID_OPTICALDISC_DISCTYPE_DVDPLUSRECORDABLEDUALLAYER = 9,
    SOLID_OPTICALDISC_DISCTYPE_DVDPLUSREWRITABLEDUALLAYER = 10,
    SOLID_OPTICALDISC_DISCTYPE_BLURAYROM = 11,
    SOLID_OPTICALDISC_DISCTYPE_BLURAYRECORDABLE = 12,
    SOLID_OPTICALDISC_DISCTYPE_BLURAYREWRITABLE = 13,
    SOLID_OPTICALDISC_DISCTYPE_HDDVDROM = 14,
    SOLID_OPTICALDISC_DISCTYPE_HDDVDRECORDABLE = 15,
    SOLID_OPTICALDISC_DISCTYPE_HDDVDREWRITABLE = 16
} Solid__OpticalDisc__DiscType;

#endif
