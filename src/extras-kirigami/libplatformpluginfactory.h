#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBPLATFORMPLUGINFACTORY_H
#define EXTRAS_KIRIGAMI_LIBPLATFORMPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html)

/// k_kirigami__platform__platformpluginfactory_new constructs a new Kirigami::Platform::PlatformPluginFactory object.
///
Kirigami__Platform__PlatformPluginFactory* k_kirigami__platform__platformpluginfactory_new();

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html)

/// k_kirigami__platform__platformpluginfactory_new2 constructs a new Kirigami::Platform::PlatformPluginFactory object.
///
/// @param parent QObject*
///
Kirigami__Platform__PlatformPluginFactory* k_kirigami__platform__platformpluginfactory_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
const QMetaObject* k_kirigami__platform__platformpluginfactory_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback const QMetaObject* func()
///
void k_kirigami__platform__platformpluginfactory_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
const QMetaObject* k_kirigami__platform__platformpluginfactory_super_meta_object(void* self);

/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param param1 const char*
///
void* k_kirigami__platform__platformpluginfactory_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void* func(Kirigami__Platform__PlatformPluginFactory* self, const char* param1)
///
void k_kirigami__platform__platformpluginfactory_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param param1 const char*
///
void* k_kirigami__platform__platformpluginfactory_super_metacast(void* self, const char* param1);

