#pragma once
#ifndef EXTRAS_KIO_LIBSIMPLEJOB_H
#define EXTRAS_KIO_LIBSIMPLEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-simplejob.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KIO__SimpleJob*
///
const QMetaObject* k_io__simplejob_meta_object(const void* self);

/// @param self KIO__SimpleJob*
/// @param param1 const char*
///
void* k_io__simplejob_metacast(void* self, const char* param1);

/// @param self KIO__SimpleJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__simplejob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_io__simplejob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-simplejob.html#url)
///
/// @param self const KIO__SimpleJob*
///
const QUrl* k_io__simplejob_url(const void* self);

/// [Upstream resources](https://api.kde.org/kio-simplejob.html#putOnHold)
///
/// @param self KIO__SimpleJob*
///
void k_io__simplejob_put_on_hold(void* self);

/// [Upstream resources](https://api.kde.org/kio-simplejob.html#removeOnHold)
///
void k_io__simplejob_remove_on_hold();

/// [Upstream resources](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_redirection_handling_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
///
/// @param self KIO__SimpleJob*
/// @param handle bool
///
void k_io__simplejob_set_redirection_handling_enabled(void* self, bool handle);

/// [Upstream resources](https://api.kde.org/kio-simplejob.html#slotError)
///
/// @param self KIO__SimpleJob*
/// @param param1 int
/// @param param2 const char*
///
void k_io__simplejob_slot_error(void* self, int param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__simplejob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__simplejob_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#start)
///
/// @param self KIO__SimpleJob*
///
void k_io__simplejob_start(void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
///
/// @param self const KIO__SimpleJob*
///
KIO__JobUiDelegateExtension* k_io__simplejob_ui_delegate_extension(const void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
///
/// @param self KIO__SimpleJob*
/// @param extension KIO__JobUiDelegateExtension*
///
void k_io__simplejob_set_ui_delegate_extension(void* self, void* extension);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIO__SimpleJob*
///
const char* k_io__simplejob_error_string(const void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIO__SimpleJob*
///
const char** k_io__simplejob_detailed_error_strings(const void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setParentJob)
///
/// @param self KIO__SimpleJob*
/// @param parentJob KIO__Job*
///
void k_io__simplejob_set_parent_job(void* self, void* parentJob);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
///
/// @param self const KIO__SimpleJob*
///
KIO__Job* k_io__simplejob_parent_job(const void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
///
/// @param self KIO__SimpleJob*
/// @param metaData KIO__MetaData*
///
void k_io__simplejob_set_meta_data(void* self, const void* metaData);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__SimpleJob*
/// @param key const char*
/// @param value const char*
///
void k_io__simplejob_add_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
///
/// @param self KIO__SimpleJob*
/// @param values libqt_map of const char* to const char*
///
void k_io__simplejob_add_meta_data2(void* self, libqt_map values);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#mergeMetaData)
///
/// @param self KIO__SimpleJob*
/// @param values libqt_map of const char* to const char*
///
void k_io__simplejob_merge_meta_data(void* self, libqt_map values);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#outgoingMetaData)
///
/// @param self const KIO__SimpleJob*
///
KIO__MetaData* k_io__simplejob_outgoing_meta_data(const void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#metaData)
///
/// @param self const KIO__SimpleJob*
///
KIO__MetaData* k_io__simplejob_meta_data(const void* self);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__SimpleJob*
/// @param key const char*
///
const char* k_io__simplejob_query_meta_data(void* self, const char* key);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__SimpleJob*
/// @param job KIO__Job*
///
void k_io__simplejob_connected(void* self, void* job);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#connected)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KIO__Job* job)
///
void k_io__simplejob_on_connected(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIO__SimpleJob*
/// @param reqUrl QUrl*
///
const char** k_io__simplejob_detailed_error_strings1(const void* self, const void* reqUrl);

/// Inherited from KIO::Job
///
/// [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIO__SimpleJob*
/// @param reqUrl QUrl*
/// @param method int
///
const char** k_io__simplejob_detailed_error_strings2(const void* self, const void* reqUrl, int method);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__SimpleJob*
/// @param delegate KJobUiDelegate*
///
void k_io__simplejob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self const KIO__SimpleJob*
///
KJobUiDelegate* k_io__simplejob_ui_delegate(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#capabilities)
///
/// @param self const KIO__SimpleJob*
///
/// @return flag of enum KJob__Capability
///
int32_t k_io__simplejob_capabilities(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_suspended(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__SimpleJob*
///
bool k_io__simplejob_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__SimpleJob*
///
bool k_io__simplejob_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__SimpleJob*
///
bool k_io__simplejob_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__SimpleJob*
///
bool k_io__simplejob_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#error)
///
/// @param self const KIO__SimpleJob*
///
int32_t k_io__simplejob_error(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIO__SimpleJob*
///
const char* k_io__simplejob_error_text(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self const KIO__SimpleJob*
/// @param unit enum KJob__Unit
///
uintptr_t k_io__simplejob_processed_amount(const void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self const KIO__SimpleJob*
/// @param unit enum KJob__Unit
///
uintptr_t k_io__simplejob_total_amount(const void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percent)
///
/// @param self const KIO__SimpleJob*
///
uintptr_t k_io__simplejob_percent(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__SimpleJob*
/// @param autodelete bool
///
void k_io__simplejob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_auto_delete(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__SimpleJob*
///
void k_io__simplejob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_finished_notification_hidden(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_started_with_exec(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self const KIO__SimpleJob*
///
int64_t k_io__simplejob_elapsed_time(const void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__SimpleJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__simplejob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, const char* message)
///
void k_io__simplejob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__SimpleJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__simplejob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, const char* message)
///
void k_io__simplejob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__SimpleJob*
/// @param job KJob*
/// @param size uintptr_t
///
void k_io__simplejob_total_size(void* self, void* job, uintptr_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, uintptr_t size)
///
void k_io__simplejob_on_total_size(void* self, void (*callback)(void*, void*, uintptr_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__SimpleJob*
/// @param job KJob*
/// @param size uintptr_t
///
void k_io__simplejob_processed_size(void* self, void* job, uintptr_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, uintptr_t size)
///
void k_io__simplejob_on_processed_size(void* self, void (*callback)(void*, void*, uintptr_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__SimpleJob*
/// @param job KJob*
/// @param speed uintptr_t
///
void k_io__simplejob_speed(void* self, void* job, uintptr_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, uintptr_t speed)
///
void k_io__simplejob_on_speed(void* self, void (*callback)(void*, void*, uintptr_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__SimpleJob*
/// @param verbosity enum KJob__KillVerbosity
///
bool k_io__simplejob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__SimpleJob*
/// @param hide bool
///
void k_io__simplejob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__SimpleJob*
/// @param event QEvent*
///
bool k_io__simplejob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__SimpleJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__simplejob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIO__SimpleJob*
///
const char* k_io__simplejob_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__SimpleJob*
/// @param name const char*
///
void k_io__simplejob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__SimpleJob*
/// @param b bool
///
bool k_io__simplejob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KIO__SimpleJob*
///
QThread* k_io__simplejob_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__SimpleJob*
/// @param thread QThread*
///
bool k_io__simplejob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__SimpleJob*
/// @param interval int
///
int32_t k_io__simplejob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__SimpleJob*
/// @param time int64_t of nanoseconds
///
int32_t k_io__simplejob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__SimpleJob*
/// @param id int
///
void k_io__simplejob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__SimpleJob*
/// @param id enum Qt__TimerId
///
void k_io__simplejob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KIO__SimpleJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_io__simplejob_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__SimpleJob*
/// @param parent QObject*
///
void k_io__simplejob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__SimpleJob*
/// @param filterObj QObject*
///
void k_io__simplejob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__SimpleJob*
/// @param obj QObject*
///
void k_io__simplejob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_io__simplejob_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__simplejob_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KIO__SimpleJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__simplejob_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__simplejob_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__simplejob_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KIO__SimpleJob*
///
bool k_io__simplejob_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KIO__SimpleJob*
/// @param receiver QObject*
///
bool k_io__simplejob_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__simplejob_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KIO__SimpleJob*
///
void k_io__simplejob_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KIO__SimpleJob*
///
void k_io__simplejob_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__SimpleJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__simplejob_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KIO__SimpleJob*
/// @param name const char*
///
QVariant* k_io__simplejob_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIO__SimpleJob*
///
const char** k_io__simplejob_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__SimpleJob*
///
QBindingStorage* k_io__simplejob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KIO__SimpleJob*
///
const QBindingStorage* k_io__simplejob_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SimpleJob*
///
void k_io__simplejob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self)
///
void k_io__simplejob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KIO__SimpleJob*
///
QObject* k_io__simplejob_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KIO__SimpleJob*
/// @param classname const char*
///
bool k_io__simplejob_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__SimpleJob*
///
void k_io__simplejob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__SimpleJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__simplejob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__SimpleJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_io__simplejob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_io__simplejob_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_io__simplejob_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KIO__SimpleJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__simplejob_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KIO__SimpleJob*
/// @param signal const char*
///
bool k_io__simplejob_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KIO__SimpleJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_io__simplejob_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KIO__SimpleJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__simplejob_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KIO__SimpleJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__simplejob_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SimpleJob*
/// @param param1 QObject*
///
void k_io__simplejob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, QObject* param1)
///
void k_io__simplejob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job)
///
void k_io__simplejob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job)
///
void k_io__simplejob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job)
///
void k_io__simplejob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job)
///
void k_io__simplejob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, enum KJob__Unit unit, uintptr_t amount)
///
void k_io__simplejob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uintptr_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, enum KJob__Unit unit, uintptr_t amount)
///
void k_io__simplejob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uintptr_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, KJob* job, uintptr_t percent)
///
void k_io__simplejob_on_percent_changed(void* self, void (*callback)(void*, void*, uintptr_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__SimpleJob*
/// @param callback void func(KIO__SimpleJob* self, const char* objectName)
///
void k_io__simplejob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__SimpleJob*
///
void k_io__simplejob_delete(void* self);

/// [Upstream resources](https://api.kde.org/kio.html)

/// [Upstream resources](https://api.kde.org/kio.html#rmdir)
///
/// @param url QUrl*
///
KIO__SimpleJob* k_io_rmdir(const void* url);

/// [Upstream resources](https://api.kde.org/kio.html#chown)
///
/// @param url QUrl*
/// @param owner const char*
/// @param group const char*
///
KIO__SimpleJob* k_io_chown(const void* url, const char* owner, const char* group);

/// [Upstream resources](https://api.kde.org/kio.html#setModificationTime)
///
/// @param url QUrl*
/// @param mtime QDateTime*
///
KIO__SimpleJob* k_io_set_modification_time(const void* url, const void* mtime);

/// [Upstream resources](https://api.kde.org/kio.html#rename)
///
/// @param src QUrl*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__SimpleJob* k_io_rename(const void* src, const void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio.html#symlink)
///
/// @param target const char*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__SimpleJob* k_io_symlink(const char* target, const void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio.html#special)
///
/// @param url QUrl*
/// @param data const char*
/// @param flags flag of enum KIO__JobFlag
///
KIO__SimpleJob* k_io_special(const void* url, const char* data, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio.html#mount)
///
/// @param ro bool
/// @param fstype const char*
/// @param dev const char*
/// @param point const char*
/// @param flags flag of enum KIO__JobFlag
///
KIO__SimpleJob* k_io_mount(bool ro, const char* fstype, const char* dev, const char* point, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio.html#unmount)
///
/// @param point const char*
/// @param flags flag of enum KIO__JobFlag
///
KIO__SimpleJob* k_io_unmount(const char* point, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio.html#http_update_cache)
///
/// @param url QUrl*
/// @param no_cache bool
/// @param expireDate QDateTime*
///
KIO__SimpleJob* k_io_http_update_cache(const void* url, bool no_cache, const void* expireDate);

/// [Upstream resources](https://api.kde.org/kio.html#file_delete)
///
/// @param src QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__SimpleJob* k_io_file_delete(const void* src, int32_t flags);
#endif
