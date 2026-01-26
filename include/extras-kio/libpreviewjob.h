#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBPREVIEWJOB_H
#define SRC_EXTRAS_KIO_QT6C_LIBPREVIEWJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-previewjob.html)

/// k_io__previewjob_new constructs a new KIO::PreviewJob object.
///
/// @param items KFileItemList*
/// @param size QSize*
///
KIO__PreviewJob* k_io__previewjob_new(void* items, void* size);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html)

/// k_io__previewjob_new2 constructs a new KIO::PreviewJob object.
///
/// @param items KFileItemList*
/// @param size QSize*
/// @param enabledPlugins const char**
///
KIO__PreviewJob* k_io__previewjob_new2(void* items, void* size, const char* enabledPlugins[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__PreviewJob*
///
const QMetaObject* k_io__previewjob_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KIO__PreviewJob*
/// @param callback const QMetaObject* func()
///
void k_io__previewjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KIO__PreviewJob*
///
const QMetaObject* k_io__previewjob_qbase_meta_object(void* self);

/// @param self KIO__PreviewJob*
/// @param param1 const char*
///
void* k_io__previewjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KIO__PreviewJob*
/// @param callback void* func(KIO__PreviewJob* self, const char* param1)
///
void k_io__previewjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KIO__PreviewJob*
/// @param param1 const char*
///
void* k_io__previewjob_qbase_metacast(void* self, const char* param1);

/// @param self KIO__PreviewJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__previewjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__PreviewJob*
/// @param callback int32_t func(KIO__PreviewJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_io__previewjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIO__PreviewJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__previewjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_io__previewjob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#setScaleType)
///
/// @param self KIO__PreviewJob*
/// @param type enum KIO__PreviewJob__ScaleType
///
void k_io__previewjob_set_scale_type(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#scaleType)
///
/// @param self KIO__PreviewJob*
///
/// @return enum KIO__PreviewJob__ScaleType
///
int32_t k_io__previewjob_scale_type(void* self);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#removeItem)
///
/// @param self KIO__PreviewJob*
/// @param url QUrl*
///
void k_io__previewjob_remove_item(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#setIgnoreMaximumSize)
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_set_ignore_maximum_size(void* self);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#setSequenceIndex)
///
/// @param self KIO__PreviewJob*
/// @param index int
///
void k_io__previewjob_set_sequence_index(void* self, int index);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#sequenceIndex)
///
/// @param self KIO__PreviewJob*
///
int32_t k_io__previewjob_sequence_index(void* self);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#sequenceIndexWraparoundPoint)
///
/// @param self KIO__PreviewJob*
///
float k_io__previewjob_sequence_index_wraparound_point(void* self);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#handlesSequences)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_handles_sequences(void* self);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#setDevicePixelRatio)
///
/// @param self KIO__PreviewJob*
/// @param dpr double
///
void k_io__previewjob_set_device_pixel_ratio(void* self, double dpr);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#availablePlugins)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_io__previewjob_available_plugins();

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#availableThumbnailerPlugins)
///
/// @return libqt_list of KPluginMetaData*
///
libqt_list k_io__previewjob_available_thumbnailer_plugins();

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#defaultPlugins)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_io__previewjob_default_plugins();

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#supportedMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_io__previewjob_supported_mime_types();

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#gotPreview)
///
/// @param self KIO__PreviewJob*
/// @param item KFileItem*
/// @param preview QPixmap*
///
void k_io__previewjob_got_preview(void* self, void* item, void* preview);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#gotPreview)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KFileItem* item, QPixmap* preview)
///
void k_io__previewjob_on_got_preview(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#failed)
///
/// @param self KIO__PreviewJob*
/// @param item KFileItem*
///
void k_io__previewjob_failed(void* self, void* item);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#failed)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KFileItem* item)
///
void k_io__previewjob_on_failed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#slotResult)
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
///
void k_io__previewjob_slot_result(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#slotResult)
///
/// Allows for overriding the related default method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_slot_result(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#slotResult)
///
/// Base class method implementation
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
///
void k_io__previewjob_qbase_slot_result(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#setDefaultDevicePixelRatio)
///
/// @param devicePixelRatio double
///
void k_io__previewjob_set_default_device_pixel_ratio(double devicePixelRatio);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__previewjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__previewjob_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#setIgnoreMaximumSize)
///
/// @param self KIO__PreviewJob*
/// @param ignoreSize bool
///
void k_io__previewjob_set_ignore_maximum_size1(void* self, bool ignoreSize);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__PreviewJob*
///
KIO__JobUiDelegateExtension* k_io__previewjob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__PreviewJob*
/// @param extension KIO__JobUiDelegateExtension*
///
void k_io__previewjob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__PreviewJob*
///
const char** k_io__previewjob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__PreviewJob*
/// @param parentJob KIO__Job*
///
void k_io__previewjob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__PreviewJob*
///
KIO__Job* k_io__previewjob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__PreviewJob*
/// @param metaData KIO__MetaData*
///
void k_io__previewjob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__PreviewJob*
/// @param key const char*
/// @param value const char*
///
void k_io__previewjob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__PreviewJob*
/// @param values libqt_map of const char* to const char*
///
void k_io__previewjob_add_meta_data2(void* self, libqt_map values);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__PreviewJob*
/// @param values libqt_map of const char* to const char*
///
void k_io__previewjob_merge_meta_data(void* self, libqt_map values);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__PreviewJob*
///
KIO__MetaData* k_io__previewjob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__PreviewJob*
///
KIO__MetaData* k_io__previewjob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__PreviewJob*
/// @param key const char*
///
const char* k_io__previewjob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__PreviewJob*
/// @param job KIO__Job*
///
void k_io__previewjob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KIO__Job* job)
///
void k_io__previewjob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__PreviewJob*
/// @param reqUrl QUrl*
///
const char** k_io__previewjob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__PreviewJob*
/// @param reqUrl QUrl*
/// @param method int
///
const char** k_io__previewjob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__PreviewJob*
/// @param delegate KJobUiDelegate*
///
void k_io__previewjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__PreviewJob*
///
KJobUiDelegate* k_io__previewjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__PreviewJob*
///
/// @return flag of enum KJob__Capability
///
int32_t k_io__previewjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__PreviewJob*
///
int32_t k_io__previewjob_error(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__PreviewJob*
///
const char* k_io__previewjob_error_text(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
///
uint64_t k_io__previewjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
///
uint64_t k_io__previewjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__PreviewJob*
///
uint64_t k_io__previewjob_percent(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__PreviewJob*
/// @param autodelete bool
///
void k_io__previewjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__PreviewJob*
///
long long k_io__previewjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__previewjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, const char* message)
///
void k_io__previewjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__previewjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, const char* message)
///
void k_io__previewjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_io__previewjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, uint64_t size)
///
void k_io__previewjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_io__previewjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, uint64_t size)
///
void k_io__previewjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param speed uint64_t
///
void k_io__previewjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, uint64_t speed)
///
void k_io__previewjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__PreviewJob*
/// @param verbosity enum KJob__KillVerbosity
///
bool k_io__previewjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__PreviewJob*
/// @param hide bool
///
void k_io__previewjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__PreviewJob*
///
const char* k_io__previewjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__PreviewJob*
/// @param name char*
///
void k_io__previewjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__PreviewJob*
/// @param b bool
///
bool k_io__previewjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__PreviewJob*
///
QThread* k_io__previewjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__PreviewJob*
/// @param thread QThread*
///
bool k_io__previewjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__PreviewJob*
/// @param interval int
///
int32_t k_io__previewjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__PreviewJob*
/// @param time int64_t of nanoseconds
///
int32_t k_io__previewjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__PreviewJob*
/// @param id int
///
void k_io__previewjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__PreviewJob*
/// @param id enum Qt__TimerId
///
void k_io__previewjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__PreviewJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_io__previewjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__PreviewJob*
/// @param parent QObject*
///
void k_io__previewjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__PreviewJob*
/// @param filterObj QObject*
///
void k_io__previewjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__PreviewJob*
/// @param obj QObject*
///
void k_io__previewjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__previewjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__PreviewJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__previewjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__previewjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__previewjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__PreviewJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__previewjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__PreviewJob*
/// @param name const char*
///
QVariant* k_io__previewjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__PreviewJob*
///
const char** k_io__previewjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__PreviewJob*
///
QBindingStorage* k_io__previewjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__PreviewJob*
///
const QBindingStorage* k_io__previewjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self)
///
void k_io__previewjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__PreviewJob*
///
QObject* k_io__previewjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__PreviewJob*
/// @param classname const char*
///
bool k_io__previewjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__PreviewJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_io__previewjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__PreviewJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__previewjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__PreviewJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_io__previewjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_io__previewjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__PreviewJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__previewjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__PreviewJob*
/// @param param1 QObject*
///
void k_io__previewjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, QObject* param1)
///
void k_io__previewjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#start)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_start(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#start)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_qbase_start(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#start)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func()
///
void k_io__previewjob_on_start(void* self, void (*callback)());

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_do_kill(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_qbase_do_kill(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func()
///
void k_io__previewjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_do_suspend(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_qbase_do_suspend(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func()
///
void k_io__previewjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_do_resume(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_qbase_do_resume(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func()
///
void k_io__previewjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
const char* k_io__previewjob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
const char* k_io__previewjob_qbase_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback const char* func()
///
void k_io__previewjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addSubjob)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
///
bool k_io__previewjob_add_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addSubjob)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
///
bool k_io__previewjob_qbase_add_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addSubjob)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_add_subjob(void* self, bool (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#removeSubjob)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
///
bool k_io__previewjob_remove_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#removeSubjob)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
///
bool k_io__previewjob_qbase_remove_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#removeSubjob)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_remove_subjob(void* self, bool (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__previewjob_slot_info_message(void* self, void* job, const char* message);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__previewjob_qbase_slot_info_message(void* self, void* job, const char* message);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, const char* message)
///
void k_io__previewjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QEvent*
///
bool k_io__previewjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QEvent*
///
bool k_io__previewjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func(KIO__PreviewJob* self, QEvent* event)
///
void k_io__previewjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__previewjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__previewjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func(KIO__PreviewJob* self, QObject* watched, QEvent* event)
///
void k_io__previewjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QTimerEvent*
///
void k_io__previewjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QTimerEvent*
///
void k_io__previewjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, QTimerEvent* event)
///
void k_io__previewjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QChildEvent*
///
void k_io__previewjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QChildEvent*
///
void k_io__previewjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, QChildEvent* event)
///
void k_io__previewjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QEvent*
///
void k_io__previewjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param event QEvent*
///
void k_io__previewjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, QEvent* event)
///
void k_io__previewjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal QMetaMethod*
///
void k_io__previewjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal QMetaMethod*
///
void k_io__previewjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, QMetaMethod* signal)
///
void k_io__previewjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal QMetaMethod*
///
void k_io__previewjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal QMetaMethod*
///
void k_io__previewjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, QMetaMethod* signal)
///
void k_io__previewjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_has_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_qbase_has_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func()
///
void k_io__previewjob_on_has_subjobs(void* self, bool (*callback)());

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
/// @return libqt_list of KJob*
///
libqt_list k_io__previewjob_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
/// @return libqt_list of KJob*
///
libqt_list k_io__previewjob_qbase_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback KJob** func()
///
void k_io__previewjob_on_subjobs(void* self, KJob** (*callback)());

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_clear_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_qbase_clear_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func()
///
void k_io__previewjob_on_clear_subjobs(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_io__previewjob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_io__previewjob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, flag of enum KJob__Capability capabilities)
///
void k_io__previewjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_is_finished(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
bool k_io__previewjob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func()
///
void k_io__previewjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param errorCode int
///
void k_io__previewjob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param errorCode int
///
void k_io__previewjob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, int errorCode)
///
void k_io__previewjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param errorText const char*
///
void k_io__previewjob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param errorText const char*
///
void k_io__previewjob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, const char* errorText)
///
void k_io__previewjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__previewjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__previewjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_io__previewjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__previewjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__previewjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_io__previewjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
///
void k_io__previewjob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param unit enum KJob__Unit
///
void k_io__previewjob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, enum KJob__Unit unit)
///
void k_io__previewjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param percentage uint64_t
///
void k_io__previewjob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param percentage uint64_t
///
void k_io__previewjob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, uint64_t percentage)
///
void k_io__previewjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_emit_result(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func()
///
void k_io__previewjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_io__previewjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_io__previewjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, uint64_t processedAmount, uint64_t totalAmount)
///
void k_io__previewjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param speed uint64_t
///
void k_io__previewjob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param speed uint64_t
///
void k_io__previewjob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, uint64_t speed)
///
void k_io__previewjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback void func()
///
void k_io__previewjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
QObject* k_io__previewjob_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
QObject* k_io__previewjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback QObject* func()
///
void k_io__previewjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
///
int32_t k_io__previewjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
///
int32_t k_io__previewjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback int32_t func()
///
void k_io__previewjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal const char*
///
int32_t k_io__previewjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal const char*
///
int32_t k_io__previewjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback int32_t func(KIO__PreviewJob* self, const char* signal)
///
void k_io__previewjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal QMetaMethod*
///
bool k_io__previewjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param signal QMetaMethod*
///
bool k_io__previewjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__PreviewJob*
/// @param callback bool func(KIO__PreviewJob* self, QMetaMethod* signal)
///
void k_io__previewjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job)
///
void k_io__previewjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_io__previewjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_io__previewjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, KJob* job, uint64_t percent)
///
void k_io__previewjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__PreviewJob*
/// @param callback void func(KIO__PreviewJob* self, const char* objectName)
///
void k_io__previewjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__PreviewJob*
///
void k_io__previewjob_delete(void* self);

/// [Upstream resources](https://api.kde.org/kio.html)

/// [Upstream resources](https://api.kde.org/kio.html#filePreview)
///
/// @param param1 KFileItemList*
/// @param param2 QSize*
/// @param param3 const char**
///
KIO__PreviewJob* k_io_file_preview(void* param1, void* param2, const char* param3[static 1]);

/// [Upstream resources](https://api.kde.org/kio-previewjob.html#public-types)

typedef enum {
    KIO_PREVIEWJOB_SCALETYPE_UNSCALED = 0,
    KIO_PREVIEWJOB_SCALETYPE_SCALED = 1,
    KIO_PREVIEWJOB_SCALETYPE_SCALEDANDCACHED = 2
} KIO__PreviewJob__ScaleType;

#endif
