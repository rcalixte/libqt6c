#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQSCREENCAPTURE_H
#define SRC_MULTIMEDIA_QT6C_LIBQSCREENCAPTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html)

/// q_screencapture_new constructs a new QScreenCapture object.
///
QScreenCapture* q_screencapture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html)

/// q_screencapture_new2 constructs a new QScreenCapture object.
///
/// @param parent QObject*
///
QScreenCapture* q_screencapture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QScreenCapture*
///
const QMetaObject* q_screencapture_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QScreenCapture*
/// @param callback const QMetaObject* func()
///
void q_screencapture_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QScreenCapture*
///
const QMetaObject* q_screencapture_qbase_meta_object(void* self);

/// @param self QScreenCapture*
/// @param param1 const char*
///
void* q_screencapture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QScreenCapture*
/// @param callback void* func(QScreenCapture* self, const char* param1)
///
void q_screencapture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QScreenCapture*
/// @param param1 const char*
///
void* q_screencapture_qbase_metacast(void* self, const char* param1);

/// @param self QScreenCapture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_screencapture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QScreenCapture*
/// @param callback int32_t func(QScreenCapture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_screencapture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QScreenCapture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_screencapture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_screencapture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#captureSession)
///
/// @param self QScreenCapture*
///
QMediaCaptureSession* q_screencapture_capture_session(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#setScreen)
///
/// @param self QScreenCapture*
/// @param screen QScreen*
///
void q_screencapture_set_screen(void* self, void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#screen)
///
/// @param self QScreenCapture*
///
QScreen* q_screencapture_screen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#isActive)
///
/// @param self QScreenCapture*
///
bool q_screencapture_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#error)
///
/// @param self QScreenCapture*
///
/// @return enum QScreenCapture__Error
///
int32_t q_screencapture_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QScreenCapture*
///
const char* q_screencapture_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#setActive)
///
/// @param self QScreenCapture*
/// @param active bool
///
void q_screencapture_set_active(void* self, bool active);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#start)
///
/// @param self QScreenCapture*
///
void q_screencapture_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#stop)
///
/// @param self QScreenCapture*
///
void q_screencapture_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#activeChanged)
///
/// @param self QScreenCapture*
/// @param param1 bool
///
void q_screencapture_active_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#activeChanged)
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, bool param1)
///
void q_screencapture_on_active_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#errorChanged)
///
/// @param self QScreenCapture*
///
void q_screencapture_error_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#errorChanged)
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self)
///
void q_screencapture_on_error_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#screenChanged)
///
/// @param self QScreenCapture*
/// @param param1 QScreen*
///
void q_screencapture_screen_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#screenChanged)
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QScreen* param1)
///
void q_screencapture_on_screen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#errorOccurred)
///
/// @param self QScreenCapture*
/// @param error enum QScreenCapture__Error
/// @param errorString const char*
///
void q_screencapture_error_occurred(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#errorOccurred)
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, enum QScreenCapture__Error error, const char* errorString)
///
void q_screencapture_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_screencapture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_screencapture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QScreenCapture*
///
const char* q_screencapture_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QScreenCapture*
/// @param name const char*
///
void q_screencapture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QScreenCapture*
///
bool q_screencapture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QScreenCapture*
///
bool q_screencapture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QScreenCapture*
///
bool q_screencapture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QScreenCapture*
///
bool q_screencapture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QScreenCapture*
/// @param b bool
///
bool q_screencapture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QScreenCapture*
///
QThread* q_screencapture_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScreenCapture*
/// @param thread QThread*
///
bool q_screencapture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreenCapture*
/// @param interval int
///
int32_t q_screencapture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreenCapture*
/// @param time int64_t of nanoseconds
///
int32_t q_screencapture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScreenCapture*
/// @param id int
///
void q_screencapture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScreenCapture*
/// @param id enum Qt__TimerId
///
void q_screencapture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QScreenCapture*
///
/// @return libqt_list of QObject*
///
libqt_list q_screencapture_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QScreenCapture*
/// @param parent QObject*
///
void q_screencapture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QScreenCapture*
/// @param filterObj QObject*
///
void q_screencapture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QScreenCapture*
/// @param obj QObject*
///
void q_screencapture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_screencapture_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_screencapture_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QScreenCapture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_screencapture_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_screencapture_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_screencapture_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QScreenCapture*
///
bool q_screencapture_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QScreenCapture*
/// @param receiver QObject*
///
bool q_screencapture_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_screencapture_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QScreenCapture*
///
void q_screencapture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QScreenCapture*
///
void q_screencapture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QScreenCapture*
/// @param name const char*
/// @param value QVariant*
///
bool q_screencapture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QScreenCapture*
/// @param name const char*
///
QVariant* q_screencapture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QScreenCapture*
///
const char** q_screencapture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScreenCapture*
///
QBindingStorage* q_screencapture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScreenCapture*
///
const QBindingStorage* q_screencapture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreenCapture*
///
void q_screencapture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self)
///
void q_screencapture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QScreenCapture*
///
QObject* q_screencapture_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QScreenCapture*
/// @param classname const char*
///
bool q_screencapture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QScreenCapture*
///
void q_screencapture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreenCapture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_screencapture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScreenCapture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_screencapture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_screencapture_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_screencapture_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QScreenCapture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_screencapture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QScreenCapture*
/// @param signal const char*
///
bool q_screencapture_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QScreenCapture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_screencapture_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QScreenCapture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_screencapture_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QScreenCapture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_screencapture_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreenCapture*
/// @param param1 QObject*
///
void q_screencapture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QObject* param1)
///
void q_screencapture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QEvent*
///
bool q_screencapture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QEvent*
///
bool q_screencapture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback bool func(QScreenCapture* self, QEvent* event)
///
void q_screencapture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_screencapture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_screencapture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback bool func(QScreenCapture* self, QObject* watched, QEvent* event)
///
void q_screencapture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QTimerEvent*
///
void q_screencapture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QTimerEvent*
///
void q_screencapture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QTimerEvent* event)
///
void q_screencapture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QChildEvent*
///
void q_screencapture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QChildEvent*
///
void q_screencapture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QChildEvent* event)
///
void q_screencapture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QEvent*
///
void q_screencapture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param event QEvent*
///
void q_screencapture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QEvent* event)
///
void q_screencapture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal QMetaMethod*
///
void q_screencapture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal QMetaMethod*
///
void q_screencapture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QMetaMethod* signal)
///
void q_screencapture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal QMetaMethod*
///
void q_screencapture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal QMetaMethod*
///
void q_screencapture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, QMetaMethod* signal)
///
void q_screencapture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
///
QObject* q_screencapture_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
///
QObject* q_screencapture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback QObject* func()
///
void q_screencapture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
///
int32_t q_screencapture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
///
int32_t q_screencapture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback int32_t func()
///
void q_screencapture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal const char*
///
int32_t q_screencapture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal const char*
///
int32_t q_screencapture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback int32_t func(QScreenCapture* self, const char* signal)
///
void q_screencapture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal QMetaMethod*
///
bool q_screencapture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param signal QMetaMethod*
///
bool q_screencapture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenCapture*
/// @param callback bool func(QScreenCapture* self, QMetaMethod* signal)
///
void q_screencapture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QScreenCapture*
/// @param callback void func(QScreenCapture* self, const char* objectName)
///
void q_screencapture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#dtor.QScreenCapture)
///
/// Delete this object from C++ memory.
///
/// @param self QScreenCapture*
///
void q_screencapture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreencapture.html#public-types)

typedef enum {
    QSCREENCAPTURE_ERROR_NOERROR = 0,
    QSCREENCAPTURE_ERROR_INTERNALERROR = 1,
    QSCREENCAPTURE_ERROR_CAPTURINGNOTSUPPORTED = 2,
    QSCREENCAPTURE_ERROR_CAPTUREFAILED = 4,
    QSCREENCAPTURE_ERROR_NOTFOUND = 5
} QScreenCapture__Error;

#endif
