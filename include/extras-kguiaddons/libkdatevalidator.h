#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSQT6C_LIBKDATEVALIDATOR_H
#define SRC_EXTRAS_KGUIADDONSQT6C_LIBKDATEVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kdatevalidator.html

/// k_datevalidator_new constructs a new KDateValidator object.
///
KDateValidator* k_datevalidator_new();

/// k_datevalidator_new2 constructs a new KDateValidator object.
///
/// @param parent QObject*
KDateValidator* k_datevalidator_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDateValidator*
const QMetaObject* k_datevalidator_meta_object(void* self);

/// @param self KDateValidator*
/// @param param1 const char*
void* k_datevalidator_metacast(void* self, const char* param1);

/// @param self KDateValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_datevalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDateValidator*
/// @param callback int32_t func(KDateValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_datevalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDateValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_datevalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_datevalidator_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#validate)
///
/// @param self KDateValidator*
/// @param text const char*
/// @param e int*
///
/// @return enum QValidator__State
int32_t k_datevalidator_validate(void* self, const char* text, int* e);

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self KDateValidator*
/// @param callback int32_t func(KDateValidator* self, const char* text, int* e)
void k_datevalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#validate)
///
/// Base class method implementation
///
/// @param self KDateValidator*
/// @param text const char*
/// @param e int*
///
/// @return enum QValidator__State
int32_t k_datevalidator_qbase_validate(void* self, const char* text, int* e);

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#fixup)
///
/// @param self KDateValidator*
/// @param input const char*
void k_datevalidator_fixup(void* self, const char* input);

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, const char* input)
void k_datevalidator_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self KDateValidator*
/// @param input const char*
void k_datevalidator_qbase_fixup(void* self, const char* input);

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#date)
///
/// @param self KDateValidator*
/// @param text const char*
/// @param date QDate*
///
/// @return enum QValidator__State
int32_t k_datevalidator_date(void* self, const char* text, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_datevalidator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_datevalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self KDateValidator*
/// @param locale QLocale*
void k_datevalidator_set_locale(void* self, void* locale);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self KDateValidator*
QLocale* k_datevalidator_locale(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self KDateValidator*
void k_datevalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self)
void k_datevalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDateValidator*
const char* k_datevalidator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDateValidator*
/// @param name char*
void k_datevalidator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDateValidator*
bool k_datevalidator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDateValidator*
bool k_datevalidator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDateValidator*
bool k_datevalidator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDateValidator*
bool k_datevalidator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDateValidator*
/// @param b bool
bool k_datevalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDateValidator*
QThread* k_datevalidator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDateValidator*
/// @param thread QThread*
bool k_datevalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDateValidator*
/// @param interval int
int32_t k_datevalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDateValidator*
/// @param id int
void k_datevalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDateValidator*
/// @param id enum Qt__TimerId
void k_datevalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDateValidator*
libqt_list /* of QObject* */ k_datevalidator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDateValidator*
/// @param parent QObject*
void k_datevalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDateValidator*
/// @param filterObj QObject*
void k_datevalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDateValidator*
/// @param obj QObject*
void k_datevalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_datevalidator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDateValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_datevalidator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_datevalidator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_datevalidator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDateValidator*
void k_datevalidator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDateValidator*
void k_datevalidator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDateValidator*
/// @param name const char*
/// @param value QVariant*
bool k_datevalidator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDateValidator*
/// @param name const char*
QVariant* k_datevalidator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDateValidator*
const char** k_datevalidator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDateValidator*
QBindingStorage* k_datevalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDateValidator*
const QBindingStorage* k_datevalidator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateValidator*
void k_datevalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self)
void k_datevalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDateValidator*
QObject* k_datevalidator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDateValidator*
/// @param classname const char*
bool k_datevalidator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDateValidator*
void k_datevalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDateValidator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_datevalidator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDateValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_datevalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_datevalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDateValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_datevalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateValidator*
/// @param param1 QObject*
void k_datevalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, QObject* param1)
void k_datevalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param event QEvent*
bool k_datevalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param event QEvent*
bool k_datevalidator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback bool func(KDateValidator* self, QEvent* event)
void k_datevalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param watched QObject*
/// @param event QEvent*
bool k_datevalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param watched QObject*
/// @param event QEvent*
bool k_datevalidator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback bool func(KDateValidator* self, QObject* watched, QEvent* event)
void k_datevalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param event QTimerEvent*
void k_datevalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param event QTimerEvent*
void k_datevalidator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, QTimerEvent* event)
void k_datevalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param event QChildEvent*
void k_datevalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param event QChildEvent*
void k_datevalidator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, QChildEvent* event)
void k_datevalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param event QEvent*
void k_datevalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param event QEvent*
void k_datevalidator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, QEvent* event)
void k_datevalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param signal QMetaMethod*
void k_datevalidator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param signal QMetaMethod*
void k_datevalidator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, QMetaMethod* signal)
void k_datevalidator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param signal QMetaMethod*
void k_datevalidator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param signal QMetaMethod*
void k_datevalidator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, QMetaMethod* signal)
void k_datevalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
QObject* k_datevalidator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
QObject* k_datevalidator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback QObject* func()
void k_datevalidator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
int32_t k_datevalidator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
int32_t k_datevalidator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback int32_t func()
void k_datevalidator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param signal const char*
int32_t k_datevalidator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param signal const char*
int32_t k_datevalidator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback int32_t func(KDateValidator* self, const char* signal)
void k_datevalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDateValidator*
/// @param signal QMetaMethod*
bool k_datevalidator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDateValidator*
/// @param signal QMetaMethod*
bool k_datevalidator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDateValidator*
/// @param callback bool func(KDateValidator* self, QMetaMethod* signal)
void k_datevalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDateValidator*
/// @param callback void func(KDateValidator* self, const char* objectName)
void k_datevalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kdatevalidator.html#dtor.KDateValidator)
///
/// Delete this object from C++ memory.
///
/// @param self KDateValidator*
void k_datevalidator_delete(void* self);

#endif
