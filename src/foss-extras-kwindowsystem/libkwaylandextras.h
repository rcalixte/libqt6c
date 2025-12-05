#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWAYLANDEXTRAS_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWAYLANDEXTRAS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwaylandextras.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KWaylandExtras*
///
const QMetaObject* k_waylandextras_meta_object(void* self);

/// @param self KWaylandExtras*
/// @param param1 const char*
///
void* k_waylandextras_metacast(void* self, const char* param1);

/// @param self KWaylandExtras*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_waylandextras_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_waylandextras_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#self)
///
KWaylandExtras* k_waylandextras_self();

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#requestXdgActivationToken)
///
/// @param win QWindow*
/// @param serial uint32_t
/// @param app_id const char*
///
void k_waylandextras_request_xdg_activation_token(void* win, uint32_t serial, const char* app_id);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#lastInputSerial)
///
/// @param window QWindow*
///
uint32_t k_waylandextras_last_input_serial(void* window);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#exportWindow)
///
/// @param window QWindow*
///
void k_waylandextras_export_window(void* window);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#unexportWindow)
///
/// @param window QWindow*
///
void k_waylandextras_unexport_window(void* window);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#xdgActivationTokenArrived)
///
/// @param self KWaylandExtras*
/// @param serial int
/// @param token const char*
///
void k_waylandextras_xdg_activation_token_arrived(void* self, int serial, const char* token);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#xdgActivationTokenArrived)
///
/// @param self KWaylandExtras*
/// @param callback void func(KWaylandExtras* self, int serial, const char* token)
///
void k_waylandextras_on_xdg_activation_token_arrived(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#windowExported)
///
/// @param self KWaylandExtras*
/// @param window QWindow*
/// @param handle const char*
///
void k_waylandextras_window_exported(void* self, void* window, const char* handle);

/// [Upstream resources](https://api.kde.org/kwaylandextras.html#windowExported)
///
/// @param self KWaylandExtras*
/// @param callback void func(KWaylandExtras* self, QWindow* window, const char* handle)
///
void k_waylandextras_on_window_exported(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_waylandextras_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_waylandextras_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KWaylandExtras*
/// @param event QEvent*
///
bool k_waylandextras_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KWaylandExtras*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_waylandextras_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWaylandExtras*
///
const char* k_waylandextras_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWaylandExtras*
/// @param name char*
///
void k_waylandextras_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KWaylandExtras*
///
bool k_waylandextras_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KWaylandExtras*
///
bool k_waylandextras_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KWaylandExtras*
///
bool k_waylandextras_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KWaylandExtras*
///
bool k_waylandextras_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KWaylandExtras*
/// @param b bool
///
bool k_waylandextras_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KWaylandExtras*
///
QThread* k_waylandextras_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWaylandExtras*
/// @param thread QThread*
///
bool k_waylandextras_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWaylandExtras*
/// @param interval int
///
int32_t k_waylandextras_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWaylandExtras*
/// @param id int
///
void k_waylandextras_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWaylandExtras*
/// @param id enum Qt__TimerId
///
void k_waylandextras_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KWaylandExtras*
///
libqt_list /* of QObject* */ k_waylandextras_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KWaylandExtras*
/// @param parent QObject*
///
void k_waylandextras_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KWaylandExtras*
/// @param filterObj QObject*
///
void k_waylandextras_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KWaylandExtras*
/// @param obj QObject*
///
void k_waylandextras_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_waylandextras_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWaylandExtras*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_waylandextras_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_waylandextras_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_waylandextras_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KWaylandExtras*
///
void k_waylandextras_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KWaylandExtras*
///
void k_waylandextras_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWaylandExtras*
/// @param name const char*
/// @param value QVariant*
///
bool k_waylandextras_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KWaylandExtras*
/// @param name const char*
///
QVariant* k_waylandextras_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWaylandExtras*
///
const char** k_waylandextras_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWaylandExtras*
///
QBindingStorage* k_waylandextras_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWaylandExtras*
///
const QBindingStorage* k_waylandextras_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWaylandExtras*
///
void k_waylandextras_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWaylandExtras*
/// @param callback void func(KWaylandExtras* self)
///
void k_waylandextras_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KWaylandExtras*
///
QObject* k_waylandextras_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KWaylandExtras*
/// @param classname const char*
///
bool k_waylandextras_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWaylandExtras*
///
void k_waylandextras_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWaylandExtras*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_waylandextras_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWaylandExtras*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_waylandextras_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_waylandextras_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWaylandExtras*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_waylandextras_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWaylandExtras*
/// @param param1 QObject*
///
void k_waylandextras_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWaylandExtras*
/// @param callback void func(KWaylandExtras* self, QObject* param1)
///
void k_waylandextras_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KWaylandExtras*
/// @param callback void func(KWaylandExtras* self, const char* objectName)
///
void k_waylandextras_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
