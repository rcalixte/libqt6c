#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBDEVICEINTERFACE_H
#define SRC_EXTRAS_SOLID_QT6C_LIBDEVICEINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__DeviceInterface*
///
const QMetaObject* k_solid__deviceinterface_meta_object(void* self);

/// @param self Solid__DeviceInterface*
/// @param param1 const char*
///
void* k_solid__deviceinterface_metacast(void* self, const char* param1);

/// @param self Solid__DeviceInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_solid__deviceinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_solid__deviceinterface_tr(const char* s);

/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__DeviceInterface*
///
bool k_solid__deviceinterface_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__deviceinterface_type_to_string(int32_t type);

/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
///
int32_t k_solid__deviceinterface_string_to_type(const char* type);

/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param type enum Solid__DeviceInterface__Type
///
const char* k_solid__deviceinterface_type_description(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_solid__deviceinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_solid__deviceinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__DeviceInterface*
/// @param event QEvent*
///
bool k_solid__deviceinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__DeviceInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_solid__deviceinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__DeviceInterface*
///
const char* k_solid__deviceinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__DeviceInterface*
/// @param name char*
///
void k_solid__deviceinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__DeviceInterface*
///
bool k_solid__deviceinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__DeviceInterface*
///
bool k_solid__deviceinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__DeviceInterface*
///
bool k_solid__deviceinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__DeviceInterface*
///
bool k_solid__deviceinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__DeviceInterface*
/// @param b bool
///
bool k_solid__deviceinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__DeviceInterface*
///
QThread* k_solid__deviceinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__DeviceInterface*
/// @param thread QThread*
///
bool k_solid__deviceinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__DeviceInterface*
/// @param interval int
///
int32_t k_solid__deviceinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__DeviceInterface*
/// @param id int
///
void k_solid__deviceinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__DeviceInterface*
/// @param id enum Qt__TimerId
///
void k_solid__deviceinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__DeviceInterface*
///
libqt_list /* of QObject* */ k_solid__deviceinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__DeviceInterface*
/// @param parent QObject*
///
void k_solid__deviceinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__DeviceInterface*
/// @param filterObj QObject*
///
void k_solid__deviceinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__DeviceInterface*
/// @param obj QObject*
///
void k_solid__deviceinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_solid__deviceinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__DeviceInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_solid__deviceinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_solid__deviceinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_solid__deviceinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__DeviceInterface*
///
void k_solid__deviceinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__DeviceInterface*
///
void k_solid__deviceinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__DeviceInterface*
/// @param name const char*
/// @param value QVariant*
///
bool k_solid__deviceinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__DeviceInterface*
/// @param name const char*
///
QVariant* k_solid__deviceinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Solid__DeviceInterface*
///
const char** k_solid__deviceinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__DeviceInterface*
///
QBindingStorage* k_solid__deviceinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__DeviceInterface*
///
const QBindingStorage* k_solid__deviceinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__DeviceInterface*
///
void k_solid__deviceinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__DeviceInterface*
/// @param callback void func(Solid__DeviceInterface* self)
///
void k_solid__deviceinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__DeviceInterface*
///
QObject* k_solid__deviceinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__DeviceInterface*
/// @param classname const char*
///
bool k_solid__deviceinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__DeviceInterface*
///
void k_solid__deviceinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__DeviceInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_solid__deviceinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__DeviceInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_solid__deviceinterface_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_solid__deviceinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__DeviceInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_solid__deviceinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__DeviceInterface*
/// @param param1 QObject*
///
void k_solid__deviceinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__DeviceInterface*
/// @param callback void func(Solid__DeviceInterface* self, QObject* param1)
///
void k_solid__deviceinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__DeviceInterface*
/// @param callback void func(Solid__DeviceInterface* self, const char* objectName)
///
void k_solid__deviceinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__DeviceInterface*
///
void k_solid__deviceinterface_delete(void* self);

/// [Upstream resources](https://api.kde.org/solid-deviceinterface.html#public-types)

typedef enum {
    SOLID_DEVICEINTERFACE_TYPE_UNKNOWN = 0,
    SOLID_DEVICEINTERFACE_TYPE_GENERICINTERFACE = 1,
    SOLID_DEVICEINTERFACE_TYPE_PROCESSOR = 2,
    SOLID_DEVICEINTERFACE_TYPE_BLOCK = 3,
    SOLID_DEVICEINTERFACE_TYPE_STORAGEACCESS = 4,
    SOLID_DEVICEINTERFACE_TYPE_STORAGEDRIVE = 5,
    SOLID_DEVICEINTERFACE_TYPE_OPTICALDRIVE = 6,
    SOLID_DEVICEINTERFACE_TYPE_STORAGEVOLUME = 7,
    SOLID_DEVICEINTERFACE_TYPE_OPTICALDISC = 8,
    SOLID_DEVICEINTERFACE_TYPE_CAMERA = 9,
    SOLID_DEVICEINTERFACE_TYPE_PORTABLEMEDIAPLAYER = 10,
    SOLID_DEVICEINTERFACE_TYPE_BATTERY = 12,
    SOLID_DEVICEINTERFACE_TYPE_NETWORKSHARE = 14,
    SOLID_DEVICEINTERFACE_TYPE_LAST = 65535
} Solid__DeviceInterface__Type;

#endif
