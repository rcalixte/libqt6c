#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQMEDIACAPTURESESSION_H
#define SRC_MULTIMEDIA_QT6C_LIBQMEDIACAPTURESESSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html)

/// q_mediacapturesession_new constructs a new QMediaCaptureSession object.
///
QMediaCaptureSession* q_mediacapturesession_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html)

/// q_mediacapturesession_new2 constructs a new QMediaCaptureSession object.
///
/// @param parent QObject*
///
QMediaCaptureSession* q_mediacapturesession_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMediaCaptureSession*
///
const QMetaObject* q_mediacapturesession_meta_object(void* self);

/// @param self QMediaCaptureSession*
/// @param param1 const char*
///
void* q_mediacapturesession_metacast(void* self, const char* param1);

/// @param self QMediaCaptureSession*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mediacapturesession_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMediaCaptureSession*
/// @param callback int32_t func(QMediaCaptureSession* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_mediacapturesession_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMediaCaptureSession*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mediacapturesession_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_mediacapturesession_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInput)
///
/// @param self QMediaCaptureSession*
///
QAudioInput* q_mediacapturesession_audio_input(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioInput)
///
/// @param self QMediaCaptureSession*
/// @param input QAudioInput*
///
void q_mediacapturesession_set_audio_input(void* self, void* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInput)
///
/// @param self QMediaCaptureSession*
///
QAudioBufferInput* q_mediacapturesession_audio_buffer_input(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioBufferInput)
///
/// @param self QMediaCaptureSession*
/// @param input QAudioBufferInput*
///
void q_mediacapturesession_set_audio_buffer_input(void* self, void* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#camera)
///
/// @param self QMediaCaptureSession*
///
QCamera* q_mediacapturesession_camera(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setCamera)
///
/// @param self QMediaCaptureSession*
/// @param camera QCamera*
///
void q_mediacapturesession_set_camera(void* self, void* camera);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCapture)
///
/// @param self QMediaCaptureSession*
///
QImageCapture* q_mediacapturesession_image_capture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setImageCapture)
///
/// @param self QMediaCaptureSession*
/// @param imageCapture QImageCapture*
///
void q_mediacapturesession_set_image_capture(void* self, void* imageCapture);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCapture)
///
/// @param self QMediaCaptureSession*
///
QScreenCapture* q_mediacapturesession_screen_capture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setScreenCapture)
///
/// @param self QMediaCaptureSession*
/// @param screenCapture QScreenCapture*
///
void q_mediacapturesession_set_screen_capture(void* self, void* screenCapture);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCapture)
///
/// @param self QMediaCaptureSession*
///
QWindowCapture* q_mediacapturesession_window_capture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setWindowCapture)
///
/// @param self QMediaCaptureSession*
/// @param windowCapture QWindowCapture*
///
void q_mediacapturesession_set_window_capture(void* self, void* windowCapture);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInput)
///
/// @param self QMediaCaptureSession*
///
QVideoFrameInput* q_mediacapturesession_video_frame_input(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoFrameInput)
///
/// @param self QMediaCaptureSession*
/// @param input QVideoFrameInput*
///
void q_mediacapturesession_set_video_frame_input(void* self, void* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorder)
///
/// @param self QMediaCaptureSession*
///
QMediaRecorder* q_mediacapturesession_recorder(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setRecorder)
///
/// @param self QMediaCaptureSession*
/// @param recorder QMediaRecorder*
///
void q_mediacapturesession_set_recorder(void* self, void* recorder);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoOutput)
///
/// @param self QMediaCaptureSession*
/// @param output QObject*
///
void q_mediacapturesession_set_video_output(void* self, void* output);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutput)
///
/// @param self QMediaCaptureSession*
///
QObject* q_mediacapturesession_video_output(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoSink)
///
/// @param self QMediaCaptureSession*
/// @param sink QVideoSink*
///
void q_mediacapturesession_set_video_sink(void* self, void* sink);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoSink)
///
/// @param self QMediaCaptureSession*
///
QVideoSink* q_mediacapturesession_video_sink(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioOutput)
///
/// @param self QMediaCaptureSession*
/// @param output QAudioOutput*
///
void q_mediacapturesession_set_audio_output(void* self, void* output);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutput)
///
/// @param self QMediaCaptureSession*
///
QAudioOutput* q_mediacapturesession_audio_output(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_audio_input_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_audio_input_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_audio_buffer_input_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioBufferInputChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_audio_buffer_input_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_camera_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_camera_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_screen_capture_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#screenCaptureChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_screen_capture_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_window_capture_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#windowCaptureChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_window_capture_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_video_frame_input_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoFrameInputChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_video_frame_input_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_image_capture_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_image_capture_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_recorder_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_recorder_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_video_output_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_video_output_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_audio_output_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_audio_output_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_mediacapturesession_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_mediacapturesession_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMediaCaptureSession*
///
const char* q_mediacapturesession_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMediaCaptureSession*
/// @param name char*
///
void q_mediacapturesession_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMediaCaptureSession*
///
bool q_mediacapturesession_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMediaCaptureSession*
///
bool q_mediacapturesession_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMediaCaptureSession*
///
bool q_mediacapturesession_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMediaCaptureSession*
///
bool q_mediacapturesession_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMediaCaptureSession*
/// @param b bool
///
bool q_mediacapturesession_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMediaCaptureSession*
///
QThread* q_mediacapturesession_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMediaCaptureSession*
/// @param thread QThread*
///
bool q_mediacapturesession_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaCaptureSession*
/// @param interval int
///
int32_t q_mediacapturesession_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMediaCaptureSession*
/// @param id int
///
void q_mediacapturesession_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMediaCaptureSession*
/// @param id enum Qt__TimerId
///
void q_mediacapturesession_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMediaCaptureSession*
///
libqt_list /* of QObject* */ q_mediacapturesession_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMediaCaptureSession*
/// @param parent QObject*
///
void q_mediacapturesession_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMediaCaptureSession*
/// @param filterObj QObject*
///
void q_mediacapturesession_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMediaCaptureSession*
/// @param obj QObject*
///
void q_mediacapturesession_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_mediacapturesession_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMediaCaptureSession*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_mediacapturesession_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_mediacapturesession_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_mediacapturesession_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMediaCaptureSession*
/// @param name const char*
/// @param value QVariant*
///
bool q_mediacapturesession_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMediaCaptureSession*
/// @param name const char*
///
QVariant* q_mediacapturesession_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMediaCaptureSession*
///
const char** q_mediacapturesession_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMediaCaptureSession*
///
QBindingStorage* q_mediacapturesession_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMediaCaptureSession*
///
const QBindingStorage* q_mediacapturesession_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self)
///
void q_mediacapturesession_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMediaCaptureSession*
///
QObject* q_mediacapturesession_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMediaCaptureSession*
/// @param classname const char*
///
bool q_mediacapturesession_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMediaCaptureSession*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_mediacapturesession_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaCaptureSession*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_mediacapturesession_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_mediacapturesession_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMediaCaptureSession*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_mediacapturesession_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaCaptureSession*
/// @param param1 QObject*
///
void q_mediacapturesession_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, QObject* param1)
///
void q_mediacapturesession_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QEvent*
///
bool q_mediacapturesession_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QEvent*
///
bool q_mediacapturesession_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback bool func(QMediaCaptureSession* self, QEvent* event)
///
void q_mediacapturesession_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mediacapturesession_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mediacapturesession_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback bool func(QMediaCaptureSession* self, QObject* watched, QEvent* event)
///
void q_mediacapturesession_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QTimerEvent*
///
void q_mediacapturesession_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QTimerEvent*
///
void q_mediacapturesession_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, QTimerEvent* event)
///
void q_mediacapturesession_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QChildEvent*
///
void q_mediacapturesession_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QChildEvent*
///
void q_mediacapturesession_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, QChildEvent* event)
///
void q_mediacapturesession_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QEvent*
///
void q_mediacapturesession_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param event QEvent*
///
void q_mediacapturesession_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, QEvent* event)
///
void q_mediacapturesession_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal QMetaMethod*
///
void q_mediacapturesession_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal QMetaMethod*
///
void q_mediacapturesession_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, QMetaMethod* signal)
///
void q_mediacapturesession_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal QMetaMethod*
///
void q_mediacapturesession_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal QMetaMethod*
///
void q_mediacapturesession_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, QMetaMethod* signal)
///
void q_mediacapturesession_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
///
QObject* q_mediacapturesession_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
///
QObject* q_mediacapturesession_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback QObject* func()
///
void q_mediacapturesession_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
///
int32_t q_mediacapturesession_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
///
int32_t q_mediacapturesession_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback int32_t func()
///
void q_mediacapturesession_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal const char*
///
int32_t q_mediacapturesession_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal const char*
///
int32_t q_mediacapturesession_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback int32_t func(QMediaCaptureSession* self, const char* signal)
///
void q_mediacapturesession_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal QMetaMethod*
///
bool q_mediacapturesession_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param signal QMetaMethod*
///
bool q_mediacapturesession_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaCaptureSession*
/// @param callback bool func(QMediaCaptureSession* self, QMetaMethod* signal)
///
void q_mediacapturesession_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMediaCaptureSession*
/// @param callback void func(QMediaCaptureSession* self, const char* objectName)
///
void q_mediacapturesession_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediacapturesession.html#dtor.QMediaCaptureSession)
///
/// Delete this object from C++ memory.
///
/// @param self QMediaCaptureSession*
///
void q_mediacapturesession_delete(void* self);

#endif
