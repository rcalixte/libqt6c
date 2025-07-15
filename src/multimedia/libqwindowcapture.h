#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQWINDOWCAPTURE_H
#define SRC_MULTIMEDIAQT6C_LIBQWINDOWCAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwindowcapture.html

/// q_windowcapture_new constructs a new QWindowCapture object.
///
///
QWindowCapture* q_windowcapture_new();

/// q_windowcapture_new2 constructs a new QWindowCapture object.
///
/// ``` QObject* parent ```
QWindowCapture* q_windowcapture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWindowCapture* self ```
const QMetaObject* q_windowcapture_meta_object(void* self);

/// ``` QWindowCapture* self, const char* param1 ```
void* q_windowcapture_metacast(void* self, const char* param1);

/// ``` QWindowCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_windowcapture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWindowCapture* self, int32_t (*slot)(QWindowCapture*, enum QMetaObject__Call, int, void*) ```
void q_windowcapture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWindowCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_windowcapture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_windowcapture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#capturableWindows)
///
///
libqt_list /* of QCapturableWindow* */ q_windowcapture_capturable_windows();

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#captureSession)
///
/// ``` QWindowCapture* self ```
QMediaCaptureSession* q_windowcapture_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#setWindow)
///
/// ``` QWindowCapture* self, QCapturableWindow* window ```
void q_windowcapture_set_window(void* self, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#window)
///
/// ``` QWindowCapture* self ```
QCapturableWindow* q_windowcapture_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#isActive)
///
/// ``` QWindowCapture* self ```
bool q_windowcapture_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#error)
///
/// ``` QWindowCapture* self ```
int64_t q_windowcapture_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#errorString)
///
/// ``` QWindowCapture* self ```
const char* q_windowcapture_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#setActive)
///
/// ``` QWindowCapture* self, bool active ```
void q_windowcapture_set_active(void* self, bool active);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#start)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#stop)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#activeChanged)
///
/// ``` QWindowCapture* self, bool param1 ```
void q_windowcapture_active_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#activeChanged)
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, bool) ```
void q_windowcapture_on_active_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#windowChanged)
///
/// ``` QWindowCapture* self, QCapturableWindow* window ```
void q_windowcapture_window_changed(void* self, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#windowChanged)
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, QCapturableWindow*) ```
void q_windowcapture_on_window_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#errorChanged)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_error_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#errorChanged)
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*) ```
void q_windowcapture_on_error_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#errorOccurred)
///
/// ``` QWindowCapture* self, enum QWindowCapture__Error errorVal, const char* errorString ```
void q_windowcapture_error_occurred(void* self, int64_t errorVal, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#errorOccurred)
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, enum QWindowCapture__Error, const char*) ```
void q_windowcapture_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_windowcapture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_windowcapture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWindowCapture* self ```
const char* q_windowcapture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWindowCapture* self, char* name ```
void q_windowcapture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWindowCapture* self ```
bool q_windowcapture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWindowCapture* self ```
bool q_windowcapture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWindowCapture* self ```
bool q_windowcapture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWindowCapture* self ```
bool q_windowcapture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWindowCapture* self, bool b ```
bool q_windowcapture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWindowCapture* self ```
QThread* q_windowcapture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWindowCapture* self, QThread* thread ```
bool q_windowcapture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWindowCapture* self, int interval ```
int32_t q_windowcapture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWindowCapture* self, int id ```
void q_windowcapture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWindowCapture* self, enum Qt__TimerId id ```
void q_windowcapture_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWindowCapture* self ```
libqt_list /* of QObject* */ q_windowcapture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWindowCapture* self, QObject* parent ```
void q_windowcapture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWindowCapture* self, QObject* filterObj ```
void q_windowcapture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWindowCapture* self, QObject* obj ```
void q_windowcapture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_windowcapture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWindowCapture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_windowcapture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_windowcapture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_windowcapture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWindowCapture* self, const char* name, QVariant* value ```
bool q_windowcapture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWindowCapture* self, const char* name ```
QVariant* q_windowcapture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWindowCapture* self ```
const char** q_windowcapture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWindowCapture* self ```
QBindingStorage* q_windowcapture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWindowCapture* self ```
const QBindingStorage* q_windowcapture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindowCapture* self, void (*slot)(QObject*) ```
void q_windowcapture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWindowCapture* self ```
QObject* q_windowcapture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWindowCapture* self, const char* classname ```
bool q_windowcapture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWindowCapture* self ```
void q_windowcapture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWindowCapture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_windowcapture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWindowCapture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_windowcapture_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_windowcapture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWindowCapture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_windowcapture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindowCapture* self, QObject* param1 ```
void q_windowcapture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindowCapture* self, void (*slot)(QObject*, QObject*) ```
void q_windowcapture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QEvent* event ```
bool q_windowcapture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QEvent* event ```
bool q_windowcapture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, bool (*slot)(QWindowCapture*, QEvent*) ```
void q_windowcapture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QObject* watched, QEvent* event ```
bool q_windowcapture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QObject* watched, QEvent* event ```
bool q_windowcapture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, bool (*slot)(QWindowCapture*, QObject*, QEvent*) ```
void q_windowcapture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QTimerEvent* event ```
void q_windowcapture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QTimerEvent* event ```
void q_windowcapture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, QTimerEvent*) ```
void q_windowcapture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QChildEvent* event ```
void q_windowcapture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QChildEvent* event ```
void q_windowcapture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, QChildEvent*) ```
void q_windowcapture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QEvent* event ```
void q_windowcapture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QEvent* event ```
void q_windowcapture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, QEvent*) ```
void q_windowcapture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QMetaMethod* signal ```
void q_windowcapture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QMetaMethod* signal ```
void q_windowcapture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, QMetaMethod*) ```
void q_windowcapture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QMetaMethod* signal ```
void q_windowcapture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QMetaMethod* signal ```
void q_windowcapture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, void (*slot)(QWindowCapture*, QMetaMethod*) ```
void q_windowcapture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self ```
QObject* q_windowcapture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self ```
QObject* q_windowcapture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, QObject* (*slot)() ```
void q_windowcapture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self ```
int32_t q_windowcapture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self ```
int32_t q_windowcapture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, int32_t (*slot)() ```
void q_windowcapture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, const char* signal ```
int32_t q_windowcapture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, const char* signal ```
int32_t q_windowcapture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, int32_t (*slot)(QWindowCapture*, const char*) ```
void q_windowcapture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowCapture* self, QMetaMethod* signal ```
bool q_windowcapture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowCapture* self, QMetaMethod* signal ```
bool q_windowcapture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowCapture* self, bool (*slot)(QWindowCapture*, QMetaMethod*) ```
void q_windowcapture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWindowCapture* self, void (*slot)(QObject*, const char*) ```
void q_windowcapture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowcapture.html#dtor.QWindowCapture)
///
/// Delete this object from C++ memory.
///
/// ``` QWindowCapture* self ```
void q_windowcapture_delete(void* self);

/// https://doc.qt.io/qt-6/qwindowcapture.html#types

typedef enum {
    QWINDOWCAPTURE_ERROR_NOERROR = 0,
    QWINDOWCAPTURE_ERROR_INTERNALERROR = 1,
    QWINDOWCAPTURE_ERROR_CAPTURINGNOTSUPPORTED = 2,
    QWINDOWCAPTURE_ERROR_CAPTUREFAILED = 4,
    QWINDOWCAPTURE_ERROR_NOTFOUND = 5
} QWindowCapture__Error;

#endif
