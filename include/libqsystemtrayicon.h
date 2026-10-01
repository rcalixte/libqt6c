#pragma once
#ifndef LIBQSYSTEMTRAYICON_H
#define LIBQSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html)

/// q_systemtrayicon_new constructs a new QSystemTrayIcon object.
///
QSystemTrayIcon* q_systemtrayicon_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html)

/// q_systemtrayicon_new2 constructs a new QSystemTrayIcon object.
///
/// @param icon QIcon*
///
QSystemTrayIcon* q_systemtrayicon_new2(const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html)

/// q_systemtrayicon_new3 constructs a new QSystemTrayIcon object.
///
/// @param parent QObject*
///
QSystemTrayIcon* q_systemtrayicon_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html)

/// q_systemtrayicon_new4 constructs a new QSystemTrayIcon object.
///
/// @param icon QIcon*
/// @param parent QObject*
///
QSystemTrayIcon* q_systemtrayicon_new4(const void* icon, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSystemTrayIcon*
///
const QMetaObject* q_systemtrayicon_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QSystemTrayIcon*
/// @param callback const QMetaObject* func(const QSystemTrayIcon* self)
///
void q_systemtrayicon_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSystemTrayIcon*
///
const QMetaObject* q_systemtrayicon_super_meta_object(const void* self);

/// @param self QSystemTrayIcon*
/// @param param1 const char*
///
void* q_systemtrayicon_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSystemTrayIcon*
/// @param callback void* func(QSystemTrayIcon* self, const char* param1)
///
void q_systemtrayicon_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSystemTrayIcon*
/// @param param1 const char*
///
void* q_systemtrayicon_super_metacast(void* self, const char* param1);

/// @param self QSystemTrayIcon*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_systemtrayicon_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSystemTrayIcon*
/// @param callback int32_t func(QSystemTrayIcon* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_systemtrayicon_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSystemTrayIcon*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_systemtrayicon_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_systemtrayicon_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setContextMenu)
///
/// @param self QSystemTrayIcon*
/// @param menu QMenu*
///
void q_systemtrayicon_set_context_menu(void* self, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#contextMenu)
///
/// @param self const QSystemTrayIcon*
///
QMenu* q_systemtrayicon_context_menu(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#icon)
///
/// @param self const QSystemTrayIcon*
///
QIcon* q_systemtrayicon_icon(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setIcon)
///
/// @param self QSystemTrayIcon*
/// @param icon QIcon*
///
void q_systemtrayicon_set_icon(void* self, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSystemTrayIcon*
///
const char* q_systemtrayicon_tool_tip(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setToolTip)
///
/// @param self QSystemTrayIcon*
/// @param tip const char*
///
void q_systemtrayicon_set_tool_tip(void* self, const char* tip);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#isSystemTrayAvailable)
///
bool q_systemtrayicon_is_system_tray_available();

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#supportsMessages)
///
bool q_systemtrayicon_supports_messages();

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#geometry)
///
/// @param self const QSystemTrayIcon*
///
QRect* q_systemtrayicon_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#isVisible)
///
/// @param self const QSystemTrayIcon*
///
bool q_systemtrayicon_is_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setVisible)
///
/// @param self QSystemTrayIcon*
/// @param visible bool
///
void q_systemtrayicon_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#show)
///
/// @param self QSystemTrayIcon*
///
void q_systemtrayicon_show(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#hide)
///
/// @param self QSystemTrayIcon*
///
void q_systemtrayicon_hide(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon QIcon*
///
void q_systemtrayicon_show_message(void* self, const char* title, const char* msg, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
///
void q_systemtrayicon_show_message2(void* self, const char* title, const char* msg);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
///
/// @param self QSystemTrayIcon*
/// @param reason enum QSystemTrayIcon__ActivationReason
///
void q_systemtrayicon_activated(void* self, int32_t reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, enum QSystemTrayIcon__ActivationReason reason)
///
void q_systemtrayicon_on_activated(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
///
/// @param self QSystemTrayIcon*
///
void q_systemtrayicon_message_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self)
///
void q_systemtrayicon_on_message_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
///
bool q_systemtrayicon_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSystemTrayIcon*
/// @param callback bool func(QSystemTrayIcon* self, QEvent* event)
///
void q_systemtrayicon_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// Base class method implementation
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
///
bool q_systemtrayicon_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_systemtrayicon_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_systemtrayicon_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon QIcon*
/// @param msecs int
///
void q_systemtrayicon_show_message4(void* self, const char* title, const char* msg, const void* icon, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon enum QSystemTrayIcon__MessageIcon
///
void q_systemtrayicon_show_message3(void* self, const char* title, const char* msg, int32_t icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon enum QSystemTrayIcon__MessageIcon
/// @param msecs int
///
void q_systemtrayicon_show_message42(void* self, const char* title, const char* msg, int32_t icon, int msecs);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSystemTrayIcon*
///
const char* q_systemtrayicon_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSystemTrayIcon*
/// @param name const char*
///
void q_systemtrayicon_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSystemTrayIcon*
///
bool q_systemtrayicon_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSystemTrayIcon*
///
bool q_systemtrayicon_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSystemTrayIcon*
///
bool q_systemtrayicon_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSystemTrayIcon*
///
bool q_systemtrayicon_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSystemTrayIcon*
/// @param b bool
///
bool q_systemtrayicon_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSystemTrayIcon*
///
QThread* q_systemtrayicon_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSystemTrayIcon*
/// @param thread QThread*
///
bool q_systemtrayicon_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSystemTrayIcon*
/// @param interval int
///
int32_t q_systemtrayicon_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSystemTrayIcon*
/// @param time int64_t of nanoseconds
///
int32_t q_systemtrayicon_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSystemTrayIcon*
/// @param id int
///
void q_systemtrayicon_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSystemTrayIcon*
/// @param id enum Qt__TimerId
///
void q_systemtrayicon_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSystemTrayIcon*
///
/// @return libqt_list of QObject*
///
libqt_list q_systemtrayicon_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSystemTrayIcon*
/// @param parent QObject*
///
void q_systemtrayicon_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSystemTrayIcon*
/// @param filterObj QObject*
///
void q_systemtrayicon_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSystemTrayIcon*
/// @param obj QObject*
///
void q_systemtrayicon_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_systemtrayicon_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_systemtrayicon_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSystemTrayIcon*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_systemtrayicon_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_systemtrayicon_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_systemtrayicon_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSystemTrayIcon*
///
bool q_systemtrayicon_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSystemTrayIcon*
/// @param receiver QObject*
///
bool q_systemtrayicon_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_systemtrayicon_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSystemTrayIcon*
///
void q_systemtrayicon_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSystemTrayIcon*
///
void q_systemtrayicon_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSystemTrayIcon*
/// @param name const char*
/// @param value QVariant*
///
bool q_systemtrayicon_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSystemTrayIcon*
/// @param name const char*
///
QVariant* q_systemtrayicon_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSystemTrayIcon*
///
const char** q_systemtrayicon_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSystemTrayIcon*
///
QBindingStorage* q_systemtrayicon_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSystemTrayIcon*
///
const QBindingStorage* q_systemtrayicon_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
///
void q_systemtrayicon_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self)
///
void q_systemtrayicon_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSystemTrayIcon*
///
QObject* q_systemtrayicon_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSystemTrayIcon*
/// @param classname const char*
///
bool q_systemtrayicon_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSystemTrayIcon*
///
void q_systemtrayicon_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSystemTrayIcon*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_systemtrayicon_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSystemTrayIcon*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_systemtrayicon_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_systemtrayicon_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_systemtrayicon_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSystemTrayIcon*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_systemtrayicon_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSystemTrayIcon*
/// @param signal const char*
///
bool q_systemtrayicon_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSystemTrayIcon*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_systemtrayicon_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSystemTrayIcon*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_systemtrayicon_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSystemTrayIcon*
/// @param receiver QObject*
/// @param member const char*
///
bool q_systemtrayicon_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
/// @param param1 QObject*
///
void q_systemtrayicon_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, QObject* param1)
///
void q_systemtrayicon_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_systemtrayicon_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_systemtrayicon_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback bool func(QSystemTrayIcon* self, QObject* watched, QEvent* event)
///
void q_systemtrayicon_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QTimerEvent*
///
void q_systemtrayicon_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QTimerEvent*
///
void q_systemtrayicon_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, QTimerEvent* event)
///
void q_systemtrayicon_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QChildEvent*
///
void q_systemtrayicon_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QChildEvent*
///
void q_systemtrayicon_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, QChildEvent* event)
///
void q_systemtrayicon_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
///
void q_systemtrayicon_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
///
void q_systemtrayicon_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, QEvent* event)
///
void q_systemtrayicon_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
///
void q_systemtrayicon_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
///
void q_systemtrayicon_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, QMetaMethod* signal)
///
void q_systemtrayicon_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
///
void q_systemtrayicon_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
///
void q_systemtrayicon_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, QMetaMethod* signal)
///
void q_systemtrayicon_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSystemTrayIcon*
///
QObject* q_systemtrayicon_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
///
QObject* q_systemtrayicon_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param callback QObject* func(QSystemTrayIcon* self)
///
void q_systemtrayicon_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSystemTrayIcon*
///
int32_t q_systemtrayicon_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
///
int32_t q_systemtrayicon_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param callback int32_t func(QSystemTrayIcon* self)
///
void q_systemtrayicon_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param signal const char*
///
int32_t q_systemtrayicon_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param signal const char*
///
int32_t q_systemtrayicon_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param callback int32_t func(QSystemTrayIcon* self, const char* signal)
///
void q_systemtrayicon_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param signal QMetaMethod*
///
bool q_systemtrayicon_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param signal QMetaMethod*
///
bool q_systemtrayicon_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSystemTrayIcon*
/// @param callback bool func(QSystemTrayIcon* self, QMetaMethod* signal)
///
void q_systemtrayicon_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSystemTrayIcon*
/// @param callback void func(QSystemTrayIcon* self, const char* objectName)
///
void q_systemtrayicon_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#dtor.QSystemTrayIcon)
///
/// Delete this object from C++ memory.
///
/// @param self QSystemTrayIcon*
///
void q_systemtrayicon_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#public-types)

typedef enum {
    QSYSTEMTRAYICON_ACTIVATIONREASON_UNKNOWN = 0,
    QSYSTEMTRAYICON_ACTIVATIONREASON_CONTEXT = 1,
    QSYSTEMTRAYICON_ACTIVATIONREASON_DOUBLECLICK = 2,
    QSYSTEMTRAYICON_ACTIVATIONREASON_TRIGGER = 3,
    QSYSTEMTRAYICON_ACTIVATIONREASON_MIDDLECLICK = 4
} QSystemTrayIcon__ActivationReason;

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#public-types)

typedef enum {
    QSYSTEMTRAYICON_MESSAGEICON_NOICON = 0,
    QSYSTEMTRAYICON_MESSAGEICON_INFORMATION = 1,
    QSYSTEMTRAYICON_MESSAGEICON_WARNING = 2,
    QSYSTEMTRAYICON_MESSAGEICON_CRITICAL = 3
} QSystemTrayIcon__MessageIcon;

#endif
