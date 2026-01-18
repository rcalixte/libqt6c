#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJOBUIDELEGATE_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html)

/// k_jobuidelegate_new constructs a new KJobUiDelegate object.
///
KJobUiDelegate* k_jobuidelegate_new();

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html)

/// k_jobuidelegate_new2 constructs a new KJobUiDelegate object.
///
/// @param flags flag of enum KJobUiDelegate__Flag
///
KJobUiDelegate* k_jobuidelegate_new2(int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KJobUiDelegate*
///
const QMetaObject* k_jobuidelegate_meta_object(void* self);

/// @param self KJobUiDelegate*
/// @param param1 const char*
///
void* k_jobuidelegate_metacast(void* self, const char* param1);

/// @param self KJobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_jobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KJobUiDelegate*
/// @param callback int32_t func(KJobUiDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_jobuidelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KJobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_jobuidelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_jobuidelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setJob)
///
/// @param self KJobUiDelegate*
/// @param job KJob*
///
bool k_jobuidelegate_set_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setJob)
///
/// Allows for overriding the related default method
///
/// @param self KJobUiDelegate*
/// @param callback bool func(KJobUiDelegate* self, KJob* job)
///
void k_jobuidelegate_on_set_job(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setJob)
///
/// Base class method implementation
///
/// @param self KJobUiDelegate*
/// @param job KJob*
///
bool k_jobuidelegate_qbase_set_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#job)
///
/// @param self KJobUiDelegate*
///
KJob* k_jobuidelegate_job(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#job)
///
/// Allows for overriding the related default method
///
/// @param self KJobUiDelegate*
/// @param callback KJob* func()
///
void k_jobuidelegate_on_job(void* self, KJob* (*callback)());

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#job)
///
/// Base class method implementation
///
/// @param self KJobUiDelegate*
///
KJob* k_jobuidelegate_qbase_job(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#showErrorMessage)
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_show_error_message(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#showErrorMessage)
///
/// Allows for overriding the related default method
///
/// @param self KJobUiDelegate*
/// @param callback void func()
///
void k_jobuidelegate_on_show_error_message(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#showErrorMessage)
///
/// Base class method implementation
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_qbase_show_error_message(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setAutoErrorHandlingEnabled)
///
/// @param self KJobUiDelegate*
/// @param enable bool
///
void k_jobuidelegate_set_auto_error_handling_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#isAutoErrorHandlingEnabled)
///
/// @param self KJobUiDelegate*
///
bool k_jobuidelegate_is_auto_error_handling_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#setAutoWarningHandlingEnabled)
///
/// @param self KJobUiDelegate*
/// @param enable bool
///
void k_jobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#isAutoWarningHandlingEnabled)
///
/// @param self KJobUiDelegate*
///
bool k_jobuidelegate_is_auto_warning_handling_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#slotWarning)
///
/// @param self KJobUiDelegate*
/// @param job KJob*
/// @param message const char*
///
void k_jobuidelegate_slot_warning(void* self, void* job, const char* message);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#slotWarning)
///
/// Allows for overriding the related default method
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, KJob* job, const char* message)
///
void k_jobuidelegate_on_slot_warning(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#slotWarning)
///
/// Base class method implementation
///
/// @param self KJobUiDelegate*
/// @param job KJob*
/// @param message const char*
///
void k_jobuidelegate_qbase_slot_warning(void* self, void* job, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_jobuidelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_jobuidelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KJobUiDelegate*
///
const char* k_jobuidelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KJobUiDelegate*
/// @param name char*
///
void k_jobuidelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KJobUiDelegate*
///
bool k_jobuidelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KJobUiDelegate*
///
bool k_jobuidelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KJobUiDelegate*
///
bool k_jobuidelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KJobUiDelegate*
///
bool k_jobuidelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KJobUiDelegate*
/// @param b bool
///
bool k_jobuidelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KJobUiDelegate*
///
QThread* k_jobuidelegate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KJobUiDelegate*
/// @param thread QThread*
///
bool k_jobuidelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJobUiDelegate*
/// @param interval int
///
int32_t k_jobuidelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KJobUiDelegate*
/// @param id int
///
void k_jobuidelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KJobUiDelegate*
/// @param id enum Qt__TimerId
///
void k_jobuidelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KJobUiDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list k_jobuidelegate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KJobUiDelegate*
/// @param parent QObject*
///
void k_jobuidelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KJobUiDelegate*
/// @param filterObj QObject*
///
void k_jobuidelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KJobUiDelegate*
/// @param obj QObject*
///
void k_jobuidelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_jobuidelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_jobuidelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_jobuidelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_jobuidelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KJobUiDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_jobuidelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KJobUiDelegate*
/// @param name const char*
///
QVariant* k_jobuidelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KJobUiDelegate*
///
const char** k_jobuidelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KJobUiDelegate*
///
QBindingStorage* k_jobuidelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KJobUiDelegate*
///
const QBindingStorage* k_jobuidelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self)
///
void k_jobuidelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KJobUiDelegate*
///
QObject* k_jobuidelegate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KJobUiDelegate*
/// @param classname const char*
///
bool k_jobuidelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KJobUiDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_jobuidelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJobUiDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_jobuidelegate_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_jobuidelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_jobuidelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobUiDelegate*
/// @param param1 QObject*
///
void k_jobuidelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, QObject* param1)
///
void k_jobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QEvent*
///
bool k_jobuidelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QEvent*
///
bool k_jobuidelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback bool func(KJobUiDelegate* self, QEvent* event)
///
void k_jobuidelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_jobuidelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_jobuidelegate_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback bool func(KJobUiDelegate* self, QObject* watched, QEvent* event)
///
void k_jobuidelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QTimerEvent*
///
void k_jobuidelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QTimerEvent*
///
void k_jobuidelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, QTimerEvent* event)
///
void k_jobuidelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QChildEvent*
///
void k_jobuidelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QChildEvent*
///
void k_jobuidelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, QChildEvent* event)
///
void k_jobuidelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QEvent*
///
void k_jobuidelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param event QEvent*
///
void k_jobuidelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, QEvent* event)
///
void k_jobuidelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal QMetaMethod*
///
void k_jobuidelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal QMetaMethod*
///
void k_jobuidelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, QMetaMethod* signal)
///
void k_jobuidelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal QMetaMethod*
///
void k_jobuidelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal QMetaMethod*
///
void k_jobuidelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, QMetaMethod* signal)
///
void k_jobuidelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
///
QObject* k_jobuidelegate_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
///
QObject* k_jobuidelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback QObject* func()
///
void k_jobuidelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
///
int32_t k_jobuidelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
///
int32_t k_jobuidelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback int32_t func()
///
void k_jobuidelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal const char*
///
int32_t k_jobuidelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal const char*
///
int32_t k_jobuidelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback int32_t func(KJobUiDelegate* self, const char* signal)
///
void k_jobuidelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal QMetaMethod*
///
bool k_jobuidelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param signal QMetaMethod*
///
bool k_jobuidelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJobUiDelegate*
/// @param callback bool func(KJobUiDelegate* self, QMetaMethod* signal)
///
void k_jobuidelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KJobUiDelegate*
/// @param callback void func(KJobUiDelegate* self, const char* objectName)
///
void k_jobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#dtor.KJobUiDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KJobUiDelegate*
///
void k_jobuidelegate_delete(void* self);

/// [Upstream resources](https://api.kde.org/kjobuidelegate.html#public-types)

typedef enum {
    KJOBUIDELEGATE_FLAG_AUTOHANDLINGDISABLED = 0,
    KJOBUIDELEGATE_FLAG_AUTOERRORHANDLINGENABLED = 1,
    KJOBUIDELEGATE_FLAG_AUTOWARNINGHANDLINGENABLED = 2,
    KJOBUIDELEGATE_FLAG_AUTOHANDLINGENABLED = 3
} KJobUiDelegate__Flag;

#endif
