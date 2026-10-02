#include "libqmutex.hpp"
#include "libqrunnable.hpp"
#include "libqthreadpool.hpp"
#include "libqfutureinterface.hpp"
#include "libqfutureinterface.h"

QFutureInterfaceBase* q_futureinterfacebase_new() {
    return QFutureInterfaceBase_New();
}

QFutureInterfaceBase* q_futureinterfacebase_new2(const void* other) {
    return QFutureInterfaceBase_New2((QFutureInterfaceBase*)other);
}

QFutureInterfaceBase* q_futureinterfacebase_new3(int32_t initialState) {
    return QFutureInterfaceBase_New3(initialState);
}

void q_futureinterfacebase_report_started(void* self) {
    QFutureInterfaceBase_ReportStarted((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_report_finished(void* self) {
    QFutureInterfaceBase_ReportFinished((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_report_canceled(void* self) {
    QFutureInterfaceBase_ReportCanceled((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_report_results_ready(void* self, int beginIndex, int endIndex) {
    QFutureInterfaceBase_ReportResultsReady((QFutureInterfaceBase*)self, beginIndex, endIndex);
}

void q_futureinterfacebase_set_runnable(void* self, void* runnable) {
    QFutureInterfaceBase_SetRunnable((QFutureInterfaceBase*)self, (QRunnable*)runnable);
}

void q_futureinterfacebase_set_thread_pool(void* self, void* pool) {
    QFutureInterfaceBase_SetThreadPool((QFutureInterfaceBase*)self, (QThreadPool*)pool);
}

QThreadPool* q_futureinterfacebase_thread_pool(const void* self) {
    return QFutureInterfaceBase_ThreadPool((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_set_filter_mode(void* self, bool enable) {
    QFutureInterfaceBase_SetFilterMode((QFutureInterfaceBase*)self, enable);
}

void q_futureinterfacebase_set_progress_range(void* self, int minimum, int maximum) {
    QFutureInterfaceBase_SetProgressRange((QFutureInterfaceBase*)self, minimum, maximum);
}

int32_t q_futureinterfacebase_progress_minimum(const void* self) {
    return QFutureInterfaceBase_ProgressMinimum((QFutureInterfaceBase*)self);
}

int32_t q_futureinterfacebase_progress_maximum(const void* self) {
    return QFutureInterfaceBase_ProgressMaximum((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_progress_update_needed(const void* self) {
    return QFutureInterfaceBase_IsProgressUpdateNeeded((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_set_progress_value(void* self, int progressValue) {
    QFutureInterfaceBase_SetProgressValue((QFutureInterfaceBase*)self, progressValue);
}

int32_t q_futureinterfacebase_progress_value(const void* self) {
    return QFutureInterfaceBase_ProgressValue((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_set_progress_value_and_text(void* self, int progressValue, const char* progressText) {
    QFutureInterfaceBase_SetProgressValueAndText((QFutureInterfaceBase*)self, progressValue, qstring(progressText));
}

const char* q_futureinterfacebase_progress_text(const void* self) {
    libqt_string _str = QFutureInterfaceBase_ProgressText((QFutureInterfaceBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_futureinterfacebase_set_expected_result_count(void* self, int resultCount) {
    QFutureInterfaceBase_SetExpectedResultCount((QFutureInterfaceBase*)self, resultCount);
}

int32_t q_futureinterfacebase_expected_result_count(void* self) {
    return QFutureInterfaceBase_ExpectedResultCount((QFutureInterfaceBase*)self);
}

int32_t q_futureinterfacebase_result_count(const void* self) {
    return QFutureInterfaceBase_ResultCount((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_query_state(const void* self, int32_t state) {
    return QFutureInterfaceBase_QueryState((QFutureInterfaceBase*)self, state);
}

bool q_futureinterfacebase_is_running(const void* self) {
    return QFutureInterfaceBase_IsRunning((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_started(const void* self) {
    return QFutureInterfaceBase_IsStarted((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_canceled(const void* self) {
    return QFutureInterfaceBase_IsCanceled((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_finished(const void* self) {
    return QFutureInterfaceBase_IsFinished((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_paused(const void* self) {
    return QFutureInterfaceBase_IsPaused((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_set_paused(void* self, bool paused) {
    QFutureInterfaceBase_SetPaused((QFutureInterfaceBase*)self, paused);
}

void q_futureinterfacebase_toggle_paused(void* self) {
    QFutureInterfaceBase_TogglePaused((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_suspending(const void* self) {
    return QFutureInterfaceBase_IsSuspending((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_suspended(const void* self) {
    return QFutureInterfaceBase_IsSuspended((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_throttled(const void* self) {
    return QFutureInterfaceBase_IsThrottled((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_is_result_ready_at(const void* self, int index) {
    return QFutureInterfaceBase_IsResultReadyAt((QFutureInterfaceBase*)self, index);
}

bool q_futureinterfacebase_is_valid(const void* self) {
    return QFutureInterfaceBase_IsValid((QFutureInterfaceBase*)self);
}

int32_t q_futureinterfacebase_load_state(const void* self) {
    return QFutureInterfaceBase_LoadState((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_cancel(void* self) {
    QFutureInterfaceBase_Cancel((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_cancel_and_finish(void* self) {
    QFutureInterfaceBase_CancelAndFinish((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_set_suspended(void* self, bool suspendVal) {
    QFutureInterfaceBase_SetSuspended((QFutureInterfaceBase*)self, suspendVal);
}

void q_futureinterfacebase_toggle_suspended(void* self) {
    QFutureInterfaceBase_ToggleSuspended((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_report_suspended(const void* self) {
    QFutureInterfaceBase_ReportSuspended((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_set_throttled(void* self, bool enable) {
    QFutureInterfaceBase_SetThrottled((QFutureInterfaceBase*)self, enable);
}

void q_futureinterfacebase_wait_for_finished(void* self) {
    QFutureInterfaceBase_WaitForFinished((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_wait_for_next_result(void* self) {
    return QFutureInterfaceBase_WaitForNextResult((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_wait_for_result(void* self, int resultIndex) {
    QFutureInterfaceBase_WaitForResult((QFutureInterfaceBase*)self, resultIndex);
}

void q_futureinterfacebase_wait_for_resume(void* self) {
    QFutureInterfaceBase_WaitForResume((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_suspend_if_requested(void* self) {
    QFutureInterfaceBase_SuspendIfRequested((QFutureInterfaceBase*)self);
}

QMutex* q_futureinterfacebase_mutex(const void* self) {
    return QFutureInterfaceBase_Mutex((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_has_exception(const void* self) {
    return QFutureInterfaceBase_HasException((QFutureInterfaceBase*)self);
}

bool q_futureinterfacebase_operator_equal(const void* self, const void* other) {
    return QFutureInterfaceBase_OperatorEqual((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

bool q_futureinterfacebase_operator_not_equal(const void* self, const void* other) {
    return QFutureInterfaceBase_OperatorNotEqual((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

void q_futureinterfacebase_swap(void* self, void* other) {
    QFutureInterfaceBase_Swap((QFutureInterfaceBase*)self, (QFutureInterfaceBase*)other);
}

bool q_futureinterfacebase_is_chain_canceled(const void* self) {
    return QFutureInterfaceBase_IsChainCanceled((QFutureInterfaceBase*)self);
}

void q_futureinterfacebase_delete(void* self) {
    QFutureInterfaceBase_Delete((QFutureInterfaceBase*)(self));
}
