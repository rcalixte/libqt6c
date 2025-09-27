#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBEMPTYTRASHJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBEMPTYTRASHJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-emptytrashjob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__EmptyTrashJob*
const QMetaObject* k_io__emptytrashjob_meta_object(void* self);

/// @param self KIO__EmptyTrashJob*
/// @param param1 const char*
void* k_io__emptytrashjob_metacast(void* self, const char* param1);

/// @param self KIO__EmptyTrashJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__emptytrashjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__emptytrashjob_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__emptytrashjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__emptytrashjob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#url)
///
/// @param self KIO__EmptyTrashJob*
const QUrl* k_io__emptytrashjob_url(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#putOnHold)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_put_on_hold(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#removeOnHold)
///
void k_io__emptytrashjob_remove_on_hold();

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_redirection_handling_enabled(void* self);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
///
/// @param self KIO__EmptyTrashJob*
/// @param handle bool
void k_io__emptytrashjob_set_redirection_handling_enabled(void* self, bool handle);

/// Inherited from KIO::SimpleJob
///
/// [Qt documentation](https://api.kde.org/kio-simplejob.html#slotError)
///
/// @param self KIO__EmptyTrashJob*
/// @param param1 int
/// @param param2 const char*
void k_io__emptytrashjob_slot_error(void* self, int param1, const char* param2);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#start)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_start(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self KIO__EmptyTrashJob*
KIO__JobUiDelegateExtension* k_io__emptytrashjob_ui_delegate_extension(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__EmptyTrashJob*
/// @param extension KIO__JobUiDelegateExtension*
void k_io__emptytrashjob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
const char* k_io__emptytrashjob_error_string(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
const char** k_io__emptytrashjob_detailed_error_strings(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__EmptyTrashJob*
/// @param parentJob KIO__Job*
void k_io__emptytrashjob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self KIO__EmptyTrashJob*
KIO__Job* k_io__emptytrashjob_parent_job(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__EmptyTrashJob*
/// @param metaData KIO__MetaData*
void k_io__emptytrashjob_set_meta_data(void* self, void* metaData);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__EmptyTrashJob*
/// @param key const char*
/// @param value const char*
void k_io__emptytrashjob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__EmptyTrashJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__emptytrashjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__EmptyTrashJob*
/// @param values libqt_map /* of const char* to const char* */
void k_io__emptytrashjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self KIO__EmptyTrashJob*
KIO__MetaData* k_io__emptytrashjob_outgoing_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#metaData)
///
/// @param self KIO__EmptyTrashJob*
KIO__MetaData* k_io__emptytrashjob_meta_data(void* self);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#queryMetaData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
/// @param key const char*
const char* k_io__emptytrashjob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__EmptyTrashJob*
/// @param job KIO__Job*
void k_io__emptytrashjob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KIO__Job* job)
void k_io__emptytrashjob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
/// @param reqUrl QUrl*
const char** k_io__emptytrashjob_detailed_error_strings1(void* self, void* reqUrl);

/// Inherited from KIO::Job
///
/// [Qt documentation](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
/// @param reqUrl QUrl*
/// @param method int
const char** k_io__emptytrashjob_detailed_error_strings2(void* self, void* reqUrl, int method);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__EmptyTrashJob*
/// @param delegate KJobUiDelegate*
void k_io__emptytrashjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__EmptyTrashJob*
KJobUiDelegate* k_io__emptytrashjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__EmptyTrashJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__emptytrashjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__EmptyTrashJob*
int32_t k_io__emptytrashjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
const char* k_io__emptytrashjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__EmptyTrashJob*
/// @param unit enum KJob__Unit
uint64_t k_io__emptytrashjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__EmptyTrashJob*
/// @param unit enum KJob__Unit
uint64_t k_io__emptytrashjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__EmptyTrashJob*
uint64_t k_io__emptytrashjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__EmptyTrashJob*
/// @param autodelete bool
void k_io__emptytrashjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__EmptyTrashJob*
long long k_io__emptytrashjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__EmptyTrashJob*
/// @param job KJob*
/// @param message const char*
void k_io__emptytrashjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, const char* message)
void k_io__emptytrashjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__EmptyTrashJob*
/// @param job KJob*
/// @param message const char*
void k_io__emptytrashjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, const char* message)
void k_io__emptytrashjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__EmptyTrashJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__emptytrashjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, uint64_t size)
void k_io__emptytrashjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__EmptyTrashJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__emptytrashjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, uint64_t size)
void k_io__emptytrashjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__EmptyTrashJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__emptytrashjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, uint64_t speed)
void k_io__emptytrashjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__EmptyTrashJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__emptytrashjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__EmptyTrashJob*
/// @param hide bool
void k_io__emptytrashjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__EmptyTrashJob*
/// @param event QEvent*
bool k_io__emptytrashjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__EmptyTrashJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__emptytrashjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
const char* k_io__emptytrashjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__EmptyTrashJob*
/// @param name char*
void k_io__emptytrashjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__EmptyTrashJob*
bool k_io__emptytrashjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__EmptyTrashJob*
/// @param b bool
bool k_io__emptytrashjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__EmptyTrashJob*
QThread* k_io__emptytrashjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__EmptyTrashJob*
/// @param thread QThread*
bool k_io__emptytrashjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__EmptyTrashJob*
/// @param interval int
int32_t k_io__emptytrashjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__EmptyTrashJob*
/// @param id int
void k_io__emptytrashjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__EmptyTrashJob*
/// @param id enum Qt__TimerId
void k_io__emptytrashjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__EmptyTrashJob*
libqt_list /* of QObject* */ k_io__emptytrashjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__EmptyTrashJob*
/// @param parent QObject*
void k_io__emptytrashjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__EmptyTrashJob*
/// @param filterObj QObject*
void k_io__emptytrashjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__EmptyTrashJob*
/// @param obj QObject*
void k_io__emptytrashjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__emptytrashjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__EmptyTrashJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__emptytrashjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__emptytrashjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__emptytrashjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__EmptyTrashJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__emptytrashjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__EmptyTrashJob*
/// @param name const char*
QVariant* k_io__emptytrashjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__EmptyTrashJob*
const char** k_io__emptytrashjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__EmptyTrashJob*
QBindingStorage* k_io__emptytrashjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__EmptyTrashJob*
const QBindingStorage* k_io__emptytrashjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self)
void k_io__emptytrashjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__EmptyTrashJob*
QObject* k_io__emptytrashjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__EmptyTrashJob*
/// @param classname const char*
bool k_io__emptytrashjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__EmptyTrashJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__emptytrashjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__EmptyTrashJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__emptytrashjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__emptytrashjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__EmptyTrashJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__emptytrashjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__EmptyTrashJob*
/// @param param1 QObject*
void k_io__emptytrashjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, QObject* param1)
void k_io__emptytrashjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job)
void k_io__emptytrashjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job)
void k_io__emptytrashjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job)
void k_io__emptytrashjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job)
void k_io__emptytrashjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__emptytrashjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__emptytrashjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, KJob* job, uint64_t percent)
void k_io__emptytrashjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__EmptyTrashJob*
/// @param callback void func(KIO__EmptyTrashJob* self, const char* objectName)
void k_io__emptytrashjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__EmptyTrashJob*
void k_io__emptytrashjob_delete(void* self);

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#emptyTrash)
///
KIO__EmptyTrashJob* k_io_empty_trash();
#endif
