#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKTERMINALLAUNCHERJOB_H
#define SRC_EXTRAS_KIOQT6C_LIBKTERMINALLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kterminallauncherjob.html

/// k_terminallauncherjob_new constructs a new KTerminalLauncherJob object.
///
/// @param command const char*
KTerminalLauncherJob* k_terminallauncherjob_new(const char* command);

/// k_terminallauncherjob_new2 constructs a new KTerminalLauncherJob object.
///
/// @param command const char*
/// @param parent QObject*
KTerminalLauncherJob* k_terminallauncherjob_new2(const char* command, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTerminalLauncherJob*
const QMetaObject* k_terminallauncherjob_meta_object(void* self);

/// @param self KTerminalLauncherJob*
/// @param param1 const char*
void* k_terminallauncherjob_metacast(void* self, const char* param1);

/// @param self KTerminalLauncherJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_terminallauncherjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTerminalLauncherJob*
/// @param callback int32_t func(KTerminalLauncherJob* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_terminallauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTerminalLauncherJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_terminallauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_terminallauncherjob_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#setWorkingDirectory)
///
/// @param self KTerminalLauncherJob*
/// @param workingDirectory const char*
void k_terminallauncherjob_set_working_directory(void* self, const char* workingDirectory);

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#setStartupId)
///
/// @param self KTerminalLauncherJob*
/// @param startupId const char*
void k_terminallauncherjob_set_startup_id(void* self, const char* startupId);

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#setProcessEnvironment)
///
/// @param self KTerminalLauncherJob*
/// @param environment QProcessEnvironment*
void k_terminallauncherjob_set_process_environment(void* self, void* environment);

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#start)
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_start(void* self);

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#start)
///
/// Allows for overriding the related default method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func()
void k_terminallauncherjob_on_start(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#start)
///
/// Base class method implementation
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_qbase_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_terminallauncherjob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_terminallauncherjob_tr3(const char* s, const char* c, int n);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KTerminalLauncherJob*
/// @param delegate KJobUiDelegate*
void k_terminallauncherjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KTerminalLauncherJob*
KJobUiDelegate* k_terminallauncherjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KTerminalLauncherJob*
///
/// @return flag of enum KJob__Capability
int32_t k_terminallauncherjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KTerminalLauncherJob*
int32_t k_terminallauncherjob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTerminalLauncherJob*
const char* k_terminallauncherjob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
uint64_t k_terminallauncherjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
uint64_t k_terminallauncherjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KTerminalLauncherJob*
uint64_t k_terminallauncherjob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KTerminalLauncherJob*
/// @param autodelete bool
void k_terminallauncherjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KTerminalLauncherJob*
long long k_terminallauncherjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param title const char*
void k_terminallauncherjob_description(void* self, void* job, const char* title);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, const char* title)
void k_terminallauncherjob_on_description(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param message const char*
void k_terminallauncherjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, const char* message)
void k_terminallauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param message const char*
void k_terminallauncherjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, const char* message)
void k_terminallauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param size uint64_t
void k_terminallauncherjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, uint64_t size)
void k_terminallauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param size uint64_t
void k_terminallauncherjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, uint64_t size)
void k_terminallauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param speed uint64_t
void k_terminallauncherjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, uint64_t speed)
void k_terminallauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KTerminalLauncherJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_terminallauncherjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KTerminalLauncherJob*
/// @param hide bool
void k_terminallauncherjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
void k_terminallauncherjob_description3(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_terminallauncherjob_on_description3(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KTerminalLauncherJob*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_terminallauncherjob_description4(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#description)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_terminallauncherjob_on_description4(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTerminalLauncherJob*
const char* k_terminallauncherjob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTerminalLauncherJob*
/// @param name char*
void k_terminallauncherjob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTerminalLauncherJob*
/// @param b bool
bool k_terminallauncherjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTerminalLauncherJob*
QThread* k_terminallauncherjob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTerminalLauncherJob*
/// @param thread QThread*
bool k_terminallauncherjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTerminalLauncherJob*
/// @param interval int
int32_t k_terminallauncherjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTerminalLauncherJob*
/// @param id int
void k_terminallauncherjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTerminalLauncherJob*
/// @param id enum Qt__TimerId
void k_terminallauncherjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTerminalLauncherJob*
libqt_list /* of QObject* */ k_terminallauncherjob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTerminalLauncherJob*
/// @param parent QObject*
void k_terminallauncherjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTerminalLauncherJob*
/// @param filterObj QObject*
void k_terminallauncherjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTerminalLauncherJob*
/// @param obj QObject*
void k_terminallauncherjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_terminallauncherjob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTerminalLauncherJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_terminallauncherjob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_terminallauncherjob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_terminallauncherjob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTerminalLauncherJob*
/// @param name const char*
/// @param value QVariant*
bool k_terminallauncherjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTerminalLauncherJob*
/// @param name const char*
QVariant* k_terminallauncherjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTerminalLauncherJob*
const char** k_terminallauncherjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTerminalLauncherJob*
QBindingStorage* k_terminallauncherjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTerminalLauncherJob*
const QBindingStorage* k_terminallauncherjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self)
void k_terminallauncherjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTerminalLauncherJob*
QObject* k_terminallauncherjob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTerminalLauncherJob*
/// @param classname const char*
bool k_terminallauncherjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTerminalLauncherJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_terminallauncherjob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTerminalLauncherJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_terminallauncherjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_terminallauncherjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTerminalLauncherJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_terminallauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTerminalLauncherJob*
/// @param param1 QObject*
void k_terminallauncherjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, QObject* param1)
void k_terminallauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_qbase_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func()
void k_terminallauncherjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_qbase_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func()
void k_terminallauncherjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_qbase_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func()
void k_terminallauncherjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
const char* k_terminallauncherjob_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
const char* k_terminallauncherjob_qbase_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback const char* func()
void k_terminallauncherjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QEvent*
bool k_terminallauncherjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QEvent*
bool k_terminallauncherjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func(KTerminalLauncherJob* self, QEvent* event)
void k_terminallauncherjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_terminallauncherjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_terminallauncherjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func(KTerminalLauncherJob* self, QObject* watched, QEvent* event)
void k_terminallauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QTimerEvent*
void k_terminallauncherjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QTimerEvent*
void k_terminallauncherjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, QTimerEvent* event)
void k_terminallauncherjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QChildEvent*
void k_terminallauncherjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QChildEvent*
void k_terminallauncherjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, QChildEvent* event)
void k_terminallauncherjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QEvent*
void k_terminallauncherjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param event QEvent*
void k_terminallauncherjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, QEvent* event)
void k_terminallauncherjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal QMetaMethod*
void k_terminallauncherjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal QMetaMethod*
void k_terminallauncherjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, QMetaMethod* signal)
void k_terminallauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal QMetaMethod*
void k_terminallauncherjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal QMetaMethod*
void k_terminallauncherjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, QMetaMethod* signal)
void k_terminallauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param capabilities flag of enum KJob__Capability
void k_terminallauncherjob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param capabilities flag of enum KJob__Capability
void k_terminallauncherjob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, flag of enum KJob__Capability capabilities)
void k_terminallauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
bool k_terminallauncherjob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func()
void k_terminallauncherjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param errorCode int
void k_terminallauncherjob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param errorCode int
void k_terminallauncherjob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, int errorCode)
void k_terminallauncherjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param errorText const char*
void k_terminallauncherjob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param errorText const char*
void k_terminallauncherjob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, const char* errorText)
void k_terminallauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_terminallauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_terminallauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, enum KJob__Unit unit, uint64_t amount)
void k_terminallauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_terminallauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_terminallauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, enum KJob__Unit unit, uint64_t amount)
void k_terminallauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
void k_terminallauncherjob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param unit enum KJob__Unit
void k_terminallauncherjob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, enum KJob__Unit unit)
void k_terminallauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param percentage uint64_t
void k_terminallauncherjob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param percentage uint64_t
void k_terminallauncherjob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, uint64_t percentage)
void k_terminallauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func()
void k_terminallauncherjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_terminallauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_terminallauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, uint64_t processedAmount, uint64_t totalAmount)
void k_terminallauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param speed uint64_t
void k_terminallauncherjob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param speed uint64_t
void k_terminallauncherjob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, uint64_t speed)
void k_terminallauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback void func()
void k_terminallauncherjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
QObject* k_terminallauncherjob_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
QObject* k_terminallauncherjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback QObject* func()
void k_terminallauncherjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
int32_t k_terminallauncherjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
int32_t k_terminallauncherjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback int32_t func()
void k_terminallauncherjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal const char*
int32_t k_terminallauncherjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal const char*
int32_t k_terminallauncherjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback int32_t func(KTerminalLauncherJob* self, const char* signal)
void k_terminallauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal QMetaMethod*
bool k_terminallauncherjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param signal QMetaMethod*
bool k_terminallauncherjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTerminalLauncherJob*
/// @param callback bool func(KTerminalLauncherJob* self, QMetaMethod* signal)
void k_terminallauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job)
void k_terminallauncherjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job)
void k_terminallauncherjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job)
void k_terminallauncherjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job)
void k_terminallauncherjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_terminallauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_terminallauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, KJob* job, uint64_t percent)
void k_terminallauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTerminalLauncherJob*
/// @param callback void func(KTerminalLauncherJob* self, const char* objectName)
void k_terminallauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kterminallauncherjob.html#dtor.KTerminalLauncherJob)
///
/// Delete this object from C++ memory.
///
/// @param self KTerminalLauncherJob*
void k_terminallauncherjob_delete(void* self);

#endif
