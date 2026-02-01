#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBBATCHRENAMEJOB_H
#define SRC_EXTRAS_KIO_QT6C_LIBBATCHRENAMEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-batchrenamejob.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__BatchRenameJob*
///
const QMetaObject* k_io__batchrenamejob_meta_object(void* self);

/// @param self KIO__BatchRenameJob*
/// @param param1 const char*
///
void* k_io__batchrenamejob_metacast(void* self, const char* param1);

/// @param self KIO__BatchRenameJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__batchrenamejob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_io__batchrenamejob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-batchrenamejob.html#fileRenamed)
///
/// @param self KIO__BatchRenameJob*
/// @param oldUrl QUrl*
/// @param newUrl QUrl*
///
void k_io__batchrenamejob_file_renamed(void* self, void* oldUrl, void* newUrl);

/// [Upstream resources](https://api.kde.org/kio-batchrenamejob.html#fileRenamed)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, QUrl* oldUrl, QUrl* newUrl)
///
void k_io__batchrenamejob_on_file_renamed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__batchrenamejob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__batchrenamejob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#start)
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_start(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__BatchRenameJob*
///
KIO__JobUiDelegateExtension* k_io__batchrenamejob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__BatchRenameJob*
/// @param extension KIO__JobUiDelegateExtension*
///
void k_io__batchrenamejob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__BatchRenameJob*
///
const char* k_io__batchrenamejob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__BatchRenameJob*
///
const char** k_io__batchrenamejob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__BatchRenameJob*
/// @param parentJob KIO__Job*
///
void k_io__batchrenamejob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__BatchRenameJob*
///
KIO__Job* k_io__batchrenamejob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__BatchRenameJob*
/// @param metaData KIO__MetaData*
///
void k_io__batchrenamejob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__BatchRenameJob*
/// @param key const char*
/// @param value const char*
///
void k_io__batchrenamejob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__BatchRenameJob*
/// @param values libqt_map of const char* to const char*
///
void k_io__batchrenamejob_add_meta_data2(void* self, libqt_map values);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__BatchRenameJob*
/// @param values libqt_map of const char* to const char*
///
void k_io__batchrenamejob_merge_meta_data(void* self, libqt_map values);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__BatchRenameJob*
///
KIO__MetaData* k_io__batchrenamejob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__BatchRenameJob*
///
KIO__MetaData* k_io__batchrenamejob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__BatchRenameJob*
/// @param key const char*
///
const char* k_io__batchrenamejob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__BatchRenameJob*
/// @param job KIO__Job*
///
void k_io__batchrenamejob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KIO__Job* job)
///
void k_io__batchrenamejob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__BatchRenameJob*
/// @param reqUrl QUrl*
///
const char** k_io__batchrenamejob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__BatchRenameJob*
/// @param reqUrl QUrl*
/// @param method int
///
const char** k_io__batchrenamejob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__BatchRenameJob*
/// @param delegate KJobUiDelegate*
///
void k_io__batchrenamejob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__BatchRenameJob*
///
KJobUiDelegate* k_io__batchrenamejob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__BatchRenameJob*
///
/// @return flag of enum KJob__Capability
///
int32_t k_io__batchrenamejob_capabilities(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__BatchRenameJob*
///
int32_t k_io__batchrenamejob_error(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__BatchRenameJob*
///
const char* k_io__batchrenamejob_error_text(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__BatchRenameJob*
/// @param unit enum KJob__Unit
///
uint64_t k_io__batchrenamejob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__BatchRenameJob*
/// @param unit enum KJob__Unit
///
uint64_t k_io__batchrenamejob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__BatchRenameJob*
///
uint64_t k_io__batchrenamejob_percent(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__BatchRenameJob*
/// @param autodelete bool
///
void k_io__batchrenamejob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__BatchRenameJob*
///
long long k_io__batchrenamejob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__BatchRenameJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__batchrenamejob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, const char* message)
///
void k_io__batchrenamejob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__BatchRenameJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__batchrenamejob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, const char* message)
///
void k_io__batchrenamejob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__BatchRenameJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_io__batchrenamejob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, uint64_t size)
///
void k_io__batchrenamejob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__BatchRenameJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_io__batchrenamejob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, uint64_t size)
///
void k_io__batchrenamejob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__BatchRenameJob*
/// @param job KJob*
/// @param speed uint64_t
///
void k_io__batchrenamejob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, uint64_t speed)
///
void k_io__batchrenamejob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__BatchRenameJob*
/// @param verbosity enum KJob__KillVerbosity
///
bool k_io__batchrenamejob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__BatchRenameJob*
/// @param hide bool
///
void k_io__batchrenamejob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__BatchRenameJob*
/// @param event QEvent*
///
bool k_io__batchrenamejob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__BatchRenameJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__batchrenamejob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__BatchRenameJob*
///
const char* k_io__batchrenamejob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__BatchRenameJob*
/// @param name char*
///
void k_io__batchrenamejob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__BatchRenameJob*
/// @param b bool
///
bool k_io__batchrenamejob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__BatchRenameJob*
///
QThread* k_io__batchrenamejob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__BatchRenameJob*
/// @param thread QThread*
///
bool k_io__batchrenamejob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__BatchRenameJob*
/// @param interval int
///
int32_t k_io__batchrenamejob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__BatchRenameJob*
/// @param time int64_t of nanoseconds
///
int32_t k_io__batchrenamejob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__BatchRenameJob*
/// @param id int
///
void k_io__batchrenamejob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__BatchRenameJob*
/// @param id enum Qt__TimerId
///
void k_io__batchrenamejob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__BatchRenameJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_io__batchrenamejob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__BatchRenameJob*
/// @param parent QObject*
///
void k_io__batchrenamejob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__BatchRenameJob*
/// @param filterObj QObject*
///
void k_io__batchrenamejob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__BatchRenameJob*
/// @param obj QObject*
///
void k_io__batchrenamejob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_io__batchrenamejob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__batchrenamejob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__BatchRenameJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__batchrenamejob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__batchrenamejob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__batchrenamejob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__BatchRenameJob*
///
bool k_io__batchrenamejob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__BatchRenameJob*
/// @param receiver QObject*
///
bool k_io__batchrenamejob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__batchrenamejob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__BatchRenameJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__batchrenamejob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__BatchRenameJob*
/// @param name const char*
///
QVariant* k_io__batchrenamejob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__BatchRenameJob*
///
const char** k_io__batchrenamejob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__BatchRenameJob*
///
QBindingStorage* k_io__batchrenamejob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__BatchRenameJob*
///
const QBindingStorage* k_io__batchrenamejob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self)
///
void k_io__batchrenamejob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__BatchRenameJob*
///
QObject* k_io__batchrenamejob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__BatchRenameJob*
/// @param classname const char*
///
bool k_io__batchrenamejob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__BatchRenameJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__batchrenamejob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__BatchRenameJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_io__batchrenamejob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_io__batchrenamejob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_io__batchrenamejob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__BatchRenameJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__batchrenamejob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__BatchRenameJob*
/// @param signal const char*
///
bool k_io__batchrenamejob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__BatchRenameJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_io__batchrenamejob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__BatchRenameJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__batchrenamejob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__BatchRenameJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__batchrenamejob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__BatchRenameJob*
/// @param param1 QObject*
///
void k_io__batchrenamejob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, QObject* param1)
///
void k_io__batchrenamejob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job)
///
void k_io__batchrenamejob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job)
///
void k_io__batchrenamejob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job)
///
void k_io__batchrenamejob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job)
///
void k_io__batchrenamejob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_io__batchrenamejob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_io__batchrenamejob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, KJob* job, uint64_t percent)
///
void k_io__batchrenamejob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__BatchRenameJob*
/// @param callback void func(KIO__BatchRenameJob* self, const char* objectName)
///
void k_io__batchrenamejob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__BatchRenameJob*
///
void k_io__batchrenamejob_delete(void* self);

/// [Upstream resources](https://api.kde.org/kio.html)

/// [Upstream resources](https://api.kde.org/kio.html#batchRename)
///
/// @param param1 libqt_list of QUrl*
/// @param param2 const char*
/// @param param3 int
/// @param param4 QChar*
/// @param param5 flag of enum KIO__JobFlag
///
KIO__BatchRenameJob* k_io_batch_rename(libqt_list /* of QUrl* */ param1, const char* param2, int param3, void* param4, int32_t param5);
#endif
