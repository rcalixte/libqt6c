#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKXMLGUIFACTORY_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKXMLGUIFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html)

/// k_xmlguifactory_new constructs a new KXMLGUIFactory object.
///
/// @param builder KXMLGUIBuilder*
///
KXMLGUIFactory* k_xmlguifactory_new(void* builder);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html)

/// k_xmlguifactory_new2 constructs a new KXMLGUIFactory object.
///
/// @param builder KXMLGUIBuilder*
/// @param parent QObject*
///
KXMLGUIFactory* k_xmlguifactory_new2(void* builder, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KXMLGUIFactory*
///
const QMetaObject* k_xmlguifactory_meta_object(void* self);

/// @param self KXMLGUIFactory*
/// @param param1 const char*
///
void* k_xmlguifactory_metacast(void* self, const char* param1);

/// @param self KXMLGUIFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_xmlguifactory_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KXMLGUIFactory*
/// @param callback int32_t func(KXMLGUIFactory* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_xmlguifactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KXMLGUIFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_xmlguifactory_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_xmlguifactory_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#readConfigFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param filename const char*
///
const char* k_xmlguifactory_read_config_file(const char* filename);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
///
/// @param doc QDomDocument*
/// @param filename const char*
///
bool k_xmlguifactory_save_config_file(void* doc, const char* filename);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#actionPropertiesElement)
///
/// @param doc QDomDocument*
///
QDomElement* k_xmlguifactory_action_properties_element(void* doc);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#findActionByName)
///
/// @param elem QDomElement*
/// @param sName const char*
/// @param create bool
///
QDomElement* k_xmlguifactory_find_action_by_name(void* elem, const char* sName, bool create);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#addClient)
///
/// @param self KXMLGUIFactory*
/// @param client KXMLGUIClient*
///
void k_xmlguifactory_add_client(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#removeClient)
///
/// @param self KXMLGUIFactory*
/// @param client KXMLGUIClient*
///
void k_xmlguifactory_remove_client(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#plugActionList)
///
/// @param self KXMLGUIFactory*
/// @param client KXMLGUIClient*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_xmlguifactory_plug_action_list(void* self, void* client, const char* name, libqt_list /* of QAction* */ actionList);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#unplugActionList)
///
/// @param self KXMLGUIFactory*
/// @param client KXMLGUIClient*
/// @param name const char*
///
void k_xmlguifactory_unplug_action_list(void* self, void* client, const char* name);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#clients)
///
/// @param self KXMLGUIFactory*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_xmlguifactory_clients(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#container)
///
/// @param self KXMLGUIFactory*
/// @param containerName const char*
/// @param client KXMLGUIClient*
///
QWidget* k_xmlguifactory_container(void* self, const char* containerName, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#containers)
///
/// @param self KXMLGUIFactory*
/// @param tagName const char*
///
/// @return libqt_list of QWidget*
///
libqt_list k_xmlguifactory_containers(void* self, const char* tagName);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#reset)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_reset(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#resetContainer)
///
/// @param self KXMLGUIFactory*
/// @param containerName const char*
///
void k_xmlguifactory_reset_container(void* self, const char* containerName);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#refreshActionProperties)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_refresh_action_properties(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#showConfigureShortcutsDialog)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_show_configure_shortcuts_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#changeShortcutScheme)
///
/// @param self KXMLGUIFactory*
/// @param scheme const char*
///
void k_xmlguifactory_change_shortcut_scheme(void* self, const char* scheme);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientAdded)
///
/// @param self KXMLGUIFactory*
/// @param client KXMLGUIClient*
///
void k_xmlguifactory_client_added(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientAdded)
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, KXMLGUIClient* client)
///
void k_xmlguifactory_on_client_added(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientRemoved)
///
/// @param self KXMLGUIFactory*
/// @param client KXMLGUIClient*
///
void k_xmlguifactory_client_removed(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientRemoved)
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, KXMLGUIClient* client)
///
void k_xmlguifactory_on_client_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#makingChanges)
///
/// @param self KXMLGUIFactory*
/// @param param1 bool
///
void k_xmlguifactory_making_changes(void* self, bool param1);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#makingChanges)
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, bool param1)
///
void k_xmlguifactory_on_making_changes(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_shortcuts_saved(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self)
///
void k_xmlguifactory_on_shortcuts_saved(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_xmlguifactory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_xmlguifactory_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#readConfigFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param filename const char*
/// @param componentName const char*
///
const char* k_xmlguifactory_read_config_file2(const char* filename, const char* componentName);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
///
/// @param doc QDomDocument*
/// @param filename const char*
/// @param componentName const char*
///
bool k_xmlguifactory_save_config_file3(void* doc, const char* filename, const char* componentName);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#container)
///
/// @param self KXMLGUIFactory*
/// @param containerName const char*
/// @param client KXMLGUIClient*
/// @param useTagName bool
///
QWidget* k_xmlguifactory_container3(void* self, const char* containerName, void* client, bool useTagName);

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#resetContainer)
///
/// @param self KXMLGUIFactory*
/// @param containerName const char*
/// @param useTagName bool
///
void k_xmlguifactory_reset_container2(void* self, const char* containerName, bool useTagName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KXMLGUIFactory*
///
const char* k_xmlguifactory_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KXMLGUIFactory*
/// @param name char*
///
void k_xmlguifactory_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KXMLGUIFactory*
///
bool k_xmlguifactory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KXMLGUIFactory*
///
bool k_xmlguifactory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KXMLGUIFactory*
///
bool k_xmlguifactory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KXMLGUIFactory*
///
bool k_xmlguifactory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KXMLGUIFactory*
/// @param b bool
///
bool k_xmlguifactory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KXMLGUIFactory*
///
QThread* k_xmlguifactory_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXMLGUIFactory*
/// @param thread QThread*
///
bool k_xmlguifactory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXMLGUIFactory*
/// @param interval int
///
int32_t k_xmlguifactory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXMLGUIFactory*
/// @param id int
///
void k_xmlguifactory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXMLGUIFactory*
/// @param id enum Qt__TimerId
///
void k_xmlguifactory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KXMLGUIFactory*
///
/// @return libqt_list of QObject*
///
libqt_list k_xmlguifactory_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KXMLGUIFactory*
/// @param parent QObject*
///
void k_xmlguifactory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KXMLGUIFactory*
/// @param filterObj QObject*
///
void k_xmlguifactory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KXMLGUIFactory*
/// @param obj QObject*
///
void k_xmlguifactory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_xmlguifactory_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KXMLGUIFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_xmlguifactory_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_xmlguifactory_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_xmlguifactory_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KXMLGUIFactory*
/// @param name const char*
/// @param value QVariant*
///
bool k_xmlguifactory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KXMLGUIFactory*
/// @param name const char*
///
QVariant* k_xmlguifactory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KXMLGUIFactory*
///
const char** k_xmlguifactory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXMLGUIFactory*
///
QBindingStorage* k_xmlguifactory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXMLGUIFactory*
///
const QBindingStorage* k_xmlguifactory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self)
///
void k_xmlguifactory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KXMLGUIFactory*
///
QObject* k_xmlguifactory_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KXMLGUIFactory*
/// @param classname const char*
///
bool k_xmlguifactory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXMLGUIFactory*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_xmlguifactory_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXMLGUIFactory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_xmlguifactory_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_xmlguifactory_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KXMLGUIFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_xmlguifactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMLGUIFactory*
/// @param param1 QObject*
///
void k_xmlguifactory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, QObject* param1)
///
void k_xmlguifactory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QEvent*
///
bool k_xmlguifactory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QEvent*
///
bool k_xmlguifactory_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback bool func(KXMLGUIFactory* self, QEvent* event)
///
void k_xmlguifactory_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_xmlguifactory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_xmlguifactory_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback bool func(KXMLGUIFactory* self, QObject* watched, QEvent* event)
///
void k_xmlguifactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QTimerEvent*
///
void k_xmlguifactory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QTimerEvent*
///
void k_xmlguifactory_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, QTimerEvent* event)
///
void k_xmlguifactory_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QChildEvent*
///
void k_xmlguifactory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QChildEvent*
///
void k_xmlguifactory_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, QChildEvent* event)
///
void k_xmlguifactory_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QEvent*
///
void k_xmlguifactory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param event QEvent*
///
void k_xmlguifactory_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, QEvent* event)
///
void k_xmlguifactory_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal QMetaMethod*
///
void k_xmlguifactory_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal QMetaMethod*
///
void k_xmlguifactory_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, QMetaMethod* signal)
///
void k_xmlguifactory_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal QMetaMethod*
///
void k_xmlguifactory_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal QMetaMethod*
///
void k_xmlguifactory_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, QMetaMethod* signal)
///
void k_xmlguifactory_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
///
QObject* k_xmlguifactory_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
///
QObject* k_xmlguifactory_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback QObject* func()
///
void k_xmlguifactory_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
///
int32_t k_xmlguifactory_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
///
int32_t k_xmlguifactory_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback int32_t func()
///
void k_xmlguifactory_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal const char*
///
int32_t k_xmlguifactory_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal const char*
///
int32_t k_xmlguifactory_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback int32_t func(KXMLGUIFactory* self, const char* signal)
///
void k_xmlguifactory_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal QMetaMethod*
///
bool k_xmlguifactory_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param signal QMetaMethod*
///
bool k_xmlguifactory_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMLGUIFactory*
/// @param callback bool func(KXMLGUIFactory* self, QMetaMethod* signal)
///
void k_xmlguifactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KXMLGUIFactory*
/// @param callback void func(KXMLGUIFactory* self, const char* objectName)
///
void k_xmlguifactory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kxmlguifactory.html#dtor.KXMLGUIFactory)
///
/// Delete this object from C++ memory.
///
/// @param self KXMLGUIFactory*
///
void k_xmlguifactory_delete(void* self);

#endif
