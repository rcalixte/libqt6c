#pragma once
#ifndef SRCQT6C_LIBQSYSTEMTRAYICON_H
#define SRCQT6C_LIBQSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsystemtrayicon.html

/// q_systemtrayicon_new constructs a new QSystemTrayIcon object.
///
QSystemTrayIcon* q_systemtrayicon_new();

/// q_systemtrayicon_new2 constructs a new QSystemTrayIcon object.
///
/// @param icon QIcon*
QSystemTrayIcon* q_systemtrayicon_new2(void* icon);

/// q_systemtrayicon_new3 constructs a new QSystemTrayIcon object.
///
/// @param parent QObject*
QSystemTrayIcon* q_systemtrayicon_new3(void* parent);

/// q_systemtrayicon_new4 constructs a new QSystemTrayIcon object.
///
/// @param icon QIcon*
/// @param parent QObject*
QSystemTrayIcon* q_systemtrayicon_new4(void* icon, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSystemTrayIcon*
const QMetaObject* q_systemtrayicon_meta_object(void* self);

/// @param self QSystemTrayIcon*
/// @param param1 const char*
void* q_systemtrayicon_metacast(void* self, const char* param1);

/// @param self QSystemTrayIcon*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_systemtrayicon_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSystemTrayIcon*
/// @param callback int32_t fn(QSystemTrayIcon*, enum QMetaObject__Call, int, void*)
void q_systemtrayicon_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSystemTrayIcon*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_systemtrayicon_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_systemtrayicon_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setContextMenu)
///
/// @param self QSystemTrayIcon*
/// @param menu QMenu*
void q_systemtrayicon_set_context_menu(void* self, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#contextMenu)
///
/// @param self QSystemTrayIcon*
QMenu* q_systemtrayicon_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#icon)
///
/// @param self QSystemTrayIcon*
QIcon* q_systemtrayicon_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setIcon)
///
/// @param self QSystemTrayIcon*
/// @param icon QIcon*
void q_systemtrayicon_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSystemTrayIcon*
const char* q_systemtrayicon_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setToolTip)
///
/// @param self QSystemTrayIcon*
/// @param tip const char*
void q_systemtrayicon_set_tool_tip(void* self, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#isSystemTrayAvailable)
///
bool q_systemtrayicon_is_system_tray_available();

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#supportsMessages)
///
bool q_systemtrayicon_supports_messages();

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#geometry)
///
/// @param self QSystemTrayIcon*
QRect* q_systemtrayicon_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#isVisible)
///
/// @param self QSystemTrayIcon*
bool q_systemtrayicon_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setVisible)
///
/// @param self QSystemTrayIcon*
/// @param visible bool
void q_systemtrayicon_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#show)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#hide)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon QIcon*
void q_systemtrayicon_show_message(void* self, const char* title, const char* msg, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
void q_systemtrayicon_show_message2(void* self, const char* title, const char* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
///
/// @param self QSystemTrayIcon*
/// @param reason enum QSystemTrayIcon__ActivationReason
void q_systemtrayicon_activated(void* self, int64_t reason);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, enum QSystemTrayIcon__ActivationReason)
void q_systemtrayicon_on_activated(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_message_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*)
void q_systemtrayicon_on_message_clicked(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
bool q_systemtrayicon_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSystemTrayIcon*
/// @param callback bool fn(QSystemTrayIcon*, QEvent*)
void q_systemtrayicon_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// Base class method implementation
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
bool q_systemtrayicon_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_systemtrayicon_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_systemtrayicon_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon QIcon*
/// @param msecs int
void q_systemtrayicon_show_message4(void* self, const char* title, const char* msg, void* icon, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon enum QSystemTrayIcon__MessageIcon
void q_systemtrayicon_show_message3(void* self, const char* title, const char* msg, int64_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// @param self QSystemTrayIcon*
/// @param title const char*
/// @param msg const char*
/// @param icon enum QSystemTrayIcon__MessageIcon
/// @param msecs int
void q_systemtrayicon_show_message42(void* self, const char* title, const char* msg, int64_t icon, int msecs);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSystemTrayIcon*
const char* q_systemtrayicon_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSystemTrayIcon*
/// @param name char*
void q_systemtrayicon_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSystemTrayIcon*
bool q_systemtrayicon_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSystemTrayIcon*
bool q_systemtrayicon_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSystemTrayIcon*
bool q_systemtrayicon_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSystemTrayIcon*
bool q_systemtrayicon_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSystemTrayIcon*
/// @param b bool
bool q_systemtrayicon_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSystemTrayIcon*
QThread* q_systemtrayicon_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSystemTrayIcon*
/// @param thread QThread*
bool q_systemtrayicon_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSystemTrayIcon*
/// @param interval int
int32_t q_systemtrayicon_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSystemTrayIcon*
/// @param id int
void q_systemtrayicon_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSystemTrayIcon*
/// @param id enum Qt__TimerId
void q_systemtrayicon_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSystemTrayIcon*
libqt_list /* of QObject* */ q_systemtrayicon_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSystemTrayIcon*
/// @param parent QObject*
void q_systemtrayicon_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSystemTrayIcon*
/// @param filterObj QObject*
void q_systemtrayicon_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSystemTrayIcon*
/// @param obj QObject*
void q_systemtrayicon_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_systemtrayicon_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSystemTrayIcon*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_systemtrayicon_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_systemtrayicon_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_systemtrayicon_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSystemTrayIcon*
/// @param name const char*
/// @param value QVariant*
bool q_systemtrayicon_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSystemTrayIcon*
/// @param name const char*
QVariant* q_systemtrayicon_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSystemTrayIcon*
const char** q_systemtrayicon_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSystemTrayIcon*
QBindingStorage* q_systemtrayicon_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSystemTrayIcon*
const QBindingStorage* q_systemtrayicon_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*)
void q_systemtrayicon_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSystemTrayIcon*
QObject* q_systemtrayicon_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSystemTrayIcon*
/// @param classname const char*
bool q_systemtrayicon_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSystemTrayIcon*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_systemtrayicon_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSystemTrayIcon*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_systemtrayicon_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_systemtrayicon_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSystemTrayIcon*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_systemtrayicon_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
/// @param param1 QObject*
void q_systemtrayicon_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, QObject*)
void q_systemtrayicon_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param watched QObject*
/// @param event QEvent*
bool q_systemtrayicon_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param watched QObject*
/// @param event QEvent*
bool q_systemtrayicon_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback bool fn(QSystemTrayIcon*, QObject*, QEvent*)
void q_systemtrayicon_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QTimerEvent*
void q_systemtrayicon_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QTimerEvent*
void q_systemtrayicon_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, QTimerEvent*)
void q_systemtrayicon_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QChildEvent*
void q_systemtrayicon_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QChildEvent*
void q_systemtrayicon_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, QChildEvent*)
void q_systemtrayicon_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
void q_systemtrayicon_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param event QEvent*
void q_systemtrayicon_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, QEvent*)
void q_systemtrayicon_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
void q_systemtrayicon_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
void q_systemtrayicon_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, QMetaMethod*)
void q_systemtrayicon_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
void q_systemtrayicon_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
void q_systemtrayicon_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, QMetaMethod*)
void q_systemtrayicon_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
QObject* q_systemtrayicon_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
QObject* q_systemtrayicon_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback QObject* fn()
void q_systemtrayicon_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
int32_t q_systemtrayicon_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
int32_t q_systemtrayicon_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback int32_t fn()
void q_systemtrayicon_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal const char*
int32_t q_systemtrayicon_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal const char*
int32_t q_systemtrayicon_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback int32_t fn(QSystemTrayIcon*, const char*)
void q_systemtrayicon_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
bool q_systemtrayicon_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param signal QMetaMethod*
bool q_systemtrayicon_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSystemTrayIcon*
/// @param callback bool fn(QSystemTrayIcon*, QMetaMethod*)
void q_systemtrayicon_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSystemTrayIcon*
/// @param callback void fn(QSystemTrayIcon*, const char*)
void q_systemtrayicon_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#dtor.QSystemTrayIcon)
///
/// Delete this object from C++ memory.
///
/// @param self QSystemTrayIcon*
void q_systemtrayicon_delete(void* self);

/// https://doc.qt.io/qt-6/qsystemtrayicon.html#types

typedef enum {
    QSYSTEMTRAYICON_ACTIVATIONREASON_UNKNOWN = 0,
    QSYSTEMTRAYICON_ACTIVATIONREASON_CONTEXT = 1,
    QSYSTEMTRAYICON_ACTIVATIONREASON_DOUBLECLICK = 2,
    QSYSTEMTRAYICON_ACTIVATIONREASON_TRIGGER = 3,
    QSYSTEMTRAYICON_ACTIVATIONREASON_MIDDLECLICK = 4
} QSystemTrayIcon__ActivationReason;

typedef enum {
    QSYSTEMTRAYICON_MESSAGEICON_NOICON = 0,
    QSYSTEMTRAYICON_MESSAGEICON_INFORMATION = 1,
    QSYSTEMTRAYICON_MESSAGEICON_WARNING = 2,
    QSYSTEMTRAYICON_MESSAGEICON_CRITICAL = 3
} QSystemTrayIcon__MessageIcon;

#endif
