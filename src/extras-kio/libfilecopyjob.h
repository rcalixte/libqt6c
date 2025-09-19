#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBFILECOPYJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBFILECOPYJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-filecopyjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__FileCopyJob*
const QMetaObject* k_io__filecopyjob_meta_object(void* self);

/// @param self KIO__FileCopyJob*
/// @param param1 const char*
void* k_io__filecopyjob_metacast(void* self, const char* param1);

/// @param self KIO__FileCopyJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__filecopyjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__filecopyjob_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#setSourceSize)
///
/// @param self KIO__FileCopyJob*
/// @param size uint64_t
void k_io__filecopyjob_set_source_size(void* self, uint64_t size);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#setModificationTime)
///
/// @param self KIO__FileCopyJob*
/// @param mtime QDateTime*
void k_io__filecopyjob_set_modification_time(void* self, void* mtime);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#srcUrl)
///
/// @param self KIO__FileCopyJob*
QUrl* k_io__filecopyjob_src_url(void* self);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#destUrl)
///
/// @param self KIO__FileCopyJob*
QUrl* k_io__filecopyjob_dest_url(void* self);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#doSuspend)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_do_suspend(void* self);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#doResume)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_do_resume(void* self);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#doKill)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_do_kill(void* self);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#mimeTypeFound)
///
/// @param self KIO__FileCopyJob*
/// @param job KIO__Job*
/// @param mimeType const char*
void k_io__filecopyjob_mime_type_found(void* self, void* job, const char* mimeType);

/// [Qt documentation](https://api.kde.org/kio-filecopyjob.html#mimeTypeFound)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KIO__Job* job, const char* mimeType)
void k_io__filecopyjob_on_mime_type_found(void* self, void (*callback)(void*, void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__filecopyjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__filecopyjob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_start(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__FileCopyJob*
KIO__JobUiDelegateExtension* k_io__filecopyjob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__FileCopyJob*
/// @param extension KIO__JobUiDelegateExtension*
void k_io__filecopyjob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
const char* k_io__filecopyjob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
const char** k_io__filecopyjob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__FileCopyJob*
/// @param parentJob KIO__Job*
void k_io__filecopyjob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__FileCopyJob*
KIO__Job* k_io__filecopyjob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__FileCopyJob*
/// @param metaData KIO__MetaData*
void k_io__filecopyjob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__FileCopyJob*
/// @param key const char*
/// @param value const char*
void k_io__filecopyjob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__FileCopyJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__filecopyjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__FileCopyJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__filecopyjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__FileCopyJob*
KIO__MetaData* k_io__filecopyjob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__FileCopyJob*
KIO__MetaData* k_io__filecopyjob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
/// @param key const char*
const char* k_io__filecopyjob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__FileCopyJob*
/// @param job KIO__Job*
void k_io__filecopyjob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KIO__Job* job)
void k_io__filecopyjob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
/// @param reqUrl QUrl*
const char** k_io__filecopyjob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
/// @param reqUrl QUrl*
/// @param method int
const char** k_io__filecopyjob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__FileCopyJob*
/// @param delegate KJobUiDelegate*
void k_io__filecopyjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__FileCopyJob*
KJobUiDelegate* k_io__filecopyjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__FileCopyJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__filecopyjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__FileCopyJob*
int32_t k_io__filecopyjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
const char* k_io__filecopyjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__FileCopyJob*
/// @param unit enum KJob__Unit
uint64_t k_io__filecopyjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__FileCopyJob*
/// @param unit enum KJob__Unit
uint64_t k_io__filecopyjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__FileCopyJob*
uint64_t k_io__filecopyjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__FileCopyJob*
/// @param autodelete bool
void k_io__filecopyjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__FileCopyJob*
long long k_io__filecopyjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param title const char*
void k_io__filecopyjob_description(void* self, void* job, const char* title);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, const char* title)
void k_io__filecopyjob_on_description(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param message const char*
void k_io__filecopyjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, const char* message)
void k_io__filecopyjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param message const char*
void k_io__filecopyjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, const char* message)
void k_io__filecopyjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__filecopyjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, uint64_t size)
void k_io__filecopyjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__filecopyjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, uint64_t size)
void k_io__filecopyjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__filecopyjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, uint64_t speed)
void k_io__filecopyjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__FileCopyJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__filecopyjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__FileCopyJob*
/// @param hide bool
void k_io__filecopyjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
void k_io__filecopyjob_description3(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_io__filecopyjob_on_description3(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__FileCopyJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_io__filecopyjob_description4(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_io__filecopyjob_on_description4(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__FileCopyJob*
/// @param event QEvent*
bool k_io__filecopyjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__FileCopyJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__filecopyjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
const char* k_io__filecopyjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__FileCopyJob*
/// @param name char*
void k_io__filecopyjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__FileCopyJob*
bool k_io__filecopyjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__FileCopyJob*
/// @param b bool
bool k_io__filecopyjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__FileCopyJob*
QThread* k_io__filecopyjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__FileCopyJob*
/// @param thread QThread*
bool k_io__filecopyjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FileCopyJob*
/// @param interval int
int32_t k_io__filecopyjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__FileCopyJob*
/// @param id int
void k_io__filecopyjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__FileCopyJob*
/// @param id enum Qt__TimerId
void k_io__filecopyjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__FileCopyJob*
libqt_list /* of QObject* */ k_io__filecopyjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__FileCopyJob*
/// @param parent QObject*
void k_io__filecopyjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__FileCopyJob*
/// @param filterObj QObject*
void k_io__filecopyjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__FileCopyJob*
/// @param obj QObject*
void k_io__filecopyjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__filecopyjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__FileCopyJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__filecopyjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__filecopyjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__filecopyjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__FileCopyJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__filecopyjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__FileCopyJob*
/// @param name const char*
QVariant* k_io__filecopyjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileCopyJob*
const char** k_io__filecopyjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__FileCopyJob*
QBindingStorage* k_io__filecopyjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__FileCopyJob*
const QBindingStorage* k_io__filecopyjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self)
void k_io__filecopyjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__FileCopyJob*
QObject* k_io__filecopyjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__FileCopyJob*
/// @param classname const char*
bool k_io__filecopyjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__FileCopyJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__filecopyjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FileCopyJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__filecopyjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__filecopyjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__FileCopyJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__filecopyjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileCopyJob*
/// @param param1 QObject*
void k_io__filecopyjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, QObject* param1)
void k_io__filecopyjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job)
void k_io__filecopyjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job)
void k_io__filecopyjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job)
void k_io__filecopyjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job)
void k_io__filecopyjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__filecopyjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__filecopyjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, KJob* job, uint64_t percent)
void k_io__filecopyjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileCopyJob*
/// @param callback void func(KIO__FileCopyJob* self, const char* objectName)
void k_io__filecopyjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__FileCopyJob*
void k_io__filecopyjob_delete(void* self);

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#file_copy)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 int
/// @param param4 flag of enum KIO__JobFlag
KIO__FileCopyJob* k_io_file_copy(void* param1, void* param2, int param3, int32_t param4);

/// [Qt documentation](https://api.kde.org/kio.html#file_move)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 int
/// @param param4 flag of enum KIO__JobFlag
KIO__FileCopyJob* k_io_file_move(void* param1, void* param2, int param3, int32_t param4);
#endif
