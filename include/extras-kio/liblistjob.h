#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBLISTJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBLISTJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-listjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__ListJob*
const QMetaObject* k_io__listjob_meta_object(void* self);

/// @param self KIO__ListJob*
/// @param param1 const char*
void* k_io__listjob_metacast(void* self, const char* param1);

/// @param self KIO__ListJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__listjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__listjob_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#redirectionUrl)
///
/// @param self KIO__ListJob*
const QUrl* k_io__listjob_redirection_url(void* self);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#setUnrestricted)
///
/// @param self KIO__ListJob*
/// @param unrestricted bool
void k_io__listjob_set_unrestricted(void* self, bool unrestricted);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#entries)
///
/// @param self KIO__ListJob*
/// @param job KIO__Job*
/// @param list libqt_list /* of KIO__UDSEntry* */
void k_io__listjob_entries(void* self, void* job, libqt_list list);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#entries)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KIO__Job* job, KIO__UDSEntry** list)
void k_io__listjob_on_entries(void* self, void (*callback)(void*, void*, KIO__UDSEntry**));

/// [Qt documentation](https://api.kde.org/kio-listjob.html#subError)
///
/// @param self KIO__ListJob*
/// @param job KIO__ListJob*
/// @param subJob KIO__ListJob*
void k_io__listjob_sub_error(void* self, void* job, void* subJob);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#subError)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KIO__ListJob* job, KIO__ListJob* subJob)
void k_io__listjob_on_sub_error(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-listjob.html#redirection)
///
/// @param self KIO__ListJob*
/// @param job KIO__Job*
/// @param url QUrl*
void k_io__listjob_redirection(void* self, void* job, void* url);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#redirection)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KIO__Job* job, QUrl* url)
void k_io__listjob_on_redirection(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-listjob.html#permanentRedirection)
///
/// @param self KIO__ListJob*
/// @param job KIO__Job*
/// @param fromUrl QUrl*
/// @param toUrl QUrl*
void k_io__listjob_permanent_redirection(void* self, void* job, void* fromUrl, void* toUrl);

/// [Qt documentation](https://api.kde.org/kio-listjob.html#permanentRedirection)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KIO__Job* job, QUrl* fromUrl, QUrl* toUrl)
void k_io__listjob_on_permanent_redirection(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__listjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__listjob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#url)
///
/// @param self KIO__ListJob*
const QUrl* k_io__listjob_url(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
///
/// @param self KIO__ListJob*
void k_io__listjob_put_on_hold(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#removeOnHold)
///
void k_io__listjob_remove_on_hold();

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_redirection_handling_enabled(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
///
/// @param self KIO__ListJob*
/// @param handle bool
void k_io__listjob_set_redirection_handling_enabled(void* self, bool handle);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotError)
///
/// @param self KIO__ListJob*
/// @param param1 int
/// @param param2 const char*
void k_io__listjob_slot_error(void* self, int param1, const char* param2);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// @param self KIO__ListJob*
void k_io__listjob_start(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__ListJob*
KIO__JobUiDelegateExtension* k_io__listjob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__ListJob*
/// @param extension KIO__JobUiDelegateExtension*
void k_io__listjob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
const char* k_io__listjob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
const char** k_io__listjob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__ListJob*
/// @param parentJob KIO__Job*
void k_io__listjob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__ListJob*
KIO__Job* k_io__listjob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__ListJob*
/// @param metaData KIO__MetaData*
void k_io__listjob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__ListJob*
/// @param key const char*
/// @param value const char*
void k_io__listjob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__ListJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__listjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__ListJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__listjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__ListJob*
KIO__MetaData* k_io__listjob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__ListJob*
KIO__MetaData* k_io__listjob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
/// @param key const char*
const char* k_io__listjob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__ListJob*
/// @param job KIO__Job*
void k_io__listjob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KIO__Job* job)
void k_io__listjob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
/// @param reqUrl QUrl*
const char** k_io__listjob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
/// @param reqUrl QUrl*
/// @param method int
const char** k_io__listjob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__ListJob*
/// @param delegate KJobUiDelegate*
void k_io__listjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__ListJob*
KJobUiDelegate* k_io__listjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__ListJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__listjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__ListJob*
bool k_io__listjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__ListJob*
bool k_io__listjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__ListJob*
bool k_io__listjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__ListJob*
bool k_io__listjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__ListJob*
int32_t k_io__listjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
const char* k_io__listjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__ListJob*
/// @param unit enum KJob__Unit
uint64_t k_io__listjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__ListJob*
/// @param unit enum KJob__Unit
uint64_t k_io__listjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__ListJob*
uint64_t k_io__listjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__ListJob*
/// @param autodelete bool
void k_io__listjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__ListJob*
void k_io__listjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__ListJob*
long long k_io__listjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__ListJob*
/// @param job KJob*
/// @param message const char*
void k_io__listjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, const char* message)
void k_io__listjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__ListJob*
/// @param job KJob*
/// @param message const char*
void k_io__listjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, const char* message)
void k_io__listjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__ListJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__listjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, uint64_t size)
void k_io__listjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__ListJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__listjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, uint64_t size)
void k_io__listjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__ListJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__listjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, uint64_t speed)
void k_io__listjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__ListJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__listjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__ListJob*
/// @param hide bool
void k_io__listjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__ListJob*
/// @param event QEvent*
bool k_io__listjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__ListJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__listjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
const char* k_io__listjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__ListJob*
/// @param name char*
void k_io__listjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__ListJob*
bool k_io__listjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__ListJob*
bool k_io__listjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__ListJob*
/// @param b bool
bool k_io__listjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__ListJob*
QThread* k_io__listjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ListJob*
/// @param thread QThread*
bool k_io__listjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ListJob*
/// @param interval int
int32_t k_io__listjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ListJob*
/// @param id int
void k_io__listjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ListJob*
/// @param id enum Qt__TimerId
void k_io__listjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__ListJob*
libqt_list /* of QObject* */ k_io__listjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__ListJob*
/// @param parent QObject*
void k_io__listjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__ListJob*
/// @param filterObj QObject*
void k_io__listjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__ListJob*
/// @param obj QObject*
void k_io__listjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__listjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ListJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__listjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__listjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__listjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__ListJob*
void k_io__listjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__ListJob*
void k_io__listjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__ListJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__listjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__ListJob*
/// @param name const char*
QVariant* k_io__listjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ListJob*
const char** k_io__listjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ListJob*
QBindingStorage* k_io__listjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ListJob*
const QBindingStorage* k_io__listjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ListJob*
void k_io__listjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self)
void k_io__listjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__ListJob*
QObject* k_io__listjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__ListJob*
/// @param classname const char*
bool k_io__listjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__ListJob*
void k_io__listjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ListJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__listjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ListJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__listjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__listjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ListJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__listjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ListJob*
/// @param param1 QObject*
void k_io__listjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, QObject* param1)
void k_io__listjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job)
void k_io__listjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job)
void k_io__listjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job)
void k_io__listjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job)
void k_io__listjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__listjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__listjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, KJob* job, uint64_t percent)
void k_io__listjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ListJob*
/// @param callback void func(KIO__ListJob* self, const char* objectName)
void k_io__listjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__ListJob*
void k_io__listjob_delete(void* self);

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#listDir)
///
/// @param param1 QUrl*
/// @param param2 flag of enum KIO__JobFlag
/// @param param3 flag of enum KIO__ListJob__ListFlag
KIO__ListJob* k_io_list_dir(void* param1, int32_t param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kio.html#listRecursive)
///
/// @param param1 QUrl*
/// @param param2 flag of enum KIO__JobFlag
/// @param param3 flag of enum KIO__ListJob__ListFlag
KIO__ListJob* k_io_list_recursive(void* param1, int32_t param2, int32_t param3);

/// https://api.kde.org/kio-listjob.html#types

typedef enum {
    KIO_LISTJOB_LISTFLAG_INCLUDEHIDDEN = 1
} KIO__ListJob__ListFlag;

#endif
