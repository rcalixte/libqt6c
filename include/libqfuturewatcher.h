#pragma once
#ifndef SRCQT6C_LIBQFUTUREWATCHER_H
#define SRCQT6C_LIBQFUTUREWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qfuturewatcherbase.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFutureWatcherBase* self ```
QMetaObject* q_futurewatcherbase_meta_object(void* self);

/// ``` QFutureWatcherBase* self, const char* param1 ```
void* q_futurewatcherbase_metacast(void* self, const char* param1);

/// ``` QFutureWatcherBase* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_futurewatcherbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_futurewatcherbase_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValue)
///
/// ``` QFutureWatcherBase* self ```
int32_t q_futurewatcherbase_progress_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
///
/// ``` QFutureWatcherBase* self ```
int32_t q_futurewatcherbase_progress_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
///
/// ``` QFutureWatcherBase* self ```
int32_t q_futurewatcherbase_progress_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
///
/// ``` QFutureWatcherBase* self ```
const char* q_futurewatcherbase_progress_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_canceled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_suspending(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_suspended(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_wait_for_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
///
/// ``` QFutureWatcherBase* self, int limit ```
void q_futurewatcherbase_set_pending_results_limit(void* self, int limit);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
///
/// ``` QFutureWatcherBase* self, QEvent* event ```
bool q_futurewatcherbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_started(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_finished(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_canceled(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_canceled(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_paused(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_paused(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_suspending(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_suspending(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_suspended(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_suspended(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_resumed(void* self);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*) ```
void q_futurewatcherbase_on_resumed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
///
/// ``` QFutureWatcherBase* self, int resultIndex ```
void q_futurewatcherbase_result_ready_at(void* self, int resultIndex);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*, int) ```
void q_futurewatcherbase_on_result_ready_at(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
///
/// ``` QFutureWatcherBase* self, int beginIndex, int endIndex ```
void q_futurewatcherbase_results_ready_at(void* self, int beginIndex, int endIndex);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*, int, int) ```
void q_futurewatcherbase_on_results_ready_at(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
///
/// ``` QFutureWatcherBase* self, int minimum, int maximum ```
void q_futurewatcherbase_progress_range_changed(void* self, int minimum, int maximum);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*, int, int) ```
void q_futurewatcherbase_on_progress_range_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
///
/// ``` QFutureWatcherBase* self, int progressValue ```
void q_futurewatcherbase_progress_value_changed(void* self, int progressValue);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*, int) ```
void q_futurewatcherbase_on_progress_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
///
/// ``` QFutureWatcherBase* self, const char* progressText ```
void q_futurewatcherbase_progress_text_changed(void* self, const char* progressText);

/// ``` QFutureWatcherBase* self, void (*slot)(QFutureWatcherBase*, const char*) ```
void q_futurewatcherbase_on_progress_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
///
/// ``` QFutureWatcherBase* self, bool suspendVal ```
void q_futurewatcherbase_set_suspended(void* self, bool suspendVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_suspend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_toggle_suspended(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
///
/// ``` QFutureWatcherBase* self, bool paused ```
void q_futurewatcherbase_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_toggle_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_futurewatcherbase_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_futurewatcherbase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QFutureWatcherBase* self, QObject* watched, QEvent* event ```
bool q_futurewatcherbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFutureWatcherBase* self ```
const char* q_futurewatcherbase_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFutureWatcherBase* self, char* name ```
void q_futurewatcherbase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFutureWatcherBase* self ```
bool q_futurewatcherbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFutureWatcherBase* self, bool b ```
bool q_futurewatcherbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFutureWatcherBase* self ```
QThread* q_futurewatcherbase_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFutureWatcherBase* self, QThread* thread ```
void q_futurewatcherbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFutureWatcherBase* self, int interval ```
int32_t q_futurewatcherbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFutureWatcherBase* self, int id ```
void q_futurewatcherbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFutureWatcherBase* self ```
libqt_list /* of QObject* */ q_futurewatcherbase_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFutureWatcherBase* self, QObject* parent ```
void q_futurewatcherbase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFutureWatcherBase* self, QObject* filterObj ```
void q_futurewatcherbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFutureWatcherBase* self, QObject* obj ```
void q_futurewatcherbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_futurewatcherbase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFutureWatcherBase* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_futurewatcherbase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_futurewatcherbase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_futurewatcherbase_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFutureWatcherBase* self, const char* name, QVariant* value ```
bool q_futurewatcherbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFutureWatcherBase* self, const char* name ```
QVariant* q_futurewatcherbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFutureWatcherBase* self ```
const char** q_futurewatcherbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFutureWatcherBase* self ```
QBindingStorage* q_futurewatcherbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFutureWatcherBase* self ```
QBindingStorage* q_futurewatcherbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QFutureWatcherBase* self, void (*slot)(QObject*) ```
void q_futurewatcherbase_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFutureWatcherBase* self ```
QObject* q_futurewatcherbase_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFutureWatcherBase* self, const char* classname ```
bool q_futurewatcherbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFutureWatcherBase* self, int interval, enum Qt__TimerType timerType ```
int32_t q_futurewatcherbase_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_futurewatcherbase_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFutureWatcherBase* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_futurewatcherbase_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFutureWatcherBase* self, QObject* param1 ```
void q_futurewatcherbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QFutureWatcherBase* self, void (*slot)(QObject*, QObject*) ```
void q_futurewatcherbase_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QFutureWatcherBase* self ```
void q_futurewatcherbase_delete(void* self);

#endif
