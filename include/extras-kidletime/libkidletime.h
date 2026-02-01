#pragma once
#ifndef SRC_EXTRAS_KIDLETIME_QT6C_LIBKIDLETIME_H
#define SRC_EXTRAS_KIDLETIME_QT6C_LIBKIDLETIME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kidletime.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIdleTime*
///
const QMetaObject* k_idletime_meta_object(void* self);

/// @param self KIdleTime*
/// @param param1 const char*
///
void* k_idletime_metacast(void* self, const char* param1);

/// @param self KIdleTime*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_idletime_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_idletime_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kidletime.html#instance)
///
KIdleTime* k_idletime_instance();

/// [Upstream resources](https://api.kde.org/kidletime.html#idleTime)
///
/// @param self KIdleTime*
///
int32_t k_idletime_idle_time(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#idleTimeouts)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to int
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KIdleTime*
///
/// @return libqt_map of int to int
///
libqt_map k_idletime_idle_timeouts(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#simulateUserActivity)
///
/// @param self KIdleTime*
///
void k_idletime_simulate_user_activity(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#addIdleTimeout)
///
/// @param self KIdleTime*
/// @param msec int
///
int32_t k_idletime_add_idle_timeout(void* self, int msec);

/// [Upstream resources](https://api.kde.org/kidletime.html#addIdleTimeout)
///
/// @param self KIdleTime*
/// @param msec int64_t of milliseconds
///
int32_t k_idletime_add_idle_timeout2(void* self, int64_t msec);

/// [Upstream resources](https://api.kde.org/kidletime.html#removeIdleTimeout)
///
/// @param self KIdleTime*
/// @param identifier int
///
void k_idletime_remove_idle_timeout(void* self, int identifier);

/// [Upstream resources](https://api.kde.org/kidletime.html#removeAllIdleTimeouts)
///
/// @param self KIdleTime*
///
void k_idletime_remove_all_idle_timeouts(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#catchNextResumeEvent)
///
/// @param self KIdleTime*
///
void k_idletime_catch_next_resume_event(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#stopCatchingResumeEvent)
///
/// @param self KIdleTime*
///
void k_idletime_stop_catching_resume_event(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#resumingFromIdle)
///
/// @param self KIdleTime*
///
void k_idletime_resuming_from_idle(void* self);

/// [Upstream resources](https://api.kde.org/kidletime.html#resumingFromIdle)
///
/// @param self KIdleTime*
/// @param callback void func(KIdleTime* self)
///
void k_idletime_on_resuming_from_idle(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kidletime.html#timeoutReached)
///
/// @param self KIdleTime*
/// @param identifier int
/// @param msec int
///
void k_idletime_timeout_reached(void* self, int identifier, int msec);

/// [Upstream resources](https://api.kde.org/kidletime.html#timeoutReached)
///
/// @param self KIdleTime*
/// @param callback void func(KIdleTime* self, int identifier, int msec)
///
void k_idletime_on_timeout_reached(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_idletime_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_idletime_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIdleTime*
/// @param event QEvent*
///
bool k_idletime_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIdleTime*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_idletime_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIdleTime*
///
const char* k_idletime_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIdleTime*
/// @param name char*
///
void k_idletime_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIdleTime*
///
bool k_idletime_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIdleTime*
///
bool k_idletime_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIdleTime*
///
bool k_idletime_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIdleTime*
///
bool k_idletime_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIdleTime*
/// @param b bool
///
bool k_idletime_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIdleTime*
///
QThread* k_idletime_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIdleTime*
/// @param thread QThread*
///
bool k_idletime_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIdleTime*
/// @param interval int
///
int32_t k_idletime_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIdleTime*
/// @param time int64_t of nanoseconds
///
int32_t k_idletime_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIdleTime*
/// @param id int
///
void k_idletime_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIdleTime*
/// @param id enum Qt__TimerId
///
void k_idletime_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIdleTime*
///
/// @return libqt_list of QObject*
///
libqt_list k_idletime_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIdleTime*
/// @param parent QObject*
///
void k_idletime_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIdleTime*
/// @param filterObj QObject*
///
void k_idletime_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIdleTime*
/// @param obj QObject*
///
void k_idletime_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_idletime_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_idletime_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIdleTime*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_idletime_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_idletime_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_idletime_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIdleTime*
///
bool k_idletime_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIdleTime*
/// @param receiver QObject*
///
bool k_idletime_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_idletime_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIdleTime*
///
void k_idletime_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIdleTime*
///
void k_idletime_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIdleTime*
/// @param name const char*
/// @param value QVariant*
///
bool k_idletime_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIdleTime*
/// @param name const char*
///
QVariant* k_idletime_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIdleTime*
///
const char** k_idletime_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIdleTime*
///
QBindingStorage* k_idletime_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIdleTime*
///
const QBindingStorage* k_idletime_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIdleTime*
///
void k_idletime_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIdleTime*
/// @param callback void func(KIdleTime* self)
///
void k_idletime_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIdleTime*
///
QObject* k_idletime_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIdleTime*
/// @param classname const char*
///
bool k_idletime_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIdleTime*
///
void k_idletime_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIdleTime*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_idletime_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIdleTime*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_idletime_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_idletime_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_idletime_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIdleTime*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_idletime_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIdleTime*
/// @param signal const char*
///
bool k_idletime_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIdleTime*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_idletime_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIdleTime*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_idletime_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIdleTime*
/// @param receiver QObject*
/// @param member const char*
///
bool k_idletime_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIdleTime*
/// @param param1 QObject*
///
void k_idletime_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIdleTime*
/// @param callback void func(KIdleTime* self, QObject* param1)
///
void k_idletime_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIdleTime*
/// @param callback void func(KIdleTime* self, const char* objectName)
///
void k_idletime_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kidletime.html#dtor.KIdleTime)
///
/// Delete this object from C++ memory.
///
/// @param self KIdleTime*
///
void k_idletime_delete(void* self);

#endif
