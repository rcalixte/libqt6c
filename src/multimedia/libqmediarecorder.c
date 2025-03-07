#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqmediacapturesession.hpp"
#include "libqmediaformat.hpp"
#include "libqmediametadata.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqmediarecorder.hpp"
#include "libqmediarecorder.h"

/// https://doc.qt.io/qt-6/qmediarecorder.html

/// q_mediarecorder_new constructs a new QMediaRecorder object.
///
///
QMediaRecorder* q_mediarecorder_new() {
    return QMediaRecorder_new();
}

/// q_mediarecorder_new2 constructs a new QMediaRecorder object.
///
/// ``` QObject* parent ```
QMediaRecorder* q_mediarecorder_new2(void* parent) {
    return QMediaRecorder_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaRecorder* self ```
QMetaObject* q_mediarecorder_meta_object(void* self) {
    return QMediaRecorder_MetaObject((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, const char* param1 ```
void* q_mediarecorder_metacast(void* self, const char* param1) {
    return QMediaRecorder_Metacast((QMediaRecorder*)self, param1);
}

/// ``` QMediaRecorder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediarecorder_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaRecorder_Metacall((QMediaRecorder*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMediaRecorder* self, int32_t (*slot)(QMediaRecorder*, enum QMetaObject__Call, int, void*) ```
void q_mediarecorder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMediaRecorder_OnMetacall((QMediaRecorder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMediaRecorder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediarecorder_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaRecorder_QBaseMetacall((QMediaRecorder*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediarecorder_tr(const char* s) {
    libqt_string _str = QMediaRecorder_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#isAvailable)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_available(void* self) {
    return QMediaRecorder_IsAvailable((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#outputLocation)
///
/// ``` QMediaRecorder* self ```
QUrl* q_mediarecorder_output_location(void* self) {
    return QMediaRecorder_OutputLocation((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setOutputLocation)
///
/// ``` QMediaRecorder* self, QUrl* location ```
void q_mediarecorder_set_output_location(void* self, void* location) {
    QMediaRecorder_SetOutputLocation((QMediaRecorder*)self, (QUrl*)location);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocation)
///
/// ``` QMediaRecorder* self ```
QUrl* q_mediarecorder_actual_location(void* self) {
    return QMediaRecorder_ActualLocation((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderState)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_recorder_state(void* self) {
    return QMediaRecorder_RecorderState((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#error)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_error(void* self) {
    return QMediaRecorder_Error((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorString)
///
/// ``` QMediaRecorder* self ```
const char* q_mediarecorder_error_string(void* self) {
    libqt_string _str = QMediaRecorder_ErrorString((QMediaRecorder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#duration)
///
/// ``` QMediaRecorder* self ```
long long q_mediarecorder_duration(void* self) {
    return QMediaRecorder_Duration((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormat)
///
/// ``` QMediaRecorder* self ```
QMediaFormat* q_mediarecorder_media_format(void* self) {
    return QMediaRecorder_MediaFormat((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMediaFormat)
///
/// ``` QMediaRecorder* self, QMediaFormat* format ```
void q_mediarecorder_set_media_format(void* self, void* format) {
    QMediaRecorder_SetMediaFormat((QMediaRecorder*)self, (QMediaFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingMode)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_encoding_mode(void* self) {
    return QMediaRecorder_EncodingMode((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setEncodingMode)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__EncodingMode encodingMode ```
void q_mediarecorder_set_encoding_mode(void* self, int64_t encodingMode) {
    QMediaRecorder_SetEncodingMode((QMediaRecorder*)self, encodingMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#quality)
///
/// ``` QMediaRecorder* self ```
int64_t q_mediarecorder_quality(void* self) {
    return QMediaRecorder_Quality((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setQuality)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__Quality quality ```
void q_mediarecorder_set_quality(void* self, int64_t quality) {
    QMediaRecorder_SetQuality((QMediaRecorder*)self, quality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolution)
///
/// ``` QMediaRecorder* self ```
QSize* q_mediarecorder_video_resolution(void* self) {
    return QMediaRecorder_VideoResolution((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
///
/// ``` QMediaRecorder* self, QSize* videoResolution ```
void q_mediarecorder_set_video_resolution(void* self, void* videoResolution) {
    QMediaRecorder_SetVideoResolution((QMediaRecorder*)self, (QSize*)videoResolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoResolution)
///
/// ``` QMediaRecorder* self, int width, int height ```
void q_mediarecorder_set_video_resolution2(void* self, int width, int height) {
    QMediaRecorder_SetVideoResolution2((QMediaRecorder*)self, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRate)
///
/// ``` QMediaRecorder* self ```
double q_mediarecorder_video_frame_rate(void* self) {
    return QMediaRecorder_VideoFrameRate((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoFrameRate)
///
/// ``` QMediaRecorder* self, double frameRate ```
void q_mediarecorder_set_video_frame_rate(void* self, double frameRate) {
    QMediaRecorder_SetVideoFrameRate((QMediaRecorder*)self, frameRate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRate)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_video_bit_rate(void* self) {
    return QMediaRecorder_VideoBitRate((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setVideoBitRate)
///
/// ``` QMediaRecorder* self, int bitRate ```
void q_mediarecorder_set_video_bit_rate(void* self, int bitRate) {
    QMediaRecorder_SetVideoBitRate((QMediaRecorder*)self, bitRate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRate)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_audio_bit_rate(void* self) {
    return QMediaRecorder_AudioBitRate((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioBitRate)
///
/// ``` QMediaRecorder* self, int bitRate ```
void q_mediarecorder_set_audio_bit_rate(void* self, int bitRate) {
    QMediaRecorder_SetAudioBitRate((QMediaRecorder*)self, bitRate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCount)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_audio_channel_count(void* self) {
    return QMediaRecorder_AudioChannelCount((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioChannelCount)
///
/// ``` QMediaRecorder* self, int channels ```
void q_mediarecorder_set_audio_channel_count(void* self, int channels) {
    QMediaRecorder_SetAudioChannelCount((QMediaRecorder*)self, channels);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRate)
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_audio_sample_rate(void* self) {
    return QMediaRecorder_AudioSampleRate((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setAudioSampleRate)
///
/// ``` QMediaRecorder* self, int sampleRate ```
void q_mediarecorder_set_audio_sample_rate(void* self, int sampleRate) {
    QMediaRecorder_SetAudioSampleRate((QMediaRecorder*)self, sampleRate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaData)
///
/// ``` QMediaRecorder* self ```
QMediaMetaData* q_mediarecorder_meta_data(void* self) {
    return QMediaRecorder_MetaData((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#setMetaData)
///
/// ``` QMediaRecorder* self, QMediaMetaData* metaData ```
void q_mediarecorder_set_meta_data(void* self, void* metaData) {
    QMediaRecorder_SetMetaData((QMediaRecorder*)self, (QMediaMetaData*)metaData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#addMetaData)
///
/// ``` QMediaRecorder* self, QMediaMetaData* metaData ```
void q_mediarecorder_add_meta_data(void* self, void* metaData) {
    QMediaRecorder_AddMetaData((QMediaRecorder*)self, (QMediaMetaData*)metaData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#captureSession)
///
/// ``` QMediaRecorder* self ```
QMediaCaptureSession* q_mediarecorder_capture_session(void* self) {
    return QMediaRecorder_CaptureSession((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#record)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_record(void* self) {
    QMediaRecorder_Record((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#pause)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_pause(void* self) {
    QMediaRecorder_Pause((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#stop)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_stop(void* self) {
    QMediaRecorder_Stop((QMediaRecorder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#recorderStateChanged)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__RecorderState state ```
void q_mediarecorder_recorder_state_changed(void* self, int64_t state) {
    QMediaRecorder_RecorderStateChanged((QMediaRecorder*)self, state);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, enum QMediaRecorder__RecorderState) ```
void q_mediarecorder_on_recorder_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QMediaRecorder_Connect_RecorderStateChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#durationChanged)
///
/// ``` QMediaRecorder* self, long long duration ```
void q_mediarecorder_duration_changed(void* self, long long duration) {
    QMediaRecorder_DurationChanged((QMediaRecorder*)self, duration);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, long long) ```
void q_mediarecorder_on_duration_changed(void* self, void (*slot)(void*, long long)) {
    QMediaRecorder_Connect_DurationChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#actualLocationChanged)
///
/// ``` QMediaRecorder* self, QUrl* location ```
void q_mediarecorder_actual_location_changed(void* self, void* location) {
    QMediaRecorder_ActualLocationChanged((QMediaRecorder*)self, (QUrl*)location);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QUrl*) ```
void q_mediarecorder_on_actual_location_changed(void* self, void (*slot)(void*, void*)) {
    QMediaRecorder_Connect_ActualLocationChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encoderSettingsChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_encoder_settings_changed(void* self) {
    QMediaRecorder_EncoderSettingsChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_encoder_settings_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_EncoderSettingsChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorOccurred)
///
/// ``` QMediaRecorder* self, enum QMediaRecorder__Error errorVal, const char* errorString ```
void q_mediarecorder_error_occurred(void* self, int64_t errorVal, const char* errorString) {
    QMediaRecorder_ErrorOccurred((QMediaRecorder*)self, errorVal, qstring(errorString));
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, enum QMediaRecorder__Error, const char*) ```
void q_mediarecorder_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*)) {
    QMediaRecorder_Connect_ErrorOccurred((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#errorChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_error_changed(void* self) {
    QMediaRecorder_ErrorChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_error_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_ErrorChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#metaDataChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_meta_data_changed(void* self) {
    QMediaRecorder_MetaDataChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_meta_data_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_MetaDataChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#mediaFormatChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_media_format_changed(void* self) {
    QMediaRecorder_MediaFormatChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_media_format_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_MediaFormatChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#encodingModeChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_encoding_mode_changed(void* self) {
    QMediaRecorder_EncodingModeChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_encoding_mode_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_EncodingModeChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#qualityChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_quality_changed(void* self) {
    QMediaRecorder_QualityChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_quality_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_QualityChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoResolutionChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_video_resolution_changed(void* self) {
    QMediaRecorder_VideoResolutionChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_video_resolution_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_VideoResolutionChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoFrameRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_video_frame_rate_changed(void* self) {
    QMediaRecorder_VideoFrameRateChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_video_frame_rate_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_VideoFrameRateChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#videoBitRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_video_bit_rate_changed(void* self) {
    QMediaRecorder_VideoBitRateChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_video_bit_rate_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_VideoBitRateChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioBitRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_audio_bit_rate_changed(void* self) {
    QMediaRecorder_AudioBitRateChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_audio_bit_rate_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_AudioBitRateChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioChannelCountChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_audio_channel_count_changed(void* self) {
    QMediaRecorder_AudioChannelCountChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_audio_channel_count_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_AudioChannelCountChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediarecorder.html#audioSampleRateChanged)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_audio_sample_rate_changed(void* self) {
    QMediaRecorder_AudioSampleRateChanged((QMediaRecorder*)self);
}

/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*) ```
void q_mediarecorder_on_audio_sample_rate_changed(void* self, void (*slot)(void*)) {
    QMediaRecorder_Connect_AudioSampleRateChanged((QMediaRecorder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediarecorder_tr2(const char* s, const char* c) {
    libqt_string _str = QMediaRecorder_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediarecorder_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMediaRecorder_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaRecorder* self ```
const char* q_mediarecorder_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaRecorder* self, const char* name ```
void q_mediarecorder_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaRecorder* self ```
bool q_mediarecorder_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaRecorder* self, bool b ```
bool q_mediarecorder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaRecorder* self ```
QThread* q_mediarecorder_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaRecorder* self, QThread* thread ```
void q_mediarecorder_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaRecorder* self, int interval ```
int32_t q_mediarecorder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaRecorder* self, int id ```
void q_mediarecorder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaRecorder* self ```
libqt_list /* of QObject* */ q_mediarecorder_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaRecorder* self, QObject* parent ```
void q_mediarecorder_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaRecorder* self, QObject* filterObj ```
void q_mediarecorder_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaRecorder* self, QObject* obj ```
void q_mediarecorder_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediarecorder_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaRecorder* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediarecorder_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediarecorder_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediarecorder_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaRecorder* self, const char* name, QVariant* value ```
bool q_mediarecorder_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaRecorder* self, const char* name ```
QVariant* q_mediarecorder_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaRecorder* self ```
const char** q_mediarecorder_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaRecorder* self ```
QBindingStorage* q_mediarecorder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaRecorder* self ```
QBindingStorage* q_mediarecorder_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMediaRecorder* self, void (*slot)(QObject*) ```
void q_mediarecorder_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaRecorder* self ```
QObject* q_mediarecorder_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaRecorder* self, const char* classname ```
bool q_mediarecorder_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaRecorder* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediarecorder_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediarecorder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaRecorder* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediarecorder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaRecorder* self, QObject* param1 ```
void q_mediarecorder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMediaRecorder* self, void (*slot)(QObject*, QObject*) ```
void q_mediarecorder_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
bool q_mediarecorder_event(void* self, void* event) {
    return QMediaRecorder_Event((QMediaRecorder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
bool q_mediarecorder_qbase_event(void* self, void* event) {
    return QMediaRecorder_QBaseEvent((QMediaRecorder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, bool (*slot)(QMediaRecorder*, QEvent*) ```
void q_mediarecorder_on_event(void* self, bool (*slot)(void*, void*)) {
    QMediaRecorder_OnEvent((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QObject* watched, QEvent* event ```
bool q_mediarecorder_event_filter(void* self, void* watched, void* event) {
    return QMediaRecorder_EventFilter((QMediaRecorder*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QObject* watched, QEvent* event ```
bool q_mediarecorder_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaRecorder_QBaseEventFilter((QMediaRecorder*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, bool (*slot)(QMediaRecorder*, QObject*, QEvent*) ```
void q_mediarecorder_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMediaRecorder_OnEventFilter((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QTimerEvent* event ```
void q_mediarecorder_timer_event(void* self, void* event) {
    QMediaRecorder_TimerEvent((QMediaRecorder*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QTimerEvent* event ```
void q_mediarecorder_qbase_timer_event(void* self, void* event) {
    QMediaRecorder_QBaseTimerEvent((QMediaRecorder*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QTimerEvent*) ```
void q_mediarecorder_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMediaRecorder_OnTimerEvent((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QChildEvent* event ```
void q_mediarecorder_child_event(void* self, void* event) {
    QMediaRecorder_ChildEvent((QMediaRecorder*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QChildEvent* event ```
void q_mediarecorder_qbase_child_event(void* self, void* event) {
    QMediaRecorder_QBaseChildEvent((QMediaRecorder*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QChildEvent*) ```
void q_mediarecorder_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMediaRecorder_OnChildEvent((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
void q_mediarecorder_custom_event(void* self, void* event) {
    QMediaRecorder_CustomEvent((QMediaRecorder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QEvent* event ```
void q_mediarecorder_qbase_custom_event(void* self, void* event) {
    QMediaRecorder_QBaseCustomEvent((QMediaRecorder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QEvent*) ```
void q_mediarecorder_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMediaRecorder_OnCustomEvent((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_connect_notify(void* self, void* signal) {
    QMediaRecorder_ConnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_qbase_connect_notify(void* self, void* signal) {
    QMediaRecorder_QBaseConnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QMetaMethod*) ```
void q_mediarecorder_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaRecorder_OnConnectNotify((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_disconnect_notify(void* self, void* signal) {
    QMediaRecorder_DisconnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
void q_mediarecorder_qbase_disconnect_notify(void* self, void* signal) {
    QMediaRecorder_QBaseDisconnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, void (*slot)(QMediaRecorder*, QMetaMethod*) ```
void q_mediarecorder_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaRecorder_OnDisconnectNotify((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self ```
QObject* q_mediarecorder_sender(void* self) {
    return QMediaRecorder_Sender((QMediaRecorder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self ```
QObject* q_mediarecorder_qbase_sender(void* self) {
    return QMediaRecorder_QBaseSender((QMediaRecorder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, QObject* (*slot)() ```
void q_mediarecorder_on_sender(void* self, QObject* (*slot)()) {
    QMediaRecorder_OnSender((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_sender_signal_index(void* self) {
    return QMediaRecorder_SenderSignalIndex((QMediaRecorder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self ```
int32_t q_mediarecorder_qbase_sender_signal_index(void* self) {
    return QMediaRecorder_QBaseSenderSignalIndex((QMediaRecorder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, int32_t (*slot)() ```
void q_mediarecorder_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMediaRecorder_OnSenderSignalIndex((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, const char* signal ```
int32_t q_mediarecorder_receivers(void* self, const char* signal) {
    return QMediaRecorder_Receivers((QMediaRecorder*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, const char* signal ```
int32_t q_mediarecorder_qbase_receivers(void* self, const char* signal) {
    return QMediaRecorder_QBaseReceivers((QMediaRecorder*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, int32_t (*slot)(QMediaRecorder*, const char*) ```
void q_mediarecorder_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMediaRecorder_OnReceivers((QMediaRecorder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
bool q_mediarecorder_is_signal_connected(void* self, void* signal) {
    return QMediaRecorder_IsSignalConnected((QMediaRecorder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaRecorder* self, QMetaMethod* signal ```
bool q_mediarecorder_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaRecorder_QBaseIsSignalConnected((QMediaRecorder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaRecorder* self, bool (*slot)(QMediaRecorder*, QMetaMethod*) ```
void q_mediarecorder_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMediaRecorder_OnIsSignalConnected((QMediaRecorder*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaRecorder* self ```
void q_mediarecorder_delete(void* self) {
    QMediaRecorder_Delete((QMediaRecorder*)(self));
}