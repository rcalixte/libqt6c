#pragma once
#ifndef EXTRAS_KSERVICE_LIBKSYCOCA_H
#define EXTRAS_KSERVICE_LIBKSYCOCA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksycoca.html)

/// k_sycoca_new constructs a new KSycoca object.
///
KSycoca* k_sycoca_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KSycoca*
///
const QMetaObject* k_sycoca_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KSycoca*
/// @param callback const QMetaObject* func(const KSycoca* self)
///
void k_sycoca_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KSycoca*
///
const QMetaObject* k_sycoca_super_meta_object(const void* self);

/// @param self KSycoca*
/// @param param1 const char*
///
void* k_sycoca_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KSycoca*
/// @param callback void* func(KSycoca* self, const char* param1)
///
void k_sycoca_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KSycoca*
/// @param param1 const char*
///
void* k_sycoca_super_metacast(void* self, const char* param1);

/// @param self KSycoca*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sycoca_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSycoca*
/// @param callback int32_t func(KSycoca* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_sycoca_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSycoca*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sycoca_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_sycoca_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksycoca.html#self)
///
KSycoca* k_sycoca_self();

/// [Upstream resources](https://api.kde.org/ksycoca.html#version)
///
int32_t k_sycoca_version();

/// [Upstream resources](https://api.kde.org/ksycoca.html#isAvailable)
///
bool k_sycoca_is_available();

/// [Upstream resources](https://api.kde.org/ksycoca.html#findEntry)
///
/// @param self KSycoca*
/// @param offset int
/// @param type enum KSycoca__KSycocaType*
///
QDataStream* k_sycoca_find_entry(void* self, int offset, int32_t* type);

/// [Upstream resources](https://api.kde.org/ksycoca.html#findFactory)
///
/// @param self KSycoca*
/// @param id enum KSycoca__KSycocaFactoryId
///
QDataStream* k_sycoca_find_factory(void* self, int32_t id);

/// [Upstream resources](https://api.kde.org/ksycoca.html#absoluteFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_sycoca_absolute_file_path();

/// [Upstream resources](https://api.kde.org/ksycoca.html#allResourceDirs)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSycoca*
///
const char** k_sycoca_all_resource_dirs(void* self);

/// [Upstream resources](https://api.kde.org/ksycoca.html#isBuilding)
///
/// @param self KSycoca*
///
bool k_sycoca_is_building(void* self);

