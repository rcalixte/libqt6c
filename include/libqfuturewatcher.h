#pragma once
#ifndef SRC_QT6C_LIBQFUTUREWATCHER_H
#define SRC_QT6C_LIBQFUTUREWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFutureWatcherBase*
///
const QMetaObject* q_futurewatcherbase_meta_object(void* self);

/// @param self QFutureWatcherBase*
/// @param param1 const char*
///
void* q_futurewatcherbase_metacast(void* self, const char* param1);

/// @param self QFutureWatcherBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_futurewatcherbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_futurewatcherbase_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValue)
///
/// @param self QFutureWatcherBase*
///
int32_t q_futurewatcherbase_progress_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
///
/// @param self QFutureWatcherBase*
///
int32_t q_futurewatcherbase_progress_minimum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
///
/// @param self QFutureWatcherBase*
///
int32_t q_futurewatcherbase_progress_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFutureWatcherBase*
///
const char* q_futurewatcherbase_progress_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_running(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_paused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_suspending(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_suspended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_wait_for_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
///
/// @param self QFutureWatcherBase*
/// @param limit int
///
void q_futurewatcherbase_set_pending_results_limit(void* self, int limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
///
/// @param self QFutureWatcherBase*
/// @param event QEvent*
///
bool q_futurewatcherbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_canceled(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_paused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_paused(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_suspending(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_suspending(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_suspended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_suspended(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_resumed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_resumed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
///
/// @param self QFutureWatcherBase*
/// @param resultIndex int
///
void q_futurewatcherbase_result_ready_at(void* self, int resultIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, int resultIndex)
///
void q_futurewatcherbase_on_result_ready_at(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
///
/// @param self QFutureWatcherBase*
/// @param beginIndex int
/// @param endIndex int
///
void q_futurewatcherbase_results_ready_at(void* self, int beginIndex, int endIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, int beginIndex, int endIndex)
///
void q_futurewatcherbase_on_results_ready_at(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
///
/// @param self QFutureWatcherBase*
/// @param minimum int
/// @param maximum int
///
void q_futurewatcherbase_progress_range_changed(void* self, int minimum, int maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, int minimum, int maximum)
///
void q_futurewatcherbase_on_progress_range_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
///
/// @param self QFutureWatcherBase*
/// @param progressValue int
///
void q_futurewatcherbase_progress_value_changed(void* self, int progressValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, int progressValue)
///
void q_futurewatcherbase_on_progress_value_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
///
/// @param self QFutureWatcherBase*
/// @param progressText const char*
///
void q_futurewatcherbase_progress_text_changed(void* self, const char* progressText);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, const char* progressText)
///
void q_futurewatcherbase_on_progress_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
///
/// @param self QFutureWatcherBase*
/// @param suspendVal bool
///
void q_futurewatcherbase_set_suspended(void* self, bool suspendVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_suspend(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_toggle_suspended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
///
/// @param self QFutureWatcherBase*
/// @param paused bool
///
void q_futurewatcherbase_set_paused(void* self, bool paused);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_pause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_toggle_paused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_futurewatcherbase_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_futurewatcherbase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QFutureWatcherBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_futurewatcherbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFutureWatcherBase*
///
const char* q_futurewatcherbase_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFutureWatcherBase*
/// @param name char*
///
void q_futurewatcherbase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFutureWatcherBase*
/// @param b bool
///
bool q_futurewatcherbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFutureWatcherBase*
///
QThread* q_futurewatcherbase_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFutureWatcherBase*
/// @param thread QThread*
///
bool q_futurewatcherbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFutureWatcherBase*
/// @param interval int
///
int32_t q_futurewatcherbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFutureWatcherBase*
/// @param time int64_t of nanoseconds
///
int32_t q_futurewatcherbase_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFutureWatcherBase*
/// @param id int
///
void q_futurewatcherbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFutureWatcherBase*
/// @param id enum Qt__TimerId
///
void q_futurewatcherbase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFutureWatcherBase*
///
/// @return libqt_list of QObject*
///
libqt_list q_futurewatcherbase_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFutureWatcherBase*
/// @param parent QObject*
///
void q_futurewatcherbase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFutureWatcherBase*
/// @param filterObj QObject*
///
void q_futurewatcherbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFutureWatcherBase*
/// @param obj QObject*
///
void q_futurewatcherbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_futurewatcherbase_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_futurewatcherbase_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFutureWatcherBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_futurewatcherbase_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_futurewatcherbase_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_futurewatcherbase_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFutureWatcherBase*
///
bool q_futurewatcherbase_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFutureWatcherBase*
/// @param receiver QObject*
///
bool q_futurewatcherbase_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_futurewatcherbase_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFutureWatcherBase*
/// @param name const char*
/// @param value QVariant*
///
bool q_futurewatcherbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFutureWatcherBase*
/// @param name const char*
///
QVariant* q_futurewatcherbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFutureWatcherBase*
///
const char** q_futurewatcherbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFutureWatcherBase*
///
QBindingStorage* q_futurewatcherbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFutureWatcherBase*
///
const QBindingStorage* q_futurewatcherbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self)
///
void q_futurewatcherbase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFutureWatcherBase*
///
QObject* q_futurewatcherbase_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFutureWatcherBase*
/// @param classname const char*
///
bool q_futurewatcherbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFutureWatcherBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_futurewatcherbase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFutureWatcherBase*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_futurewatcherbase_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_futurewatcherbase_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_futurewatcherbase_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFutureWatcherBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_futurewatcherbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFutureWatcherBase*
/// @param signal const char*
///
bool q_futurewatcherbase_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFutureWatcherBase*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_futurewatcherbase_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFutureWatcherBase*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_futurewatcherbase_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFutureWatcherBase*
/// @param receiver QObject*
/// @param member const char*
///
bool q_futurewatcherbase_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFutureWatcherBase*
/// @param param1 QObject*
///
void q_futurewatcherbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, QObject* param1)
///
void q_futurewatcherbase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFutureWatcherBase*
/// @param callback void func(QFutureWatcherBase* self, const char* objectName)
///
void q_futurewatcherbase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#dtor.QFutureWatcherBase)
///
/// Delete this object from C++ memory.
///
/// @param self QFutureWatcherBase*
///
void q_futurewatcherbase_delete(void* self);

#endif
