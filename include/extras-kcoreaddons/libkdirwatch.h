#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKDIRWATCH_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKDIRWATCH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdirwatch.html)

/// k_dirwatch_new constructs a new KDirWatch object.
///
KDirWatch* k_dirwatch_new();

/// [Upstream resources](https://api.kde.org/kdirwatch.html)

/// k_dirwatch_new2 constructs a new KDirWatch object.
///
/// @param parent QObject*
///
KDirWatch* k_dirwatch_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDirWatch*
///
const QMetaObject* k_dirwatch_meta_object(void* self);

/// @param self KDirWatch*
/// @param param1 const char*
///
void* k_dirwatch_metacast(void* self, const char* param1);

/// @param self KDirWatch*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dirwatch_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDirWatch*
/// @param callback int32_t func(KDirWatch* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_dirwatch_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDirWatch*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dirwatch_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_dirwatch_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#addDir)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_add_dir(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#addFile)
///
/// @param self KDirWatch*
/// @param file const char*
///
void k_dirwatch_add_file(void* self, const char* file);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#ctime)
///
/// @param self KDirWatch*
/// @param path const char*
///
QDateTime* k_dirwatch_ctime(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#removeDir)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_remove_dir(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#removeFile)
///
/// @param self KDirWatch*
/// @param file const char*
///
void k_dirwatch_remove_file(void* self, const char* file);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#stopDirScan)
///
/// @param self KDirWatch*
/// @param path const char*
///
bool k_dirwatch_stop_dir_scan(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#restartDirScan)
///
/// @param self KDirWatch*
/// @param path const char*
///
bool k_dirwatch_restart_dir_scan(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#startScan)
///
/// @param self KDirWatch*
///
void k_dirwatch_start_scan(void* self);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#stopScan)
///
/// @param self KDirWatch*
///
void k_dirwatch_stop_scan(void* self);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#isStopped)
///
/// @param self KDirWatch*
///
bool k_dirwatch_is_stopped(void* self);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#contains)
///
/// @param self KDirWatch*
/// @param path const char*
///
bool k_dirwatch_contains(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#internalMethod)
///
/// @param self KDirWatch*
///
/// @return enum KDirWatch__Method
///
int32_t k_dirwatch_internal_method(void* self);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#self)
///
KDirWatch* k_dirwatch_self();

/// [Upstream resources](https://api.kde.org/kdirwatch.html#exists)
///
bool k_dirwatch_exists();

/// [Upstream resources](https://api.kde.org/kdirwatch.html#event)
///
/// @param self KDirWatch*
/// @param event QEvent*
///
bool k_dirwatch_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KDirWatch*
/// @param callback bool func(KDirWatch* self, QEvent* event)
///
void k_dirwatch_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirwatch.html#event)
///
/// Base class method implementation
///
/// @param self KDirWatch*
/// @param event QEvent*
///
bool k_dirwatch_qbase_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#setCreated)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_set_created(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#setDirty)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_set_dirty(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#setDeleted)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_set_deleted(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#dirty)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_dirty(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#dirty)
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, const char* path)
///
void k_dirwatch_on_dirty(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdirwatch.html#created)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_created(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#created)
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, const char* path)
///
void k_dirwatch_on_created(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdirwatch.html#deleted)
///
/// @param self KDirWatch*
/// @param path const char*
///
void k_dirwatch_deleted(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#deleted)
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, const char* path)
///
void k_dirwatch_on_deleted(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_dirwatch_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_dirwatch_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#addDir)
///
/// @param self KDirWatch*
/// @param path const char*
/// @param watchModes flag of enum KDirWatch__WatchMode
///
void k_dirwatch_add_dir2(void* self, const char* path, int32_t watchModes);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#startScan)
///
/// @param self KDirWatch*
/// @param notify bool
///
void k_dirwatch_start_scan1(void* self, bool notify);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#startScan)
///
/// @param self KDirWatch*
/// @param notify bool
/// @param skippedToo bool
///
void k_dirwatch_start_scan2(void* self, bool notify, bool skippedToo);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDirWatch*
///
const char* k_dirwatch_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDirWatch*
/// @param name char*
///
void k_dirwatch_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDirWatch*
///
bool k_dirwatch_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDirWatch*
///
bool k_dirwatch_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDirWatch*
///
bool k_dirwatch_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDirWatch*
///
bool k_dirwatch_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDirWatch*
/// @param b bool
///
bool k_dirwatch_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDirWatch*
///
QThread* k_dirwatch_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirWatch*
/// @param thread QThread*
///
bool k_dirwatch_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirWatch*
/// @param interval int
///
int32_t k_dirwatch_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirWatch*
/// @param id int
///
void k_dirwatch_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirWatch*
/// @param id enum Qt__TimerId
///
void k_dirwatch_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDirWatch*
///
/// @return libqt_list of QObject*
///
libqt_list k_dirwatch_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDirWatch*
/// @param parent QObject*
///
void k_dirwatch_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDirWatch*
/// @param filterObj QObject*
///
void k_dirwatch_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDirWatch*
/// @param obj QObject*
///
void k_dirwatch_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_dirwatch_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirWatch*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_dirwatch_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_dirwatch_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_dirwatch_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDirWatch*
///
void k_dirwatch_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDirWatch*
///
void k_dirwatch_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDirWatch*
/// @param name const char*
/// @param value QVariant*
///
bool k_dirwatch_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDirWatch*
/// @param name const char*
///
QVariant* k_dirwatch_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDirWatch*
///
const char** k_dirwatch_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirWatch*
///
QBindingStorage* k_dirwatch_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirWatch*
///
const QBindingStorage* k_dirwatch_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirWatch*
///
void k_dirwatch_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self)
///
void k_dirwatch_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDirWatch*
///
QObject* k_dirwatch_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDirWatch*
/// @param classname const char*
///
bool k_dirwatch_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDirWatch*
///
void k_dirwatch_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirWatch*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_dirwatch_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirWatch*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_dirwatch_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_dirwatch_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirWatch*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_dirwatch_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirWatch*
/// @param param1 QObject*
///
void k_dirwatch_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, QObject* param1)
///
void k_dirwatch_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dirwatch_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dirwatch_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback bool func(KDirWatch* self, QObject* watched, QEvent* event)
///
void k_dirwatch_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param event QTimerEvent*
///
void k_dirwatch_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param event QTimerEvent*
///
void k_dirwatch_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, QTimerEvent* event)
///
void k_dirwatch_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param event QChildEvent*
///
void k_dirwatch_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param event QChildEvent*
///
void k_dirwatch_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, QChildEvent* event)
///
void k_dirwatch_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param event QEvent*
///
void k_dirwatch_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param event QEvent*
///
void k_dirwatch_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, QEvent* event)
///
void k_dirwatch_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param signal QMetaMethod*
///
void k_dirwatch_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param signal QMetaMethod*
///
void k_dirwatch_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, QMetaMethod* signal)
///
void k_dirwatch_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param signal QMetaMethod*
///
void k_dirwatch_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param signal QMetaMethod*
///
void k_dirwatch_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, QMetaMethod* signal)
///
void k_dirwatch_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
///
QObject* k_dirwatch_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
///
QObject* k_dirwatch_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback QObject* func()
///
void k_dirwatch_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
///
int32_t k_dirwatch_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
///
int32_t k_dirwatch_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback int32_t func()
///
void k_dirwatch_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param signal const char*
///
int32_t k_dirwatch_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param signal const char*
///
int32_t k_dirwatch_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback int32_t func(KDirWatch* self, const char* signal)
///
void k_dirwatch_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirWatch*
/// @param signal QMetaMethod*
///
bool k_dirwatch_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirWatch*
/// @param signal QMetaMethod*
///
bool k_dirwatch_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirWatch*
/// @param callback bool func(KDirWatch* self, QMetaMethod* signal)
///
void k_dirwatch_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirWatch*
/// @param callback void func(KDirWatch* self, const char* objectName)
///
void k_dirwatch_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdirwatch.html#dtor.KDirWatch)
///
/// Delete this object from C++ memory.
///
/// @param self KDirWatch*
///
void k_dirwatch_delete(void* self);

/// [Upstream resources](https://api.kde.org/kdirwatch.html#public-types)

typedef enum {
    KDIRWATCH_WATCHMODE_WATCHDIRONLY = 0,
    KDIRWATCH_WATCHMODE_WATCHFILES = 1,
    KDIRWATCH_WATCHMODE_WATCHSUBDIRS = 2
} KDirWatch__WatchMode;

/// [Upstream resources](https://api.kde.org/kdirwatch.html#public-types)

typedef enum {
    KDIRWATCH_METHOD_INOTIFY = 0,
    KDIRWATCH_METHOD_STAT = 1,
    KDIRWATCH_METHOD_QFSWATCH = 2
} KDirWatch__Method;

#endif
