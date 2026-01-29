#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJOB_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjob.html)

/// k_job_new constructs a new KJob object.
///
KJob* k_job_new();

/// [Upstream resources](https://api.kde.org/kjob.html)

/// k_job_new2 constructs a new KJob object.
///
/// @param parent QObject*
///
KJob* k_job_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KJob*
///
const QMetaObject* k_job_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback const QMetaObject* func()
///
void k_job_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KJob*
///
const QMetaObject* k_job_qbase_meta_object(void* self);

/// @param self KJob*
/// @param param1 const char*
///
void* k_job_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void* func(KJob* self, const char* param1)
///
void k_job_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KJob*
/// @param param1 const char*
///
void* k_job_qbase_metacast(void* self, const char* param1);

/// @param self KJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_job_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback int32_t func(KJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_job_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_job_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_job_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KJob*
/// @param delegate KJobUiDelegate*
///
void k_job_set_ui_delegate(void* self, void* delegate);

/// [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KJob*
///
KJobUiDelegate* k_job_ui_delegate(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KJob*
///
/// @return flag of enum KJob__Capability
///
int32_t k_job_capabilities(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KJob*
///
bool k_job_is_suspended(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#start)
///
/// @param self KJob*
///
void k_job_start(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#start)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func()
///
void k_job_on_start(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#start)
///
/// Base class method implementation
///
/// @param self KJob*
///
void k_job_qbase_start(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KJob*
///
bool k_job_kill(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#suspend)
///
/// @param self KJob*
///
bool k_job_suspend(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#resume)
///
/// @param self KJob*
///
bool k_job_resume(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// @param self KJob*
///
bool k_job_do_kill(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback bool func()
///
void k_job_on_do_kill(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Base class method implementation
///
/// @param self KJob*
///
bool k_job_qbase_do_kill(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// @param self KJob*
///
bool k_job_do_suspend(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback bool func()
///
void k_job_on_do_suspend(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Base class method implementation
///
/// @param self KJob*
///
bool k_job_qbase_do_suspend(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// @param self KJob*
///
bool k_job_do_resume(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback bool func()
///
void k_job_on_do_resume(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Base class method implementation
///
/// @param self KJob*
///
bool k_job_qbase_do_resume(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// @param self KJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_job_set_capabilities(void* self, int32_t capabilities);

/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, flag of enum KJob__Capability capabilities)
///
void k_job_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_job_qbase_set_capabilities(void* self, int32_t capabilities);

/// [Upstream resources](https://api.kde.org/kjob.html#exec)
///
/// @param self KJob*
///
bool k_job_exec(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#error)
///
/// @param self KJob*
///
int32_t k_job_error(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#errorText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KJob*
///
const char* k_job_error_text(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KJob*
///
const char* k_job_error_string(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback const char* func()
///
void k_job_on_error_string(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// Base class method implementation
///
/// @param self KJob*
///
const char* k_job_qbase_error_string(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KJob*
/// @param unit enum KJob__Unit
///
uint64_t k_job_processed_amount(void* self, int32_t unit);

/// [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KJob*
/// @param unit enum KJob__Unit
///
uint64_t k_job_total_amount(void* self, int32_t unit);

/// [Upstream resources](https://api.kde.org/kjob.html#percent)
///
/// @param self KJob*
///
uint64_t k_job_percent(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KJob*
/// @param autodelete bool
///
void k_job_set_auto_delete(void* self, bool autodelete);

/// [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KJob*
///
bool k_job_is_auto_delete(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KJob*
///
void k_job_set_finished_notification_hidden(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KJob*
///
bool k_job_is_finished_notification_hidden(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KJob*
///
bool k_job_is_started_with_exec(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KJob*
///
long long k_job_elapsed_time(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KJob*
/// @param job KJob*
/// @param message const char*
///
void k_job_info_message(void* self, void* job, const char* message);

/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, const char* message)
///
void k_job_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KJob*
/// @param job KJob*
/// @param message const char*
///
void k_job_warning(void* self, void* job, const char* message);

/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, const char* message)
///
void k_job_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_job_total_size(void* self, void* job, uint64_t size);

/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, uint64_t size)
///
void k_job_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_job_processed_size(void* self, void* job, uint64_t size);

/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, uint64_t size)
///
void k_job_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KJob*
/// @param job KJob*
/// @param speed uint64_t
///
void k_job_speed(void* self, void* job, uint64_t speed);

/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, uint64_t speed)
///
void k_job_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// @param self KJob*
///
bool k_job_is_finished(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback bool func()
///
void k_job_on_is_finished(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Base class method implementation
///
/// @param self KJob*
///
bool k_job_qbase_is_finished(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// @param self KJob*
/// @param errorCode int
///
void k_job_set_error(void* self, int errorCode);

/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, int errorCode)
///
void k_job_on_set_error(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param errorCode int
///
void k_job_qbase_set_error(void* self, int errorCode);

/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// @param self KJob*
/// @param errorText const char*
///
void k_job_set_error_text(void* self, const char* errorText);

/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, const char* errorText)
///
void k_job_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param errorText const char*
///
void k_job_qbase_set_error_text(void* self, const char* errorText);

/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// @param self KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_job_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_job_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_job_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// @param self KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_job_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_job_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_job_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// @param self KJob*
/// @param unit enum KJob__Unit
///
void k_job_set_progress_unit(void* self, int32_t unit);

/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, enum KJob__Unit unit)
///
void k_job_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param unit enum KJob__Unit
///
void k_job_qbase_set_progress_unit(void* self, int32_t unit);

/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// @param self KJob*
/// @param percentage uint64_t
///
void k_job_set_percent(void* self, uint64_t percentage);

/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, uint64_t percentage)
///
void k_job_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param percentage uint64_t
///
void k_job_qbase_set_percent(void* self, uint64_t percentage);

/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// @param self KJob*
///
void k_job_emit_result(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func()
///
void k_job_on_emit_result(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Base class method implementation
///
/// @param self KJob*
///
void k_job_qbase_emit_result(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// @param self KJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_job_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, uint64_t processedAmount, uint64_t totalAmount)
///
void k_job_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_job_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// @param self KJob*
/// @param speed uint64_t
///
void k_job_emit_speed(void* self, uint64_t speed);

/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func(KJob* self, uint64_t speed)
///
void k_job_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Base class method implementation
///
/// @param self KJob*
/// @param speed uint64_t
///
void k_job_qbase_emit_speed(void* self, uint64_t speed);

/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// @param self KJob*
///
void k_job_start_elapsed_timer(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Allows for overriding the related default method
///
/// @param self KJob*
/// @param callback void func()
///
void k_job_on_start_elapsed_timer(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Base class method implementation
///
/// @param self KJob*
///
void k_job_qbase_start_elapsed_timer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_job_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_job_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KJob*
/// @param verbosity enum KJob__KillVerbosity
///
bool k_job_kill1(void* self, int32_t verbosity);

/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KJob*
/// @param hide bool
///
void k_job_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KJob*
///
const char* k_job_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KJob*
/// @param name char*
///
void k_job_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KJob*
///
bool k_job_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KJob*
///
bool k_job_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KJob*
///
bool k_job_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KJob*
///
bool k_job_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KJob*
/// @param b bool
///
bool k_job_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KJob*
///
QThread* k_job_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KJob*
/// @param thread QThread*
///
bool k_job_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJob*
/// @param interval int
///
int32_t k_job_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJob*
/// @param time int64_t of nanoseconds
///
int32_t k_job_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KJob*
/// @param id int
///
void k_job_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KJob*
/// @param id enum Qt__TimerId
///
void k_job_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_job_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KJob*
/// @param parent QObject*
///
void k_job_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KJob*
/// @param filterObj QObject*
///
void k_job_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KJob*
/// @param obj QObject*
///
void k_job_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_job_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_job_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_job_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_job_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KJob*
///
void k_job_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KJob*
///
void k_job_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_job_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KJob*
/// @param name const char*
///
QVariant* k_job_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KJob*
///
const char** k_job_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KJob*
///
QBindingStorage* k_job_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KJob*
///
const QBindingStorage* k_job_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJob*
///
void k_job_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJob*
/// @param callback void func(KJob* self)
///
void k_job_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KJob*
///
QObject* k_job_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KJob*
/// @param classname const char*
///
bool k_job_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KJob*
///
void k_job_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_job_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_job_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_job_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_job_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJob*
/// @param param1 QObject*
///
void k_job_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJob*
/// @param callback void func(KJob* self, QObject* param1)
///
void k_job_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param event QEvent*
///
bool k_job_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param event QEvent*
///
bool k_job_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback bool func(KJob* self, QEvent* event)
///
void k_job_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_job_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_job_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback bool func(KJob* self, QObject* watched, QEvent* event)
///
void k_job_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param event QTimerEvent*
///
void k_job_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param event QTimerEvent*
///
void k_job_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback void func(KJob* self, QTimerEvent* event)
///
void k_job_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param event QChildEvent*
///
void k_job_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param event QChildEvent*
///
void k_job_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback void func(KJob* self, QChildEvent* event)
///
void k_job_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param event QEvent*
///
void k_job_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param event QEvent*
///
void k_job_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback void func(KJob* self, QEvent* event)
///
void k_job_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param signal QMetaMethod*
///
void k_job_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param signal QMetaMethod*
///
void k_job_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback void func(KJob* self, QMetaMethod* signal)
///
void k_job_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param signal QMetaMethod*
///
void k_job_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param signal QMetaMethod*
///
void k_job_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback void func(KJob* self, QMetaMethod* signal)
///
void k_job_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
///
QObject* k_job_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
///
QObject* k_job_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback QObject* func()
///
void k_job_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
///
int32_t k_job_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
///
int32_t k_job_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback int32_t func()
///
void k_job_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param signal const char*
///
int32_t k_job_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param signal const char*
///
int32_t k_job_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback int32_t func(KJob* self, const char* signal)
///
void k_job_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KJob*
/// @param signal QMetaMethod*
///
bool k_job_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KJob*
/// @param signal QMetaMethod*
///
bool k_job_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KJob*
/// @param callback bool func(KJob* self, QMetaMethod* signal)
///
void k_job_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job)
///
void k_job_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job)
///
void k_job_on_suspended(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job)
///
void k_job_on_resumed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job)
///
void k_job_on_result(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_job_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_job_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, KJob* job, uint64_t percent)
///
void k_job_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KJob*
/// @param callback void func(KJob* self, const char* objectName)
///
void k_job_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kjob.html#dtor.KJob)
///
/// Delete this object from C++ memory.
///
/// @param self KJob*
///
void k_job_delete(void* self);

/// [Upstream resources](https://api.kde.org/kjob.html#public-types)

typedef enum {
    KJOB_UNIT_BYTES = 0,
    KJOB_UNIT_FILES = 1,
    KJOB_UNIT_DIRECTORIES = 2,
    KJOB_UNIT_ITEMS = 3,
    KJOB_UNIT_UNITSCOUNT = 4
} KJob__Unit;

/// [Upstream resources](https://api.kde.org/kjob.html#public-types)

typedef enum {
    KJOB_CAPABILITY_NOCAPABILITIES = 0,
    KJOB_CAPABILITY_KILLABLE = 1,
    KJOB_CAPABILITY_SUSPENDABLE = 2
} KJob__Capability;

/// [Upstream resources](https://api.kde.org/kjob.html#public-types)

typedef enum {
    KJOB_KILLVERBOSITY_QUIETLY = 0,
    KJOB_KILLVERBOSITY_EMITRESULT = 1
} KJob__KillVerbosity;

/// [Upstream resources](https://api.kde.org/kjob.html#public-types)

typedef enum {
    KJOB__NOERROR = 0,
    KJOB__KILLEDJOBERROR = 1,
    KJOB__USERDEFINEDERROR = 100
} KJob__;

#endif
