#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQMEDIARECORDER_H
#define SRC_MULTIMEDIA_QT6C_LIBQMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html)

/// q_mediarecorder_new constructs a new QMediaRecorder object.
///
QMediaRecorder* q_mediarecorder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html)

/// q_mediarecorder_new2 constructs a new QMediaRecorder object.
///
/// @param parent QObject*
///
QMediaRecorder* q_mediarecorder_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMediaRecorder*
///
const QMetaObject* q_mediarecorder_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMediaRecorder*
/// @param callback const QMetaObject* func()
///
void q_mediarecorder_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QMediaRecorder*
///
const QMetaObject* q_mediarecorder_qbase_meta_object(void* self);

/// @param self QMediaRecorder*
/// @param param1 const char*
///
void* q_mediarecorder_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMediaRecorder*
/// @param callback void* func(QMediaRecorder* self, const char* param1)
///
void q_mediarecorder_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QMediaRecorder*
/// @param param1 const char*
///
void* q_mediarecorder_qbase_metacast(void* self, const char* param1);

/// @param self QMediaRecorder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mediarecorder_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMediaRecorder*
/// @param callback int32_t func(QMediaRecorder* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_mediarecorder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMediaRecorder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mediarecorder_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_mediarecorder_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
///
/// @param self QMediaRecorder*
///
bool q_mediarecorder_is_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
///
/// @param self QMediaRecorder*
///
QUrl* q_mediarecorder_output_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
///
/// @param self QMediaRecorder*
/// @param location QUrl*
///
void q_mediarecorder_set_output_location(void* self, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputDevice)
///
/// @param self QMediaRecorder*
/// @param device QIODevice*
///
void q_mediarecorder_set_output_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#outputDevice)
///
/// @param self QMediaRecorder*
///
QIODevice* q_mediarecorder_output_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
///
/// @param self QMediaRecorder*
///
QUrl* q_mediarecorder_actual_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
///
/// @param self QMediaRecorder*
///
/// @return enum QMediaRecorder__RecorderState
///
int32_t q_mediarecorder_recorder_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#error)
///
/// @param self QMediaRecorder*
///
/// @return enum QMediaRecorder__Error
///
int32_t q_mediarecorder_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMediaRecorder*
///
const char* q_mediarecorder_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
///
/// @param self QMediaRecorder*
///
long long q_mediarecorder_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
///
/// @param self QMediaRecorder*
///
QMediaFormat* q_mediarecorder_media_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
///
/// @param self QMediaRecorder*
/// @param format QMediaFormat*
///
void q_mediarecorder_set_media_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
///
/// @param self QMediaRecorder*
///
/// @return enum QMediaRecorder__EncodingMode
///
int32_t q_mediarecorder_encoding_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
///
/// @param self QMediaRecorder*
/// @param encodingMode enum QMediaRecorder__EncodingMode
///
void q_mediarecorder_set_encoding_mode(void* self, int32_t encodingMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
///
/// @param self QMediaRecorder*
///
/// @return enum QMediaRecorder__Quality
///
int32_t q_mediarecorder_quality(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
///
/// @param self QMediaRecorder*
/// @param quality enum QMediaRecorder__Quality
///
void q_mediarecorder_set_quality(void* self, int32_t quality);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
///
/// @param self QMediaRecorder*
///
QSize* q_mediarecorder_video_resolution(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
///
/// @param self QMediaRecorder*
/// @param videoResolution QSize*
///
void q_mediarecorder_set_video_resolution(void* self, void* videoResolution);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
///
/// @param self QMediaRecorder*
/// @param width int
/// @param height int
///
void q_mediarecorder_set_video_resolution2(void* self, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
///
/// @param self QMediaRecorder*
///
double q_mediarecorder_video_frame_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
///
/// @param self QMediaRecorder*
/// @param frameRate double
///
void q_mediarecorder_set_video_frame_rate(void* self, double frameRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
///
/// @param self QMediaRecorder*
///
int32_t q_mediarecorder_video_bit_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
///
/// @param self QMediaRecorder*
/// @param bitRate int
///
void q_mediarecorder_set_video_bit_rate(void* self, int bitRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
///
/// @param self QMediaRecorder*
///
int32_t q_mediarecorder_audio_bit_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
///
/// @param self QMediaRecorder*
/// @param bitRate int
///
void q_mediarecorder_set_audio_bit_rate(void* self, int bitRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
///
/// @param self QMediaRecorder*
///
int32_t q_mediarecorder_audio_channel_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
///
/// @param self QMediaRecorder*
/// @param channels int
///
void q_mediarecorder_set_audio_channel_count(void* self, int channels);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
///
/// @param self QMediaRecorder*
///
int32_t q_mediarecorder_audio_sample_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
///
/// @param self QMediaRecorder*
/// @param sampleRate int
///
void q_mediarecorder_set_audio_sample_rate(void* self, int sampleRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
///
/// @param self QMediaRecorder*
///
QMediaMetaData* q_mediarecorder_meta_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
///
/// @param self QMediaRecorder*
/// @param metaData QMediaMetaData*
///
void q_mediarecorder_set_meta_data(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
///
/// @param self QMediaRecorder*
/// @param metaData QMediaMetaData*
///
void q_mediarecorder_add_meta_data(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStop)
///
/// @param self QMediaRecorder*
///
bool q_mediarecorder_auto_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#setAutoStop)
///
/// @param self QMediaRecorder*
/// @param autoStop bool
///
void q_mediarecorder_set_auto_stop(void* self, bool autoStop);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
///
/// @param self QMediaRecorder*
///
QMediaCaptureSession* q_mediarecorder_capture_session(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#record)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_record(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_pause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
///
/// @param self QMediaRecorder*
/// @param state enum QMediaRecorder__RecorderState
///
void q_mediarecorder_recorder_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, enum QMediaRecorder__RecorderState state)
///
void q_mediarecorder_on_recorder_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
///
/// @param self QMediaRecorder*
/// @param duration long long
///
void q_mediarecorder_duration_changed(void* self, long long duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, long long duration)
///
void q_mediarecorder_on_duration_changed(void* self, void (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
///
/// @param self QMediaRecorder*
/// @param location QUrl*
///
void q_mediarecorder_actual_location_changed(void* self, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QUrl* location)
///
void q_mediarecorder_on_actual_location_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_encoder_settings_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_encoder_settings_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
///
/// @param self QMediaRecorder*
/// @param error enum QMediaRecorder__Error
/// @param errorString const char*
///
void q_mediarecorder_error_occurred(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, enum QMediaRecorder__Error error, const char* errorString)
///
void q_mediarecorder_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_error_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_error_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_meta_data_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_meta_data_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_media_format_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_media_format_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_encoding_mode_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_encoding_mode_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_quality_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_quality_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_video_resolution_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_video_resolution_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_video_frame_rate_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_video_frame_rate_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_video_bit_rate_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_video_bit_rate_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_audio_bit_rate_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_audio_bit_rate_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_audio_channel_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_audio_channel_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_audio_sample_rate_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_audio_sample_rate_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_auto_stop_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#autoStopChanged)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_auto_stop_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_mediarecorder_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_mediarecorder_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMediaRecorder*
///
const char* q_mediarecorder_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMediaRecorder*
/// @param name char*
///
void q_mediarecorder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMediaRecorder*
///
bool q_mediarecorder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMediaRecorder*
///
bool q_mediarecorder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMediaRecorder*
///
bool q_mediarecorder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMediaRecorder*
///
bool q_mediarecorder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMediaRecorder*
/// @param b bool
///
bool q_mediarecorder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMediaRecorder*
///
QThread* q_mediarecorder_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMediaRecorder*
/// @param thread QThread*
///
bool q_mediarecorder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaRecorder*
/// @param interval int
///
int32_t q_mediarecorder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaRecorder*
/// @param time int64_t of nanoseconds
///
int32_t q_mediarecorder_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMediaRecorder*
/// @param id int
///
void q_mediarecorder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMediaRecorder*
/// @param id enum Qt__TimerId
///
void q_mediarecorder_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMediaRecorder*
///
/// @return libqt_list of QObject*
///
libqt_list q_mediarecorder_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMediaRecorder*
/// @param parent QObject*
///
void q_mediarecorder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMediaRecorder*
/// @param filterObj QObject*
///
void q_mediarecorder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMediaRecorder*
/// @param obj QObject*
///
void q_mediarecorder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_mediarecorder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMediaRecorder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_mediarecorder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_mediarecorder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_mediarecorder_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMediaRecorder*
/// @param name const char*
/// @param value QVariant*
///
bool q_mediarecorder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMediaRecorder*
/// @param name const char*
///
QVariant* q_mediarecorder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMediaRecorder*
///
const char** q_mediarecorder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMediaRecorder*
///
QBindingStorage* q_mediarecorder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMediaRecorder*
///
const QBindingStorage* q_mediarecorder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self)
///
void q_mediarecorder_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMediaRecorder*
///
QObject* q_mediarecorder_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMediaRecorder*
/// @param classname const char*
///
bool q_mediarecorder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaRecorder*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_mediarecorder_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaRecorder*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_mediarecorder_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_mediarecorder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMediaRecorder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_mediarecorder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaRecorder*
/// @param param1 QObject*
///
void q_mediarecorder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QObject* param1)
///
void q_mediarecorder_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QEvent*
///
bool q_mediarecorder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QEvent*
///
bool q_mediarecorder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback bool func(QMediaRecorder* self, QEvent* event)
///
void q_mediarecorder_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mediarecorder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mediarecorder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback bool func(QMediaRecorder* self, QObject* watched, QEvent* event)
///
void q_mediarecorder_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QTimerEvent*
///
void q_mediarecorder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QTimerEvent*
///
void q_mediarecorder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QTimerEvent* event)
///
void q_mediarecorder_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QChildEvent*
///
void q_mediarecorder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QChildEvent*
///
void q_mediarecorder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QChildEvent* event)
///
void q_mediarecorder_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QEvent*
///
void q_mediarecorder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param event QEvent*
///
void q_mediarecorder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QEvent* event)
///
void q_mediarecorder_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal QMetaMethod*
///
void q_mediarecorder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal QMetaMethod*
///
void q_mediarecorder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QMetaMethod* signal)
///
void q_mediarecorder_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal QMetaMethod*
///
void q_mediarecorder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal QMetaMethod*
///
void q_mediarecorder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, QMetaMethod* signal)
///
void q_mediarecorder_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
///
QObject* q_mediarecorder_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
///
QObject* q_mediarecorder_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback QObject* func()
///
void q_mediarecorder_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
///
int32_t q_mediarecorder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
///
int32_t q_mediarecorder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback int32_t func()
///
void q_mediarecorder_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal const char*
///
int32_t q_mediarecorder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal const char*
///
int32_t q_mediarecorder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback int32_t func(QMediaRecorder* self, const char* signal)
///
void q_mediarecorder_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal QMetaMethod*
///
bool q_mediarecorder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param signal QMetaMethod*
///
bool q_mediarecorder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaRecorder*
/// @param callback bool func(QMediaRecorder* self, QMetaMethod* signal)
///
void q_mediarecorder_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMediaRecorder*
/// @param callback void func(QMediaRecorder* self, const char* objectName)
///
void q_mediarecorder_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#dtor.QMediaRecorder)
///
/// Delete this object from C++ memory.
///
/// @param self QMediaRecorder*
///
void q_mediarecorder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#public-types)

typedef enum {
    QMEDIARECORDER_QUALITY_VERYLOWQUALITY = 0,
    QMEDIARECORDER_QUALITY_LOWQUALITY = 1,
    QMEDIARECORDER_QUALITY_NORMALQUALITY = 2,
    QMEDIARECORDER_QUALITY_HIGHQUALITY = 3,
    QMEDIARECORDER_QUALITY_VERYHIGHQUALITY = 4
} QMediaRecorder__Quality;

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#public-types)

typedef enum {
    QMEDIARECORDER_ENCODINGMODE_CONSTANTQUALITYENCODING = 0,
    QMEDIARECORDER_ENCODINGMODE_CONSTANTBITRATEENCODING = 1,
    QMEDIARECORDER_ENCODINGMODE_AVERAGEBITRATEENCODING = 2,
    QMEDIARECORDER_ENCODINGMODE_TWOPASSENCODING = 3
} QMediaRecorder__EncodingMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#public-types)

typedef enum {
    QMEDIARECORDER_RECORDERSTATE_STOPPEDSTATE = 0,
    QMEDIARECORDER_RECORDERSTATE_RECORDINGSTATE = 1,
    QMEDIARECORDER_RECORDERSTATE_PAUSEDSTATE = 2
} QMediaRecorder__RecorderState;

/// [Upstream resources](https://doc.qt.io/qt-6/qmediarecorder.html#public-types)

typedef enum {
    QMEDIARECORDER_ERROR_NOERROR = 0,
    QMEDIARECORDER_ERROR_RESOURCEERROR = 1,
    QMEDIARECORDER_ERROR_FORMATERROR = 2,
    QMEDIARECORDER_ERROR_OUTOFSPACEERROR = 3,
    QMEDIARECORDER_ERROR_LOCATIONNOTWRITABLE = 4
} QMediaRecorder__Error;

#endif
