#pragma once
#ifndef SRC_QT6C_LIBQVALIDATOR_H
#define SRC_QT6C_LIBQVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qvalidator.html

/// q_validator_new constructs a new QValidator object.
///
QValidator* q_validator_new();

/// q_validator_new2 constructs a new QValidator object.
///
/// @param parent QObject*
QValidator* q_validator_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QValidator*
const QMetaObject* q_validator_meta_object(void* self);

/// @param self QValidator*
/// @param param1 const char*
void* q_validator_metacast(void* self, const char* param1);

/// @param self QValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_validator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QValidator*
/// @param callback int32_t func(QValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_validator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_validator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_validator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QValidator*
/// @param locale QLocale*
void q_validator_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self QValidator*
QLocale* q_validator_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// @param self QValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
int32_t q_validator_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QValidator*
/// @param callback int32_t func(QValidator* self, const char* param1, int* param2)
void q_validator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// Base class method implementation
///
/// @param self QValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
int32_t q_validator_qbase_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// @param self QValidator*
/// @param param1 const char*
void q_validator_fixup(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, const char* param1)
void q_validator_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self QValidator*
/// @param param1 const char*
void q_validator_qbase_fixup(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QValidator*
void q_validator_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QValidator*
/// @param callback void func(QValidator* self)
void q_validator_on_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_validator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_validator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QValidator*
const char* q_validator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QValidator*
/// @param name char*
void q_validator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QValidator*
bool q_validator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QValidator*
bool q_validator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QValidator*
bool q_validator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QValidator*
bool q_validator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QValidator*
/// @param b bool
bool q_validator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QValidator*
QThread* q_validator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QValidator*
/// @param thread QThread*
bool q_validator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValidator*
/// @param interval int
int32_t q_validator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValidator*
/// @param id int
void q_validator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValidator*
/// @param id enum Qt__TimerId
void q_validator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QValidator*
libqt_list /* of QObject* */ q_validator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QValidator*
/// @param parent QObject*
void q_validator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QValidator*
/// @param filterObj QObject*
void q_validator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QValidator*
/// @param obj QObject*
void q_validator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_validator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_validator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_validator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_validator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QValidator*
void q_validator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QValidator*
void q_validator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QValidator*
/// @param name const char*
/// @param value QVariant*
bool q_validator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QValidator*
/// @param name const char*
QVariant* q_validator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QValidator*
const char** q_validator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QValidator*
QBindingStorage* q_validator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QValidator*
const QBindingStorage* q_validator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
void q_validator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
/// @param callback void func(QValidator* self)
void q_validator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QValidator*
QObject* q_validator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QValidator*
/// @param classname const char*
bool q_validator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QValidator*
void q_validator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QValidator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_validator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_validator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_validator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_validator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
/// @param param1 QObject*
void q_validator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QObject* param1)
void q_validator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
bool q_validator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
bool q_validator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback bool func(QValidator* self, QEvent* event)
void q_validator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_validator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_validator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback bool func(QValidator* self, QObject* watched, QEvent* event)
void q_validator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QTimerEvent*
void q_validator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QTimerEvent*
void q_validator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QTimerEvent* event)
void q_validator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QChildEvent*
void q_validator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QChildEvent*
void q_validator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QChildEvent* event)
void q_validator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
void q_validator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
void q_validator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QEvent* event)
void q_validator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
void q_validator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
void q_validator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QMetaMethod* signal)
void q_validator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
void q_validator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
void q_validator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QMetaMethod* signal)
void q_validator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
QObject* q_validator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
QObject* q_validator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback QObject* func()
void q_validator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
int32_t q_validator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
int32_t q_validator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback int32_t func()
void q_validator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param signal const char*
int32_t q_validator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param signal const char*
int32_t q_validator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback int32_t func(QValidator* self, const char* signal)
void q_validator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
bool q_validator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
bool q_validator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback bool func(QValidator* self, QMetaMethod* signal)
void q_validator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, const char* objectName)
void q_validator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#dtor.QValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QValidator*
void q_validator_delete(void* self);

/// https://doc.qt.io/qt-6/qintvalidator.html

/// q_intvalidator_new constructs a new QIntValidator object.
///
QIntValidator* q_intvalidator_new();

