#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKSTATUSBARJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKSTATUSBARJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kstatusbarjobtracker.html

/// k_statusbarjobtracker_new constructs a new KStatusBarJobTracker object.
///
/// @param parent QWidget*
KStatusBarJobTracker* k_statusbarjobtracker_new(void* parent);

/// k_statusbarjobtracker_new2 constructs a new KStatusBarJobTracker object.
///
KStatusBarJobTracker* k_statusbarjobtracker_new2();

/// k_statusbarjobtracker_new3 constructs a new KStatusBarJobTracker object.
///
/// @param parent QWidget*
/// @param button bool
KStatusBarJobTracker* k_statusbarjobtracker_new3(void* parent, bool button);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KStatusBarJobTracker*
const QMetaObject* k_statusbarjobtracker_meta_object(void* self);

/// @param self KStatusBarJobTracker*
/// @param param1 const char*
void* k_statusbarjobtracker_metacast(void* self, const char* param1);

/// @param self KStatusBarJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_statusbarjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback int32_t func(KStatusBarJobTracker* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_statusbarjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_statusbarjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_statusbarjobtracker_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_register_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#widget)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
QWidget* k_statusbarjobtracker_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback QWidget* func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#widget)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
QWidget* k_statusbarjobtracker_qbase_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#setStatusBarMode)
///
/// @param self KStatusBarJobTracker*
/// @param statusBarMode flag of enum KStatusBarJobTracker__StatusBarMode
void k_statusbarjobtracker_set_status_bar_mode(void* self, int32_t statusBarMode);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#description)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_statusbarjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#description)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_statusbarjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#description)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_statusbarjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_statusbarjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_statusbarjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_statusbarjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#percent)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_statusbarjobtracker_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#percent)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, uint64_t percent)
void k_statusbarjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#percent)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_statusbarjobtracker_qbase_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#speed)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_statusbarjobtracker_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#speed)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, uint64_t value)
void k_statusbarjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#speed)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_statusbarjobtracker_qbase_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_slot_clean(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
///
/// Allows for overriding the related default method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_slot_clean(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
///
/// Base class method implementation
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_slot_clean(void* self, void* job);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_statusbarjobtracker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_statusbarjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param stopOnClose bool
void k_statusbarjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
bool k_statusbarjobtracker_stop_on_close(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param autoDelete bool
void k_statusbarjobtracker_set_auto_delete(void* self, void* job, bool autoDelete);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
bool k_statusbarjobtracker_auto_delete(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_stopped(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_stopped(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_suspend(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_resume(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KStatusBarJobTracker*
const char* k_statusbarjobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KStatusBarJobTracker*
/// @param name char*
void k_statusbarjobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KStatusBarJobTracker*
bool k_statusbarjobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KStatusBarJobTracker*
bool k_statusbarjobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KStatusBarJobTracker*
bool k_statusbarjobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KStatusBarJobTracker*
bool k_statusbarjobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KStatusBarJobTracker*
/// @param b bool
bool k_statusbarjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KStatusBarJobTracker*
QThread* k_statusbarjobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KStatusBarJobTracker*
/// @param thread QThread*
bool k_statusbarjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStatusBarJobTracker*
/// @param interval int
int32_t k_statusbarjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStatusBarJobTracker*
/// @param id int
void k_statusbarjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStatusBarJobTracker*
/// @param id enum Qt__TimerId
void k_statusbarjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KStatusBarJobTracker*
libqt_list /* of QObject* */ k_statusbarjobtracker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KStatusBarJobTracker*
/// @param parent QObject*
void k_statusbarjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KStatusBarJobTracker*
/// @param filterObj QObject*
void k_statusbarjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KStatusBarJobTracker*
/// @param obj QObject*
void k_statusbarjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_statusbarjobtracker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStatusBarJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_statusbarjobtracker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_statusbarjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_statusbarjobtracker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KStatusBarJobTracker*
void k_statusbarjobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KStatusBarJobTracker*
void k_statusbarjobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KStatusBarJobTracker*
/// @param name const char*
/// @param value QVariant*
bool k_statusbarjobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KStatusBarJobTracker*
/// @param name const char*
QVariant* k_statusbarjobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KStatusBarJobTracker*
const char** k_statusbarjobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStatusBarJobTracker*
QBindingStorage* k_statusbarjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStatusBarJobTracker*
const QBindingStorage* k_statusbarjobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusBarJobTracker*
void k_statusbarjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self)
void k_statusbarjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KStatusBarJobTracker*
QObject* k_statusbarjobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KStatusBarJobTracker*
/// @param classname const char*
bool k_statusbarjobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KStatusBarJobTracker*
void k_statusbarjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KStatusBarJobTracker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_statusbarjobtracker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStatusBarJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_statusbarjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_statusbarjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStatusBarJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_statusbarjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusBarJobTracker*
/// @param param1 QObject*
void k_statusbarjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, QObject* param1)
void k_statusbarjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_finished(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_finished(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_slot_stop(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_slot_stop(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_slot_stop(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_slot_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_slot_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_slot_suspend(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_slot_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_slot_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_slot_resume(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_suspended(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_suspended(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_resumed(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
void k_statusbarjobtracker_qbase_resumed(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job)
void k_statusbarjobtracker_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param message const char*
void k_statusbarjobtracker_info_message(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param message const char*
void k_statusbarjobtracker_qbase_info_message(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, const char* message)
void k_statusbarjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param message const char*
void k_statusbarjobtracker_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param message const char*
void k_statusbarjobtracker_qbase_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, const char* message)
void k_statusbarjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_statusbarjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_statusbarjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_statusbarjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QEvent*
bool k_statusbarjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QEvent*
bool k_statusbarjobtracker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback bool func(KStatusBarJobTracker* self, QEvent* event)
void k_statusbarjobtracker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_statusbarjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_statusbarjobtracker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback bool func(KStatusBarJobTracker* self, QObject* watched, QEvent* event)
void k_statusbarjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QTimerEvent*
void k_statusbarjobtracker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QTimerEvent*
void k_statusbarjobtracker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, QTimerEvent* event)
void k_statusbarjobtracker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QChildEvent*
void k_statusbarjobtracker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QChildEvent*
void k_statusbarjobtracker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, QChildEvent* event)
void k_statusbarjobtracker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QEvent*
void k_statusbarjobtracker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param event QEvent*
void k_statusbarjobtracker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, QEvent* event)
void k_statusbarjobtracker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal QMetaMethod*
void k_statusbarjobtracker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal QMetaMethod*
void k_statusbarjobtracker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, QMetaMethod* signal)
void k_statusbarjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal QMetaMethod*
void k_statusbarjobtracker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal QMetaMethod*
void k_statusbarjobtracker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, QMetaMethod* signal)
void k_statusbarjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
QObject* k_statusbarjobtracker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
QObject* k_statusbarjobtracker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback QObject* func()
void k_statusbarjobtracker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
int32_t k_statusbarjobtracker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
int32_t k_statusbarjobtracker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback int32_t func()
void k_statusbarjobtracker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal const char*
int32_t k_statusbarjobtracker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal const char*
int32_t k_statusbarjobtracker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback int32_t func(KStatusBarJobTracker* self, const char* signal)
void k_statusbarjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal QMetaMethod*
bool k_statusbarjobtracker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param signal QMetaMethod*
bool k_statusbarjobtracker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusBarJobTracker*
/// @param callback bool func(KStatusBarJobTracker* self, QMetaMethod* signal)
void k_statusbarjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KStatusBarJobTracker*
/// @param callback void func(KStatusBarJobTracker* self, const char* objectName)
void k_statusbarjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#dtor.KStatusBarJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KStatusBarJobTracker*
void k_statusbarjobtracker_delete(void* self);

/// https://api.kde.org/kstatusbarjobtracker.html#types

typedef enum {
    KSTATUSBARJOBTRACKER_STATUSBARMODE_NOINFORMATION = 0,
    KSTATUSBARJOBTRACKER_STATUSBARMODE_LABELONLY = 1,
    KSTATUSBARJOBTRACKER_STATUSBARMODE_PROGRESSONLY = 2
} KStatusBarJobTracker__StatusBarMode;

#endif
