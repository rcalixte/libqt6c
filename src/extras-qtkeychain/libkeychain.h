#pragma once
#ifndef SRC_EXTRAS_QTKEYCHAIN_QT6C_LIBKEYCHAIN_H
#define SRC_EXTRAS_QTKEYCHAIN_QT6C_LIBKEYCHAIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QKeychain__Job*
///
const QMetaObject* q_keychain__job_meta_object(void* self);

/// @param self QKeychain__Job*
/// @param param1 const char*
///
void* q_keychain__job_metacast(void* self, const char* param1);

/// @param self QKeychain__Job*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__job_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_keychain__job_tr(const char* s);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
///
QSettings* q_keychain__job_settings(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param settings QSettings*
///
void q_keychain__job_set_settings(void* self, void* settings);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
///
void q_keychain__job_start(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__Job*
///
const char* q_keychain__job_service(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
///
/// @return enum QKeychain__Error
///
int32_t q_keychain__job_error(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__Job*
///
const char* q_keychain__job_error_string(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_auto_delete(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param autoDelete bool
///
void q_keychain__job_set_auto_delete(void* self, bool autoDelete);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_insecure_fallback(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param insecureFallback bool
///
void q_keychain__job_set_insecure_fallback(void* self, bool insecureFallback);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__Job*
///
const char* q_keychain__job_key(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param key const char*
///
void q_keychain__job_set_key(void* self, const char* key);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
///
void q_keychain__job_emit_finished(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param param1 enum QKeychain__Error
/// @param errorString const char*
///
void q_keychain__job_emit_finished_with_error(void* self, int32_t param1, const char* errorString);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param param1 QKeychain__Job*
///
void q_keychain__job_finished(void* self, void* param1);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__Job*
/// @param callback void func(QKeychain__Job* self, QKeychain__Job* param1)
///
void q_keychain__job_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_keychain__job_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_keychain__job_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QKeychain__Job*
/// @param event QEvent*
///
bool q_keychain__job_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QKeychain__Job*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__job_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__Job*
///
const char* q_keychain__job_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QKeychain__Job*
/// @param name const char*
///
void q_keychain__job_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QKeychain__Job*
/// @param b bool
///
bool q_keychain__job_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QKeychain__Job*
///
QThread* q_keychain__job_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QKeychain__Job*
/// @param thread QThread*
///
bool q_keychain__job_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__Job*
/// @param interval int
///
int32_t q_keychain__job_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__Job*
/// @param time int64_t of nanoseconds
///
int32_t q_keychain__job_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__Job*
/// @param id int
///
void q_keychain__job_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__Job*
/// @param id enum Qt__TimerId
///
void q_keychain__job_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QKeychain__Job*
///
/// @return libqt_list of QObject*
///
libqt_list q_keychain__job_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QKeychain__Job*
/// @param parent QObject*
///
void q_keychain__job_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QKeychain__Job*
/// @param filterObj QObject*
///
void q_keychain__job_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QKeychain__Job*
/// @param obj QObject*
///
void q_keychain__job_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__job_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_keychain__job_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__Job*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__job_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__job_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_keychain__job_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__Job*
///
bool q_keychain__job_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__Job*
/// @param receiver QObject*
///
bool q_keychain__job_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_keychain__job_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QKeychain__Job*
///
void q_keychain__job_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QKeychain__Job*
///
void q_keychain__job_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QKeychain__Job*
/// @param name const char*
/// @param value QVariant*
///
bool q_keychain__job_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QKeychain__Job*
/// @param name const char*
///
QVariant* q_keychain__job_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeychain__Job*
///
const char** q_keychain__job_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__Job*
///
QBindingStorage* q_keychain__job_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__Job*
///
const QBindingStorage* q_keychain__job_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__Job*
///
void q_keychain__job_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__Job*
/// @param callback void func(QKeychain__Job* self)
///
void q_keychain__job_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QKeychain__Job*
///
QObject* q_keychain__job_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QKeychain__Job*
/// @param classname const char*
///
bool q_keychain__job_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QKeychain__Job*
///
void q_keychain__job_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__Job*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__job_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__Job*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__job_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_keychain__job_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_keychain__job_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__Job*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_keychain__job_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__Job*
/// @param signal const char*
///
bool q_keychain__job_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__Job*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_keychain__job_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__Job*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__job_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__Job*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__job_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__Job*
/// @param param1 QObject*
///
void q_keychain__job_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__Job*
/// @param callback void func(QKeychain__Job* self, QObject* param1)
///
void q_keychain__job_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeychain__Job*
/// @param callback void func(QKeychain__Job* self, const char* objectName)
///
void q_keychain__job_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Delete this object from C++ memory.
///
/// @param self QKeychain__Job*
///
void q_keychain__job_delete(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// q_keychain__readpasswordjob_new constructs a new QKeychain::ReadPasswordJob object.
///
/// @param service const char*
///
QKeychain__ReadPasswordJob* q_keychain__readpasswordjob_new(const char* service);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// q_keychain__readpasswordjob_new2 constructs a new QKeychain::ReadPasswordJob object.
///
/// @param service const char*
/// @param parent QObject*
///
QKeychain__ReadPasswordJob* q_keychain__readpasswordjob_new2(const char* service, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QKeychain__ReadPasswordJob*
///
const QMetaObject* q_keychain__readpasswordjob_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback const QMetaObject* func()
///
void q_keychain__readpasswordjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QKeychain__ReadPasswordJob*
///
const QMetaObject* q_keychain__readpasswordjob_qbase_meta_object(void* self);

/// @param self QKeychain__ReadPasswordJob*
/// @param param1 const char*
///
void* q_keychain__readpasswordjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void* func(QKeychain__ReadPasswordJob* self, const char* param1)
///
void q_keychain__readpasswordjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QKeychain__ReadPasswordJob*
/// @param param1 const char*
///
void* q_keychain__readpasswordjob_qbase_metacast(void* self, const char* param1);

/// @param self QKeychain__ReadPasswordJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__readpasswordjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback int32_t func(QKeychain__ReadPasswordJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_keychain__readpasswordjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QKeychain__ReadPasswordJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__readpasswordjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_keychain__readpasswordjob_tr(const char* s);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
char* q_keychain__readpasswordjob_binary_data(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
const char* q_keychain__readpasswordjob_text_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_keychain__readpasswordjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_keychain__readpasswordjob_tr3(const char* s, const char* c, int n);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
///
QSettings* q_keychain__readpasswordjob_settings(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param settings QSettings*
///
void q_keychain__readpasswordjob_set_settings(void* self, void* settings);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
const char* q_keychain__readpasswordjob_service(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
///
/// @return enum QKeychain__Error
///
int32_t q_keychain__readpasswordjob_error(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
const char* q_keychain__readpasswordjob_error_string(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_auto_delete(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param autoDelete bool
///
void q_keychain__readpasswordjob_set_auto_delete(void* self, bool autoDelete);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_insecure_fallback(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param insecureFallback bool
///
void q_keychain__readpasswordjob_set_insecure_fallback(void* self, bool insecureFallback);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
const char* q_keychain__readpasswordjob_key(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param key const char*
///
void q_keychain__readpasswordjob_set_key(void* self, const char* key);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_emit_finished(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param param1 enum QKeychain__Error
/// @param errorString const char*
///
void q_keychain__readpasswordjob_emit_finished_with_error(void* self, int32_t param1, const char* errorString);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param param1 QKeychain__Job*
///
void q_keychain__readpasswordjob_finished(void* self, void* param1);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QKeychain__Job* param1)
///
void q_keychain__readpasswordjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
const char* q_keychain__readpasswordjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param name const char*
///
void q_keychain__readpasswordjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param b bool
///
bool q_keychain__readpasswordjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QKeychain__ReadPasswordJob*
///
QThread* q_keychain__readpasswordjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param thread QThread*
///
bool q_keychain__readpasswordjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param interval int
///
int32_t q_keychain__readpasswordjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param time int64_t of nanoseconds
///
int32_t q_keychain__readpasswordjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param id int
///
void q_keychain__readpasswordjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param id enum Qt__TimerId
///
void q_keychain__readpasswordjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QKeychain__ReadPasswordJob*
///
/// @return libqt_list of QObject*
///
libqt_list q_keychain__readpasswordjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param parent QObject*
///
void q_keychain__readpasswordjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param filterObj QObject*
///
void q_keychain__readpasswordjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param obj QObject*
///
void q_keychain__readpasswordjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__readpasswordjob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_keychain__readpasswordjob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__readpasswordjob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__readpasswordjob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_keychain__readpasswordjob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__ReadPasswordJob*
///
bool q_keychain__readpasswordjob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param receiver QObject*
///
bool q_keychain__readpasswordjob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_keychain__readpasswordjob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param name const char*
/// @param value QVariant*
///
bool q_keychain__readpasswordjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param name const char*
///
QVariant* q_keychain__readpasswordjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeychain__ReadPasswordJob*
///
const char** q_keychain__readpasswordjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__ReadPasswordJob*
///
QBindingStorage* q_keychain__readpasswordjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__ReadPasswordJob*
///
const QBindingStorage* q_keychain__readpasswordjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self)
///
void q_keychain__readpasswordjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QKeychain__ReadPasswordJob*
///
QObject* q_keychain__readpasswordjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param classname const char*
///
bool q_keychain__readpasswordjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__readpasswordjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__readpasswordjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_keychain__readpasswordjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_keychain__readpasswordjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_keychain__readpasswordjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal const char*
///
bool q_keychain__readpasswordjob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_keychain__readpasswordjob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__readpasswordjob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__readpasswordjob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param param1 QObject*
///
void q_keychain__readpasswordjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QObject* param1)
///
void q_keychain__readpasswordjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QEvent*
///
bool q_keychain__readpasswordjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QEvent*
///
bool q_keychain__readpasswordjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback bool func(QKeychain__ReadPasswordJob* self, QEvent* event)
///
void q_keychain__readpasswordjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__readpasswordjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__readpasswordjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback bool func(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event)
///
void q_keychain__readpasswordjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QTimerEvent*
///
void q_keychain__readpasswordjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QTimerEvent*
///
void q_keychain__readpasswordjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QTimerEvent* event)
///
void q_keychain__readpasswordjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QChildEvent*
///
void q_keychain__readpasswordjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QChildEvent*
///
void q_keychain__readpasswordjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QChildEvent* event)
///
void q_keychain__readpasswordjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QEvent*
///
void q_keychain__readpasswordjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param event QEvent*
///
void q_keychain__readpasswordjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QEvent* event)
///
void q_keychain__readpasswordjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__readpasswordjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__readpasswordjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QMetaMethod* signal)
///
void q_keychain__readpasswordjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__readpasswordjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__readpasswordjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, QMetaMethod* signal)
///
void q_keychain__readpasswordjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_do_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_qbase_do_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func()
///
void q_keychain__readpasswordjob_on_do_start(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
///
QObject* q_keychain__readpasswordjob_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
///
QObject* q_keychain__readpasswordjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback QObject* func()
///
void q_keychain__readpasswordjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
///
int32_t q_keychain__readpasswordjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
///
int32_t q_keychain__readpasswordjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback int32_t func()
///
void q_keychain__readpasswordjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal const char*
///
int32_t q_keychain__readpasswordjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal const char*
///
int32_t q_keychain__readpasswordjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback int32_t func(QKeychain__ReadPasswordJob* self, const char* signal)
///
void q_keychain__readpasswordjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal QMetaMethod*
///
bool q_keychain__readpasswordjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param signal QMetaMethod*
///
bool q_keychain__readpasswordjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback bool func(QKeychain__ReadPasswordJob* self, QMetaMethod* signal)
///
void q_keychain__readpasswordjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeychain__ReadPasswordJob*
/// @param callback void func(QKeychain__ReadPasswordJob* self, const char* objectName)
///
void q_keychain__readpasswordjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Delete this object from C++ memory.
///
/// @param self QKeychain__ReadPasswordJob*
///
void q_keychain__readpasswordjob_delete(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// q_keychain__writepasswordjob_new constructs a new QKeychain::WritePasswordJob object.
///
/// @param service const char*
///
QKeychain__WritePasswordJob* q_keychain__writepasswordjob_new(const char* service);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// q_keychain__writepasswordjob_new2 constructs a new QKeychain::WritePasswordJob object.
///
/// @param service const char*
/// @param parent QObject*
///
QKeychain__WritePasswordJob* q_keychain__writepasswordjob_new2(const char* service, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QKeychain__WritePasswordJob*
///
const QMetaObject* q_keychain__writepasswordjob_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback const QMetaObject* func()
///
void q_keychain__writepasswordjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QKeychain__WritePasswordJob*
///
const QMetaObject* q_keychain__writepasswordjob_qbase_meta_object(void* self);

/// @param self QKeychain__WritePasswordJob*
/// @param param1 const char*
///
void* q_keychain__writepasswordjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void* func(QKeychain__WritePasswordJob* self, const char* param1)
///
void q_keychain__writepasswordjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QKeychain__WritePasswordJob*
/// @param param1 const char*
///
void* q_keychain__writepasswordjob_qbase_metacast(void* self, const char* param1);

/// @param self QKeychain__WritePasswordJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__writepasswordjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback int32_t func(QKeychain__WritePasswordJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_keychain__writepasswordjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QKeychain__WritePasswordJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__writepasswordjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_keychain__writepasswordjob_tr(const char* s);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param data char*
///
void q_keychain__writepasswordjob_set_binary_data(void* self, char* data);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param data const char*
///
void q_keychain__writepasswordjob_set_text_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_keychain__writepasswordjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_keychain__writepasswordjob_tr3(const char* s, const char* c, int n);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
///
QSettings* q_keychain__writepasswordjob_settings(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param settings QSettings*
///
void q_keychain__writepasswordjob_set_settings(void* self, void* settings);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__WritePasswordJob*
///
const char* q_keychain__writepasswordjob_service(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
///
/// @return enum QKeychain__Error
///
int32_t q_keychain__writepasswordjob_error(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__WritePasswordJob*
///
const char* q_keychain__writepasswordjob_error_string(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_auto_delete(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param autoDelete bool
///
void q_keychain__writepasswordjob_set_auto_delete(void* self, bool autoDelete);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_insecure_fallback(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param insecureFallback bool
///
void q_keychain__writepasswordjob_set_insecure_fallback(void* self, bool insecureFallback);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__WritePasswordJob*
///
const char* q_keychain__writepasswordjob_key(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param key const char*
///
void q_keychain__writepasswordjob_set_key(void* self, const char* key);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_emit_finished(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param param1 enum QKeychain__Error
/// @param errorString const char*
///
void q_keychain__writepasswordjob_emit_finished_with_error(void* self, int32_t param1, const char* errorString);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param param1 QKeychain__Job*
///
void q_keychain__writepasswordjob_finished(void* self, void* param1);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QKeychain__Job* param1)
///
void q_keychain__writepasswordjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__WritePasswordJob*
///
const char* q_keychain__writepasswordjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QKeychain__WritePasswordJob*
/// @param name const char*
///
void q_keychain__writepasswordjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QKeychain__WritePasswordJob*
/// @param b bool
///
bool q_keychain__writepasswordjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QKeychain__WritePasswordJob*
///
QThread* q_keychain__writepasswordjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QKeychain__WritePasswordJob*
/// @param thread QThread*
///
bool q_keychain__writepasswordjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__WritePasswordJob*
/// @param interval int
///
int32_t q_keychain__writepasswordjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__WritePasswordJob*
/// @param time int64_t of nanoseconds
///
int32_t q_keychain__writepasswordjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__WritePasswordJob*
/// @param id int
///
void q_keychain__writepasswordjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__WritePasswordJob*
/// @param id enum Qt__TimerId
///
void q_keychain__writepasswordjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QKeychain__WritePasswordJob*
///
/// @return libqt_list of QObject*
///
libqt_list q_keychain__writepasswordjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QKeychain__WritePasswordJob*
/// @param parent QObject*
///
void q_keychain__writepasswordjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QKeychain__WritePasswordJob*
/// @param filterObj QObject*
///
void q_keychain__writepasswordjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QKeychain__WritePasswordJob*
/// @param obj QObject*
///
void q_keychain__writepasswordjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__writepasswordjob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_keychain__writepasswordjob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__writepasswordjob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__writepasswordjob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_keychain__writepasswordjob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__WritePasswordJob*
///
bool q_keychain__writepasswordjob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param receiver QObject*
///
bool q_keychain__writepasswordjob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_keychain__writepasswordjob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QKeychain__WritePasswordJob*
/// @param name const char*
/// @param value QVariant*
///
bool q_keychain__writepasswordjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QKeychain__WritePasswordJob*
/// @param name const char*
///
QVariant* q_keychain__writepasswordjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeychain__WritePasswordJob*
///
const char** q_keychain__writepasswordjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__WritePasswordJob*
///
QBindingStorage* q_keychain__writepasswordjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__WritePasswordJob*
///
const QBindingStorage* q_keychain__writepasswordjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self)
///
void q_keychain__writepasswordjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QKeychain__WritePasswordJob*
///
QObject* q_keychain__writepasswordjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QKeychain__WritePasswordJob*
/// @param classname const char*
///
bool q_keychain__writepasswordjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__WritePasswordJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__writepasswordjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__WritePasswordJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__writepasswordjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_keychain__writepasswordjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_keychain__writepasswordjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_keychain__writepasswordjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal const char*
///
bool q_keychain__writepasswordjob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_keychain__writepasswordjob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__writepasswordjob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__WritePasswordJob*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__writepasswordjob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__WritePasswordJob*
/// @param param1 QObject*
///
void q_keychain__writepasswordjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QObject* param1)
///
void q_keychain__writepasswordjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QEvent*
///
bool q_keychain__writepasswordjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QEvent*
///
bool q_keychain__writepasswordjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback bool func(QKeychain__WritePasswordJob* self, QEvent* event)
///
void q_keychain__writepasswordjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__writepasswordjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__writepasswordjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback bool func(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event)
///
void q_keychain__writepasswordjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QTimerEvent*
///
void q_keychain__writepasswordjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QTimerEvent*
///
void q_keychain__writepasswordjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QTimerEvent* event)
///
void q_keychain__writepasswordjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QChildEvent*
///
void q_keychain__writepasswordjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QChildEvent*
///
void q_keychain__writepasswordjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QChildEvent* event)
///
void q_keychain__writepasswordjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QEvent*
///
void q_keychain__writepasswordjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param event QEvent*
///
void q_keychain__writepasswordjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QEvent* event)
///
void q_keychain__writepasswordjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__writepasswordjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__writepasswordjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QMetaMethod* signal)
///
void q_keychain__writepasswordjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__writepasswordjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__writepasswordjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, QMetaMethod* signal)
///
void q_keychain__writepasswordjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_do_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_qbase_do_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func()
///
void q_keychain__writepasswordjob_on_do_start(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
///
QObject* q_keychain__writepasswordjob_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
///
QObject* q_keychain__writepasswordjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback QObject* func()
///
void q_keychain__writepasswordjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
///
int32_t q_keychain__writepasswordjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
///
int32_t q_keychain__writepasswordjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback int32_t func()
///
void q_keychain__writepasswordjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal const char*
///
int32_t q_keychain__writepasswordjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal const char*
///
int32_t q_keychain__writepasswordjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback int32_t func(QKeychain__WritePasswordJob* self, const char* signal)
///
void q_keychain__writepasswordjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal QMetaMethod*
///
bool q_keychain__writepasswordjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param signal QMetaMethod*
///
bool q_keychain__writepasswordjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback bool func(QKeychain__WritePasswordJob* self, QMetaMethod* signal)
///
void q_keychain__writepasswordjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeychain__WritePasswordJob*
/// @param callback void func(QKeychain__WritePasswordJob* self, const char* objectName)
///
void q_keychain__writepasswordjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Delete this object from C++ memory.
///
/// @param self QKeychain__WritePasswordJob*
///
void q_keychain__writepasswordjob_delete(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// q_keychain__deletepasswordjob_new constructs a new QKeychain::DeletePasswordJob object.
///
/// @param service const char*
///
QKeychain__DeletePasswordJob* q_keychain__deletepasswordjob_new(const char* service);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// q_keychain__deletepasswordjob_new2 constructs a new QKeychain::DeletePasswordJob object.
///
/// @param service const char*
/// @param parent QObject*
///
QKeychain__DeletePasswordJob* q_keychain__deletepasswordjob_new2(const char* service, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QKeychain__DeletePasswordJob*
///
const QMetaObject* q_keychain__deletepasswordjob_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback const QMetaObject* func()
///
void q_keychain__deletepasswordjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QKeychain__DeletePasswordJob*
///
const QMetaObject* q_keychain__deletepasswordjob_qbase_meta_object(void* self);

/// @param self QKeychain__DeletePasswordJob*
/// @param param1 const char*
///
void* q_keychain__deletepasswordjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void* func(QKeychain__DeletePasswordJob* self, const char* param1)
///
void q_keychain__deletepasswordjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QKeychain__DeletePasswordJob*
/// @param param1 const char*
///
void* q_keychain__deletepasswordjob_qbase_metacast(void* self, const char* param1);

/// @param self QKeychain__DeletePasswordJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__deletepasswordjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback int32_t func(QKeychain__DeletePasswordJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_keychain__deletepasswordjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QKeychain__DeletePasswordJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keychain__deletepasswordjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_keychain__deletepasswordjob_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_keychain__deletepasswordjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_keychain__deletepasswordjob_tr3(const char* s, const char* c, int n);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
///
QSettings* q_keychain__deletepasswordjob_settings(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param settings QSettings*
///
void q_keychain__deletepasswordjob_set_settings(void* self, void* settings);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__DeletePasswordJob*
///
const char* q_keychain__deletepasswordjob_service(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
///
/// @return enum QKeychain__Error
///
int32_t q_keychain__deletepasswordjob_error(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__DeletePasswordJob*
///
const char* q_keychain__deletepasswordjob_error_string(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_auto_delete(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param autoDelete bool
///
void q_keychain__deletepasswordjob_set_auto_delete(void* self, bool autoDelete);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_insecure_fallback(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param insecureFallback bool
///
void q_keychain__deletepasswordjob_set_insecure_fallback(void* self, bool insecureFallback);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__DeletePasswordJob*
///
const char* q_keychain__deletepasswordjob_key(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param key const char*
///
void q_keychain__deletepasswordjob_set_key(void* self, const char* key);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_emit_finished(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param param1 enum QKeychain__Error
/// @param errorString const char*
///
void q_keychain__deletepasswordjob_emit_finished_with_error(void* self, int32_t param1, const char* errorString);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param param1 QKeychain__Job*
///
void q_keychain__deletepasswordjob_finished(void* self, void* param1);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QKeychain__Job* param1)
///
void q_keychain__deletepasswordjob_on_finished(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeychain__DeletePasswordJob*
///
const char* q_keychain__deletepasswordjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param name const char*
///
void q_keychain__deletepasswordjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param b bool
///
bool q_keychain__deletepasswordjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QKeychain__DeletePasswordJob*
///
QThread* q_keychain__deletepasswordjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param thread QThread*
///
bool q_keychain__deletepasswordjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param interval int
///
int32_t q_keychain__deletepasswordjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param time int64_t of nanoseconds
///
int32_t q_keychain__deletepasswordjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param id int
///
void q_keychain__deletepasswordjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param id enum Qt__TimerId
///
void q_keychain__deletepasswordjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QKeychain__DeletePasswordJob*
///
/// @return libqt_list of QObject*
///
libqt_list q_keychain__deletepasswordjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param parent QObject*
///
void q_keychain__deletepasswordjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param filterObj QObject*
///
void q_keychain__deletepasswordjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param obj QObject*
///
void q_keychain__deletepasswordjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__deletepasswordjob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_keychain__deletepasswordjob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_keychain__deletepasswordjob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__deletepasswordjob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_keychain__deletepasswordjob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__DeletePasswordJob*
///
bool q_keychain__deletepasswordjob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param receiver QObject*
///
bool q_keychain__deletepasswordjob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_keychain__deletepasswordjob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param name const char*
/// @param value QVariant*
///
bool q_keychain__deletepasswordjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param name const char*
///
QVariant* q_keychain__deletepasswordjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeychain__DeletePasswordJob*
///
const char** q_keychain__deletepasswordjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__DeletePasswordJob*
///
QBindingStorage* q_keychain__deletepasswordjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeychain__DeletePasswordJob*
///
const QBindingStorage* q_keychain__deletepasswordjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self)
///
void q_keychain__deletepasswordjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QKeychain__DeletePasswordJob*
///
QObject* q_keychain__deletepasswordjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param classname const char*
///
bool q_keychain__deletepasswordjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__deletepasswordjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_keychain__deletepasswordjob_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_keychain__deletepasswordjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_keychain__deletepasswordjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_keychain__deletepasswordjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal const char*
///
bool q_keychain__deletepasswordjob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_keychain__deletepasswordjob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__deletepasswordjob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keychain__deletepasswordjob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param param1 QObject*
///
void q_keychain__deletepasswordjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QObject* param1)
///
void q_keychain__deletepasswordjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QEvent*
///
bool q_keychain__deletepasswordjob_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QEvent*
///
bool q_keychain__deletepasswordjob_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback bool func(QKeychain__DeletePasswordJob* self, QEvent* event)
///
void q_keychain__deletepasswordjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__deletepasswordjob_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keychain__deletepasswordjob_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback bool func(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event)
///
void q_keychain__deletepasswordjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QTimerEvent*
///
void q_keychain__deletepasswordjob_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QTimerEvent*
///
void q_keychain__deletepasswordjob_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QTimerEvent* event)
///
void q_keychain__deletepasswordjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QChildEvent*
///
void q_keychain__deletepasswordjob_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QChildEvent*
///
void q_keychain__deletepasswordjob_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QChildEvent* event)
///
void q_keychain__deletepasswordjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QEvent*
///
void q_keychain__deletepasswordjob_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param event QEvent*
///
void q_keychain__deletepasswordjob_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QEvent* event)
///
void q_keychain__deletepasswordjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__deletepasswordjob_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__deletepasswordjob_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QMetaMethod* signal)
///
void q_keychain__deletepasswordjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__deletepasswordjob_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal QMetaMethod*
///
void q_keychain__deletepasswordjob_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, QMetaMethod* signal)
///
void q_keychain__deletepasswordjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_do_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_qbase_do_start(void* self);

/// Inherited from QKeychain::Job
///
/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func()
///
void q_keychain__deletepasswordjob_on_do_start(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
///
QObject* q_keychain__deletepasswordjob_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
///
QObject* q_keychain__deletepasswordjob_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback QObject* func()
///
void q_keychain__deletepasswordjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
///
int32_t q_keychain__deletepasswordjob_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
///
int32_t q_keychain__deletepasswordjob_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback int32_t func()
///
void q_keychain__deletepasswordjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal const char*
///
int32_t q_keychain__deletepasswordjob_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal const char*
///
int32_t q_keychain__deletepasswordjob_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback int32_t func(QKeychain__DeletePasswordJob* self, const char* signal)
///
void q_keychain__deletepasswordjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal QMetaMethod*
///
bool q_keychain__deletepasswordjob_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param signal QMetaMethod*
///
bool q_keychain__deletepasswordjob_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback bool func(QKeychain__DeletePasswordJob* self, QMetaMethod* signal)
///
void q_keychain__deletepasswordjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeychain__DeletePasswordJob*
/// @param callback void func(QKeychain__DeletePasswordJob* self, const char* objectName)
///
void q_keychain__deletepasswordjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
/// Delete this object from C++ memory.
///
/// @param self QKeychain__DeletePasswordJob*
///
void q_keychain__deletepasswordjob_delete(void* self);

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
///
bool q_keychain_is_available();

/// [Upstream resources](https://github.com/frankosterfeld/qtkeychain)

typedef enum {
    QKEYCHAIN_ERROR_NOERROR = 0,
    QKEYCHAIN_ERROR_ENTRYNOTFOUND = 1,
    QKEYCHAIN_ERROR_COULDNOTDELETEENTRY = 2,
    QKEYCHAIN_ERROR_ACCESSDENIEDBYUSER = 3,
    QKEYCHAIN_ERROR_ACCESSDENIED = 4,
    QKEYCHAIN_ERROR_NOBACKENDAVAILABLE = 5,
    QKEYCHAIN_ERROR_NOTIMPLEMENTED = 6,
    QKEYCHAIN_ERROR_OTHERERROR = 7
} QKeychain__Error;

#endif
