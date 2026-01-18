#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "libqmediacapturesession.hpp"
#include "libqmediaformat.hpp"
#include "libqmediametadata.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "libqmediarecorder.hpp"
#include "libqmediarecorder.h"

QMediaRecorder* q_mediarecorder_new() {
    return QMediaRecorder_new();
}

QMediaRecorder* q_mediarecorder_new2(void* parent) {
    return QMediaRecorder_new2((QObject*)parent);
}

const QMetaObject* q_mediarecorder_meta_object(void* self) {
    return QMediaRecorder_MetaObject((QMediaRecorder*)self);
}

void* q_mediarecorder_metacast(void* self, const char* param1) {
    return QMediaRecorder_Metacast((QMediaRecorder*)self, param1);
}

int32_t q_mediarecorder_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMediaRecorder_Metacall((QMediaRecorder*)self, param1, param2, param3);
}

void q_mediarecorder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMediaRecorder_OnMetacall((QMediaRecorder*)self, (intptr_t)callback);
}

int32_t q_mediarecorder_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMediaRecorder_QBaseMetacall((QMediaRecorder*)self, param1, param2, param3);
}

const char* q_mediarecorder_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_mediarecorder_is_available(void* self) {
    return QMediaRecorder_IsAvailable((QMediaRecorder*)self);
}

QUrl* q_mediarecorder_output_location(void* self) {
    return QMediaRecorder_OutputLocation((QMediaRecorder*)self);
}

void q_mediarecorder_set_output_location(void* self, void* location) {
    QMediaRecorder_SetOutputLocation((QMediaRecorder*)self, (QUrl*)location);
}

void q_mediarecorder_set_output_device(void* self, void* device) {
    QMediaRecorder_SetOutputDevice((QMediaRecorder*)self, (QIODevice*)device);
}

QIODevice* q_mediarecorder_output_device(void* self) {
    return QMediaRecorder_OutputDevice((QMediaRecorder*)self);
}

QUrl* q_mediarecorder_actual_location(void* self) {
    return QMediaRecorder_ActualLocation((QMediaRecorder*)self);
}

int32_t q_mediarecorder_recorder_state(void* self) {
    return QMediaRecorder_RecorderState((QMediaRecorder*)self);
}

int32_t q_mediarecorder_error(void* self) {
    return QMediaRecorder_Error((QMediaRecorder*)self);
}

