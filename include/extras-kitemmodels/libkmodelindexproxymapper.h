#pragma once
#ifndef SRC_EXTRAS_KITEMMODELS_QT6C_LIBKMODELINDEXPROXYMAPPER_H
#define SRC_EXTRAS_KITEMMODELS_QT6C_LIBKMODELINDEXPROXYMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html)

/// k_modelindexproxymapper_new constructs a new KModelIndexProxyMapper object.
///
/// @param leftModel QAbstractItemModel*
/// @param rightModel QAbstractItemModel*
///
KModelIndexProxyMapper* k_modelindexproxymapper_new(void* leftModel, void* rightModel);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html)

/// k_modelindexproxymapper_new2 constructs a new KModelIndexProxyMapper object.
///
/// @param leftModel QAbstractItemModel*
/// @param rightModel QAbstractItemModel*
/// @param parent QObject*
///
KModelIndexProxyMapper* k_modelindexproxymapper_new2(void* leftModel, void* rightModel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KModelIndexProxyMapper*
///
const QMetaObject* k_modelindexproxymapper_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KModelIndexProxyMapper*
/// @param callback const QMetaObject* func()
///
void k_modelindexproxymapper_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KModelIndexProxyMapper*
///
const QMetaObject* k_modelindexproxymapper_qbase_meta_object(void* self);

/// @param self KModelIndexProxyMapper*
/// @param param1 const char*
///
void* k_modelindexproxymapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KModelIndexProxyMapper*
/// @param callback void* func(KModelIndexProxyMapper* self, const char* param1)
///
void k_modelindexproxymapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KModelIndexProxyMapper*
/// @param param1 const char*
///
void* k_modelindexproxymapper_qbase_metacast(void* self, const char* param1);

/// @param self KModelIndexProxyMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_modelindexproxymapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KModelIndexProxyMapper*
/// @param callback int32_t func(KModelIndexProxyMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_modelindexproxymapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KModelIndexProxyMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_modelindexproxymapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_modelindexproxymapper_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#mapLeftToRight)
///
/// @param self KModelIndexProxyMapper*
/// @param index QModelIndex*
///
QModelIndex* k_modelindexproxymapper_map_left_to_right(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#mapRightToLeft)
///
/// @param self KModelIndexProxyMapper*
/// @param index QModelIndex*
///
QModelIndex* k_modelindexproxymapper_map_right_to_left(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#mapSelectionLeftToRight)
///
/// @param self KModelIndexProxyMapper*
/// @param selection QItemSelection*
///
QItemSelection* k_modelindexproxymapper_map_selection_left_to_right(void* self, void* selection);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#mapSelectionRightToLeft)
///
/// @param self KModelIndexProxyMapper*
/// @param selection QItemSelection*
///
QItemSelection* k_modelindexproxymapper_map_selection_right_to_left(void* self, void* selection);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#isConnected)
///
/// @param self KModelIndexProxyMapper*
///
bool k_modelindexproxymapper_is_connected(void* self);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#isConnectedChanged)
///
/// @param self KModelIndexProxyMapper*
///
void k_modelindexproxymapper_is_connected_changed(void* self);

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#isConnectedChanged)
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self)
///
void k_modelindexproxymapper_on_is_connected_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_modelindexproxymapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_modelindexproxymapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KModelIndexProxyMapper*
///
const char* k_modelindexproxymapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KModelIndexProxyMapper*
/// @param name char*
///
void k_modelindexproxymapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KModelIndexProxyMapper*
///
bool k_modelindexproxymapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KModelIndexProxyMapper*
///
bool k_modelindexproxymapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KModelIndexProxyMapper*
///
bool k_modelindexproxymapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KModelIndexProxyMapper*
///
bool k_modelindexproxymapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KModelIndexProxyMapper*
/// @param b bool
///
bool k_modelindexproxymapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KModelIndexProxyMapper*
///
QThread* k_modelindexproxymapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KModelIndexProxyMapper*
/// @param thread QThread*
///
bool k_modelindexproxymapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModelIndexProxyMapper*
/// @param interval int
///
int32_t k_modelindexproxymapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModelIndexProxyMapper*
/// @param time int64_t of nanoseconds
///
int32_t k_modelindexproxymapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KModelIndexProxyMapper*
/// @param id int
///
void k_modelindexproxymapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KModelIndexProxyMapper*
/// @param id enum Qt__TimerId
///
void k_modelindexproxymapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KModelIndexProxyMapper*
///
/// @return libqt_list of QObject*
///
libqt_list k_modelindexproxymapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KModelIndexProxyMapper*
/// @param parent QObject*
///
void k_modelindexproxymapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KModelIndexProxyMapper*
/// @param filterObj QObject*
///
void k_modelindexproxymapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KModelIndexProxyMapper*
/// @param obj QObject*
///
void k_modelindexproxymapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_modelindexproxymapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KModelIndexProxyMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_modelindexproxymapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_modelindexproxymapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_modelindexproxymapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KModelIndexProxyMapper*
///
void k_modelindexproxymapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KModelIndexProxyMapper*
///
void k_modelindexproxymapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KModelIndexProxyMapper*
/// @param name const char*
/// @param value QVariant*
///
bool k_modelindexproxymapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KModelIndexProxyMapper*
/// @param name const char*
///
QVariant* k_modelindexproxymapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KModelIndexProxyMapper*
///
const char** k_modelindexproxymapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KModelIndexProxyMapper*
///
QBindingStorage* k_modelindexproxymapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KModelIndexProxyMapper*
///
const QBindingStorage* k_modelindexproxymapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModelIndexProxyMapper*
///
void k_modelindexproxymapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self)
///
void k_modelindexproxymapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KModelIndexProxyMapper*
///
QObject* k_modelindexproxymapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KModelIndexProxyMapper*
/// @param classname const char*
///
bool k_modelindexproxymapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KModelIndexProxyMapper*
///
void k_modelindexproxymapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KModelIndexProxyMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_modelindexproxymapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModelIndexProxyMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_modelindexproxymapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KModelIndexProxyMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_modelindexproxymapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_modelindexproxymapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KModelIndexProxyMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_modelindexproxymapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModelIndexProxyMapper*
/// @param param1 QObject*
///
void k_modelindexproxymapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, QObject* param1)
///
void k_modelindexproxymapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QEvent*
///
bool k_modelindexproxymapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QEvent*
///
bool k_modelindexproxymapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback bool func(KModelIndexProxyMapper* self, QEvent* event)
///
void k_modelindexproxymapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_modelindexproxymapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_modelindexproxymapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback bool func(KModelIndexProxyMapper* self, QObject* watched, QEvent* event)
///
void k_modelindexproxymapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QTimerEvent*
///
void k_modelindexproxymapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QTimerEvent*
///
void k_modelindexproxymapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, QTimerEvent* event)
///
void k_modelindexproxymapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QChildEvent*
///
void k_modelindexproxymapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QChildEvent*
///
void k_modelindexproxymapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, QChildEvent* event)
///
void k_modelindexproxymapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QEvent*
///
void k_modelindexproxymapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param event QEvent*
///
void k_modelindexproxymapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, QEvent* event)
///
void k_modelindexproxymapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal QMetaMethod*
///
void k_modelindexproxymapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal QMetaMethod*
///
void k_modelindexproxymapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, QMetaMethod* signal)
///
void k_modelindexproxymapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal QMetaMethod*
///
void k_modelindexproxymapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal QMetaMethod*
///
void k_modelindexproxymapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, QMetaMethod* signal)
///
void k_modelindexproxymapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
///
QObject* k_modelindexproxymapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
///
QObject* k_modelindexproxymapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback QObject* func()
///
void k_modelindexproxymapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
///
int32_t k_modelindexproxymapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
///
int32_t k_modelindexproxymapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback int32_t func()
///
void k_modelindexproxymapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal const char*
///
int32_t k_modelindexproxymapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal const char*
///
int32_t k_modelindexproxymapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback int32_t func(KModelIndexProxyMapper* self, const char* signal)
///
void k_modelindexproxymapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal QMetaMethod*
///
bool k_modelindexproxymapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param signal QMetaMethod*
///
bool k_modelindexproxymapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KModelIndexProxyMapper*
/// @param callback bool func(KModelIndexProxyMapper* self, QMetaMethod* signal)
///
void k_modelindexproxymapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KModelIndexProxyMapper*
/// @param callback void func(KModelIndexProxyMapper* self, const char* objectName)
///
void k_modelindexproxymapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kmodelindexproxymapper.html#dtor.KModelIndexProxyMapper)
///
/// Delete this object from C++ memory.
///
/// @param self KModelIndexProxyMapper*
///
void k_modelindexproxymapper_delete(void* self);

#endif
