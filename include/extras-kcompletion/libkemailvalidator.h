#pragma once
#ifndef SRC_EXTRAS_KCOMPLETION_QT6C_LIBKEMAILVALIDATOR_H
#define SRC_EXTRAS_KCOMPLETION_QT6C_LIBKEMAILVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kemailvalidator.html)

/// k_emailvalidator_new constructs a new KEmailValidator object.
///
KEmailValidator* k_emailvalidator_new();

/// [Upstream resources](https://api.kde.org/kemailvalidator.html)

/// k_emailvalidator_new2 constructs a new KEmailValidator object.
///
/// @param parent QObject*
///
KEmailValidator* k_emailvalidator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KEmailValidator*
///
const QMetaObject* k_emailvalidator_meta_object(void* self);

/// @param self KEmailValidator*
/// @param param1 const char*
///
void* k_emailvalidator_metacast(void* self, const char* param1);

/// @param self KEmailValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_emailvalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KEmailValidator*
/// @param callback int32_t func(KEmailValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_emailvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KEmailValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_emailvalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_emailvalidator_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#validate)
///
/// @param self KEmailValidator*
/// @param str const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t k_emailvalidator_validate(void* self, const char* str, int* pos);

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self KEmailValidator*
/// @param callback int32_t func(KEmailValidator* self, const char* str, int* pos)
///
void k_emailvalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#validate)
///
/// Base class method implementation
///
/// @param self KEmailValidator*
/// @param str const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t k_emailvalidator_qbase_validate(void* self, const char* str, int* pos);

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#fixup)
///
/// @param self KEmailValidator*
/// @param str const char*
///
void k_emailvalidator_fixup(void* self, const char* str);

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, const char* str)
///
void k_emailvalidator_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self KEmailValidator*
/// @param str const char*
///
void k_emailvalidator_qbase_fixup(void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_emailvalidator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_emailvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self KEmailValidator*
/// @param locale QLocale*
///
void k_emailvalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self KEmailValidator*
///
QLocale* k_emailvalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self KEmailValidator*
///
void k_emailvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self)
///
void k_emailvalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEmailValidator*
///
const char* k_emailvalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KEmailValidator*
/// @param name char*
///
void k_emailvalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KEmailValidator*
///
bool k_emailvalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KEmailValidator*
///
bool k_emailvalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KEmailValidator*
///
bool k_emailvalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KEmailValidator*
///
bool k_emailvalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KEmailValidator*
/// @param b bool
///
bool k_emailvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KEmailValidator*
///
QThread* k_emailvalidator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KEmailValidator*
/// @param thread QThread*
///
bool k_emailvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KEmailValidator*
/// @param interval int
///
int32_t k_emailvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KEmailValidator*
/// @param id int
///
void k_emailvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KEmailValidator*
/// @param id enum Qt__TimerId
///
void k_emailvalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KEmailValidator*
///
libqt_list /* of QObject* */ k_emailvalidator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KEmailValidator*
/// @param parent QObject*
///
void k_emailvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KEmailValidator*
/// @param filterObj QObject*
///
void k_emailvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KEmailValidator*
/// @param obj QObject*
///
void k_emailvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_emailvalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KEmailValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_emailvalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_emailvalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_emailvalidator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KEmailValidator*
///
void k_emailvalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KEmailValidator*
///
void k_emailvalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KEmailValidator*
/// @param name const char*
/// @param value QVariant*
///
bool k_emailvalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KEmailValidator*
/// @param name const char*
///
QVariant* k_emailvalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEmailValidator*
///
const char** k_emailvalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KEmailValidator*
///
QBindingStorage* k_emailvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KEmailValidator*
///
const QBindingStorage* k_emailvalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEmailValidator*
///
void k_emailvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self)
///
void k_emailvalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KEmailValidator*
///
QObject* k_emailvalidator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KEmailValidator*
/// @param classname const char*
///
bool k_emailvalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KEmailValidator*
///
void k_emailvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KEmailValidator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_emailvalidator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KEmailValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_emailvalidator_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_emailvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KEmailValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_emailvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEmailValidator*
/// @param param1 QObject*
///
void k_emailvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, QObject* param1)
///
void k_emailvalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QEvent*
///
bool k_emailvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QEvent*
///
bool k_emailvalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback bool func(KEmailValidator* self, QEvent* event)
///
void k_emailvalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_emailvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_emailvalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback bool func(KEmailValidator* self, QObject* watched, QEvent* event)
///
void k_emailvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QTimerEvent*
///
void k_emailvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QTimerEvent*
///
void k_emailvalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, QTimerEvent* event)
///
void k_emailvalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QChildEvent*
///
void k_emailvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QChildEvent*
///
void k_emailvalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, QChildEvent* event)
///
void k_emailvalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QEvent*
///
void k_emailvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param event QEvent*
///
void k_emailvalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, QEvent* event)
///
void k_emailvalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal QMetaMethod*
///
void k_emailvalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal QMetaMethod*
///
void k_emailvalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, QMetaMethod* signal)
///
void k_emailvalidator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal QMetaMethod*
///
void k_emailvalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal QMetaMethod*
///
void k_emailvalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, QMetaMethod* signal)
///
void k_emailvalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
///
QObject* k_emailvalidator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
///
QObject* k_emailvalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback QObject* func()
///
void k_emailvalidator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
///
int32_t k_emailvalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
///
int32_t k_emailvalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback int32_t func()
///
void k_emailvalidator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal const char*
///
int32_t k_emailvalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal const char*
///
int32_t k_emailvalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback int32_t func(KEmailValidator* self, const char* signal)
///
void k_emailvalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal QMetaMethod*
///
bool k_emailvalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param signal QMetaMethod*
///
bool k_emailvalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KEmailValidator*
/// @param callback bool func(KEmailValidator* self, QMetaMethod* signal)
///
void k_emailvalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KEmailValidator*
/// @param callback void func(KEmailValidator* self, const char* objectName)
///
void k_emailvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kemailvalidator.html#dtor.KEmailValidator)
///
/// Delete this object from C++ memory.
///
/// @param self KEmailValidator*
///
void k_emailvalidator_delete(void* self);

#endif
