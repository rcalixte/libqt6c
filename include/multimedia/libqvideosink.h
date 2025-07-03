#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQVIDEOSINK_H
#define SRC_MULTIMEDIAQT6C_LIBQVIDEOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "libqvideoframe.h"

/// https://doc.qt.io/qt-6/qvideosink.html

/// q_videosink_new constructs a new QVideoSink object.
///
///
QVideoSink* q_videosink_new();

/// q_videosink_new2 constructs a new QVideoSink object.
///
/// ``` QObject* parent ```
QVideoSink* q_videosink_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVideoSink* self ```
const QMetaObject* q_videosink_meta_object(void* self);

/// ``` QVideoSink* self, const char* param1 ```
void* q_videosink_metacast(void* self, const char* param1);

/// ``` QVideoSink* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videosink_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVideoSink* self, int32_t (*slot)(QVideoSink*, enum QMetaObject__Call, int, void*) ```
void q_videosink_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVideoSink* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_videosink_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoSize)
///
/// ``` QVideoSink* self ```
QSize* q_videosink_video_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#subtitleText)
///
/// ``` QVideoSink* self ```
const char* q_videosink_subtitle_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#setSubtitleText)
///
/// ``` QVideoSink* self, const char* subtitle ```
void q_videosink_set_subtitle_text(void* self, const char* subtitle);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#setVideoFrame)
///
/// ``` QVideoSink* self, QVideoFrame* frame ```
void q_videosink_set_video_frame(void* self, void* frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoFrame)
///
/// ``` QVideoSink* self ```
QVideoFrame* q_videosink_video_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoFrameChanged)
///
/// ``` QVideoSink* self, QVideoFrame* frame ```
void q_videosink_video_frame_changed(void* self, void* frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoFrameChanged)
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QVideoFrame*) ```
void q_videosink_on_video_frame_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#subtitleTextChanged)
///
/// ``` QVideoSink* self, const char* subtitleText ```
void q_videosink_subtitle_text_changed(void* self, const char* subtitleText);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#subtitleTextChanged)
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, const char*) ```
void q_videosink_on_subtitle_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoSizeChanged)
///
/// ``` QVideoSink* self ```
void q_videosink_video_size_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoSizeChanged)
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*) ```
void q_videosink_on_video_size_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_videosink_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_videosink_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVideoSink* self ```
const char* q_videosink_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVideoSink* self, char* name ```
void q_videosink_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVideoSink* self ```
bool q_videosink_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVideoSink* self ```
bool q_videosink_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVideoSink* self ```
bool q_videosink_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVideoSink* self ```
bool q_videosink_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVideoSink* self, bool b ```
bool q_videosink_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVideoSink* self ```
QThread* q_videosink_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVideoSink* self, QThread* thread ```
void q_videosink_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoSink* self, int interval ```
int32_t q_videosink_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVideoSink* self, int id ```
void q_videosink_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVideoSink* self ```
libqt_list /* of QObject* */ q_videosink_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVideoSink* self, QObject* parent ```
void q_videosink_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVideoSink* self, QObject* filterObj ```
void q_videosink_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVideoSink* self, QObject* obj ```
void q_videosink_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_videosink_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoSink* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_videosink_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_videosink_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_videosink_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVideoSink* self ```
void q_videosink_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVideoSink* self ```
void q_videosink_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVideoSink* self, const char* name, QVariant* value ```
bool q_videosink_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVideoSink* self, const char* name ```
QVariant* q_videosink_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVideoSink* self ```
const char** q_videosink_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVideoSink* self ```
QBindingStorage* q_videosink_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVideoSink* self ```
const QBindingStorage* q_videosink_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoSink* self ```
void q_videosink_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoSink* self, void (*slot)(QObject*) ```
void q_videosink_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVideoSink* self ```
QObject* q_videosink_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVideoSink* self, const char* classname ```
bool q_videosink_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVideoSink* self ```
void q_videosink_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoSink* self, int interval, enum Qt__TimerType timerType ```
int32_t q_videosink_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoSink* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoSink* self, QObject* param1 ```
void q_videosink_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoSink* self, void (*slot)(QObject*, QObject*) ```
void q_videosink_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
bool q_videosink_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
bool q_videosink_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, bool (*slot)(QVideoSink*, QEvent*) ```
void q_videosink_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QObject* watched, QEvent* event ```
bool q_videosink_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QObject* watched, QEvent* event ```
bool q_videosink_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, bool (*slot)(QVideoSink*, QObject*, QEvent*) ```
void q_videosink_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QTimerEvent* event ```
void q_videosink_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QTimerEvent* event ```
void q_videosink_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QTimerEvent*) ```
void q_videosink_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QChildEvent* event ```
void q_videosink_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QChildEvent* event ```
void q_videosink_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QChildEvent*) ```
void q_videosink_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
void q_videosink_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
void q_videosink_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QEvent*) ```
void q_videosink_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QMetaMethod*) ```
void q_videosink_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QMetaMethod*) ```
void q_videosink_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self ```
QObject* q_videosink_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self ```
QObject* q_videosink_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, QObject* (*slot)() ```
void q_videosink_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self ```
int32_t q_videosink_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self ```
int32_t q_videosink_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, int32_t (*slot)() ```
void q_videosink_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, const char* signal ```
int32_t q_videosink_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, const char* signal ```
int32_t q_videosink_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, int32_t (*slot)(QVideoSink*, const char*) ```
void q_videosink_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
bool q_videosink_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
bool q_videosink_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, bool (*slot)(QVideoSink*, QMetaMethod*) ```
void q_videosink_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QVideoSink* self, void (*slot)(QObject*, const char*) ```
void q_videosink_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#dtor.QVideoSink)
///
/// Delete this object from C++ memory.
///
/// ``` QVideoSink* self ```
void q_videosink_delete(void* self);

#endif
