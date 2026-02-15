#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBATTICABASEJOB_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBATTICABASEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-basejob.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Attica__BaseJob*
///
const QMetaObject* k_attica__basejob_meta_object(void* self);

/// @param self Attica__BaseJob*
/// @param param1 const char*
///
void* k_attica__basejob_metacast(void* self, const char* param1);

/// @param self Attica__BaseJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_attica__basejob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_attica__basejob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/attica-basejob.html#metadata)
///
/// @param self Attica__BaseJob*
///
Attica__Metadata* k_attica__basejob_metadata(void* self);

/// [Upstream resources](https://api.kde.org/attica-basejob.html#isAborted)
///
/// @param self Attica__BaseJob*
///
bool k_attica__basejob_is_aborted(void* self);

/// [Upstream resources](https://api.kde.org/attica-basejob.html#start)
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_start(void* self);

/// [Upstream resources](https://api.kde.org/attica-basejob.html#abort)
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_abort(void* self);

/// [Upstream resources](https://api.kde.org/attica-basejob.html#finished)
///
/// @param self Attica__BaseJob*
/// @param job Attica__BaseJob*
///
void k_attica__basejob_finished(void* self, void* job);

/// [Upstream resources](https://api.kde.org/attica-basejob.html#finished)
///
/// @param self Attica__BaseJob*
/// @param callback void func(Attica__BaseJob* self, Attica__BaseJob* job)
///
void k_attica__basejob_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_attica__basejob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_attica__basejob_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Attica__BaseJob*
/// @param event QEvent*
///
bool k_attica__basejob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Attica__BaseJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_attica__basejob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__BaseJob*
///
const char* k_attica__basejob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Attica__BaseJob*
/// @param name const char*
///
void k_attica__basejob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Attica__BaseJob*
///
bool k_attica__basejob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Attica__BaseJob*
///
bool k_attica__basejob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Attica__BaseJob*
///
bool k_attica__basejob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Attica__BaseJob*
///
bool k_attica__basejob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Attica__BaseJob*
/// @param b bool
///
bool k_attica__basejob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Attica__BaseJob*
///
QThread* k_attica__basejob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Attica__BaseJob*
/// @param thread QThread*
///
bool k_attica__basejob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__BaseJob*
/// @param interval int
///
int32_t k_attica__basejob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__BaseJob*
/// @param time int64_t of nanoseconds
///
int32_t k_attica__basejob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__BaseJob*
/// @param id int
///
void k_attica__basejob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__BaseJob*
/// @param id enum Qt__TimerId
///
void k_attica__basejob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Attica__BaseJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_attica__basejob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Attica__BaseJob*
/// @param parent QObject*
///
void k_attica__basejob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Attica__BaseJob*
/// @param filterObj QObject*
///
void k_attica__basejob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Attica__BaseJob*
/// @param obj QObject*
///
void k_attica__basejob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_attica__basejob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_attica__basejob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__BaseJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_attica__basejob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_attica__basejob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_attica__basejob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__BaseJob*
///
bool k_attica__basejob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__BaseJob*
/// @param receiver QObject*
///
bool k_attica__basejob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_attica__basejob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Attica__BaseJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_attica__basejob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Attica__BaseJob*
/// @param name const char*
///
QVariant* k_attica__basejob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Attica__BaseJob*
///
const char** k_attica__basejob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__BaseJob*
///
QBindingStorage* k_attica__basejob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__BaseJob*
///
const QBindingStorage* k_attica__basejob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__BaseJob*
/// @param callback void func(Attica__BaseJob* self)
///
void k_attica__basejob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Attica__BaseJob*
///
QObject* k_attica__basejob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Attica__BaseJob*
/// @param classname const char*
///
bool k_attica__basejob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__BaseJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_attica__basejob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__BaseJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_attica__basejob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_attica__basejob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_attica__basejob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__BaseJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_attica__basejob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__BaseJob*
/// @param signal const char*
///
bool k_attica__basejob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__BaseJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_attica__basejob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__BaseJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_attica__basejob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__BaseJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_attica__basejob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__BaseJob*
/// @param param1 QObject*
///
void k_attica__basejob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__BaseJob*
/// @param callback void func(Attica__BaseJob* self, QObject* param1)
///
void k_attica__basejob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Attica__BaseJob*
/// @param callback void func(Attica__BaseJob* self, const char* objectName)
///
void k_attica__basejob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Attica__BaseJob*
///
void k_attica__basejob_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-atticabasejob.html#public-types)

typedef enum {
    ATTICA_BASEJOB_NETWORKREQUESTCUSTOMATTRIBUTES_USERATTRIBUTE = 1001,
    ATTICA_BASEJOB_NETWORKREQUESTCUSTOMATTRIBUTES_PASSWORDATTRIBUTE = 1002
} Attica__BaseJob__NetworkRequestCustomAttributes;

#endif
