#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETS_QT6C_LIBKUISERVERJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETS_QT6C_LIBKUISERVERJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kuiserverjobtracker.html)

/// k_uiserverjobtracker_new constructs a new KUiServerJobTracker object.
///
KUiServerJobTracker* k_uiserverjobtracker_new();

/// [Upstream resources](https://api.kde.org/kuiserverjobtracker.html)

/// k_uiserverjobtracker_new2 constructs a new KUiServerJobTracker object.
///
/// @param parent QObject*
///
KUiServerJobTracker* k_uiserverjobtracker_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUiServerJobTracker*
///
const QMetaObject* k_uiserverjobtracker_meta_object(void* self);

/// @param self KUiServerJobTracker*
/// @param param1 const char*
///
void* k_uiserverjobtracker_metacast(void* self, const char* param1);

/// @param self KUiServerJobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_uiserverjobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_uiserverjobtracker_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kuiserverjobtracker.html#registerJob)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
///
void k_uiserverjobtracker_register_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kuiserverjobtracker.html#unregisterJob)
///
/// @param self KUiServerJobTracker*
/// @param job KJob*
///
void k_uiserverjobtracker_unregister_job(void* self, void* job);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_uiserverjobtracker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_uiserverjobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KUiServerJobTracker*
/// @param event QEvent*
///
bool k_uiserverjobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KUiServerJobTracker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_uiserverjobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUiServerJobTracker*
///
const char* k_uiserverjobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUiServerJobTracker*
/// @param name const char*
///
void k_uiserverjobtracker_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUiServerJobTracker*
///
bool k_uiserverjobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUiServerJobTracker*
///
bool k_uiserverjobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUiServerJobTracker*
///
bool k_uiserverjobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUiServerJobTracker*
///
bool k_uiserverjobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUiServerJobTracker*
/// @param b bool
///
bool k_uiserverjobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUiServerJobTracker*
///
QThread* k_uiserverjobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUiServerJobTracker*
/// @param thread QThread*
///
bool k_uiserverjobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerJobTracker*
/// @param interval int
///
int32_t k_uiserverjobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerJobTracker*
/// @param time int64_t of nanoseconds
///
int32_t k_uiserverjobtracker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerJobTracker*
/// @param id int
///
void k_uiserverjobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerJobTracker*
/// @param id enum Qt__TimerId
///
void k_uiserverjobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUiServerJobTracker*
///
/// @return libqt_list of QObject*
///
libqt_list k_uiserverjobtracker_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUiServerJobTracker*
/// @param parent QObject*
///
void k_uiserverjobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUiServerJobTracker*
/// @param filterObj QObject*
///
void k_uiserverjobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUiServerJobTracker*
/// @param obj QObject*
///
void k_uiserverjobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_uiserverjobtracker_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_uiserverjobtracker_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_uiserverjobtracker_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_uiserverjobtracker_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_uiserverjobtracker_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerJobTracker*
///
bool k_uiserverjobtracker_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerJobTracker*
/// @param receiver QObject*
///
bool k_uiserverjobtracker_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_uiserverjobtracker_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUiServerJobTracker*
///
void k_uiserverjobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUiServerJobTracker*
///
void k_uiserverjobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUiServerJobTracker*
/// @param name const char*
/// @param value QVariant*
///
bool k_uiserverjobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUiServerJobTracker*
/// @param name const char*
///
QVariant* k_uiserverjobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUiServerJobTracker*
///
const char** k_uiserverjobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerJobTracker*
///
QBindingStorage* k_uiserverjobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerJobTracker*
///
const QBindingStorage* k_uiserverjobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
///
void k_uiserverjobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self)
///
void k_uiserverjobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUiServerJobTracker*
///
QObject* k_uiserverjobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUiServerJobTracker*
/// @param classname const char*
///
bool k_uiserverjobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUiServerJobTracker*
///
void k_uiserverjobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerJobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_uiserverjobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerJobTracker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_uiserverjobtracker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_uiserverjobtracker_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_uiserverjobtracker_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerJobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_uiserverjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerJobTracker*
/// @param signal const char*
///
bool k_uiserverjobtracker_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerJobTracker*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_uiserverjobtracker_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerJobTracker*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_uiserverjobtracker_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerJobTracker*
/// @param receiver QObject*
/// @param member const char*
///
bool k_uiserverjobtracker_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
/// @param param1 QObject*
///
void k_uiserverjobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, QObject* param1)
///
void k_uiserverjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUiServerJobTracker*
/// @param callback void func(KUiServerJobTracker* self, const char* objectName)
///
void k_uiserverjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kuiserverjobtracker.html#dtor.KUiServerJobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KUiServerJobTracker*
///
void k_uiserverjobtracker_delete(void* self);

#endif
