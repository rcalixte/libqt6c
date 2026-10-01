#pragma once
#ifndef EXTRAS_KIO_LIBKABSTRACTFILEITEMACTIONPLUGIN_H
#define EXTRAS_KIO_LIBKABSTRACTFILEITEMACTIONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html)

/// k_abstractfileitemactionplugin_new constructs a new KAbstractFileItemActionPlugin object.
///
/// @param parent QObject*
///
KAbstractFileItemActionPlugin* k_abstractfileitemactionplugin_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KAbstractFileItemActionPlugin*
///
const QMetaObject* k_abstractfileitemactionplugin_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param callback const QMetaObject* func(const KAbstractFileItemActionPlugin* self)
///
void k_abstractfileitemactionplugin_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KAbstractFileItemActionPlugin*
///
const QMetaObject* k_abstractfileitemactionplugin_super_meta_object(const void* self);

/// @param self KAbstractFileItemActionPlugin*
/// @param param1 const char*
///
void* k_abstractfileitemactionplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void* func(KAbstractFileItemActionPlugin* self, const char* param1)
///
void k_abstractfileitemactionplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KAbstractFileItemActionPlugin*
/// @param param1 const char*
///
void* k_abstractfileitemactionplugin_super_metacast(void* self, const char* param1);

/// @param self KAbstractFileItemActionPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_abstractfileitemactionplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback int32_t func(KAbstractFileItemActionPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_abstractfileitemactionplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KAbstractFileItemActionPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_abstractfileitemactionplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_abstractfileitemactionplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#actions)
///
/// @warning This method must be implemented with `k_abstractfileitemactionplugin_on_actions` before it can be called.
///
/// @param self KAbstractFileItemActionPlugin*
/// @param fileItemInfos KFileItemListProperties*
/// @param parentWidget QWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_abstractfileitemactionplugin_actions(void* self, const void* fileItemInfos, void* parentWidget);

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#actions)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback libqt_list of QAction* func(KAbstractFileItemActionPlugin* self, KFileItemListProperties* fileItemInfos, QWidget* parentWidget)
///
void k_abstractfileitemactionplugin_on_actions(void* self, libqt_list (*callback)(void*, const void*, void*));

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#error)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param errorMessage const char*
///
void k_abstractfileitemactionplugin_error(void* self, const char* errorMessage);

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#error)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, const char* errorMessage)
///
void k_abstractfileitemactionplugin_on_error(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_abstractfileitemactionplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_abstractfileitemactionplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KAbstractFileItemActionPlugin*
///
const char* k_abstractfileitemactionplugin_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param name const char*
///
void k_abstractfileitemactionplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param b bool
///
bool k_abstractfileitemactionplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KAbstractFileItemActionPlugin*
///
QThread* k_abstractfileitemactionplugin_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param thread QThread*
///
bool k_abstractfileitemactionplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param interval int
///
int32_t k_abstractfileitemactionplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param time int64_t of nanoseconds
///
int32_t k_abstractfileitemactionplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param id int
///
void k_abstractfileitemactionplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param id enum Qt__TimerId
///
void k_abstractfileitemactionplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KAbstractFileItemActionPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_abstractfileitemactionplugin_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param parent QObject*
///
void k_abstractfileitemactionplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param filterObj QObject*
///
void k_abstractfileitemactionplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param obj QObject*
///
void k_abstractfileitemactionplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_abstractfileitemactionplugin_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_abstractfileitemactionplugin_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param receiver QObject*
///
bool k_abstractfileitemactionplugin_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_abstractfileitemactionplugin_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_abstractfileitemactionplugin_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param name const char*
///
QVariant* k_abstractfileitemactionplugin_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KAbstractFileItemActionPlugin*
///
const char** k_abstractfileitemactionplugin_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractFileItemActionPlugin*
///
QBindingStorage* k_abstractfileitemactionplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KAbstractFileItemActionPlugin*
///
const QBindingStorage* k_abstractfileitemactionplugin_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self)
///
void k_abstractfileitemactionplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KAbstractFileItemActionPlugin*
///
QObject* k_abstractfileitemactionplugin_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param classname const char*
///
bool k_abstractfileitemactionplugin_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_abstractfileitemactionplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_abstractfileitemactionplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_abstractfileitemactionplugin_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_abstractfileitemactionplugin_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal const char*
///
bool k_abstractfileitemactionplugin_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_abstractfileitemactionplugin_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_abstractfileitemactionplugin_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool k_abstractfileitemactionplugin_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param param1 QObject*
///
void k_abstractfileitemactionplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QObject* param1)
///
void k_abstractfileitemactionplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QEvent*
///
bool k_abstractfileitemactionplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QEvent*
///
bool k_abstractfileitemactionplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback bool func(KAbstractFileItemActionPlugin* self, QEvent* event)
///
void k_abstractfileitemactionplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_abstractfileitemactionplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_abstractfileitemactionplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback bool func(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event)
///
void k_abstractfileitemactionplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QTimerEvent*
///
void k_abstractfileitemactionplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QTimerEvent*
///
void k_abstractfileitemactionplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QTimerEvent* event)
///
void k_abstractfileitemactionplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QChildEvent*
///
void k_abstractfileitemactionplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QChildEvent*
///
void k_abstractfileitemactionplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QChildEvent* event)
///
void k_abstractfileitemactionplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QEvent*
///
void k_abstractfileitemactionplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param event QEvent*
///
void k_abstractfileitemactionplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QEvent* event)
///
void k_abstractfileitemactionplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QMetaMethod* signal)
///
void k_abstractfileitemactionplugin_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QMetaMethod* signal)
///
void k_abstractfileitemactionplugin_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
///
QObject* k_abstractfileitemactionplugin_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
///
QObject* k_abstractfileitemactionplugin_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param callback QObject* func(KAbstractFileItemActionPlugin* self)
///
void k_abstractfileitemactionplugin_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
///
int32_t k_abstractfileitemactionplugin_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
///
int32_t k_abstractfileitemactionplugin_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param callback int32_t func(KAbstractFileItemActionPlugin* self)
///
void k_abstractfileitemactionplugin_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal const char*
///
int32_t k_abstractfileitemactionplugin_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal const char*
///
int32_t k_abstractfileitemactionplugin_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param callback int32_t func(KAbstractFileItemActionPlugin* self, const char* signal)
///
void k_abstractfileitemactionplugin_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
bool k_abstractfileitemactionplugin_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
bool k_abstractfileitemactionplugin_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KAbstractFileItemActionPlugin*
/// @param callback bool func(KAbstractFileItemActionPlugin* self, QMetaMethod* signal)
///
void k_abstractfileitemactionplugin_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, const char* objectName)
///
void k_abstractfileitemactionplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#dtor.KAbstractFileItemActionPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_delete(void* self);

#endif
