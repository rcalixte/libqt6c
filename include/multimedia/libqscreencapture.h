#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQSCREENCAPTURE_H
#define SRC_MULTIMEDIAQT6C_LIBQSCREENCAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qscreencapture.html

/// q_screencapture_new constructs a new QScreenCapture object.
///
///
QScreenCapture* q_screencapture_new();

/// q_screencapture_new2 constructs a new QScreenCapture object.
///
/// ``` QObject* parent ```
QScreenCapture* q_screencapture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScreenCapture* self ```
const QMetaObject* q_screencapture_meta_object(void* self);

/// ``` QScreenCapture* self, const char* param1 ```
void* q_screencapture_metacast(void* self, const char* param1);

/// ``` QScreenCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_screencapture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QScreenCapture* self, int32_t (*slot)(QScreenCapture*, enum QMetaObject__Call, int, void*) ```
void q_screencapture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QScreenCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_screencapture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_screencapture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#captureSession)
///
/// ``` QScreenCapture* self ```
QMediaCaptureSession* q_screencapture_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#setScreen)
///
/// ``` QScreenCapture* self, QScreen* screen ```
void q_screencapture_set_screen(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#screen)
///
/// ``` QScreenCapture* self ```
QScreen* q_screencapture_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#isActive)
///
/// ``` QScreenCapture* self ```
bool q_screencapture_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#error)
///
/// ``` QScreenCapture* self ```
int64_t q_screencapture_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#errorString)
///
/// ``` QScreenCapture* self ```
const char* q_screencapture_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#setActive)
///
/// ``` QScreenCapture* self, bool active ```
void q_screencapture_set_active(void* self, bool active);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#start)
///
/// ``` QScreenCapture* self ```
void q_screencapture_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#stop)
///
/// ``` QScreenCapture* self ```
void q_screencapture_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#activeChanged)
///
/// ``` QScreenCapture* self, bool param1 ```
void q_screencapture_active_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#activeChanged)
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, bool) ```
void q_screencapture_on_active_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#errorChanged)
///
/// ``` QScreenCapture* self ```
void q_screencapture_error_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#errorChanged)
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*) ```
void q_screencapture_on_error_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#screenChanged)
///
/// ``` QScreenCapture* self, QScreen* param1 ```
void q_screencapture_screen_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#screenChanged)
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, QScreen*) ```
void q_screencapture_on_screen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#errorOccurred)
///
/// ``` QScreenCapture* self, enum QScreenCapture__Error errorVal, const char* errorString ```
void q_screencapture_error_occurred(void* self, int64_t errorVal, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#errorOccurred)
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, enum QScreenCapture__Error, const char*) ```
void q_screencapture_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_screencapture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_screencapture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScreenCapture* self ```
const char* q_screencapture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScreenCapture* self, char* name ```
void q_screencapture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScreenCapture* self ```
bool q_screencapture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScreenCapture* self ```
bool q_screencapture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScreenCapture* self ```
bool q_screencapture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScreenCapture* self ```
bool q_screencapture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScreenCapture* self, bool b ```
bool q_screencapture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScreenCapture* self ```
QThread* q_screencapture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScreenCapture* self, QThread* thread ```
bool q_screencapture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScreenCapture* self, int interval ```
int32_t q_screencapture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScreenCapture* self, int id ```
void q_screencapture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScreenCapture* self, enum Qt__TimerId id ```
void q_screencapture_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScreenCapture* self ```
libqt_list /* of QObject* */ q_screencapture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QScreenCapture* self, QObject* parent ```
void q_screencapture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScreenCapture* self, QObject* filterObj ```
void q_screencapture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScreenCapture* self, QObject* obj ```
void q_screencapture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_screencapture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScreenCapture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_screencapture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_screencapture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_screencapture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScreenCapture* self ```
void q_screencapture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScreenCapture* self ```
void q_screencapture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScreenCapture* self, const char* name, QVariant* value ```
bool q_screencapture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScreenCapture* self, const char* name ```
QVariant* q_screencapture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScreenCapture* self ```
const char** q_screencapture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScreenCapture* self ```
QBindingStorage* q_screencapture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScreenCapture* self ```
const QBindingStorage* q_screencapture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreenCapture* self ```
void q_screencapture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreenCapture* self, void (*slot)(QObject*) ```
void q_screencapture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScreenCapture* self ```
QObject* q_screencapture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScreenCapture* self, const char* classname ```
bool q_screencapture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScreenCapture* self ```
void q_screencapture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScreenCapture* self, QThread* thread, Disambiguated_t* param2 ```
bool q_screencapture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScreenCapture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_screencapture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_screencapture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScreenCapture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_screencapture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreenCapture* self, QObject* param1 ```
void q_screencapture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScreenCapture* self, void (*slot)(QObject*, QObject*) ```
void q_screencapture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QEvent* event ```
bool q_screencapture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QEvent* event ```
bool q_screencapture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, bool (*slot)(QScreenCapture*, QEvent*) ```
void q_screencapture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QObject* watched, QEvent* event ```
bool q_screencapture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QObject* watched, QEvent* event ```
bool q_screencapture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, bool (*slot)(QScreenCapture*, QObject*, QEvent*) ```
void q_screencapture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QTimerEvent* event ```
void q_screencapture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QTimerEvent* event ```
void q_screencapture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, QTimerEvent*) ```
void q_screencapture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QChildEvent* event ```
void q_screencapture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QChildEvent* event ```
void q_screencapture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, QChildEvent*) ```
void q_screencapture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QEvent* event ```
void q_screencapture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QEvent* event ```
void q_screencapture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, QEvent*) ```
void q_screencapture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QMetaMethod* signal ```
void q_screencapture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QMetaMethod* signal ```
void q_screencapture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, QMetaMethod*) ```
void q_screencapture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QMetaMethod* signal ```
void q_screencapture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QMetaMethod* signal ```
void q_screencapture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, void (*slot)(QScreenCapture*, QMetaMethod*) ```
void q_screencapture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self ```
QObject* q_screencapture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self ```
QObject* q_screencapture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, QObject* (*slot)() ```
void q_screencapture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self ```
int32_t q_screencapture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self ```
int32_t q_screencapture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, int32_t (*slot)() ```
void q_screencapture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, const char* signal ```
int32_t q_screencapture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, const char* signal ```
int32_t q_screencapture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, int32_t (*slot)(QScreenCapture*, const char*) ```
void q_screencapture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenCapture* self, QMetaMethod* signal ```
bool q_screencapture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenCapture* self, QMetaMethod* signal ```
bool q_screencapture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenCapture* self, bool (*slot)(QScreenCapture*, QMetaMethod*) ```
void q_screencapture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QScreenCapture* self, void (*slot)(QObject*, const char*) ```
void q_screencapture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscreencapture.html#dtor.QScreenCapture)
///
/// Delete this object from C++ memory.
///
/// ``` QScreenCapture* self ```
void q_screencapture_delete(void* self);

/// https://doc.qt.io/qt-6/qscreencapture.html#types

typedef enum {
    QSCREENCAPTURE_ERROR_NOERROR = 0,
    QSCREENCAPTURE_ERROR_INTERNALERROR = 1,
    QSCREENCAPTURE_ERROR_CAPTURINGNOTSUPPORTED = 2,
    QSCREENCAPTURE_ERROR_CAPTUREFAILED = 4,
    QSCREENCAPTURE_ERROR_NOTFOUND = 5
} QScreenCapture__Error;

#endif
