#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIACAPTURESESSION_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIACAPTURESESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qmediacapturesession.html

/// q_mediacapturesession_new constructs a new QMediaCaptureSession object.
///
///
QMediaCaptureSession* q_mediacapturesession_new();

/// q_mediacapturesession_new2 constructs a new QMediaCaptureSession object.
///
/// ``` QObject* parent ```
QMediaCaptureSession* q_mediacapturesession_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaCaptureSession* self ```
const QMetaObject* q_mediacapturesession_meta_object(void* self);

/// ``` QMediaCaptureSession* self, const char* param1 ```
void* q_mediacapturesession_metacast(void* self, const char* param1);

/// ``` QMediaCaptureSession* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediacapturesession_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMediaCaptureSession* self, int32_t (*slot)(QMediaCaptureSession*, enum QMetaObject__Call, int, void*) ```
void q_mediacapturesession_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMediaCaptureSession* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediacapturesession_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediacapturesession_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInput)
///
/// ``` QMediaCaptureSession* self ```
QAudioInput* q_mediacapturesession_audio_input(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioInput)
///
/// ``` QMediaCaptureSession* self, QAudioInput* input ```
void q_mediacapturesession_set_audio_input(void* self, void* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInput)
///
/// ``` QMediaCaptureSession* self ```
QAudioBufferInput* q_mediacapturesession_audio_buffer_input(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioBufferInput)
///
/// ``` QMediaCaptureSession* self, QAudioBufferInput* input ```
void q_mediacapturesession_set_audio_buffer_input(void* self, void* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#camera)
///
/// ``` QMediaCaptureSession* self ```
QCamera* q_mediacapturesession_camera(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setCamera)
///
/// ``` QMediaCaptureSession* self, QCamera* camera ```
void q_mediacapturesession_set_camera(void* self, void* camera);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCapture)
///
/// ``` QMediaCaptureSession* self ```
QImageCapture* q_mediacapturesession_image_capture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setImageCapture)
///
/// ``` QMediaCaptureSession* self, QImageCapture* imageCapture ```
void q_mediacapturesession_set_image_capture(void* self, void* imageCapture);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCapture)
///
/// ``` QMediaCaptureSession* self ```
QScreenCapture* q_mediacapturesession_screen_capture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setScreenCapture)
///
/// ``` QMediaCaptureSession* self, QScreenCapture* screenCapture ```
void q_mediacapturesession_set_screen_capture(void* self, void* screenCapture);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCapture)
///
/// ``` QMediaCaptureSession* self ```
QWindowCapture* q_mediacapturesession_window_capture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setWindowCapture)
///
/// ``` QMediaCaptureSession* self, QWindowCapture* windowCapture ```
void q_mediacapturesession_set_window_capture(void* self, void* windowCapture);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInput)
///
/// ``` QMediaCaptureSession* self ```
QVideoFrameInput* q_mediacapturesession_video_frame_input(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoFrameInput)
///
/// ``` QMediaCaptureSession* self, QVideoFrameInput* input ```
void q_mediacapturesession_set_video_frame_input(void* self, void* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#recorder)
///
/// ``` QMediaCaptureSession* self ```
QMediaRecorder* q_mediacapturesession_recorder(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setRecorder)
///
/// ``` QMediaCaptureSession* self, QMediaRecorder* recorder ```
void q_mediacapturesession_set_recorder(void* self, void* recorder);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoOutput)
///
/// ``` QMediaCaptureSession* self, QObject* output ```
void q_mediacapturesession_set_video_output(void* self, void* output);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutput)
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_video_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoSink)
///
/// ``` QMediaCaptureSession* self, QVideoSink* sink ```
void q_mediacapturesession_set_video_sink(void* self, void* sink);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoSink)
///
/// ``` QMediaCaptureSession* self ```
QVideoSink* q_mediacapturesession_video_sink(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioOutput)
///
/// ``` QMediaCaptureSession* self, QAudioOutput* output ```
void q_mediacapturesession_set_audio_output(void* self, void* output);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutput)
///
/// ``` QMediaCaptureSession* self ```
QAudioOutput* q_mediacapturesession_audio_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_audio_input_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_audio_input_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_audio_buffer_input_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_audio_buffer_input_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_camera_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_camera_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_screen_capture_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_screen_capture_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_window_capture_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_window_capture_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_video_frame_input_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_video_frame_input_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_image_capture_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_image_capture_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_recorder_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_recorder_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_video_output_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_video_output_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_audio_output_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_audio_output_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediacapturesession_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediacapturesession_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaCaptureSession* self ```
const char* q_mediacapturesession_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaCaptureSession* self, char* name ```
void q_mediacapturesession_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaCaptureSession* self, bool b ```
bool q_mediacapturesession_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaCaptureSession* self ```
QThread* q_mediacapturesession_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaCaptureSession* self, QThread* thread ```
bool q_mediacapturesession_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaCaptureSession* self, int interval ```
int32_t q_mediacapturesession_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaCaptureSession* self, int id ```
void q_mediacapturesession_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaCaptureSession* self, enum Qt__TimerId id ```
void q_mediacapturesession_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaCaptureSession* self ```
libqt_list /* of QObject* */ q_mediacapturesession_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaCaptureSession* self, QObject* parent ```
void q_mediacapturesession_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaCaptureSession* self, QObject* filterObj ```
void q_mediacapturesession_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaCaptureSession* self, QObject* obj ```
void q_mediacapturesession_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediacapturesession_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaCaptureSession* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediacapturesession_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediacapturesession_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediacapturesession_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaCaptureSession* self, const char* name, QVariant* value ```
bool q_mediacapturesession_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaCaptureSession* self, const char* name ```
QVariant* q_mediacapturesession_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaCaptureSession* self ```
const char** q_mediacapturesession_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaCaptureSession* self ```
QBindingStorage* q_mediacapturesession_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaCaptureSession* self ```
const QBindingStorage* q_mediacapturesession_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QObject*) ```
void q_mediacapturesession_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaCaptureSession* self, const char* classname ```
bool q_mediacapturesession_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaCaptureSession* self, QThread* thread, Disambiguated_t* param2 ```
bool q_mediacapturesession_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaCaptureSession* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediacapturesession_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediacapturesession_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaCaptureSession* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediacapturesession_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaCaptureSession* self, QObject* param1 ```
void q_mediacapturesession_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaCaptureSession* self, void (*slot)(QObject*, QObject*) ```
void q_mediacapturesession_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
bool q_mediacapturesession_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
bool q_mediacapturesession_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, bool (*slot)(QMediaCaptureSession*, QEvent*) ```
void q_mediacapturesession_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QObject* watched, QEvent* event ```
bool q_mediacapturesession_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QObject* watched, QEvent* event ```
bool q_mediacapturesession_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, bool (*slot)(QMediaCaptureSession*, QObject*, QEvent*) ```
void q_mediacapturesession_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QTimerEvent* event ```
void q_mediacapturesession_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QTimerEvent* event ```
void q_mediacapturesession_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QTimerEvent*) ```
void q_mediacapturesession_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QChildEvent* event ```
void q_mediacapturesession_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QChildEvent* event ```
void q_mediacapturesession_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QChildEvent*) ```
void q_mediacapturesession_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
void q_mediacapturesession_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
void q_mediacapturesession_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QEvent*) ```
void q_mediacapturesession_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QMetaMethod*) ```
void q_mediacapturesession_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QMetaMethod*) ```
void q_mediacapturesession_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QObject* (*slot)() ```
void q_mediacapturesession_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
int32_t q_mediacapturesession_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
int32_t q_mediacapturesession_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, int32_t (*slot)() ```
void q_mediacapturesession_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, const char* signal ```
int32_t q_mediacapturesession_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, const char* signal ```
int32_t q_mediacapturesession_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, int32_t (*slot)(QMediaCaptureSession*, const char*) ```
void q_mediacapturesession_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
bool q_mediacapturesession_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
bool q_mediacapturesession_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, bool (*slot)(QMediaCaptureSession*, QMetaMethod*) ```
void q_mediacapturesession_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMediaCaptureSession* self, void (*slot)(QObject*, const char*) ```
void q_mediacapturesession_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#dtor.QMediaCaptureSession)
///
/// Delete this object from C++ memory.
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_delete(void* self);

#endif
