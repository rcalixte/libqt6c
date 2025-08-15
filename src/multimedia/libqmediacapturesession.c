#include "libqaudiobufferinput.hpp"
#include "libqaudioinput.hpp"
#include "libqaudiooutput.hpp"
#include "libqcamera.hpp"
#include "../libqcoreevent.hpp"
#include "libqimagecapture.hpp"
#include "libqmediarecorder.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqscreencapture.hpp"
#include "libqvideoframeinput.hpp"
#include "libqvideosink.hpp"
#include "libqwindowcapture.hpp"
#include "libqmediacapturesession.hpp"
#include "libqmediacapturesession.h"

QMediaCaptureSession* q_mediacapturesession_new() {
    return QMediaCaptureSession_new();
}

QMediaCaptureSession* q_mediacapturesession_new2(void* parent) {
    return QMediaCaptureSession_new2((QObject*)parent);
}

const QMetaObject* q_mediacapturesession_meta_object(void* self) {
    return QMediaCaptureSession_MetaObject((QMediaCaptureSession*)self);
}

void* q_mediacapturesession_metacast(void* self, const char* param1) {
    return QMediaCaptureSession_Metacast((QMediaCaptureSession*)self, param1);
}

int32_t q_mediacapturesession_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaCaptureSession_Metacall((QMediaCaptureSession*)self, param1, param2, param3);
}

void q_mediacapturesession_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QMediaCaptureSession_OnMetacall((QMediaCaptureSession*)self, (intptr_t)callback);
}

int32_t q_mediacapturesession_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaCaptureSession_QBaseMetacall((QMediaCaptureSession*)self, param1, param2, param3);
}

