#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBDELETEJOB_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBDELETEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-deletejob.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Attica__DeleteJob*
const QMetaObject* k_attica__deletejob_meta_object(void* self);

/// @param self Attica__DeleteJob*
/// @param param1 const char*
void* k_attica__deletejob_metacast(void* self, const char* param1);

/// @param self Attica__DeleteJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_attica__deletejob_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_attica__deletejob_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_attica__deletejob_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_attica__deletejob_tr3(const char* s, const char* c, int n);

/// Inherited from Attica::BaseJob
///
/// [Qt documentation](https://api.kde.org/attica-basejob.html#metadata)
///
/// @param self Attica__DeleteJob*
Attica__Metadata* k_attica__deletejob_metadata(void* self);

/// Inherited from Attica::BaseJob
///
/// [Qt documentation](https://api.kde.org/attica-basejob.html#isAborted)
///
/// @param self Attica__DeleteJob*
bool k_attica__deletejob_is_aborted(void* self);

/// Inherited from Attica::BaseJob
///
/// [Qt documentation](https://api.kde.org/attica-basejob.html#start)
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_start(void* self);

/// Inherited from Attica::BaseJob
///
/// [Qt documentation](https://api.kde.org/attica-basejob.html#abort)
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_abort(void* self);

/// Inherited from Attica::BaseJob
///
/// [Qt documentation](https://api.kde.org/attica-basejob.html#finished)
///
/// @param self Attica__DeleteJob*
/// @param job Attica__BaseJob*
void k_attica__deletejob_finished(void* self, void* job);

/// Inherited from Attica::BaseJob
///
/// [Qt documentation](https://api.kde.org/attica-basejob.html#finished)
///
/// @param self Attica__DeleteJob*
/// @param callback void func(Attica__DeleteJob* self, Attica__BaseJob* job)
void k_attica__deletejob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Attica__DeleteJob*
/// @param event QEvent*
bool k_attica__deletejob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Attica__DeleteJob*
/// @param watched QObject*
/// @param event QEvent*
bool k_attica__deletejob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DeleteJob*
const char* k_attica__deletejob_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Attica__DeleteJob*
/// @param name char*
void k_attica__deletejob_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Attica__DeleteJob*
bool k_attica__deletejob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Attica__DeleteJob*
bool k_attica__deletejob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Attica__DeleteJob*
bool k_attica__deletejob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Attica__DeleteJob*
bool k_attica__deletejob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Attica__DeleteJob*
/// @param b bool
bool k_attica__deletejob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Attica__DeleteJob*
QThread* k_attica__deletejob_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Attica__DeleteJob*
/// @param thread QThread*
bool k_attica__deletejob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__DeleteJob*
/// @param interval int
int32_t k_attica__deletejob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__DeleteJob*
/// @param id int
void k_attica__deletejob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__DeleteJob*
/// @param id enum Qt__TimerId
void k_attica__deletejob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Attica__DeleteJob*
libqt_list /* of QObject* */ k_attica__deletejob_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Attica__DeleteJob*
/// @param parent QObject*
void k_attica__deletejob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Attica__DeleteJob*
/// @param filterObj QObject*
void k_attica__deletejob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Attica__DeleteJob*
/// @param obj QObject*
void k_attica__deletejob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_attica__deletejob_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__DeleteJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_attica__deletejob_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_attica__deletejob_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_attica__deletejob_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Attica__DeleteJob*
/// @param name const char*
/// @param value QVariant*
bool k_attica__deletejob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Attica__DeleteJob*
/// @param name const char*
QVariant* k_attica__deletejob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DeleteJob*
const char** k_attica__deletejob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__DeleteJob*
QBindingStorage* k_attica__deletejob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__DeleteJob*
const QBindingStorage* k_attica__deletejob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__DeleteJob*
/// @param callback void func(Attica__DeleteJob* self)
void k_attica__deletejob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Attica__DeleteJob*
QObject* k_attica__deletejob_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Attica__DeleteJob*
/// @param classname const char*
bool k_attica__deletejob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Attica__DeleteJob*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_attica__deletejob_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__DeleteJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_attica__deletejob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_attica__deletejob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__DeleteJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_attica__deletejob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__DeleteJob*
/// @param param1 QObject*
void k_attica__deletejob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__DeleteJob*
/// @param callback void func(Attica__DeleteJob* self, QObject* param1)
void k_attica__deletejob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Attica__DeleteJob*
/// @param callback void func(Attica__DeleteJob* self, const char* objectName)
void k_attica__deletejob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Attica__DeleteJob*
void k_attica__deletejob_delete(void* self);

#endif
