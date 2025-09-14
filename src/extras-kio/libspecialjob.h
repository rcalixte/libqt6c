#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBSPECIALJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBSPECIALJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-specialjob.html

/// k_io__specialjob_new constructs a new KIO::SpecialJob object.
///
/// @param url QUrl*
KIO__SpecialJob* k_io__specialjob_new(void* url);

/// k_io__specialjob_new2 constructs a new KIO::SpecialJob object.
///
/// @param url QUrl*
/// @param data const char*
KIO__SpecialJob* k_io__specialjob_new2(void* url, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__SpecialJob*
const QMetaObject* k_io__specialjob_meta_object(void* self);

/// @param self KIO__SpecialJob*
/// @param param1 const char*
void* k_io__specialjob_metacast(void* self, const char* param1);

/// @param self KIO__SpecialJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__specialjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__SpecialJob*
/// @param callback int32_t func(KIO__SpecialJob* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_io__specialjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIO__SpecialJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__specialjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__specialjob_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-specialjob.html#setArguments)
///
/// @param self KIO__SpecialJob*
/// @param data const char*
void k_io__specialjob_set_arguments(void* self, const char* data);

/// [Qt documentation](https://api.kde.org/kio-specialjob.html#arguments)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
char* k_io__specialjob_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__specialjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__specialjob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#setModificationTime)
///
/// @param self KIO__SpecialJob*
/// @param mtime QDateTime*
void k_io__specialjob_set_modification_time(void* self, void* mtime);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#isErrorPage)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_error_page(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#setAsyncDataEnabled)
///
/// @param self KIO__SpecialJob*
/// @param enabled bool
void k_io__specialjob_set_async_data_enabled(void* self, bool enabled);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#sendAsyncData)
///
/// @param self KIO__SpecialJob*
/// @param data const char*
void k_io__specialjob_send_async_data(void* self, const char* data);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#mimetype)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
const char* k_io__specialjob_mimetype(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#redirectUrl)
///
/// @param self KIO__SpecialJob*
QUrl* k_io__specialjob_redirect_url(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#setTotalSize)
///
/// @param self KIO__SpecialJob*
/// @param bytes uint64_t
void k_io__specialjob_set_total_size(void* self, uint64_t bytes);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#data)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
/// @param data const char*
void k_io__specialjob_data(void* self, void* job, const char* data);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#data)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job, const char* data)
void k_io__specialjob_on_data(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#dataReq)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
/// @param data char*
void k_io__specialjob_data_req(void* self, void* job, char* data);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#dataReq)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job, char* data)
void k_io__specialjob_on_data_req(void* self, void (*callback)(void*, void*, char*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#redirection)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
/// @param url QUrl*
void k_io__specialjob_redirection(void* self, void* job, void* url);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#redirection)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job, QUrl* url)
void k_io__specialjob_on_redirection(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#permanentRedirection)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
/// @param fromUrl QUrl*
/// @param toUrl QUrl*
void k_io__specialjob_permanent_redirection(void* self, void* job, void* fromUrl, void* toUrl);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#permanentRedirection)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job, QUrl* fromUrl, QUrl* toUrl)
void k_io__specialjob_on_permanent_redirection(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#mimeTypeFound)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
/// @param mimeType const char*
void k_io__specialjob_mime_type_found(void* self, void* job, const char* mimeType);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#mimeTypeFound)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job, const char* mimeType)
void k_io__specialjob_on_mime_type_found(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#canResume)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
/// @param offset uint64_t
void k_io__specialjob_can_resume(void* self, void* job, uint64_t offset);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#canResume)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job, uint64_t offset)
void k_io__specialjob_on_can_resume(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#url)
///
/// @param self KIO__SpecialJob*
const QUrl* k_io__specialjob_url(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#removeOnHold)
///
void k_io__specialjob_remove_on_hold();

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_redirection_handling_enabled(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
///
/// @param self KIO__SpecialJob*
/// @param handle bool
void k_io__specialjob_set_redirection_handling_enabled(void* self, bool handle);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotError)
///
/// @param self KIO__SpecialJob*
/// @param param1 int
/// @param param2 const char*
void k_io__specialjob_slot_error(void* self, int param1, const char* param2);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__SpecialJob*
KIO__JobUiDelegateExtension* k_io__specialjob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__SpecialJob*
/// @param extension KIO__JobUiDelegateExtension*
void k_io__specialjob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
const char** k_io__specialjob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__SpecialJob*
/// @param parentJob KIO__Job*
void k_io__specialjob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__SpecialJob*
KIO__Job* k_io__specialjob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__SpecialJob*
/// @param metaData KIO__MetaData*
void k_io__specialjob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__SpecialJob*
/// @param key const char*
/// @param value const char*
void k_io__specialjob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__SpecialJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__specialjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__SpecialJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__specialjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__SpecialJob*
KIO__MetaData* k_io__specialjob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__SpecialJob*
KIO__MetaData* k_io__specialjob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
/// @param key const char*
const char* k_io__specialjob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__SpecialJob*
/// @param job KIO__Job*
void k_io__specialjob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__Job* job)
void k_io__specialjob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
/// @param reqUrl QUrl*
const char** k_io__specialjob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
/// @param reqUrl QUrl*
/// @param method int
const char** k_io__specialjob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__SpecialJob*
/// @param delegate KJobUiDelegate*
void k_io__specialjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__SpecialJob*
KJobUiDelegate* k_io__specialjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__SpecialJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__specialjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__SpecialJob*
int32_t k_io__specialjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
const char* k_io__specialjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
uint64_t k_io__specialjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
uint64_t k_io__specialjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__SpecialJob*
uint64_t k_io__specialjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__SpecialJob*
/// @param autodelete bool
void k_io__specialjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__SpecialJob*
long long k_io__specialjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param title const char*
void k_io__specialjob_description(void* self, void* job, const char* title);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, const char* title)
void k_io__specialjob_on_description(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param message const char*
void k_io__specialjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, const char* message)
void k_io__specialjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param message const char*
void k_io__specialjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, const char* message)
void k_io__specialjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__specialjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, uint64_t size)
void k_io__specialjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__specialjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, uint64_t size)
void k_io__specialjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__specialjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, uint64_t speed)
void k_io__specialjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__SpecialJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__specialjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__SpecialJob*
/// @param hide bool
void k_io__specialjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
void k_io__specialjob_description3(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_io__specialjob_on_description3(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_io__specialjob_description4(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_io__specialjob_on_description4(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
const char* k_io__specialjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__SpecialJob*
/// @param name char*
void k_io__specialjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__SpecialJob*
/// @param b bool
bool k_io__specialjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__SpecialJob*
QThread* k_io__specialjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__SpecialJob*
/// @param thread QThread*
bool k_io__specialjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__SpecialJob*
/// @param interval int
int32_t k_io__specialjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__SpecialJob*
/// @param id int
void k_io__specialjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__SpecialJob*
/// @param id enum Qt__TimerId
void k_io__specialjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__SpecialJob*
libqt_list /* of QObject* */ k_io__specialjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__SpecialJob*
/// @param parent QObject*
void k_io__specialjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__SpecialJob*
/// @param filterObj QObject*
void k_io__specialjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__SpecialJob*
/// @param obj QObject*
void k_io__specialjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__specialjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__SpecialJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__specialjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__specialjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__specialjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__SpecialJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__specialjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__SpecialJob*
/// @param name const char*
QVariant* k_io__specialjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__SpecialJob*
const char** k_io__specialjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__SpecialJob*
QBindingStorage* k_io__specialjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__SpecialJob*
const QBindingStorage* k_io__specialjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self)
void k_io__specialjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__SpecialJob*
QObject* k_io__specialjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__SpecialJob*
/// @param classname const char*
bool k_io__specialjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__SpecialJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__specialjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__SpecialJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__specialjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__specialjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__SpecialJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__specialjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SpecialJob*
/// @param param1 QObject*
void k_io__specialjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QObject* param1)
void k_io__specialjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_do_resume(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_qbase_do_resume(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func()
void k_io__specialjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotRedirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param url QUrl*
void k_io__specialjob_slot_redirection(void* self, void* url);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotRedirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param url QUrl*
void k_io__specialjob_qbase_slot_redirection(void* self, void* url);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotRedirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QUrl* url)
void k_io__specialjob_on_slot_redirection(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_slot_finished(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_slot_finished(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_slot_finished(void* self, void (*callback)());

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param data const char*
void k_io__specialjob_slot_data(void* self, const char* data);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param data const char*
void k_io__specialjob_qbase_slot_data(void* self, const char* data);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, const char* data)
void k_io__specialjob_on_slot_data(void* self, void (*callback)(void*, const char*));

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotDataReq)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_slot_data_req(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotDataReq)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_slot_data_req(void* self);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotDataReq)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_slot_data_req(void* self, void (*callback)());

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotMimetype)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param mimetype const char*
void k_io__specialjob_slot_mimetype(void* self, const char* mimetype);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotMimetype)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param mimetype const char*
void k_io__specialjob_qbase_slot_mimetype(void* self, const char* mimetype);

/// Inherited from KIO::TransferJob
///
/// [Qt documentation](https://api.kde.org/kio-transferjob.html#slotMimetype)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, const char* mimetype)
void k_io__specialjob_on_slot_mimetype(void* self, void (*callback)(void*, const char*));

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_do_suspend(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_qbase_do_suspend(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func()
void k_io__specialjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_do_kill(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_qbase_do_kill(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func()
void k_io__specialjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_put_on_hold(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_put_on_hold(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_put_on_hold(void* self, void (*callback)());

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotWarning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param param1 const char*
void k_io__specialjob_slot_warning(void* self, const char* param1);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotWarning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param param1 const char*
void k_io__specialjob_qbase_slot_warning(void* self, const char* param1);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotWarning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, const char* param1)
void k_io__specialjob_on_slot_warning(void* self, void (*callback)(void*, const char*));

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotMetaData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param _metaData KIO__MetaData*
void k_io__specialjob_slot_meta_data(void* self, void* _metaData);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotMetaData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param _metaData KIO__MetaData*
void k_io__specialjob_qbase_slot_meta_data(void* self, void* _metaData);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotMetaData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KIO__MetaData* _metaData)
void k_io__specialjob_on_slot_meta_data(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_start(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_start(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_start(void* self, void (*callback)());

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
const char* k_io__specialjob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
const char* k_io__specialjob_qbase_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback const char* func()
void k_io__specialjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addSubjob)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
bool k_io__specialjob_add_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addSubjob)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
bool k_io__specialjob_qbase_add_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addSubjob)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_add_subjob(void* self, bool (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#removeSubjob)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
bool k_io__specialjob_remove_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#removeSubjob)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
bool k_io__specialjob_qbase_remove_subjob(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#removeSubjob)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_remove_subjob(void* self, bool (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
void k_io__specialjob_slot_result(void* self, void* job);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
void k_io__specialjob_qbase_slot_result(void* self, void* job);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_slot_result(void* self, void (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param message const char*
void k_io__specialjob_slot_info_message(void* self, void* job, const char* message);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param job KJob*
/// @param message const char*
void k_io__specialjob_qbase_slot_info_message(void* self, void* job, const char* message);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, const char* message)
void k_io__specialjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QEvent*
bool k_io__specialjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QEvent*
bool k_io__specialjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func(KIO__SpecialJob* self, QEvent* event)
void k_io__specialjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__specialjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__specialjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func(KIO__SpecialJob* self, QObject* watched, QEvent* event)
void k_io__specialjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QTimerEvent*
void k_io__specialjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QTimerEvent*
void k_io__specialjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QTimerEvent* event)
void k_io__specialjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QChildEvent*
void k_io__specialjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QChildEvent*
void k_io__specialjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QChildEvent* event)
void k_io__specialjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QEvent*
void k_io__specialjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param event QEvent*
void k_io__specialjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QEvent* event)
void k_io__specialjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal QMetaMethod*
void k_io__specialjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal QMetaMethod*
void k_io__specialjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QMetaMethod* signal)
void k_io__specialjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal QMetaMethod*
void k_io__specialjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal QMetaMethod*
void k_io__specialjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, QMetaMethod* signal)
void k_io__specialjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_has_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_qbase_has_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func()
void k_io__specialjob_on_has_subjobs(void* self, bool (*callback)());

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
libqt_list /* of KJob* */ k_io__specialjob_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
libqt_list /* of KJob* */ k_io__specialjob_qbase_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback KJob** func()
void k_io__specialjob_on_subjobs(void* self, KJob** (*callback)());

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_clear_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_clear_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_clear_subjobs(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param capabilities flag of enum KJob__Capability
void k_io__specialjob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param capabilities flag of enum KJob__Capability
void k_io__specialjob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, flag of enum KJob__Capability capabilities)
void k_io__specialjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
bool k_io__specialjob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func()
void k_io__specialjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param errorCode int
void k_io__specialjob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param errorCode int
void k_io__specialjob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, int errorCode)
void k_io__specialjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param errorText const char*
void k_io__specialjob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param errorText const char*
void k_io__specialjob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, const char* errorText)
void k_io__specialjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__specialjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__specialjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, enum KJob__Unit unit, uint64_t amount)
void k_io__specialjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__specialjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__specialjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, enum KJob__Unit unit, uint64_t amount)
void k_io__specialjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
void k_io__specialjob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param unit enum KJob__Unit
void k_io__specialjob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, enum KJob__Unit unit)
void k_io__specialjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param percentage uint64_t
void k_io__specialjob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param percentage uint64_t
void k_io__specialjob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, uint64_t percentage)
void k_io__specialjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_io__specialjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_io__specialjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, uint64_t processedAmount, uint64_t totalAmount)
void k_io__specialjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param speed uint64_t
void k_io__specialjob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param speed uint64_t
void k_io__specialjob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, uint64_t speed)
void k_io__specialjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback void func()
void k_io__specialjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
QObject* k_io__specialjob_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
QObject* k_io__specialjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback QObject* func()
void k_io__specialjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
int32_t k_io__specialjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
int32_t k_io__specialjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback int32_t func()
void k_io__specialjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal const char*
int32_t k_io__specialjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal const char*
int32_t k_io__specialjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback int32_t func(KIO__SpecialJob* self, const char* signal)
void k_io__specialjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal QMetaMethod*
bool k_io__specialjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param signal QMetaMethod*
bool k_io__specialjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__SpecialJob*
/// @param callback bool func(KIO__SpecialJob* self, QMetaMethod* signal)
void k_io__specialjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job)
void k_io__specialjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__specialjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__specialjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, KJob* job, uint64_t percent)
void k_io__specialjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SpecialJob*
/// @param callback void func(KIO__SpecialJob* self, const char* objectName)
void k_io__specialjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__SpecialJob*
void k_io__specialjob_delete(void* self);

#endif
