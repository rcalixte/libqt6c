#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKABSTRACTWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKABSTRACTWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kabstractwidgetjobtracker.html

/// k_abstractwidgetjobtracker_new constructs a new KAbstractWidgetJobTracker object.
///
/// @param parent QWidget*
KAbstractWidgetJobTracker* k_abstractwidgetjobtracker_new(void* parent);

/// k_abstractwidgetjobtracker_new2 constructs a new KAbstractWidgetJobTracker object.
///
KAbstractWidgetJobTracker* k_abstractwidgetjobtracker_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KAbstractWidgetJobTracker*
const QMetaObject* k_abstractwidgetjobtracker_meta_object(void* self);

/// @param self KAbstractWidgetJobTracker*
/// @param param1 const char*
void* k_abstractwidgetjobtracker_metacast(void* self, const char* param1);

/// @param self KAbstractWidgetJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_abstractwidgetjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback int32_t func(KAbstractWidgetJobTracker* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_abstractwidgetjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_abstractwidgetjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_abstractwidgetjobtracker_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#registerJob)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#registerJob)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_register_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#registerJob)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#unregisterJob)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#unregisterJob)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#unregisterJob)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#widget)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
QWidget* k_abstractwidgetjobtracker_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback QWidget* func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#widget)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
QWidget* k_abstractwidgetjobtracker_qbase_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param stopOnClose bool
void k_abstractwidgetjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
bool k_abstractwidgetjobtracker_stop_on_close(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param autoDelete bool
void k_abstractwidgetjobtracker_set_auto_delete(void* self, void* job, bool autoDelete);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
bool k_abstractwidgetjobtracker_auto_delete(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_finished(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_finished(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_finished(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_slot_stop(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_slot_stop(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_slot_stop(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_slot_suspend(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_slot_suspend(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_slot_suspend(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_slot_resume(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_slot_resume(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_slot_resume(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotClean)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_slot_clean(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotClean)
///
/// Allows for overriding the related default method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_slot_clean(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotClean)
///
/// Base class method implementation
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_slot_clean(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_stopped(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_stopped(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_suspend(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_suspend(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_resume(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_resume(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_abstractwidgetjobtracker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_abstractwidgetjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAbstractWidgetJobTracker*
const char* k_abstractwidgetjobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAbstractWidgetJobTracker*
/// @param name char*
void k_abstractwidgetjobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAbstractWidgetJobTracker*
bool k_abstractwidgetjobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAbstractWidgetJobTracker*
/// @param b bool
bool k_abstractwidgetjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KAbstractWidgetJobTracker*
QThread* k_abstractwidgetjobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractWidgetJobTracker*
/// @param thread QThread*
bool k_abstractwidgetjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param interval int
int32_t k_abstractwidgetjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param id int
void k_abstractwidgetjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param id enum Qt__TimerId
void k_abstractwidgetjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KAbstractWidgetJobTracker*
libqt_list /* of QObject* */ k_abstractwidgetjobtracker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KAbstractWidgetJobTracker*
/// @param parent QObject*
void k_abstractwidgetjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAbstractWidgetJobTracker*
/// @param filterObj QObject*
void k_abstractwidgetjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAbstractWidgetJobTracker*
/// @param obj QObject*
void k_abstractwidgetjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_abstractwidgetjobtracker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_abstractwidgetjobtracker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_abstractwidgetjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_abstractwidgetjobtracker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAbstractWidgetJobTracker*
/// @param name const char*
/// @param value QVariant*
bool k_abstractwidgetjobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAbstractWidgetJobTracker*
/// @param name const char*
QVariant* k_abstractwidgetjobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAbstractWidgetJobTracker*
const char** k_abstractwidgetjobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractWidgetJobTracker*
QBindingStorage* k_abstractwidgetjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAbstractWidgetJobTracker*
const QBindingStorage* k_abstractwidgetjobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self)
void k_abstractwidgetjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KAbstractWidgetJobTracker*
QObject* k_abstractwidgetjobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAbstractWidgetJobTracker*
/// @param classname const char*
bool k_abstractwidgetjobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAbstractWidgetJobTracker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_abstractwidgetjobtracker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAbstractWidgetJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_abstractwidgetjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_abstractwidgetjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAbstractWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_abstractwidgetjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
/// @param param1 QObject*
void k_abstractwidgetjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QObject* param1)
void k_abstractwidgetjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_suspended(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_suspended(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_resumed(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
void k_abstractwidgetjobtracker_qbase_resumed(void* self, void* job);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job)
void k_abstractwidgetjobtracker_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#description)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_abstractwidgetjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#description)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_abstractwidgetjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#description)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_abstractwidgetjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_abstractwidgetjobtracker_info_message(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_abstractwidgetjobtracker_qbase_info_message(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, const char* message)
void k_abstractwidgetjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_abstractwidgetjobtracker_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_abstractwidgetjobtracker_qbase_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, const char* message)
void k_abstractwidgetjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#totalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_abstractwidgetjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#totalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_abstractwidgetjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#totalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_abstractwidgetjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_abstractwidgetjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_abstractwidgetjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_abstractwidgetjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#percent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_abstractwidgetjobtracker_percent(void* self, void* job, uint64_t percent);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#percent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_abstractwidgetjobtracker_qbase_percent(void* self, void* job, uint64_t percent);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#percent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, uint64_t percent)
void k_abstractwidgetjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#speed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_abstractwidgetjobtracker_speed(void* self, void* job, uint64_t value);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#speed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_abstractwidgetjobtracker_qbase_speed(void* self, void* job, uint64_t value);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#speed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, KJob* job, uint64_t value)
void k_abstractwidgetjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QEvent*
bool k_abstractwidgetjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QEvent*
bool k_abstractwidgetjobtracker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback bool func(KAbstractWidgetJobTracker* self, QEvent* event)
void k_abstractwidgetjobtracker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_abstractwidgetjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_abstractwidgetjobtracker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback bool func(KAbstractWidgetJobTracker* self, QObject* watched, QEvent* event)
void k_abstractwidgetjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QTimerEvent*
void k_abstractwidgetjobtracker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QTimerEvent*
void k_abstractwidgetjobtracker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QTimerEvent* event)
void k_abstractwidgetjobtracker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QChildEvent*
void k_abstractwidgetjobtracker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QChildEvent*
void k_abstractwidgetjobtracker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QChildEvent* event)
void k_abstractwidgetjobtracker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QEvent*
void k_abstractwidgetjobtracker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param event QEvent*
void k_abstractwidgetjobtracker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QEvent* event)
void k_abstractwidgetjobtracker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal QMetaMethod*
void k_abstractwidgetjobtracker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal QMetaMethod*
void k_abstractwidgetjobtracker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QMetaMethod* signal)
void k_abstractwidgetjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal QMetaMethod*
void k_abstractwidgetjobtracker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal QMetaMethod*
void k_abstractwidgetjobtracker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, QMetaMethod* signal)
void k_abstractwidgetjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
QObject* k_abstractwidgetjobtracker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
QObject* k_abstractwidgetjobtracker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback QObject* func()
void k_abstractwidgetjobtracker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
int32_t k_abstractwidgetjobtracker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
int32_t k_abstractwidgetjobtracker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback int32_t func()
void k_abstractwidgetjobtracker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal const char*
int32_t k_abstractwidgetjobtracker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal const char*
int32_t k_abstractwidgetjobtracker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback int32_t func(KAbstractWidgetJobTracker* self, const char* signal)
void k_abstractwidgetjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal QMetaMethod*
bool k_abstractwidgetjobtracker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param signal QMetaMethod*
bool k_abstractwidgetjobtracker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback bool func(KAbstractWidgetJobTracker* self, QMetaMethod* signal)
void k_abstractwidgetjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAbstractWidgetJobTracker*
/// @param callback void func(KAbstractWidgetJobTracker* self, const char* objectName)
void k_abstractwidgetjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#dtor.KAbstractWidgetJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KAbstractWidgetJobTracker*
void k_abstractwidgetjobtracker_delete(void* self);

#endif
