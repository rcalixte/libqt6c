#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKSTARTUPINFO_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKSTARTUPINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstartupinfo.html)

/// k_startupinfo_new constructs a new KStartupInfo object.
///
/// @param flags int
///
KStartupInfo* k_startupinfo_new(int flags);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html)

/// k_startupinfo_new2 constructs a new KStartupInfo object.
///
/// @param flags int
/// @param parent QObject*
///
KStartupInfo* k_startupinfo_new2(int flags, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KStartupInfo*
///
const QMetaObject* k_startupinfo_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KStartupInfo*
/// @param callback const QMetaObject* func()
///
void k_startupinfo_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KStartupInfo*
///
const QMetaObject* k_startupinfo_qbase_meta_object(void* self);

/// @param self KStartupInfo*
/// @param param1 const char*
///
void* k_startupinfo_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KStartupInfo*
/// @param callback void* func(KStartupInfo* self, const char* param1)
///
void k_startupinfo_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KStartupInfo*
/// @param param1 const char*
///
void* k_startupinfo_qbase_metacast(void* self, const char* param1);

/// @param self KStartupInfo*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_startupinfo_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KStartupInfo*
/// @param callback int32_t func(KStartupInfo* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_startupinfo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KStartupInfo*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_startupinfo_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_startupinfo_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#appStarted)
///
void k_startupinfo_app_started();

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#appStarted)
///
/// @param startup_id const char*
///
void k_startupinfo_app_started2(const char* startup_id);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#setStartupId)
///
/// @param startup_id const char*
///
void k_startupinfo_set_startup_id(const char* startup_id);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#setNewStartupId)
///
/// @param window QWindow*
/// @param startup_id const char*
///
void k_startupinfo_set_new_startup_id(void* window, const char* startup_id);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#createNewStartupId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
char* k_startupinfo_create_new_startup_id();

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#createNewStartupIdForTimestamp)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param timestamp uint32_t
///
char* k_startupinfo_create_new_startup_id_for_timestamp(uint32_t timestamp);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendStartup)
///
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
bool k_startupinfo_send_startup(void* id, void* data);

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendStartupXcb)
///
/// @param conn xcb_connection_t*
/// @param screen int
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
bool k_startupinfo_send_startup_xcb(xcb_connection_t* conn, int screen, void* id, void* data);
#endif

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendChange)
///
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
bool k_startupinfo_send_change(void* id, void* data);

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendChangeXcb)
///
/// @param conn xcb_connection_t*
/// @param screen int
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
bool k_startupinfo_send_change_xcb(xcb_connection_t* conn, int screen, void* id, void* data);
#endif

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinish)
///
/// @param id KStartupInfoId*
///
bool k_startupinfo_send_finish(void* id);

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinishXcb)
///
/// @param conn xcb_connection_t*
/// @param screen int
/// @param id KStartupInfoId*
///
bool k_startupinfo_send_finish_xcb(xcb_connection_t* conn, int screen, void* id);
#endif

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinish)
///
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
bool k_startupinfo_send_finish2(void* id, void* data);

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinishXcb)
///
/// @param conn xcb_connection_t*
/// @param screen int
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
bool k_startupinfo_send_finish_xcb2(xcb_connection_t* conn, int screen, void* id, void* data);
#endif

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#resetStartupEnv)
///
void k_startupinfo_reset_startup_env();

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
///
/// @param self KStartupInfo*
/// @param w uintptr_t
///
/// @return enum KStartupInfo__startup_t
///
int32_t k_startupinfo_check_startup(void* self, uintptr_t w);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
///
/// @param self KStartupInfo*
/// @param w uintptr_t
/// @param id KStartupInfoId*
///
/// @return enum KStartupInfo__startup_t
///
int32_t k_startupinfo_check_startup2(void* self, uintptr_t w, void* id);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
///
/// @param self KStartupInfo*
/// @param w uintptr_t
/// @param data KStartupInfoData*
///
/// @return enum KStartupInfo__startup_t
///
int32_t k_startupinfo_check_startup3(void* self, uintptr_t w, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
///
/// @param self KStartupInfo*
/// @param w uintptr_t
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
/// @return enum KStartupInfo__startup_t
///
int32_t k_startupinfo_check_startup4(void* self, uintptr_t w, void* id, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#setTimeout)
///
/// @param self KStartupInfo*
/// @param secs uint32_t
///
void k_startupinfo_set_timeout(void* self, uint32_t secs);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#windowStartupId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param w uintptr_t
///
char* k_startupinfo_window_startup_id(uintptr_t w);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#gotNewStartup)
///
/// @param self KStartupInfo*
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
void k_startupinfo_got_new_startup(void* self, void* id, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#gotNewStartup)
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, KStartupInfoId* id, KStartupInfoData* data)
///
void k_startupinfo_on_got_new_startup(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#gotStartupChange)
///
/// @param self KStartupInfo*
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
void k_startupinfo_got_startup_change(void* self, void* id, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#gotStartupChange)
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, KStartupInfoId* id, KStartupInfoData* data)
///
void k_startupinfo_on_got_startup_change(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
///
/// @param self KStartupInfo*
/// @param id KStartupInfoId*
/// @param data KStartupInfoData*
///
void k_startupinfo_got_remove_startup(void* self, void* id, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, KStartupInfoId* id, KStartupInfoData* data)
///
void k_startupinfo_on_got_remove_startup(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
///
/// @param self KStartupInfo*
/// @param e_P QEvent*
///
void k_startupinfo_custom_event(void* self, void* e_P);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
///
/// Allows for overriding the related default method
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, QEvent* e_P)
///
void k_startupinfo_on_custom_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
///
/// Base class method implementation
///
/// @param self KStartupInfo*
/// @param e_P QEvent*
///
void k_startupinfo_qbase_custom_event(void* self, void* e_P);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_startupinfo_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_startupinfo_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfo*
///
const char* k_startupinfo_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KStartupInfo*
/// @param name char*
///
void k_startupinfo_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KStartupInfo*
///
bool k_startupinfo_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KStartupInfo*
///
bool k_startupinfo_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KStartupInfo*
///
bool k_startupinfo_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KStartupInfo*
///
bool k_startupinfo_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KStartupInfo*
/// @param b bool
///
bool k_startupinfo_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KStartupInfo*
///
QThread* k_startupinfo_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KStartupInfo*
/// @param thread QThread*
///
bool k_startupinfo_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStartupInfo*
/// @param interval int
///
int32_t k_startupinfo_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStartupInfo*
/// @param time int64_t of nanoseconds
///
int32_t k_startupinfo_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStartupInfo*
/// @param id int
///
void k_startupinfo_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStartupInfo*
/// @param id enum Qt__TimerId
///
void k_startupinfo_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KStartupInfo*
///
/// @return libqt_list of QObject*
///
libqt_list k_startupinfo_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KStartupInfo*
/// @param parent QObject*
///
void k_startupinfo_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KStartupInfo*
/// @param filterObj QObject*
///
void k_startupinfo_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KStartupInfo*
/// @param obj QObject*
///
void k_startupinfo_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_startupinfo_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_startupinfo_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStartupInfo*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_startupinfo_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_startupinfo_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_startupinfo_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStartupInfo*
///
bool k_startupinfo_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStartupInfo*
/// @param receiver QObject*
///
bool k_startupinfo_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_startupinfo_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KStartupInfo*
///
void k_startupinfo_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KStartupInfo*
///
void k_startupinfo_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KStartupInfo*
/// @param name const char*
/// @param value QVariant*
///
bool k_startupinfo_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KStartupInfo*
/// @param name const char*
///
QVariant* k_startupinfo_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KStartupInfo*
///
const char** k_startupinfo_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStartupInfo*
///
QBindingStorage* k_startupinfo_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStartupInfo*
///
const QBindingStorage* k_startupinfo_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStartupInfo*
///
void k_startupinfo_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self)
///
void k_startupinfo_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KStartupInfo*
///
QObject* k_startupinfo_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KStartupInfo*
/// @param classname const char*
///
bool k_startupinfo_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KStartupInfo*
///
void k_startupinfo_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStartupInfo*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_startupinfo_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStartupInfo*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_startupinfo_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_startupinfo_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_startupinfo_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStartupInfo*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_startupinfo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStartupInfo*
/// @param signal const char*
///
bool k_startupinfo_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStartupInfo*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_startupinfo_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStartupInfo*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_startupinfo_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStartupInfo*
/// @param receiver QObject*
/// @param member const char*
///
bool k_startupinfo_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStartupInfo*
/// @param param1 QObject*
///
void k_startupinfo_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, QObject* param1)
///
void k_startupinfo_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param event QEvent*
///
bool k_startupinfo_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param event QEvent*
///
bool k_startupinfo_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback bool func(KStartupInfo* self, QEvent* event)
///
void k_startupinfo_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_startupinfo_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_startupinfo_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback bool func(KStartupInfo* self, QObject* watched, QEvent* event)
///
void k_startupinfo_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param event QTimerEvent*
///
void k_startupinfo_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param event QTimerEvent*
///
void k_startupinfo_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, QTimerEvent* event)
///
void k_startupinfo_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param event QChildEvent*
///
void k_startupinfo_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param event QChildEvent*
///
void k_startupinfo_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, QChildEvent* event)
///
void k_startupinfo_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal QMetaMethod*
///
void k_startupinfo_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal QMetaMethod*
///
void k_startupinfo_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, QMetaMethod* signal)
///
void k_startupinfo_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal QMetaMethod*
///
void k_startupinfo_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal QMetaMethod*
///
void k_startupinfo_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, QMetaMethod* signal)
///
void k_startupinfo_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
///
QObject* k_startupinfo_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
///
QObject* k_startupinfo_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback QObject* func()
///
void k_startupinfo_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
///
int32_t k_startupinfo_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
///
int32_t k_startupinfo_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback int32_t func()
///
void k_startupinfo_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal const char*
///
int32_t k_startupinfo_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal const char*
///
int32_t k_startupinfo_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback int32_t func(KStartupInfo* self, const char* signal)
///
void k_startupinfo_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal QMetaMethod*
///
bool k_startupinfo_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param signal QMetaMethod*
///
bool k_startupinfo_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStartupInfo*
/// @param callback bool func(KStartupInfo* self, QMetaMethod* signal)
///
void k_startupinfo_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KStartupInfo*
/// @param callback void func(KStartupInfo* self, const char* objectName)
///
void k_startupinfo_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#dtor.KStartupInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KStartupInfo*
///
void k_startupinfo_delete(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html)

