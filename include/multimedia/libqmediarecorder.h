#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIARECORDER_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqmediacapturesession.h"
#include "libqmediaformat.h"
#include "libqmediametadata.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMediaRecorder* q_mediarecorder_new();
QMediaRecorder* q_mediarecorder_new2(void* parent);
QMetaObject* q_mediarecorder_meta_object(void* self);
void* q_mediarecorder_metacast(void* self, const char* param1);
int32_t q_mediarecorder_metacall(void* self, int64_t param1, int param2, void* param3);
void q_mediarecorder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_mediarecorder_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_mediarecorder_tr(const char* s);
bool q_mediarecorder_is_available(void* self);
QUrl* q_mediarecorder_output_location(void* self);
void q_mediarecorder_set_output_location(void* self, void* location);
QUrl* q_mediarecorder_actual_location(void* self);
int64_t q_mediarecorder_recorder_state(void* self);
int64_t q_mediarecorder_error(void* self);
const char* q_mediarecorder_error_string(void* self);
long long q_mediarecorder_duration(void* self);
QMediaFormat* q_mediarecorder_media_format(void* self);
void q_mediarecorder_set_media_format(void* self, void* format);
int64_t q_mediarecorder_encoding_mode(void* self);
void q_mediarecorder_set_encoding_mode(void* self, int64_t encodingMode);
int64_t q_mediarecorder_quality(void* self);
void q_mediarecorder_set_quality(void* self, int64_t quality);
QSize* q_mediarecorder_video_resolution(void* self);
void q_mediarecorder_set_video_resolution(void* self, void* videoResolution);
void q_mediarecorder_set_video_resolution2(void* self, int width, int height);
double q_mediarecorder_video_frame_rate(void* self);
void q_mediarecorder_set_video_frame_rate(void* self, double frameRate);
int32_t q_mediarecorder_video_bit_rate(void* self);
void q_mediarecorder_set_video_bit_rate(void* self, int bitRate);
int32_t q_mediarecorder_audio_bit_rate(void* self);
void q_mediarecorder_set_audio_bit_rate(void* self, int bitRate);
int32_t q_mediarecorder_audio_channel_count(void* self);
void q_mediarecorder_set_audio_channel_count(void* self, int channels);
int32_t q_mediarecorder_audio_sample_rate(void* self);
void q_mediarecorder_set_audio_sample_rate(void* self, int sampleRate);
QMediaMetaData* q_mediarecorder_meta_data(void* self);
void q_mediarecorder_set_meta_data(void* self, void* metaData);
void q_mediarecorder_add_meta_data(void* self, void* metaData);
QMediaCaptureSession* q_mediarecorder_capture_session(void* self);
void q_mediarecorder_record(void* self);
void q_mediarecorder_pause(void* self);
void q_mediarecorder_stop(void* self);
void q_mediarecorder_recorder_state_changed(void* self, int64_t state);
void q_mediarecorder_on_recorder_state_changed(void* self, void (*slot)(void*, int64_t));
void q_mediarecorder_duration_changed(void* self, long long duration);
void q_mediarecorder_on_duration_changed(void* self, void (*slot)(void*, long long));
void q_mediarecorder_actual_location_changed(void* self, void* location);
void q_mediarecorder_on_actual_location_changed(void* self, void (*slot)(void*, void*));
void q_mediarecorder_encoder_settings_changed(void* self);
void q_mediarecorder_on_encoder_settings_changed(void* self, void (*slot)(void*));
void q_mediarecorder_error_occurred(void* self, int64_t errorVal, const char* errorString);
void q_mediarecorder_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));
void q_mediarecorder_error_changed(void* self);
void q_mediarecorder_on_error_changed(void* self, void (*slot)(void*));
void q_mediarecorder_meta_data_changed(void* self);
void q_mediarecorder_on_meta_data_changed(void* self, void (*slot)(void*));
void q_mediarecorder_media_format_changed(void* self);
void q_mediarecorder_on_media_format_changed(void* self, void (*slot)(void*));
void q_mediarecorder_encoding_mode_changed(void* self);
void q_mediarecorder_on_encoding_mode_changed(void* self, void (*slot)(void*));
void q_mediarecorder_quality_changed(void* self);
void q_mediarecorder_on_quality_changed(void* self, void (*slot)(void*));
void q_mediarecorder_video_resolution_changed(void* self);
void q_mediarecorder_on_video_resolution_changed(void* self, void (*slot)(void*));
void q_mediarecorder_video_frame_rate_changed(void* self);
void q_mediarecorder_on_video_frame_rate_changed(void* self, void (*slot)(void*));
void q_mediarecorder_video_bit_rate_changed(void* self);
void q_mediarecorder_on_video_bit_rate_changed(void* self, void (*slot)(void*));
void q_mediarecorder_audio_bit_rate_changed(void* self);
void q_mediarecorder_on_audio_bit_rate_changed(void* self, void (*slot)(void*));
void q_mediarecorder_audio_channel_count_changed(void* self);
void q_mediarecorder_on_audio_channel_count_changed(void* self, void (*slot)(void*));
void q_mediarecorder_audio_sample_rate_changed(void* self);
void q_mediarecorder_on_audio_sample_rate_changed(void* self, void (*slot)(void*));
const char* q_mediarecorder_tr2(const char* s, const char* c);
const char* q_mediarecorder_tr3(const char* s, const char* c, int n);
const char* q_mediarecorder_object_name(void* self);
void q_mediarecorder_set_object_name(void* self, const char* name);
bool q_mediarecorder_is_widget_type(void* self);
bool q_mediarecorder_is_window_type(void* self);
bool q_mediarecorder_is_quick_item_type(void* self);
bool q_mediarecorder_signals_blocked(void* self);
bool q_mediarecorder_block_signals(void* self, bool b);
QThread* q_mediarecorder_thread(void* self);
void q_mediarecorder_move_to_thread(void* self, void* thread);
int32_t q_mediarecorder_start_timer(void* self, int interval);
void q_mediarecorder_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_mediarecorder_children(void* self);
void q_mediarecorder_set_parent(void* self, void* parent);
void q_mediarecorder_install_event_filter(void* self, void* filterObj);
void q_mediarecorder_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_mediarecorder_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_mediarecorder_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_mediarecorder_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_mediarecorder_disconnect_with_q_meta_object_connection(void* param1);
void q_mediarecorder_dump_object_tree(void* self);
void q_mediarecorder_dump_object_info(void* self);
bool q_mediarecorder_set_property(void* self, const char* name, void* value);
QVariant* q_mediarecorder_property(void* self, const char* name);
const char** q_mediarecorder_dynamic_property_names(void* self);
QBindingStorage* q_mediarecorder_binding_storage(void* self);
QBindingStorage* q_mediarecorder_binding_storage2(void* self);
void q_mediarecorder_destroyed(void* self);
void q_mediarecorder_on_destroyed(void* self, void (*slot)(void*));
QObject* q_mediarecorder_parent(void* self);
bool q_mediarecorder_inherits(void* self, const char* classname);
void q_mediarecorder_delete_later(void* self);
int32_t q_mediarecorder_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_mediarecorder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_mediarecorder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_mediarecorder_destroyed1(void* self, void* param1);
void q_mediarecorder_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_mediarecorder_event(void* self, void* event);
bool q_mediarecorder_qbase_event(void* self, void* event);
void q_mediarecorder_on_event(void* self, bool (*slot)(void*, void*));
bool q_mediarecorder_event_filter(void* self, void* watched, void* event);
bool q_mediarecorder_qbase_event_filter(void* self, void* watched, void* event);
void q_mediarecorder_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_mediarecorder_timer_event(void* self, void* event);
void q_mediarecorder_qbase_timer_event(void* self, void* event);
void q_mediarecorder_on_timer_event(void* self, void (*slot)(void*, void*));
void q_mediarecorder_child_event(void* self, void* event);
void q_mediarecorder_qbase_child_event(void* self, void* event);
void q_mediarecorder_on_child_event(void* self, void (*slot)(void*, void*));
void q_mediarecorder_custom_event(void* self, void* event);
void q_mediarecorder_qbase_custom_event(void* self, void* event);
void q_mediarecorder_on_custom_event(void* self, void (*slot)(void*, void*));
void q_mediarecorder_connect_notify(void* self, void* signal);
void q_mediarecorder_qbase_connect_notify(void* self, void* signal);
void q_mediarecorder_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_mediarecorder_disconnect_notify(void* self, void* signal);
void q_mediarecorder_qbase_disconnect_notify(void* self, void* signal);
void q_mediarecorder_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_mediarecorder_sender(void* self);
QObject* q_mediarecorder_qbase_sender(void* self);
void q_mediarecorder_on_sender(void* self, QObject* (*slot)());
int32_t q_mediarecorder_sender_signal_index(void* self);
int32_t q_mediarecorder_qbase_sender_signal_index(void* self);
void q_mediarecorder_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_mediarecorder_receivers(void* self, const char* signal);
int32_t q_mediarecorder_qbase_receivers(void* self, const char* signal);
void q_mediarecorder_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_mediarecorder_is_signal_connected(void* self, void* signal);
bool q_mediarecorder_qbase_is_signal_connected(void* self, void* signal);
void q_mediarecorder_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
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
