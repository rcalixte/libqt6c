#pragma once
#ifndef SRC_QT6C_LIBQFUTUREINTERFACE_H
#define SRC_QT6C_LIBQFUTUREINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html)

/// q_futureinterfacebase_new constructs a new QFutureInterfaceBase object.
///
QFutureInterfaceBase* q_futureinterfacebase_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html)

/// q_futureinterfacebase_new2 constructs a new QFutureInterfaceBase object.
///
/// @param other QFutureInterfaceBase*
///
QFutureInterfaceBase* q_futureinterfacebase_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html)

/// q_futureinterfacebase_new3 constructs a new QFutureInterfaceBase object.
///
/// @param initialState enum QFutureInterfaceBase__State
///
QFutureInterfaceBase* q_futureinterfacebase_new3(int32_t initialState);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq)
///
/// @param self QFutureInterfaceBase*
/// @param other QFutureInterfaceBase*
///
void q_futureinterfacebase_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_report_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_report_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_report_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportResultsReady)
///
/// @param self QFutureInterfaceBase*
/// @param beginIndex int
/// @param endIndex int
///
void q_futureinterfacebase_report_results_ready(void* self, int beginIndex, int endIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
///
/// @param self QFutureInterfaceBase*
/// @param runnable QRunnable*
///
void q_futureinterfacebase_set_runnable(void* self, void* runnable);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
///
/// @param self QFutureInterfaceBase*
/// @param pool QThreadPool*
///
void q_futureinterfacebase_set_thread_pool(void* self, void* pool);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
///
/// @param self QFutureInterfaceBase*
///
QThreadPool* q_futureinterfacebase_thread_pool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
///
/// @param self QFutureInterfaceBase*
/// @param enable bool
///
void q_futureinterfacebase_set_filter_mode(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressRange)
///
/// @param self QFutureInterfaceBase*
/// @param minimum int
/// @param maximum int
///
void q_futureinterfacebase_set_progress_range(void* self, int minimum, int maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
///
/// @param self QFutureInterfaceBase*
///
int32_t q_futureinterfacebase_progress_minimum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
///
/// @param self QFutureInterfaceBase*
///
int32_t q_futureinterfacebase_progress_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_progress_update_needed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
///
/// @param self QFutureInterfaceBase*
/// @param progressValue int
///
void q_futureinterfacebase_set_progress_value(void* self, int progressValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
///
/// @param self QFutureInterfaceBase*
///
int32_t q_futureinterfacebase_progress_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
///
/// @param self QFutureInterfaceBase*
/// @param progressValue int
/// @param progressText const char*
///
void q_futureinterfacebase_set_progress_value_and_text(void* self, int progressValue, const char* progressText);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFutureInterfaceBase*
///
const char* q_futureinterfacebase_progress_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
///
/// @param self QFutureInterfaceBase*
/// @param resultCount int
///
void q_futureinterfacebase_set_expected_result_count(void* self, int resultCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
///
/// @param self QFutureInterfaceBase*
///
int32_t q_futureinterfacebase_expected_result_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
///
/// @param self QFutureInterfaceBase*
///
int32_t q_futureinterfacebase_result_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
///
/// @param self QFutureInterfaceBase*
/// @param state enum QFutureInterfaceBase__State
///
bool q_futureinterfacebase_query_state(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_running(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_paused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
///
/// @param self QFutureInterfaceBase*
/// @param paused bool
///
void q_futureinterfacebase_set_paused(void* self, bool paused);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_toggle_paused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_suspending(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_suspended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_throttled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
///
/// @param self QFutureInterfaceBase*
/// @param index int
///
bool q_futureinterfacebase_is_result_ready_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
///
/// @param self QFutureInterfaceBase*
///
int32_t q_futureinterfacebase_load_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_cancel_and_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
///
/// @param self QFutureInterfaceBase*
/// @param suspendVal bool
///
void q_futureinterfacebase_set_suspended(void* self, bool suspendVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_toggle_suspended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_report_suspended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
///
/// @param self QFutureInterfaceBase*
/// @param enable bool
///
void q_futureinterfacebase_set_throttled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_wait_for_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_wait_for_next_result(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
///
/// @param self QFutureInterfaceBase*
/// @param resultIndex int
///
void q_futureinterfacebase_wait_for_result(void* self, int resultIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_wait_for_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_suspend_if_requested(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
///
/// @param self QFutureInterfaceBase*
///
QMutex* q_futureinterfacebase_mutex(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_has_exception(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq-eq)
///
/// @param self QFutureInterfaceBase*
/// @param other QFutureInterfaceBase*
///
bool q_futureinterfacebase_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-not-eq)
///
/// @param self QFutureInterfaceBase*
/// @param other QFutureInterfaceBase*
///
bool q_futureinterfacebase_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
///
/// @param self QFutureInterfaceBase*
/// @param other QFutureInterfaceBase*
///
void q_futureinterfacebase_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
///
/// @param self QFutureInterfaceBase*
///
bool q_futureinterfacebase_is_chain_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#dtor.QFutureInterfaceBase)
///
/// Delete this object from C++ memory.
///
/// @param self QFutureInterfaceBase*
///
void q_futureinterfacebase_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterface.html#public-types)

typedef enum {
    QFUTUREINTERFACEBASE_STATE_NOSTATE = 0,
    QFUTUREINTERFACEBASE_STATE_RUNNING = 1,
    QFUTUREINTERFACEBASE_STATE_STARTED = 2,
    QFUTUREINTERFACEBASE_STATE_FINISHED = 4,
    QFUTUREINTERFACEBASE_STATE_CANCELED = 8,
    QFUTUREINTERFACEBASE_STATE_SUSPENDING = 16,
    QFUTUREINTERFACEBASE_STATE_SUSPENDED = 32,
    QFUTUREINTERFACEBASE_STATE_THROTTLED = 64,
    QFUTUREINTERFACEBASE_STATE_PENDING = 128
} QFutureInterfaceBase__State;

/// [Upstream resources](https://doc.qt.io/qt-6/qfutureinterface.html#public-types)

typedef enum {
    QFUTUREINTERFACEBASE_CANCELMODE_CANCELONLY = 0,
    QFUTUREINTERFACEBASE_CANCELMODE_CANCELANDFINISH = 1
} QFutureInterfaceBase__CancelMode;

#endif
