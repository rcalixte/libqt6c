#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAMEINPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAMEINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvideoframeinput.html

/// q_videoframeinput_new constructs a new QVideoFrameInput object.
///
///
QVideoFrameInput* q_videoframeinput_new();

/// q_videoframeinput_new2 constructs a new QVideoFrameInput object.
///
/// ``` QVideoFrameFormat* format ```
QVideoFrameInput* q_videoframeinput_new2(void* format);

/// q_videoframeinput_new3 constructs a new QVideoFrameInput object.
///
/// ``` QObject* parent ```
QVideoFrameInput* q_videoframeinput_new3(void* parent);

/// q_videoframeinput_new4 constructs a new QVideoFrameInput object.
///
/// ``` QVideoFrameFormat* format, QObject* parent ```
QVideoFrameInput* q_videoframeinput_new4(void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVideoFrameInput* self ```
const QMetaObject* q_videoframeinput_meta_object(void* self);

/// ``` QVideoFrameInput* self, const char* param1 ```
void* q_videoframeinput_metacast(void* self, const char* param1);

/// ``` QVideoFrameInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videoframeinput_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVideoFrameInput* self, int32_t (*slot)(QVideoFrameInput*, enum QMetaObject__Call, int, void*) ```
void q_videoframeinput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVideoFrameInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videoframeinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_videoframeinput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeinput.html#sendVideoFrame)
///
/// ``` QVideoFrameInput* self, QVideoFrame* frame ```
bool q_videoframeinput_send_video_frame(void* self, void* frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeinput.html#format)
///
/// ``` QVideoFrameInput* self ```
QVideoFrameFormat* q_videoframeinput_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeinput.html#captureSession)
///
/// ``` QVideoFrameInput* self ```
QMediaCaptureSession* q_videoframeinput_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeinput.html#readyToSendVideoFrame)
///
/// ``` QVideoFrameInput* self ```
void q_videoframeinput_ready_to_send_video_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeinput.html#readyToSendVideoFrame)
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*) ```
void q_videoframeinput_on_ready_to_send_video_frame(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_videoframeinput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_videoframeinput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVideoFrameInput* self ```
const char* q_videoframeinput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVideoFrameInput* self, char* name ```
void q_videoframeinput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVideoFrameInput* self ```
bool q_videoframeinput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVideoFrameInput* self ```
bool q_videoframeinput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVideoFrameInput* self ```
bool q_videoframeinput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVideoFrameInput* self ```
bool q_videoframeinput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVideoFrameInput* self, bool b ```
bool q_videoframeinput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVideoFrameInput* self ```
QThread* q_videoframeinput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVideoFrameInput* self, QThread* thread ```
bool q_videoframeinput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoFrameInput* self, int interval ```
int32_t q_videoframeinput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVideoFrameInput* self, int id ```
void q_videoframeinput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVideoFrameInput* self, enum Qt__TimerId id ```
void q_videoframeinput_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVideoFrameInput* self ```
libqt_list /* of QObject* */ q_videoframeinput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVideoFrameInput* self, QObject* parent ```
void q_videoframeinput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVideoFrameInput* self, QObject* filterObj ```
void q_videoframeinput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVideoFrameInput* self, QObject* obj ```
void q_videoframeinput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_videoframeinput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoFrameInput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_videoframeinput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_videoframeinput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_videoframeinput_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVideoFrameInput* self ```
void q_videoframeinput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVideoFrameInput* self ```
void q_videoframeinput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVideoFrameInput* self, const char* name, QVariant* value ```
bool q_videoframeinput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVideoFrameInput* self, const char* name ```
QVariant* q_videoframeinput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVideoFrameInput* self ```
const char** q_videoframeinput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVideoFrameInput* self ```
QBindingStorage* q_videoframeinput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVideoFrameInput* self ```
const QBindingStorage* q_videoframeinput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoFrameInput* self ```
void q_videoframeinput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*) ```
void q_videoframeinput_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVideoFrameInput* self ```
QObject* q_videoframeinput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVideoFrameInput* self, const char* classname ```
bool q_videoframeinput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVideoFrameInput* self ```
void q_videoframeinput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVideoFrameInput* self, QThread* thread, Disambiguated_t* param2 ```
bool q_videoframeinput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoFrameInput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_videoframeinput_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videoframeinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoFrameInput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videoframeinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoFrameInput* self, QObject* param1 ```
void q_videoframeinput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, QObject*) ```
void q_videoframeinput_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QEvent* event ```
bool q_videoframeinput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QEvent* event ```
bool q_videoframeinput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, bool (*slot)(QVideoFrameInput*, QEvent*) ```
void q_videoframeinput_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QObject* watched, QEvent* event ```
bool q_videoframeinput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QObject* watched, QEvent* event ```
bool q_videoframeinput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, bool (*slot)(QVideoFrameInput*, QObject*, QEvent*) ```
void q_videoframeinput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QTimerEvent* event ```
void q_videoframeinput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QTimerEvent* event ```
void q_videoframeinput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, QTimerEvent*) ```
void q_videoframeinput_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QChildEvent* event ```
void q_videoframeinput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QChildEvent* event ```
void q_videoframeinput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, QChildEvent*) ```
void q_videoframeinput_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QEvent* event ```
void q_videoframeinput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QEvent* event ```
void q_videoframeinput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, QEvent*) ```
void q_videoframeinput_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QMetaMethod* signal ```
void q_videoframeinput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QMetaMethod* signal ```
void q_videoframeinput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, QMetaMethod*) ```
void q_videoframeinput_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QMetaMethod* signal ```
void q_videoframeinput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QMetaMethod* signal ```
void q_videoframeinput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, QMetaMethod*) ```
void q_videoframeinput_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self ```
QObject* q_videoframeinput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self ```
QObject* q_videoframeinput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QObject* (*slot)() ```
void q_videoframeinput_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self ```
int32_t q_videoframeinput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self ```
int32_t q_videoframeinput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, int32_t (*slot)() ```
void q_videoframeinput_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, const char* signal ```
int32_t q_videoframeinput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, const char* signal ```
int32_t q_videoframeinput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, int32_t (*slot)(QVideoFrameInput*, const char*) ```
void q_videoframeinput_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoFrameInput* self, QMetaMethod* signal ```
bool q_videoframeinput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoFrameInput* self, QMetaMethod* signal ```
bool q_videoframeinput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoFrameInput* self, bool (*slot)(QVideoFrameInput*, QMetaMethod*) ```
void q_videoframeinput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QVideoFrameInput* self, void (*slot)(QVideoFrameInput*, const char*) ```
void q_videoframeinput_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeinput.html#dtor.QVideoFrameInput)
///
/// Delete this object from C++ memory.
///
/// ``` QVideoFrameInput* self ```
void q_videoframeinput_delete(void* self);

#endif