const char* q_mediarecorder_error_string(void* self) {
    libqt_string _str = QMediaRecorder_ErrorString((QMediaRecorder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_mediarecorder_duration(void* self) {
    return QMediaRecorder_Duration((QMediaRecorder*)self);
}

QMediaFormat* q_mediarecorder_media_format(void* self) {
    return QMediaRecorder_MediaFormat((QMediaRecorder*)self);
}

void q_mediarecorder_set_media_format(void* self, void* format) {
    QMediaRecorder_SetMediaFormat((QMediaRecorder*)self, (QMediaFormat*)format);
}

int32_t q_mediarecorder_encoding_mode(void* self) {
    return QMediaRecorder_EncodingMode((QMediaRecorder*)self);
}

void q_mediarecorder_set_encoding_mode(void* self, int32_t encodingMode) {
    QMediaRecorder_SetEncodingMode((QMediaRecorder*)self, encodingMode);
}

int32_t q_mediarecorder_quality(void* self) {
    return QMediaRecorder_Quality((QMediaRecorder*)self);
}

void q_mediarecorder_set_quality(void* self, int32_t quality) {
    QMediaRecorder_SetQuality((QMediaRecorder*)self, quality);
}

QSize* q_mediarecorder_video_resolution(void* self) {
    return QMediaRecorder_VideoResolution((QMediaRecorder*)self);
}

void q_mediarecorder_set_video_resolution(void* self, void* videoResolution) {
    QMediaRecorder_SetVideoResolution((QMediaRecorder*)self, (QSize*)videoResolution);
}

void q_mediarecorder_set_video_resolution2(void* self, int width, int height) {
    QMediaRecorder_SetVideoResolution2((QMediaRecorder*)self, width, height);
}

double q_mediarecorder_video_frame_rate(void* self) {
    return QMediaRecorder_VideoFrameRate((QMediaRecorder*)self);
}

void q_mediarecorder_set_video_frame_rate(void* self, double frameRate) {
    QMediaRecorder_SetVideoFrameRate((QMediaRecorder*)self, frameRate);
}

int32_t q_mediarecorder_video_bit_rate(void* self) {
    return QMediaRecorder_VideoBitRate((QMediaRecorder*)self);
}

void q_mediarecorder_set_video_bit_rate(void* self, int bitRate) {
    QMediaRecorder_SetVideoBitRate((QMediaRecorder*)self, bitRate);
}

int32_t q_mediarecorder_audio_bit_rate(void* self) {
    return QMediaRecorder_AudioBitRate((QMediaRecorder*)self);
}

void q_mediarecorder_set_audio_bit_rate(void* self, int bitRate) {
    QMediaRecorder_SetAudioBitRate((QMediaRecorder*)self, bitRate);
}

int32_t q_mediarecorder_audio_channel_count(void* self) {
    return QMediaRecorder_AudioChannelCount((QMediaRecorder*)self);
}

void q_mediarecorder_set_audio_channel_count(void* self, int channels) {
    QMediaRecorder_SetAudioChannelCount((QMediaRecorder*)self, channels);
}

int32_t q_mediarecorder_audio_sample_rate(void* self) {
    return QMediaRecorder_AudioSampleRate((QMediaRecorder*)self);
}

void q_mediarecorder_set_audio_sample_rate(void* self, int sampleRate) {
    QMediaRecorder_SetAudioSampleRate((QMediaRecorder*)self, sampleRate);
}

QMediaMetaData* q_mediarecorder_meta_data(void* self) {
    return QMediaRecorder_MetaData((QMediaRecorder*)self);
}

void q_mediarecorder_set_meta_data(void* self, void* metaData) {
    QMediaRecorder_SetMetaData((QMediaRecorder*)self, (QMediaMetaData*)metaData);
}

void q_mediarecorder_add_meta_data(void* self, void* metaData) {
    QMediaRecorder_AddMetaData((QMediaRecorder*)self, (QMediaMetaData*)metaData);
}

bool q_mediarecorder_auto_stop(void* self) {
    return QMediaRecorder_AutoStop((QMediaRecorder*)self);
}

void q_mediarecorder_set_auto_stop(void* self, bool autoStop) {
    QMediaRecorder_SetAutoStop((QMediaRecorder*)self, autoStop);
}

QMediaCaptureSession* q_mediarecorder_capture_session(void* self) {
    return QMediaRecorder_CaptureSession((QMediaRecorder*)self);
}

void q_mediarecorder_record(void* self) {
    QMediaRecorder_Record((QMediaRecorder*)self);
}

void q_mediarecorder_pause(void* self) {
    QMediaRecorder_Pause((QMediaRecorder*)self);
}

void q_mediarecorder_stop(void* self) {
    QMediaRecorder_Stop((QMediaRecorder*)self);
}

void q_mediarecorder_recorder_state_changed(void* self, int32_t state) {
    QMediaRecorder_RecorderStateChanged((QMediaRecorder*)self, state);
}

void q_mediarecorder_on_recorder_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QMediaRecorder_Connect_RecorderStateChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_duration_changed(void* self, long long duration) {
    QMediaRecorder_DurationChanged((QMediaRecorder*)self, duration);
}

void q_mediarecorder_on_duration_changed(void* self, void (*callback)(void*, long long)) {
    QMediaRecorder_Connect_DurationChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_actual_location_changed(void* self, void* location) {
    QMediaRecorder_ActualLocationChanged((QMediaRecorder*)self, (QUrl*)location);
}

void q_mediarecorder_on_actual_location_changed(void* self, void (*callback)(void*, void*)) {
    QMediaRecorder_Connect_ActualLocationChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_encoder_settings_changed(void* self) {
    QMediaRecorder_EncoderSettingsChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_encoder_settings_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_EncoderSettingsChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_error_occurred(void* self, int32_t error, const char* errorString) {
    QMediaRecorder_ErrorOccurred((QMediaRecorder*)self, error, qstring(errorString));
}

void q_mediarecorder_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*)) {
    QMediaRecorder_Connect_ErrorOccurred((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_error_changed(void* self) {
    QMediaRecorder_ErrorChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_error_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_ErrorChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_meta_data_changed(void* self) {
    QMediaRecorder_MetaDataChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_meta_data_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_MetaDataChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_media_format_changed(void* self) {
    QMediaRecorder_MediaFormatChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_media_format_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_MediaFormatChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_encoding_mode_changed(void* self) {
    QMediaRecorder_EncodingModeChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_encoding_mode_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_EncodingModeChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_quality_changed(void* self) {
    QMediaRecorder_QualityChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_quality_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_QualityChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_video_resolution_changed(void* self) {
    QMediaRecorder_VideoResolutionChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_video_resolution_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_VideoResolutionChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_video_frame_rate_changed(void* self) {
    QMediaRecorder_VideoFrameRateChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_video_frame_rate_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_VideoFrameRateChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_video_bit_rate_changed(void* self) {
    QMediaRecorder_VideoBitRateChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_video_bit_rate_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_VideoBitRateChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_audio_bit_rate_changed(void* self) {
    QMediaRecorder_AudioBitRateChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_audio_bit_rate_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_AudioBitRateChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_audio_channel_count_changed(void* self) {
    QMediaRecorder_AudioChannelCountChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_audio_channel_count_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_AudioChannelCountChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_audio_sample_rate_changed(void* self) {
    QMediaRecorder_AudioSampleRateChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_audio_sample_rate_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_AudioSampleRateChanged((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_auto_stop_changed(void* self) {
    QMediaRecorder_AutoStopChanged((QMediaRecorder*)self);
}

void q_mediarecorder_on_auto_stop_changed(void* self, void (*callback)(void*)) {
    QMediaRecorder_Connect_AutoStopChanged((QMediaRecorder*)self, (intptr_t)callback);
}

const char* q_mediarecorder_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediarecorder_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediarecorder_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mediarecorder_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mediarecorder_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mediarecorder_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mediarecorder_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mediarecorder_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mediarecorder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mediarecorder_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mediarecorder_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mediarecorder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_mediarecorder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mediarecorder_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mediarecorder_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mediarecorder_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_mediarecorder_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mediarecorder_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mediarecorder_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mediarecorder_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mediarecorder_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mediarecorder_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mediarecorder_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mediarecorder_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mediarecorder_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mediarecorder_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mediarecorder_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mediarecorder_dynamic_property_names\n");
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

QBindingStorage* q_mediarecorder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mediarecorder_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mediarecorder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mediarecorder_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mediarecorder_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mediarecorder_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mediarecorder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_mediarecorder_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_mediarecorder_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_mediarecorder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_mediarecorder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_mediarecorder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mediarecorder_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mediarecorder_event(void* self, void* event) {
    return QMediaRecorder_Event((QMediaRecorder*)self, (QEvent*)event);
}

bool q_mediarecorder_qbase_event(void* self, void* event) {
    return QMediaRecorder_QBaseEvent((QMediaRecorder*)self, (QEvent*)event);
}

void q_mediarecorder_on_event(void* self, bool (*callback)(void*, void*)) {
    QMediaRecorder_OnEvent((QMediaRecorder*)self, (intptr_t)callback);
}

bool q_mediarecorder_event_filter(void* self, void* watched, void* event) {
    return QMediaRecorder_EventFilter((QMediaRecorder*)self, (QObject*)watched, (QEvent*)event);
}

bool q_mediarecorder_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaRecorder_QBaseEventFilter((QMediaRecorder*)self, (QObject*)watched, (QEvent*)event);
}

void q_mediarecorder_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMediaRecorder_OnEventFilter((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_timer_event(void* self, void* event) {
    QMediaRecorder_TimerEvent((QMediaRecorder*)self, (QTimerEvent*)event);
}

void q_mediarecorder_qbase_timer_event(void* self, void* event) {
    QMediaRecorder_QBaseTimerEvent((QMediaRecorder*)self, (QTimerEvent*)event);
}

void q_mediarecorder_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMediaRecorder_OnTimerEvent((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_child_event(void* self, void* event) {
    QMediaRecorder_ChildEvent((QMediaRecorder*)self, (QChildEvent*)event);
}

void q_mediarecorder_qbase_child_event(void* self, void* event) {
    QMediaRecorder_QBaseChildEvent((QMediaRecorder*)self, (QChildEvent*)event);
}

void q_mediarecorder_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMediaRecorder_OnChildEvent((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_custom_event(void* self, void* event) {
    QMediaRecorder_CustomEvent((QMediaRecorder*)self, (QEvent*)event);
}

void q_mediarecorder_qbase_custom_event(void* self, void* event) {
    QMediaRecorder_QBaseCustomEvent((QMediaRecorder*)self, (QEvent*)event);
}

void q_mediarecorder_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMediaRecorder_OnCustomEvent((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_connect_notify(void* self, void* signal) {
    QMediaRecorder_ConnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

void q_mediarecorder_qbase_connect_notify(void* self, void* signal) {
    QMediaRecorder_QBaseConnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

void q_mediarecorder_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaRecorder_OnConnectNotify((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_disconnect_notify(void* self, void* signal) {
    QMediaRecorder_DisconnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

void q_mediarecorder_qbase_disconnect_notify(void* self, void* signal) {
    QMediaRecorder_QBaseDisconnectNotify((QMediaRecorder*)self, (QMetaMethod*)signal);
}

void q_mediarecorder_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaRecorder_OnDisconnectNotify((QMediaRecorder*)self, (intptr_t)callback);
}

QObject* q_mediarecorder_sender(void* self) {
    return QMediaRecorder_Sender((QMediaRecorder*)self);
}

QObject* q_mediarecorder_qbase_sender(void* self) {
    return QMediaRecorder_QBaseSender((QMediaRecorder*)self);
}

void q_mediarecorder_on_sender(void* self, QObject* (*callback)()) {
    QMediaRecorder_OnSender((QMediaRecorder*)self, (intptr_t)callback);
}

int32_t q_mediarecorder_sender_signal_index(void* self) {
    return QMediaRecorder_SenderSignalIndex((QMediaRecorder*)self);
}

int32_t q_mediarecorder_qbase_sender_signal_index(void* self) {
    return QMediaRecorder_QBaseSenderSignalIndex((QMediaRecorder*)self);
}

void q_mediarecorder_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMediaRecorder_OnSenderSignalIndex((QMediaRecorder*)self, (intptr_t)callback);
}

int32_t q_mediarecorder_receivers(void* self, const char* signal) {
    return QMediaRecorder_Receivers((QMediaRecorder*)self, signal);
}

int32_t q_mediarecorder_qbase_receivers(void* self, const char* signal) {
    return QMediaRecorder_QBaseReceivers((QMediaRecorder*)self, signal);
}

void q_mediarecorder_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMediaRecorder_OnReceivers((QMediaRecorder*)self, (intptr_t)callback);
}

bool q_mediarecorder_is_signal_connected(void* self, void* signal) {
    return QMediaRecorder_IsSignalConnected((QMediaRecorder*)self, (QMetaMethod*)signal);
}

bool q_mediarecorder_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaRecorder_QBaseIsSignalConnected((QMediaRecorder*)self, (QMetaMethod*)signal);
}

void q_mediarecorder_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMediaRecorder_OnIsSignalConnected((QMediaRecorder*)self, (intptr_t)callback);
}

void q_mediarecorder_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mediarecorder_delete(void* self) {
    QMediaRecorder_Delete((QMediaRecorder*)(self));
}