const char* q_mediacapturesession_tr(const char* s) {
    libqt_string _str = QMediaCaptureSession_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioInput* q_mediacapturesession_audio_input(void* self) {
    return QMediaCaptureSession_AudioInput((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_audio_input(void* self, void* input) {
    QMediaCaptureSession_SetAudioInput((QMediaCaptureSession*)self, (QAudioInput*)input);
}

QAudioBufferInput* q_mediacapturesession_audio_buffer_input(void* self) {
    return QMediaCaptureSession_AudioBufferInput((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_audio_buffer_input(void* self, void* input) {
    QMediaCaptureSession_SetAudioBufferInput((QMediaCaptureSession*)self, (QAudioBufferInput*)input);
}

QCamera* q_mediacapturesession_camera(void* self) {
    return QMediaCaptureSession_Camera((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_camera(void* self, void* camera) {
    QMediaCaptureSession_SetCamera((QMediaCaptureSession*)self, (QCamera*)camera);
}

QImageCapture* q_mediacapturesession_image_capture(void* self) {
    return QMediaCaptureSession_ImageCapture((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_image_capture(void* self, void* imageCapture) {
    QMediaCaptureSession_SetImageCapture((QMediaCaptureSession*)self, (QImageCapture*)imageCapture);
}

QScreenCapture* q_mediacapturesession_screen_capture(void* self) {
    return QMediaCaptureSession_ScreenCapture((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_screen_capture(void* self, void* screenCapture) {
    QMediaCaptureSession_SetScreenCapture((QMediaCaptureSession*)self, (QScreenCapture*)screenCapture);
}

QWindowCapture* q_mediacapturesession_window_capture(void* self) {
    return QMediaCaptureSession_WindowCapture((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_window_capture(void* self, void* windowCapture) {
    QMediaCaptureSession_SetWindowCapture((QMediaCaptureSession*)self, (QWindowCapture*)windowCapture);
}

QVideoFrameInput* q_mediacapturesession_video_frame_input(void* self) {
    return QMediaCaptureSession_VideoFrameInput((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_video_frame_input(void* self, void* input) {
    QMediaCaptureSession_SetVideoFrameInput((QMediaCaptureSession*)self, (QVideoFrameInput*)input);
}

QMediaRecorder* q_mediacapturesession_recorder(void* self) {
    return QMediaCaptureSession_Recorder((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_recorder(void* self, void* recorder) {
    QMediaCaptureSession_SetRecorder((QMediaCaptureSession*)self, (QMediaRecorder*)recorder);
}

void q_mediacapturesession_set_video_output(void* self, void* output) {
    QMediaCaptureSession_SetVideoOutput((QMediaCaptureSession*)self, (QObject*)output);
}

QObject* q_mediacapturesession_video_output(void* self) {
    return QMediaCaptureSession_VideoOutput((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_video_sink(void* self, void* sink) {
    QMediaCaptureSession_SetVideoSink((QMediaCaptureSession*)self, (QVideoSink*)sink);
}

QVideoSink* q_mediacapturesession_video_sink(void* self) {
    return QMediaCaptureSession_VideoSink((QMediaCaptureSession*)self);
}

void q_mediacapturesession_set_audio_output(void* self, void* output) {
    QMediaCaptureSession_SetAudioOutput((QMediaCaptureSession*)self, (QAudioOutput*)output);
}

QAudioOutput* q_mediacapturesession_audio_output(void* self) {
    return QMediaCaptureSession_AudioOutput((QMediaCaptureSession*)self);
}

void q_mediacapturesession_audio_input_changed(void* self) {
    QMediaCaptureSession_AudioInputChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_audio_input_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_AudioInputChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_audio_buffer_input_changed(void* self) {
    QMediaCaptureSession_AudioBufferInputChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_audio_buffer_input_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_AudioBufferInputChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_camera_changed(void* self) {
    QMediaCaptureSession_CameraChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_camera_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_CameraChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_screen_capture_changed(void* self) {
    QMediaCaptureSession_ScreenCaptureChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_screen_capture_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_ScreenCaptureChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_window_capture_changed(void* self) {
    QMediaCaptureSession_WindowCaptureChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_window_capture_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_WindowCaptureChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_video_frame_input_changed(void* self) {
    QMediaCaptureSession_VideoFrameInputChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_video_frame_input_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_VideoFrameInputChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_image_capture_changed(void* self) {
    QMediaCaptureSession_ImageCaptureChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_image_capture_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_ImageCaptureChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_recorder_changed(void* self) {
    QMediaCaptureSession_RecorderChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_recorder_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_RecorderChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_video_output_changed(void* self) {
    QMediaCaptureSession_VideoOutputChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_video_output_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_VideoOutputChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_audio_output_changed(void* self) {
    QMediaCaptureSession_AudioOutputChanged((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_audio_output_changed(void* self, void (*callback)(void*)) {
    QMediaCaptureSession_Connect_AudioOutputChanged((QMediaCaptureSession*)self, (intptr_t)callback);
}

const char* q_mediacapturesession_tr2(const char* s, const char* c) {
    libqt_string _str = QMediaCaptureSession_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediacapturesession_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMediaCaptureSession_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediacapturesession_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mediacapturesession_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mediacapturesession_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mediacapturesession_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mediacapturesession_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mediacapturesession_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mediacapturesession_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mediacapturesession_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mediacapturesession_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mediacapturesession_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_mediacapturesession_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mediacapturesession_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mediacapturesession_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mediacapturesession_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_mediacapturesession_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mediacapturesession_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mediacapturesession_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mediacapturesession_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mediacapturesession_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mediacapturesession_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mediacapturesession_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mediacapturesession_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mediacapturesession_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mediacapturesession_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mediacapturesession_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_mediacapturesession_dynamic_property_names");
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

QBindingStorage* q_mediacapturesession_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mediacapturesession_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mediacapturesession_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mediacapturesession_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mediacapturesession_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mediacapturesession_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mediacapturesession_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_mediacapturesession_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_mediacapturesession_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_mediacapturesession_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_mediacapturesession_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_mediacapturesession_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mediacapturesession_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mediacapturesession_event(void* self, void* event) {
    return QMediaCaptureSession_Event((QMediaCaptureSession*)self, (QEvent*)event);
}

bool q_mediacapturesession_qbase_event(void* self, void* event) {
    return QMediaCaptureSession_QBaseEvent((QMediaCaptureSession*)self, (QEvent*)event);
}

void q_mediacapturesession_on_event(void* self, bool (*callback)(void*, void*)) {
    QMediaCaptureSession_OnEvent((QMediaCaptureSession*)self, (intptr_t)callback);
}

bool q_mediacapturesession_event_filter(void* self, void* watched, void* event) {
    return QMediaCaptureSession_EventFilter((QMediaCaptureSession*)self, (QObject*)watched, (QEvent*)event);
}

bool q_mediacapturesession_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaCaptureSession_QBaseEventFilter((QMediaCaptureSession*)self, (QObject*)watched, (QEvent*)event);
}

void q_mediacapturesession_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMediaCaptureSession_OnEventFilter((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_timer_event(void* self, void* event) {
    QMediaCaptureSession_TimerEvent((QMediaCaptureSession*)self, (QTimerEvent*)event);
}

void q_mediacapturesession_qbase_timer_event(void* self, void* event) {
    QMediaCaptureSession_QBaseTimerEvent((QMediaCaptureSession*)self, (QTimerEvent*)event);
}

void q_mediacapturesession_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMediaCaptureSession_OnTimerEvent((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_child_event(void* self, void* event) {
    QMediaCaptureSession_ChildEvent((QMediaCaptureSession*)self, (QChildEvent*)event);
}

void q_mediacapturesession_qbase_child_event(void* self, void* event) {
    QMediaCaptureSession_QBaseChildEvent((QMediaCaptureSession*)self, (QChildEvent*)event);
}

void q_mediacapturesession_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMediaCaptureSession_OnChildEvent((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_custom_event(void* self, void* event) {
    QMediaCaptureSession_CustomEvent((QMediaCaptureSession*)self, (QEvent*)event);
}

void q_mediacapturesession_qbase_custom_event(void* self, void* event) {
    QMediaCaptureSession_QBaseCustomEvent((QMediaCaptureSession*)self, (QEvent*)event);
}

void q_mediacapturesession_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMediaCaptureSession_OnCustomEvent((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_connect_notify(void* self, void* signal) {
    QMediaCaptureSession_ConnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

void q_mediacapturesession_qbase_connect_notify(void* self, void* signal) {
    QMediaCaptureSession_QBaseConnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

void q_mediacapturesession_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaCaptureSession_OnConnectNotify((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_disconnect_notify(void* self, void* signal) {
    QMediaCaptureSession_DisconnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

void q_mediacapturesession_qbase_disconnect_notify(void* self, void* signal) {
    QMediaCaptureSession_QBaseDisconnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

void q_mediacapturesession_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaCaptureSession_OnDisconnectNotify((QMediaCaptureSession*)self, (intptr_t)callback);
}

QObject* q_mediacapturesession_sender(void* self) {
    return QMediaCaptureSession_Sender((QMediaCaptureSession*)self);
}

QObject* q_mediacapturesession_qbase_sender(void* self) {
    return QMediaCaptureSession_QBaseSender((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_sender(void* self, QObject* (*callback)()) {
    QMediaCaptureSession_OnSender((QMediaCaptureSession*)self, (intptr_t)callback);
}

int32_t q_mediacapturesession_sender_signal_index(void* self) {
    return QMediaCaptureSession_SenderSignalIndex((QMediaCaptureSession*)self);
}

int32_t q_mediacapturesession_qbase_sender_signal_index(void* self) {
    return QMediaCaptureSession_QBaseSenderSignalIndex((QMediaCaptureSession*)self);
}

void q_mediacapturesession_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMediaCaptureSession_OnSenderSignalIndex((QMediaCaptureSession*)self, (intptr_t)callback);
}

int32_t q_mediacapturesession_receivers(void* self, const char* signal) {
    return QMediaCaptureSession_Receivers((QMediaCaptureSession*)self, signal);
}

int32_t q_mediacapturesession_qbase_receivers(void* self, const char* signal) {
    return QMediaCaptureSession_QBaseReceivers((QMediaCaptureSession*)self, signal);
}

void q_mediacapturesession_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMediaCaptureSession_OnReceivers((QMediaCaptureSession*)self, (intptr_t)callback);
}

bool q_mediacapturesession_is_signal_connected(void* self, void* signal) {
    return QMediaCaptureSession_IsSignalConnected((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

bool q_mediacapturesession_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaCaptureSession_QBaseIsSignalConnected((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

void q_mediacapturesession_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMediaCaptureSession_OnIsSignalConnected((QMediaCaptureSession*)self, (intptr_t)callback);
}

void q_mediacapturesession_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mediacapturesession_delete(void* self) {
    QMediaCaptureSession_Delete((QMediaCaptureSession*)(self));
}
