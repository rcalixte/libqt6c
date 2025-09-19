#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBCOPYJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBCOPYJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-copyjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__CopyJob*
const QMetaObject* k_io__copyjob_meta_object(void* self);

/// @param self KIO__CopyJob*
/// @param param1 const char*
void* k_io__copyjob_metacast(void* self, const char* param1);

/// @param self KIO__CopyJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__copyjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__copyjob_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#operationMode)
///
/// @param self KIO__CopyJob*
///
/// @return enum KIO__CopyJob__CopyMode
int32_t k_io__copyjob_operation_mode(void* self);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#srcUrls)
///
/// @param self KIO__CopyJob*
libqt_list /* of QUrl* */ k_io__copyjob_src_urls(void* self);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#destUrl)
///
/// @param self KIO__CopyJob*
QUrl* k_io__copyjob_dest_url(void* self);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#setDefaultPermissions)
///
/// @param self KIO__CopyJob*
/// @param b bool
void k_io__copyjob_set_default_permissions(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#setAutoSkip)
///
/// @param self KIO__CopyJob*
/// @param autoSkip bool
void k_io__copyjob_set_auto_skip(void* self, bool autoSkip);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#setAutoRename)
///
/// @param self KIO__CopyJob*
/// @param autoRename bool
void k_io__copyjob_set_auto_rename(void* self, bool autoRename);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#setWriteIntoExistingDirectories)
///
/// @param self KIO__CopyJob*
/// @param overwriteAllDirs bool
void k_io__copyjob_set_write_into_existing_directories(void* self, bool overwriteAllDirs);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#doSuspend)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_do_suspend(void* self);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#doResume)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_do_resume(void* self);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedFiles)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param files uint64_t
void k_io__copyjob_processed_files(void* self, void* job, uint64_t files);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedFiles)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, uint64_t files)
void k_io__copyjob_on_processed_files(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedDirs)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param dirs uint64_t
void k_io__copyjob_processed_dirs(void* self, void* job, uint64_t dirs);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#processedDirs)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, uint64_t dirs)
void k_io__copyjob_on_processed_dirs(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#copying)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param src QUrl*
/// @param dest QUrl*
void k_io__copyjob_copying(void* self, void* job, void* src, void* dest);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#copying)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, QUrl* src, QUrl* dest)
void k_io__copyjob_on_copying(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#linking)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param target const char*
/// @param to QUrl*
void k_io__copyjob_linking(void* self, void* job, const char* target, void* to);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#linking)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, const char* target, QUrl* to)
void k_io__copyjob_on_linking(void* self, void (*callback)(void*, void*, const char*, void*));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#moving)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param from QUrl*
/// @param to QUrl*
void k_io__copyjob_moving(void* self, void* job, void* from, void* to);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#moving)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, QUrl* from, QUrl* to)
void k_io__copyjob_on_moving(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#creatingDir)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param dir QUrl*
void k_io__copyjob_creating_dir(void* self, void* job, void* dir);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#creatingDir)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, QUrl* dir)
void k_io__copyjob_on_creating_dir(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#renamed)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param from QUrl*
/// @param to QUrl*
void k_io__copyjob_renamed(void* self, void* job, void* from, void* to);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#renamed)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, QUrl* from, QUrl* to)
void k_io__copyjob_on_renamed(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingDone)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param from QUrl*
/// @param to QUrl*
/// @param mtime QDateTime*
/// @param directory bool
/// @param renamed bool
void k_io__copyjob_copying_done(void* self, void* job, void* from, void* to, void* mtime, bool directory, bool renamed);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingDone)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, QUrl* from, QUrl* to, QDateTime* mtime, bool directory, bool renamed)
void k_io__copyjob_on_copying_done(void* self, void (*callback)(void*, void*, void*, void*, void*, bool, bool));

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingLinkDone)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
/// @param from QUrl*
/// @param target const char*
/// @param to QUrl*
void k_io__copyjob_copying_link_done(void* self, void* job, void* from, const char* target, void* to);

/// [Qt documentation](https://api.kde.org/kio-copyjob.html#copyingLinkDone)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job, QUrl* from, const char* target, QUrl* to)
void k_io__copyjob_on_copying_link_done(void* self, void (*callback)(void*, void*, void*, const char*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__copyjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__copyjob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// @param self KIO__CopyJob*
void k_io__copyjob_start(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__CopyJob*
KIO__JobUiDelegateExtension* k_io__copyjob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__CopyJob*
/// @param extension KIO__JobUiDelegateExtension*
void k_io__copyjob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
const char* k_io__copyjob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
const char** k_io__copyjob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__CopyJob*
/// @param parentJob KIO__Job*
void k_io__copyjob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__CopyJob*
KIO__Job* k_io__copyjob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__CopyJob*
/// @param metaData KIO__MetaData*
void k_io__copyjob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__CopyJob*
/// @param key const char*
/// @param value const char*
void k_io__copyjob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__CopyJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__copyjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__CopyJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__copyjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__CopyJob*
KIO__MetaData* k_io__copyjob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__CopyJob*
KIO__MetaData* k_io__copyjob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
/// @param key const char*
const char* k_io__copyjob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__CopyJob*
/// @param job KIO__Job*
void k_io__copyjob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KIO__Job* job)
void k_io__copyjob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
/// @param reqUrl QUrl*
const char** k_io__copyjob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
/// @param reqUrl QUrl*
/// @param method int
const char** k_io__copyjob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__CopyJob*
/// @param delegate KJobUiDelegate*
void k_io__copyjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__CopyJob*
KJobUiDelegate* k_io__copyjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__CopyJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__copyjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__CopyJob*
int32_t k_io__copyjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
const char* k_io__copyjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__CopyJob*
/// @param unit enum KJob__Unit
uint64_t k_io__copyjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__CopyJob*
/// @param unit enum KJob__Unit
uint64_t k_io__copyjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__CopyJob*
uint64_t k_io__copyjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__CopyJob*
/// @param autodelete bool
void k_io__copyjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__CopyJob*
void k_io__copyjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__CopyJob*
long long k_io__copyjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param title const char*
void k_io__copyjob_description(void* self, void* job, const char* title);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, const char* title)
void k_io__copyjob_on_description(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param message const char*
void k_io__copyjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, const char* message)
void k_io__copyjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param message const char*
void k_io__copyjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, const char* message)
void k_io__copyjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__copyjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, uint64_t size)
void k_io__copyjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__copyjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, uint64_t size)
void k_io__copyjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__copyjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, uint64_t speed)
void k_io__copyjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__CopyJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__copyjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__CopyJob*
/// @param hide bool
void k_io__copyjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
void k_io__copyjob_description3(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_io__copyjob_on_description3(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__CopyJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_io__copyjob_description4(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_io__copyjob_on_description4(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__CopyJob*
/// @param event QEvent*
bool k_io__copyjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__CopyJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__copyjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
const char* k_io__copyjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__CopyJob*
/// @param name char*
void k_io__copyjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__CopyJob*
bool k_io__copyjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__CopyJob*
/// @param b bool
bool k_io__copyjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__CopyJob*
QThread* k_io__copyjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__CopyJob*
/// @param thread QThread*
bool k_io__copyjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__CopyJob*
/// @param interval int
int32_t k_io__copyjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__CopyJob*
/// @param id int
void k_io__copyjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__CopyJob*
/// @param id enum Qt__TimerId
void k_io__copyjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__CopyJob*
libqt_list /* of QObject* */ k_io__copyjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__CopyJob*
/// @param parent QObject*
void k_io__copyjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__CopyJob*
/// @param filterObj QObject*
void k_io__copyjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__CopyJob*
/// @param obj QObject*
void k_io__copyjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__copyjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__CopyJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__copyjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__copyjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__copyjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__CopyJob*
void k_io__copyjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__CopyJob*
void k_io__copyjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__CopyJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__copyjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__CopyJob*
/// @param name const char*
QVariant* k_io__copyjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CopyJob*
const char** k_io__copyjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__CopyJob*
QBindingStorage* k_io__copyjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__CopyJob*
const QBindingStorage* k_io__copyjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CopyJob*
void k_io__copyjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self)
void k_io__copyjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__CopyJob*
QObject* k_io__copyjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__CopyJob*
/// @param classname const char*
bool k_io__copyjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__CopyJob*
void k_io__copyjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__CopyJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__copyjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__CopyJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__copyjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__copyjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__CopyJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__copyjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CopyJob*
/// @param param1 QObject*
void k_io__copyjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, QObject* param1)
void k_io__copyjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job)
void k_io__copyjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job)
void k_io__copyjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job)
void k_io__copyjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job)
void k_io__copyjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__copyjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__copyjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, KJob* job, uint64_t percent)
void k_io__copyjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CopyJob*
/// @param callback void func(KIO__CopyJob* self, const char* objectName)
void k_io__copyjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__CopyJob*
void k_io__copyjob_delete(void* self);

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#copy)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_copy(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#copyAs)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_copy_as(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#copy)
///
/// @param param1 libqt_list /* of QUrl* */
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_copy2(libqt_list param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#move)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_move(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#moveAs)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_move_as(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#move)
///
/// @param param1 libqt_list /* of QUrl* */
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_move2(libqt_list param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#link)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_link(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#link)
///
/// @param param1 libqt_list /* of QUrl* */
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_link2(libqt_list param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#linkAs)
///
/// @param param1 QUrl*
/// @param param2 QUrl*
/// @param param3 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_link_as(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#trash)
///
/// @param param1 QUrl*
/// @param param2 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_trash(void* param1, int32_t param2);

/// [Qt documentation](https://api.kde.org/kio.html#trash)
///
/// @param param1 libqt_list /* of QUrl* */
/// @param param2 flag of enum KIO__JobFlag
KIO__CopyJob* k_io_trash2(libqt_list param1, int32_t param2);

/// https://api.kde.org/kio-copyjob.html#types

typedef enum {
    KIO_COPYJOB_COPYMODE_COPY = 0,
    KIO_COPYJOB_COPYMODE_MOVE = 1,
    KIO_COPYJOB_COPYMODE_LINK = 2
} KIO__CopyJob__CopyMode;

#endif
