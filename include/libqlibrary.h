#pragma once
#ifndef SRC_QT6C_LIBQLIBRARY_H
#define SRC_QT6C_LIBQLIBRARY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new constructs a new QLibrary object.
///
QLibrary* q_library_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new2 constructs a new QLibrary object.
///
/// @param fileName const char*
///
QLibrary* q_library_new2(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new3 constructs a new QLibrary object.
///
/// @param fileName const char*
/// @param verNum int
///
QLibrary* q_library_new3(const char* fileName, int verNum);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new4 constructs a new QLibrary object.
///
/// @param fileName const char*
/// @param version const char*
///
QLibrary* q_library_new4(const char* fileName, const char* version);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new5 constructs a new QLibrary object.
///
/// @param parent QObject*
///
QLibrary* q_library_new5(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new6 constructs a new QLibrary object.
///
/// @param fileName const char*
/// @param parent QObject*
///
QLibrary* q_library_new6(const char* fileName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new7 constructs a new QLibrary object.
///
/// @param fileName const char*
/// @param verNum int
/// @param parent QObject*
///
QLibrary* q_library_new7(const char* fileName, int verNum, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html)

/// q_library_new8 constructs a new QLibrary object.
///
/// @param fileName const char*
/// @param version const char*
/// @param parent QObject*
///
QLibrary* q_library_new8(const char* fileName, const char* version, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLibrary*
///
const QMetaObject* q_library_meta_object(void* self);

/// @param self QLibrary*
/// @param param1 const char*
///
void* q_library_metacast(void* self, const char* param1);

/// @param self QLibrary*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_library_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLibrary*
/// @param callback int32_t func(QLibrary* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_library_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLibrary*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_library_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_library_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#load)
///
/// @param self QLibrary*
///
bool q_library_load(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#unload)
///
/// @param self QLibrary*
///
bool q_library_unload(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#isLoaded)
///
/// @param self QLibrary*
///
bool q_library_is_loaded(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#isLibrary)
///
/// @param fileName const char*
///
bool q_library_is_library(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#setFileName)
///
/// @param self QLibrary*
/// @param fileName const char*
///
void q_library_set_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLibrary*
///
const char* q_library_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#setFileNameAndVersion)
///
/// @param self QLibrary*
/// @param fileName const char*
/// @param verNum int
///
void q_library_set_file_name_and_version(void* self, const char* fileName, int verNum);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#setFileNameAndVersion)
///
/// @param self QLibrary*
/// @param fileName const char*
/// @param version const char*
///
void q_library_set_file_name_and_version2(void* self, const char* fileName, const char* version);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLibrary*
///
const char* q_library_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#setLoadHints)
///
/// @param self QLibrary*
/// @param hints flag of enum QLibrary__LoadHint
///
void q_library_set_load_hints(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#loadHints)
///
/// @param self QLibrary*
///
/// @return flag of enum QLibrary__LoadHint
///
int32_t q_library_load_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_library_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_library_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLibrary*
///
const char* q_library_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLibrary*
/// @param name char*
///
void q_library_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLibrary*
///
bool q_library_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLibrary*
///
bool q_library_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLibrary*
///
bool q_library_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLibrary*
///
bool q_library_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLibrary*
/// @param b bool
///
bool q_library_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLibrary*
///
QThread* q_library_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLibrary*
/// @param thread QThread*
///
bool q_library_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLibrary*
/// @param interval int
///
int32_t q_library_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLibrary*
/// @param time int64_t of nanoseconds
///
int32_t q_library_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLibrary*
/// @param id int
///
void q_library_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLibrary*
/// @param id enum Qt__TimerId
///
void q_library_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLibrary*
///
/// @return libqt_list of QObject*
///
libqt_list q_library_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLibrary*
/// @param parent QObject*
///
void q_library_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLibrary*
/// @param filterObj QObject*
///
void q_library_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLibrary*
/// @param obj QObject*
///
void q_library_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_library_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLibrary*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_library_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_library_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_library_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLibrary*
///
void q_library_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLibrary*
///
void q_library_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLibrary*
/// @param name const char*
/// @param value QVariant*
///
bool q_library_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLibrary*
/// @param name const char*
///
QVariant* q_library_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLibrary*
///
const char** q_library_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLibrary*
///
QBindingStorage* q_library_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLibrary*
///
const QBindingStorage* q_library_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLibrary*
///
void q_library_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self)
///
void q_library_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLibrary*
///
QObject* q_library_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLibrary*
/// @param classname const char*
///
bool q_library_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLibrary*
///
void q_library_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLibrary*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_library_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLibrary*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_library_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLibrary*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_library_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_library_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLibrary*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_library_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLibrary*
/// @param param1 QObject*
///
void q_library_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, QObject* param1)
///
void q_library_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param event QEvent*
///
bool q_library_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param event QEvent*
///
bool q_library_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback bool func(QLibrary* self, QEvent* event)
///
void q_library_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_library_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_library_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback bool func(QLibrary* self, QObject* watched, QEvent* event)
///
void q_library_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param event QTimerEvent*
///
void q_library_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param event QTimerEvent*
///
void q_library_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, QTimerEvent* event)
///
void q_library_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param event QChildEvent*
///
void q_library_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param event QChildEvent*
///
void q_library_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, QChildEvent* event)
///
void q_library_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param event QEvent*
///
void q_library_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param event QEvent*
///
void q_library_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, QEvent* event)
///
void q_library_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param signal QMetaMethod*
///
void q_library_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param signal QMetaMethod*
///
void q_library_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, QMetaMethod* signal)
///
void q_library_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param signal QMetaMethod*
///
void q_library_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param signal QMetaMethod*
///
void q_library_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, QMetaMethod* signal)
///
void q_library_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
///
QObject* q_library_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
///
QObject* q_library_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback QObject* func()
///
void q_library_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
///
int32_t q_library_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
///
int32_t q_library_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback int32_t func()
///
void q_library_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param signal const char*
///
int32_t q_library_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param signal const char*
///
int32_t q_library_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback int32_t func(QLibrary* self, const char* signal)
///
void q_library_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLibrary*
/// @param signal QMetaMethod*
///
bool q_library_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLibrary*
/// @param signal QMetaMethod*
///
bool q_library_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLibrary*
/// @param callback bool func(QLibrary* self, QMetaMethod* signal)
///
void q_library_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLibrary*
/// @param callback void func(QLibrary* self, const char* objectName)
///
void q_library_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#dtor.QLibrary)
///
/// Delete this object from C++ memory.
///
/// @param self QLibrary*
///
void q_library_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlibrary.html#public-types)

typedef enum {
    QLIBRARY_LOADHINT_RESOLVEALLSYMBOLSHINT = 1,
    QLIBRARY_LOADHINT_EXPORTEXTERNALSYMBOLSHINT = 2,
    QLIBRARY_LOADHINT_LOADARCHIVEMEMBERHINT = 4,
    QLIBRARY_LOADHINT_PREVENTUNLOADHINT = 8,
    QLIBRARY_LOADHINT_DEEPBINDHINT = 16
} QLibrary__LoadHint;

#endif
