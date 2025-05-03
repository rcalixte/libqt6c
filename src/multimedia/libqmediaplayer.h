#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIAPLAYER_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiooutput.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "libqmediametadata.h"
#include "libqmediatimerange.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "libqvideosink.h"

/// https://doc.qt.io/qt-6/qmediaplayer.html

/// q_mediaplayer_new constructs a new QMediaPlayer object.
///
///
QMediaPlayer* q_mediaplayer_new();

/// q_mediaplayer_new2 constructs a new QMediaPlayer object.
///
/// ``` QObject* parent ```
QMediaPlayer* q_mediaplayer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaPlayer* self ```
QMetaObject* q_mediaplayer_meta_object(void* self);

/// ``` QMediaPlayer* self, const char* param1 ```
void* q_mediaplayer_metacast(void* self, const char* param1);

/// ``` QMediaPlayer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediaplayer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMediaPlayer* self, int32_t (*slot)(QMediaPlayer*, enum QMetaObject__Call, int, void*) ```
void q_mediaplayer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMediaPlayer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediaplayer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediaplayer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioTracks)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QMediaMetaData* */ q_mediaplayer_audio_tracks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoTracks)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QMediaMetaData* */ q_mediaplayer_video_tracks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#subtitleTracks)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QMediaMetaData* */ q_mediaplayer_subtitle_tracks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeAudioTrack)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_active_audio_track(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeVideoTrack)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_active_video_track(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeSubtitleTrack)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_active_subtitle_track(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveAudioTrack)
///
/// ``` QMediaPlayer* self, int index ```
void q_mediaplayer_set_active_audio_track(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveVideoTrack)
///
/// ``` QMediaPlayer* self, int index ```
void q_mediaplayer_set_active_video_track(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setActiveSubtitleTrack)
///
/// ``` QMediaPlayer* self, int index ```
void q_mediaplayer_set_active_subtitle_track(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setAudioOutput)
///
/// ``` QMediaPlayer* self, QAudioOutput* output ```
void q_mediaplayer_set_audio_output(void* self, void* output);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutput)
///
/// ``` QMediaPlayer* self ```
QAudioOutput* q_mediaplayer_audio_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoOutput)
///
/// ``` QMediaPlayer* self, QObject* videoOutput ```
void q_mediaplayer_set_video_output(void* self, void* videoOutput);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutput)
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_video_output(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setVideoSink)
///
/// ``` QMediaPlayer* self, QVideoSink* sink ```
void q_mediaplayer_set_video_sink(void* self, void* sink);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoSink)
///
/// ``` QMediaPlayer* self ```
QVideoSink* q_mediaplayer_video_sink(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#source)
///
/// ``` QMediaPlayer* self ```
QUrl* q_mediaplayer_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceDevice)
///
/// ``` QMediaPlayer* self ```
QIODevice* q_mediaplayer_source_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackState)
///
/// ``` QMediaPlayer* self ```
int64_t q_mediaplayer_playback_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatus)
///
/// ``` QMediaPlayer* self ```
int64_t q_mediaplayer_media_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#duration)
///
/// ``` QMediaPlayer* self ```
long long q_mediaplayer_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#position)
///
/// ``` QMediaPlayer* self ```
long long q_mediaplayer_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudio)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_has_audio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideo)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_has_video(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgress)
///
/// ``` QMediaPlayer* self ```
float q_mediaplayer_buffer_progress(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferedTimeRange)
///
/// ``` QMediaPlayer* self ```
QMediaTimeRange* q_mediaplayer_buffered_time_range(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isSeekable)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_seekable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRate)
///
/// ``` QMediaPlayer* self ```
double q_mediaplayer_playback_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loops)
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_loops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setLoops)
///
/// ``` QMediaPlayer* self, int loops ```
void q_mediaplayer_set_loops(void* self, int loops);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#error)
///
/// ``` QMediaPlayer* self ```
int64_t q_mediaplayer_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorString)
///
/// ``` QMediaPlayer* self ```
const char* q_mediaplayer_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#isAvailable)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaData)
///
/// ``` QMediaPlayer* self ```
QMediaMetaData* q_mediaplayer_meta_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#play)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#pause)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#stop)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPosition)
///
/// ``` QMediaPlayer* self, long long position ```
void q_mediaplayer_set_position(void* self, long long position);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setPlaybackRate)
///
/// ``` QMediaPlayer* self, double rate ```
void q_mediaplayer_set_playback_rate(void* self, double rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSource)
///
/// ``` QMediaPlayer* self, QUrl* source ```
void q_mediaplayer_set_source(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
///
/// ``` QMediaPlayer* self, QIODevice* device ```
void q_mediaplayer_set_source_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#sourceChanged)
///
/// ``` QMediaPlayer* self, QUrl* media ```
void q_mediaplayer_source_changed(void* self, void* media);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QUrl*) ```
void q_mediaplayer_on_source_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackStateChanged)
///
/// ``` QMediaPlayer* self, enum QMediaPlayer__PlaybackState newState ```
void q_mediaplayer_playback_state_changed(void* self, int64_t newState);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, enum QMediaPlayer__PlaybackState) ```
void q_mediaplayer_on_playback_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#mediaStatusChanged)
///
/// ``` QMediaPlayer* self, enum QMediaPlayer__MediaStatus status ```
void q_mediaplayer_media_status_changed(void* self, int64_t status);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, enum QMediaPlayer__MediaStatus) ```
void q_mediaplayer_on_media_status_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#durationChanged)
///
/// ``` QMediaPlayer* self, long long duration ```
void q_mediaplayer_duration_changed(void* self, long long duration);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, long long) ```
void q_mediaplayer_on_duration_changed(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#positionChanged)
///
/// ``` QMediaPlayer* self, long long position ```
void q_mediaplayer_position_changed(void* self, long long position);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, long long) ```
void q_mediaplayer_on_position_changed(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasAudioChanged)
///
/// ``` QMediaPlayer* self, bool available ```
void q_mediaplayer_has_audio_changed(void* self, bool available);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, bool) ```
void q_mediaplayer_on_has_audio_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#hasVideoChanged)
///
/// ``` QMediaPlayer* self, bool videoAvailable ```
void q_mediaplayer_has_video_changed(void* self, bool videoAvailable);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, bool) ```
void q_mediaplayer_on_has_video_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#bufferProgressChanged)
///
/// ``` QMediaPlayer* self, float progress ```
void q_mediaplayer_buffer_progress_changed(void* self, float progress);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, float) ```
void q_mediaplayer_on_buffer_progress_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#seekableChanged)
///
/// ``` QMediaPlayer* self, bool seekable ```
void q_mediaplayer_seekable_changed(void* self, bool seekable);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, bool) ```
void q_mediaplayer_on_seekable_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#playbackRateChanged)
///
/// ``` QMediaPlayer* self, double rate ```
void q_mediaplayer_playback_rate_changed(void* self, double rate);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, double) ```
void q_mediaplayer_on_playback_rate_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#loopsChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_loops_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_loops_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#metaDataChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_meta_data_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_meta_data_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#videoOutputChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_video_output_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_video_output_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#audioOutputChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_audio_output_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_audio_output_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#tracksChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_tracks_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_tracks_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#activeTracksChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_active_tracks_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_active_tracks_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorChanged)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_error_changed(void* self);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*) ```
void q_mediaplayer_on_error_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#errorOccurred)
///
/// ``` QMediaPlayer* self, enum QMediaPlayer__Error errorVal, const char* errorString ```
void q_mediaplayer_error_occurred(void* self, int64_t errorVal, const char* errorString);

