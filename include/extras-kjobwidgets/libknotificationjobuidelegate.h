#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKNOTIFICATIONJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKNOTIFICATIONJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knotificationjobuidelegate.html

/// k_notificationjobuidelegate_new constructs a new KNotificationJobUiDelegate object.
///
KNotificationJobUiDelegate* k_notificationjobuidelegate_new();

/// k_notificationjobuidelegate_new2 constructs a new KNotificationJobUiDelegate object.
///
/// @param flags flag of enum KJobUiDelegate__Flag
KNotificationJobUiDelegate* k_notificationjobuidelegate_new2(int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNotificationJobUiDelegate*
const QMetaObject* k_notificationjobuidelegate_meta_object(void* self);

/// @param self KNotificationJobUiDelegate*
/// @param param1 const char*
void* k_notificationjobuidelegate_metacast(void* self, const char* param1);

/// @param self KNotificationJobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_notificationjobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback int32_t func(KNotificationJobUiDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_notificationjobuidelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNotificationJobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_notificationjobuidelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_notificationjobuidelegate_tr(const char* s);

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#showErrorMessage)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_show_error_message(void* self);

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#showErrorMessage)
///
/// Allows for overriding the related default method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func()
void k_notificationjobuidelegate_on_show_error_message(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#showErrorMessage)
///
/// Base class method implementation
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_qbase_show_error_message(void* self);

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#setJob)
///
/// @param self KNotificationJobUiDelegate*
/// @param job KJob*
bool k_notificationjobuidelegate_set_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#setJob)
///
/// Allows for overriding the related default method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback bool func(KNotificationJobUiDelegate* self, KJob* job)
void k_notificationjobuidelegate_on_set_job(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#setJob)
///
/// Base class method implementation
///
/// @param self KNotificationJobUiDelegate*
/// @param job KJob*
bool k_notificationjobuidelegate_qbase_set_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#slotWarning)
///
/// @param self KNotificationJobUiDelegate*
/// @param job KJob*
/// @param message const char*
void k_notificationjobuidelegate_slot_warning(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#slotWarning)
///
/// Allows for overriding the related default method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, KJob* job, const char* message)
void k_notificationjobuidelegate_on_slot_warning(void* self, void (*callback)(void*, void*, const char*));

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#slotWarning)
///
/// Base class method implementation
///
/// @param self KNotificationJobUiDelegate*
/// @param job KJob*
/// @param message const char*
void k_notificationjobuidelegate_qbase_slot_warning(void* self, void* job, const char* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_notificationjobuidelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_notificationjobuidelegate_tr3(const char* s, const char* c, int n);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#setAutoErrorHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
/// @param enable bool
void k_notificationjobuidelegate_set_auto_error_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#isAutoErrorHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_auto_error_handling_enabled(void* self);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#setAutoWarningHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
/// @param enable bool
void k_notificationjobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#isAutoWarningHandlingEnabled)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_auto_warning_handling_enabled(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotificationJobUiDelegate*
const char* k_notificationjobuidelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNotificationJobUiDelegate*
/// @param name char*
void k_notificationjobuidelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNotificationJobUiDelegate*
bool k_notificationjobuidelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNotificationJobUiDelegate*
/// @param b bool
bool k_notificationjobuidelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNotificationJobUiDelegate*
QThread* k_notificationjobuidelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotificationJobUiDelegate*
/// @param thread QThread*
bool k_notificationjobuidelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param interval int
int32_t k_notificationjobuidelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param id int
void k_notificationjobuidelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param id enum Qt__TimerId
void k_notificationjobuidelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNotificationJobUiDelegate*
libqt_list /* of QObject* */ k_notificationjobuidelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNotificationJobUiDelegate*
/// @param parent QObject*
void k_notificationjobuidelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNotificationJobUiDelegate*
/// @param filterObj QObject*
void k_notificationjobuidelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNotificationJobUiDelegate*
/// @param obj QObject*
void k_notificationjobuidelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_notificationjobuidelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_notificationjobuidelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_notificationjobuidelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_notificationjobuidelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNotificationJobUiDelegate*
/// @param name const char*
/// @param value QVariant*
bool k_notificationjobuidelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNotificationJobUiDelegate*
/// @param name const char*
QVariant* k_notificationjobuidelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotificationJobUiDelegate*
const char** k_notificationjobuidelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationJobUiDelegate*
QBindingStorage* k_notificationjobuidelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationJobUiDelegate*
const QBindingStorage* k_notificationjobuidelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self)
void k_notificationjobuidelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNotificationJobUiDelegate*
QObject* k_notificationjobuidelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNotificationJobUiDelegate*
/// @param classname const char*
bool k_notificationjobuidelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotificationJobUiDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_notificationjobuidelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationJobUiDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_notificationjobuidelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_notificationjobuidelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationJobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_notificationjobuidelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
/// @param param1 QObject*
void k_notificationjobuidelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QObject* param1)
void k_notificationjobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QEvent*
bool k_notificationjobuidelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QEvent*
bool k_notificationjobuidelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback bool func(KNotificationJobUiDelegate* self, QEvent* event)
void k_notificationjobuidelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
bool k_notificationjobuidelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
bool k_notificationjobuidelegate_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback bool func(KNotificationJobUiDelegate* self, QObject* watched, QEvent* event)
void k_notificationjobuidelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QTimerEvent*
void k_notificationjobuidelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QTimerEvent*
void k_notificationjobuidelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QTimerEvent* event)
void k_notificationjobuidelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QChildEvent*
void k_notificationjobuidelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QChildEvent*
void k_notificationjobuidelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QChildEvent* event)
void k_notificationjobuidelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QEvent*
void k_notificationjobuidelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param event QEvent*
void k_notificationjobuidelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QEvent* event)
void k_notificationjobuidelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal QMetaMethod*
void k_notificationjobuidelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal QMetaMethod*
void k_notificationjobuidelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QMetaMethod* signal)
void k_notificationjobuidelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal QMetaMethod*
void k_notificationjobuidelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal QMetaMethod*
void k_notificationjobuidelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, QMetaMethod* signal)
void k_notificationjobuidelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#job)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
KJob* k_notificationjobuidelegate_job(void* self);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#job)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
KJob* k_notificationjobuidelegate_qbase_job(void* self);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#job)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback KJob* func()
void k_notificationjobuidelegate_on_job(void* self, KJob* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
QObject* k_notificationjobuidelegate_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
QObject* k_notificationjobuidelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback QObject* func()
void k_notificationjobuidelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
int32_t k_notificationjobuidelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
int32_t k_notificationjobuidelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback int32_t func()
void k_notificationjobuidelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal const char*
int32_t k_notificationjobuidelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal const char*
int32_t k_notificationjobuidelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback int32_t func(KNotificationJobUiDelegate* self, const char* signal)
void k_notificationjobuidelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal QMetaMethod*
bool k_notificationjobuidelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param signal QMetaMethod*
bool k_notificationjobuidelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationJobUiDelegate*
/// @param callback bool func(KNotificationJobUiDelegate* self, QMetaMethod* signal)
void k_notificationjobuidelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNotificationJobUiDelegate*
/// @param callback void func(KNotificationJobUiDelegate* self, const char* objectName)
void k_notificationjobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/knotificationjobuidelegate.html#dtor.KNotificationJobUiDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KNotificationJobUiDelegate*
void k_notificationjobuidelegate_delete(void* self);

#endif
