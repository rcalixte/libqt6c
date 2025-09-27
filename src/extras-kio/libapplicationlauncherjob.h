#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBAPPLICATIONLAUNCHERJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBAPPLICATIONLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-applicationlauncherjob.html

/// k_io__applicationlauncherjob_new constructs a new KIO::ApplicationLauncherJob object.
///
/// @param serviceAction KServiceAction*
KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new(void* serviceAction);

/// k_io__applicationlauncherjob_new2 constructs a new KIO::ApplicationLauncherJob object.
///
/// @param desktopFileAction KDesktopFileAction*
KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new2(void* desktopFileAction);

/// k_io__applicationlauncherjob_new3 constructs a new KIO::ApplicationLauncherJob object.
///
KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new3();

/// k_io__applicationlauncherjob_new4 constructs a new KIO::ApplicationLauncherJob object.
///
/// @param serviceAction KServiceAction*
/// @param parent QObject*
KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new4(void* serviceAction, void* parent);

/// k_io__applicationlauncherjob_new5 constructs a new KIO::ApplicationLauncherJob object.
///
/// @param desktopFileAction KDesktopFileAction*
/// @param parent QObject*
KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new5(void* desktopFileAction, void* parent);

/// k_io__applicationlauncherjob_new6 constructs a new KIO::ApplicationLauncherJob object.
///
/// @param parent QObject*
KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new6(void* parent);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#setUrls)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param urls libqt_list /* of QUrl* */
void k_io__applicationlauncherjob_set_urls(void* self, libqt_list urls);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#setRunFlags)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param runFlags flag of enum KIO__ApplicationLauncherJob__RunFlag
void k_io__applicationlauncherjob_set_run_flags(void* self, int32_t runFlags);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#setSuggestedFileName)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param suggestedFileName const char*
void k_io__applicationlauncherjob_set_suggested_file_name(void* self, const char* suggestedFileName);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#setStartupId)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param startupId const char*
void k_io__applicationlauncherjob_set_startup_id(void* self, const char* startupId);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#start)
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_start(void* self);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#start)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func()
void k_io__applicationlauncherjob_on_start(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#start)
///
/// Base class method implementation
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_qbase_start(void* self);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#pid)
///
/// @param self KIO__ApplicationLauncherJob*
long long k_io__applicationlauncherjob_pid(void* self);

/// [Qt documentation](https://api.kde.org/kio-applicationlauncherjob.html#pids)
///
/// @param self KIO__ApplicationLauncherJob*
libqt_list /* of long long */ k_io__applicationlauncherjob_pids(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__ApplicationLauncherJob*
const QMetaObject* k_io__applicationlauncherjob_meta_object(void* self);

/// Inherited from KJob
///
/// @param self KIO__ApplicationLauncherJob*
/// @param param1 const char*
void* k_io__applicationlauncherjob_metacast(void* self, const char* param1);

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__applicationlauncherjob_tr(const char* s);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param delegate KJobUiDelegate*
void k_io__applicationlauncherjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__ApplicationLauncherJob*
KJobUiDelegate* k_io__applicationlauncherjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__ApplicationLauncherJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__applicationlauncherjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__ApplicationLauncherJob*
int32_t k_io__applicationlauncherjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ApplicationLauncherJob*
const char* k_io__applicationlauncherjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
uint64_t k_io__applicationlauncherjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
uint64_t k_io__applicationlauncherjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__ApplicationLauncherJob*
uint64_t k_io__applicationlauncherjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param autodelete bool
void k_io__applicationlauncherjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__ApplicationLauncherJob*
long long k_io__applicationlauncherjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param job KJob*
/// @param message const char*
void k_io__applicationlauncherjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, const char* message)
void k_io__applicationlauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param job KJob*
/// @param message const char*
void k_io__applicationlauncherjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, const char* message)
void k_io__applicationlauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__applicationlauncherjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, uint64_t size)
void k_io__applicationlauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__applicationlauncherjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, uint64_t size)
void k_io__applicationlauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__applicationlauncherjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, uint64_t speed)
void k_io__applicationlauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__applicationlauncherjob_tr2(const char* s, const char* c);

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__applicationlauncherjob_tr3(const char* s, const char* c, int n);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__applicationlauncherjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param hide bool
void k_io__applicationlauncherjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ApplicationLauncherJob*
const char* k_io__applicationlauncherjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param name char*
void k_io__applicationlauncherjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param b bool
bool k_io__applicationlauncherjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__ApplicationLauncherJob*
QThread* k_io__applicationlauncherjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param thread QThread*
bool k_io__applicationlauncherjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param interval int
int32_t k_io__applicationlauncherjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param id int
void k_io__applicationlauncherjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param id enum Qt__TimerId
void k_io__applicationlauncherjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__ApplicationLauncherJob*
libqt_list /* of QObject* */ k_io__applicationlauncherjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param parent QObject*
void k_io__applicationlauncherjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param filterObj QObject*
void k_io__applicationlauncherjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param obj QObject*
void k_io__applicationlauncherjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__applicationlauncherjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__applicationlauncherjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__applicationlauncherjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__applicationlauncherjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__applicationlauncherjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param name const char*
QVariant* k_io__applicationlauncherjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ApplicationLauncherJob*
const char** k_io__applicationlauncherjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ApplicationLauncherJob*
QBindingStorage* k_io__applicationlauncherjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ApplicationLauncherJob*
const QBindingStorage* k_io__applicationlauncherjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self)
void k_io__applicationlauncherjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__ApplicationLauncherJob*
QObject* k_io__applicationlauncherjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param classname const char*
bool k_io__applicationlauncherjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__applicationlauncherjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__applicationlauncherjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__applicationlauncherjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__applicationlauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param param1 QObject*
void k_io__applicationlauncherjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, QObject* param1)
void k_io__applicationlauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__applicationlauncherjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__applicationlauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback int32_t func(KIO__ApplicationLauncherJob* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_io__applicationlauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_qbase_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func()
void k_io__applicationlauncherjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_qbase_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func()
void k_io__applicationlauncherjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_qbase_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func()
void k_io__applicationlauncherjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
const char* k_io__applicationlauncherjob_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
const char* k_io__applicationlauncherjob_qbase_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback const char* func()
void k_io__applicationlauncherjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QEvent*
bool k_io__applicationlauncherjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QEvent*
bool k_io__applicationlauncherjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func(KIO__ApplicationLauncherJob* self, QEvent* event)
void k_io__applicationlauncherjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__applicationlauncherjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__applicationlauncherjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event)
void k_io__applicationlauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QTimerEvent*
void k_io__applicationlauncherjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QTimerEvent*
void k_io__applicationlauncherjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, QTimerEvent* event)
void k_io__applicationlauncherjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QChildEvent*
void k_io__applicationlauncherjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QChildEvent*
void k_io__applicationlauncherjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, QChildEvent* event)
void k_io__applicationlauncherjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QEvent*
void k_io__applicationlauncherjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param event QEvent*
void k_io__applicationlauncherjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, QEvent* event)
void k_io__applicationlauncherjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal QMetaMethod*
void k_io__applicationlauncherjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal QMetaMethod*
void k_io__applicationlauncherjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, QMetaMethod* signal)
void k_io__applicationlauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal QMetaMethod*
void k_io__applicationlauncherjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal QMetaMethod*
void k_io__applicationlauncherjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, QMetaMethod* signal)
void k_io__applicationlauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param capabilities flag of enum KJob__Capability
void k_io__applicationlauncherjob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param capabilities flag of enum KJob__Capability
void k_io__applicationlauncherjob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, flag of enum KJob__Capability capabilities)
void k_io__applicationlauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
bool k_io__applicationlauncherjob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func()
void k_io__applicationlauncherjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param errorCode int
void k_io__applicationlauncherjob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param errorCode int
void k_io__applicationlauncherjob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, int errorCode)
void k_io__applicationlauncherjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param errorText const char*
void k_io__applicationlauncherjob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param errorText const char*
void k_io__applicationlauncherjob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, const char* errorText)
void k_io__applicationlauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__applicationlauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__applicationlauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, enum KJob__Unit unit, uint64_t amount)
void k_io__applicationlauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__applicationlauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__applicationlauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, enum KJob__Unit unit, uint64_t amount)
void k_io__applicationlauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
void k_io__applicationlauncherjob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param unit enum KJob__Unit
void k_io__applicationlauncherjob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, enum KJob__Unit unit)
void k_io__applicationlauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param percentage uint64_t
void k_io__applicationlauncherjob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param percentage uint64_t
void k_io__applicationlauncherjob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, uint64_t percentage)
void k_io__applicationlauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func()
void k_io__applicationlauncherjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_io__applicationlauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_io__applicationlauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, uint64_t processedAmount, uint64_t totalAmount)
void k_io__applicationlauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param speed uint64_t
void k_io__applicationlauncherjob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param speed uint64_t
void k_io__applicationlauncherjob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, uint64_t speed)
void k_io__applicationlauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func()
void k_io__applicationlauncherjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
QObject* k_io__applicationlauncherjob_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
QObject* k_io__applicationlauncherjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback QObject* func()
void k_io__applicationlauncherjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
int32_t k_io__applicationlauncherjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
int32_t k_io__applicationlauncherjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback int32_t func()
void k_io__applicationlauncherjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal const char*
int32_t k_io__applicationlauncherjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal const char*
int32_t k_io__applicationlauncherjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback int32_t func(KIO__ApplicationLauncherJob* self, const char* signal)
void k_io__applicationlauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal QMetaMethod*
bool k_io__applicationlauncherjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param signal QMetaMethod*
bool k_io__applicationlauncherjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback bool func(KIO__ApplicationLauncherJob* self, QMetaMethod* signal)
void k_io__applicationlauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job)
void k_io__applicationlauncherjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job)
void k_io__applicationlauncherjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job)
void k_io__applicationlauncherjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job)
void k_io__applicationlauncherjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__applicationlauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__applicationlauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, KJob* job, uint64_t percent)
void k_io__applicationlauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ApplicationLauncherJob*
/// @param callback void func(KIO__ApplicationLauncherJob* self, const char* objectName)
void k_io__applicationlauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__ApplicationLauncherJob*
void k_io__applicationlauncherjob_delete(void* self);

/// https://api.kde.org/kio-applicationlauncherjob.html#types

typedef enum {
    KIO_APPLICATIONLAUNCHERJOB_RUNFLAG_DELETETEMPORARYFILES = 1
} KIO__ApplicationLauncherJob__RunFlag;

#endif