/// q_intvalidator_new2 constructs a new QIntValidator object.
///
/// @param bottom int
/// @param top int
QIntValidator* q_intvalidator_new2(int bottom, int top);

/// q_intvalidator_new3 constructs a new QIntValidator object.
///
/// @param parent QObject*
QIntValidator* q_intvalidator_new3(void* parent);

/// q_intvalidator_new4 constructs a new QIntValidator object.
///
/// @param bottom int
/// @param top int
/// @param parent QObject*
QIntValidator* q_intvalidator_new4(int bottom, int top, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QIntValidator*
const QMetaObject* q_intvalidator_meta_object(void* self);

/// @param self QIntValidator*
/// @param param1 const char*
void* q_intvalidator_metacast(void* self, const char* param1);

/// @param self QIntValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_intvalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QIntValidator*
/// @param callback int32_t func(QIntValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_intvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QIntValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_intvalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_intvalidator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// @param self QIntValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
int32_t q_intvalidator_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QIntValidator*
/// @param callback int32_t func(QIntValidator* self, const char* param1, int* param2)
void q_intvalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// Base class method implementation
///
/// @param self QIntValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
int32_t q_intvalidator_qbase_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// @param self QIntValidator*
/// @param input const char*
void q_intvalidator_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, const char* input)
void q_intvalidator_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self QIntValidator*
/// @param input const char*
void q_intvalidator_qbase_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#setBottom)
///
/// @param self QIntValidator*
/// @param bottom int
void q_intvalidator_set_bottom(void* self, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#setTop)
///
/// @param self QIntValidator*
/// @param top int
void q_intvalidator_set_top(void* self, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#setRange)
///
/// @param self QIntValidator*
/// @param bottom int
/// @param top int
void q_intvalidator_set_range(void* self, int bottom, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#bottom)
///
/// @param self QIntValidator*
int32_t q_intvalidator_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#top)
///
/// @param self QIntValidator*
int32_t q_intvalidator_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#bottomChanged)
///
/// @param self QIntValidator*
/// @param bottom int
void q_intvalidator_bottom_changed(void* self, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#bottomChanged)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, int bottom)
void q_intvalidator_on_bottom_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#topChanged)
///
/// @param self QIntValidator*
/// @param top int
void q_intvalidator_top_changed(void* self, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#topChanged)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, int top)
void q_intvalidator_on_top_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_intvalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_intvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QIntValidator*
/// @param locale QLocale*
void q_intvalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self QIntValidator*
QLocale* q_intvalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QIntValidator*
void q_intvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self)
void q_intvalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QIntValidator*
const char* q_intvalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QIntValidator*
/// @param name char*
void q_intvalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QIntValidator*
bool q_intvalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QIntValidator*
bool q_intvalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QIntValidator*
bool q_intvalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QIntValidator*
bool q_intvalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QIntValidator*
/// @param b bool
bool q_intvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QIntValidator*
QThread* q_intvalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIntValidator*
/// @param thread QThread*
bool q_intvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIntValidator*
/// @param interval int
int32_t q_intvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIntValidator*
/// @param id int
void q_intvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIntValidator*
/// @param id enum Qt__TimerId
void q_intvalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QIntValidator*
libqt_list /* of QObject* */ q_intvalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QIntValidator*
/// @param parent QObject*
void q_intvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QIntValidator*
/// @param filterObj QObject*
void q_intvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QIntValidator*
/// @param obj QObject*
void q_intvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_intvalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QIntValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_intvalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_intvalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_intvalidator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QIntValidator*
void q_intvalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QIntValidator*
void q_intvalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QIntValidator*
/// @param name const char*
/// @param value QVariant*
bool q_intvalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QIntValidator*
/// @param name const char*
QVariant* q_intvalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QIntValidator*
const char** q_intvalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIntValidator*
QBindingStorage* q_intvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIntValidator*
const QBindingStorage* q_intvalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
void q_intvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self)
void q_intvalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QIntValidator*
QObject* q_intvalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QIntValidator*
/// @param classname const char*
bool q_intvalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QIntValidator*
void q_intvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIntValidator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_intvalidator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIntValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_intvalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_intvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QIntValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_intvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
/// @param param1 QObject*
void q_intvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QObject* param1)
void q_intvalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
bool q_intvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
bool q_intvalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback bool func(QIntValidator* self, QEvent* event)
void q_intvalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_intvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_intvalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback bool func(QIntValidator* self, QObject* watched, QEvent* event)
void q_intvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QTimerEvent*
void q_intvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QTimerEvent*
void q_intvalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QTimerEvent* event)
void q_intvalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QChildEvent*
void q_intvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QChildEvent*
void q_intvalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QChildEvent* event)
void q_intvalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
void q_intvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
void q_intvalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QEvent* event)
void q_intvalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
void q_intvalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
void q_intvalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QMetaMethod* signal)
void q_intvalidator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
void q_intvalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
void q_intvalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QMetaMethod* signal)
void q_intvalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
QObject* q_intvalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
QObject* q_intvalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback QObject* func()
void q_intvalidator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
int32_t q_intvalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
int32_t q_intvalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback int32_t func()
void q_intvalidator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param signal const char*
int32_t q_intvalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param signal const char*
int32_t q_intvalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback int32_t func(QIntValidator* self, const char* signal)
void q_intvalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
bool q_intvalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
bool q_intvalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback bool func(QIntValidator* self, QMetaMethod* signal)
void q_intvalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, const char* objectName)
void q_intvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qintvalidator.html#dtor.QIntValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QIntValidator*
void q_intvalidator_delete(void* self);

