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

QMediaPlayer* q_mediaplayer_new();
QMediaPlayer* q_mediaplayer_new2(void* parent);
QMetaObject* q_mediaplayer_meta_object(void* self);
void* q_mediaplayer_metacast(void* self, const char* param1);
int32_t q_mediaplayer_metacall(void* self, int64_t param1, int param2, void* param3);
void q_mediaplayer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_mediaplayer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_mediaplayer_tr(const char* s);
libqt_list /* of QMediaMetaData* */ q_mediaplayer_audio_tracks(void* self);
libqt_list /* of QMediaMetaData* */ q_mediaplayer_video_tracks(void* self);
libqt_list /* of QMediaMetaData* */ q_mediaplayer_subtitle_tracks(void* self);
int32_t q_mediaplayer_active_audio_track(void* self);
int32_t q_mediaplayer_active_video_track(void* self);
int32_t q_mediaplayer_active_subtitle_track(void* self);
void q_mediaplayer_set_active_audio_track(void* self, int index);
void q_mediaplayer_set_active_video_track(void* self, int index);
void q_mediaplayer_set_active_subtitle_track(void* self, int index);
void q_mediaplayer_set_audio_output(void* self, void* output);
QAudioOutput* q_mediaplayer_audio_output(void* self);
void q_mediaplayer_set_video_output(void* self, void* videoOutput);
QObject* q_mediaplayer_video_output(void* self);
void q_mediaplayer_set_video_sink(void* self, void* sink);
QVideoSink* q_mediaplayer_video_sink(void* self);
QUrl* q_mediaplayer_source(void* self);
QIODevice* q_mediaplayer_source_device(void* self);
int64_t q_mediaplayer_playback_state(void* self);
int64_t q_mediaplayer_media_status(void* self);
long long q_mediaplayer_duration(void* self);
long long q_mediaplayer_position(void* self);
bool q_mediaplayer_has_audio(void* self);
bool q_mediaplayer_has_video(void* self);
float q_mediaplayer_buffer_progress(void* self);
QMediaTimeRange* q_mediaplayer_buffered_time_range(void* self);
bool q_mediaplayer_is_seekable(void* self);
double q_mediaplayer_playback_rate(void* self);
int32_t q_mediaplayer_loops(void* self);
void q_mediaplayer_set_loops(void* self, int loops);
int64_t q_mediaplayer_error(void* self);
const char* q_mediaplayer_error_string(void* self);
bool q_mediaplayer_is_available(void* self);
QMediaMetaData* q_mediaplayer_meta_data(void* self);
void q_mediaplayer_play(void* self);
void q_mediaplayer_pause(void* self);
void q_mediaplayer_stop(void* self);
void q_mediaplayer_set_position(void* self, long long position);
void q_mediaplayer_set_playback_rate(void* self, double rate);
void q_mediaplayer_set_source(void* self, void* source);
void q_mediaplayer_set_source_device(void* self, void* device);
void q_mediaplayer_source_changed(void* self, void* media);
void q_mediaplayer_on_source_changed(void* self, void (*slot)(void*, void*));
void q_mediaplayer_playback_state_changed(void* self, int64_t newState);
void q_mediaplayer_on_playback_state_changed(void* self, void (*slot)(void*, int64_t));
void q_mediaplayer_media_status_changed(void* self, int64_t status);
void q_mediaplayer_on_media_status_changed(void* self, void (*slot)(void*, int64_t));
void q_mediaplayer_duration_changed(void* self, long long duration);
void q_mediaplayer_on_duration_changed(void* self, void (*slot)(void*, long long));
void q_mediaplayer_position_changed(void* self, long long position);
void q_mediaplayer_on_position_changed(void* self, void (*slot)(void*, long long));
void q_mediaplayer_has_audio_changed(void* self, bool available);
void q_mediaplayer_on_has_audio_changed(void* self, void (*slot)(void*, bool));
void q_mediaplayer_has_video_changed(void* self, bool videoAvailable);
void q_mediaplayer_on_has_video_changed(void* self, void (*slot)(void*, bool));
void q_mediaplayer_buffer_progress_changed(void* self, float progress);
void q_mediaplayer_on_buffer_progress_changed(void* self, void (*slot)(void*, float));
void q_mediaplayer_seekable_changed(void* self, bool seekable);
void q_mediaplayer_on_seekable_changed(void* self, void (*slot)(void*, bool));
void q_mediaplayer_playback_rate_changed(void* self, double rate);
void q_mediaplayer_on_playback_rate_changed(void* self, void (*slot)(void*, double));
void q_mediaplayer_loops_changed(void* self);
void q_mediaplayer_on_loops_changed(void* self, void (*slot)(void*));
void q_mediaplayer_meta_data_changed(void* self);
void q_mediaplayer_on_meta_data_changed(void* self, void (*slot)(void*));
void q_mediaplayer_video_output_changed(void* self);
void q_mediaplayer_on_video_output_changed(void* self, void (*slot)(void*));
void q_mediaplayer_audio_output_changed(void* self);
void q_mediaplayer_on_audio_output_changed(void* self, void (*slot)(void*));
void q_mediaplayer_tracks_changed(void* self);
void q_mediaplayer_on_tracks_changed(void* self, void (*slot)(void*));
void q_mediaplayer_active_tracks_changed(void* self);
void q_mediaplayer_on_active_tracks_changed(void* self, void (*slot)(void*));
void q_mediaplayer_error_changed(void* self);
void q_mediaplayer_on_error_changed(void* self, void (*slot)(void*));
void q_mediaplayer_error_occurred(void* self, int64_t errorVal, const char* errorString);
void q_mediaplayer_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));
const char* q_mediaplayer_tr2(const char* s, const char* c);
const char* q_mediaplayer_tr3(const char* s, const char* c, int n);
void q_mediaplayer_set_source_device2(void* self, void* device, void* sourceUrl);
const char* q_mediaplayer_object_name(void* self);
void q_mediaplayer_set_object_name(void* self, const char* name);
bool q_mediaplayer_is_widget_type(void* self);
bool q_mediaplayer_is_window_type(void* self);
bool q_mediaplayer_is_quick_item_type(void* self);
bool q_mediaplayer_signals_blocked(void* self);
bool q_mediaplayer_block_signals(void* self, bool b);
QThread* q_mediaplayer_thread(void* self);
void q_mediaplayer_move_to_thread(void* self, void* thread);
int32_t q_mediaplayer_start_timer(void* self, int interval);
void q_mediaplayer_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_mediaplayer_children(void* self);
void q_mediaplayer_set_parent(void* self, void* parent);
void q_mediaplayer_install_event_filter(void* self, void* filterObj);
void q_mediaplayer_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_mediaplayer_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_mediaplayer_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_mediaplayer_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_mediaplayer_disconnect_with_q_meta_object_connection(void* param1);
void q_mediaplayer_dump_object_tree(void* self);
void q_mediaplayer_dump_object_info(void* self);
bool q_mediaplayer_set_property(void* self, const char* name, void* value);
QVariant* q_mediaplayer_property(void* self, const char* name);
const char** q_mediaplayer_dynamic_property_names(void* self);
QBindingStorage* q_mediaplayer_binding_storage(void* self);
QBindingStorage* q_mediaplayer_binding_storage2(void* self);
void q_mediaplayer_destroyed(void* self);
void q_mediaplayer_on_destroyed(void* self, void (*slot)(void*));
QObject* q_mediaplayer_parent(void* self);
bool q_mediaplayer_inherits(void* self, const char* classname);
void q_mediaplayer_delete_later(void* self);
int32_t q_mediaplayer_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_mediaplayer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_mediaplayer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_mediaplayer_destroyed1(void* self, void* param1);
void q_mediaplayer_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_mediaplayer_event(void* self, void* event);
bool q_mediaplayer_qbase_event(void* self, void* event);
void q_mediaplayer_on_event(void* self, bool (*slot)(void*, void*));
bool q_mediaplayer_event_filter(void* self, void* watched, void* event);
bool q_mediaplayer_qbase_event_filter(void* self, void* watched, void* event);
void q_mediaplayer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_mediaplayer_timer_event(void* self, void* event);
void q_mediaplayer_qbase_timer_event(void* self, void* event);
void q_mediaplayer_on_timer_event(void* self, void (*slot)(void*, void*));
void q_mediaplayer_child_event(void* self, void* event);
void q_mediaplayer_qbase_child_event(void* self, void* event);
void q_mediaplayer_on_child_event(void* self, void (*slot)(void*, void*));
void q_mediaplayer_custom_event(void* self, void* event);
void q_mediaplayer_qbase_custom_event(void* self, void* event);
void q_mediaplayer_on_custom_event(void* self, void (*slot)(void*, void*));
void q_mediaplayer_connect_notify(void* self, void* signal);
void q_mediaplayer_qbase_connect_notify(void* self, void* signal);
void q_mediaplayer_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_mediaplayer_disconnect_notify(void* self, void* signal);
void q_mediaplayer_qbase_disconnect_notify(void* self, void* signal);
void q_mediaplayer_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_mediaplayer_sender(void* self);
QObject* q_mediaplayer_qbase_sender(void* self);
void q_mediaplayer_on_sender(void* self, QObject* (*slot)());
int32_t q_mediaplayer_sender_signal_index(void* self);
int32_t q_mediaplayer_qbase_sender_signal_index(void* self);
void q_mediaplayer_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_mediaplayer_receivers(void* self, const char* signal);
int32_t q_mediaplayer_qbase_receivers(void* self, const char* signal);
void q_mediaplayer_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_mediaplayer_is_signal_connected(void* self, void* signal);
bool q_mediaplayer_qbase_is_signal_connected(void* self, void* signal);
void q_mediaplayer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
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
