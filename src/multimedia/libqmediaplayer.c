#include "libqaudiobufferoutput.hpp"
#include "libqaudiooutput.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "libqmediametadata.hpp"
#include "libqmediatimerange.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqvideosink.hpp"
#include "libqmediaplayer.hpp"
#include "libqmediaplayer.h"

QMediaPlayer* q_mediaplayer_new() {
    return QMediaPlayer_new();
}

QMediaPlayer* q_mediaplayer_new2(void* parent) {
    return QMediaPlayer_new2((QObject*)parent);
}

const QMetaObject* q_mediaplayer_meta_object(void* self) {
    return QMediaPlayer_MetaObject((QMediaPlayer*)self);
}

void q_mediaplayer_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QMediaPlayer_OnMetaObject((QMediaPlayer*)self, (intptr_t)callback);
}

const QMetaObject* q_mediaplayer_qbase_meta_object(void* self) {
    return QMediaPlayer_QBaseMetaObject((QMediaPlayer*)self);
}

void* q_mediaplayer_metacast(void* self, const char* param1) {
    return QMediaPlayer_Metacast((QMediaPlayer*)self, param1);
}

void q_mediaplayer_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QMediaPlayer_OnMetacast((QMediaPlayer*)self, (intptr_t)callback);
}

void* q_mediaplayer_qbase_metacast(void* self, const char* param1) {
    return QMediaPlayer_QBaseMetacast((QMediaPlayer*)self, param1);
}

int32_t q_mediaplayer_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMediaPlayer_Metacall((QMediaPlayer*)self, param1, param2, param3);
}

void q_mediaplayer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMediaPlayer_OnMetacall((QMediaPlayer*)self, (intptr_t)callback);
}

int32_t q_mediaplayer_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMediaPlayer_QBaseMetacall((QMediaPlayer*)self, param1, param2, param3);
}

const char* q_mediaplayer_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QMediaMetaData* */ q_mediaplayer_audio_tracks(void* self) {
    libqt_list _arr = QMediaPlayer_AudioTracks((QMediaPlayer*)self);
    return _arr;
}

libqt_list /* of QMediaMetaData* */ q_mediaplayer_video_tracks(void* self) {
    libqt_list _arr = QMediaPlayer_VideoTracks((QMediaPlayer*)self);
    return _arr;
}

libqt_list /* of QMediaMetaData* */ q_mediaplayer_subtitle_tracks(void* self) {
    libqt_list _arr = QMediaPlayer_SubtitleTracks((QMediaPlayer*)self);
    return _arr;
}

int32_t q_mediaplayer_active_audio_track(void* self) {
    return QMediaPlayer_ActiveAudioTrack((QMediaPlayer*)self);
}

int32_t q_mediaplayer_active_video_track(void* self) {
    return QMediaPlayer_ActiveVideoTrack((QMediaPlayer*)self);
}

int32_t q_mediaplayer_active_subtitle_track(void* self) {
    return QMediaPlayer_ActiveSubtitleTrack((QMediaPlayer*)self);
}

void q_mediaplayer_set_active_audio_track(void* self, int index) {
    QMediaPlayer_SetActiveAudioTrack((QMediaPlayer*)self, index);
}

void q_mediaplayer_set_active_video_track(void* self, int index) {
    QMediaPlayer_SetActiveVideoTrack((QMediaPlayer*)self, index);
}

void q_mediaplayer_set_active_subtitle_track(void* self, int index) {
    QMediaPlayer_SetActiveSubtitleTrack((QMediaPlayer*)self, index);
}

void q_mediaplayer_set_audio_buffer_output(void* self, void* output) {
    QMediaPlayer_SetAudioBufferOutput((QMediaPlayer*)self, (QAudioBufferOutput*)output);
}

QAudioBufferOutput* q_mediaplayer_audio_buffer_output(void* self) {
    return QMediaPlayer_AudioBufferOutput((QMediaPlayer*)self);
}

void q_mediaplayer_set_audio_output(void* self, void* output) {
    QMediaPlayer_SetAudioOutput((QMediaPlayer*)self, (QAudioOutput*)output);
}

QAudioOutput* q_mediaplayer_audio_output(void* self) {
    return QMediaPlayer_AudioOutput((QMediaPlayer*)self);
}

void q_mediaplayer_set_video_output(void* self, void* videoOutput) {
    QMediaPlayer_SetVideoOutput((QMediaPlayer*)self, (QObject*)videoOutput);
}

QObject* q_mediaplayer_video_output(void* self) {
    return QMediaPlayer_VideoOutput((QMediaPlayer*)self);
}

void q_mediaplayer_set_video_sink(void* self, void* sink) {
    QMediaPlayer_SetVideoSink((QMediaPlayer*)self, (QVideoSink*)sink);
}

