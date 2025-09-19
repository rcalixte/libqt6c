#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKUISERVERJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKUISERVERJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kuiserverjobtracker.html

/// k_uiserverjobtracker_new constructs a new KUiServerJobTracker object.
///
KUiServerJobTracker* k_uiserverjobtracker_new();

/// k_uiserverjobtracker_new2 constructs a new KUiServerJobTracker object.
///
/// @param parent QObject*
KUiServerJobTracker* k_uiserverjobtracker_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUiServerJobTracker*
const QMetaObject* k_uiserverjobtracker_meta_object(void* self);

/// @param self KUiServerJobTracker*
/// @param param1 const char*
void* k_uiserverjobtracker_metacast(void* self, const char* param1);

/// @param self KUiServerJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_uiserverjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback int32_t func(KUiServerJobTracker* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_uiserverjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_uiserverjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_uiserverjobtracker_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#registerJob)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#registerJob)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job)
void k_uiserverjobtracker_on_register_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#registerJob)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_qbase_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#unregisterJob)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#unregisterJob)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job)
void k_uiserverjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#unregisterJob)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_qbase_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#finished)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_finished(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#finished)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job)
void k_uiserverjobtracker_on_finished(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#finished)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_qbase_finished(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#suspended)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_suspended(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#suspended)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job)
void k_uiserverjobtracker_on_suspended(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#suspended)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_qbase_suspended(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#resumed)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_resumed(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#resumed)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job)
void k_uiserverjobtracker_on_resumed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#resumed)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
void k_uiserverjobtracker_qbase_resumed(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#description)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_uiserverjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#description)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_uiserverjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#description)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_uiserverjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#infoMessage)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverjobtracker_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#infoMessage)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, const char* message)
void k_uiserverjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#infoMessage)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverjobtracker_qbase_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#totalAmount)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#totalAmount)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_uiserverjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#totalAmount)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#processedAmount)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#processedAmount)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_uiserverjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#processedAmount)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#percent)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_uiserverjobtracker_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#percent)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, uint64_t percent)
void k_uiserverjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#percent)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_uiserverjobtracker_qbase_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#speed)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_uiserverjobtracker_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#speed)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, uint64_t value)
void k_uiserverjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#speed)
///
/// Base class method implementation
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_uiserverjobtracker_qbase_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_uiserverjobtracker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_uiserverjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUiServerJobTracker*
const char* k_uiserverjobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUiServerJobTracker*
/// @param name char*
void k_uiserverjobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUiServerJobTracker*
bool k_uiserverjobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUiServerJobTracker*
bool k_uiserverjobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUiServerJobTracker*
bool k_uiserverjobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUiServerJobTracker*
bool k_uiserverjobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUiServerJobTracker*
/// @param b bool
bool k_uiserverjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUiServerJobTracker*
QThread* k_uiserverjobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUiServerJobTracker*
/// @param thread QThread*
bool k_uiserverjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerJobTracker*
/// @param interval int
int32_t k_uiserverjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerJobTracker*
/// @param id int
void k_uiserverjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerJobTracker*
/// @param id enum Qt__TimerId
void k_uiserverjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUiServerJobTracker*
libqt_list /* of QObject* */ k_uiserverjobtracker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUiServerJobTracker*
/// @param parent QObject*
void k_uiserverjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUiServerJobTracker*
/// @param filterObj QObject*
void k_uiserverjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUiServerJobTracker*
/// @param obj QObject*
void k_uiserverjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_uiserverjobtracker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_uiserverjobtracker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_uiserverjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_uiserverjobtracker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUiServerJobTracker*
void k_uiserverjobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUiServerJobTracker*
void k_uiserverjobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUiServerJobTracker*
/// @param name const char*
/// @param value QVariant*
bool k_uiserverjobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUiServerJobTracker*
/// @param name const char*
QVariant* k_uiserverjobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUiServerJobTracker*
const char** k_uiserverjobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerJobTracker*
QBindingStorage* k_uiserverjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerJobTracker*
const QBindingStorage* k_uiserverjobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
void k_uiserverjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self)
void k_uiserverjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUiServerJobTracker*
QObject* k_uiserverjobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUiServerJobTracker*
/// @param classname const char*
bool k_uiserverjobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUiServerJobTracker*
void k_uiserverjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUiServerJobTracker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_uiserverjobtracker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_uiserverjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_uiserverjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_uiserverjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
/// @param param1 QObject*
void k_uiserverjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QObject* param1)
void k_uiserverjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverjobtracker_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverjobtracker_qbase_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, KJob* job, const char* message)
void k_uiserverjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QEvent*
bool k_uiserverjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QEvent*
bool k_uiserverjobtracker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback bool func(KUiServerJobTracker* self, QEvent* event)
void k_uiserverjobtracker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_uiserverjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_uiserverjobtracker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback bool func(KUiServerJobTracker* self, QObject* watched, QEvent* event)
void k_uiserverjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QTimerEvent*
void k_uiserverjobtracker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QTimerEvent*
void k_uiserverjobtracker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QTimerEvent* event)
void k_uiserverjobtracker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QChildEvent*
void k_uiserverjobtracker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QChildEvent*
void k_uiserverjobtracker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QChildEvent* event)
void k_uiserverjobtracker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QEvent*
void k_uiserverjobtracker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param event QEvent*
void k_uiserverjobtracker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QEvent* event)
void k_uiserverjobtracker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal QMetaMethod*
void k_uiserverjobtracker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal QMetaMethod*
void k_uiserverjobtracker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QMetaMethod* signal)
void k_uiserverjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal QMetaMethod*
void k_uiserverjobtracker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal QMetaMethod*
void k_uiserverjobtracker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QMetaMethod* signal)
void k_uiserverjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
QObject* k_uiserverjobtracker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
QObject* k_uiserverjobtracker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback QObject* func()
void k_uiserverjobtracker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
int32_t k_uiserverjobtracker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
int32_t k_uiserverjobtracker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback int32_t func()
void k_uiserverjobtracker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal const char*
int32_t k_uiserverjobtracker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal const char*
int32_t k_uiserverjobtracker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback int32_t func(KUiServerJobTracker* self, const char* signal)
void k_uiserverjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal QMetaMethod*
bool k_uiserverjobtracker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param signal QMetaMethod*
bool k_uiserverjobtracker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerJobTracker*
/// @param callback bool func(KUiServerJobTracker* self, QMetaMethod* signal)
void k_uiserverjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, const char* objectName)
void k_uiserverjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kuiserverjobtracker.html#dtor.KUiServerJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KUiServerJobTracker*
void k_uiserverjobtracker_delete(void* self);

#endif
