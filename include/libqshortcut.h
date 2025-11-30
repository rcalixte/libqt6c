#pragma once
#ifndef SRC_QT6C_LIBQSHORTCUT_H
#define SRC_QT6C_LIBQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qshortcut.html

/// q_shortcut_new constructs a new QShortcut object.
///
/// @param parent QObject*
QShortcut* q_shortcut_new(void* parent);

/// q_shortcut_new2 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
QShortcut* q_shortcut_new2(void* key, void* parent);

/// q_shortcut_new3 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
QShortcut* q_shortcut_new3(int32_t key, void* parent);

/// q_shortcut_new4 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
/// @param member const char*
QShortcut* q_shortcut_new4(void* key, void* parent, const char* member);

/// q_shortcut_new5 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
QShortcut* q_shortcut_new5(void* key, void* parent, const char* member, const char* ambiguousMember);

/// q_shortcut_new6 constructs a new QShortcut object.
///
/// @param key QKeySequence*
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
/// @param context enum Qt__ShortcutContext
QShortcut* q_shortcut_new6(void* key, void* parent, const char* member, const char* ambiguousMember, int32_t context);

/// q_shortcut_new7 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
/// @param member const char*
QShortcut* q_shortcut_new7(int32_t key, void* parent, const char* member);

/// q_shortcut_new8 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
QShortcut* q_shortcut_new8(int32_t key, void* parent, const char* member, const char* ambiguousMember);

/// q_shortcut_new9 constructs a new QShortcut object.
///
/// @param key enum QKeySequence__StandardKey
/// @param parent QObject*
/// @param member const char*
/// @param ambiguousMember const char*
/// @param context enum Qt__ShortcutContext
QShortcut* q_shortcut_new9(int32_t key, void* parent, const char* member, const char* ambiguousMember, int32_t context);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QShortcut*
const QMetaObject* q_shortcut_meta_object(void* self);

/// @param self QShortcut*
/// @param param1 const char*
void* q_shortcut_metacast(void* self, const char* param1);