QVideoSink* q_mediaplayer_video_sink(void* self) {
    return QMediaPlayer_VideoSink((QMediaPlayer*)self);
}

QUrl* q_mediaplayer_source(void* self) {
    return QMediaPlayer_Source((QMediaPlayer*)self);
}

const QIODevice* q_mediaplayer_source_device(void* self) {
    return QMediaPlayer_SourceDevice((QMediaPlayer*)self);
}

int32_t q_mediaplayer_playback_state(void* self) {
    return QMediaPlayer_PlaybackState((QMediaPlayer*)self);
}

int32_t q_mediaplayer_media_status(void* self) {
    return QMediaPlayer_MediaStatus((QMediaPlayer*)self);
}

long long q_mediaplayer_duration(void* self) {
    return QMediaPlayer_Duration((QMediaPlayer*)self);
}

long long q_mediaplayer_position(void* self) {
    return QMediaPlayer_Position((QMediaPlayer*)self);
}

bool q_mediaplayer_has_audio(void* self) {
    return QMediaPlayer_HasAudio((QMediaPlayer*)self);
}

bool q_mediaplayer_has_video(void* self) {
    return QMediaPlayer_HasVideo((QMediaPlayer*)self);
}

float q_mediaplayer_buffer_progress(void* self) {
    return QMediaPlayer_BufferProgress((QMediaPlayer*)self);
}

QMediaTimeRange* q_mediaplayer_buffered_time_range(void* self) {
    return QMediaPlayer_BufferedTimeRange((QMediaPlayer*)self);
}

bool q_mediaplayer_is_seekable(void* self) {
    return QMediaPlayer_IsSeekable((QMediaPlayer*)self);
}

double q_mediaplayer_playback_rate(void* self) {
    return QMediaPlayer_PlaybackRate((QMediaPlayer*)self);
}

bool q_mediaplayer_is_playing(void* self) {
    return QMediaPlayer_IsPlaying((QMediaPlayer*)self);
}

int32_t q_mediaplayer_loops(void* self) {
    return QMediaPlayer_Loops((QMediaPlayer*)self);
}

void q_mediaplayer_set_loops(void* self, int loops) {
    QMediaPlayer_SetLoops((QMediaPlayer*)self, loops);
}

int32_t q_mediaplayer_error(void* self) {
    return QMediaPlayer_Error((QMediaPlayer*)self);
}

