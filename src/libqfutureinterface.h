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

QFutureInterfaceBase* q_futureinterfacebase_new();
QFutureInterfaceBase* q_futureinterfacebase_new2(void* other);
QFutureInterfaceBase* q_futureinterfacebase_new3(int64_t initialState);
void q_futureinterfacebase_operator_assign(void* self, void* other);
void q_futureinterfacebase_report_started(void* self);
void q_futureinterfacebase_report_finished(void* self);
void q_futureinterfacebase_report_canceled(void* self);
void q_futureinterfacebase_report_results_ready(void* self, int beginIndex, int endIndex);
void q_futureinterfacebase_set_runnable(void* self, void* runnable);
void q_futureinterfacebase_set_thread_pool(void* self, void* pool);
QThreadPool* q_futureinterfacebase_thread_pool(void* self);
void q_futureinterfacebase_set_filter_mode(void* self, bool enable);
void q_futureinterfacebase_set_progress_range(void* self, int minimum, int maximum);
int32_t q_futureinterfacebase_progress_minimum(void* self);
int32_t q_futureinterfacebase_progress_maximum(void* self);
bool q_futureinterfacebase_is_progress_update_needed(void* self);
void q_futureinterfacebase_set_progress_value(void* self, int progressValue);
int32_t q_futureinterfacebase_progress_value(void* self);
void q_futureinterfacebase_set_progress_value_and_text(void* self, int progressValue, const char* progressText);
const char* q_futureinterfacebase_progress_text(void* self);
void q_futureinterfacebase_set_expected_result_count(void* self, int resultCount);
int32_t q_futureinterfacebase_expected_result_count(void* self);
int32_t q_futureinterfacebase_result_count(void* self);
bool q_futureinterfacebase_query_state(void* self, int64_t state);
bool q_futureinterfacebase_is_running(void* self);
bool q_futureinterfacebase_is_started(void* self);
bool q_futureinterfacebase_is_canceled(void* self);
bool q_futureinterfacebase_is_finished(void* self);
bool q_futureinterfacebase_is_paused(void* self);
void q_futureinterfacebase_set_paused(void* self, bool paused);
void q_futureinterfacebase_toggle_paused(void* self);
bool q_futureinterfacebase_is_suspending(void* self);
bool q_futureinterfacebase_is_suspended(void* self);
bool q_futureinterfacebase_is_throttled(void* self);
bool q_futureinterfacebase_is_result_ready_at(void* self, int index);
bool q_futureinterfacebase_is_valid(void* self);
int32_t q_futureinterfacebase_load_state(void* self);
void q_futureinterfacebase_cancel(void* self);
void q_futureinterfacebase_cancel_and_finish(void* self);
void q_futureinterfacebase_set_suspended(void* self, bool suspendVal);
void q_futureinterfacebase_toggle_suspended(void* self);
void q_futureinterfacebase_report_suspended(void* self);
void q_futureinterfacebase_set_throttled(void* self, bool enable);
void q_futureinterfacebase_wait_for_finished(void* self);
bool q_futureinterfacebase_wait_for_next_result(void* self);
void q_futureinterfacebase_wait_for_result(void* self, int resultIndex);
void q_futureinterfacebase_wait_for_resume(void* self);
void q_futureinterfacebase_suspend_if_requested(void* self);
QMutex* q_futureinterfacebase_mutex(void* self);
bool q_futureinterfacebase_has_exception(void* self);
bool q_futureinterfacebase_operator_equal(void* self, void* other);
bool q_futureinterfacebase_operator_not_equal(void* self, void* other);
void q_futureinterfacebase_swap(void* self, void* other);
bool q_futureinterfacebase_is_chain_canceled(void* self);
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
