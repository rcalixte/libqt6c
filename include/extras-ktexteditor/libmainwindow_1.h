#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMAINWINDOW_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-mainwindow.html

/// k_texteditor__mainwindow_new constructs a new KTextEditor::MainWindow object.
///
/// @param parent QObject*
KTextEditor__MainWindow* k_texteditor__mainwindow_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__MainWindow*
const QMetaObject* k_texteditor__mainwindow_meta_object(void* self);

/// @param self KTextEditor__MainWindow*
/// @param param1 const char*
void* k_texteditor__mainwindow_metacast(void* self, const char* param1);

/// @param self KTextEditor__MainWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__mainwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__MainWindow*
/// @param callback int32_t func(KTextEditor__MainWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_texteditor__mainwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__MainWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__mainwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_texteditor__mainwindow_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#window)
///
/// @param self KTextEditor__MainWindow*
QWidget* k_texteditor__mainwindow_window(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#guiFactory)
///
/// @param self KTextEditor__MainWindow*
KXMLGUIFactory* k_texteditor__mainwindow_gui_factory(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#unhandledShortcutOverride)
///
/// @param self KTextEditor__MainWindow*
/// @param e QEvent*
void k_texteditor__mainwindow_unhandled_shortcut_override(void* self, void* e);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#unhandledShortcutOverride)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QEvent* e)
void k_texteditor__mainwindow_on_unhandled_shortcut_override(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#views)
///
/// @param self KTextEditor__MainWindow*
libqt_list /* of KTextEditor__View* */ k_texteditor__mainwindow_views(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#activeView)
///
/// @param self KTextEditor__MainWindow*
KTextEditor__View* k_texteditor__mainwindow_active_view(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#activateView)
///
/// @param self KTextEditor__MainWindow*
/// @param document KTextEditor__Document*
KTextEditor__View* k_texteditor__mainwindow_activate_view(void* self, void* document);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#openUrl)
///
/// @param self KTextEditor__MainWindow*
/// @param url QUrl*
KTextEditor__View* k_texteditor__mainwindow_open_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#closeView)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
bool k_texteditor__mainwindow_close_view(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#splitView)
///
/// @param self KTextEditor__MainWindow*
/// @param orientation enum Qt__Orientation
void k_texteditor__mainwindow_split_view(void* self, int32_t orientation);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#closeSplitView)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
bool k_texteditor__mainwindow_close_split_view(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#viewsInSameSplitView)
///
/// @param self KTextEditor__MainWindow*
/// @param view1 KTextEditor__View*
/// @param view2 KTextEditor__View*
bool k_texteditor__mainwindow_views_in_same_split_view(void* self, void* view1, void* view2);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#viewChanged)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
void k_texteditor__mainwindow_view_changed(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#viewChanged)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, KTextEditor__View* view)
void k_texteditor__mainwindow_on_view_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#viewCreated)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
void k_texteditor__mainwindow_view_created(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#viewCreated)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, KTextEditor__View* view)
void k_texteditor__mainwindow_on_view_created(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#createViewBar)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
QWidget* k_texteditor__mainwindow_create_view_bar(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#deleteViewBar)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
void k_texteditor__mainwindow_delete_view_bar(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#addWidgetToViewBar)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
/// @param bar QWidget*
void k_texteditor__mainwindow_add_widget_to_view_bar(void* self, void* view, void* bar);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#showViewBar)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
void k_texteditor__mainwindow_show_view_bar(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#hideViewBar)
///
/// @param self KTextEditor__MainWindow*
/// @param view KTextEditor__View*
void k_texteditor__mainwindow_hide_view_bar(void* self, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#createToolView)
///
/// @param self KTextEditor__MainWindow*
/// @param plugin KTextEditor__Plugin*
/// @param identifier const char*
/// @param pos enum KTextEditor__MainWindow__ToolViewPosition
/// @param icon QIcon*
/// @param text const char*
QWidget* k_texteditor__mainwindow_create_tool_view(void* self, void* plugin, const char* identifier, int32_t pos, void* icon, const char* text);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#moveToolView)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
/// @param pos enum KTextEditor__MainWindow__ToolViewPosition
bool k_texteditor__mainwindow_move_tool_view(void* self, void* widget, int32_t pos);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#showToolView)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
bool k_texteditor__mainwindow_show_tool_view(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#hideToolView)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
bool k_texteditor__mainwindow_hide_tool_view(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#showPluginConfigPage)
///
/// @param self KTextEditor__MainWindow*
/// @param plugin KTextEditor__Plugin*
/// @param page int
bool k_texteditor__mainwindow_show_plugin_config_page(void* self, void* plugin, int page);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#pluginView)
///
/// @param self KTextEditor__MainWindow*
/// @param name const char*
QObject* k_texteditor__mainwindow_plugin_view(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewCreated)
///
/// @param self KTextEditor__MainWindow*
/// @param name const char*
/// @param pluginView QObject*
void k_texteditor__mainwindow_plugin_view_created(void* self, const char* name, void* pluginView);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewCreated)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, const char* name, QObject* pluginView)
void k_texteditor__mainwindow_on_plugin_view_created(void* self, void (*callback)(void*, const char*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewDeleted)
///
/// @param self KTextEditor__MainWindow*
/// @param name const char*
/// @param pluginView QObject*
void k_texteditor__mainwindow_plugin_view_deleted(void* self, const char* name, void* pluginView);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#pluginViewDeleted)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, const char* name, QObject* pluginView)
void k_texteditor__mainwindow_on_plugin_view_deleted(void* self, void (*callback)(void*, const char*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#addWidget)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
bool k_texteditor__mainwindow_add_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#removeWidget)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
bool k_texteditor__mainwindow_remove_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#widgets)
///
/// @param self KTextEditor__MainWindow*
libqt_list /* of QWidget* */ k_texteditor__mainwindow_widgets(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#activeWidget)
///
/// @param self KTextEditor__MainWindow*
QWidget* k_texteditor__mainwindow_active_widget(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#activateWidget)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
void k_texteditor__mainwindow_activate_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#widgetAdded)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
void k_texteditor__mainwindow_widget_added(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#widgetAdded)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QWidget* widget)
void k_texteditor__mainwindow_on_widget_added(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#widgetRemoved)
///
/// @param self KTextEditor__MainWindow*
/// @param widget QWidget*
void k_texteditor__mainwindow_widget_removed(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#widgetRemoved)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QWidget* widget)
void k_texteditor__mainwindow_on_widget_removed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#showMessage)
///
/// @param self KTextEditor__MainWindow*
/// @param message libqt_map /* of const char* to QVariant* */
bool k_texteditor__mainwindow_show_message(void* self, libqt_map /* of const char* to QVariant* */ message);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_texteditor__mainwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_texteditor__mainwindow_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/ktexteditor-mainwindow.html#openUrl)
///
/// @param self KTextEditor__MainWindow*
/// @param url QUrl*
/// @param encoding const char*
KTextEditor__View* k_texteditor__mainwindow_open_url2(void* self, void* url, const char* encoding);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__MainWindow*
const char* k_texteditor__mainwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__MainWindow*
/// @param name char*
void k_texteditor__mainwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__MainWindow*
bool k_texteditor__mainwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__MainWindow*
bool k_texteditor__mainwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__MainWindow*
bool k_texteditor__mainwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__MainWindow*
bool k_texteditor__mainwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__MainWindow*
/// @param b bool
bool k_texteditor__mainwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__MainWindow*
QThread* k_texteditor__mainwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__MainWindow*
/// @param thread QThread*
bool k_texteditor__mainwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__MainWindow*
/// @param interval int
int32_t k_texteditor__mainwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__MainWindow*
/// @param id int
void k_texteditor__mainwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__MainWindow*
/// @param id enum Qt__TimerId
void k_texteditor__mainwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__MainWindow*
libqt_list /* of QObject* */ k_texteditor__mainwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__MainWindow*
/// @param parent QObject*
void k_texteditor__mainwindow_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__MainWindow*
/// @param filterObj QObject*
void k_texteditor__mainwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__MainWindow*
/// @param obj QObject*
void k_texteditor__mainwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_texteditor__mainwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__MainWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_texteditor__mainwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_texteditor__mainwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_texteditor__mainwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__MainWindow*
void k_texteditor__mainwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__MainWindow*
void k_texteditor__mainwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__MainWindow*
/// @param name const char*
/// @param value QVariant*
bool k_texteditor__mainwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__MainWindow*
/// @param name const char*
QVariant* k_texteditor__mainwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__MainWindow*
const char** k_texteditor__mainwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__MainWindow*
QBindingStorage* k_texteditor__mainwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__MainWindow*
const QBindingStorage* k_texteditor__mainwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__MainWindow*
void k_texteditor__mainwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self)
void k_texteditor__mainwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__MainWindow*
QObject* k_texteditor__mainwindow_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__MainWindow*
/// @param classname const char*
bool k_texteditor__mainwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__MainWindow*
void k_texteditor__mainwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__MainWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_texteditor__mainwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__MainWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_texteditor__mainwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__mainwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__MainWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__MainWindow*
/// @param param1 QObject*
void k_texteditor__mainwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QObject* param1)
void k_texteditor__mainwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QEvent*
bool k_texteditor__mainwindow_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QEvent*
bool k_texteditor__mainwindow_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback bool func(KTextEditor__MainWindow* self, QEvent* event)
void k_texteditor__mainwindow_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__mainwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__mainwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback bool func(KTextEditor__MainWindow* self, QObject* watched, QEvent* event)
void k_texteditor__mainwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QTimerEvent*
void k_texteditor__mainwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QTimerEvent*
void k_texteditor__mainwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QTimerEvent* event)
void k_texteditor__mainwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QChildEvent*
void k_texteditor__mainwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QChildEvent*
void k_texteditor__mainwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QChildEvent* event)
void k_texteditor__mainwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QEvent*
void k_texteditor__mainwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param event QEvent*
void k_texteditor__mainwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QEvent* event)
void k_texteditor__mainwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal QMetaMethod*
void k_texteditor__mainwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal QMetaMethod*
void k_texteditor__mainwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QMetaMethod* signal)
void k_texteditor__mainwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal QMetaMethod*
void k_texteditor__mainwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal QMetaMethod*
void k_texteditor__mainwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, QMetaMethod* signal)
void k_texteditor__mainwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
QObject* k_texteditor__mainwindow_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
QObject* k_texteditor__mainwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback QObject* func()
void k_texteditor__mainwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
int32_t k_texteditor__mainwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
int32_t k_texteditor__mainwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback int32_t func()
void k_texteditor__mainwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal const char*
int32_t k_texteditor__mainwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal const char*
int32_t k_texteditor__mainwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback int32_t func(KTextEditor__MainWindow* self, const char* signal)
void k_texteditor__mainwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal QMetaMethod*
bool k_texteditor__mainwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param signal QMetaMethod*
bool k_texteditor__mainwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__MainWindow*
/// @param callback bool func(KTextEditor__MainWindow* self, QMetaMethod* signal)
void k_texteditor__mainwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__MainWindow*
/// @param callback void func(KTextEditor__MainWindow* self, const char* objectName)
void k_texteditor__mainwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__MainWindow*
void k_texteditor__mainwindow_delete(void* self);

/// https://api.kde.org/mainwindow.html#types

typedef enum {
    KTEXTEDITOR_MAINWINDOW_TOOLVIEWPOSITION_LEFT = 0,
    KTEXTEDITOR_MAINWINDOW_TOOLVIEWPOSITION_RIGHT = 1,
    KTEXTEDITOR_MAINWINDOW_TOOLVIEWPOSITION_TOP = 2,
    KTEXTEDITOR_MAINWINDOW_TOOLVIEWPOSITION_BOTTOM = 3
} KTextEditor__MainWindow__ToolViewPosition;

#endif
