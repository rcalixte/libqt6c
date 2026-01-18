#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBPLUGIN_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html)

/// k_texteditor__plugin_new constructs a new KTextEditor::Plugin object.
///
/// @param parent QObject*
///
KTextEditor__Plugin* k_texteditor__plugin_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__Plugin*
///
const QMetaObject* k_texteditor__plugin_meta_object(void* self);

/// @param self KTextEditor__Plugin*
/// @param param1 const char*
///
void* k_texteditor__plugin_metacast(void* self, const char* param1);

/// @param self KTextEditor__Plugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__plugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__Plugin*
/// @param callback int32_t func(KTextEditor__Plugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texteditor__plugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__Plugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__plugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__plugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#createView)
///
/// @param self KTextEditor__Plugin*
/// @param mainWindow KTextEditor__MainWindow*
///
QObject* k_texteditor__plugin_create_view(void* self, void* mainWindow);

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#createView)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Plugin*
/// @param callback QObject* func(KTextEditor__Plugin* self, KTextEditor__MainWindow* mainWindow)
///
void k_texteditor__plugin_on_create_view(void* self, QObject* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#createView)
///
/// Base class method implementation
///
/// @param self KTextEditor__Plugin*
/// @param mainWindow KTextEditor__MainWindow*
///
QObject* k_texteditor__plugin_qbase_create_view(void* self, void* mainWindow);

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#configPages)
///
/// @param self KTextEditor__Plugin*
///
int32_t k_texteditor__plugin_config_pages(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#configPages)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Plugin*
/// @param callback int32_t func()
///
void k_texteditor__plugin_on_config_pages(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#configPages)
///
/// Base class method implementation
///
/// @param self KTextEditor__Plugin*
///
int32_t k_texteditor__plugin_qbase_config_pages(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#configPage)
///
/// @param self KTextEditor__Plugin*
/// @param number int
/// @param parent QWidget*
///
KTextEditor__ConfigPage* k_texteditor__plugin_config_page(void* self, int number, void* parent);

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#configPage)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__Plugin*
/// @param callback KTextEditor__ConfigPage* func(KTextEditor__Plugin* self, int number, QWidget* parent)
///
void k_texteditor__plugin_on_config_page(void* self, KTextEditor__ConfigPage* (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-plugin.html#configPage)
///
/// Base class method implementation
///
/// @param self KTextEditor__Plugin*
/// @param number int
/// @param parent QWidget*
///
KTextEditor__ConfigPage* k_texteditor__plugin_qbase_config_page(void* self, int number, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__plugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__plugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Plugin*
///
const char* k_texteditor__plugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Plugin*
/// @param name char*
///
void k_texteditor__plugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__Plugin*
///
bool k_texteditor__plugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__Plugin*
///
bool k_texteditor__plugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__Plugin*
///
bool k_texteditor__plugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__Plugin*
///
bool k_texteditor__plugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Plugin*
/// @param b bool
///
bool k_texteditor__plugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__Plugin*
///
QThread* k_texteditor__plugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Plugin*
/// @param thread QThread*
///
bool k_texteditor__plugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Plugin*
/// @param interval int
///
int32_t k_texteditor__plugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Plugin*
/// @param id int
///
void k_texteditor__plugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Plugin*
/// @param id enum Qt__TimerId
///
void k_texteditor__plugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__Plugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__plugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Plugin*
/// @param parent QObject*
///
void k_texteditor__plugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Plugin*
/// @param filterObj QObject*
///
void k_texteditor__plugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Plugin*
/// @param obj QObject*
///
void k_texteditor__plugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__plugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Plugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__plugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__plugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__plugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__Plugin*
///
void k_texteditor__plugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__Plugin*
///
void k_texteditor__plugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Plugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__plugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__Plugin*
/// @param name const char*
///
QVariant* k_texteditor__plugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Plugin*
///
const char** k_texteditor__plugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Plugin*
///
QBindingStorage* k_texteditor__plugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Plugin*
///
const QBindingStorage* k_texteditor__plugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Plugin*
///
void k_texteditor__plugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self)
///
void k_texteditor__plugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__Plugin*
///
QObject* k_texteditor__plugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__Plugin*
/// @param classname const char*
///
bool k_texteditor__plugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Plugin*
///
void k_texteditor__plugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Plugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_texteditor__plugin_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Plugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__plugin_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__plugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Plugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__plugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Plugin*
/// @param param1 QObject*
///
void k_texteditor__plugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, QObject* param1)
///
void k_texteditor__plugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QEvent*
///
bool k_texteditor__plugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QEvent*
///
bool k_texteditor__plugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback bool func(KTextEditor__Plugin* self, QEvent* event)
///
void k_texteditor__plugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__plugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__plugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback bool func(KTextEditor__Plugin* self, QObject* watched, QEvent* event)
///
void k_texteditor__plugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QTimerEvent*
///
void k_texteditor__plugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QTimerEvent*
///
void k_texteditor__plugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, QTimerEvent* event)
///
void k_texteditor__plugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QChildEvent*
///
void k_texteditor__plugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QChildEvent*
///
void k_texteditor__plugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, QChildEvent* event)
///
void k_texteditor__plugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QEvent*
///
void k_texteditor__plugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param event QEvent*
///
void k_texteditor__plugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, QEvent* event)
///
void k_texteditor__plugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal QMetaMethod*
///
void k_texteditor__plugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal QMetaMethod*
///
void k_texteditor__plugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, QMetaMethod* signal)
///
void k_texteditor__plugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal QMetaMethod*
///
void k_texteditor__plugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal QMetaMethod*
///
void k_texteditor__plugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, QMetaMethod* signal)
///
void k_texteditor__plugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
///
QObject* k_texteditor__plugin_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
///
QObject* k_texteditor__plugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback QObject* func()
///
void k_texteditor__plugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
///
int32_t k_texteditor__plugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
///
int32_t k_texteditor__plugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback int32_t func()
///
void k_texteditor__plugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal const char*
///
int32_t k_texteditor__plugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal const char*
///
int32_t k_texteditor__plugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback int32_t func(KTextEditor__Plugin* self, const char* signal)
///
void k_texteditor__plugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal QMetaMethod*
///
bool k_texteditor__plugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param signal QMetaMethod*
///
bool k_texteditor__plugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Plugin*
/// @param callback bool func(KTextEditor__Plugin* self, QMetaMethod* signal)
///
void k_texteditor__plugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Plugin*
/// @param callback void func(KTextEditor__Plugin* self, const char* objectName)
///
void k_texteditor__plugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Plugin*
///
void k_texteditor__plugin_delete(void* self);

#endif
