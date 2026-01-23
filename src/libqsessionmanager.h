#pragma once
#ifndef SRC_QT6C_LIBQSESSIONMANAGER_H
#define SRC_QT6C_LIBQSESSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSessionManager*
///
const QMetaObject* q_sessionmanager_meta_object(void* self);

/// @param self QSessionManager*
/// @param param1 const char*
///
void* q_sessionmanager_metacast(void* self, const char* param1);

/// @param self QSessionManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sessionmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sessionmanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#sessionId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSessionManager*
///
const char* q_sessionmanager_session_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#sessionKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSessionManager*
///
const char* q_sessionmanager_session_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#allowsInteraction)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_allows_interaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#allowsErrorInteraction)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_allows_error_interaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#release)
///
/// @param self QSessionManager*
///
void q_sessionmanager_release(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#cancel)
///
/// @param self QSessionManager*
///
void q_sessionmanager_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#setRestartHint)
///
/// @param self QSessionManager*
/// @param restartHint enum QSessionManager__RestartHint
///
void q_sessionmanager_set_restart_hint(void* self, int32_t restartHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#restartHint)
///
/// @param self QSessionManager*
///
/// @return enum QSessionManager__RestartHint
///
int32_t q_sessionmanager_restart_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#setRestartCommand)
///
/// @param self QSessionManager*
/// @param restartCommand const char**
///
void q_sessionmanager_set_restart_command(void* self, const char* restartCommand[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#restartCommand)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSessionManager*
///
const char** q_sessionmanager_restart_command(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#setDiscardCommand)
///
/// @param self QSessionManager*
/// @param discardCommand const char**
///
void q_sessionmanager_set_discard_command(void* self, const char* discardCommand[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#discardCommand)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSessionManager*
///
const char** q_sessionmanager_discard_command(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#setManagerProperty)
///
/// @param self QSessionManager*
/// @param name const char*
/// @param value const char*
///
void q_sessionmanager_set_manager_property(void* self, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#setManagerProperty)
///
/// @param self QSessionManager*
/// @param name const char*
/// @param value const char**
///
void q_sessionmanager_set_manager_property2(void* self, const char* name, const char* value[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#isPhase2)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_is_phase2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#requestPhase2)
///
/// @param self QSessionManager*
///
void q_sessionmanager_request_phase2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sessionmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sessionmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QSessionManager*
/// @param event QEvent*
///
bool q_sessionmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QSessionManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sessionmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSessionManager*
///
const char* q_sessionmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSessionManager*
/// @param name char*
///
void q_sessionmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSessionManager*
///
bool q_sessionmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSessionManager*
/// @param b bool
///
bool q_sessionmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSessionManager*
///
QThread* q_sessionmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSessionManager*
/// @param thread QThread*
///
bool q_sessionmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSessionManager*
/// @param interval int
///
int32_t q_sessionmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSessionManager*
/// @param time int64_t of nanoseconds
///
int32_t q_sessionmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSessionManager*
/// @param id int
///
void q_sessionmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSessionManager*
/// @param id enum Qt__TimerId
///
void q_sessionmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSessionManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_sessionmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSessionManager*
/// @param parent QObject*
///
void q_sessionmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSessionManager*
/// @param filterObj QObject*
///
void q_sessionmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSessionManager*
/// @param obj QObject*
///
void q_sessionmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sessionmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSessionManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sessionmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sessionmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sessionmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSessionManager*
///
void q_sessionmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSessionManager*
///
void q_sessionmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSessionManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_sessionmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSessionManager*
/// @param name const char*
///
QVariant* q_sessionmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSessionManager*
///
const char** q_sessionmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSessionManager*
///
QBindingStorage* q_sessionmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSessionManager*
///
const QBindingStorage* q_sessionmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSessionManager*
///
void q_sessionmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSessionManager*
/// @param callback void func(QSessionManager* self)
///
void q_sessionmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSessionManager*
///
QObject* q_sessionmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSessionManager*
/// @param classname const char*
///
bool q_sessionmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSessionManager*
///
void q_sessionmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSessionManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_sessionmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSessionManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sessionmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSessionManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sessionmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_sessionmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSessionManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sessionmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSessionManager*
/// @param param1 QObject*
///
void q_sessionmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSessionManager*
/// @param callback void func(QSessionManager* self, QObject* param1)
///
void q_sessionmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSessionManager*
/// @param callback void func(QSessionManager* self, const char* objectName)
///
void q_sessionmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsessionmanager.html#public-types)

typedef enum {
    QSESSIONMANAGER_RESTARTHINT_RESTARTIFRUNNING = 0,
    QSESSIONMANAGER_RESTARTHINT_RESTARTANYWAY = 1,
    QSESSIONMANAGER_RESTARTHINT_RESTARTIMMEDIATELY = 2,
    QSESSIONMANAGER_RESTARTHINT_RESTARTNEVER = 3
} QSessionManager__RestartHint;

#endif
