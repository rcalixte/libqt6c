#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQWINDOWCAPTURE_H
#define SRC_MULTIMEDIA_QT6C_LIBQWINDOWCAPTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html)

/// q_windowcapture_new constructs a new QWindowCapture object.
///
QWindowCapture* q_windowcapture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html)

/// q_windowcapture_new2 constructs a new QWindowCapture object.
///
/// @param parent QObject*
///
QWindowCapture* q_windowcapture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWindowCapture*
///
const QMetaObject* q_windowcapture_meta_object(void* self);

/// @param self QWindowCapture*
/// @param param1 const char*
///
void* q_windowcapture_metacast(void* self, const char* param1);

/// @param self QWindowCapture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_windowcapture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWindowCapture*
/// @param callback int32_t func(QWindowCapture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_windowcapture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWindowCapture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_windowcapture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_windowcapture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#capturableWindows)
///
/// @return libqt_list of QCapturableWindow*
///
libqt_list q_windowcapture_capturable_windows();

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#captureSession)
///
/// @param self QWindowCapture*
///
QMediaCaptureSession* q_windowcapture_capture_session(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#setWindow)
///
/// @param self QWindowCapture*
/// @param window QCapturableWindow*
///
void q_windowcapture_set_window(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#window)
///
/// @param self QWindowCapture*
///
QCapturableWindow* q_windowcapture_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#isActive)
///
/// @param self QWindowCapture*
///
bool q_windowcapture_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#error)
///
/// @param self QWindowCapture*
///
/// @return enum QWindowCapture__Error
///
int32_t q_windowcapture_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWindowCapture*
///
const char* q_windowcapture_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#setActive)
///
/// @param self QWindowCapture*
/// @param active bool
///
void q_windowcapture_set_active(void* self, bool active);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#start)
///
/// @param self QWindowCapture*
///
void q_windowcapture_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#stop)
///
/// @param self QWindowCapture*
///
void q_windowcapture_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#activeChanged)
///
/// @param self QWindowCapture*
/// @param param1 bool
///
void q_windowcapture_active_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#activeChanged)
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, bool param1)
///
void q_windowcapture_on_active_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#windowChanged)
///
/// @param self QWindowCapture*
/// @param window QCapturableWindow*
///
void q_windowcapture_window_changed(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#windowChanged)
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QCapturableWindow* window)
///
void q_windowcapture_on_window_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#errorChanged)
///
/// @param self QWindowCapture*
///
void q_windowcapture_error_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#errorChanged)
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self)
///
void q_windowcapture_on_error_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#errorOccurred)
///
/// @param self QWindowCapture*
/// @param error enum QWindowCapture__Error
/// @param errorString const char*
///
void q_windowcapture_error_occurred(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#errorOccurred)
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, enum QWindowCapture__Error error, const char* errorString)
///
void q_windowcapture_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_windowcapture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_windowcapture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWindowCapture*
///
const char* q_windowcapture_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWindowCapture*
/// @param name char*
///
void q_windowcapture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWindowCapture*
///
bool q_windowcapture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWindowCapture*
///
bool q_windowcapture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWindowCapture*
///
bool q_windowcapture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWindowCapture*
///
bool q_windowcapture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWindowCapture*
/// @param b bool
///
bool q_windowcapture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWindowCapture*
///
QThread* q_windowcapture_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWindowCapture*
/// @param thread QThread*
///
bool q_windowcapture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWindowCapture*
/// @param interval int
///
int32_t q_windowcapture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWindowCapture*
/// @param id int
///
void q_windowcapture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWindowCapture*
/// @param id enum Qt__TimerId
///
void q_windowcapture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWindowCapture*
///
/// @return libqt_list of QObject*
///
libqt_list q_windowcapture_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWindowCapture*
/// @param parent QObject*
///
void q_windowcapture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWindowCapture*
/// @param filterObj QObject*
///
void q_windowcapture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWindowCapture*
/// @param obj QObject*
///
void q_windowcapture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_windowcapture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWindowCapture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_windowcapture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_windowcapture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_windowcapture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWindowCapture*
///
void q_windowcapture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWindowCapture*
///
void q_windowcapture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWindowCapture*
/// @param name const char*
/// @param value QVariant*
///
bool q_windowcapture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWindowCapture*
/// @param name const char*
///
QVariant* q_windowcapture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWindowCapture*
///
const char** q_windowcapture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWindowCapture*
///
QBindingStorage* q_windowcapture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWindowCapture*
///
const QBindingStorage* q_windowcapture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindowCapture*
///
void q_windowcapture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self)
///
void q_windowcapture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWindowCapture*
///
QObject* q_windowcapture_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWindowCapture*
/// @param classname const char*
///
bool q_windowcapture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWindowCapture*
///
void q_windowcapture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWindowCapture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_windowcapture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWindowCapture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_windowcapture_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_windowcapture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWindowCapture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_windowcapture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindowCapture*
/// @param param1 QObject*
///
void q_windowcapture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QObject* param1)
///
void q_windowcapture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QEvent*
///
bool q_windowcapture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QEvent*
///
bool q_windowcapture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback bool func(QWindowCapture* self, QEvent* event)
///
void q_windowcapture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_windowcapture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_windowcapture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback bool func(QWindowCapture* self, QObject* watched, QEvent* event)
///
void q_windowcapture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QTimerEvent*
///
void q_windowcapture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QTimerEvent*
///
void q_windowcapture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QTimerEvent* event)
///
void q_windowcapture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QChildEvent*
///
void q_windowcapture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QChildEvent*
///
void q_windowcapture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QChildEvent* event)
///
void q_windowcapture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QEvent*
///
void q_windowcapture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param event QEvent*
///
void q_windowcapture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QEvent* event)
///
void q_windowcapture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal QMetaMethod*
///
void q_windowcapture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal QMetaMethod*
///
void q_windowcapture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QMetaMethod* signal)
///
void q_windowcapture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal QMetaMethod*
///
void q_windowcapture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal QMetaMethod*
///
void q_windowcapture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, QMetaMethod* signal)
///
void q_windowcapture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
///
QObject* q_windowcapture_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
///
QObject* q_windowcapture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback QObject* func()
///
void q_windowcapture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
///
int32_t q_windowcapture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
///
int32_t q_windowcapture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback int32_t func()
///
void q_windowcapture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal const char*
///
int32_t q_windowcapture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal const char*
///
int32_t q_windowcapture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback int32_t func(QWindowCapture* self, const char* signal)
///
void q_windowcapture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal QMetaMethod*
///
bool q_windowcapture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param signal QMetaMethod*
///
bool q_windowcapture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowCapture*
/// @param callback bool func(QWindowCapture* self, QMetaMethod* signal)
///
void q_windowcapture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWindowCapture*
/// @param callback void func(QWindowCapture* self, const char* objectName)
///
void q_windowcapture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#dtor.QWindowCapture)
///
/// Delete this object from C++ memory.
///
/// @param self QWindowCapture*
///
void q_windowcapture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowcapture.html#public-types)

typedef enum {
    QWINDOWCAPTURE_ERROR_NOERROR = 0,
    QWINDOWCAPTURE_ERROR_INTERNALERROR = 1,
    QWINDOWCAPTURE_ERROR_CAPTURINGNOTSUPPORTED = 2,
    QWINDOWCAPTURE_ERROR_CAPTUREFAILED = 4,
    QWINDOWCAPTURE_ERROR_NOTFOUND = 5
} QWindowCapture__Error;

#endif
