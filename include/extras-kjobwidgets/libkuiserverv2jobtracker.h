#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETS_QT6C_LIBKUISERVERV2JOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETS_QT6C_LIBKUISERVERV2JOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kuiserverv2jobtracker.html)

/// k_uiserverv2jobtracker_new constructs a new KUiServerV2JobTracker object.
///
KUiServerV2JobTracker* k_uiserverv2jobtracker_new();

/// [Upstream resources](https://api.kde.org/kuiserverv2jobtracker.html)

/// k_uiserverv2jobtracker_new2 constructs a new KUiServerV2JobTracker object.
///
/// @param parent QObject*
///
KUiServerV2JobTracker* k_uiserverv2jobtracker_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUiServerV2JobTracker*
///
const QMetaObject* k_uiserverv2jobtracker_meta_object(void* self);

/// @param self KUiServerV2JobTracker*
/// @param param1 const char*
///
void* k_uiserverv2jobtracker_metacast(void* self, const char* param1);

/// @param self KUiServerV2JobTracker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_uiserverv2jobtracker_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_uiserverv2jobtracker_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kuiserverv2jobtracker.html#registerJob)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
///
void k_uiserverv2jobtracker_register_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kuiserverv2jobtracker.html#unregisterJob)
///
/// @param self KUiServerV2JobTracker*
/// @param job KJob*
///
void k_uiserverv2jobtracker_unregister_job(void* self, void* job);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_uiserverv2jobtracker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_uiserverv2jobtracker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KUiServerV2JobTracker*
/// @param event QEvent*
///
bool k_uiserverv2jobtracker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KUiServerV2JobTracker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_uiserverv2jobtracker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUiServerV2JobTracker*
///
const char* k_uiserverv2jobtracker_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUiServerV2JobTracker*
/// @param name char*
///
void k_uiserverv2jobtracker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUiServerV2JobTracker*
///
bool k_uiserverv2jobtracker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUiServerV2JobTracker*
///
bool k_uiserverv2jobtracker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUiServerV2JobTracker*
///
bool k_uiserverv2jobtracker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUiServerV2JobTracker*
///
bool k_uiserverv2jobtracker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUiServerV2JobTracker*
/// @param b bool
///
bool k_uiserverv2jobtracker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUiServerV2JobTracker*
///
QThread* k_uiserverv2jobtracker_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUiServerV2JobTracker*
/// @param thread QThread*
///
bool k_uiserverv2jobtracker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param interval int
///
int32_t k_uiserverv2jobtracker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param time int64_t of nanoseconds
///
int32_t k_uiserverv2jobtracker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param id int
///
void k_uiserverv2jobtracker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param id enum Qt__TimerId
///
void k_uiserverv2jobtracker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUiServerV2JobTracker*
///
/// @return libqt_list of QObject*
///
libqt_list k_uiserverv2jobtracker_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUiServerV2JobTracker*
/// @param parent QObject*
///
void k_uiserverv2jobtracker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUiServerV2JobTracker*
/// @param filterObj QObject*
///
void k_uiserverv2jobtracker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUiServerV2JobTracker*
/// @param obj QObject*
///
void k_uiserverv2jobtracker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_uiserverv2jobtracker_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_uiserverv2jobtracker_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerV2JobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_uiserverv2jobtracker_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_uiserverv2jobtracker_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_uiserverv2jobtracker_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerV2JobTracker*
///
bool k_uiserverv2jobtracker_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerV2JobTracker*
/// @param receiver QObject*
///
bool k_uiserverv2jobtracker_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_uiserverv2jobtracker_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUiServerV2JobTracker*
///
void k_uiserverv2jobtracker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUiServerV2JobTracker*
///
void k_uiserverv2jobtracker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUiServerV2JobTracker*
/// @param name const char*
/// @param value QVariant*
///
bool k_uiserverv2jobtracker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUiServerV2JobTracker*
/// @param name const char*
///
QVariant* k_uiserverv2jobtracker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUiServerV2JobTracker*
///
const char** k_uiserverv2jobtracker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerV2JobTracker*
///
QBindingStorage* k_uiserverv2jobtracker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUiServerV2JobTracker*
///
const QBindingStorage* k_uiserverv2jobtracker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
///
void k_uiserverv2jobtracker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self)
///
void k_uiserverv2jobtracker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUiServerV2JobTracker*
///
QObject* k_uiserverv2jobtracker_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUiServerV2JobTracker*
/// @param classname const char*
///
bool k_uiserverv2jobtracker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUiServerV2JobTracker*
///
void k_uiserverv2jobtracker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_uiserverv2jobtracker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUiServerV2JobTracker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_uiserverv2jobtracker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_uiserverv2jobtracker_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_uiserverv2jobtracker_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUiServerV2JobTracker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_uiserverv2jobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerV2JobTracker*
/// @param signal const char*
///
bool k_uiserverv2jobtracker_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerV2JobTracker*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_uiserverv2jobtracker_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerV2JobTracker*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_uiserverv2jobtracker_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KUiServerV2JobTracker*
/// @param receiver QObject*
/// @param member const char*
///
bool k_uiserverv2jobtracker_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
/// @param param1 QObject*
///
void k_uiserverv2jobtracker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, QObject* param1)
///
void k_uiserverv2jobtracker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUiServerV2JobTracker*
/// @param callback void func(KUiServerV2JobTracker* self, const char* objectName)
///
void k_uiserverv2jobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kuiserverv2jobtracker.html#dtor.KUiServerV2JobTracker)
///
/// Delete this object from C++ memory.
///
/// @param self KUiServerV2JobTracker*
///
void k_uiserverv2jobtracker_delete(void* self);

#endif
