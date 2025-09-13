#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIAPLAYER_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qmediaplayer.html

/// q_mediaplayer_new constructs a new QMediaPlayer object.
///
QMediaPlayer* q_mediaplayer_new();

/// q_mediaplayer_new2 constructs a new QMediaPlayer object.
///
/// @param parent QObject*
QMediaPlayer* q_mediaplayer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMediaPlayer*
const QMetaObject* q_mediaplayer_meta_object(void* self);

/// @param self QMediaPlayer*
/// @param param1 const char*
void* q_mediaplayer_metacast(void* self, const char* param1);

/// @param self QMediaPlayer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_mediaplayer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMediaPlayer*
/// @param callback int32_t func(QMediaPlayer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_mediaplayer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMediaPlayer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_mediaplayer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_mediaplayer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
///
/// @param self QMediaPlayer*
libqt_list /* of QMediaMetaData* */ q_mediaplayer_audio_tracks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
///
/// @param self QMediaPlayer*
libqt_list /* of QMediaMetaData* */ q_mediaplayer_video_tracks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
///
/// @param self QMediaPlayer*
libqt_list /* of QMediaMetaData* */ q_mediaplayer_subtitle_tracks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
///
/// @param self QMediaPlayer*
int32_t q_mediaplayer_active_audio_track(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
///
/// @param self QMediaPlayer*
int32_t q_mediaplayer_active_video_track(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
///
/// @param self QMediaPlayer*
int32_t q_mediaplayer_active_subtitle_track(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
///
/// @param self QMediaPlayer*
/// @param index int
void q_mediaplayer_set_active_audio_track(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
///
/// @param self QMediaPlayer*
/// @param index int
void q_mediaplayer_set_active_video_track(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
///
/// @param self QMediaPlayer*
/// @param index int
void q_mediaplayer_set_active_subtitle_track(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioBufferOutput)
///
/// @param self QMediaPlayer*
/// @param output QAudioBufferOutput*
void q_mediaplayer_set_audio_buffer_output(void* self, void* output);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutput)
///
/// @param self QMediaPlayer*
QAudioBufferOutput* q_mediaplayer_audio_buffer_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
///
/// @param self QMediaPlayer*
/// @param output QAudioOutput*
void q_mediaplayer_set_audio_output(void* self, void* output);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
///
/// @param self QMediaPlayer*
QAudioOutput* q_mediaplayer_audio_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
///
/// @param self QMediaPlayer*
/// @param videoOutput QObject*
void q_mediaplayer_set_video_output(void* self, void* videoOutput);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
///
/// @param self QMediaPlayer*
QObject* q_mediaplayer_video_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
///
/// @param self QMediaPlayer*
/// @param sink QVideoSink*
void q_mediaplayer_set_video_sink(void* self, void* sink);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
///
/// @param self QMediaPlayer*
QVideoSink* q_mediaplayer_video_sink(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#source)
///
/// @param self QMediaPlayer*
QUrl* q_mediaplayer_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
///
/// @param self QMediaPlayer*
const QIODevice* q_mediaplayer_source_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackState)
///
/// @param self QMediaPlayer*
///
/// @return enum QMediaPlayer__PlaybackState
int32_t q_mediaplayer_playback_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatus)
///
/// @param self QMediaPlayer*
///
/// @return enum QMediaPlayer__MediaStatus
int32_t q_mediaplayer_media_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
///
/// @param self QMediaPlayer*
long long q_mediaplayer_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#position)
///
/// @param self QMediaPlayer*
long long q_mediaplayer_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_has_audio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_has_video(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
///
/// @param self QMediaPlayer*
float q_mediaplayer_buffer_progress(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
///
/// @param self QMediaPlayer*
QMediaTimeRange* q_mediaplayer_buffered_time_range(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_is_seekable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
///
/// @param self QMediaPlayer*
double q_mediaplayer_playback_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isPlaying)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_is_playing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
///
/// @param self QMediaPlayer*
int32_t q_mediaplayer_loops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
///
/// @param self QMediaPlayer*
/// @param loops int
void q_mediaplayer_set_loops(void* self, int loops);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#error)
///
/// @param self QMediaPlayer*
///
/// @return enum QMediaPlayer__Error
int32_t q_mediaplayer_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMediaPlayer*
const char* q_mediaplayer_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_is_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
///
/// @param self QMediaPlayer*
QMediaMetaData* q_mediaplayer_meta_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#play)
///
/// @param self QMediaPlayer*
void q_mediaplayer_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
///
/// @param self QMediaPlayer*
void q_mediaplayer_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
///
/// @param self QMediaPlayer*
void q_mediaplayer_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
///
/// @param self QMediaPlayer*
/// @param position long long
void q_mediaplayer_set_position(void* self, long long position);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
///
/// @param self QMediaPlayer*
/// @param rate double
void q_mediaplayer_set_playback_rate(void* self, double rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
///
/// @param self QMediaPlayer*
/// @param source QUrl*
void q_mediaplayer_set_source(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
///
/// @param self QMediaPlayer*
/// @param device QIODevice*
void q_mediaplayer_set_source_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
///
/// @param self QMediaPlayer*
/// @param media QUrl*
void q_mediaplayer_source_changed(void* self, void* media);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QUrl* media)
void q_mediaplayer_on_source_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
///
/// @param self QMediaPlayer*
/// @param newState enum QMediaPlayer__PlaybackState
void q_mediaplayer_playback_state_changed(void* self, int32_t newState);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, enum QMediaPlayer__PlaybackState newState)
void q_mediaplayer_on_playback_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
///
/// @param self QMediaPlayer*
/// @param status enum QMediaPlayer__MediaStatus
void q_mediaplayer_media_status_changed(void* self, int32_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, enum QMediaPlayer__MediaStatus status)
void q_mediaplayer_on_media_status_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
///
/// @param self QMediaPlayer*
/// @param duration long long
void q_mediaplayer_duration_changed(void* self, long long duration);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, long long duration)
void q_mediaplayer_on_duration_changed(void* self, void (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
///
/// @param self QMediaPlayer*
/// @param position long long
void q_mediaplayer_position_changed(void* self, long long position);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, long long position)
void q_mediaplayer_on_position_changed(void* self, void (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
///
/// @param self QMediaPlayer*
/// @param available bool
void q_mediaplayer_has_audio_changed(void* self, bool available);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, bool available)
void q_mediaplayer_on_has_audio_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
///
/// @param self QMediaPlayer*
/// @param videoAvailable bool
void q_mediaplayer_has_video_changed(void* self, bool videoAvailable);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, bool videoAvailable)
void q_mediaplayer_on_has_video_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
///
/// @param self QMediaPlayer*
/// @param progress float
void q_mediaplayer_buffer_progress_changed(void* self, float progress);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, float progress)
void q_mediaplayer_on_buffer_progress_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
///
/// @param self QMediaPlayer*
/// @param seekable bool
void q_mediaplayer_seekable_changed(void* self, bool seekable);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, bool seekable)
void q_mediaplayer_on_seekable_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
///
/// @param self QMediaPlayer*
/// @param playing bool
void q_mediaplayer_playing_changed(void* self, bool playing);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playingChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, bool playing)
void q_mediaplayer_on_playing_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
///
/// @param self QMediaPlayer*
/// @param rate double
void q_mediaplayer_playback_rate_changed(void* self, double rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, double rate)
void q_mediaplayer_on_playback_rate_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_loops_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_loops_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_meta_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_meta_data_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_video_output_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_video_output_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_audio_output_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_audio_output_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_audio_buffer_output_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioBufferOutputChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_audio_buffer_output_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_tracks_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_tracks_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_active_tracks_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_active_tracks_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
///
/// @param self QMediaPlayer*
void q_mediaplayer_error_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_error_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
///
/// @param self QMediaPlayer*
/// @param error enum QMediaPlayer__Error
/// @param errorString const char*
void q_mediaplayer_error_occurred(void* self, int32_t error, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, enum QMediaPlayer__Error error, const char* errorString)
void q_mediaplayer_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_mediaplayer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_mediaplayer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
///
/// @param self QMediaPlayer*
/// @param device QIODevice*
/// @param sourceUrl QUrl*
void q_mediaplayer_set_source_device2(void* self, void* device, void* sourceUrl);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMediaPlayer*
const char* q_mediaplayer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMediaPlayer*
/// @param name char*
void q_mediaplayer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMediaPlayer*
bool q_mediaplayer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMediaPlayer*
/// @param b bool
bool q_mediaplayer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMediaPlayer*
QThread* q_mediaplayer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMediaPlayer*
/// @param thread QThread*
bool q_mediaplayer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaPlayer*
/// @param interval int
int32_t q_mediaplayer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMediaPlayer*
/// @param id int
void q_mediaplayer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMediaPlayer*
/// @param id enum Qt__TimerId
void q_mediaplayer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMediaPlayer*
libqt_list /* of QObject* */ q_mediaplayer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMediaPlayer*
/// @param parent QObject*
void q_mediaplayer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMediaPlayer*
/// @param filterObj QObject*
void q_mediaplayer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMediaPlayer*
/// @param obj QObject*
void q_mediaplayer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_mediaplayer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMediaPlayer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_mediaplayer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_mediaplayer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_mediaplayer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMediaPlayer*
void q_mediaplayer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMediaPlayer*
void q_mediaplayer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMediaPlayer*
/// @param name const char*
/// @param value QVariant*
bool q_mediaplayer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMediaPlayer*
/// @param name const char*
QVariant* q_mediaplayer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMediaPlayer*
const char** q_mediaplayer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMediaPlayer*
QBindingStorage* q_mediaplayer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMediaPlayer*
const QBindingStorage* q_mediaplayer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaPlayer*
void q_mediaplayer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self)
void q_mediaplayer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMediaPlayer*
QObject* q_mediaplayer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMediaPlayer*
/// @param classname const char*
bool q_mediaplayer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMediaPlayer*
void q_mediaplayer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMediaPlayer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_mediaplayer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMediaPlayer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_mediaplayer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_mediaplayer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMediaPlayer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_mediaplayer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaPlayer*
/// @param param1 QObject*
void q_mediaplayer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QObject* param1)
void q_mediaplayer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QEvent*
bool q_mediaplayer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QEvent*
bool q_mediaplayer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback bool func(QMediaPlayer* self, QEvent* event)
void q_mediaplayer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param watched QObject*
/// @param event QEvent*
bool q_mediaplayer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param watched QObject*
/// @param event QEvent*
bool q_mediaplayer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback bool func(QMediaPlayer* self, QObject* watched, QEvent* event)
void q_mediaplayer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QTimerEvent*
void q_mediaplayer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QTimerEvent*
void q_mediaplayer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QTimerEvent* event)
void q_mediaplayer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QChildEvent*
void q_mediaplayer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QChildEvent*
void q_mediaplayer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QChildEvent* event)
void q_mediaplayer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QEvent*
void q_mediaplayer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param event QEvent*
void q_mediaplayer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QEvent* event)
void q_mediaplayer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal QMetaMethod*
void q_mediaplayer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal QMetaMethod*
void q_mediaplayer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QMetaMethod* signal)
void q_mediaplayer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal QMetaMethod*
void q_mediaplayer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal QMetaMethod*
void q_mediaplayer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, QMetaMethod* signal)
void q_mediaplayer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
QObject* q_mediaplayer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
QObject* q_mediaplayer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback QObject* func()
void q_mediaplayer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
int32_t q_mediaplayer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
int32_t q_mediaplayer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback int32_t func()
void q_mediaplayer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal const char*
int32_t q_mediaplayer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal const char*
int32_t q_mediaplayer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback int32_t func(QMediaPlayer* self, const char* signal)
void q_mediaplayer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal QMetaMethod*
bool q_mediaplayer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param signal QMetaMethod*
bool q_mediaplayer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMediaPlayer*
/// @param callback bool func(QMediaPlayer* self, QMetaMethod* signal)
void q_mediaplayer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMediaPlayer*
/// @param callback void func(QMediaPlayer* self, const char* objectName)
void q_mediaplayer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#dtor.QMediaPlayer)
///
/// Delete this object from C++ memory.
///
/// @param self QMediaPlayer*
void q_mediaplayer_delete(void* self);

