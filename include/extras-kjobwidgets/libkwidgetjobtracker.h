#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSQT6C_LIBKWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kwidgetjobtracker.html

/// k_widgetjobtracker_new constructs a new KWidgetJobTracker object.
///
/// @param parent QWidget*
KWidgetJobTracker* k_widgetjobtracker_new(void* parent);

/// k_widgetjobtracker_new2 constructs a new KWidgetJobTracker object.
///
KWidgetJobTracker* k_widgetjobtracker_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KWidgetJobTracker*
const QMetaObject* k_widgetjobtracker_meta_object(void* self);

/// @param self KWidgetJobTracker*
/// @param param1 const char*
void* k_widgetjobtracker_metacast(void* self, const char* param1);

/// @param self KWidgetJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_widgetjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback int32_t func(KWidgetJobTracker* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_widgetjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_widgetjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_widgetjobtracker_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#widget)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
QWidget* k_widgetjobtracker_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback QWidget* func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#widget)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
QWidget* k_widgetjobtracker_qbase_widget(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#registerJob)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#registerJob)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_register_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#registerJob)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_register_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#unregisterJob)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#unregisterJob)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#unregisterJob)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_unregister_job(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#keepOpen)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
bool k_widgetjobtracker_keep_open(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#infoMessage)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_widgetjobtracker_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#infoMessage)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, const char* message)
void k_widgetjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#infoMessage)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_widgetjobtracker_qbase_info_message(void* self, void* job, const char* message);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#description)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_widgetjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#description)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, const char* title, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */ /* tuple of const char* and const char* */)
void k_widgetjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#description)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param title const char*
/// @param field1 libqt_pair /* tuple of const char* and const char* */
/// @param field2 libqt_pair /* tuple of const char* and const char* */
void k_widgetjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#totalAmount)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_widgetjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#totalAmount)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_widgetjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#totalAmount)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_widgetjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#processedAmount)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_widgetjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#processedAmount)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, enum KJob__Unit unit, uint64_t amount)
void k_widgetjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#processedAmount)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param unit enum KJob__Unit
/// @param amount uint64_t
void k_widgetjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#percent)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_widgetjobtracker_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#percent)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, uint64_t percent)
void k_widgetjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#percent)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param percent uint64_t
void k_widgetjobtracker_qbase_percent(void* self, void* job, uint64_t percent);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#speed)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_widgetjobtracker_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#speed)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, uint64_t value)
void k_widgetjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#speed)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param value uint64_t
void k_widgetjobtracker_qbase_speed(void* self, void* job, uint64_t value);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#slotClean)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_slot_clean(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#slotClean)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_slot_clean(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#slotClean)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_slot_clean(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#suspended)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_suspended(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#suspended)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_suspended(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#suspended)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_suspended(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#resumed)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_resumed(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#resumed)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_resumed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#resumed)
///
/// Base class method implementation
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_resumed(void* self, void* job);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_widgetjobtracker_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_widgetjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param stopOnClose bool
void k_widgetjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
bool k_widgetjobtracker_stop_on_close(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param autoDelete bool
void k_widgetjobtracker_set_auto_delete(void* self, void* job, bool autoDelete);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
bool k_widgetjobtracker_auto_delete(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_stopped(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_stopped(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_suspend(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_resume(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWidgetJobTracker*
const char* k_widgetjobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWidgetJobTracker*
/// @param name char*
void k_widgetjobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KWidgetJobTracker*
bool k_widgetjobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KWidgetJobTracker*
bool k_widgetjobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KWidgetJobTracker*
bool k_widgetjobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KWidgetJobTracker*
bool k_widgetjobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KWidgetJobTracker*
/// @param b bool
bool k_widgetjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KWidgetJobTracker*
QThread* k_widgetjobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWidgetJobTracker*
/// @param thread QThread*
bool k_widgetjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetJobTracker*
/// @param interval int
int32_t k_widgetjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWidgetJobTracker*
/// @param id int
void k_widgetjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWidgetJobTracker*
/// @param id enum Qt__TimerId
void k_widgetjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KWidgetJobTracker*
libqt_list /* of QObject* */ k_widgetjobtracker_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KWidgetJobTracker*
/// @param parent QObject*
void k_widgetjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KWidgetJobTracker*
/// @param filterObj QObject*
void k_widgetjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KWidgetJobTracker*
/// @param obj QObject*
void k_widgetjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_widgetjobtracker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_widgetjobtracker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_widgetjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_widgetjobtracker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KWidgetJobTracker*
void k_widgetjobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KWidgetJobTracker*
void k_widgetjobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWidgetJobTracker*
/// @param name const char*
/// @param value QVariant*
bool k_widgetjobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KWidgetJobTracker*
/// @param name const char*
QVariant* k_widgetjobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWidgetJobTracker*
const char** k_widgetjobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWidgetJobTracker*
QBindingStorage* k_widgetjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWidgetJobTracker*
const QBindingStorage* k_widgetjobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
void k_widgetjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self)
void k_widgetjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KWidgetJobTracker*
QObject* k_widgetjobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KWidgetJobTracker*
/// @param classname const char*
bool k_widgetjobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWidgetJobTracker*
void k_widgetjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWidgetJobTracker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_widgetjobtracker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_widgetjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_widgetjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWidgetJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_widgetjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
/// @param param1 QObject*
void k_widgetjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QObject* param1)
void k_widgetjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_finished(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_finished(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_slot_stop(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_slot_stop(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_slot_stop(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_slot_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_slot_suspend(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_slot_suspend(void* self, void (*callback)(void*, void*));

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_slot_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
void k_widgetjobtracker_qbase_slot_resume(void* self, void* job);

/// Inherited from KAbstractWidgetJobTracker
///
/// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job)
void k_widgetjobtracker_on_slot_resume(void* self, void (*callback)(void*, void*));

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_widgetjobtracker_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param job KJob*
/// @param message const char*
void k_widgetjobtracker_qbase_warning(void* self, void* job, const char* message);

/// Inherited from KJobTrackerInterface
///
/// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, KJob* job, const char* message)
void k_widgetjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QEvent*
bool k_widgetjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QEvent*
bool k_widgetjobtracker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback bool func(KWidgetJobTracker* self, QEvent* event)
void k_widgetjobtracker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_widgetjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param watched QObject*
/// @param event QEvent*
bool k_widgetjobtracker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback bool func(KWidgetJobTracker* self, QObject* watched, QEvent* event)
void k_widgetjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QTimerEvent*
void k_widgetjobtracker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QTimerEvent*
void k_widgetjobtracker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QTimerEvent* event)
void k_widgetjobtracker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QChildEvent*
void k_widgetjobtracker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QChildEvent*
void k_widgetjobtracker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QChildEvent* event)
void k_widgetjobtracker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QEvent*
void k_widgetjobtracker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param event QEvent*
void k_widgetjobtracker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QEvent* event)
void k_widgetjobtracker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal QMetaMethod*
void k_widgetjobtracker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal QMetaMethod*
void k_widgetjobtracker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QMetaMethod* signal)
void k_widgetjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal QMetaMethod*
void k_widgetjobtracker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal QMetaMethod*
void k_widgetjobtracker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, QMetaMethod* signal)
void k_widgetjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
QObject* k_widgetjobtracker_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
QObject* k_widgetjobtracker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback QObject* func()
void k_widgetjobtracker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
int32_t k_widgetjobtracker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
int32_t k_widgetjobtracker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback int32_t func()
void k_widgetjobtracker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal const char*
int32_t k_widgetjobtracker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal const char*
int32_t k_widgetjobtracker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback int32_t func(KWidgetJobTracker* self, const char* signal)
void k_widgetjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal QMetaMethod*
bool k_widgetjobtracker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param signal QMetaMethod*
bool k_widgetjobtracker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetJobTracker*
/// @param callback bool func(KWidgetJobTracker* self, QMetaMethod* signal)
void k_widgetjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KWidgetJobTracker*
/// @param callback void func(KWidgetJobTracker* self, const char* objectName)
void k_widgetjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kwidgetjobtracker.html#dtor.KWidgetJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KWidgetJobTracker*
void k_widgetjobtracker_delete(void* self);

#endif
