#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBCOMMANDLAUNCHERJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBCOMMANDLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-commandlauncherjob.html

/// k_io__commandlauncherjob_new constructs a new KIO::CommandLauncherJob object.
///
/// @param command const char*
KIO__CommandLauncherJob* k_io__commandlauncherjob_new(const char* command);

/// k_io__commandlauncherjob_new2 constructs a new KIO::CommandLauncherJob object.
///
/// @param executable const char*
/// @param args const char**
KIO__CommandLauncherJob* k_io__commandlauncherjob_new2(const char* executable, const char* args[static 1]);

/// k_io__commandlauncherjob_new3 constructs a new KIO::CommandLauncherJob object.
///
/// @param command const char*
/// @param parent QObject*
KIO__CommandLauncherJob* k_io__commandlauncherjob_new3(const char* command, void* parent);

/// k_io__commandlauncherjob_new4 constructs a new KIO::CommandLauncherJob object.
///
/// @param executable const char*
/// @param args const char**
/// @param parent QObject*
KIO__CommandLauncherJob* k_io__commandlauncherjob_new4(const char* executable, const char* args[static 1], void* parent);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#setCommand)
///
/// @param self KIO__CommandLauncherJob*
/// @param command const char*
void k_io__commandlauncherjob_set_command(void* self, const char* command);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#command)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CommandLauncherJob*
const char* k_io__commandlauncherjob_command(void* self);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#setExecutable)
///
/// @param self KIO__CommandLauncherJob*
/// @param executable const char*
void k_io__commandlauncherjob_set_executable(void* self, const char* executable);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#setDesktopName)
///
/// @param self KIO__CommandLauncherJob*
/// @param desktopName const char*
void k_io__commandlauncherjob_set_desktop_name(void* self, const char* desktopName);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#setStartupId)
///
/// @param self KIO__CommandLauncherJob*
/// @param startupId const char*
void k_io__commandlauncherjob_set_startup_id(void* self, const char* startupId);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#setWorkingDirectory)
///
/// @param self KIO__CommandLauncherJob*
/// @param workingDirectory const char*
void k_io__commandlauncherjob_set_working_directory(void* self, const char* workingDirectory);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#workingDirectory)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CommandLauncherJob*
const char* k_io__commandlauncherjob_working_directory(void* self);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#setProcessEnvironment)
///
/// @param self KIO__CommandLauncherJob*
/// @param environment QProcessEnvironment*
void k_io__commandlauncherjob_set_process_environment(void* self, void* environment);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#start)
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_start(void* self);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#start)
///
/// Allows for overriding the related default method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func()
void k_io__commandlauncherjob_on_start(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#start)
///
/// Base class method implementation
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_qbase_start(void* self);

/// [Qt documentation](https://api.kde.org/kio-commandlauncherjob.html#pid)
///
/// @param self KIO__CommandLauncherJob*
long long k_io__commandlauncherjob_pid(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__CommandLauncherJob*
const QMetaObject* k_io__commandlauncherjob_meta_object(void* self);

/// Inherited from KJob
///
/// @param self KIO__CommandLauncherJob*
/// @param param1 const char*
void* k_io__commandlauncherjob_metacast(void* self, const char* param1);

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__commandlauncherjob_tr(const char* s);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KIO__CommandLauncherJob*
/// @param delegate KJobUiDelegate*
void k_io__commandlauncherjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KIO__CommandLauncherJob*
KJobUiDelegate* k_io__commandlauncherjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KIO__CommandLauncherJob*
///
/// @return flag of enum KJob__Capability
int32_t k_io__commandlauncherjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KIO__CommandLauncherJob*
int32_t k_io__commandlauncherjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CommandLauncherJob*
const char* k_io__commandlauncherjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
uint64_t k_io__commandlauncherjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
uint64_t k_io__commandlauncherjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KIO__CommandLauncherJob*
uint64_t k_io__commandlauncherjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KIO__CommandLauncherJob*
/// @param autodelete bool
void k_io__commandlauncherjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KIO__CommandLauncherJob*
long long k_io__commandlauncherjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__CommandLauncherJob*
/// @param job KJob*
/// @param message const char*
void k_io__commandlauncherjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, const char* message)
void k_io__commandlauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__CommandLauncherJob*
/// @param job KJob*
/// @param message const char*
void k_io__commandlauncherjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, const char* message)
void k_io__commandlauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__CommandLauncherJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__commandlauncherjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, uint64_t size)
void k_io__commandlauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__CommandLauncherJob*
/// @param job KJob*
/// @param size uint64_t
void k_io__commandlauncherjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, uint64_t size)
void k_io__commandlauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__CommandLauncherJob*
/// @param job KJob*
/// @param speed uint64_t
void k_io__commandlauncherjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, uint64_t speed)
void k_io__commandlauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__commandlauncherjob_tr2(const char* s, const char* c);

