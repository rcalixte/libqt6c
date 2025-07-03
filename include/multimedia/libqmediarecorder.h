#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIARECORDER_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "libqmediacapturesession.h"
#include "libqmediaformat.h"
#include "libqmediametadata.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qmediarecorder.html

/// q_mediarecorder_new constructs a new QMediaRecorder object.
///
///
QMediaRecorder* q_mediarecorder_new();

/// q_mediarecorder_new2 constructs a new QMediaRecorder object.
///
/// ``` QObject* parent ```
QMediaRecorder* q_mediarecorder_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaRecorder* self ```
const QMetaObject* q_mediarecorder_meta_object(void* self);

/// ``` QMediaRecorder* self, const char* param1 ```
void* q_mediarecorder_metacast(void* self, const char* param1);

/// ``` QMediaRecorder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediarecorder_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMediaRecorder* self, int32_t (*slot)(QMediaRecorder*, enum QMetaObject__Call, int, void*) ```
void q_mediarecorder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMediaRecorder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediarecorder_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediarecorder_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
///
/// ``` QMediaRecorder* self ```
QUrl* q_mediarecorder_output_location(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
///
/// ``` QMediaRecorder* self, QUrl* location ```
void q_mediarecorder_set_output_location(void* self, void* location);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
///
/// ``` QMediaRecorder* self ```
QUrl* q_mediarecorder_actual_location(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_recorder_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#error)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
///
/// ``` QMediaRecorder* self ```
const char* q_mediarecorder_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
///
/// ``` QMediaRecorder* self ```
long long q_mediarecorder_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
///
/// ``` QMediaRecorder* self ```
QMediaFormat* q_mediarecorder_media_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
///
/// ``` QMediaRecorder* self, QMediaFormat* format ```
void q_mediarecorder_set_media_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_encoding_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__EncodingMode encodingMode ```
void q_mediarecorder_set_encoding_mode(void* self, int64_t encodingMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_quality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__Quality quality ```
void q_mediarecorder_set_quality(void* self, int64_t quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
///
/// ``` QMediaRecorder* self ```
QSize* q_mediarecorder_video_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
///
/// ``` QMediaRecorder* self, QSize* videoResolution ```
void q_mediarecorder_set_video_resolution(void* self, void* videoResolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
///
/// ``` QMediaRecorder* self, int width, int height ```
void q_mediarecorder_set_video_resolution2(void* self, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
///
/// ``` QMediaRecorder* self ```
double q_mediarecorder_video_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
///
/// ``` QMediaRecorder* self, double frameRate ```
void q_mediarecorder_set_video_frame_rate(void* self, double frameRate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_video_bit_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
///
/// ``` QMediaRecorder* self, int bitRate ```
void q_mediarecorder_set_video_bit_rate(void* self, int bitRate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_audio_bit_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
///
/// ``` QMediaRecorder* self, int bitRate ```
void q_mediarecorder_set_audio_bit_rate(void* self, int bitRate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_audio_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
///
/// ``` QMediaRecorder* self, int channels ```
void q_mediarecorder_set_audio_channel_count(void* self, int channels);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_audio_sample_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
///
/// ``` QMediaRecorder* self, int sampleRate ```
void q_mediarecorder_set_audio_sample_rate(void* self, int sampleRate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
///
/// ``` QMediaRecorder* self ```
QMediaMetaData* q_mediarecorder_meta_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
///
/// ``` QMediaRecorder* self, QMediaMetaData* metaData ```
void q_mediarecorder_set_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
///
/// ``` QMediaRecorder* self, QMediaMetaData* metaData ```
void q_mediarecorder_add_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
///
/// ``` QMediaRecorder* self ```
QMediaCaptureSession* q_mediarecorder_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#record)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_record(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__RecorderState state ```
void q_mediarecorder_recorder_state_changed(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, enum QMediaRecorder__RecorderState) ```
void q_mediarecorder_on_recorder_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
///
/// ``` QMediaRecorder* self, long long duration ```
void q_mediarecorder_duration_changed(void* self, long long duration);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, long long) ```
void q_mediarecorder_on_duration_changed(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
///
/// ``` QMediaRecorder* self, QUrl* location ```
void q_mediarecorder_actual_location_changed(void* self, void* location);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QUrl*) ```
void q_mediarecorder_on_actual_location_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_encoder_settings_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_encoder_settings_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__Error errorVal, const char* errorString ```
void q_mediarecorder_error_occurred(void* self, int64_t errorVal, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, enum QMediaRecorder__Error, const char*) ```
void q_mediarecorder_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_error_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_error_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_meta_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_meta_data_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_media_format_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_media_format_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_encoding_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_encoding_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_quality_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_quality_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_video_resolution_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_video_resolution_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_video_frame_rate_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_video_frame_rate_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_video_bit_rate_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_video_bit_rate_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_audio_bit_rate_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_audio_bit_rate_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_audio_channel_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_audio_channel_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_audio_sample_rate_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_audio_sample_rate_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediarecorder_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediarecorder_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaRecorder* self ```
const char* q_mediarecorder_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaRecorder* self, char* name ```
void q_mediarecorder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaRecorder* self, bool b ```
bool q_mediarecorder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaRecorder* self ```
QThread* q_mediarecorder_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaRecorder* self, QThread* thread ```
void q_mediarecorder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaRecorder* self, int interval ```
int32_t q_mediarecorder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaRecorder* self, int id ```
void q_mediarecorder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaRecorder* self ```
libqt_list /* of QObject* */ q_mediarecorder_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaRecorder* self, QObject* parent ```
void q_mediarecorder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaRecorder* self, QObject* filterObj ```
void q_mediarecorder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaRecorder* self, QObject* obj ```
void q_mediarecorder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediarecorder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaRecorder* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediarecorder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediarecorder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediarecorder_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaRecorder* self, const char* name, QVariant* value ```
bool q_mediarecorder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaRecorder* self, const char* name ```
QVariant* q_mediarecorder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaRecorder* self ```
const char** q_mediarecorder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaRecorder* self ```
QBindingStorage* q_mediarecorder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaRecorder* self ```
const QBindingStorage* q_mediarecorder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaRecorder* self, void (*slot)(QObject*) ```
void q_mediarecorder_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaRecorder* self ```
QObject* q_mediarecorder_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaRecorder* self, const char* classname ```
bool q_mediarecorder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaRecorder* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediarecorder_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediarecorder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaRecorder* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediarecorder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaRecorder* self, QObject* param1 ```
void q_mediarecorder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaRecorder* self, void (*slot)(QObject*, QObject*) ```
void q_mediarecorder_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
bool q_mediarecorder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
bool q_mediarecorder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, bool (*slot)(QMediaRecorder*, QEvent*) ```
void q_mediarecorder_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QObject* watched, QEvent* event ```
bool q_mediarecorder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QObject* watched, QEvent* event ```
bool q_mediarecorder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, bool (*slot)(QMediaRecorder*, QObject*, QEvent*) ```
void q_mediarecorder_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QTimerEvent* event ```
void q_mediarecorder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QTimerEvent* event ```
void q_mediarecorder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QTimerEvent*) ```
void q_mediarecorder_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QChildEvent* event ```
void q_mediarecorder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QChildEvent* event ```
void q_mediarecorder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QChildEvent*) ```
void q_mediarecorder_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
void q_mediarecorder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
void q_mediarecorder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QEvent*) ```
void q_mediarecorder_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QMetaMethod*) ```
void q_mediarecorder_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QMetaMethod*) ```
void q_mediarecorder_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self ```
QObject* q_mediarecorder_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self ```
QObject* q_mediarecorder_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, QObject* (*slot)() ```
void q_mediarecorder_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, int32_t (*slot)() ```
void q_mediarecorder_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, const char* signal ```
int32_t q_mediarecorder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, const char* signal ```
int32_t q_mediarecorder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, int32_t (*slot)(QMediaRecorder*, const char*) ```
void q_mediarecorder_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
bool q_mediarecorder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
bool q_mediarecorder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, bool (*slot)(QMediaRecorder*, QMetaMethod*) ```
void q_mediarecorder_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMediaRecorder* self, void (*slot)(QObject*, const char*) ```
void q_mediarecorder_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#dtor.QMediaRecorder)
///
/// Delete this object from C++ memory.
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_delete(void* self);

