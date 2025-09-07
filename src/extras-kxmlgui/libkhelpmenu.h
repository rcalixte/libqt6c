#pragma once
#ifndef SRC_EXTRAS_KXMLGUIQT6C_LIBKHELPMENU_H
#define SRC_EXTRAS_KXMLGUIQT6C_LIBKHELPMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/khelpmenu.html

/// k_helpmenu_new constructs a new KHelpMenu object.
///
/// @param parent QWidget*
KHelpMenu* k_helpmenu_new(void* parent);

/// k_helpmenu_new2 constructs a new KHelpMenu object.
///
/// @param parent QWidget*
/// @param unused const char*
KHelpMenu* k_helpmenu_new2(void* parent, const char* unused);

/// k_helpmenu_new3 constructs a new KHelpMenu object.
///
KHelpMenu* k_helpmenu_new3();

/// k_helpmenu_new4 constructs a new KHelpMenu object.
///
/// @param parent QWidget*
/// @param aboutData KAboutData*
/// @param showWhatsThis bool
KHelpMenu* k_helpmenu_new4(void* parent, void* aboutData, bool showWhatsThis);

/// k_helpmenu_new5 constructs a new KHelpMenu object.
///
/// @param parent QWidget*
/// @param aboutData KAboutData*
KHelpMenu* k_helpmenu_new5(void* parent, void* aboutData);

