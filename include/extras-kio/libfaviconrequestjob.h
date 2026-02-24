#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBFAVICONREQUESTJOB_H
#define SRC_EXTRAS_KIO_QT6C_LIBFAVICONREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html)

/// k_io__faviconrequestjob_new constructs a new KIO::FavIconRequestJob object.
///
/// @param hostUrl QUrl*
///
KIO__FavIconRequestJob* k_io__faviconrequestjob_new(void* hostUrl);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html)

/// k_io__faviconrequestjob_new2 constructs a new KIO::FavIconRequestJob object.
///
/// @param hostUrl QUrl*
/// @param reload enum KIO__LoadType
///
KIO__FavIconRequestJob* k_io__faviconrequestjob_new2(void* hostUrl, int32_t reload);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html)

/// k_io__faviconrequestjob_new3 constructs a new KIO::FavIconRequestJob object.
///
/// @param hostUrl QUrl*
/// @param reload enum KIO__LoadType
/// @param parent QObject*
///
KIO__FavIconRequestJob* k_io__faviconrequestjob_new3(void* hostUrl, int32_t reload, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__FavIconRequestJob*
///
const QMetaObject* k_io__faviconrequestjob_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback const QMetaObject* func()
///
void k_io__faviconrequestjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_meta_object` instead
///
#define k_io__faviconrequestjob_qbase_meta_object k_io__faviconrequestjob_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KIO__FavIconRequestJob*
///
const QMetaObject* k_io__faviconrequestjob_super_meta_object(void* self);

/// @param self KIO__FavIconRequestJob*
/// @param param1 const char*
///
void* k_io__faviconrequestjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void* func(KIO__FavIconRequestJob* self, const char* param1)
///
void k_io__faviconrequestjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_metacast` instead
///
#define k_io__faviconrequestjob_qbase_metacast k_io__faviconrequestjob_super_metacast

/// Base class method implementation
///
/// @param self KIO__FavIconRequestJob*
/// @param param1 const char*
///
void* k_io__faviconrequestjob_super_metacast(void* self, const char* param1);

/// @param self KIO__FavIconRequestJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__faviconrequestjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback int32_t func(KIO__FavIconRequestJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_io__faviconrequestjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_metacall` instead
///
#define k_io__faviconrequestjob_qbase_metacall k_io__faviconrequestjob_super_metacall

/// Base class method implementation
///
/// @param self KIO__FavIconRequestJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__faviconrequestjob_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_io__faviconrequestjob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html#setIconUrl)
///
/// @param self KIO__FavIconRequestJob*
/// @param iconUrl QUrl*
///
void k_io__faviconrequestjob_set_icon_url(void* self, void* iconUrl);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html#iconFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__FavIconRequestJob*
///
const char* k_io__faviconrequestjob_icon_file(void* self);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html#hostUrl)
///
/// @param self KIO__FavIconRequestJob*
///
QUrl* k_io__faviconrequestjob_host_url(void* self);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html#start)
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_start(void* self);

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html#start)
///
/// Allows for overriding the related default method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func()
///
void k_io__faviconrequestjob_on_start(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_start` instead
///
#define k_io__faviconrequestjob_qbase_start k_io__faviconrequestjob_super_start

/// [Upstream resources](https://api.kde.org/kio-faviconrequestjob.html#start)
///
/// Base class method implementation
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_super_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__faviconrequestjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__faviconrequestjob_tr3(const char* s, const char* c, int n);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__FavIconRequestJob*
/// @param delegate KJobUiDelegate*
///
void k_io__faviconrequestjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__FavIconRequestJob*
///
KJobUiDelegate* k_io__faviconrequestjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__FavIconRequestJob*
///
/// @return flag of enum KJob__Capability
///
int32_t k_io__faviconrequestjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__FavIconRequestJob*
///
int32_t k_io__faviconrequestjob_error(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__FavIconRequestJob*
///
const char* k_io__faviconrequestjob_error_text(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
///
uint64_t k_io__faviconrequestjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
///
uint64_t k_io__faviconrequestjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__FavIconRequestJob*
///
uint64_t k_io__faviconrequestjob_percent(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__FavIconRequestJob*
/// @param autodelete bool
///
void k_io__faviconrequestjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__FavIconRequestJob*
///
long long k_io__faviconrequestjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__faviconrequestjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, const char* message)
///
void k_io__faviconrequestjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__faviconrequestjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, const char* message)
///
void k_io__faviconrequestjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_io__faviconrequestjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, uint64_t size)
///
void k_io__faviconrequestjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_io__faviconrequestjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, uint64_t size)
///
void k_io__faviconrequestjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param speed uint64_t
///
void k_io__faviconrequestjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, uint64_t speed)
///
void k_io__faviconrequestjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__FavIconRequestJob*
/// @param verbosity enum KJob__KillVerbosity
///
bool k_io__faviconrequestjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__FavIconRequestJob*
/// @param hide bool
///
void k_io__faviconrequestjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__FavIconRequestJob*
///
const char* k_io__faviconrequestjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__FavIconRequestJob*
/// @param name const char*
///
void k_io__faviconrequestjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__FavIconRequestJob*
/// @param b bool
///
bool k_io__faviconrequestjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__FavIconRequestJob*
///
QThread* k_io__faviconrequestjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__FavIconRequestJob*
/// @param thread QThread*
///
bool k_io__faviconrequestjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FavIconRequestJob*
/// @param interval int
///
int32_t k_io__faviconrequestjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FavIconRequestJob*
/// @param time int64_t of nanoseconds
///
int32_t k_io__faviconrequestjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__FavIconRequestJob*
/// @param id int
///
void k_io__faviconrequestjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__FavIconRequestJob*
/// @param id enum Qt__TimerId
///
void k_io__faviconrequestjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__FavIconRequestJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_io__faviconrequestjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__FavIconRequestJob*
/// @param parent QObject*
///
void k_io__faviconrequestjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__FavIconRequestJob*
/// @param filterObj QObject*
///
void k_io__faviconrequestjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__FavIconRequestJob*
/// @param obj QObject*
///
void k_io__faviconrequestjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_io__faviconrequestjob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__faviconrequestjob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__FavIconRequestJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__faviconrequestjob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__faviconrequestjob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__faviconrequestjob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__FavIconRequestJob*
/// @param receiver QObject*
///
bool k_io__faviconrequestjob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__faviconrequestjob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__FavIconRequestJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__faviconrequestjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__FavIconRequestJob*
/// @param name const char*
///
QVariant* k_io__faviconrequestjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__FavIconRequestJob*
///
const char** k_io__faviconrequestjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__FavIconRequestJob*
///
QBindingStorage* k_io__faviconrequestjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__FavIconRequestJob*
///
const QBindingStorage* k_io__faviconrequestjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self)
///
void k_io__faviconrequestjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__FavIconRequestJob*
///
QObject* k_io__faviconrequestjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__FavIconRequestJob*
/// @param classname const char*
///
bool k_io__faviconrequestjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FavIconRequestJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__faviconrequestjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FavIconRequestJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_io__faviconrequestjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_io__faviconrequestjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_io__faviconrequestjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__FavIconRequestJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__faviconrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__FavIconRequestJob*
/// @param signal const char*
///
bool k_io__faviconrequestjob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__FavIconRequestJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_io__faviconrequestjob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__FavIconRequestJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__faviconrequestjob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__FavIconRequestJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__faviconrequestjob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FavIconRequestJob*
/// @param param1 QObject*
///
void k_io__faviconrequestjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, QObject* param1)
///
void k_io__faviconrequestjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
///
bool k_io__faviconrequestjob_add_subjob(void* self, void* job);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_add_subjob` instead
///
#define k_io__faviconrequestjob_qbase_add_subjob k_io__faviconrequestjob_super_add_subjob

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
///
bool k_io__faviconrequestjob_super_add_subjob(void* self, void* job);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func(KIO__FavIconRequestJob* self, KJob* job)
///
void k_io__faviconrequestjob_on_add_subjob(void* self, bool (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
///
bool k_io__faviconrequestjob_remove_subjob(void* self, void* job);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_remove_subjob` instead
///
#define k_io__faviconrequestjob_qbase_remove_subjob k_io__faviconrequestjob_super_remove_subjob

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
///
bool k_io__faviconrequestjob_super_remove_subjob(void* self, void* job);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func(KIO__FavIconRequestJob* self, KJob* job)
///
void k_io__faviconrequestjob_on_remove_subjob(void* self, bool (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__faviconrequestjob_slot_info_message(void* self, void* job, const char* message);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_slot_info_message` instead
///
#define k_io__faviconrequestjob_qbase_slot_info_message k_io__faviconrequestjob_super_slot_info_message

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param job KJob*
/// @param message const char*
///
void k_io__faviconrequestjob_super_slot_info_message(void* self, void* job, const char* message);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, const char* message)
///
void k_io__faviconrequestjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_do_kill(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_do_kill` instead
///
#define k_io__faviconrequestjob_qbase_do_kill k_io__faviconrequestjob_super_do_kill

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_super_do_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func()
///
void k_io__faviconrequestjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_do_suspend(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_do_suspend` instead
///
#define k_io__faviconrequestjob_qbase_do_suspend k_io__faviconrequestjob_super_do_suspend

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_super_do_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func()
///
void k_io__faviconrequestjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_do_resume(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_do_resume` instead
///
#define k_io__faviconrequestjob_qbase_do_resume k_io__faviconrequestjob_super_do_resume

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_super_do_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func()
///
void k_io__faviconrequestjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
const char* k_io__faviconrequestjob_error_string(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_error_string` instead
///
#define k_io__faviconrequestjob_qbase_error_string k_io__faviconrequestjob_super_error_string

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
const char* k_io__faviconrequestjob_super_error_string(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback const char* func()
///
void k_io__faviconrequestjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QEvent*
///
bool k_io__faviconrequestjob_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_event` instead
///
#define k_io__faviconrequestjob_qbase_event k_io__faviconrequestjob_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QEvent*
///
bool k_io__faviconrequestjob_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func(KIO__FavIconRequestJob* self, QEvent* event)
///
void k_io__faviconrequestjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__faviconrequestjob_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_event_filter` instead
///
#define k_io__faviconrequestjob_qbase_event_filter k_io__faviconrequestjob_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__faviconrequestjob_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event)
///
void k_io__faviconrequestjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QTimerEvent*
///
void k_io__faviconrequestjob_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_timer_event` instead
///
#define k_io__faviconrequestjob_qbase_timer_event k_io__faviconrequestjob_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QTimerEvent*
///
void k_io__faviconrequestjob_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, QTimerEvent* event)
///
void k_io__faviconrequestjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QChildEvent*
///
void k_io__faviconrequestjob_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_child_event` instead
///
#define k_io__faviconrequestjob_qbase_child_event k_io__faviconrequestjob_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QChildEvent*
///
void k_io__faviconrequestjob_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, QChildEvent* event)
///
void k_io__faviconrequestjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QEvent*
///
void k_io__faviconrequestjob_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_custom_event` instead
///
#define k_io__faviconrequestjob_qbase_custom_event k_io__faviconrequestjob_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param event QEvent*
///
void k_io__faviconrequestjob_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, QEvent* event)
///
void k_io__faviconrequestjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal QMetaMethod*
///
void k_io__faviconrequestjob_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_connect_notify` instead
///
#define k_io__faviconrequestjob_qbase_connect_notify k_io__faviconrequestjob_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal QMetaMethod*
///
void k_io__faviconrequestjob_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, QMetaMethod* signal)
///
void k_io__faviconrequestjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal QMetaMethod*
///
void k_io__faviconrequestjob_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_disconnect_notify` instead
///
#define k_io__faviconrequestjob_qbase_disconnect_notify k_io__faviconrequestjob_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal QMetaMethod*
///
void k_io__faviconrequestjob_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, QMetaMethod* signal)
///
void k_io__faviconrequestjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_has_subjobs(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_has_subjobs` instead
///
#define k_io__faviconrequestjob_qbase_has_subjobs k_io__faviconrequestjob_super_has_subjobs

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_super_has_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func()
///
void k_io__faviconrequestjob_on_has_subjobs(void* self, bool (*callback)());

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
/// @return libqt_list of KJob*
///
libqt_list k_io__faviconrequestjob_subjobs(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_subjobs` instead
///
#define k_io__faviconrequestjob_qbase_subjobs k_io__faviconrequestjob_super_subjobs

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
/// @return libqt_list of KJob*
///
libqt_list k_io__faviconrequestjob_super_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback libqt_list of KJob* func()
///
void k_io__faviconrequestjob_on_subjobs(void* self, libqt_list (*callback)());

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_clear_subjobs(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_clear_subjobs` instead
///
#define k_io__faviconrequestjob_qbase_clear_subjobs k_io__faviconrequestjob_super_clear_subjobs

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_super_clear_subjobs(void* self);

/// Inherited from KCompositeJob
///
/// [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func()
///
void k_io__faviconrequestjob_on_clear_subjobs(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_io__faviconrequestjob_set_capabilities(void* self, int32_t capabilities);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_capabilities` instead
///
#define k_io__faviconrequestjob_qbase_set_capabilities k_io__faviconrequestjob_super_set_capabilities

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_io__faviconrequestjob_super_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, flag of enum KJob__Capability capabilities)
///
void k_io__faviconrequestjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_is_finished(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_is_finished` instead
///
#define k_io__faviconrequestjob_qbase_is_finished k_io__faviconrequestjob_super_is_finished

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
bool k_io__faviconrequestjob_super_is_finished(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func()
///
void k_io__faviconrequestjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param errorCode int
///
void k_io__faviconrequestjob_set_error(void* self, int errorCode);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_error` instead
///
#define k_io__faviconrequestjob_qbase_set_error k_io__faviconrequestjob_super_set_error

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param errorCode int
///
void k_io__faviconrequestjob_super_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, int errorCode)
///
void k_io__faviconrequestjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param errorText const char*
///
void k_io__faviconrequestjob_set_error_text(void* self, const char* errorText);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_error_text` instead
///
#define k_io__faviconrequestjob_qbase_set_error_text k_io__faviconrequestjob_super_set_error_text

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param errorText const char*
///
void k_io__faviconrequestjob_super_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, const char* errorText)
///
void k_io__faviconrequestjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__faviconrequestjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_processed_amount` instead
///
#define k_io__faviconrequestjob_qbase_set_processed_amount k_io__faviconrequestjob_super_set_processed_amount

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__faviconrequestjob_super_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_io__faviconrequestjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__faviconrequestjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_total_amount` instead
///
#define k_io__faviconrequestjob_qbase_set_total_amount k_io__faviconrequestjob_super_set_total_amount

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_io__faviconrequestjob_super_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_io__faviconrequestjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
///
void k_io__faviconrequestjob_set_progress_unit(void* self, int32_t unit);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_progress_unit` instead
///
#define k_io__faviconrequestjob_qbase_set_progress_unit k_io__faviconrequestjob_super_set_progress_unit

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param unit enum KJob__Unit
///
void k_io__faviconrequestjob_super_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, enum KJob__Unit unit)
///
void k_io__faviconrequestjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param percentage uint64_t
///
void k_io__faviconrequestjob_set_percent(void* self, uint64_t percentage);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_set_percent` instead
///
#define k_io__faviconrequestjob_qbase_set_percent k_io__faviconrequestjob_super_set_percent

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param percentage uint64_t
///
void k_io__faviconrequestjob_super_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, uint64_t percentage)
///
void k_io__faviconrequestjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_emit_result(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_emit_result` instead
///
#define k_io__faviconrequestjob_qbase_emit_result k_io__faviconrequestjob_super_emit_result

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_super_emit_result(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func()
///
void k_io__faviconrequestjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_io__faviconrequestjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_emit_percent` instead
///
#define k_io__faviconrequestjob_qbase_emit_percent k_io__faviconrequestjob_super_emit_percent

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_io__faviconrequestjob_super_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, uint64_t processedAmount, uint64_t totalAmount)
///
void k_io__faviconrequestjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param speed uint64_t
///
void k_io__faviconrequestjob_emit_speed(void* self, uint64_t speed);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_emit_speed` instead
///
#define k_io__faviconrequestjob_qbase_emit_speed k_io__faviconrequestjob_super_emit_speed

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param speed uint64_t
///
void k_io__faviconrequestjob_super_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, uint64_t speed)
///
void k_io__faviconrequestjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_start_elapsed_timer(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_start_elapsed_timer` instead
///
#define k_io__faviconrequestjob_qbase_start_elapsed_timer k_io__faviconrequestjob_super_start_elapsed_timer

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_super_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func()
///
void k_io__faviconrequestjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
QObject* k_io__faviconrequestjob_sender(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_sender` instead
///
#define k_io__faviconrequestjob_qbase_sender k_io__faviconrequestjob_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
QObject* k_io__faviconrequestjob_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback QObject* func()
///
void k_io__faviconrequestjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
int32_t k_io__faviconrequestjob_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_sender_signal_index` instead
///
#define k_io__faviconrequestjob_qbase_sender_signal_index k_io__faviconrequestjob_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
///
int32_t k_io__faviconrequestjob_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback int32_t func()
///
void k_io__faviconrequestjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal const char*
///
int32_t k_io__faviconrequestjob_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_receivers` instead
///
#define k_io__faviconrequestjob_qbase_receivers k_io__faviconrequestjob_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal const char*
///
int32_t k_io__faviconrequestjob_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback int32_t func(KIO__FavIconRequestJob* self, const char* signal)
///
void k_io__faviconrequestjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal QMetaMethod*
///
bool k_io__faviconrequestjob_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_io__faviconrequestjob_super_is_signal_connected` instead
///
#define k_io__faviconrequestjob_qbase_is_signal_connected k_io__faviconrequestjob_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param signal QMetaMethod*
///
bool k_io__faviconrequestjob_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__FavIconRequestJob*
/// @param callback bool func(KIO__FavIconRequestJob* self, QMetaMethod* signal)
///
void k_io__faviconrequestjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job)
///
void k_io__faviconrequestjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job)
///
void k_io__faviconrequestjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job)
///
void k_io__faviconrequestjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job)
///
void k_io__faviconrequestjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_io__faviconrequestjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_io__faviconrequestjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, KJob* job, uint64_t percent)
///
void k_io__faviconrequestjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FavIconRequestJob*
/// @param callback void func(KIO__FavIconRequestJob* self, const char* objectName)
///
void k_io__faviconrequestjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__FavIconRequestJob*
///
void k_io__faviconrequestjob_delete(void* self);

#endif
