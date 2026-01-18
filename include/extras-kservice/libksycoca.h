#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKSYCOCA_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKSYCOCA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksycoca.html)

/// k_sycoca_new constructs a new KSycoca object.
///
KSycoca* k_sycoca_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSycoca*
///
const QMetaObject* k_sycoca_meta_object(void* self);

/// @param self KSycoca*
/// @param param1 const char*
///
void* k_sycoca_metacast(void* self, const char* param1);

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
int32_t k_sycoca_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param callback bool func()
///
void k_sycoca_on_is_building(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/ksycoca.html#isBuilding)
///
/// Base class method implementation
///
/// @param self KSycoca*
///
bool k_sycoca_qbase_is_building(void* self);

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
void k_sycoca_connect_notify(void* self, void* signal);

/// [Upstream resources](https://api.kde.org/ksycoca.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QMetaMethod* signal)
///
void k_sycoca_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksycoca.html#connectNotify)
///
/// Base class method implementation
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
void k_sycoca_qbase_connect_notify(void* self, void* signal);

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
/// @param self KSycoca*
///
const char* k_sycoca_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSycoca*
/// @param name char*
///
void k_sycoca_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSycoca*
///
bool k_sycoca_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSycoca*
///
bool k_sycoca_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSycoca*
///
bool k_sycoca_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSycoca*
///
bool k_sycoca_signals_blocked(void* self);

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
/// @param self KSycoca*
///
QThread* k_sycoca_thread(void* self);

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
/// @param self KSycoca*
///
/// @return libqt_list of QObject*
///
libqt_list k_sycoca_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_sycoca_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSycoca*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_sycoca_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_sycoca_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_sycoca_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSycoca*
///
void k_sycoca_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSycoca*
///
void k_sycoca_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSycoca*
/// @param name const char*
/// @param value QVariant*
///
bool k_sycoca_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSycoca*
/// @param name const char*
///
QVariant* k_sycoca_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSycoca*
///
const char** k_sycoca_dynamic_property_names(void* self);

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
/// @param self KSycoca*
///
const QBindingStorage* k_sycoca_binding_storage2(void* self);

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
/// @param self KSycoca*
///
QObject* k_sycoca_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSycoca*
/// @param classname const char*
///
bool k_sycoca_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSycoca*
///
void k_sycoca_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSycoca*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_sycoca_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sycoca_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSycoca*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sycoca_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool k_sycoca_qbase_event(void* self, void* event);

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
bool k_sycoca_qbase_event_filter(void* self, void* watched, void* event);

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
void k_sycoca_qbase_timer_event(void* self, void* event);

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
void k_sycoca_qbase_child_event(void* self, void* event);

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
void k_sycoca_qbase_custom_event(void* self, void* event);

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
void k_sycoca_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
void k_sycoca_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback void func(KSycoca* self, QMetaMethod* signal)
///
void k_sycoca_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
///
QObject* k_sycoca_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
///
QObject* k_sycoca_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback QObject* func()
///
void k_sycoca_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
///
int32_t k_sycoca_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
///
int32_t k_sycoca_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback int32_t func()
///
void k_sycoca_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param signal const char*
///
int32_t k_sycoca_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param signal const char*
///
int32_t k_sycoca_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback int32_t func(KSycoca* self, const char* signal)
///
void k_sycoca_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
bool k_sycoca_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSycoca*
/// @param signal QMetaMethod*
///
bool k_sycoca_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSycoca*
/// @param callback bool func(KSycoca* self, QMetaMethod* signal)
///
void k_sycoca_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