/// https://doc.qt.io/qt-6/qmediaplayer.html#types

typedef enum {
    QMEDIAPLAYER_PLAYBACKSTATE_STOPPEDSTATE = 0,
    QMEDIAPLAYER_PLAYBACKSTATE_PLAYINGSTATE = 1,
    QMEDIAPLAYER_PLAYBACKSTATE_PAUSEDSTATE = 2
} QMediaPlayer__PlaybackState;

typedef enum {
    QMEDIAPLAYER_MEDIASTATUS_NOMEDIA = 0,
    QMEDIAPLAYER_MEDIASTATUS_LOADINGMEDIA = 1,
    QMEDIAPLAYER_MEDIASTATUS_LOADEDMEDIA = 2,
    QMEDIAPLAYER_MEDIASTATUS_STALLEDMEDIA = 3,
    QMEDIAPLAYER_MEDIASTATUS_BUFFERINGMEDIA = 4,
    QMEDIAPLAYER_MEDIASTATUS_BUFFEREDMEDIA = 5,
    QMEDIAPLAYER_MEDIASTATUS_ENDOFMEDIA = 6,
    QMEDIAPLAYER_MEDIASTATUS_INVALIDMEDIA = 7
} QMediaPlayer__MediaStatus;

typedef enum {
    QMEDIAPLAYER_ERROR_NOERROR = 0,
    QMEDIAPLAYER_ERROR_RESOURCEERROR = 1,
    QMEDIAPLAYER_ERROR_FORMATERROR = 2,
    QMEDIAPLAYER_ERROR_NETWORKERROR = 3,
    QMEDIAPLAYER_ERROR_ACCESSDENIEDERROR = 4
} QMediaPlayer__Error;

typedef enum {
    QMEDIAPLAYER_LOOPS_INFINITE = -1,
    QMEDIAPLAYER_LOOPS_ONCE = 1
} QMediaPlayer__Loops;

#endif
