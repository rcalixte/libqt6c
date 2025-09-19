#pragma once
#ifndef SRC_EXTRAS_SOLIDQT6C_LIBNETWORKSHARE_H
#define SRC_EXTRAS_SOLIDQT6C_LIBNETWORKSHARE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-networkshare.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Solid__NetworkShare*
const QMetaObject* k_solid__networkshare_meta_object(void* self);

/// @param self Solid__NetworkShare*
/// @param param1 const char*
void* k_solid__networkshare_metacast(void* self, const char* param1);

/// @param self Solid__NetworkShare*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_solid__networkshare_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_solid__networkshare_tr(const char* s);

/// [Qt documentation](https://api.kde.org/solid-networkshare.html#deviceInterfaceType)
///
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__networkshare_device_interface_type();

/// [Qt documentation](https://api.kde.org/solid-networkshare.html#type)
///
/// @param self Solid__NetworkShare*
///
/// @return enum Solid__NetworkShare__ShareType
int32_t k_solid__networkshare_type(void* self);

/// [Qt documentation](https://api.kde.org/solid-networkshare.html#url)
///
/// @param self Solid__NetworkShare*
QUrl* k_solid__networkshare_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_solid__networkshare_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_solid__networkshare_tr3(const char* s, const char* c, int n);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#isValid)
///
/// @param self Solid__NetworkShare*
bool k_solid__networkshare_is_valid(void* self);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__networkshare_type_to_string(int32_t type);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#stringToType)
///
/// @param type const char*
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__networkshare_string_to_type(const char* type);

/// Inherited from Solid::DeviceInterface
///
/// [Qt documentation](https://api.kde.org/solid-deviceinterface.html#typeDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Solid__DeviceInterface__Type
const char* k_solid__networkshare_type_description(int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Solid__NetworkShare*
/// @param event QEvent*
bool k_solid__networkshare_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Solid__NetworkShare*
/// @param watched QObject*
/// @param event QEvent*
bool k_solid__networkshare_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__NetworkShare*
const char* k_solid__networkshare_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Solid__NetworkShare*
/// @param name char*
void k_solid__networkshare_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Solid__NetworkShare*
bool k_solid__networkshare_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Solid__NetworkShare*
bool k_solid__networkshare_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Solid__NetworkShare*
bool k_solid__networkshare_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Solid__NetworkShare*
bool k_solid__networkshare_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Solid__NetworkShare*
/// @param b bool
bool k_solid__networkshare_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Solid__NetworkShare*
QThread* k_solid__networkshare_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__NetworkShare*
/// @param thread QThread*
bool k_solid__networkshare_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__NetworkShare*
/// @param interval int
int32_t k_solid__networkshare_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__NetworkShare*
/// @param id int
void k_solid__networkshare_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Solid__NetworkShare*
/// @param id enum Qt__TimerId
void k_solid__networkshare_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Solid__NetworkShare*
libqt_list /* of QObject* */ k_solid__networkshare_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Solid__NetworkShare*
/// @param parent QObject*
void k_solid__networkshare_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Solid__NetworkShare*
/// @param filterObj QObject*
void k_solid__networkshare_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Solid__NetworkShare*
/// @param obj QObject*
void k_solid__networkshare_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_solid__networkshare_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__NetworkShare*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_solid__networkshare_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_solid__networkshare_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_solid__networkshare_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Solid__NetworkShare*
void k_solid__networkshare_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Solid__NetworkShare*
void k_solid__networkshare_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Solid__NetworkShare*
/// @param name const char*
/// @param value QVariant*
bool k_solid__networkshare_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Solid__NetworkShare*
/// @param name const char*
QVariant* k_solid__networkshare_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__NetworkShare*
const char** k_solid__networkshare_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__NetworkShare*
QBindingStorage* k_solid__networkshare_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Solid__NetworkShare*
const QBindingStorage* k_solid__networkshare_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__NetworkShare*
void k_solid__networkshare_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__NetworkShare*
/// @param callback void func(Solid__NetworkShare* self)
void k_solid__networkshare_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Solid__NetworkShare*
QObject* k_solid__networkshare_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Solid__NetworkShare*
/// @param classname const char*
bool k_solid__networkshare_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Solid__NetworkShare*
void k_solid__networkshare_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Solid__NetworkShare*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_solid__networkshare_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Solid__NetworkShare*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_solid__networkshare_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__networkshare_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Solid__NetworkShare*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_solid__networkshare_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__NetworkShare*
/// @param param1 QObject*
void k_solid__networkshare_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Solid__NetworkShare*
/// @param callback void func(Solid__NetworkShare* self, QObject* param1)
void k_solid__networkshare_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Solid__NetworkShare*
/// @param callback void func(Solid__NetworkShare* self, const char* objectName)
void k_solid__networkshare_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Solid__NetworkShare*
void k_solid__networkshare_delete(void* self);

/// https://api.kde.org/solid-networkshare.html#types

typedef enum {
    SOLID_NETWORKSHARE_SHARETYPE_UNKNOWN = 0,
    SOLID_NETWORKSHARE_SHARETYPE_NFS = 1,
    SOLID_NETWORKSHARE_SHARETYPE_CIFS = 2,
    SOLID_NETWORKSHARE_SHARETYPE_SMB3 = 3
} Solid__NetworkShare__ShareType;

#endif
