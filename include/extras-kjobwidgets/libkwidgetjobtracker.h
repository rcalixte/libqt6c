#pragma once
#ifndef EXTRAS_KJOBWIDGETS_LIBKWIDGETJOBTRACKER_H
#define EXTRAS_KJOBWIDGETS_LIBKWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html)

/// k_widgetjobtracker_new constructs a new KWidgetJobTracker object.
///
/// @param parent QWidget*
///
KWidgetJobTracker* k_widgetjobtracker_new(void* parent);

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html)

/// k_widgetjobtracker_new2 constructs a new KWidgetJobTracker object.
///
KWidgetJobTracker* k_widgetjobtracker_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KWidgetJobTracker*
///
const QMetaObject* k_widgetjobtracker_meta_object(const void* self);

/// @param self KWidgetJobTracker*
/// @param param1 const char*
///
void* k_widgetjobtracker_metacast(void* self, const char* param1);

/// @param self KWidgetJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_widgetjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_widgetjobtracker_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#widget)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
///
QWidget* k_widgetjobtracker_widget(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#registerJob)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
///
void k_widgetjobtracker_register_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#unregisterJob)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
///
void k_widgetjobtracker_unregister_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#keepOpen)
///
/// @param self const KWidgetJobTracker*
/// @param job KJob*
///
bool k_widgetjobtracker_keep_open(const void* self, void* job);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_widgetjobtracker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_widgetjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param stopOnClose bool
///
void k_widgetjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
///
/// @param self const KWidgetJobTracker*
/// @param job KJob*
///
bool k_widgetjobtracker_stop_on_close(const void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param autoDelete bool
///
void k_widgetjobtracker_set_auto_delete(void* self, void* job, bool autoDelete);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
///
/// @param self const KWidgetJobTracker*
/// @param job KJob*
///
bool k_widgetjobtracker_auto_delete(const void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
///
void k_widgetjobtracker_stopped(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
///
void k_widgetjobtracker_on_stopped(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
///
void k_widgetjobtracker_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
///
void k_widgetjobtracker_on_suspend(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
///
void k_widgetjobtracker_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
///
void k_widgetjobtracker_on_resume(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KWidgetJobTracker*
/// @param event QEvent*
///
bool k_widgetjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KWidgetJobTracker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_widgetjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWidgetJobTracker*
///
const char* k_widgetjobtracker_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWidgetJobTracker*
/// @param name const char*
///
void k_widgetjobtracker_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KWidgetJobTracker*
///
bool k_widgetjobtracker_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KWidgetJobTracker*
///
bool k_widgetjobtracker_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KWidgetJobTracker*
///
bool k_widgetjobtracker_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KWidgetJobTracker*
///
bool k_widgetjobtracker_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KWidgetJobTracker*
/// @param b bool
///
bool k_widgetjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KWidgetJobTracker*
///
QThread* k_widgetjobtracker_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWidgetJobTracker*
/// @param thread QThread*
///
bool k_widgetjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetJobTracker*
/// @param interval int
///
int32_t k_widgetjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetJobTracker*
/// @param time int64_t of nanoseconds
///
int32_t k_widgetjobtracker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWidgetJobTracker*
/// @param id int
///
void k_widgetjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWidgetJobTracker*
/// @param id enum Qt__TimerId
///
void k_widgetjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KWidgetJobTracker*
///
/// @return libqt_list of QObject*
///
libqt_list k_widgetjobtracker_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KWidgetJobTracker*
/// @param parent QObject*
///
void k_widgetjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KWidgetJobTracker*
/// @param filterObj QObject*
///
void k_widgetjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KWidgetJobTracker*
/// @param obj QObject*
///
void k_widgetjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_widgetjobtracker_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_widgetjobtracker_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_widgetjobtracker_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_widgetjobtracker_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_widgetjobtracker_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetJobTracker*
///
bool k_widgetjobtracker_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetJobTracker*
/// @param receiver QObject*
///
bool k_widgetjobtracker_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_widgetjobtracker_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KWidgetJobTracker*
///
void k_widgetjobtracker_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KWidgetJobTracker*
///
void k_widgetjobtracker_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWidgetJobTracker*
/// @param name const char*
/// @param value QVariant*
///
bool k_widgetjobtracker_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KWidgetJobTracker*
/// @param name const char*
///
QVariant* k_widgetjobtracker_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KWidgetJobTracker*
///
const char** k_widgetjobtracker_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWidgetJobTracker*
///
QBindingStorage* k_widgetjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KWidgetJobTracker*
///
const QBindingStorage* k_widgetjobtracker_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
///
void k_widgetjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self)
///
void k_widgetjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KWidgetJobTracker*
///
QObject* k_widgetjobtracker_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KWidgetJobTracker*
/// @param classname const char*
///
bool k_widgetjobtracker_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWidgetJobTracker*
///
void k_widgetjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_widgetjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetJobTracker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_widgetjobtracker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_widgetjobtracker_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_widgetjobtracker_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_widgetjobtracker_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetJobTracker*
/// @param signal const char*
///
bool k_widgetjobtracker_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetJobTracker*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_widgetjobtracker_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetJobTracker*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_widgetjobtracker_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetJobTracker*
/// @param receiver QObject*
/// @param member const char*
///
bool k_widgetjobtracker_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
/// @param param1 QObject*
///
void k_widgetjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QObject* param1)
///
void k_widgetjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, const char* objectName)
///
void k_widgetjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#dtor.KWidgetJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KWidgetJobTracker*
///
void k_widgetjobtracker_delete(void* self);

#endif