/// [Upstream resources](https://api.kde.org/ksycoca.html#isBuilding)
///
/// Allows for overriding the related default method
///
/// @param self KSycoca*
/// @param callback bool func(KSycoca* self)
///
void k_sycoca_on_is_building(void* self, bool (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ksycoca.html#isBuilding)
///
/// Base class method implementation
///
/// @param self KSycoca*
///
bool k_sycoca_super_is_building(void* self);

/// [Upstream resources](https://api.kde.org/ksycoca.html#disableAutoRebuild)
///
void k_sycoca_disable_auto_rebuild();

/// [Upstream resources](https://api.kde.org/ksycoca.html#flagError)
///
void k_sycoca_flag_error();

/// [Upstream resources](https://api.kde.org/ksycoca.html#ensureCacheValid)
///
/// @param self KSycoca*
///
void k_sycoca_ensure_cache_valid(void* self);

/// [Upstream resources](https://api.kde.org/ksycoca.html#setupTestMenu)
///
void k_sycoca_setup_test_menu();

/// [Upstream resources](https://api.kde.org/ksycoca.html#databaseChanged)
///
/// @param self KSycoca*
///
void k_sycoca_database_changed(void* self);

/// [Upstream resources](https://api.kde.org/ksycoca.html#connectNotify)
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
void k_sycoca_connect_notify(void* self, const void* signal);

/// [Upstream resources](https://api.kde.org/ksycoca.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QMetaMethod* signal)
///
void k_sycoca_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/ksycoca.html#connectNotify)
///
/// Base class method implementation
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
void k_sycoca_super_connect_notify(void* self, const void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_sycoca_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_sycoca_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSycoca*
///
const char* k_sycoca_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSycoca*
/// @param name const char*
///
void k_sycoca_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KSycoca*
///
bool k_sycoca_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KSycoca*
///
bool k_sycoca_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KSycoca*
///
bool k_sycoca_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KSycoca*
///
bool k_sycoca_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSycoca*
/// @param b bool
///
bool k_sycoca_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KSycoca*
///
QThread* k_sycoca_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSycoca*
/// @param thread QThread*
///
bool k_sycoca_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSycoca*
/// @param interval int
///
int32_t k_sycoca_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSycoca*
/// @param time int64_t of nanoseconds
///
int32_t k_sycoca_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSycoca*
/// @param id int
///
void k_sycoca_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSycoca*
/// @param id enum Qt__TimerId
///
void k_sycoca_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KSycoca*
///
/// @return libqt_list of QObject*
///
libqt_list k_sycoca_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSycoca*
/// @param parent QObject*
///
void k_sycoca_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSycoca*
/// @param filterObj QObject*
///
void k_sycoca_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSycoca*
/// @param obj QObject*
///
void k_sycoca_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_sycoca_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_sycoca_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KSycoca*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_sycoca_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_sycoca_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_sycoca_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSycoca*
///
bool k_sycoca_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSycoca*
/// @param receiver QObject*
///
bool k_sycoca_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_sycoca_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KSycoca*
///
void k_sycoca_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KSycoca*
///
void k_sycoca_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSycoca*
/// @param name const char*
/// @param value QVariant*
///
bool k_sycoca_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KSycoca*
/// @param name const char*
///
QVariant* k_sycoca_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSycoca*
///
const char** k_sycoca_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSycoca*
///
QBindingStorage* k_sycoca_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KSycoca*
///
const QBindingStorage* k_sycoca_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSycoca*
///
void k_sycoca_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self)
///
void k_sycoca_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KSycoca*
///
QObject* k_sycoca_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KSycoca*
/// @param classname const char*
///
bool k_sycoca_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSycoca*
///
void k_sycoca_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSycoca*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_sycoca_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSycoca*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_sycoca_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_sycoca_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_sycoca_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KSycoca*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sycoca_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSycoca*
/// @param signal const char*
///
bool k_sycoca_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSycoca*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_sycoca_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSycoca*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_sycoca_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSycoca*
/// @param receiver QObject*
/// @param member const char*
///
bool k_sycoca_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSycoca*
/// @param param1 QObject*
///
void k_sycoca_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QObject* param1)
///
void k_sycoca_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param event QEvent*
///
bool k_sycoca_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param event QEvent*
///
bool k_sycoca_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback bool func(KSycoca* self, QEvent* event)
///
void k_sycoca_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_sycoca_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_sycoca_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback bool func(KSycoca* self, QObject* watched, QEvent* event)
///
void k_sycoca_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param event QTimerEvent*
///
void k_sycoca_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param event QTimerEvent*
///
void k_sycoca_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QTimerEvent* event)
///
void k_sycoca_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param event QChildEvent*
///
void k_sycoca_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param event QChildEvent*
///
void k_sycoca_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QChildEvent* event)
///
void k_sycoca_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param event QEvent*
///
void k_sycoca_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param event QEvent*
///
void k_sycoca_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QEvent* event)
///
void k_sycoca_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
void k_sycoca_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
void k_sycoca_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QMetaMethod* signal)
///
void k_sycoca_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSycoca*
///
QObject* k_sycoca_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSycoca*
///
QObject* k_sycoca_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSycoca*
/// @param callback QObject* func(KSycoca* self)
///
void k_sycoca_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSycoca*
///
int32_t k_sycoca_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSycoca*
///
int32_t k_sycoca_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSycoca*
/// @param callback int32_t func(KSycoca* self)
///
void k_sycoca_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSycoca*
/// @param signal const char*
///
int32_t k_sycoca_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSycoca*
/// @param signal const char*
///
int32_t k_sycoca_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSycoca*
/// @param callback int32_t func(KSycoca* self, const char* signal)
///
void k_sycoca_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSycoca*
/// @param signal QMetaMethod*
///
bool k_sycoca_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSycoca*
/// @param signal QMetaMethod*
///
bool k_sycoca_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KSycoca*
/// @param callback bool func(KSycoca* self, QMetaMethod* signal)
///
void k_sycoca_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, const char* objectName)
///
void k_sycoca_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksycoca.html#dtor.KSycoca)
///
/// Delete this object from C++ memory.
///
/// @param self KSycoca*
///
void k_sycoca_delete(void* self);

#endif