/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__platformpluginfactory_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback int32_t func(Kirigami__Platform__PlatformPluginFactory* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_kirigami__platform__platformpluginfactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__platformpluginfactory_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigami__platform__platformpluginfactory_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#createPlatformTheme)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param parent QObject*
///
Kirigami__Platform__PlatformTheme* k_kirigami__platform__platformpluginfactory_create_platform_theme(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#createPlatformTheme)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback Kirigami__Platform__PlatformTheme* func(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent)
///
void k_kirigami__platform__platformpluginfactory_on_create_platform_theme(void* self, Kirigami__Platform__PlatformTheme* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#createPlatformTheme)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param parent QObject*
///
Kirigami__Platform__PlatformTheme* k_kirigami__platform__platformpluginfactory_super_create_platform_theme(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#createUnits)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param parent QObject*
///
Kirigami__Platform__Units* k_kirigami__platform__platformpluginfactory_create_units(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#createUnits)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback Kirigami__Platform__Units* func(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent)
///
void k_kirigami__platform__platformpluginfactory_on_create_units(void* self, Kirigami__Platform__Units* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#createUnits)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param parent QObject*
///
Kirigami__Platform__Units* k_kirigami__platform__platformpluginfactory_super_create_units(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#findPlugin)
///
Kirigami__Platform__PlatformPluginFactory* k_kirigami__platform__platformpluginfactory_find_plugin();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigami__platform__platformpluginfactory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigami__platform__platformpluginfactory_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformpluginfactory.html#findPlugin)
///
/// @param pluginName const char*
///
Kirigami__Platform__PlatformPluginFactory* k_kirigami__platform__platformpluginfactory_find_plugin1(const char* pluginName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
const char* k_kirigami__platform__platformpluginfactory_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param name const char*
///
void k_kirigami__platform__platformpluginfactory_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
bool k_kirigami__platform__platformpluginfactory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
bool k_kirigami__platform__platformpluginfactory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
bool k_kirigami__platform__platformpluginfactory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
bool k_kirigami__platform__platformpluginfactory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param b bool
///
bool k_kirigami__platform__platformpluginfactory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
QThread* k_kirigami__platform__platformpluginfactory_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param thread QThread*
///
bool k_kirigami__platform__platformpluginfactory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param interval int
///
int32_t k_kirigami__platform__platformpluginfactory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigami__platform__platformpluginfactory_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param id int
///
void k_kirigami__platform__platformpluginfactory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param id enum Qt__TimerId
///
void k_kirigami__platform__platformpluginfactory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigami__platform__platformpluginfactory_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param parent QObject*
///
void k_kirigami__platform__platformpluginfactory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param filterObj QObject*
///
void k_kirigami__platform__platformpluginfactory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param obj QObject*
///
void k_kirigami__platform__platformpluginfactory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__platformpluginfactory_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigami__platform__platformpluginfactory_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__platformpluginfactory_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__platformpluginfactory_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigami__platform__platformpluginfactory_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
bool k_kirigami__platform__platformpluginfactory_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param receiver QObject*
///
bool k_kirigami__platform__platformpluginfactory_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigami__platform__platformpluginfactory_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
void k_kirigami__platform__platformpluginfactory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
void k_kirigami__platform__platformpluginfactory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigami__platform__platformpluginfactory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param name const char*
///
QVariant* k_kirigami__platform__platformpluginfactory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
const char** k_kirigami__platform__platformpluginfactory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
QBindingStorage* k_kirigami__platform__platformpluginfactory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
const QBindingStorage* k_kirigami__platform__platformpluginfactory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
void k_kirigami__platform__platformpluginfactory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self)
///
void k_kirigami__platform__platformpluginfactory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
QObject* k_kirigami__platform__platformpluginfactory_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param classname const char*
///
bool k_kirigami__platform__platformpluginfactory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
void k_kirigami__platform__platformpluginfactory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__platformpluginfactory_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__platformpluginfactory_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_kirigami__platform__platformpluginfactory_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_kirigami__platform__platformpluginfactory_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__platformpluginfactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal const char*
///
bool k_kirigami__platform__platformpluginfactory_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigami__platform__platformpluginfactory_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__platformpluginfactory_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__platformpluginfactory_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param param1 QObject*
///
void k_kirigami__platform__platformpluginfactory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, QObject* param1)
///
void k_kirigami__platform__platformpluginfactory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QEvent*
///
bool k_kirigami__platform__platformpluginfactory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QEvent*
///
bool k_kirigami__platform__platformpluginfactory_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback bool func(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event)
///
void k_kirigami__platform__platformpluginfactory_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__platformpluginfactory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__platformpluginfactory_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback bool func(Kirigami__Platform__PlatformPluginFactory* self, QObject* watched, QEvent* event)
///
void k_kirigami__platform__platformpluginfactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QTimerEvent*
///
void k_kirigami__platform__platformpluginfactory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QTimerEvent*
///
void k_kirigami__platform__platformpluginfactory_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, QTimerEvent* event)
///
void k_kirigami__platform__platformpluginfactory_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QChildEvent*
///
void k_kirigami__platform__platformpluginfactory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QChildEvent*
///
void k_kirigami__platform__platformpluginfactory_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, QChildEvent* event)
///
void k_kirigami__platform__platformpluginfactory_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QEvent*
///
void k_kirigami__platform__platformpluginfactory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param event QEvent*
///
void k_kirigami__platform__platformpluginfactory_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event)
///
void k_kirigami__platform__platformpluginfactory_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformpluginfactory_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformpluginfactory_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, QMetaMethod* signal)
///
void k_kirigami__platform__platformpluginfactory_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformpluginfactory_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformpluginfactory_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, QMetaMethod* signal)
///
void k_kirigami__platform__platformpluginfactory_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
QObject* k_kirigami__platform__platformpluginfactory_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
QObject* k_kirigami__platform__platformpluginfactory_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback QObject* func()
///
void k_kirigami__platform__platformpluginfactory_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
int32_t k_kirigami__platform__platformpluginfactory_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
int32_t k_kirigami__platform__platformpluginfactory_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback int32_t func()
///
void k_kirigami__platform__platformpluginfactory_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal const char*
///
int32_t k_kirigami__platform__platformpluginfactory_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal const char*
///
int32_t k_kirigami__platform__platformpluginfactory_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback int32_t func(Kirigami__Platform__PlatformPluginFactory* self, const char* signal)
///
void k_kirigami__platform__platformpluginfactory_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__platformpluginfactory_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__platformpluginfactory_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback bool func(Kirigami__Platform__PlatformPluginFactory* self, QMetaMethod* signal)
///
void k_kirigami__platform__platformpluginfactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
/// @param callback void func(Kirigami__Platform__PlatformPluginFactory* self, const char* objectName)
///
void k_kirigami__platform__platformpluginfactory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__PlatformPluginFactory*
///
void k_kirigami__platform__platformpluginfactory_delete(void* self);

#endif
