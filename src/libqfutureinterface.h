#pragma once
#ifndef SRCQT6C_LIBQFUTUREINTERFACE_H
#define SRCQT6C_LIBQFUTUREINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmutex.h"
#include "libqrunnable.h"
#include <string.h>
#include "libqthreadpool.h"

/// https://doc.qt.io/qt-6/qfutureinterfacebase.html

/// q_futureinterfacebase_new constructs a new QFutureInterfaceBase object.
///
///
QFutureInterfaceBase* q_futureinterfacebase_new();

/// q_futureinterfacebase_new2 constructs a new QFutureInterfaceBase object.
///
/// ``` QFutureInterfaceBase* other ```
QFutureInterfaceBase* q_futureinterfacebase_new2(void* other);

/// q_futureinterfacebase_new3 constructs a new QFutureInterfaceBase object.
///
/// ``` enum QFutureInterfaceBase__State initialState ```
QFutureInterfaceBase* q_futureinterfacebase_new3(int64_t initialState);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator=)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
void q_futureinterfacebase_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_canceled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportResultsReady)
///
/// ``` QFutureInterfaceBase* self, int beginIndex, int endIndex ```
void q_futureinterfacebase_report_results_ready(void* self, int beginIndex, int endIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
///
/// ``` QFutureInterfaceBase* self, QRunnable* runnable ```
void q_futureinterfacebase_set_runnable(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
///
/// ``` QFutureInterfaceBase* self, QThreadPool* pool ```
void q_futureinterfacebase_set_thread_pool(void* self, void* pool);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
///
/// ``` QFutureInterfaceBase* self ```
QThreadPool* q_futureinterfacebase_thread_pool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
///
/// ``` QFutureInterfaceBase* self, bool enable ```
void q_futureinterfacebase_set_filter_mode(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressRange)
///
/// ``` QFutureInterfaceBase* self, int minimum, int maximum ```
void q_futureinterfacebase_set_progress_range(void* self, int minimum, int maximum);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_progress_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_progress_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_progress_update_needed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
///
/// ``` QFutureInterfaceBase* self, int progressValue ```
void q_futureinterfacebase_set_progress_value(void* self, int progressValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_progress_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
///
/// ``` QFutureInterfaceBase* self, int progressValue, const char* progressText ```
void q_futureinterfacebase_set_progress_value_and_text(void* self, int progressValue, const char* progressText);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
///
/// ``` QFutureInterfaceBase* self ```
const char* q_futureinterfacebase_progress_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
///
/// ``` QFutureInterfaceBase* self, int resultCount ```
void q_futureinterfacebase_set_expected_result_count(void* self, int resultCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_expected_result_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_result_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
///
/// ``` QFutureInterfaceBase* self, enum QFutureInterfaceBase__State state ```
bool q_futureinterfacebase_query_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_canceled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
///
/// ``` QFutureInterfaceBase* self, bool paused ```
void q_futureinterfacebase_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_toggle_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_suspending(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_suspended(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_throttled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
///
/// ``` QFutureInterfaceBase* self, int index ```
bool q_futureinterfacebase_is_result_ready_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_load_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_cancel_and_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
///
/// ``` QFutureInterfaceBase* self, bool suspendVal ```
void q_futureinterfacebase_set_suspended(void* self, bool suspendVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_toggle_suspended(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_suspended(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
///
/// ``` QFutureInterfaceBase* self, bool enable ```
void q_futureinterfacebase_set_throttled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_wait_for_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_wait_for_next_result(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
///
/// ``` QFutureInterfaceBase* self, int resultIndex ```
void q_futureinterfacebase_wait_for_result(void* self, int resultIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_wait_for_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_suspend_if_requested(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
///
/// ``` QFutureInterfaceBase* self ```
QMutex* q_futureinterfacebase_mutex(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_has_exception(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator==)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
bool q_futureinterfacebase_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator!=)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
bool q_futureinterfacebase_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
void q_futureinterfacebase_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_chain_canceled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#dtor.QFutureInterfaceBase)
///
/// Delete this object from C++ memory.
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_delete(void* self);

/// https://doc.qt.io/qt-6/qfutureinterface.html#types

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

typedef enum {
    QFUTUREINTERFACEBASE_CANCELMODE_CANCELONLY = 0,
    QFUTUREINTERFACEBASE_CANCELMODE_CANCELANDFINISH = 1
} QFutureInterfaceBase__CancelMode;

#endif
