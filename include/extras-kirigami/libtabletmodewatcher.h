#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBTABLETMODEWATCHER_H
#define EXTRAS_KIRIGAMI_LIBTABLETMODEWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html)

/// k_kirigami__platform__tabletmodechangedevent_new constructs a new Kirigami::Platform::TabletModeChangedEvent object.
///
/// @param tablet bool
///
Kirigami__Platform__TabletModeChangedEvent* k_kirigami__platform__tabletmodechangedevent_new(bool tablet);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html)

/// k_kirigami__platform__tabletmodechangedevent_new2 constructs a new Kirigami::Platform::TabletModeChangedEvent object.
///
/// @param param1 Kirigami__Platform__TabletModeChangedEvent*
///
Kirigami__Platform__TabletModeChangedEvent* k_kirigami__platform__tabletmodechangedevent_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html#tabletMode-var)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
bool k_kirigami__platform__tabletmodechangedevent_tablet_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html#tabletMode-var)
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
/// @param tabletMode bool
///
void k_kirigami__platform__tabletmodechangedevent_set_tablet_mode(void* self, bool tabletMode);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html#operator-eq)
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
/// @param param1 Kirigami__Platform__TabletModeChangedEvent*
///
void k_kirigami__platform__tabletmodechangedevent_operator_assign(void* self, const void* param1);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
/// @return enum QEvent__Type
///
int32_t k_kirigami__platform__tabletmodechangedevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
bool k_kirigami__platform__tabletmodechangedevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
bool k_kirigami__platform__tabletmodechangedevent_is_accepted(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
///
void k_kirigami__platform__tabletmodechangedevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
///
void k_kirigami__platform__tabletmodechangedevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
bool k_kirigami__platform__tabletmodechangedevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
bool k_kirigami__platform__tabletmodechangedevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
bool k_kirigami__platform__tabletmodechangedevent_is_single_point_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t k_kirigami__platform__tabletmodechangedevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t k_kirigami__platform__tabletmodechangedevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
/// @param accepted bool
///
void k_kirigami__platform__tabletmodechangedevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
/// @param accepted bool
///
void k_kirigami__platform__tabletmodechangedevent_super_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
/// @param callback void func(Kirigami__Platform__TabletModeChangedEvent* self, bool accepted)
///
void k_kirigami__platform__tabletmodechangedevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
QEvent* k_kirigami__platform__tabletmodechangedevent_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
///
QEvent* k_kirigami__platform__tabletmodechangedevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const Kirigami__Platform__TabletModeChangedEvent*
/// @param callback QEvent* func(Kirigami__Platform__TabletModeChangedEvent* self)
///
void k_kirigami__platform__tabletmodechangedevent_on_clone(const void* self, QEvent* (*callback)(const void*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__TabletModeChangedEvent*
///
void k_kirigami__platform__tabletmodechangedevent_delete(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
const QMetaObject* k_kirigami__platform__tabletmodewatcher_meta_object(const void* self);

/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param param1 const char*
///
void* k_kirigami__platform__tabletmodewatcher_metacast(void* self, const char* param1);

/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__tabletmodewatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigami__platform__tabletmodewatcher_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#self)
///
Kirigami__Platform__TabletModeWatcher* k_kirigami__platform__tabletmodewatcher_self();

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#isTabletModeAvailable)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_is_tablet_mode_available(const void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#isTabletMode)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_is_tablet_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#addWatcher)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param watcher QObject*
///
void k_kirigami__platform__tabletmodewatcher_add_watcher(void* self, void* watcher);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#removeWatcher)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param watcher QObject*
///
void k_kirigami__platform__tabletmodewatcher_remove_watcher(void* self, void* watcher);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeAvailableChanged)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param tabletModeAvailable bool
///
void k_kirigami__platform__tabletmodewatcher_tablet_mode_available_changed(void* self, bool tabletModeAvailable);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeAvailableChanged)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param callback void func(Kirigami__Platform__TabletModeWatcher* self, bool tabletModeAvailable)
///
void k_kirigami__platform__tabletmodewatcher_on_tablet_mode_available_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeChanged)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param tabletMode bool
///
void k_kirigami__platform__tabletmodewatcher_tablet_mode_changed(void* self, bool tabletMode);

/// [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeChanged)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param callback void func(Kirigami__Platform__TabletModeWatcher* self, bool tabletMode)
///
void k_kirigami__platform__tabletmodewatcher_on_tablet_mode_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigami__platform__tabletmodewatcher_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigami__platform__tabletmodewatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param event QEvent*
///
bool k_kirigami__platform__tabletmodewatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__tabletmodewatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
const char* k_kirigami__platform__tabletmodewatcher_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param name const char*
///
void k_kirigami__platform__tabletmodewatcher_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param b bool
///
bool k_kirigami__platform__tabletmodewatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
QThread* k_kirigami__platform__tabletmodewatcher_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param thread QThread*
///
bool k_kirigami__platform__tabletmodewatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param interval int
///
int32_t k_kirigami__platform__tabletmodewatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigami__platform__tabletmodewatcher_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param id int
///
void k_kirigami__platform__tabletmodewatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param id enum Qt__TimerId
///
void k_kirigami__platform__tabletmodewatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigami__platform__tabletmodewatcher_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param parent QObject*
///
void k_kirigami__platform__tabletmodewatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param filterObj QObject*
///
void k_kirigami__platform__tabletmodewatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param obj QObject*
///
void k_kirigami__platform__tabletmodewatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__tabletmodewatcher_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigami__platform__tabletmodewatcher_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__tabletmodewatcher_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param receiver QObject*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
void k_kirigami__platform__tabletmodewatcher_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
void k_kirigami__platform__tabletmodewatcher_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigami__platform__tabletmodewatcher_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param name const char*
///
QVariant* k_kirigami__platform__tabletmodewatcher_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
const char** k_kirigami__platform__tabletmodewatcher_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
///
QBindingStorage* k_kirigami__platform__tabletmodewatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
const QBindingStorage* k_kirigami__platform__tabletmodewatcher_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
///
void k_kirigami__platform__tabletmodewatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param callback void func(Kirigami__Platform__TabletModeWatcher* self)
///
void k_kirigami__platform__tabletmodewatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
///
QObject* k_kirigami__platform__tabletmodewatcher_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param classname const char*
///
bool k_kirigami__platform__tabletmodewatcher_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
///
void k_kirigami__platform__tabletmodewatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__tabletmodewatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__tabletmodewatcher_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_kirigami__platform__tabletmodewatcher_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_kirigami__platform__tabletmodewatcher_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__tabletmodewatcher_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param signal const char*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Kirigami__Platform__TabletModeWatcher*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__tabletmodewatcher_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param param1 QObject*
///
void k_kirigami__platform__tabletmodewatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param callback void func(Kirigami__Platform__TabletModeWatcher* self, QObject* param1)
///
void k_kirigami__platform__tabletmodewatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Kirigami__Platform__TabletModeWatcher*
/// @param callback void func(Kirigami__Platform__TabletModeWatcher* self, const char* objectName)
///
void k_kirigami__platform__tabletmodewatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__TabletModeWatcher*
///
void k_kirigami__platform__tabletmodewatcher_delete(void* self);

#endif
