#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCONFIGDIALOGMANAGER_H
#define EXTRAS_KCONFIGWIDGETS_LIBKCONFIGDIALOGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html)

/// k_configdialogmanager_new constructs a new KConfigDialogManager object.
///
/// @param parent QWidget*
/// @param conf KCoreConfigSkeleton*
///
KConfigDialogManager* k_configdialogmanager_new(void* parent, void* conf);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KConfigDialogManager*
///
const QMetaObject* k_configdialogmanager_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialogManager*
/// @param callback const QMetaObject* func(const KConfigDialogManager* self)
///
void k_configdialogmanager_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KConfigDialogManager*
///
const QMetaObject* k_configdialogmanager_super_meta_object(const void* self);

/// @param self KConfigDialogManager*
/// @param param1 const char*
///
void* k_configdialogmanager_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KConfigDialogManager*
/// @param callback void* func(KConfigDialogManager* self, const char* param1)
///
void k_configdialogmanager_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KConfigDialogManager*
/// @param param1 const char*
///
void* k_configdialogmanager_super_metacast(void* self, const char* param1);

/// @param self KConfigDialogManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_configdialogmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KConfigDialogManager*
/// @param callback int32_t func(KConfigDialogManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_configdialogmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KConfigDialogManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_configdialogmanager_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_configdialogmanager_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#settingsChanged)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_settings_changed(void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#settingsChanged)
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self)
///
void k_configdialogmanager_on_settings_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#widgetModified)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_widget_modified(void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#widgetModified)
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self)
///
void k_configdialogmanager_on_widget_modified(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#addWidget)
///
/// @param self KConfigDialogManager*
/// @param widget QWidget*
///
void k_configdialogmanager_add_widget(void* self, void* widget);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#hasChanged)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_has_changed(const void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#isDefault)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_is_default(const void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#propertyMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map* of const char* to const char*
/// for (size_t i = 0; i < map->len; ++i) {
///     libqt_free(map->keys[i]);
///     libqt_free(map->values[i]);
/// }
/// free(map->keys);
/// free(map->values);
/// free(map);
/// ```
///
/// @return libqt_map* of const char* to const char*
///
libqt_map* k_configdialogmanager_property_map();

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateSettings)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_update_settings(void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateWidgets)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_update_widgets(void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateWidgetsDefault)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_update_widgets_default(void* self);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setDefaultsIndicatorsVisible)
///
/// @param self KConfigDialogManager*
/// @param enabled bool
///
void k_configdialogmanager_set_defaults_indicators_visible(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#init)
///
/// @param self KConfigDialogManager*
/// @param trackChanges bool
///
void k_configdialogmanager_init(void* self, bool trackChanges);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#parseChildren)
///
/// @param self KConfigDialogManager*
/// @param widget QWidget*
/// @param trackChanges bool
///
bool k_configdialogmanager_parse_children(void* self, const void* widget, bool trackChanges);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserProperty)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigDialogManager*
/// @param widget QWidget*
///
const char* k_configdialogmanager_get_user_property(const void* self, const void* widget);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomProperty)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigDialogManager*
/// @param widget QWidget*
///
const char* k_configdialogmanager_get_custom_property(const void* self, const void* widget);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigDialogManager*
/// @param widget QWidget*
///
const char* k_configdialogmanager_get_user_property_changed_signal(const void* self, const void* widget);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigDialogManager*
/// @param widget QWidget*
///
const char* k_configdialogmanager_get_custom_property_changed_signal(const void* self, const void* widget);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setProperty)
///
/// @param self KConfigDialogManager*
/// @param w QWidget*
/// @param v QVariant*
///
void k_configdialogmanager_set_property(void* self, void* w, const void* v);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#property)
///
/// @param self const KConfigDialogManager*
/// @param w QWidget*
///
QVariant* k_configdialogmanager_property(const void* self, void* w);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setupWidget)
///
/// @param self KConfigDialogManager*
/// @param widget QWidget*
/// @param item KConfigSkeletonItem*
///
void k_configdialogmanager_setup_widget(void* self, void* widget, void* item);

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#initMaps)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_init_maps(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_configdialogmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_configdialogmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigDialogManager*
///
const char* k_configdialogmanager_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KConfigDialogManager*
/// @param name const char*
///
void k_configdialogmanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KConfigDialogManager*
/// @param b bool
///
bool k_configdialogmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KConfigDialogManager*
///
QThread* k_configdialogmanager_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigDialogManager*
/// @param thread QThread*
///
bool k_configdialogmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigDialogManager*
/// @param interval int
///
int32_t k_configdialogmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigDialogManager*
/// @param time int64_t of nanoseconds
///
int32_t k_configdialogmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigDialogManager*
/// @param id int
///
void k_configdialogmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigDialogManager*
/// @param id enum Qt__TimerId
///
void k_configdialogmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KConfigDialogManager*
///
/// @return libqt_list of QObject*
///
libqt_list k_configdialogmanager_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KConfigDialogManager*
/// @param parent QObject*
///
void k_configdialogmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KConfigDialogManager*
/// @param filterObj QObject*
///
void k_configdialogmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KConfigDialogManager*
/// @param obj QObject*
///
void k_configdialogmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_configdialogmanager_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_configdialogmanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KConfigDialogManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_configdialogmanager_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_configdialogmanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_configdialogmanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigDialogManager*
///
bool k_configdialogmanager_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigDialogManager*
/// @param receiver QObject*
///
bool k_configdialogmanager_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_configdialogmanager_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KConfigDialogManager*
///
void k_configdialogmanager_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KConfigDialogManager*
///
void k_configdialogmanager_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigDialogManager*
///
const char** k_configdialogmanager_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigDialogManager*
///
QBindingStorage* k_configdialogmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KConfigDialogManager*
///
const QBindingStorage* k_configdialogmanager_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self)
///
void k_configdialogmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KConfigDialogManager*
///
QObject* k_configdialogmanager_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KConfigDialogManager*
/// @param classname const char*
///
bool k_configdialogmanager_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigDialogManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_configdialogmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigDialogManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_configdialogmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_configdialogmanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_configdialogmanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KConfigDialogManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_configdialogmanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigDialogManager*
/// @param signal const char*
///
bool k_configdialogmanager_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigDialogManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_configdialogmanager_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigDialogManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_configdialogmanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KConfigDialogManager*
/// @param receiver QObject*
/// @param member const char*
///
bool k_configdialogmanager_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialogManager*
/// @param param1 QObject*
///
void k_configdialogmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, QObject* param1)
///
void k_configdialogmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QEvent*
///
bool k_configdialogmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QEvent*
///
bool k_configdialogmanager_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback bool func(KConfigDialogManager* self, QEvent* event)
///
void k_configdialogmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_configdialogmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_configdialogmanager_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback bool func(KConfigDialogManager* self, QObject* watched, QEvent* event)
///
void k_configdialogmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QTimerEvent*
///
void k_configdialogmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QTimerEvent*
///
void k_configdialogmanager_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, QTimerEvent* event)
///
void k_configdialogmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QChildEvent*
///
void k_configdialogmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QChildEvent*
///
void k_configdialogmanager_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, QChildEvent* event)
///
void k_configdialogmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QEvent*
///
void k_configdialogmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param event QEvent*
///
void k_configdialogmanager_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, QEvent* event)
///
void k_configdialogmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param signal QMetaMethod*
///
void k_configdialogmanager_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param signal QMetaMethod*
///
void k_configdialogmanager_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, QMetaMethod* signal)
///
void k_configdialogmanager_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param signal QMetaMethod*
///
void k_configdialogmanager_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param signal QMetaMethod*
///
void k_configdialogmanager_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, QMetaMethod* signal)
///
void k_configdialogmanager_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigDialogManager*
///
QObject* k_configdialogmanager_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigDialogManager*
///
QObject* k_configdialogmanager_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback QObject* func(KConfigDialogManager* self)
///
void k_configdialogmanager_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigDialogManager*
///
int32_t k_configdialogmanager_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigDialogManager*
///
int32_t k_configdialogmanager_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback int32_t func(KConfigDialogManager* self)
///
void k_configdialogmanager_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigDialogManager*
/// @param signal const char*
///
int32_t k_configdialogmanager_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigDialogManager*
/// @param signal const char*
///
int32_t k_configdialogmanager_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback int32_t func(KConfigDialogManager* self, const char* signal)
///
void k_configdialogmanager_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KConfigDialogManager*
/// @param signal QMetaMethod*
///
bool k_configdialogmanager_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KConfigDialogManager*
/// @param signal QMetaMethod*
///
bool k_configdialogmanager_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialogManager*
/// @param callback bool func(KConfigDialogManager* self, QMetaMethod* signal)
///
void k_configdialogmanager_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KConfigDialogManager*
/// @param callback void func(KConfigDialogManager* self, const char* objectName)
///
void k_configdialogmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#dtor.KConfigDialogManager)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigDialogManager*
///
void k_configdialogmanager_delete(void* self);

#endif