/// Inherited from KJob
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__commandlauncherjob_tr3(const char* s, const char* c, int n);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KIO__CommandLauncherJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_io__commandlauncherjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KIO__CommandLauncherJob*
/// @param hide bool
void k_io__commandlauncherjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CommandLauncherJob*
const char* k_io__commandlauncherjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__CommandLauncherJob*
/// @param name char*
void k_io__commandlauncherjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__CommandLauncherJob*
/// @param b bool
bool k_io__commandlauncherjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__CommandLauncherJob*
QThread* k_io__commandlauncherjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__CommandLauncherJob*
/// @param thread QThread*
bool k_io__commandlauncherjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__CommandLauncherJob*
/// @param interval int
int32_t k_io__commandlauncherjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__CommandLauncherJob*
/// @param id int
void k_io__commandlauncherjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__CommandLauncherJob*
/// @param id enum Qt__TimerId
void k_io__commandlauncherjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__CommandLauncherJob*
libqt_list /* of QObject* */ k_io__commandlauncherjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__CommandLauncherJob*
/// @param parent QObject*
void k_io__commandlauncherjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__CommandLauncherJob*
/// @param filterObj QObject*
void k_io__commandlauncherjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__CommandLauncherJob*
/// @param obj QObject*
void k_io__commandlauncherjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__commandlauncherjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__CommandLauncherJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__commandlauncherjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__commandlauncherjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__commandlauncherjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__CommandLauncherJob*
/// @param name const char*
/// @param value QVariant*
bool k_io__commandlauncherjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__CommandLauncherJob*
/// @param name const char*
QVariant* k_io__commandlauncherjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__CommandLauncherJob*
const char** k_io__commandlauncherjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__CommandLauncherJob*
QBindingStorage* k_io__commandlauncherjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__CommandLauncherJob*
const QBindingStorage* k_io__commandlauncherjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self)
void k_io__commandlauncherjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__CommandLauncherJob*
QObject* k_io__commandlauncherjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__CommandLauncherJob*
/// @param classname const char*
bool k_io__commandlauncherjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__CommandLauncherJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__commandlauncherjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__CommandLauncherJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__commandlauncherjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__commandlauncherjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__CommandLauncherJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__commandlauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CommandLauncherJob*
/// @param param1 QObject*
void k_io__commandlauncherjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, QObject* param1)
void k_io__commandlauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__commandlauncherjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__commandlauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback int32_t func(KIO__CommandLauncherJob* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_io__commandlauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_qbase_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func()
void k_io__commandlauncherjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_qbase_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func()
void k_io__commandlauncherjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_qbase_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func()
void k_io__commandlauncherjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
const char* k_io__commandlauncherjob_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
const char* k_io__commandlauncherjob_qbase_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback const char* func()
void k_io__commandlauncherjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QEvent*
bool k_io__commandlauncherjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QEvent*
bool k_io__commandlauncherjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func(KIO__CommandLauncherJob* self, QEvent* event)
void k_io__commandlauncherjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__commandlauncherjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__commandlauncherjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event)
void k_io__commandlauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QTimerEvent*
void k_io__commandlauncherjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QTimerEvent*
void k_io__commandlauncherjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, QTimerEvent* event)
void k_io__commandlauncherjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QChildEvent*
void k_io__commandlauncherjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QChildEvent*
void k_io__commandlauncherjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, QChildEvent* event)
void k_io__commandlauncherjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QEvent*
void k_io__commandlauncherjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param event QEvent*
void k_io__commandlauncherjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, QEvent* event)
void k_io__commandlauncherjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal QMetaMethod*
void k_io__commandlauncherjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal QMetaMethod*
void k_io__commandlauncherjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, QMetaMethod* signal)
void k_io__commandlauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal QMetaMethod*
void k_io__commandlauncherjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal QMetaMethod*
void k_io__commandlauncherjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, QMetaMethod* signal)
void k_io__commandlauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param capabilities flag of enum KJob__Capability
void k_io__commandlauncherjob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param capabilities flag of enum KJob__Capability
void k_io__commandlauncherjob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, flag of enum KJob__Capability capabilities)
void k_io__commandlauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
bool k_io__commandlauncherjob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func()
void k_io__commandlauncherjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param errorCode int
void k_io__commandlauncherjob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param errorCode int
void k_io__commandlauncherjob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, int errorCode)
void k_io__commandlauncherjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param errorText const char*
void k_io__commandlauncherjob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param errorText const char*
void k_io__commandlauncherjob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, const char* errorText)
void k_io__commandlauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__commandlauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__commandlauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, enum KJob__Unit unit, uint64_t amount)
void k_io__commandlauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__commandlauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_io__commandlauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, enum KJob__Unit unit, uint64_t amount)
void k_io__commandlauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
void k_io__commandlauncherjob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param unit enum KJob__Unit
void k_io__commandlauncherjob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, enum KJob__Unit unit)
void k_io__commandlauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param percentage uint64_t
void k_io__commandlauncherjob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param percentage uint64_t
void k_io__commandlauncherjob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, uint64_t percentage)
void k_io__commandlauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func()
void k_io__commandlauncherjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_io__commandlauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_io__commandlauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, uint64_t processedAmount, uint64_t totalAmount)
void k_io__commandlauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param speed uint64_t
void k_io__commandlauncherjob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param speed uint64_t
void k_io__commandlauncherjob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, uint64_t speed)
void k_io__commandlauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func()
void k_io__commandlauncherjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
QObject* k_io__commandlauncherjob_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
QObject* k_io__commandlauncherjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback QObject* func()
void k_io__commandlauncherjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
int32_t k_io__commandlauncherjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
int32_t k_io__commandlauncherjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback int32_t func()
void k_io__commandlauncherjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal const char*
int32_t k_io__commandlauncherjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal const char*
int32_t k_io__commandlauncherjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback int32_t func(KIO__CommandLauncherJob* self, const char* signal)
void k_io__commandlauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal QMetaMethod*
bool k_io__commandlauncherjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param signal QMetaMethod*
bool k_io__commandlauncherjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__CommandLauncherJob*
/// @param callback bool func(KIO__CommandLauncherJob* self, QMetaMethod* signal)
void k_io__commandlauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job)
void k_io__commandlauncherjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job)
void k_io__commandlauncherjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job)
void k_io__commandlauncherjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job)
void k_io__commandlauncherjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__commandlauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_io__commandlauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, KJob* job, uint64_t percent)
void k_io__commandlauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__CommandLauncherJob*
/// @param callback void func(KIO__CommandLauncherJob* self, const char* objectName)
void k_io__commandlauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__CommandLauncherJob*
void k_io__commandlauncherjob_delete(void* self);

#endif