/// @param self QShortcut*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_shortcut_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QShortcut*
/// @param callback int32_t func(QShortcut* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_shortcut_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QShortcut*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_shortcut_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_shortcut_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKey)
///
/// @param self QShortcut*
/// @param key QKeySequence*
void q_shortcut_set_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#key)
///
/// @param self QShortcut*
QKeySequence* q_shortcut_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
///
/// @param self QShortcut*
/// @param key enum QKeySequence__StandardKey
void q_shortcut_set_keys(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
///
/// @param self QShortcut*
/// @param keys libqt_list /* of QKeySequence* */
void q_shortcut_set_keys2(void* self, libqt_list keys);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#keys)
///
/// @param self QShortcut*
libqt_list /* of QKeySequence* */ q_shortcut_keys(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setEnabled)
///
/// @param self QShortcut*
/// @param enable bool
void q_shortcut_set_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#isEnabled)
///
/// @param self QShortcut*
bool q_shortcut_is_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setContext)
///
/// @param self QShortcut*
/// @param context enum Qt__ShortcutContext
void q_shortcut_set_context(void* self, int32_t context);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#context)
///
/// @param self QShortcut*
///
/// @return enum Qt__ShortcutContext
int32_t q_shortcut_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setAutoRepeat)
///
/// @param self QShortcut*
/// @param on bool
void q_shortcut_set_auto_repeat(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#autoRepeat)
///
/// @param self QShortcut*
bool q_shortcut_auto_repeat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#id)
///
/// @param self QShortcut*
int32_t q_shortcut_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setWhatsThis)
///
/// @param self QShortcut*
/// @param text const char*
void q_shortcut_set_whats_this(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QShortcut*
const char* q_shortcut_whats_this(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activated)
///
/// @param self QShortcut*
void q_shortcut_activated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activated)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self)
void q_shortcut_on_activated(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
///
/// @param self QShortcut*
void q_shortcut_activated_ambiguously(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self)
void q_shortcut_on_activated_ambiguously(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// @param self QShortcut*
/// @param e QEvent*
bool q_shortcut_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QShortcut*
/// @param callback bool func(QShortcut* self, QEvent* e)
void q_shortcut_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
///
/// Base class method implementation
///
/// @param self QShortcut*
/// @param e QEvent*
bool q_shortcut_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_shortcut_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_shortcut_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QShortcut*
const char* q_shortcut_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QShortcut*
/// @param name char*
void q_shortcut_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QShortcut*
bool q_shortcut_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QShortcut*
bool q_shortcut_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QShortcut*
bool q_shortcut_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QShortcut*
bool q_shortcut_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QShortcut*
/// @param b bool
bool q_shortcut_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QShortcut*
QThread* q_shortcut_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QShortcut*
/// @param thread QThread*
bool q_shortcut_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QShortcut*
/// @param interval int
int32_t q_shortcut_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QShortcut*
/// @param id int
void q_shortcut_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QShortcut*
/// @param id enum Qt__TimerId
void q_shortcut_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QShortcut*
libqt_list /* of QObject* */ q_shortcut_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QShortcut*
/// @param parent QObject*
void q_shortcut_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QShortcut*
/// @param filterObj QObject*
void q_shortcut_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QShortcut*
/// @param obj QObject*
void q_shortcut_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_shortcut_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QShortcut*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_shortcut_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_shortcut_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_shortcut_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QShortcut*
void q_shortcut_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QShortcut*
void q_shortcut_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QShortcut*
/// @param name const char*
/// @param value QVariant*
bool q_shortcut_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QShortcut*
/// @param name const char*
QVariant* q_shortcut_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QShortcut*
const char** q_shortcut_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QShortcut*
QBindingStorage* q_shortcut_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QShortcut*
const QBindingStorage* q_shortcut_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
void q_shortcut_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self)
void q_shortcut_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QShortcut*
QObject* q_shortcut_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QShortcut*
/// @param classname const char*
bool q_shortcut_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QShortcut*
void q_shortcut_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QShortcut*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_shortcut_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QShortcut*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_shortcut_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_shortcut_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QShortcut*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_shortcut_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
/// @param param1 QObject*
void q_shortcut_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QObject* param1)
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
bool q_shortcut_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback bool func(QShortcut* self, QObject* watched, QEvent* event)
void q_shortcut_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param event QTimerEvent*
void q_shortcut_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param event QTimerEvent*
void q_shortcut_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QTimerEvent* event)
void q_shortcut_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param event QChildEvent*
void q_shortcut_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param event QChildEvent*
void q_shortcut_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QChildEvent* event)
void q_shortcut_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param event QEvent*
void q_shortcut_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param event QEvent*
void q_shortcut_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QEvent* event)
void q_shortcut_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
void q_shortcut_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
void q_shortcut_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QMetaMethod* signal)
void q_shortcut_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
void q_shortcut_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
void q_shortcut_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, QMetaMethod* signal)
void q_shortcut_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
QObject* q_shortcut_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
QObject* q_shortcut_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback QObject* func()
void q_shortcut_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
int32_t q_shortcut_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
int32_t q_shortcut_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback int32_t func()
void q_shortcut_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param signal const char*
int32_t q_shortcut_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param signal const char*
int32_t q_shortcut_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback int32_t func(QShortcut* self, const char* signal)
void q_shortcut_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
bool q_shortcut_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcut*
/// @param signal QMetaMethod*
bool q_shortcut_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcut*
/// @param callback bool func(QShortcut* self, QMetaMethod* signal)
void q_shortcut_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QShortcut*
/// @param callback void func(QShortcut* self, const char* objectName)
void q_shortcut_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#dtor.QShortcut)
///
/// Delete this object from C++ memory.
///
/// @param self QShortcut*
void q_shortcut_delete(void* self);

#endif