const char* q_mediaplayer_error_string(void* self) {
    libqt_string _str = QMediaPlayer_ErrorString((QMediaPlayer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_mediaplayer_is_available(void* self) {
    return QMediaPlayer_IsAvailable((QMediaPlayer*)self);
}

QMediaMetaData* q_mediaplayer_meta_data(void* self) {
    return QMediaPlayer_MetaData((QMediaPlayer*)self);
}

void q_mediaplayer_play(void* self) {
    QMediaPlayer_Play((QMediaPlayer*)self);
}

void q_mediaplayer_pause(void* self) {
    QMediaPlayer_Pause((QMediaPlayer*)self);
}

void q_mediaplayer_stop(void* self) {
    QMediaPlayer_Stop((QMediaPlayer*)self);
}

void q_mediaplayer_set_position(void* self, long long position) {
    QMediaPlayer_SetPosition((QMediaPlayer*)self, position);
}

void q_mediaplayer_set_playback_rate(void* self, double rate) {
    QMediaPlayer_SetPlaybackRate((QMediaPlayer*)self, rate);
}

void q_mediaplayer_set_source(void* self, void* source) {
    QMediaPlayer_SetSource((QMediaPlayer*)self, (QUrl*)source);
}

void q_mediaplayer_set_source_device(void* self, void* device) {
    QMediaPlayer_SetSourceDevice((QMediaPlayer*)self, (QIODevice*)device);
}

void q_mediaplayer_source_changed(void* self, void* media) {
    QMediaPlayer_SourceChanged((QMediaPlayer*)self, (QUrl*)media);
}

void q_mediaplayer_on_source_changed(void* self, void (*callback)(void*, void*)) {
    QMediaPlayer_Connect_SourceChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_playback_state_changed(void* self, int32_t newState) {
    QMediaPlayer_PlaybackStateChanged((QMediaPlayer*)self, newState);
}

void q_mediaplayer_on_playback_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QMediaPlayer_Connect_PlaybackStateChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_media_status_changed(void* self, int32_t status) {
    QMediaPlayer_MediaStatusChanged((QMediaPlayer*)self, status);
}

void q_mediaplayer_on_media_status_changed(void* self, void (*callback)(void*, int32_t)) {
    QMediaPlayer_Connect_MediaStatusChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_duration_changed(void* self, long long duration) {
    QMediaPlayer_DurationChanged((QMediaPlayer*)self, duration);
}

void q_mediaplayer_on_duration_changed(void* self, void (*callback)(void*, long long)) {
    QMediaPlayer_Connect_DurationChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_position_changed(void* self, long long position) {
    QMediaPlayer_PositionChanged((QMediaPlayer*)self, position);
}

void q_mediaplayer_on_position_changed(void* self, void (*callback)(void*, long long)) {
    QMediaPlayer_Connect_PositionChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_has_audio_changed(void* self, bool available) {
    QMediaPlayer_HasAudioChanged((QMediaPlayer*)self, available);
}

void q_mediaplayer_on_has_audio_changed(void* self, void (*callback)(void*, bool)) {
    QMediaPlayer_Connect_HasAudioChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_has_video_changed(void* self, bool videoAvailable) {
    QMediaPlayer_HasVideoChanged((QMediaPlayer*)self, videoAvailable);
}

void q_mediaplayer_on_has_video_changed(void* self, void (*callback)(void*, bool)) {
    QMediaPlayer_Connect_HasVideoChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_buffer_progress_changed(void* self, float progress) {
    QMediaPlayer_BufferProgressChanged((QMediaPlayer*)self, progress);
}

void q_mediaplayer_on_buffer_progress_changed(void* self, void (*callback)(void*, float)) {
    QMediaPlayer_Connect_BufferProgressChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_seekable_changed(void* self, bool seekable) {
    QMediaPlayer_SeekableChanged((QMediaPlayer*)self, seekable);
}

void q_mediaplayer_on_seekable_changed(void* self, void (*callback)(void*, bool)) {
    QMediaPlayer_Connect_SeekableChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_playing_changed(void* self, bool playing) {
    QMediaPlayer_PlayingChanged((QMediaPlayer*)self, playing);
}

void q_mediaplayer_on_playing_changed(void* self, void (*callback)(void*, bool)) {
    QMediaPlayer_Connect_PlayingChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_playback_rate_changed(void* self, double rate) {
    QMediaPlayer_PlaybackRateChanged((QMediaPlayer*)self, rate);
}

void q_mediaplayer_on_playback_rate_changed(void* self, void (*callback)(void*, double)) {
    QMediaPlayer_Connect_PlaybackRateChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_loops_changed(void* self) {
    QMediaPlayer_LoopsChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_loops_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_LoopsChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_meta_data_changed(void* self) {
    QMediaPlayer_MetaDataChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_meta_data_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_MetaDataChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_video_output_changed(void* self) {
    QMediaPlayer_VideoOutputChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_video_output_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_VideoOutputChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_audio_output_changed(void* self) {
    QMediaPlayer_AudioOutputChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_audio_output_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_AudioOutputChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_audio_buffer_output_changed(void* self) {
    QMediaPlayer_AudioBufferOutputChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_audio_buffer_output_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_AudioBufferOutputChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_tracks_changed(void* self) {
    QMediaPlayer_TracksChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_tracks_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_TracksChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_active_tracks_changed(void* self) {
    QMediaPlayer_ActiveTracksChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_active_tracks_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_ActiveTracksChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_error_changed(void* self) {
    QMediaPlayer_ErrorChanged((QMediaPlayer*)self);
}

void q_mediaplayer_on_error_changed(void* self, void (*callback)(void*)) {
    QMediaPlayer_Connect_ErrorChanged((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_error_occurred(void* self, int32_t error, const char* errorString) {
    QMediaPlayer_ErrorOccurred((QMediaPlayer*)self, error, qstring(errorString));
}

void q_mediaplayer_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*)) {
    QMediaPlayer_Connect_ErrorOccurred((QMediaPlayer*)self, (intptr_t)callback);
}

const char* q_mediaplayer_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediaplayer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mediaplayer_set_source_device2(void* self, void* device, void* sourceUrl) {
    QMediaPlayer_SetSourceDevice2((QMediaPlayer*)self, (QIODevice*)device, (QUrl*)sourceUrl);
}

const char* q_mediaplayer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mediaplayer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mediaplayer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mediaplayer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mediaplayer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mediaplayer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mediaplayer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mediaplayer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mediaplayer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mediaplayer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_mediaplayer_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_mediaplayer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mediaplayer_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mediaplayer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mediaplayer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_mediaplayer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mediaplayer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mediaplayer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mediaplayer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mediaplayer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mediaplayer_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mediaplayer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mediaplayer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mediaplayer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mediaplayer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mediaplayer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mediaplayer_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_mediaplayer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mediaplayer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mediaplayer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mediaplayer_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mediaplayer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mediaplayer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mediaplayer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_mediaplayer_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_mediaplayer_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_mediaplayer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_mediaplayer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_mediaplayer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mediaplayer_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mediaplayer_event(void* self, void* event) {
    return QMediaPlayer_Event((QMediaPlayer*)self, (QEvent*)event);
}

bool q_mediaplayer_qbase_event(void* self, void* event) {
    return QMediaPlayer_QBaseEvent((QMediaPlayer*)self, (QEvent*)event);
}

void q_mediaplayer_on_event(void* self, bool (*callback)(void*, void*)) {
    QMediaPlayer_OnEvent((QMediaPlayer*)self, (intptr_t)callback);
}

bool q_mediaplayer_event_filter(void* self, void* watched, void* event) {
    return QMediaPlayer_EventFilter((QMediaPlayer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_mediaplayer_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaPlayer_QBaseEventFilter((QMediaPlayer*)self, (QObject*)watched, (QEvent*)event);
}

void q_mediaplayer_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMediaPlayer_OnEventFilter((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_timer_event(void* self, void* event) {
    QMediaPlayer_TimerEvent((QMediaPlayer*)self, (QTimerEvent*)event);
}

void q_mediaplayer_qbase_timer_event(void* self, void* event) {
    QMediaPlayer_QBaseTimerEvent((QMediaPlayer*)self, (QTimerEvent*)event);
}

void q_mediaplayer_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMediaPlayer_OnTimerEvent((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_child_event(void* self, void* event) {
    QMediaPlayer_ChildEvent((QMediaPlayer*)self, (QChildEvent*)event);
}

void q_mediaplayer_qbase_child_event(void* self, void* event) {
    QMediaPlayer_QBaseChildEvent((QMediaPlayer*)self, (QChildEvent*)event);
}

void q_mediaplayer_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMediaPlayer_OnChildEvent((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_custom_event(void* self, void* event) {
    QMediaPlayer_CustomEvent((QMediaPlayer*)self, (QEvent*)event);
}

void q_mediaplayer_qbase_custom_event(void* self, void* event) {
    QMediaPlayer_QBaseCustomEvent((QMediaPlayer*)self, (QEvent*)event);
}

void q_mediaplayer_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMediaPlayer_OnCustomEvent((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_connect_notify(void* self, void* signal) {
    QMediaPlayer_ConnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

void q_mediaplayer_qbase_connect_notify(void* self, void* signal) {
    QMediaPlayer_QBaseConnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

void q_mediaplayer_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaPlayer_OnConnectNotify((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_disconnect_notify(void* self, void* signal) {
    QMediaPlayer_DisconnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

void q_mediaplayer_qbase_disconnect_notify(void* self, void* signal) {
    QMediaPlayer_QBaseDisconnectNotify((QMediaPlayer*)self, (QMetaMethod*)signal);
}

void q_mediaplayer_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaPlayer_OnDisconnectNotify((QMediaPlayer*)self, (intptr_t)callback);
}

QObject* q_mediaplayer_sender(void* self) {
    return QMediaPlayer_Sender((QMediaPlayer*)self);
}

QObject* q_mediaplayer_qbase_sender(void* self) {
    return QMediaPlayer_QBaseSender((QMediaPlayer*)self);
}

void q_mediaplayer_on_sender(void* self, QObject* (*callback)()) {
    QMediaPlayer_OnSender((QMediaPlayer*)self, (intptr_t)callback);
}

int32_t q_mediaplayer_sender_signal_index(void* self) {
    return QMediaPlayer_SenderSignalIndex((QMediaPlayer*)self);
}

int32_t q_mediaplayer_qbase_sender_signal_index(void* self) {
    return QMediaPlayer_QBaseSenderSignalIndex((QMediaPlayer*)self);
}

void q_mediaplayer_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMediaPlayer_OnSenderSignalIndex((QMediaPlayer*)self, (intptr_t)callback);
}

int32_t q_mediaplayer_receivers(void* self, const char* signal) {
    return QMediaPlayer_Receivers((QMediaPlayer*)self, signal);
}

int32_t q_mediaplayer_qbase_receivers(void* self, const char* signal) {
    return QMediaPlayer_QBaseReceivers((QMediaPlayer*)self, signal);
}

void q_mediaplayer_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMediaPlayer_OnReceivers((QMediaPlayer*)self, (intptr_t)callback);
}

bool q_mediaplayer_is_signal_connected(void* self, void* signal) {
    return QMediaPlayer_IsSignalConnected((QMediaPlayer*)self, (QMetaMethod*)signal);
}

bool q_mediaplayer_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaPlayer_QBaseIsSignalConnected((QMediaPlayer*)self, (QMetaMethod*)signal);
}

void q_mediaplayer_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMediaPlayer_OnIsSignalConnected((QMediaPlayer*)self, (intptr_t)callback);
}

void q_mediaplayer_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mediaplayer_delete(void* self) {
    QMediaPlayer_Delete((QMediaPlayer*)(self));
}