/// k_helpmenu_new6 constructs a new KHelpMenu object.
///
/// @param parent QWidget*
/// @param unused const char*
/// @param showWhatsThis bool
KHelpMenu* k_helpmenu_new6(void* parent, const char* unused, bool showWhatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KHelpMenu*
const QMetaObject* k_helpmenu_meta_object(void* self);

/// @param self KHelpMenu*
/// @param param1 const char*
void* k_helpmenu_metacast(void* self, const char* param1);

/// @param self KHelpMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_helpmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KHelpMenu*
/// @param callback int32_t func(KHelpMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_helpmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KHelpMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_helpmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_helpmenu_tr(const char* s);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#setShowWhatsThis)
///
/// @param self KHelpMenu*
/// @param showWhatsThis bool
void k_helpmenu_set_show_whats_this(void* self, bool showWhatsThis);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#menu)
///
/// @param self KHelpMenu*
QMenu* k_helpmenu_menu(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#action)
///
/// @param self KHelpMenu*
/// @param id enum KHelpMenu__MenuId
QAction* k_helpmenu_action(void* self, int32_t id);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#appHelpActivated)
///
/// @param self KHelpMenu*
void k_helpmenu_app_help_activated(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#contextHelpActivated)
///
/// @param self KHelpMenu*
void k_helpmenu_context_help_activated(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#aboutApplication)
///
/// @param self KHelpMenu*
void k_helpmenu_about_application(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#aboutKDE)
///
/// @param self KHelpMenu*
void k_helpmenu_about_k_d_e(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#reportBug)
///
/// @param self KHelpMenu*
void k_helpmenu_report_bug(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#switchApplicationLanguage)
///
/// @param self KHelpMenu*
void k_helpmenu_switch_application_language(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#donate)
///
/// @param self KHelpMenu*
void k_helpmenu_donate(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#showAboutApplication)
///
/// @param self KHelpMenu*
void k_helpmenu_show_about_application(void* self);

/// [Qt documentation](https://api.kde.org/khelpmenu.html#showAboutApplication)
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self)
void k_helpmenu_on_show_about_application(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_helpmenu_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_helpmenu_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KHelpMenu*
const char* k_helpmenu_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KHelpMenu*
/// @param name char*
void k_helpmenu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KHelpMenu*
bool k_helpmenu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KHelpMenu*
bool k_helpmenu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KHelpMenu*
bool k_helpmenu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KHelpMenu*
bool k_helpmenu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KHelpMenu*
/// @param b bool
bool k_helpmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KHelpMenu*
QThread* k_helpmenu_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KHelpMenu*
/// @param thread QThread*
bool k_helpmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHelpMenu*
/// @param interval int
int32_t k_helpmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KHelpMenu*
/// @param id int
void k_helpmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KHelpMenu*
/// @param id enum Qt__TimerId
void k_helpmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KHelpMenu*
libqt_list /* of QObject* */ k_helpmenu_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KHelpMenu*
/// @param parent QObject*
void k_helpmenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KHelpMenu*
/// @param filterObj QObject*
void k_helpmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KHelpMenu*
/// @param obj QObject*
void k_helpmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_helpmenu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KHelpMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_helpmenu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_helpmenu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_helpmenu_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KHelpMenu*
void k_helpmenu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KHelpMenu*
void k_helpmenu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KHelpMenu*
/// @param name const char*
/// @param value QVariant*
bool k_helpmenu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KHelpMenu*
/// @param name const char*
QVariant* k_helpmenu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KHelpMenu*
const char** k_helpmenu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KHelpMenu*
QBindingStorage* k_helpmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KHelpMenu*
const QBindingStorage* k_helpmenu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHelpMenu*
void k_helpmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self)
void k_helpmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KHelpMenu*
QObject* k_helpmenu_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KHelpMenu*
/// @param classname const char*
bool k_helpmenu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KHelpMenu*
void k_helpmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KHelpMenu*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_helpmenu_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHelpMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_helpmenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_helpmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KHelpMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_helpmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHelpMenu*
/// @param param1 QObject*
void k_helpmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, QObject* param1)
void k_helpmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QEvent*
bool k_helpmenu_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QEvent*
bool k_helpmenu_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback bool func(KHelpMenu* self, QEvent* event)
void k_helpmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param watched QObject*
/// @param event QEvent*
bool k_helpmenu_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param watched QObject*
/// @param event QEvent*
bool k_helpmenu_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback bool func(KHelpMenu* self, QObject* watched, QEvent* event)
void k_helpmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QTimerEvent*
void k_helpmenu_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QTimerEvent*
void k_helpmenu_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, QTimerEvent* event)
void k_helpmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QChildEvent*
void k_helpmenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QChildEvent*
void k_helpmenu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, QChildEvent* event)
void k_helpmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QEvent*
void k_helpmenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param event QEvent*
void k_helpmenu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, QEvent* event)
void k_helpmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal QMetaMethod*
void k_helpmenu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal QMetaMethod*
void k_helpmenu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, QMetaMethod* signal)
void k_helpmenu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal QMetaMethod*
void k_helpmenu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal QMetaMethod*
void k_helpmenu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, QMetaMethod* signal)
void k_helpmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
QObject* k_helpmenu_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
QObject* k_helpmenu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback QObject* func()
void k_helpmenu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
int32_t k_helpmenu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
int32_t k_helpmenu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback int32_t func()
void k_helpmenu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal const char*
int32_t k_helpmenu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal const char*
int32_t k_helpmenu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback int32_t func(KHelpMenu* self, const char* signal)
void k_helpmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal QMetaMethod*
bool k_helpmenu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param signal QMetaMethod*
bool k_helpmenu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHelpMenu*
/// @param callback bool func(KHelpMenu* self, QMetaMethod* signal)
void k_helpmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KHelpMenu*
/// @param callback void func(KHelpMenu* self, const char* objectName)
void k_helpmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/khelpmenu.html#dtor.KHelpMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KHelpMenu*
void k_helpmenu_delete(void* self);

/// https://api.kde.org/khelpmenu.html#types

typedef enum {
    KHELPMENU_MENUID_MENUHELPCONTENTS = 0,
    KHELPMENU_MENUID_MENUWHATSTHIS = 1,
    KHELPMENU_MENUID_MENUABOUTAPP = 2,
    KHELPMENU_MENUID_MENUABOUTKDE = 3,
    KHELPMENU_MENUID_MENUREPORTBUG = 4,
    KHELPMENU_MENUID_MENUSWITCHLANGUAGE = 5,
    KHELPMENU_MENUID_MENUDONATE = 6
} KHelpMenu__MenuId;

#endif
