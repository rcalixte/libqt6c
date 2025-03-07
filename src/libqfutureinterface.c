#include "libqmutex.hpp"
#include "libqrunnable.hpp"
#include <string.h>
#include "libqthreadpool.hpp"
#include "libqfutureinterface.hpp"
#include "libqfutureinterface.h"

/// https://doc.qt.io/qt-6/qfutureinterfacebase.html

/// q_futureinterfacebase_new constructs a new QFutureInterfaceBase object.
///
///
QFutureInterfaceBase* q_futureinterfacebase_new() {
    return QFutureInterfaceBase_new();
}

/// q_futureinterfacebase_new2 constructs a new QFutureInterfaceBase object.
///
/// ``` QFutureInterfaceBase* other ```
QFutureInterfaceBase* q_futureinterfacebase_new2(void* other) {
    return QFutureInterfaceBase_new2((QFutureInterfaceBase*)other);
}

/// q_futureinterfacebase_new3 constructs a new QFutureInterfaceBase object.
///
/// ``` enum QFutureInterfaceBase__State initialState ```
QFutureInterfaceBase* q_futureinterfacebase_new3(int64_t initialState) {
    return QFutureInterfaceBase_new3(initialState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator=)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
void q_futureinterfacebase_operator_assign(void* self, void* other) {
    QFutureInterfaceBase_OperatorAssign((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_started(void* self) {
    QFutureInterfaceBase_ReportStarted((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_finished(void* self) {
    QFutureInterfaceBase_ReportFinished((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_canceled(void* self) {
    QFutureInterfaceBase_ReportCanceled((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportResultsReady)
///
/// ``` QFutureInterfaceBase* self, int beginIndex, int endIndex ```
void q_futureinterfacebase_report_results_ready(void* self, int beginIndex, int endIndex) {
    QFutureInterfaceBase_ReportResultsReady((QFutureInterfaceBase*)self, beginIndex, endIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
///
/// ``` QFutureInterfaceBase* self, QRunnable* runnable ```
void q_futureinterfacebase_set_runnable(void* self, void* runnable) {
    QFutureInterfaceBase_SetRunnable((QFutureInterfaceBase*)self, (QRunnable*)runnable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
///
/// ``` QFutureInterfaceBase* self, QThreadPool* pool ```
void q_futureinterfacebase_set_thread_pool(void* self, void* pool) {
    QFutureInterfaceBase_SetThreadPool((QFutureInterfaceBase*)self, (QThreadPool*)pool);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
///
/// ``` QFutureInterfaceBase* self ```
QThreadPool* q_futureinterfacebase_thread_pool(void* self) {
    return QFutureInterfaceBase_ThreadPool((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
///
/// ``` QFutureInterfaceBase* self, bool enable ```
void q_futureinterfacebase_set_filter_mode(void* self, bool enable) {
    QFutureInterfaceBase_SetFilterMode((QFutureInterfaceBase*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressRange)
///
/// ``` QFutureInterfaceBase* self, int minimum, int maximum ```
void q_futureinterfacebase_set_progress_range(void* self, int minimum, int maximum) {
    QFutureInterfaceBase_SetProgressRange((QFutureInterfaceBase*)self, minimum, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_progress_minimum(void* self) {
    return QFutureInterfaceBase_ProgressMinimum((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_progress_maximum(void* self) {
    return QFutureInterfaceBase_ProgressMaximum((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_progress_update_needed(void* self) {
    return QFutureInterfaceBase_IsProgressUpdateNeeded((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
///
/// ``` QFutureInterfaceBase* self, int progressValue ```
void q_futureinterfacebase_set_progress_value(void* self, int progressValue) {
    QFutureInterfaceBase_SetProgressValue((QFutureInterfaceBase*)self, progressValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_progress_value(void* self) {
    return QFutureInterfaceBase_ProgressValue((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
///
/// ``` QFutureInterfaceBase* self, int progressValue, const char* progressText ```
void q_futureinterfacebase_set_progress_value_and_text(void* self, int progressValue, const char* progressText) {
    QFutureInterfaceBase_SetProgressValueAndText((QFutureInterfaceBase*)self, progressValue, qstring(progressText));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
///
/// ``` QFutureInterfaceBase* self ```
const char* q_futureinterfacebase_progress_text(void* self) {
    libqt_string _str = QFutureInterfaceBase_ProgressText((QFutureInterfaceBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
///
/// ``` QFutureInterfaceBase* self, int resultCount ```
void q_futureinterfacebase_set_expected_result_count(void* self, int resultCount) {
    QFutureInterfaceBase_SetExpectedResultCount((QFutureInterfaceBase*)self, resultCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_expected_result_count(void* self) {
    return QFutureInterfaceBase_ExpectedResultCount((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_result_count(void* self) {
    return QFutureInterfaceBase_ResultCount((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
///
/// ``` QFutureInterfaceBase* self, enum QFutureInterfaceBase__State state ```
bool q_futureinterfacebase_query_state(void* self, int64_t state) {
    return QFutureInterfaceBase_QueryState((QFutureInterfaceBase*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_running(void* self) {
    return QFutureInterfaceBase_IsRunning((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_started(void* self) {
    return QFutureInterfaceBase_IsStarted((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_canceled(void* self) {
    return QFutureInterfaceBase_IsCanceled((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_finished(void* self) {
    return QFutureInterfaceBase_IsFinished((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_paused(void* self) {
    return QFutureInterfaceBase_IsPaused((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
///
/// ``` QFutureInterfaceBase* self, bool paused ```
void q_futureinterfacebase_set_paused(void* self, bool paused) {
    QFutureInterfaceBase_SetPaused((QFutureInterfaceBase*)self, paused);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_toggle_paused(void* self) {
    QFutureInterfaceBase_TogglePaused((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_suspending(void* self) {
    return QFutureInterfaceBase_IsSuspending((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_suspended(void* self) {
    return QFutureInterfaceBase_IsSuspended((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_throttled(void* self) {
    return QFutureInterfaceBase_IsThrottled((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
///
/// ``` QFutureInterfaceBase* self, int index ```
bool q_futureinterfacebase_is_result_ready_at(void* self, int index) {
    return QFutureInterfaceBase_IsResultReadyAt((QFutureInterfaceBase*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_valid(void* self) {
    return QFutureInterfaceBase_IsValid((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
///
/// ``` QFutureInterfaceBase* self ```
int32_t q_futureinterfacebase_load_state(void* self) {
    return QFutureInterfaceBase_LoadState((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_cancel(void* self) {
    QFutureInterfaceBase_Cancel((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_cancel_and_finish(void* self) {
    QFutureInterfaceBase_CancelAndFinish((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
///
/// ``` QFutureInterfaceBase* self, bool suspendVal ```
void q_futureinterfacebase_set_suspended(void* self, bool suspendVal) {
    QFutureInterfaceBase_SetSuspended((QFutureInterfaceBase*)self, suspendVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_toggle_suspended(void* self) {
    QFutureInterfaceBase_ToggleSuspended((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_report_suspended(void* self) {
    QFutureInterfaceBase_ReportSuspended((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
///
/// ``` QFutureInterfaceBase* self, bool enable ```
void q_futureinterfacebase_set_throttled(void* self, bool enable) {
    QFutureInterfaceBase_SetThrottled((QFutureInterfaceBase*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_wait_for_finished(void* self) {
    QFutureInterfaceBase_WaitForFinished((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_wait_for_next_result(void* self) {
    return QFutureInterfaceBase_WaitForNextResult((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
///
/// ``` QFutureInterfaceBase* self, int resultIndex ```
void q_futureinterfacebase_wait_for_result(void* self, int resultIndex) {
    QFutureInterfaceBase_WaitForResult((QFutureInterfaceBase*)self, resultIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_wait_for_resume(void* self) {
    QFutureInterfaceBase_WaitForResume((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_suspend_if_requested(void* self) {
    QFutureInterfaceBase_SuspendIfRequested((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
///
/// ``` QFutureInterfaceBase* self ```
QMutex* q_futureinterfacebase_mutex(void* self) {
    return QFutureInterfaceBase_Mutex((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_has_exception(void* self) {
    return QFutureInterfaceBase_HasException((QFutureInterfaceBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator==)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
bool q_futureinterfacebase_operator_equal(void* self, void* other) {
    return QFutureInterfaceBase_OperatorEqual((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator!=)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
bool q_futureinterfacebase_operator_not_equal(void* self, void* other) {
    return QFutureInterfaceBase_OperatorNotEqual((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
///
/// ``` QFutureInterfaceBase* self, QFutureInterfaceBase* other ```
void q_futureinterfacebase_swap(void* self, void* other) {
    QFutureInterfaceBase_Swap((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
///
/// ``` QFutureInterfaceBase* self ```
bool q_futureinterfacebase_is_chain_canceled(void* self) {
    return QFutureInterfaceBase_IsChainCanceled((QFutureInterfaceBase*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QFutureInterfaceBase* self ```
void q_futureinterfacebase_delete(void* self) {
    QFutureInterfaceBase_Delete((QFutureInterfaceBase*)(self));
}