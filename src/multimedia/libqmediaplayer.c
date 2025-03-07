#include "../libqanystringview.hpp"
#include "libqaudiooutput.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "libqmediametadata.hpp"
#include "libqmediatimerange.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqvideosink.hpp"
#include "../libqcoreevent.hpp"
#include "libqmediaplayer.hpp"
#include "libqmediaplayer.h"

/// https://doc.qt.io/qt-6/qmediaplayer.html

/// q_mediaplayer_new constructs a new QMediaPlayer object.
///
///
QMediaPlayer* q_mediaplayer_new() {
    return QMediaPlayer_new();
}

/// q_mediaplayer_new2 constructs a new QMediaPlayer object.
///
/// ``` QObject* parent ```
QMediaPlayer* q_mediaplayer_new2(void* parent) {
    return QMediaPlayer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaPlayer* self ```
QMetaObject* q_mediaplayer_meta_object(void* self) {
    return QMediaPlayer_MetaObject((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, const char* param1 ```
void* q_mediaplayer_metacast(void* self, const char* param1) {
    return QMediaPlayer_Metacast((QMediaPlayer*)self, param1);
}

/// ``` QMediaPlayer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediaplayer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaPlayer_Metacall((QMediaPlayer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMediaPlayer* self, int32_t (*slot)(QMediaPlayer*, enum QMetaObject__Call, int, void*) ```
void q_mediaplayer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMediaPlayer_OnMetacall((QMediaPlayer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMediaPlayer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediaplayer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaPlayer_QBaseMetacall((QMediaPlayer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediaplayer_tr(const char* s) {
    libqt_string _str = QMediaPlayer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QMediaMetaData* */ q_mediaplayer_audio_tracks(void* self) {
    libqt_list _arr = QMediaPlayer_AudioTracks((QMediaPlayer*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QMediaMetaData* */ q_mediaplayer_video_tracks(void* self) {
    libqt_list _arr = QMediaPlayer_VideoTracks((QMediaPlayer*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QMediaMetaData* */ q_mediaplayer_subtitle_tracks(void* self) {
    libqt_list _arr = QMediaPlayer_SubtitleTracks((QMediaPlayer*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_active_audio_track(void* self) {
    return QMediaPlayer_ActiveAudioTrack((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_active_video_track(void* self) {
    return QMediaPlayer_ActiveVideoTrack((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_active_subtitle_track(void* self) {
    return QMediaPlayer_ActiveSubtitleTrack((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
///
/// ``` QMediaPlayer* self, int index ```
void q_mediaplayer_set_active_audio_track(void* self, int index) {
    QMediaPlayer_SetActiveAudioTrack((QMediaPlayer*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
///
/// ``` QMediaPlayer* self, int index ```
void q_mediaplayer_set_active_video_track(void* self, int index) {
    QMediaPlayer_SetActiveVideoTrack((QMediaPlayer*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
///
/// ``` QMediaPlayer* self, int index ```
void q_mediaplayer_set_active_subtitle_track(void* self, int index) {
    QMediaPlayer_SetActiveSubtitleTrack((QMediaPlayer*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
///
/// ``` QMediaPlayer* self, QAudioOutput* output ```
void q_mediaplayer_set_audio_output(void* self, void* output) {
    QMediaPlayer_SetAudioOutput((QMediaPlayer*)self, (QAudioOutput*)output);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
///
/// ``` QMediaPlayer* self ```
QAudioOutput* q_mediaplayer_audio_output(void* self) {
    return QMediaPlayer_AudioOutput((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
///
/// ``` QMediaPlayer* self, QObject* videoOutput ```
void q_mediaplayer_set_video_output(void* self, void* videoOutput) {
    QMediaPlayer_SetVideoOutput((QMediaPlayer*)self, (QObject*)videoOutput);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_video_output(void* self) {
    return QMediaPlayer_VideoOutput((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
///
/// ``` QMediaPlayer* self, QVideoSink* sink ```
void q_mediaplayer_set_video_sink(void* self, void* sink) {
    QMediaPlayer_SetVideoSink((QMediaPlayer*)self, (QVideoSink*)sink);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
///
/// ``` QMediaPlayer* self ```
QVideoSink* q_mediaplayer_video_sink(void* self) {
    return QMediaPlayer_VideoSink((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#source)
///
/// ``` QMediaPlayer* self ```
QUrl* q_mediaplayer_source(void* self) {
    return QMediaPlayer_Source((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
///
/// ``` QMediaPlayer* self ```
QIODevice* q_mediaplayer_source_device(void* self) {
    return QMediaPlayer_SourceDevice((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackState)
///
/// ``` QMediaPlayer* self ```
int64_t q_mediaplayer_playback_state(void* self) {
    return QMediaPlayer_PlaybackState((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatus)
///
/// ``` QMediaPlayer* self ```
int64_t q_mediaplayer_media_status(void* self) {
    return QMediaPlayer_MediaStatus((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
///
/// ``` QMediaPlayer* self ```
long long q_mediaplayer_duration(void* self) {
    return QMediaPlayer_Duration((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#position)
///
/// ``` QMediaPlayer* self ```
long long q_mediaplayer_position(void* self) {
    return QMediaPlayer_Position((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_has_audio(void* self) {
    return QMediaPlayer_HasAudio((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_has_video(void* self) {
    return QMediaPlayer_HasVideo((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
///
/// ``` QMediaPlayer* self ```
float q_mediaplayer_buffer_progress(void* self) {
    return QMediaPlayer_BufferProgress((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
///
/// ``` QMediaPlayer* self ```
QMediaTimeRange* q_mediaplayer_buffered_time_range(void* self) {
    return QMediaPlayer_BufferedTimeRange((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_seekable(void* self) {
    return QMediaPlayer_IsSeekable((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
///
/// ``` QMediaPlayer* self ```
double q_mediaplayer_playback_rate(void* self) {
    return QMediaPlayer_PlaybackRate((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_loops(void* self) {
    return QMediaPlayer_Loops((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
///
/// ``` QMediaPlayer* self, int loops ```
void q_mediaplayer_set_loops(void* self, int loops) {
    QMediaPlayer_SetLoops((QMediaPlayer*)self, loops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#error)
///
/// ``` QMediaPlayer* self ```
int64_t q_mediaplayer_error(void* self) {
    return QMediaPlayer_Error((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
///
/// ``` QMediaPlayer* self ```
const char* q_mediaplayer_error_string(void* self) {
    libqt_string _str = QMediaPlayer_ErrorString((QMediaPlayer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_available(void* self) {
    return QMediaPlayer_IsAvailable((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
///
/// ``` QMediaPlayer* self ```
QMediaMetaData* q_mediaplayer_meta_data(void* self) {
    return QMediaPlayer_MetaData((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#play)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_play(void* self) {
    QMediaPlayer_Play((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_pause(void* self) {
    QMediaPlayer_Pause((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_stop(void* self) {
    QMediaPlayer_Stop((QMediaPlayer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
///
/// ``` QMediaPlayer* self, long long position ```
void q_mediaplayer_set_position(void* self, long long position) {
    QMediaPlayer_SetPosition((QMediaPlayer*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
///
/// ``` QMediaPlayer* self, double rate ```
void q_mediaplayer_set_playback_rate(void* self, double rate) {
    QMediaPlayer_SetPlaybackRate((QMediaPlayer*)self, rate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
///
/// ``` QMediaPlayer* self, QUrl* source ```
void q_mediaplayer_set_source(void* self, void* source) {
    QMediaPlayer_SetSource((QMediaPlayer*)self, (QUrl*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
///
/// ``` QMediaPlayer* self, QIODevice* device ```
void q_mediaplayer_set_source_device(void* self, void* device) {
    QMediaPlayer_SetSourceDevice((QMediaPlayer*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
///
/// ``` QMediaPlayer* self, QUrl* media ```
void q_mediaplayer_source_changed(void* self, void* media) {
    QMediaPlayer_SourceChanged((QMediaPlayer*)self, (QUrl*)media);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QUrl*) ```
void q_mediaplayer_on_source_changed(void* self, void (*slot)(void*, void*)) {
    QMediaPlayer_Connect_SourceChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
///
/// ``` QMediaPlayer* self, enum QMediaPlayer__PlaybackState newState ```
void q_mediaplayer_playback_state_changed(void* self, int64_t newState) {
    QMediaPlayer_PlaybackStateChanged((QMediaPlayer*)self, newState);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, enum QMediaPlayer__PlaybackState) ```
void q_mediaplayer_on_playback_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QMediaPlayer_Connect_PlaybackStateChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
///
/// ``` QMediaPlayer* self, enum QMediaPlayer__MediaStatus status ```
void q_mediaplayer_media_status_changed(void* self, int64_t status) {
    QMediaPlayer_MediaStatusChanged((QMediaPlayer*)self, status);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, enum QMediaPlayer__MediaStatus) ```
void q_mediaplayer_on_media_status_changed(void* self, void (*slot)(void*, int64_t)) {
    QMediaPlayer_Connect_MediaStatusChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
///
/// ``` QMediaPlayer* self, long long duration ```
void q_mediaplayer_duration_changed(void* self, long long duration) {
    QMediaPlayer_DurationChanged((QMediaPlayer*)self, duration);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, long long) ```
void q_mediaplayer_on_duration_changed(void* self, void (*slot)(void*, long long)) {
    QMediaPlayer_Connect_DurationChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
///
/// ``` QMediaPlayer* self, long long position ```
void q_mediaplayer_position_changed(void* self, long long position) {
    QMediaPlayer_PositionChanged((QMediaPlayer*)self, position);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, long long) ```
void q_mediaplayer_on_position_changed(void* self, void (*slot)(void*, long long)) {
    QMediaPlayer_Connect_PositionChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
///
/// ``` QMediaPlayer* self, bool available ```
void q_mediaplayer_has_audio_changed(void* self, bool available) {
    QMediaPlayer_HasAudioChanged((QMediaPlayer*)self, available);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, bool) ```
void q_mediaplayer_on_has_audio_changed(void* self, void (*slot)(void*, bool)) {
    QMediaPlayer_Connect_HasAudioChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
///
/// ``` QMediaPlayer* self, bool videoAvailable ```
void q_mediaplayer_has_video_changed(void* self, bool videoAvailable) {
    QMediaPlayer_HasVideoChanged((QMediaPlayer*)self, videoAvailable);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, bool) ```
void q_mediaplayer_on_has_video_changed(void* self, void (*slot)(void*, bool)) {
    QMediaPlayer_Connect_HasVideoChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
///
/// ``` QMediaPlayer* self, float progress ```
void q_mediaplayer_buffer_progress_changed(void* self, float progress) {
    QMediaPlayer_BufferProgressChanged((QMediaPlayer*)self, progress);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, float) ```
void q_mediaplayer_on_buffer_progress_changed(void* self, void (*slot)(void*, float)) {
    QMediaPlayer_Connect_BufferProgressChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
///
/// ``` QMediaPlayer* self, bool seekable ```
void q_mediaplayer_seekable_changed(void* self, bool seekable) {
    QMediaPlayer_SeekableChanged((QMediaPlayer*)self, seekable);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, bool) ```
void q_mediaplayer_on_seekable_changed(void* self, void (*slot)(void*, bool)) {
    QMediaPlayer_Connect_SeekableChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
///
/// ``` QMediaPlayer* self, double rate ```
void q_mediaplayer_playback_rate_changed(void* self, double rate) {
    QMediaPlayer_PlaybackRateChanged((QMediaPlayer*)self, rate);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, double) ```
void q_mediaplayer_on_playback_rate_changed(void* self, void (*slot)(void*, double)) {
    QMediaPlayer_Connect_PlaybackRateChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_loops_changed(void* self) {
    QMediaPlayer_LoopsChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_loops_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_LoopsChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_meta_data_changed(void* self) {
    QMediaPlayer_MetaDataChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_meta_data_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_MetaDataChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_video_output_changed(void* self) {
    QMediaPlayer_VideoOutputChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_video_output_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_VideoOutputChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_audio_output_changed(void* self) {
    QMediaPlayer_AudioOutputChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_audio_output_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_AudioOutputChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_tracks_changed(void* self) {
    QMediaPlayer_TracksChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_tracks_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_TracksChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_active_tracks_changed(void* self) {
    QMediaPlayer_ActiveTracksChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_active_tracks_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_ActiveTracksChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_error_changed(void* self) {
    QMediaPlayer_ErrorChanged((QMediaPlayer*)self);
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_error_changed(void* self, void (*slot)(void*)) {
    QMediaPlayer_Connect_ErrorChanged((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
///
/// ``` QMediaPlayer* self, enum QMediaPlayer__Error errorVal, const char* errorString ```
void q_mediaplayer_error_occurred(void* self, int64_t errorVal, const char* errorString) {
    QMediaPlayer_ErrorOccurred((QMediaPlayer*)self, errorVal, qstring(errorString));
}

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, enum QMediaPlayer__Error, const char*) ```
void q_mediaplayer_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*)) {
    QMediaPlayer_Connect_ErrorOccurred((QMediaPlayer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediaplayer_tr2(const char* s, const char* c) {
    libqt_string _str = QMediaPlayer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediaplayer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMediaPlayer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
///
/// ``` QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl ```
void q_mediaplayer_set_source_device2(void* self, void* device, void* sourceUrl) {
    QMediaPlayer_SetSourceDevice2((QMediaPlayer*)self, (QIODevice*)device, (QUrl*)sourceUrl);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaPlayer* self ```
const char* q_mediaplayer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaPlayer* self, const char* name ```
void q_mediaplayer_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaPlayer* self, bool b ```
bool q_mediaplayer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaPlayer* self ```
QThread* q_mediaplayer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaPlayer* self, QThread* thread ```
void q_mediaplayer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaPlayer* self, int interval ```
int32_t q_mediaplayer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaPlayer* self, int id ```
void q_mediaplayer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QObject* */ q_mediaplayer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaPlayer* self, QObject* parent ```
void q_mediaplayer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaPlayer* self, QObject* filterObj ```
void q_mediaplayer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaPlayer* self, QObject* obj ```
void q_mediaplayer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediaplayer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaPlayer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediaplayer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediaplayer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediaplayer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaPlayer* self, const char* name, QVariant* value ```
bool q_mediaplayer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaPlayer* self, const char* name ```
QVariant* q_mediaplayer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaPlayer* self ```
const char** q_mediaplayer_dynamic_property_names(void* self) {
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
/// ``` QMediaPlayer* self ```
QBindingStorage* q_mediaplayer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaPlayer* self ```
QBindingStorage* q_mediaplayer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMediaPlayer* self, void (*slot)(QObject*) ```
void q_mediaplayer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaPlayer* self, const char* classname ```
bool q_mediaplayer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaPlayer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediaplayer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediaplayer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaPlayer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediaplayer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaPlayer* self, QObject* param1 ```
void q_mediaplayer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMediaPlayer* self, void (*slot)(QObject*, QObject*) ```
void q_mediaplayer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
bool q_mediaplayer_event(void* self, void* event) {
    return QMediaPlayer_Event((QMediaPlayer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
bool q_mediaplayer_qbase_event(void* self, void* event) {
    return QMediaPlayer_QBaseEvent((QMediaPlayer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, bool (*slot)(QMediaPlayer*, QEvent*) ```
void q_mediaplayer_on_event(void* self, bool (*slot)(void*, void*)) {
    QMediaPlayer_OnEvent((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QObject* watched, QEvent* event ```
bool q_mediaplayer_event_filter(void* self, void* watched, void* event) {
    return QMediaPlayer_EventFilter((QMediaPlayer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QObject* watched, QEvent* event ```
bool q_mediaplayer_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaPlayer_QBaseEventFilter((QMediaPlayer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, bool (*slot)(QMediaPlayer*, QObject*, QEvent*) ```
void q_mediaplayer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMediaPlayer_OnEventFilter((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QTimerEvent* event ```
void q_mediaplayer_timer_event(void* self, void* event) {
    QMediaPlayer_TimerEvent((QMediaPlayer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QTimerEvent* event ```
void q_mediaplayer_qbase_timer_event(void* self, void* event) {
    QMediaPlayer_QBaseTimerEvent((QMediaPlayer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QTimerEvent*) ```
void q_mediaplayer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMediaPlayer_OnTimerEvent((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QChildEvent* event ```
void q_mediaplayer_child_event(void* self, void* event) {
    QMediaPlayer_ChildEvent((QMediaPlayer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QChildEvent* event ```
void q_mediaplayer_qbase_child_event(void* self, void* event) {
    QMediaPlayer_QBaseChildEvent((QMediaPlayer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QChildEvent*) ```
void q_mediaplayer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMediaPlayer_OnChildEvent((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
void q_mediaplayer_custom_event(void* self, void* event) {
    QMediaPlayer_CustomEvent((QMediaPlayer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
void q_mediaplayer_qbase_custom_event(void* self, void* event) {
    QMediaPlayer_QBaseCustomEvent((QMediaPlayer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QEvent*) ```
void q_mediaplayer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMediaPlayer_OnCustomEvent((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_connect_notify(void* self, void* signal) {
    QMediaPlayer_ConnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_qbase_connect_notify(void* self, void* signal) {
    QMediaPlayer_QBaseConnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QMetaMethod*) ```
void q_mediaplayer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaPlayer_OnConnectNotify((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_disconnect_notify(void* self, void* signal) {
    QMediaPlayer_DisconnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_qbase_disconnect_notify(void* self, void* signal) {
    QMediaPlayer_QBaseDisconnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QMetaMethod*) ```
void q_mediaplayer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaPlayer_OnDisconnectNotify((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_sender(void* self) {
    return QMediaPlayer_Sender((QMediaPlayer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_qbase_sender(void* self) {
    return QMediaPlayer_QBaseSender((QMediaPlayer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, QObject* (*slot)() ```
void q_mediaplayer_on_sender(void* self, QObject* (*slot)()) {
    QMediaPlayer_OnSender((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_sender_signal_index(void* self) {
    return QMediaPlayer_SenderSignalIndex((QMediaPlayer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_qbase_sender_signal_index(void* self) {
    return QMediaPlayer_QBaseSenderSignalIndex((QMediaPlayer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, int32_t (*slot)() ```
void q_mediaplayer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMediaPlayer_OnSenderSignalIndex((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, const char* signal ```
int32_t q_mediaplayer_receivers(void* self, const char* signal) {
    return QMediaPlayer_Receivers((QMediaPlayer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, const char* signal ```
int32_t q_mediaplayer_qbase_receivers(void* self, const char* signal) {
    return QMediaPlayer_QBaseReceivers((QMediaPlayer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, int32_t (*slot)(QMediaPlayer*, const char*) ```
void q_mediaplayer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMediaPlayer_OnReceivers((QMediaPlayer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
bool q_mediaplayer_is_signal_connected(void* self, void* signal) {
    return QMediaPlayer_IsSignalConnected((QMediaPlayer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
bool q_mediaplayer_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaPlayer_QBaseIsSignalConnected((QMediaPlayer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, bool (*slot)(QMediaPlayer*, QMetaMethod*) ```
void q_mediaplayer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMediaPlayer_OnIsSignalConnected((QMediaPlayer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_delete(void* self) {
    QMediaPlayer_Delete((QMediaPlayer*)(self));
}