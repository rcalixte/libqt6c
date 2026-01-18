#pragma once
#ifndef SRC_UITOOLS_QT6C_LIBQUILOADER_H
#define SRC_UITOOLS_QT6C_LIBQUILOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html)

/// q_uiloader_new constructs a new QUiLoader object.
///
QUiLoader* q_uiloader_new();

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html)

/// q_uiloader_new2 constructs a new QUiLoader object.
///
/// @param parent QObject*
///
QUiLoader* q_uiloader_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QUiLoader*
///
const QMetaObject* q_uiloader_meta_object(void* self);

/// @param self QUiLoader*
/// @param param1 const char*
///
void* q_uiloader_metacast(void* self, const char* param1);

/// @param self QUiLoader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_uiloader_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QUiLoader*
/// @param callback int32_t func(QUiLoader* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_uiloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QUiLoader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_uiloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_uiloader_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#pluginPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUiLoader*
///
const char** q_uiloader_plugin_paths(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#clearPluginPaths)
///
/// @param self QUiLoader*
///
void q_uiloader_clear_plugin_paths(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#addPluginPath)
///
/// @param self QUiLoader*
/// @param path const char*
///
void q_uiloader_add_plugin_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#load)
///
/// @param self QUiLoader*
/// @param device QIODevice*
///
QWidget* q_uiloader_load(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#availableWidgets)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUiLoader*
///
const char** q_uiloader_available_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#availableLayouts)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUiLoader*
///
const char** q_uiloader_available_layouts(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createWidget)
///
/// @param self QUiLoader*
/// @param className const char*
/// @param parent QWidget*
/// @param name const char*
///
QWidget* q_uiloader_create_widget(void* self, const char* className, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self QUiLoader*
/// @param callback QWidget* func(QUiLoader* self, const char* className, QWidget* parent, const char* name)
///
void q_uiloader_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createWidget)
///
/// Base class method implementation
///
/// @param self QUiLoader*
/// @param className const char*
/// @param parent QWidget*
/// @param name const char*
///
QWidget* q_uiloader_qbase_create_widget(void* self, const char* className, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createLayout)
///
/// @param self QUiLoader*
/// @param className const char*
/// @param parent QObject*
/// @param name const char*
///
QLayout* q_uiloader_create_layout(void* self, const char* className, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createLayout)
///
/// Allows for overriding the related default method
///
/// @param self QUiLoader*
/// @param callback QLayout* func(QUiLoader* self, const char* className, QObject* parent, const char* name)
///
void q_uiloader_on_create_layout(void* self, QLayout* (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createLayout)
///
/// Base class method implementation
///
/// @param self QUiLoader*
/// @param className const char*
/// @param parent QObject*
/// @param name const char*
///
QLayout* q_uiloader_qbase_create_layout(void* self, const char* className, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createActionGroup)
///
/// @param self QUiLoader*
/// @param parent QObject*
/// @param name const char*
///
QActionGroup* q_uiloader_create_action_group(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createActionGroup)
///
/// Allows for overriding the related default method
///
/// @param self QUiLoader*
/// @param callback QActionGroup* func(QUiLoader* self, QObject* parent, const char* name)
///
void q_uiloader_on_create_action_group(void* self, QActionGroup* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createActionGroup)
///
/// Base class method implementation
///
/// @param self QUiLoader*
/// @param parent QObject*
/// @param name const char*
///
QActionGroup* q_uiloader_qbase_create_action_group(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createAction)
///
/// @param self QUiLoader*
/// @param parent QObject*
/// @param name const char*
///
QAction* q_uiloader_create_action(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createAction)
///
/// Allows for overriding the related default method
///
/// @param self QUiLoader*
/// @param callback QAction* func(QUiLoader* self, QObject* parent, const char* name)
///
void q_uiloader_on_create_action(void* self, QAction* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#createAction)
///
/// Base class method implementation
///
/// @param self QUiLoader*
/// @param parent QObject*
/// @param name const char*
///
QAction* q_uiloader_qbase_create_action(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#setWorkingDirectory)
///
/// @param self QUiLoader*
/// @param dir QDir*
///
void q_uiloader_set_working_directory(void* self, void* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#workingDirectory)
///
/// @param self QUiLoader*
///
QDir* q_uiloader_working_directory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#setLanguageChangeEnabled)
///
/// @param self QUiLoader*
/// @param enabled bool
///
void q_uiloader_set_language_change_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#isLanguageChangeEnabled)
///
/// @param self QUiLoader*
///
bool q_uiloader_is_language_change_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#setTranslationEnabled)
///
/// @param self QUiLoader*
/// @param enabled bool
///
void q_uiloader_set_translation_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#isTranslationEnabled)
///
/// @param self QUiLoader*
///
bool q_uiloader_is_translation_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUiLoader*
///
const char* q_uiloader_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_uiloader_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_uiloader_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#load)
///
/// @param self QUiLoader*
/// @param device QIODevice*
/// @param parentWidget QWidget*
///
QWidget* q_uiloader_load2(void* self, void* device, void* parentWidget);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUiLoader*
///
const char* q_uiloader_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QUiLoader*
/// @param name char*
///
void q_uiloader_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QUiLoader*
///
bool q_uiloader_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QUiLoader*
///
bool q_uiloader_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QUiLoader*
///
bool q_uiloader_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QUiLoader*
///
bool q_uiloader_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QUiLoader*
/// @param b bool
///
bool q_uiloader_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QUiLoader*
///
QThread* q_uiloader_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUiLoader*
/// @param thread QThread*
///
bool q_uiloader_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUiLoader*
/// @param interval int
///
int32_t q_uiloader_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUiLoader*
/// @param id int
///
void q_uiloader_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUiLoader*
/// @param id enum Qt__TimerId
///
void q_uiloader_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QUiLoader*
///
/// @return libqt_list of QObject*
///
libqt_list q_uiloader_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QUiLoader*
/// @param parent QObject*
///
void q_uiloader_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QUiLoader*
/// @param filterObj QObject*
///
void q_uiloader_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QUiLoader*
/// @param obj QObject*
///
void q_uiloader_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_uiloader_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUiLoader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_uiloader_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_uiloader_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_uiloader_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QUiLoader*
///
void q_uiloader_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QUiLoader*
///
void q_uiloader_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QUiLoader*
/// @param name const char*
/// @param value QVariant*
///
bool q_uiloader_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QUiLoader*
/// @param name const char*
///
QVariant* q_uiloader_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUiLoader*
///
const char** q_uiloader_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUiLoader*
///
QBindingStorage* q_uiloader_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUiLoader*
///
const QBindingStorage* q_uiloader_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUiLoader*
///
void q_uiloader_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self)
///
void q_uiloader_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QUiLoader*
///
QObject* q_uiloader_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QUiLoader*
/// @param classname const char*
///
bool q_uiloader_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QUiLoader*
///
void q_uiloader_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUiLoader*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_uiloader_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUiLoader*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_uiloader_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_uiloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUiLoader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_uiloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUiLoader*
/// @param param1 QObject*
///
void q_uiloader_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, QObject* param1)
///
void q_uiloader_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param event QEvent*
///
bool q_uiloader_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param event QEvent*
///
bool q_uiloader_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback bool func(QUiLoader* self, QEvent* event)
///
void q_uiloader_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_uiloader_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_uiloader_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback bool func(QUiLoader* self, QObject* watched, QEvent* event)
///
void q_uiloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param event QTimerEvent*
///
void q_uiloader_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param event QTimerEvent*
///
void q_uiloader_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, QTimerEvent* event)
///
void q_uiloader_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param event QChildEvent*
///
void q_uiloader_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param event QChildEvent*
///
void q_uiloader_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, QChildEvent* event)
///
void q_uiloader_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param event QEvent*
///
void q_uiloader_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param event QEvent*
///
void q_uiloader_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, QEvent* event)
///
void q_uiloader_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param signal QMetaMethod*
///
void q_uiloader_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param signal QMetaMethod*
///
void q_uiloader_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, QMetaMethod* signal)
///
void q_uiloader_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param signal QMetaMethod*
///
void q_uiloader_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param signal QMetaMethod*
///
void q_uiloader_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, QMetaMethod* signal)
///
void q_uiloader_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
///
QObject* q_uiloader_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
///
QObject* q_uiloader_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback QObject* func()
///
void q_uiloader_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
///
int32_t q_uiloader_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
///
int32_t q_uiloader_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback int32_t func()
///
void q_uiloader_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param signal const char*
///
int32_t q_uiloader_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param signal const char*
///
int32_t q_uiloader_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback int32_t func(QUiLoader* self, const char* signal)
///
void q_uiloader_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUiLoader*
/// @param signal QMetaMethod*
///
bool q_uiloader_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUiLoader*
/// @param signal QMetaMethod*
///
bool q_uiloader_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUiLoader*
/// @param callback bool func(QUiLoader* self, QMetaMethod* signal)
///
void q_uiloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QUiLoader*
/// @param callback void func(QUiLoader* self, const char* objectName)
///
void q_uiloader_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/quiloader.html#dtor.QUiLoader)
///
/// Delete this object from C++ memory.
///
/// @param self QUiLoader*
///
void q_uiloader_delete(void* self);

#endif
