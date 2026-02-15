#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKLISTOPENFILESJOB_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKLISTOPENFILESJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html)

/// k_listopenfilesjob_new constructs a new KListOpenFilesJob object.
///
/// @param path const char*
///
KListOpenFilesJob* k_listopenfilesjob_new(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KListOpenFilesJob*
///
const QMetaObject* k_listopenfilesjob_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KListOpenFilesJob*
/// @param callback const QMetaObject* func()
///
void k_listopenfilesjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KListOpenFilesJob*
///
const QMetaObject* k_listopenfilesjob_qbase_meta_object(void* self);

/// @param self KListOpenFilesJob*
/// @param param1 const char*
///
void* k_listopenfilesjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KListOpenFilesJob*
/// @param callback void* func(KListOpenFilesJob* self, const char* param1)
///
void k_listopenfilesjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KListOpenFilesJob*
/// @param param1 const char*
///
void* k_listopenfilesjob_qbase_metacast(void* self, const char* param1);

/// @param self KListOpenFilesJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_listopenfilesjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KListOpenFilesJob*
/// @param callback int32_t func(KListOpenFilesJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_listopenfilesjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KListOpenFilesJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_listopenfilesjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_listopenfilesjob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html#start)
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_start(void* self);

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html#start)
///
/// Allows for overriding the related default method
///
/// @param self KListOpenFilesJob*
/// @param callback void func()
///
void k_listopenfilesjob_on_start(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html#start)
///
/// Base class method implementation
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_qbase_start(void* self);

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html#processInfoList)
///
/// @param self KListOpenFilesJob*
///
/// @return libqt_list of KProcessList__KProcessInfo*
///
libqt_list k_listopenfilesjob_process_info_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_listopenfilesjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_listopenfilesjob_tr3(const char* s, const char* c, int n);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KListOpenFilesJob*
/// @param delegate KJobUiDelegate*
///
void k_listopenfilesjob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KListOpenFilesJob*
///
KJobUiDelegate* k_listopenfilesjob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KListOpenFilesJob*
///
/// @return flag of enum KJob__Capability
///
int32_t k_listopenfilesjob_capabilities(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspend)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resume)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#exec)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#error)
///
/// @param self KListOpenFilesJob*
///
int32_t k_listopenfilesjob_error(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListOpenFilesJob*
///
const char* k_listopenfilesjob_error_text(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
///
uint64_t k_listopenfilesjob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
///
uint64_t k_listopenfilesjob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percent)
///
/// @param self KListOpenFilesJob*
///
uint64_t k_listopenfilesjob_percent(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KListOpenFilesJob*
/// @param autodelete bool
///
void k_listopenfilesjob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KListOpenFilesJob*
///
long long k_listopenfilesjob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KListOpenFilesJob*
/// @param job KJob*
/// @param message const char*
///
void k_listopenfilesjob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, const char* message)
///
void k_listopenfilesjob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KListOpenFilesJob*
/// @param job KJob*
/// @param message const char*
///
void k_listopenfilesjob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#warning)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, const char* message)
///
void k_listopenfilesjob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KListOpenFilesJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_listopenfilesjob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, uint64_t size)
///
void k_listopenfilesjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KListOpenFilesJob*
/// @param job KJob*
/// @param size uint64_t
///
void k_listopenfilesjob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, uint64_t size)
///
void k_listopenfilesjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KListOpenFilesJob*
/// @param job KJob*
/// @param speed uint64_t
///
void k_listopenfilesjob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#speed)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, uint64_t speed)
///
void k_listopenfilesjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#kill)
///
/// @param self KListOpenFilesJob*
/// @param verbosity enum KJob__KillVerbosity
///
bool k_listopenfilesjob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KListOpenFilesJob*
/// @param hide bool
///
void k_listopenfilesjob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListOpenFilesJob*
///
const char* k_listopenfilesjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KListOpenFilesJob*
/// @param name const char*
///
void k_listopenfilesjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KListOpenFilesJob*
/// @param b bool
///
bool k_listopenfilesjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KListOpenFilesJob*
///
QThread* k_listopenfilesjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KListOpenFilesJob*
/// @param thread QThread*
///
bool k_listopenfilesjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListOpenFilesJob*
/// @param interval int
///
int32_t k_listopenfilesjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListOpenFilesJob*
/// @param time int64_t of nanoseconds
///
int32_t k_listopenfilesjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KListOpenFilesJob*
/// @param id int
///
void k_listopenfilesjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KListOpenFilesJob*
/// @param id enum Qt__TimerId
///
void k_listopenfilesjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KListOpenFilesJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_listopenfilesjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KListOpenFilesJob*
/// @param parent QObject*
///
void k_listopenfilesjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KListOpenFilesJob*
/// @param filterObj QObject*
///
void k_listopenfilesjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KListOpenFilesJob*
/// @param obj QObject*
///
void k_listopenfilesjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_listopenfilesjob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_listopenfilesjob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KListOpenFilesJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_listopenfilesjob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_listopenfilesjob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_listopenfilesjob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListOpenFilesJob*
/// @param receiver QObject*
///
bool k_listopenfilesjob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_listopenfilesjob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KListOpenFilesJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_listopenfilesjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KListOpenFilesJob*
/// @param name const char*
///
QVariant* k_listopenfilesjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KListOpenFilesJob*
///
const char** k_listopenfilesjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KListOpenFilesJob*
///
QBindingStorage* k_listopenfilesjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KListOpenFilesJob*
///
const QBindingStorage* k_listopenfilesjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self)
///
void k_listopenfilesjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KListOpenFilesJob*
///
QObject* k_listopenfilesjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KListOpenFilesJob*
/// @param classname const char*
///
bool k_listopenfilesjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListOpenFilesJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_listopenfilesjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListOpenFilesJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_listopenfilesjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_listopenfilesjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_listopenfilesjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KListOpenFilesJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_listopenfilesjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListOpenFilesJob*
/// @param signal const char*
///
bool k_listopenfilesjob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListOpenFilesJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_listopenfilesjob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListOpenFilesJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_listopenfilesjob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListOpenFilesJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_listopenfilesjob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListOpenFilesJob*
/// @param param1 QObject*
///
void k_listopenfilesjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, QObject* param1)
///
void k_listopenfilesjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_do_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_qbase_do_kill(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func()
///
void k_listopenfilesjob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_do_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_qbase_do_suspend(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func()
///
void k_listopenfilesjob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_do_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_qbase_do_resume(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func()
///
void k_listopenfilesjob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
const char* k_listopenfilesjob_error_string(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
const char* k_listopenfilesjob_qbase_error_string(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback const char* func()
///
void k_listopenfilesjob_on_error_string(void* self, const char* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QEvent*
///
bool k_listopenfilesjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QEvent*
///
bool k_listopenfilesjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func(KListOpenFilesJob* self, QEvent* event)
///
void k_listopenfilesjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_listopenfilesjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_listopenfilesjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func(KListOpenFilesJob* self, QObject* watched, QEvent* event)
///
void k_listopenfilesjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QTimerEvent*
///
void k_listopenfilesjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QTimerEvent*
///
void k_listopenfilesjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, QTimerEvent* event)
///
void k_listopenfilesjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QChildEvent*
///
void k_listopenfilesjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QChildEvent*
///
void k_listopenfilesjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, QChildEvent* event)
///
void k_listopenfilesjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QEvent*
///
void k_listopenfilesjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param event QEvent*
///
void k_listopenfilesjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, QEvent* event)
///
void k_listopenfilesjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal QMetaMethod*
///
void k_listopenfilesjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal QMetaMethod*
///
void k_listopenfilesjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, QMetaMethod* signal)
///
void k_listopenfilesjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal QMetaMethod*
///
void k_listopenfilesjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal QMetaMethod*
///
void k_listopenfilesjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, QMetaMethod* signal)
///
void k_listopenfilesjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_listopenfilesjob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param capabilities flag of enum KJob__Capability
///
void k_listopenfilesjob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, flag of enum KJob__Capability capabilities)
///
void k_listopenfilesjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_is_finished(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
bool k_listopenfilesjob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func()
///
void k_listopenfilesjob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param errorCode int
///
void k_listopenfilesjob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param errorCode int
///
void k_listopenfilesjob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, int errorCode)
///
void k_listopenfilesjob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param errorText const char*
///
void k_listopenfilesjob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param errorText const char*
///
void k_listopenfilesjob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, const char* errorText)
///
void k_listopenfilesjob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_listopenfilesjob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_listopenfilesjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_listopenfilesjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_listopenfilesjob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
///
void k_listopenfilesjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, enum KJob__Unit unit, uint64_t amount)
///
void k_listopenfilesjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
///
void k_listopenfilesjob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param unit enum KJob__Unit
///
void k_listopenfilesjob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, enum KJob__Unit unit)
///
void k_listopenfilesjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param percentage uint64_t
///
void k_listopenfilesjob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param percentage uint64_t
///
void k_listopenfilesjob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, uint64_t percentage)
///
void k_listopenfilesjob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_emit_result(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func()
///
void k_listopenfilesjob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_listopenfilesjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
///
void k_listopenfilesjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, uint64_t processedAmount, uint64_t totalAmount)
///
void k_listopenfilesjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param speed uint64_t
///
void k_listopenfilesjob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param speed uint64_t
///
void k_listopenfilesjob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, uint64_t speed)
///
void k_listopenfilesjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback void func()
///
void k_listopenfilesjob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
QObject* k_listopenfilesjob_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
QObject* k_listopenfilesjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback QObject* func()
///
void k_listopenfilesjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
///
int32_t k_listopenfilesjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
///
int32_t k_listopenfilesjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback int32_t func()
///
void k_listopenfilesjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal const char*
///
int32_t k_listopenfilesjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal const char*
///
int32_t k_listopenfilesjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback int32_t func(KListOpenFilesJob* self, const char* signal)
///
void k_listopenfilesjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal QMetaMethod*
///
bool k_listopenfilesjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param signal QMetaMethod*
///
bool k_listopenfilesjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListOpenFilesJob*
/// @param callback bool func(KListOpenFilesJob* self, QMetaMethod* signal)
///
void k_listopenfilesjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job)
///
void k_listopenfilesjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job)
///
void k_listopenfilesjob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job)
///
void k_listopenfilesjob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job)
///
void k_listopenfilesjob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_listopenfilesjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
///
void k_listopenfilesjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, KJob* job, uint64_t percent)
///
void k_listopenfilesjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KListOpenFilesJob*
/// @param callback void func(KListOpenFilesJob* self, const char* objectName)
///
void k_listopenfilesjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html#dtor.KListOpenFilesJob)
///
/// Delete this object from C++ memory.
///
/// @param self KListOpenFilesJob*
///
void k_listopenfilesjob_delete(void* self);

/// [Upstream resources](https://api.kde.org/klistopenfilesjob.html#public-types)

typedef enum {
    KLISTOPENFILESJOB_ERROR_NOTSUPPORTED = 101,
    KLISTOPENFILESJOB_ERROR_INTERNALERROR = 102,
    KLISTOPENFILESJOB_ERROR_DOESNOTEXIST = 111
} KListOpenFilesJob__Error;

#endif