/// k_startupinfoid_new constructs a new KStartupInfoId object.
///
KStartupInfoId* k_startupinfoid_new();

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html)

/// k_startupinfoid_new2 constructs a new KStartupInfoId object.
///
/// @param data KStartupInfoId*
///
KStartupInfoId* k_startupinfoid_new2(void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-eq-eq)
///
/// @param self KStartupInfoId*
/// @param id KStartupInfoId*
///
bool k_startupinfoid_operator_equal(void* self, void* id);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-not-eq)
///
/// @param self KStartupInfoId*
/// @param id KStartupInfoId*
///
bool k_startupinfoid_operator_not_equal(void* self, void* id);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#isNull)
///
/// @param self KStartupInfoId*
///
bool k_startupinfoid_is_null(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#initId)
///
/// @param self KStartupInfoId*
///
void k_startupinfoid_init_id(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoId*
///
const char* k_startupinfoid_id(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#timestamp)
///
/// @param self KStartupInfoId*
///
uint64_t k_startupinfoid_timestamp(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#setupStartupEnv)
///
/// @param self KStartupInfoId*
///
bool k_startupinfoid_setup_startup_env(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-eq)
///
/// @param self KStartupInfoId*
/// @param data KStartupInfoId*
///
void k_startupinfoid_operator_assign(void* self, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-lt)
///
/// @param self KStartupInfoId*
/// @param id KStartupInfoId*
///
bool k_startupinfoid_operator_lesser(void* self, void* id);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#initId)
///
/// @param self KStartupInfoId*
/// @param id const char*
///
void k_startupinfoid_init_id1(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/kstartupinfoid.html#dtor.KStartupInfoId)
///
/// Delete this object from C++ memory.
///
/// @param self KStartupInfoId*
///
void k_startupinfoid_delete(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html)

/// k_startupinfodata_new constructs a new KStartupInfoData object.
///
KStartupInfoData* k_startupinfodata_new();

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html)

/// k_startupinfodata_new2 constructs a new KStartupInfoData object.
///
/// @param data KStartupInfoData*
///
KStartupInfoData* k_startupinfodata_new2(void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setBin)
///
/// @param self KStartupInfoData*
/// @param bin const char*
///
void k_startupinfodata_set_bin(void* self, const char* bin);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#bin)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_bin(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setName)
///
/// @param self KStartupInfoData*
/// @param name const char*
///
void k_startupinfodata_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#findName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_find_name(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_name(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setDescription)
///
/// @param self KStartupInfoData*
/// @param descr const char*
///
void k_startupinfodata_set_description(void* self, const char* descr);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#findDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_find_description(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_description(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setIcon)
///
/// @param self KStartupInfoData*
/// @param icon const char*
///
void k_startupinfodata_set_icon(void* self, const char* icon);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#findIcon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_find_icon(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_icon(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setDesktop)
///
/// @param self KStartupInfoData*
/// @param desktop int
///
void k_startupinfodata_set_desktop(void* self, int desktop);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#desktop)
///
/// @param self KStartupInfoData*
///
int32_t k_startupinfodata_desktop(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setWMClass)
///
/// @param self KStartupInfoData*
/// @param wmclass const char*
///
void k_startupinfodata_set_w_m_class(void* self, const char* wmclass);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#findWMClass)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_find_w_m_class(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#WMClass)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KStartupInfoData*
///
char* k_startupinfodata_w_m_class(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#addPid)
///
/// @param self KStartupInfoData*
/// @param pid pid_t
///
void k_startupinfodata_add_pid(void* self, pid_t pid);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#pids)
///
/// @param self KStartupInfoData*
///
/// @return libqt_list of pid_t
///
libqt_list k_startupinfodata_pids(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#is_pid)
///
/// @param self KStartupInfoData*
/// @param pid pid_t
///
bool k_startupinfodata_is_pid(void* self, pid_t pid);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setHostname)
///
/// @param self KStartupInfoData*
///
void k_startupinfodata_set_hostname(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#hostname)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KStartupInfoData*
///
char* k_startupinfodata_hostname(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setSilent)
///
/// @param self KStartupInfoData*
/// @param state enum KStartupInfoData__TriState
///
void k_startupinfodata_set_silent(void* self, int32_t state);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#silent)
///
/// @param self KStartupInfoData*
///
/// @return enum KStartupInfoData__TriState
///
int32_t k_startupinfodata_silent(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#screen)
///
/// @param self KStartupInfoData*
///
int32_t k_startupinfodata_screen(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setScreen)
///
/// @param self KStartupInfoData*
/// @param screen int
///
void k_startupinfodata_set_screen(void* self, int screen);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#xinerama)
///
/// @param self KStartupInfoData*
///
int32_t k_startupinfodata_xinerama(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setXinerama)
///
/// @param self KStartupInfoData*
/// @param xinerama int
///
void k_startupinfodata_set_xinerama(void* self, int xinerama);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#applicationId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KStartupInfoData*
///
const char* k_startupinfodata_application_id(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setApplicationId)
///
/// @param self KStartupInfoData*
/// @param desktop const char*
///
void k_startupinfodata_set_application_id(void* self, const char* desktop);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#update)
///
/// @param self KStartupInfoData*
/// @param data KStartupInfoData*
///
void k_startupinfodata_update(void* self, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#operator-eq)
///
/// @param self KStartupInfoData*
/// @param data KStartupInfoData*
///
void k_startupinfodata_operator_assign(void* self, void* data);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#setHostname)
///
/// @param self KStartupInfoData*
/// @param hostname const char*
///
void k_startupinfodata_set_hostname1(void* self, const char* hostname);

/// [Upstream resources](https://api.kde.org/kstartupinfodata.html#dtor.KStartupInfoData)
///
/// Delete this object from C++ memory.
///
/// @param self KStartupInfoData*
///
void k_startupinfodata_delete(void* self);

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#public-types)

typedef enum {
    KSTARTUPINFO__CLEANONCANTDETECT = 1,
    KSTARTUPINFO__DISABLEKWINMODULE = 2,
    KSTARTUPINFO__ANNOUNCESILENCECHANGES = 4
} KStartupInfo__;

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#public-types)

typedef enum {
    KSTARTUPINFO_STARTUP_T_NOMATCH = 0,
    KSTARTUPINFO_STARTUP_T_MATCH = 1,
    KSTARTUPINFO_STARTUP_T_CANTDETECT = 2
} KStartupInfo__startup_t;

/// [Upstream resources](https://api.kde.org/kstartupinfo.html#public-types)

typedef enum {
    KSTARTUPINFODATA_TRISTATE_YES = 0,
    KSTARTUPINFODATA_TRISTATE_NO = 1,
    KSTARTUPINFODATA_TRISTATE_UNKNOWN = 2
} KStartupInfoData__TriState;

#endif
