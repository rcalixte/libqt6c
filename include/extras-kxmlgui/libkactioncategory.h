#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKACTIONCATEGORY_H
#define EXTRAS_KXMLGUI_LIBKACTIONCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kactioncategory.html)

/// k_actioncategory_new constructs a new KActionCategory object.
///
/// @param text const char*
///
KActionCategory* k_actioncategory_new(const char* text);

/// [Upstream resources](https://api.kde.org/kactioncategory.html)

/// k_actioncategory_new2 constructs a new KActionCategory object.
///
/// @param text const char*
/// @param parent KActionCollection*
///
KActionCategory* k_actioncategory_new2(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KActionCategory*
///
const QMetaObject* k_actioncategory_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KActionCategory*
/// @param callback const QMetaObject* func(const KActionCategory* self)
///
void k_actioncategory_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KActionCategory*
///
const QMetaObject* k_actioncategory_super_meta_object(const void* self);

/// @param self KActionCategory*
/// @param param1 const char*
///
void* k_actioncategory_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KActionCategory*
/// @param callback void* func(KActionCategory* self, const char* param1)
///
void k_actioncategory_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KActionCategory*
/// @param param1 const char*
///
void* k_actioncategory_super_metacast(void* self, const char* param1);

/// @param self KActionCategory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_actioncategory_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KActionCategory*
/// @param callback int32_t func(KActionCategory* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_actioncategory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KActionCategory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_actioncategory_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_actioncategory_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param name const char*
/// @param action QAction*
///
QAction* k_actioncategory_add_action(void* self, const char* name, void* action);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardAction__StandardAction
///
QAction* k_actioncategory_add_action2(void* self, int32_t actionType);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardAction__StandardAction
/// @param name const char*
///
QAction* k_actioncategory_add_action3(void* self, int32_t actionType, const char* name);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param name const char*
///
QAction* k_actioncategory_add_action4(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardActions__StandardAction
///
QAction* k_actioncategory_add_action5(void* self, int32_t actionType);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#actions)
///
/// @param self const KActionCategory*
///
/// @return libqt_list of QAction*
///
libqt_list k_actioncategory_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#collection)
///
/// @param self const KActionCategory*
///
KActionCollection* k_actioncategory_collection(const void* self);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionCategory*
///
const char* k_actioncategory_text(const void* self);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#setText)
///
/// @param self KActionCategory*
/// @param text const char*
///
void k_actioncategory_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_actioncategory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_actioncategory_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardAction__StandardAction
/// @param receiver QObject*
///
QAction* k_actioncategory_add_action22(void* self, int32_t actionType, const void* receiver);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardAction__StandardAction
/// @param receiver QObject*
/// @param member const char*
///
QAction* k_actioncategory_add_action32(void* self, int32_t actionType, const void* receiver, const char* member);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardAction__StandardAction
/// @param name const char*
/// @param receiver QObject*
///
QAction* k_actioncategory_add_action33(void* self, int32_t actionType, const char* name, const void* receiver);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param actionType enum KStandardAction__StandardAction
/// @param name const char*
/// @param receiver QObject*
/// @param member const char*
///
QAction* k_actioncategory_add_action42(void* self, int32_t actionType, const char* name, const void* receiver, const char* member);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param name const char*
/// @param receiver QObject*
///
QAction* k_actioncategory_add_action23(void* self, const char* name, const void* receiver);

/// [Upstream resources](https://api.kde.org/kactioncategory.html#addAction)
///
/// @param self KActionCategory*
/// @param name const char*
/// @param receiver QObject*
/// @param member const char*
///
QAction* k_actioncategory_add_action34(void* self, const char* name, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionCategory*
///
const char* k_actioncategory_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KActionCategory*
/// @param name const char*
///
void k_actioncategory_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KActionCategory*
///
bool k_actioncategory_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KActionCategory*
///
bool k_actioncategory_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KActionCategory*
///
bool k_actioncategory_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KActionCategory*
///
bool k_actioncategory_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KActionCategory*
/// @param b bool
///
bool k_actioncategory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KActionCategory*
///
QThread* k_actioncategory_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KActionCategory*
/// @param thread QThread*
///
bool k_actioncategory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionCategory*
/// @param interval int
///
int32_t k_actioncategory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionCategory*
/// @param time int64_t of nanoseconds
///
int32_t k_actioncategory_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionCategory*
/// @param id int
///
void k_actioncategory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionCategory*
/// @param id enum Qt__TimerId
///
void k_actioncategory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KActionCategory*
///
/// @return libqt_list of QObject*
///
libqt_list k_actioncategory_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KActionCategory*
/// @param parent QObject*
///
void k_actioncategory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KActionCategory*
/// @param filterObj QObject*
///
void k_actioncategory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KActionCategory*
/// @param obj QObject*
///
void k_actioncategory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_actioncategory_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_actioncategory_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KActionCategory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_actioncategory_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_actioncategory_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_actioncategory_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionCategory*
///
bool k_actioncategory_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionCategory*
/// @param receiver QObject*
///
bool k_actioncategory_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_actioncategory_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KActionCategory*
///
void k_actioncategory_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KActionCategory*
///
void k_actioncategory_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KActionCategory*
/// @param name const char*
/// @param value QVariant*
///
bool k_actioncategory_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KActionCategory*
/// @param name const char*
///
QVariant* k_actioncategory_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KActionCategory*
///
const char** k_actioncategory_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KActionCategory*
///
QBindingStorage* k_actioncategory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KActionCategory*
///
const QBindingStorage* k_actioncategory_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCategory*
///
void k_actioncategory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self)
///
void k_actioncategory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KActionCategory*
///
QObject* k_actioncategory_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KActionCategory*
/// @param classname const char*
///
bool k_actioncategory_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KActionCategory*
///
void k_actioncategory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionCategory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_actioncategory_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionCategory*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_actioncategory_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_actioncategory_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_actioncategory_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KActionCategory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_actioncategory_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionCategory*
/// @param signal const char*
///
bool k_actioncategory_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionCategory*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_actioncategory_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionCategory*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_actioncategory_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionCategory*
/// @param receiver QObject*
/// @param member const char*
///
bool k_actioncategory_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCategory*
/// @param param1 QObject*
///
void k_actioncategory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, QObject* param1)
///
void k_actioncategory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param event QEvent*
///
bool k_actioncategory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param event QEvent*
///
bool k_actioncategory_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback bool func(KActionCategory* self, QEvent* event)
///
void k_actioncategory_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_actioncategory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_actioncategory_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback bool func(KActionCategory* self, QObject* watched, QEvent* event)
///
void k_actioncategory_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param event QTimerEvent*
///
void k_actioncategory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param event QTimerEvent*
///
void k_actioncategory_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, QTimerEvent* event)
///
void k_actioncategory_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param event QChildEvent*
///
void k_actioncategory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param event QChildEvent*
///
void k_actioncategory_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, QChildEvent* event)
///
void k_actioncategory_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param event QEvent*
///
void k_actioncategory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param event QEvent*
///
void k_actioncategory_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, QEvent* event)
///
void k_actioncategory_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param signal QMetaMethod*
///
void k_actioncategory_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param signal QMetaMethod*
///
void k_actioncategory_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, QMetaMethod* signal)
///
void k_actioncategory_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCategory*
/// @param signal QMetaMethod*
///
void k_actioncategory_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCategory*
/// @param signal QMetaMethod*
///
void k_actioncategory_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, QMetaMethod* signal)
///
void k_actioncategory_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionCategory*
///
QObject* k_actioncategory_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionCategory*
///
QObject* k_actioncategory_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionCategory*
/// @param callback QObject* func(KActionCategory* self)
///
void k_actioncategory_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionCategory*
///
int32_t k_actioncategory_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionCategory*
///
int32_t k_actioncategory_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionCategory*
/// @param callback int32_t func(KActionCategory* self)
///
void k_actioncategory_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionCategory*
/// @param signal const char*
///
int32_t k_actioncategory_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionCategory*
/// @param signal const char*
///
int32_t k_actioncategory_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionCategory*
/// @param callback int32_t func(KActionCategory* self, const char* signal)
///
void k_actioncategory_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionCategory*
/// @param signal QMetaMethod*
///
bool k_actioncategory_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionCategory*
/// @param signal QMetaMethod*
///
bool k_actioncategory_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionCategory*
/// @param callback bool func(KActionCategory* self, QMetaMethod* signal)
///
void k_actioncategory_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KActionCategory*
/// @param callback void func(KActionCategory* self, const char* objectName)
///
void k_actioncategory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kactioncategory.html#dtor.KActionCategory)
///
/// Delete this object from C++ memory.
///
/// @param self KActionCategory*
///
void k_actioncategory_delete(void* self);

#endif
