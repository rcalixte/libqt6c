#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKABSTRACTFILEITEMACTIONPLUGIN_H
#define SRC_EXTRAS_KIO_QT6C_LIBKABSTRACTFILEITEMACTIONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html)

/// k_abstractfileitemactionplugin_new constructs a new KAbstractFileItemActionPlugin object.
///
/// @param parent QObject*
///
KAbstractFileItemActionPlugin* k_abstractfileitemactionplugin_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KAbstractFileItemActionPlugin*
///
const QMetaObject* k_abstractfileitemactionplugin_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback const QMetaObject* func()
///
void k_abstractfileitemactionplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KAbstractFileItemActionPlugin*
///
const QMetaObject* k_abstractfileitemactionplugin_qbase_meta_object(void* self);

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
void* k_abstractfileitemactionplugin_qbase_metacast(void* self, const char* param1);

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
int32_t k_abstractfileitemactionplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_abstractfileitemactionplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#actions)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param fileItemInfos KFileItemListProperties*
/// @param parentWidget QWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_abstractfileitemactionplugin_actions(void* self, void* fileItemInfos, void* parentWidget);

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#actions)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback QAction** func(KAbstractFileItemActionPlugin* self, KFileItemListProperties* fileItemInfos, QWidget* parentWidget)
///
void k_abstractfileitemactionplugin_on_actions(void* self, QAction** (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kabstractfileitemactionplugin.html#actions)
///
/// Base class method implementation
///
/// @param self KAbstractFileItemActionPlugin*
/// @param fileItemInfos KFileItemListProperties*
/// @param parentWidget QWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_abstractfileitemactionplugin_qbase_actions(void* self, void* fileItemInfos, void* parentWidget);

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
/// @param self KAbstractFileItemActionPlugin*
///
const char* k_abstractfileitemactionplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param name char*
///
void k_abstractfileitemactionplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAbstractFileItemActionPlugin*
///
bool k_abstractfileitemactionplugin_signals_blocked(void* self);

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
/// @param self KAbstractFileItemActionPlugin*
///
QThread* k_abstractfileitemactionplugin_thread(void* self);

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
/// @param self KAbstractFileItemActionPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_abstractfileitemactionplugin_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_abstractfileitemactionplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_abstractfileitemactionplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_abstractfileitemactionplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param name const char*
///
QVariant* k_abstractfileitemactionplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KAbstractFileItemActionPlugin*
///
const char** k_abstractfileitemactionplugin_dynamic_property_names(void* self);

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
/// @param self KAbstractFileItemActionPlugin*
///
const QBindingStorage* k_abstractfileitemactionplugin_binding_storage2(void* self);

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
/// @param self KAbstractFileItemActionPlugin*
///
QObject* k_abstractfileitemactionplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param classname const char*
///
bool k_abstractfileitemactionplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAbstractFileItemActionPlugin*
///
void k_abstractfileitemactionplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_abstractfileitemactionplugin_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractFileItemActionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_abstractfileitemactionplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool k_abstractfileitemactionplugin_qbase_event(void* self, void* event);

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
bool k_abstractfileitemactionplugin_qbase_event_filter(void* self, void* watched, void* event);

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
void k_abstractfileitemactionplugin_qbase_timer_event(void* self, void* event);

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
void k_abstractfileitemactionplugin_qbase_child_event(void* self, void* event);

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
void k_abstractfileitemactionplugin_qbase_custom_event(void* self, void* event);

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
void k_abstractfileitemactionplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QMetaMethod* signal)
///
void k_abstractfileitemactionplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
void k_abstractfileitemactionplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback void func(KAbstractFileItemActionPlugin* self, QMetaMethod* signal)
///
void k_abstractfileitemactionplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
///
QObject* k_abstractfileitemactionplugin_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
///
QObject* k_abstractfileitemactionplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback QObject* func()
///
void k_abstractfileitemactionplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
///
int32_t k_abstractfileitemactionplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
///
int32_t k_abstractfileitemactionplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback int32_t func()
///
void k_abstractfileitemactionplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal const char*
///
int32_t k_abstractfileitemactionplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal const char*
///
int32_t k_abstractfileitemactionplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback int32_t func(KAbstractFileItemActionPlugin* self, const char* signal)
///
void k_abstractfileitemactionplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
bool k_abstractfileitemactionplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param signal QMetaMethod*
///
bool k_abstractfileitemactionplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractFileItemActionPlugin*
/// @param callback bool func(KAbstractFileItemActionPlugin* self, QMetaMethod* signal)
///
void k_abstractfileitemactionplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