/// https://doc.qt.io/qt-6/qdoublevalidator.html

/// q_doublevalidator_new constructs a new QDoubleValidator object.
///
QDoubleValidator* q_doublevalidator_new();

/// q_doublevalidator_new2 constructs a new QDoubleValidator object.
///
/// @param bottom double
/// @param top double
/// @param decimals int
QDoubleValidator* q_doublevalidator_new2(double bottom, double top, int decimals);

/// q_doublevalidator_new3 constructs a new QDoubleValidator object.
///
/// @param parent QObject*
QDoubleValidator* q_doublevalidator_new3(void* parent);

/// q_doublevalidator_new4 constructs a new QDoubleValidator object.
///
/// @param bottom double
/// @param top double
/// @param decimals int
/// @param parent QObject*
QDoubleValidator* q_doublevalidator_new4(double bottom, double top, int decimals, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDoubleValidator*
const QMetaObject* q_doublevalidator_meta_object(void* self);

/// @param self QDoubleValidator*
/// @param param1 const char*
void* q_doublevalidator_metacast(void* self, const char* param1);

/// @param self QDoubleValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_doublevalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDoubleValidator*
/// @param callback int32_t func(QDoubleValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_doublevalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDoubleValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_doublevalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_doublevalidator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// @param self QDoubleValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
int32_t q_doublevalidator_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleValidator*
/// @param callback int32_t func(QDoubleValidator* self, const char* param1, int* param2)
void q_doublevalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// Base class method implementation
///
/// @param self QDoubleValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
int32_t q_doublevalidator_qbase_validate(void* self, const char* param1, int* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// @param self QDoubleValidator*
/// @param input const char*
void q_doublevalidator_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, const char* input)
void q_doublevalidator_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self QDoubleValidator*
/// @param input const char*
void q_doublevalidator_qbase_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setRange)
///
/// @param self QDoubleValidator*
/// @param bottom double
/// @param top double
/// @param decimals int
void q_doublevalidator_set_range(void* self, double bottom, double top, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setRange)
///
/// @param self QDoubleValidator*
/// @param bottom double
/// @param top double
void q_doublevalidator_set_range2(void* self, double bottom, double top);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setBottom)
///
/// @param self QDoubleValidator*
/// @param bottom double
void q_doublevalidator_set_bottom(void* self, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setTop)
///
/// @param self QDoubleValidator*
/// @param top double
void q_doublevalidator_set_top(void* self, double top);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setDecimals)
///
/// @param self QDoubleValidator*
/// @param decimals int
void q_doublevalidator_set_decimals(void* self, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#setNotation)
///
/// @param self QDoubleValidator*
/// @param notation enum QDoubleValidator__Notation
void q_doublevalidator_set_notation(void* self, int32_t notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#bottom)
///
/// @param self QDoubleValidator*
double q_doublevalidator_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#top)
///
/// @param self QDoubleValidator*
double q_doublevalidator_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#decimals)
///
/// @param self QDoubleValidator*
int32_t q_doublevalidator_decimals(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#notation)
///
/// @param self QDoubleValidator*
///
/// @return enum QDoubleValidator__Notation
int32_t q_doublevalidator_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#bottomChanged)
///
/// @param self QDoubleValidator*
/// @param bottom double
void q_doublevalidator_bottom_changed(void* self, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#bottomChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, double bottom)
void q_doublevalidator_on_bottom_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#topChanged)
///
/// @param self QDoubleValidator*
/// @param top double
void q_doublevalidator_top_changed(void* self, double top);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#topChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, double top)
void q_doublevalidator_on_top_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#decimalsChanged)
///
/// @param self QDoubleValidator*
/// @param decimals int
void q_doublevalidator_decimals_changed(void* self, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#decimalsChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, int decimals)
void q_doublevalidator_on_decimals_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#notationChanged)
///
/// @param self QDoubleValidator*
/// @param notation enum QDoubleValidator__Notation
void q_doublevalidator_notation_changed(void* self, int32_t notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#notationChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, enum QDoubleValidator__Notation notation)
void q_doublevalidator_on_notation_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_doublevalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_doublevalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QDoubleValidator*
/// @param locale QLocale*
void q_doublevalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self QDoubleValidator*
QLocale* q_doublevalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QDoubleValidator*
void q_doublevalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self)
void q_doublevalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDoubleValidator*
const char* q_doublevalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDoubleValidator*
/// @param name char*
void q_doublevalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDoubleValidator*
bool q_doublevalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDoubleValidator*
bool q_doublevalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDoubleValidator*
bool q_doublevalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDoubleValidator*
bool q_doublevalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDoubleValidator*
/// @param b bool
bool q_doublevalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDoubleValidator*
QThread* q_doublevalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDoubleValidator*
/// @param thread QThread*
bool q_doublevalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleValidator*
/// @param interval int
int32_t q_doublevalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDoubleValidator*
/// @param id int
void q_doublevalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDoubleValidator*
/// @param id enum Qt__TimerId
void q_doublevalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDoubleValidator*
libqt_list /* of QObject* */ q_doublevalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDoubleValidator*
/// @param parent QObject*
void q_doublevalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDoubleValidator*
/// @param filterObj QObject*
void q_doublevalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDoubleValidator*
/// @param obj QObject*
void q_doublevalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_doublevalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDoubleValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_doublevalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_doublevalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_doublevalidator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDoubleValidator*
void q_doublevalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDoubleValidator*
void q_doublevalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDoubleValidator*
/// @param name const char*
/// @param value QVariant*
bool q_doublevalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDoubleValidator*
/// @param name const char*
QVariant* q_doublevalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDoubleValidator*
const char** q_doublevalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDoubleValidator*
QBindingStorage* q_doublevalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDoubleValidator*
const QBindingStorage* q_doublevalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
void q_doublevalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self)
void q_doublevalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDoubleValidator*
QObject* q_doublevalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDoubleValidator*
/// @param classname const char*
bool q_doublevalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDoubleValidator*
void q_doublevalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDoubleValidator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_doublevalidator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_doublevalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_doublevalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDoubleValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_doublevalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
/// @param param1 QObject*
void q_doublevalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QObject* param1)
void q_doublevalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
bool q_doublevalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
bool q_doublevalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback bool func(QDoubleValidator* self, QEvent* event)
void q_doublevalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_doublevalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_doublevalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback bool func(QDoubleValidator* self, QObject* watched, QEvent* event)
void q_doublevalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QTimerEvent*
void q_doublevalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QTimerEvent*
void q_doublevalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QTimerEvent* event)
void q_doublevalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QChildEvent*
void q_doublevalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QChildEvent*
void q_doublevalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QChildEvent* event)
void q_doublevalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
void q_doublevalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
void q_doublevalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QEvent* event)
void q_doublevalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
void q_doublevalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
void q_doublevalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QMetaMethod* signal)
void q_doublevalidator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
void q_doublevalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
void q_doublevalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QMetaMethod* signal)
void q_doublevalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
QObject* q_doublevalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
QObject* q_doublevalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback QObject* func()
void q_doublevalidator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
int32_t q_doublevalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
int32_t q_doublevalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback int32_t func()
void q_doublevalidator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal const char*
int32_t q_doublevalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal const char*
int32_t q_doublevalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback int32_t func(QDoubleValidator* self, const char* signal)
void q_doublevalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
bool q_doublevalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
bool q_doublevalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback bool func(QDoubleValidator* self, QMetaMethod* signal)
void q_doublevalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, const char* objectName)
void q_doublevalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublevalidator.html#dtor.QDoubleValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QDoubleValidator*
void q_doublevalidator_delete(void* self);