/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, enum QMediaPlayer__Error, const char*) ```
void q_mediaplayer_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediaplayer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediaplayer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediaplayer.html#setSourceDevice)
///
/// ``` QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl ```
void q_mediaplayer_set_source_device2(void* self, void* device, void* sourceUrl);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaPlayer* self ```
const char* q_mediaplayer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaPlayer* self, char* name ```
void q_mediaplayer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaPlayer* self ```
bool q_mediaplayer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaPlayer* self, bool b ```
bool q_mediaplayer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaPlayer* self ```
QThread* q_mediaplayer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaPlayer* self, QThread* thread ```
void q_mediaplayer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaPlayer* self, int interval ```
int32_t q_mediaplayer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaPlayer* self, int id ```
void q_mediaplayer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaPlayer* self ```
libqt_list /* of QObject* */ q_mediaplayer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaPlayer* self, QObject* parent ```
void q_mediaplayer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaPlayer* self, QObject* filterObj ```
void q_mediaplayer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaPlayer* self, QObject* obj ```
void q_mediaplayer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediaplayer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaPlayer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediaplayer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediaplayer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediaplayer_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaPlayer* self, const char* name, QVariant* value ```
bool q_mediaplayer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaPlayer* self, const char* name ```
QVariant* q_mediaplayer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaPlayer* self ```
const char** q_mediaplayer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaPlayer* self ```
QBindingStorage* q_mediaplayer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaPlayer* self ```
QBindingStorage* q_mediaplayer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QMediaPlayer* self, void (*slot)(QObject*) ```
void q_mediaplayer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaPlayer* self, const char* classname ```
bool q_mediaplayer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaPlayer* self ```
void q_mediaplayer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaPlayer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediaplayer_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediaplayer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaPlayer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediaplayer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaPlayer* self, QObject* param1 ```
void q_mediaplayer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QMediaPlayer* self, void (*slot)(QObject*, QObject*) ```
void q_mediaplayer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
bool q_mediaplayer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
bool q_mediaplayer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, bool (*slot)(QMediaPlayer*, QEvent*) ```
void q_mediaplayer_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QObject* watched, QEvent* event ```
bool q_mediaplayer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QObject* watched, QEvent* event ```
bool q_mediaplayer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, bool (*slot)(QMediaPlayer*, QObject*, QEvent*) ```
void q_mediaplayer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QTimerEvent* event ```
void q_mediaplayer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QTimerEvent* event ```
void q_mediaplayer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QTimerEvent*) ```
void q_mediaplayer_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QChildEvent* event ```
void q_mediaplayer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QChildEvent* event ```
void q_mediaplayer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QChildEvent*) ```
void q_mediaplayer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
void q_mediaplayer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QEvent* event ```
void q_mediaplayer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QEvent*) ```
void q_mediaplayer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QMetaMethod*) ```
void q_mediaplayer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
void q_mediaplayer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, void (*slot)(QMediaPlayer*, QMetaMethod*) ```
void q_mediaplayer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self ```
QObject* q_mediaplayer_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, QObject* (*slot)() ```
void q_mediaplayer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self ```
int32_t q_mediaplayer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, int32_t (*slot)() ```
void q_mediaplayer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, const char* signal ```
int32_t q_mediaplayer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, const char* signal ```
int32_t q_mediaplayer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, int32_t (*slot)(QMediaPlayer*, const char*) ```
void q_mediaplayer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
bool q_mediaplayer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaPlayer* self, QMetaMethod* signal ```
bool q_mediaplayer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaPlayer* self, bool (*slot)(QMediaPlayer*, QMetaMethod*) ```
void q_mediaplayer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QMediaPlayer* self ```
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
