#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJOBTRACKERINTERFACE_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJOBTRACKERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjobtrackerinterface.html)

/// k_jobtrackerinterface_new constructs a new KJobTrackerInterface object.
///
KJobTrackerInterface* k_jobtrackerinterface_new();

/// [Upstream resources](https://api.kde.org/kjobtrackerinterface.html)

/// k_jobtrackerinterface_new2 constructs a new KJobTrackerInterface object.
///
/// @param parent QObject*
///
KJobTrackerInterface* k_jobtrackerinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KJobTrackerInterface*
///
const QMetaObject* k_jobtrackerinterface_meta_object(void* self);

/// @param self KJobTrackerInterface*
/// @param param1 const char*
///
void* k_jobtrackerinterface_metacast(void* self, const char* param1);

/// @param self KJobTrackerInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_jobtrackerinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_jobtrackerinterface_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kjobtrackerinterface.html#registerJob)
///
/// @param self KJobTrackerInterface*
/// @param job KJob*
///
void k_jobtrackerinterface_register_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kjobtrackerinterface.html#unregisterJob)
///
/// @param self KJobTrackerInterface*
/// @param job KJob*
///
void k_jobtrackerinterface_unregister_job(void* self, void* job);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_jobtrackerinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_jobtrackerinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KJobTrackerInterface*
/// @param event QEvent*
///
bool k_jobtrackerinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KJobTrackerInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_jobtrackerinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KJobTrackerInterface*
///
const char* k_jobtrackerinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KJobTrackerInterface*
/// @param name char*
///
void k_jobtrackerinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KJobTrackerInterface*
///
bool k_jobtrackerinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KJobTrackerInterface*
///
bool k_jobtrackerinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KJobTrackerInterface*
///
bool k_jobtrackerinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KJobTrackerInterface*
///
bool k_jobtrackerinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KJobTrackerInterface*
/// @param b bool
///
bool k_jobtrackerinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KJobTrackerInterface*
///
QThread* k_jobtrackerinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KJobTrackerInterface*
/// @param thread QThread*
///
bool k_jobtrackerinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJobTrackerInterface*
/// @param interval int
///
int32_t k_jobtrackerinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJobTrackerInterface*
/// @param time int64_t of nanoseconds
///
int32_t k_jobtrackerinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KJobTrackerInterface*
/// @param id int
///
void k_jobtrackerinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KJobTrackerInterface*
/// @param id enum Qt__TimerId
///
void k_jobtrackerinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KJobTrackerInterface*
///
/// @return libqt_list of QObject*
///
libqt_list k_jobtrackerinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KJobTrackerInterface*
/// @param parent QObject*
///
void k_jobtrackerinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KJobTrackerInterface*
/// @param filterObj QObject*
///
void k_jobtrackerinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KJobTrackerInterface*
/// @param obj QObject*
///
void k_jobtrackerinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_jobtrackerinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KJobTrackerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_jobtrackerinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_jobtrackerinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_jobtrackerinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KJobTrackerInterface*
///
void k_jobtrackerinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KJobTrackerInterface*
///
void k_jobtrackerinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KJobTrackerInterface*
/// @param name const char*
/// @param value QVariant*
///
bool k_jobtrackerinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KJobTrackerInterface*
/// @param name const char*
///
QVariant* k_jobtrackerinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KJobTrackerInterface*
///
const char** k_jobtrackerinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KJobTrackerInterface*
///
QBindingStorage* k_jobtrackerinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KJobTrackerInterface*
///
const QBindingStorage* k_jobtrackerinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobTrackerInterface*
///
void k_jobtrackerinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobTrackerInterface*
/// @param callback void func(KJobTrackerInterface* self)
///
void k_jobtrackerinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KJobTrackerInterface*
///
QObject* k_jobtrackerinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KJobTrackerInterface*
/// @param classname const char*
///
bool k_jobtrackerinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KJobTrackerInterface*
///
void k_jobtrackerinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KJobTrackerInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_jobtrackerinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJobTrackerInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_jobtrackerinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KJobTrackerInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_jobtrackerinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_jobtrackerinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KJobTrackerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_jobtrackerinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobTrackerInterface*
/// @param param1 QObject*
///
void k_jobtrackerinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KJobTrackerInterface*
/// @param callback void func(KJobTrackerInterface* self, QObject* param1)
///
void k_jobtrackerinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KJobTrackerInterface*
/// @param callback void func(KJobTrackerInterface* self, const char* objectName)
///
void k_jobtrackerinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kjobtrackerinterface.html#dtor.KJobTrackerInterface)
///
/// Delete this object from C++ memory.
///
/// @param self KJobTrackerInterface*
///
void k_jobtrackerinterface_delete(void* self);

#endif
