#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKUISERVERV2JOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKUISERVERV2JOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kuiserverv2jobtracker.html

/// k_uiserverv2jobtracker_new constructs a new KUiServerV2JobTracker object.
///
KUiServerV2JobTracker* k_uiserverv2jobtracker_new();

/// k_uiserverv2jobtracker_new2 constructs a new KUiServerV2JobTracker object.
///
/// @param parent QObject*
KUiServerV2JobTracker* k_uiserverv2jobtracker_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUiServerV2JobTracker*
const QMetaObject* k_uiserverv2jobtracker_meta_object(void* self);

/// @param self KUiServerV2JobTracker*
/// @param param1 const char*
void* k_uiserverv2jobtracker_metacast(void* self, const char* param1);

/// @param self KUiServerV2JobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_uiserverv2jobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback int32_t func(KUiServerV2JobTracker* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_uiserverv2jobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_uiserverv2jobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_uiserverv2jobtracker_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#registerJob)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#registerJob)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job)
void k_uiserverv2jobtracker_on_register_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#registerJob)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_qbase_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#unregisterJob)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#unregisterJob)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job)
void k_uiserverv2jobtracker_on_unregister_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#unregisterJob)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_qbase_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#finished)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_finished(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#finished)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job)
void k_uiserverv2jobtracker_on_finished(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#finished)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_qbase_finished(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#suspended)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_suspended(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#suspended)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job)
void k_uiserverv2jobtracker_on_suspended(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#suspended)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_qbase_suspended(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#resumed)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_resumed(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#resumed)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job)
void k_uiserverv2jobtracker_on_resumed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#resumed)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
void k_uiserverv2jobtracker_qbase_resumed(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#description)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_uiserverv2jobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#description)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_uiserverv2jobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#description)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_uiserverv2jobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#infoMessage)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverv2jobtracker_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#infoMessage)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, const char* message)
void k_uiserverv2jobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#infoMessage)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverv2jobtracker_qbase_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#totalAmount)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverv2jobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#totalAmount)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_uiserverv2jobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#totalAmount)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverv2jobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#processedAmount)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverv2jobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#processedAmount)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_uiserverv2jobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#processedAmount)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_uiserverv2jobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#percent)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_uiserverv2jobtracker_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#percent)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, uint64_t percent)
void k_uiserverv2jobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#percent)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_uiserverv2jobtracker_qbase_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#speed)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_uiserverv2jobtracker_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#speed)
///
/// Allows for overriding the related default method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, uint64_t value)
void k_uiserverv2jobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#speed)
///
/// Base class method implementation
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_uiserverv2jobtracker_qbase_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_uiserverv2jobtracker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_uiserverv2jobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUiServerV2JobTracker*
const char* k_uiserverv2jobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUiServerV2JobTracker*
/// @param name char*
void k_uiserverv2jobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUiServerV2JobTracker*
bool k_uiserverv2jobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUiServerV2JobTracker*
bool k_uiserverv2jobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUiServerV2JobTracker*
bool k_uiserverv2jobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUiServerV2JobTracker*
bool k_uiserverv2jobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUiServerV2JobTracker*
/// @param b bool
bool k_uiserverv2jobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUiServerV2JobTracker*
QThread* k_uiserverv2jobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUiServerV2JobTracker*
/// @param thread QThread*
bool k_uiserverv2jobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param interval int
int32_t k_uiserverv2jobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param id int
void k_uiserverv2jobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param id enum Qt__TimerId
void k_uiserverv2jobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUiServerV2JobTracker*
libqt_list /* of QObject* */ k_uiserverv2jobtracker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUiServerV2JobTracker*
/// @param parent QObject*
void k_uiserverv2jobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUiServerV2JobTracker*
/// @param filterObj QObject*
void k_uiserverv2jobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUiServerV2JobTracker*
/// @param obj QObject*
void k_uiserverv2jobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_uiserverv2jobtracker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerV2JobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_uiserverv2jobtracker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_uiserverv2jobtracker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_uiserverv2jobtracker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUiServerV2JobTracker*
void k_uiserverv2jobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUiServerV2JobTracker*
void k_uiserverv2jobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUiServerV2JobTracker*
/// @param name const char*
/// @param value QVariant*
bool k_uiserverv2jobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUiServerV2JobTracker*
/// @param name const char*
QVariant* k_uiserverv2jobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUiServerV2JobTracker*
const char** k_uiserverv2jobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerV2JobTracker*
QBindingStorage* k_uiserverv2jobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerV2JobTracker*
const QBindingStorage* k_uiserverv2jobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
void k_uiserverv2jobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self)
void k_uiserverv2jobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUiServerV2JobTracker*
QObject* k_uiserverv2jobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUiServerV2JobTracker*
/// @param classname const char*
bool k_uiserverv2jobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUiServerV2JobTracker*
void k_uiserverv2jobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUiServerV2JobTracker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_uiserverv2jobtracker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_uiserverv2jobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_uiserverv2jobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerV2JobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_uiserverv2jobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
/// @param param1 QObject*
void k_uiserverv2jobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QObject* param1)
void k_uiserverv2jobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverv2jobtracker_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
/// @param message const char*
void k_uiserverv2jobtracker_qbase_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, KJob* job, const char* message)
void k_uiserverv2jobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QEvent*
bool k_uiserverv2jobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QEvent*
bool k_uiserverv2jobtracker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback bool func(KUiServerV2JobTracker* self, QEvent* event)
void k_uiserverv2jobtracker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_uiserverv2jobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_uiserverv2jobtracker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback bool func(KUiServerV2JobTracker* self, QObject* watched, QEvent* event)
void k_uiserverv2jobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QTimerEvent*
void k_uiserverv2jobtracker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QTimerEvent*
void k_uiserverv2jobtracker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QTimerEvent* event)
void k_uiserverv2jobtracker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QChildEvent*
void k_uiserverv2jobtracker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QChildEvent*
void k_uiserverv2jobtracker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QChildEvent* event)
void k_uiserverv2jobtracker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QEvent*
void k_uiserverv2jobtracker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param event QEvent*
void k_uiserverv2jobtracker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QEvent* event)
void k_uiserverv2jobtracker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal QMetaMethod*
void k_uiserverv2jobtracker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal QMetaMethod*
void k_uiserverv2jobtracker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QMetaMethod* signal)
void k_uiserverv2jobtracker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal QMetaMethod*
void k_uiserverv2jobtracker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal QMetaMethod*
void k_uiserverv2jobtracker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QMetaMethod* signal)
void k_uiserverv2jobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
QObject* k_uiserverv2jobtracker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
QObject* k_uiserverv2jobtracker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback QObject* func()
void k_uiserverv2jobtracker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
int32_t k_uiserverv2jobtracker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
int32_t k_uiserverv2jobtracker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback int32_t func()
void k_uiserverv2jobtracker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal const char*
int32_t k_uiserverv2jobtracker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal const char*
int32_t k_uiserverv2jobtracker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback int32_t func(KUiServerV2JobTracker* self, const char* signal)
void k_uiserverv2jobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal QMetaMethod*
bool k_uiserverv2jobtracker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param signal QMetaMethod*
bool k_uiserverv2jobtracker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUiServerV2JobTracker*
/// @param callback bool func(KUiServerV2JobTracker* self, QMetaMethod* signal)
void k_uiserverv2jobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, const char* objectName)
void k_uiserverv2jobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kuiserverv2jobtracker.html#dtor.KUiServerV2JobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KUiServerV2JobTracker*
void k_uiserverv2jobtracker_delete(void* self);

#endif