/// https://doc.qt.io/qt-6/qregularexpressionvalidator.html

/// q_regularexpressionvalidator_new constructs a new QRegularExpressionValidator object.
///
QRegularExpressionValidator* q_regularexpressionvalidator_new();

/// q_regularexpressionvalidator_new2 constructs a new QRegularExpressionValidator object.
///
/// @param re QRegularExpression*
QRegularExpressionValidator* q_regularexpressionvalidator_new2(void* re);

/// q_regularexpressionvalidator_new3 constructs a new QRegularExpressionValidator object.
///
/// @param parent QObject*
QRegularExpressionValidator* q_regularexpressionvalidator_new3(void* parent);

/// q_regularexpressionvalidator_new4 constructs a new QRegularExpressionValidator object.
///
/// @param re QRegularExpression*
/// @param parent QObject*
QRegularExpressionValidator* q_regularexpressionvalidator_new4(void* re, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QRegularExpressionValidator*
const QMetaObject* q_regularexpressionvalidator_meta_object(void* self);

/// @param self QRegularExpressionValidator*
/// @param param1 const char*
void* q_regularexpressionvalidator_metacast(void* self, const char* param1);

/// @param self QRegularExpressionValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_regularexpressionvalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QRegularExpressionValidator*
/// @param callback int32_t func(QRegularExpressionValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_regularexpressionvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QRegularExpressionValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_regularexpressionvalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_regularexpressionvalidator_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// @param self QRegularExpressionValidator*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
int32_t q_regularexpressionvalidator_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QRegularExpressionValidator*
/// @param callback int32_t func(QRegularExpressionValidator* self, const char* input, int* pos)
void q_regularexpressionvalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// Base class method implementation
///
/// @param self QRegularExpressionValidator*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
int32_t q_regularexpressionvalidator_qbase_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpression)
///
/// @param self QRegularExpressionValidator*
QRegularExpression* q_regularexpressionvalidator_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#setRegularExpression)
///
/// @param self QRegularExpressionValidator*
/// @param re QRegularExpression*
void q_regularexpressionvalidator_set_regular_expression(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpressionChanged)
///
/// @param self QRegularExpressionValidator*
/// @param re QRegularExpression*
void q_regularexpressionvalidator_regular_expression_changed(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpressionChanged)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QRegularExpression* re)
void q_regularexpressionvalidator_on_regular_expression_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_regularexpressionvalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_regularexpressionvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QRegularExpressionValidator*
/// @param locale QLocale*
void q_regularexpressionvalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self QRegularExpressionValidator*
QLocale* q_regularexpressionvalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QRegularExpressionValidator*
void q_regularexpressionvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self)
void q_regularexpressionvalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpressionValidator*
const char* q_regularexpressionvalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QRegularExpressionValidator*
/// @param name char*
void q_regularexpressionvalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QRegularExpressionValidator*
bool q_regularexpressionvalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QRegularExpressionValidator*
bool q_regularexpressionvalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QRegularExpressionValidator*
bool q_regularexpressionvalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QRegularExpressionValidator*
bool q_regularexpressionvalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QRegularExpressionValidator*
/// @param b bool
bool q_regularexpressionvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QRegularExpressionValidator*
QThread* q_regularexpressionvalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRegularExpressionValidator*
/// @param thread QThread*
bool q_regularexpressionvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRegularExpressionValidator*
/// @param interval int
int32_t q_regularexpressionvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRegularExpressionValidator*
/// @param id int
void q_regularexpressionvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRegularExpressionValidator*
/// @param id enum Qt__TimerId
void q_regularexpressionvalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QRegularExpressionValidator*
libqt_list /* of QObject* */ q_regularexpressionvalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QRegularExpressionValidator*
/// @param parent QObject*
void q_regularexpressionvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QRegularExpressionValidator*
/// @param filterObj QObject*
void q_regularexpressionvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QRegularExpressionValidator*
/// @param obj QObject*
void q_regularexpressionvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_regularexpressionvalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QRegularExpressionValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_regularexpressionvalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_regularexpressionvalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_regularexpressionvalidator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QRegularExpressionValidator*
void q_regularexpressionvalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QRegularExpressionValidator*
void q_regularexpressionvalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QRegularExpressionValidator*
/// @param name const char*
/// @param value QVariant*
bool q_regularexpressionvalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QRegularExpressionValidator*
/// @param name const char*
QVariant* q_regularexpressionvalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRegularExpressionValidator*
const char** q_regularexpressionvalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRegularExpressionValidator*
QBindingStorage* q_regularexpressionvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRegularExpressionValidator*
const QBindingStorage* q_regularexpressionvalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
void q_regularexpressionvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self)
void q_regularexpressionvalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QRegularExpressionValidator*
QObject* q_regularexpressionvalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QRegularExpressionValidator*
/// @param classname const char*
bool q_regularexpressionvalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QRegularExpressionValidator*
void q_regularexpressionvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRegularExpressionValidator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_regularexpressionvalidator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRegularExpressionValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_regularexpressionvalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_regularexpressionvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QRegularExpressionValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_regularexpressionvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
/// @param param1 QObject*
void q_regularexpressionvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QObject* param1)
void q_regularexpressionvalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param param1 const char*
void q_regularexpressionvalidator_fixup(void* self, const char* param1);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param param1 const char*
void q_regularexpressionvalidator_qbase_fixup(void* self, const char* param1);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, const char* param1)
void q_regularexpressionvalidator_on_fixup(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
bool q_regularexpressionvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
bool q_regularexpressionvalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback bool func(QRegularExpressionValidator* self, QEvent* event)
void q_regularexpressionvalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_regularexpressionvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param watched QObject*
/// @param event QEvent*
bool q_regularexpressionvalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback bool func(QRegularExpressionValidator* self, QObject* watched, QEvent* event)
void q_regularexpressionvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QTimerEvent*
void q_regularexpressionvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QTimerEvent*
void q_regularexpressionvalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QTimerEvent* event)
void q_regularexpressionvalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QChildEvent*
void q_regularexpressionvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QChildEvent*
void q_regularexpressionvalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QChildEvent* event)
void q_regularexpressionvalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
void q_regularexpressionvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
void q_regularexpressionvalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QEvent* event)
void q_regularexpressionvalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
void q_regularexpressionvalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
void q_regularexpressionvalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QMetaMethod* signal)
void q_regularexpressionvalidator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
void q_regularexpressionvalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
void q_regularexpressionvalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QMetaMethod* signal)
void q_regularexpressionvalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
QObject* q_regularexpressionvalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
QObject* q_regularexpressionvalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback QObject* func()
void q_regularexpressionvalidator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
int32_t q_regularexpressionvalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
int32_t q_regularexpressionvalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback int32_t func()
void q_regularexpressionvalidator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal const char*
int32_t q_regularexpressionvalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal const char*
int32_t q_regularexpressionvalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback int32_t func(QRegularExpressionValidator* self, const char* signal)
void q_regularexpressionvalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
bool q_regularexpressionvalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
bool q_regularexpressionvalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback bool func(QRegularExpressionValidator* self, QMetaMethod* signal)
void q_regularexpressionvalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, const char* objectName)
void q_regularexpressionvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#dtor.QRegularExpressionValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpressionValidator*
void q_regularexpressionvalidator_delete(void* self);

/// https://doc.qt.io/qt-6/qvalidator.html#types

typedef enum {
    QVALIDATOR_STATE_INVALID = 0,
    QVALIDATOR_STATE_INTERMEDIATE = 1,
    QVALIDATOR_STATE_ACCEPTABLE = 2
} QValidator__State;

typedef enum {
    QDOUBLEVALIDATOR_NOTATION_STANDARDNOTATION = 0,
    QDOUBLEVALIDATOR_NOTATION_SCIENTIFICNOTATION = 1
} QDoubleValidator__Notation;

#endif