/// https://doc.qt.io/qt-6/qmediarecorder.html#types

typedef enum {
    QMEDIARECORDER_QUALITY_VERYLOWQUALITY = 0,
    QMEDIARECORDER_QUALITY_LOWQUALITY = 1,
    QMEDIARECORDER_QUALITY_NORMALQUALITY = 2,
    QMEDIARECORDER_QUALITY_HIGHQUALITY = 3,
    QMEDIARECORDER_QUALITY_VERYHIGHQUALITY = 4
} QMediaRecorder__Quality;

typedef enum {
    QMEDIARECORDER_ENCODINGMODE_CONSTANTQUALITYENCODING = 0,
    QMEDIARECORDER_ENCODINGMODE_CONSTANTBITRATEENCODING = 1,
    QMEDIARECORDER_ENCODINGMODE_AVERAGEBITRATEENCODING = 2,
    QMEDIARECORDER_ENCODINGMODE_TWOPASSENCODING = 3
} QMediaRecorder__EncodingMode;

typedef enum {
    QMEDIARECORDER_RECORDERSTATE_STOPPEDSTATE = 0,
    QMEDIARECORDER_RECORDERSTATE_RECORDINGSTATE = 1,
    QMEDIARECORDER_RECORDERSTATE_PAUSEDSTATE = 2
} QMediaRecorder__RecorderState;

typedef enum {
    QMEDIARECORDER_ERROR_NOERROR = 0,
    QMEDIARECORDER_ERROR_RESOURCEERROR = 1,
    QMEDIARECORDER_ERROR_FORMATERROR = 2,
    QMEDIARECORDER_ERROR_OUTOFSPACEERROR = 3,
    QMEDIARECORDER_ERROR_LOCATIONNOTWRITABLE = 4
} QMediaRecorder__Error;

#endif
