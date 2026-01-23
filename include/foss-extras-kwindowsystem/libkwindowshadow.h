#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWSHADOW_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWSHADOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwindowshadowtile.html)

/// k_windowshadowtile_new constructs a new KWindowShadowTile object.
///
KWindowShadowTile* k_windowshadowtile_new();

/// [Upstream resources](https://api.kde.org/kwindowshadowtile.html#image)
///
/// @param self KWindowShadowTile*
///
QImage* k_windowshadowtile_image(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadowtile.html#setImage)
///
/// @param self KWindowShadowTile*
/// @param image QImage*
///
void k_windowshadowtile_set_image(void* self, void* image);

/// [Upstream resources](https://api.kde.org/kwindowshadowtile.html#isCreated)
///
/// @param self KWindowShadowTile*
///
bool k_windowshadowtile_is_created(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadowtile.html#create)
///
/// @param self KWindowShadowTile*
///
bool k_windowshadowtile_create(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadowtile.html#dtor.KWindowShadowTile)
///
/// Delete this object from C++ memory.
///
/// @param self KWindowShadowTile*
///
void k_windowshadowtile_delete(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html)

/// k_windowshadow_new constructs a new KWindowShadow object.
///
KWindowShadow* k_windowshadow_new();

/// [Upstream resources](https://api.kde.org/kwindowshadow.html)

/// k_windowshadow_new2 constructs a new KWindowShadow object.
///
/// @param parent QObject*
///
KWindowShadow* k_windowshadow_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KWindowShadow*
///
const QMetaObject* k_windowshadow_meta_object(void* self);

/// @param self KWindowShadow*
/// @param param1 const char*
///
void* k_windowshadow_metacast(void* self, const char* param1);

/// @param self KWindowShadow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_windowshadow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KWindowShadow*
/// @param callback int32_t func(KWindowShadow* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_windowshadow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KWindowShadow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_windowshadow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_windowshadow_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#padding)
///
/// @param self KWindowShadow*
///
QMargins* k_windowshadow_padding(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#setPadding)
///
/// @param self KWindowShadow*
/// @param padding QMargins*
///
void k_windowshadow_set_padding(void* self, void* padding);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#window)
///
/// @param self KWindowShadow*
///
QWindow* k_windowshadow_window(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#setWindow)
///
/// @param self KWindowShadow*
/// @param window QWindow*
///
void k_windowshadow_set_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#isCreated)
///
/// @param self KWindowShadow*
///
bool k_windowshadow_is_created(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#create)
///
/// @param self KWindowShadow*
///
bool k_windowshadow_create(void* self);

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#destroy)
///
/// @param self KWindowShadow*
///
void k_windowshadow_destroy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_windowshadow_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_windowshadow_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowShadow*
///
const char* k_windowshadow_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWindowShadow*
/// @param name char*
///
void k_windowshadow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KWindowShadow*
///
bool k_windowshadow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KWindowShadow*
///
bool k_windowshadow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KWindowShadow*
///
bool k_windowshadow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KWindowShadow*
///
bool k_windowshadow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KWindowShadow*
/// @param b bool
///
bool k_windowshadow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KWindowShadow*
///
QThread* k_windowshadow_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWindowShadow*
/// @param thread QThread*
///
bool k_windowshadow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWindowShadow*
/// @param interval int
///
int32_t k_windowshadow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWindowShadow*
/// @param time int64_t of nanoseconds
///
int32_t k_windowshadow_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWindowShadow*
/// @param id int
///
void k_windowshadow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWindowShadow*
/// @param id enum Qt__TimerId
///
void k_windowshadow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KWindowShadow*
///
/// @return libqt_list of QObject*
///
libqt_list k_windowshadow_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KWindowShadow*
/// @param parent QObject*
///
void k_windowshadow_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KWindowShadow*
/// @param filterObj QObject*
///
void k_windowshadow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KWindowShadow*
/// @param obj QObject*
///
void k_windowshadow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_windowshadow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWindowShadow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_windowshadow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_windowshadow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_windowshadow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KWindowShadow*
///
void k_windowshadow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KWindowShadow*
///
void k_windowshadow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWindowShadow*
/// @param name const char*
/// @param value QVariant*
///
bool k_windowshadow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KWindowShadow*
/// @param name const char*
///
QVariant* k_windowshadow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowShadow*
///
const char** k_windowshadow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWindowShadow*
///
QBindingStorage* k_windowshadow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWindowShadow*
///
const QBindingStorage* k_windowshadow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowShadow*
///
void k_windowshadow_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self)
///
void k_windowshadow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KWindowShadow*
///
QObject* k_windowshadow_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KWindowShadow*
/// @param classname const char*
///
bool k_windowshadow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWindowShadow*
///
void k_windowshadow_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWindowShadow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_windowshadow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWindowShadow*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_windowshadow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWindowShadow*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_windowshadow_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_windowshadow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWindowShadow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_windowshadow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowShadow*
/// @param param1 QObject*
///
void k_windowshadow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, QObject* param1)
///
void k_windowshadow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QEvent*
///
bool k_windowshadow_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QEvent*
///
bool k_windowshadow_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback bool func(KWindowShadow* self, QEvent* event)
///
void k_windowshadow_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_windowshadow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_windowshadow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback bool func(KWindowShadow* self, QObject* watched, QEvent* event)
///
void k_windowshadow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QTimerEvent*
///
void k_windowshadow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QTimerEvent*
///
void k_windowshadow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, QTimerEvent* event)
///
void k_windowshadow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QChildEvent*
///
void k_windowshadow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QChildEvent*
///
void k_windowshadow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, QChildEvent* event)
///
void k_windowshadow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QEvent*
///
void k_windowshadow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param event QEvent*
///
void k_windowshadow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, QEvent* event)
///
void k_windowshadow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal QMetaMethod*
///
void k_windowshadow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal QMetaMethod*
///
void k_windowshadow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, QMetaMethod* signal)
///
void k_windowshadow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal QMetaMethod*
///
void k_windowshadow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal QMetaMethod*
///
void k_windowshadow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, QMetaMethod* signal)
///
void k_windowshadow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
///
QObject* k_windowshadow_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
///
QObject* k_windowshadow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback QObject* func()
///
void k_windowshadow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
///
int32_t k_windowshadow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
///
int32_t k_windowshadow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback int32_t func()
///
void k_windowshadow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal const char*
///
int32_t k_windowshadow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal const char*
///
int32_t k_windowshadow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback int32_t func(KWindowShadow* self, const char* signal)
///
void k_windowshadow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal QMetaMethod*
///
bool k_windowshadow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param signal QMetaMethod*
///
bool k_windowshadow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWindowShadow*
/// @param callback bool func(KWindowShadow* self, QMetaMethod* signal)
///
void k_windowshadow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KWindowShadow*
/// @param callback void func(KWindowShadow* self, const char* objectName)
///
void k_windowshadow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kwindowshadow.html#dtor.KWindowShadow)
///
/// Delete this object from C++ memory.
///
/// @param self KWindowShadow*
///
void k_windowshadow_delete(void* self);

#endif
