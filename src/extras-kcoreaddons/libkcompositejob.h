#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKCOMPOSITEJOB_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKCOMPOSITEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcompositejob.html

/// k_compositejob_new constructs a new KCompositeJob object.
///
KCompositeJob* k_compositejob_new();

/// k_compositejob_new2 constructs a new KCompositeJob object.
///
/// @param parent QObject*
KCompositeJob* k_compositejob_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCompositeJob*
const QMetaObject* k_compositejob_meta_object(void* self);

/// @param self KCompositeJob*
/// @param param1 const char*
void* k_compositejob_metacast(void* self, const char* param1);

/// @param self KCompositeJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_compositejob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback int32_t func(KCompositeJob* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_compositejob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCompositeJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_compositejob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_compositejob_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#addSubjob)
///
/// @param self KCompositeJob*
/// @param job KJob*
bool k_compositejob_add_subjob(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#addSubjob)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback bool func(KCompositeJob* self, KJob* job)
void k_compositejob_on_add_subjob(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kcompositejob.html#addSubjob)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
/// @param job KJob*
bool k_compositejob_qbase_add_subjob(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#removeSubjob)
///
/// @param self KCompositeJob*
/// @param job KJob*
bool k_compositejob_remove_subjob(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#removeSubjob)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback bool func(KCompositeJob* self, KJob* job)
void k_compositejob_on_remove_subjob(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kcompositejob.html#removeSubjob)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
/// @param job KJob*
bool k_compositejob_qbase_remove_subjob(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// @param self KCompositeJob*
bool k_compositejob_has_subjobs(void* self);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback bool func()
void k_compositejob_on_has_subjobs(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
bool k_compositejob_qbase_has_subjobs(void* self);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
///
/// @param self KCompositeJob*
libqt_list /* of KJob* */ k_compositejob_subjobs(void* self);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback KJob** func()
void k_compositejob_on_subjobs(void* self, KJob** (*callback)());

/// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
libqt_list /* of KJob* */ k_compositejob_qbase_subjobs(void* self);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// @param self KCompositeJob*
void k_compositejob_clear_subjobs(void* self);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback void func()
void k_compositejob_on_clear_subjobs(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
void k_compositejob_qbase_clear_subjobs(void* self);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
///
/// @param self KCompositeJob*
/// @param job KJob*
void k_compositejob_slot_result(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job)
void k_compositejob_on_slot_result(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
/// @param job KJob*
void k_compositejob_qbase_slot_result(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param message const char*
void k_compositejob_slot_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Allows for overriding the related default method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, const char* message)
void k_compositejob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*));

/// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
///
/// Base class method implementation
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param message const char*
void k_compositejob_qbase_slot_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_compositejob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_compositejob_tr3(const char* s, const char* c, int n);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
///
/// @param self KCompositeJob*
/// @param delegate KJobUiDelegate*
void k_compositejob_set_ui_delegate(void* self, void* delegate);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
///
/// @param self KCompositeJob*
KJobUiDelegate* k_compositejob_ui_delegate(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
///
/// @param self KCompositeJob*
///
/// @return flag of enum KJob__Capability
int32_t k_compositejob_capabilities(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
///
/// @param self KCompositeJob*
bool k_compositejob_is_suspended(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KCompositeJob*
bool k_compositejob_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspend)
///
/// @param self KCompositeJob*
bool k_compositejob_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resume)
///
/// @param self KCompositeJob*
bool k_compositejob_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#exec)
///
/// @param self KCompositeJob*
bool k_compositejob_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#error)
///
/// @param self KCompositeJob*
int32_t k_compositejob_error(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompositeJob*
const char* k_compositejob_error_text(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
uint64_t k_compositejob_processed_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
uint64_t k_compositejob_total_amount(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percent)
///
/// @param self KCompositeJob*
uint64_t k_compositejob_percent(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
///
/// @param self KCompositeJob*
/// @param autodelete bool
void k_compositejob_set_auto_delete(void* self, bool autodelete);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
///
/// @param self KCompositeJob*
bool k_compositejob_is_auto_delete(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KCompositeJob*
void k_compositejob_set_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
///
/// @param self KCompositeJob*
bool k_compositejob_is_finished_notification_hidden(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
///
/// @param self KCompositeJob*
bool k_compositejob_is_started_with_exec(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
///
/// @param self KCompositeJob*
long long k_compositejob_elapsed_time(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param message const char*
void k_compositejob_info_message(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, const char* message)
void k_compositejob_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param message const char*
void k_compositejob_warning(void* self, void* job, const char* message);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#warning)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, const char* message)
void k_compositejob_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param size uint64_t
void k_compositejob_total_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, uint64_t size)
void k_compositejob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param size uint64_t
void k_compositejob_processed_size(void* self, void* job, uint64_t size);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, uint64_t size)
void k_compositejob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KCompositeJob*
/// @param job KJob*
/// @param speed uint64_t
void k_compositejob_speed(void* self, void* job, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#speed)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, uint64_t speed)
void k_compositejob_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#kill)
///
/// @param self KCompositeJob*
/// @param verbosity enum KJob__KillVerbosity
bool k_compositejob_kill1(void* self, int32_t verbosity);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
///
/// @param self KCompositeJob*
/// @param hide bool
void k_compositejob_set_finished_notification_hidden1(void* self, bool hide);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompositeJob*
const char* k_compositejob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCompositeJob*
/// @param name char*
void k_compositejob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCompositeJob*
bool k_compositejob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCompositeJob*
bool k_compositejob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCompositeJob*
bool k_compositejob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCompositeJob*
bool k_compositejob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCompositeJob*
/// @param b bool
bool k_compositejob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCompositeJob*
QThread* k_compositejob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCompositeJob*
/// @param thread QThread*
bool k_compositejob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompositeJob*
/// @param interval int
int32_t k_compositejob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompositeJob*
/// @param id int
void k_compositejob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompositeJob*
/// @param id enum Qt__TimerId
void k_compositejob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCompositeJob*
libqt_list /* of QObject* */ k_compositejob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCompositeJob*
/// @param parent QObject*
void k_compositejob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCompositeJob*
/// @param filterObj QObject*
void k_compositejob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCompositeJob*
/// @param obj QObject*
void k_compositejob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_compositejob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompositeJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_compositejob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_compositejob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_compositejob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCompositeJob*
void k_compositejob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCompositeJob*
void k_compositejob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCompositeJob*
/// @param name const char*
/// @param value QVariant*
bool k_compositejob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCompositeJob*
/// @param name const char*
QVariant* k_compositejob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompositeJob*
const char** k_compositejob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompositeJob*
QBindingStorage* k_compositejob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompositeJob*
const QBindingStorage* k_compositejob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompositeJob*
void k_compositejob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self)
void k_compositejob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCompositeJob*
QObject* k_compositejob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCompositeJob*
/// @param classname const char*
bool k_compositejob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCompositeJob*
void k_compositejob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCompositeJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_compositejob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompositeJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_compositejob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_compositejob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompositeJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_compositejob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompositeJob*
/// @param param1 QObject*
void k_compositejob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, QObject* param1)
void k_compositejob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#start)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
void k_compositejob_start(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#start)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
void k_compositejob_qbase_start(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#start)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func()
void k_compositejob_on_start(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_qbase_do_kill(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doKill)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func()
void k_compositejob_on_do_kill(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_qbase_do_suspend(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func()
void k_compositejob_on_do_suspend(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_qbase_do_resume(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#doResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func()
void k_compositejob_on_do_resume(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
const char* k_compositejob_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
const char* k_compositejob_qbase_error_string(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#errorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback const char* func()
void k_compositejob_on_error_string(void* self, const char* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QEvent*
bool k_compositejob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QEvent*
bool k_compositejob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func(KCompositeJob* self, QEvent* event)
void k_compositejob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_compositejob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_compositejob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func(KCompositeJob* self, QObject* watched, QEvent* event)
void k_compositejob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QTimerEvent*
void k_compositejob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QTimerEvent*
void k_compositejob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, QTimerEvent* event)
void k_compositejob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QChildEvent*
void k_compositejob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QChildEvent*
void k_compositejob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, QChildEvent* event)
void k_compositejob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QEvent*
void k_compositejob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param event QEvent*
void k_compositejob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, QEvent* event)
void k_compositejob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal QMetaMethod*
void k_compositejob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal QMetaMethod*
void k_compositejob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, QMetaMethod* signal)
void k_compositejob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal QMetaMethod*
void k_compositejob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal QMetaMethod*
void k_compositejob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, QMetaMethod* signal)
void k_compositejob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param capabilities flag of enum KJob__Capability
void k_compositejob_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param capabilities flag of enum KJob__Capability
void k_compositejob_qbase_set_capabilities(void* self, int32_t capabilities);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, flag of enum KJob__Capability capabilities)
void k_compositejob_on_set_capabilities(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
bool k_compositejob_qbase_is_finished(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func()
void k_compositejob_on_is_finished(void* self, bool (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param errorCode int
void k_compositejob_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param errorCode int
void k_compositejob_qbase_set_error(void* self, int errorCode);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, int errorCode)
void k_compositejob_on_set_error(void* self, void (*callback)(void*, int));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param errorText const char*
void k_compositejob_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param errorText const char*
void k_compositejob_qbase_set_error_text(void* self, const char* errorText);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, const char* errorText)
void k_compositejob_on_set_error_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_compositejob_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_compositejob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, enum KJob__Unit unit, uint64_t amount)
void k_compositejob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_compositejob_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_compositejob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, enum KJob__Unit unit, uint64_t amount)
void k_compositejob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
void k_compositejob_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param unit enum KJob__Unit
void k_compositejob_qbase_set_progress_unit(void* self, int32_t unit);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, enum KJob__Unit unit)
void k_compositejob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param percentage uint64_t
void k_compositejob_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param percentage uint64_t
void k_compositejob_qbase_set_percent(void* self, uint64_t percentage);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, uint64_t percentage)
void k_compositejob_on_set_percent(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
void k_compositejob_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
void k_compositejob_qbase_emit_result(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func()
void k_compositejob_on_emit_result(void* self, void (*callback)());

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_compositejob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param processedAmount uint64_t
/// @param totalAmount uint64_t
void k_compositejob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, uint64_t processedAmount, uint64_t totalAmount)
void k_compositejob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param speed uint64_t
void k_compositejob_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param speed uint64_t
void k_compositejob_qbase_emit_speed(void* self, uint64_t speed);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, uint64_t speed)
void k_compositejob_on_emit_speed(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
void k_compositejob_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
void k_compositejob_qbase_start_elapsed_timer(void* self);

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback void func()
void k_compositejob_on_start_elapsed_timer(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
QObject* k_compositejob_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
QObject* k_compositejob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback QObject* func()
void k_compositejob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
int32_t k_compositejob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
int32_t k_compositejob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback int32_t func()
void k_compositejob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal const char*
int32_t k_compositejob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal const char*
int32_t k_compositejob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback int32_t func(KCompositeJob* self, const char* signal)
void k_compositejob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal QMetaMethod*
bool k_compositejob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param signal QMetaMethod*
bool k_compositejob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompositeJob*
/// @param callback bool func(KCompositeJob* self, QMetaMethod* signal)
void k_compositejob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job)
void k_compositejob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#suspended)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job)
void k_compositejob_on_suspended(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#resumed)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job)
void k_compositejob_on_resumed(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#result)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job)
void k_compositejob_on_result(void* self, void (*callback)(void*, void*));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_compositejob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_compositejob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// Inherited from KJob
///
/// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, KJob* job, uint64_t percent)
void k_compositejob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompositeJob*
/// @param callback void func(KCompositeJob* self, const char* objectName)
void k_compositejob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kcompositejob.html#dtor.KCompositeJob)
///
/// Delete this object from C++ memory.
///
/// @param self KCompositeJob*
void k_compositejob_delete(void* self);

#endif
