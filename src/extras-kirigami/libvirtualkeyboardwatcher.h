#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBVIRTUALKEYBOARDWATCHER_H
#define EXTRAS_KIRIGAMI_LIBVIRTUALKEYBOARDWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html)

/// k_kirigami__platform__virtualkeyboardwatcher_new constructs a new Kirigami::Platform::VirtualKeyboardWatcher object.
///
Kirigami__Platform__VirtualKeyboardWatcher* k_kirigami__platform__virtualkeyboardwatcher_new();

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html)

/// k_kirigami__platform__virtualkeyboardwatcher_new2 constructs a new Kirigami::Platform::VirtualKeyboardWatcher object.
///
/// @param parent QObject*
///
Kirigami__Platform__VirtualKeyboardWatcher* k_kirigami__platform__virtualkeyboardwatcher_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
const QMetaObject* k_kirigami__platform__virtualkeyboardwatcher_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback const QMetaObject* func()
///
void k_kirigami__platform__virtualkeyboardwatcher_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
const QMetaObject* k_kirigami__platform__virtualkeyboardwatcher_super_meta_object(void* self);

/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param param1 const char*
///
void* k_kirigami__platform__virtualkeyboardwatcher_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void* func(Kirigami__Platform__VirtualKeyboardWatcher* self, const char* param1)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param param1 const char*
///
void* k_kirigami__platform__virtualkeyboardwatcher_super_metacast(void* self, const char* param1);

/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback int32_t func(Kirigami__Platform__VirtualKeyboardWatcher* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigami__platform__virtualkeyboardwatcher_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#available)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_available(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#availableChanged)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_available_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#enabled)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#enabledChanged)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_enabled_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#active)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_active(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#activeChanged)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_active_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#visible)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_visible(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#visibleChanged)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_visible_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#willShowOnActive)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_will_show_on_active(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#willShowOnActiveChanged)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_will_show_on_active_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-virtualkeyboardwatcher.html#self)
///
Kirigami__Platform__VirtualKeyboardWatcher* k_kirigami__platform__virtualkeyboardwatcher_self();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigami__platform__virtualkeyboardwatcher_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigami__platform__virtualkeyboardwatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
const char* k_kirigami__platform__virtualkeyboardwatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param name const char*
///
void k_kirigami__platform__virtualkeyboardwatcher_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param b bool
///
bool k_kirigami__platform__virtualkeyboardwatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
QThread* k_kirigami__platform__virtualkeyboardwatcher_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param thread QThread*
///
bool k_kirigami__platform__virtualkeyboardwatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param interval int
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param id int
///
void k_kirigami__platform__virtualkeyboardwatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param id enum Qt__TimerId
///
void k_kirigami__platform__virtualkeyboardwatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigami__platform__virtualkeyboardwatcher_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param parent QObject*
///
void k_kirigami__platform__virtualkeyboardwatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param filterObj QObject*
///
void k_kirigami__platform__virtualkeyboardwatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param obj QObject*
///
void k_kirigami__platform__virtualkeyboardwatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__virtualkeyboardwatcher_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigami__platform__virtualkeyboardwatcher_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__virtualkeyboardwatcher_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param receiver QObject*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigami__platform__virtualkeyboardwatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param name const char*
///
QVariant* k_kirigami__platform__virtualkeyboardwatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
const char** k_kirigami__platform__virtualkeyboardwatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
QBindingStorage* k_kirigami__platform__virtualkeyboardwatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
const QBindingStorage* k_kirigami__platform__virtualkeyboardwatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
QObject* k_kirigami__platform__virtualkeyboardwatcher_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param classname const char*
///
bool k_kirigami__platform__virtualkeyboardwatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_kirigami__platform__virtualkeyboardwatcher_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_kirigami__platform__virtualkeyboardwatcher_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__virtualkeyboardwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal const char*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__virtualkeyboardwatcher_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param param1 QObject*
///
void k_kirigami__platform__virtualkeyboardwatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, QObject* param1)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QEvent*
///
bool k_kirigami__platform__virtualkeyboardwatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QEvent*
///
bool k_kirigami__platform__virtualkeyboardwatcher_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback bool func(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__virtualkeyboardwatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__virtualkeyboardwatcher_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback bool func(Kirigami__Platform__VirtualKeyboardWatcher* self, QObject* watched, QEvent* event)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QTimerEvent*
///
void k_kirigami__platform__virtualkeyboardwatcher_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QTimerEvent*
///
void k_kirigami__platform__virtualkeyboardwatcher_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, QTimerEvent* event)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QChildEvent*
///
void k_kirigami__platform__virtualkeyboardwatcher_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QChildEvent*
///
void k_kirigami__platform__virtualkeyboardwatcher_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, QChildEvent* event)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QEvent*
///
void k_kirigami__platform__virtualkeyboardwatcher_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param event QEvent*
///
void k_kirigami__platform__virtualkeyboardwatcher_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, QEvent* event)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__virtualkeyboardwatcher_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__virtualkeyboardwatcher_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, QMetaMethod* signal)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__virtualkeyboardwatcher_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__virtualkeyboardwatcher_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, QMetaMethod* signal)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
QObject* k_kirigami__platform__virtualkeyboardwatcher_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
QObject* k_kirigami__platform__virtualkeyboardwatcher_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback QObject* func()
///
void k_kirigami__platform__virtualkeyboardwatcher_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback int32_t func()
///
void k_kirigami__platform__virtualkeyboardwatcher_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal const char*
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal const char*
///
int32_t k_kirigami__platform__virtualkeyboardwatcher_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback int32_t func(Kirigami__Platform__VirtualKeyboardWatcher* self, const char* signal)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__virtualkeyboardwatcher_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__virtualkeyboardwatcher_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback bool func(Kirigami__Platform__VirtualKeyboardWatcher* self, QMetaMethod* signal)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
/// @param callback void func(Kirigami__Platform__VirtualKeyboardWatcher* self, const char* objectName)
///
void k_kirigami__platform__virtualkeyboardwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__VirtualKeyboardWatcher*
///
void k_kirigami__platform__virtualkeyboardwatcher_delete(void* self);

#endif
