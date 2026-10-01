#pragma once
#ifndef LIBQSHORTCUT_H
#define LIBQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new constructs a new QShortcut object.
///
/// @param parent QObject*
///
QShortcut* q_shortcut_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new2 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
///
QShortcut* q_shortcut_new2(const void* key, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new3 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
///
QShortcut* q_shortcut_new3(int32_t key, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new4 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
/// @param member const char*
///
QShortcut* q_shortcut_new4(const void* key, void* parent, const char* member);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new5 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
///
QShortcut* q_shortcut_new5(const void* key, void* parent, const char* member, const char* ambiguousMember);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new6 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
/// @param context enum Qt__ShortcutContext
///
QShortcut* q_shortcut_new6(const void* key, void* parent, const char* member, const char* ambiguousMember, int32_t context);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new7 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
/// @param member const char*
///
QShortcut* q_shortcut_new7(int32_t key, void* parent, const char* member);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new8 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
///
QShortcut* q_shortcut_new8(int32_t key, void* parent, const char* member, const char* ambiguousMember);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)

/// q_shortcut_new9 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
/// @param context enum Qt__ShortcutContext
///
QShortcut* q_shortcut_new9(int32_t key, void* parent, const char* member, const char* ambiguousMember, int32_t context);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QShortcut*
///
const QMetaObject* q_shortcut_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QShortcut*
/// @param callback const QMetaObject* func(const QShortcut* self)
///
void q_shortcut_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QShortcut*
///
const QMetaObject* q_shortcut_super_meta_object(const void* self);

/// @param self QShortcut*
/// @param param1 const char*
///
void* q_shortcut_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QShortcut*
/// @param callback void* func(QShortcut* self, const char* param1)
///
void q_shortcut_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QShortcut*
/// @param param1 const char*
///
void* q_shortcut_super_metacast(void* self, const char* param1);

/// @param self QShortcut*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_shortcut_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QShortcut*
/// @param callback int32_t func(QShortcut* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_shortcut_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QShortcut*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_shortcut_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_shortcut_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKey)
///
/// @param self QShortcut*
/// @param key QKeySequence*
///
void q_shortcut_set_key(void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#key)
///
/// @param self const QShortcut*
///
QKeySequence* q_shortcut_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
///
/// @param self QShortcut*
/// @param key enum QKeySequence__StandardKey
///
void q_shortcut_set_keys(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
///
/// @param self QShortcut*
/// @param keys libqt_list of QKeySequence*
///
void q_shortcut_set_keys2(void* self, libqt_list keys);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#keys)
///
/// @param self const QShortcut*
///
/// @return libqt_list of QKeySequence*
///
libqt_list q_shortcut_keys(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setEnabled)
///
/// @param self QShortcut*
/// @param enable bool
///
void q_shortcut_set_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#isEnabled)
///
/// @param self const QShortcut*
///
bool q_shortcut_is_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setContext)
///
/// @param self QShortcut*
/// @param context enum Qt__ShortcutContext
///
void q_shortcut_set_context(void* self, int32_t context);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#context)
///
/// @param self const QShortcut*
///
/// @return enum Qt__ShortcutContext
///
int32_t q_shortcut_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setAutoRepeat)
///
/// @param self QShortcut*
/// @param on bool
///
void q_shortcut_set_auto_repeat(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#autoRepeat)
///
/// @param self const QShortcut*
///
bool q_shortcut_auto_repeat(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#id)
///
/// @param self const QShortcut*
///
int32_t q_shortcut_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setWhatsThis)
///
/// @param self QShortcut*
/// @param text const char*
///
void q_shortcut_set_whats_this(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QShortcut*
///
const char* q_shortcut_whats_this(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activated)
///
/// @param self QShortcut*
///
void q_shortcut_activated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activated)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self)
///
void q_shortcut_on_activated(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
///
/// @param self QShortcut*
///
void q_shortcut_activated_ambiguously(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self)
///
void q_shortcut_on_activated_ambiguously(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// @param self QShortcut*
/// @param e QEvent*
///
bool q_shortcut_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QShortcut*
/// @param callback bool func(QShortcut* self, QEvent* e)
///
void q_shortcut_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// Base class method implementation
///
/// @param self QShortcut*
/// @param e QEvent*
///
bool q_shortcut_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_shortcut_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_shortcut_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QShortcut*
///
const char* q_shortcut_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QShortcut*
/// @param name const char*
///
void q_shortcut_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QShortcut*
///
bool q_shortcut_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QShortcut*
///
bool q_shortcut_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QShortcut*
///
bool q_shortcut_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QShortcut*
///
bool q_shortcut_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QShortcut*
/// @param b bool
///
bool q_shortcut_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QShortcut*
///
QThread* q_shortcut_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QShortcut*
/// @param thread QThread*
///
bool q_shortcut_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QShortcut*
/// @param interval int
///
int32_t q_shortcut_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QShortcut*
/// @param time int64_t of nanoseconds
///
int32_t q_shortcut_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QShortcut*
/// @param id int
///
void q_shortcut_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QShortcut*
/// @param id enum Qt__TimerId
///
void q_shortcut_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QShortcut*
///
/// @return libqt_list of QObject*
///
libqt_list q_shortcut_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QShortcut*
/// @param parent QObject*
///
void q_shortcut_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QShortcut*
/// @param filterObj QObject*
///
void q_shortcut_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QShortcut*
/// @param obj QObject*
///
void q_shortcut_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_shortcut_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_shortcut_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QShortcut*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_shortcut_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_shortcut_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_shortcut_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QShortcut*
///
bool q_shortcut_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QShortcut*
/// @param receiver QObject*
///
bool q_shortcut_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_shortcut_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QShortcut*
///
void q_shortcut_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QShortcut*
///
void q_shortcut_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QShortcut*
/// @param name const char*
/// @param value QVariant*
///
bool q_shortcut_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QShortcut*
/// @param name const char*
///
QVariant* q_shortcut_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QShortcut*
///
const char** q_shortcut_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QShortcut*
///
QBindingStorage* q_shortcut_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QShortcut*
///
const QBindingStorage* q_shortcut_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
///
void q_shortcut_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self)
///
void q_shortcut_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QShortcut*
///
QObject* q_shortcut_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QShortcut*
/// @param classname const char*
///
bool q_shortcut_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QShortcut*
///
void q_shortcut_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QShortcut*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_shortcut_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QShortcut*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_shortcut_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_shortcut_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_shortcut_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QShortcut*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_shortcut_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QShortcut*
/// @param signal const char*
///
bool q_shortcut_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QShortcut*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_shortcut_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QShortcut*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_shortcut_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QShortcut*
/// @param receiver QObject*
/// @param member const char*
///
bool q_shortcut_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
/// @param param1 QObject*
///
void q_shortcut_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QObject* param1)
///
void q_shortcut_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_shortcut_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_shortcut_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback bool func(QShortcut* self, QObject* watched, QEvent* event)
///
void q_shortcut_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param event QTimerEvent*
///
void q_shortcut_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param event QTimerEvent*
///
void q_shortcut_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QTimerEvent* event)
///
void q_shortcut_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param event QChildEvent*
///
void q_shortcut_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param event QChildEvent*
///
void q_shortcut_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QChildEvent* event)
///
void q_shortcut_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param event QEvent*
///
void q_shortcut_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param event QEvent*
///
void q_shortcut_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QEvent* event)
///
void q_shortcut_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
///
void q_shortcut_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
///
void q_shortcut_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QMetaMethod* signal)
///
void q_shortcut_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
///
void q_shortcut_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
///
void q_shortcut_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QMetaMethod* signal)
///
void q_shortcut_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QShortcut*
///
QObject* q_shortcut_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QShortcut*
///
QObject* q_shortcut_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QShortcut*
/// @param callback QObject* func(QShortcut* self)
///
void q_shortcut_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QShortcut*
///
int32_t q_shortcut_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QShortcut*
///
int32_t q_shortcut_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QShortcut*
/// @param callback int32_t func(QShortcut* self)
///
void q_shortcut_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QShortcut*
/// @param signal const char*
///
int32_t q_shortcut_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QShortcut*
/// @param signal const char*
///
int32_t q_shortcut_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QShortcut*
/// @param callback int32_t func(QShortcut* self, const char* signal)
///
void q_shortcut_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QShortcut*
/// @param signal QMetaMethod*
///
bool q_shortcut_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QShortcut*
/// @param signal QMetaMethod*
///
bool q_shortcut_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QShortcut*
/// @param callback bool func(QShortcut* self, QMetaMethod* signal)
///
void q_shortcut_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, const char* objectName)
///
void q_shortcut_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#dtor.QShortcut)
///
/// Delete this object from C++ memory.
///
/// @param self QShortcut*
///
void q_shortcut_delete(void* self);

#endif
