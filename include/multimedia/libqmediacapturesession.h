#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIACAPTURESESSION_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIACAPTURESESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioinput.h"
#include "libqaudiooutput.h"
#include "../libqbindingstorage.h"
#include "libqcamera.h"
#include "../libqevent.h"
#include "libqimagecapture.h"
#include "libqmediarecorder.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqvideosink.h"

QMediaCaptureSession* q_mediacapturesession_new();
QMediaCaptureSession* q_mediacapturesession_new2(void* parent);
QMetaObject* q_mediacapturesession_meta_object(void* self);
void* q_mediacapturesession_metacast(void* self, const char* param1);
int32_t q_mediacapturesession_metacall(void* self, int64_t param1, int param2, void* param3);
void q_mediacapturesession_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_mediacapturesession_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_mediacapturesession_tr(const char* s);
QAudioInput* q_mediacapturesession_audio_input(void* self);
void q_mediacapturesession_set_audio_input(void* self, void* input);
QCamera* q_mediacapturesession_camera(void* self);
void q_mediacapturesession_set_camera(void* self, void* camera);
QImageCapture* q_mediacapturesession_image_capture(void* self);
void q_mediacapturesession_set_image_capture(void* self, void* imageCapture);
QMediaRecorder* q_mediacapturesession_recorder(void* self);
void q_mediacapturesession_set_recorder(void* self, void* recorder);
void q_mediacapturesession_set_video_output(void* self, void* output);
QObject* q_mediacapturesession_video_output(void* self);
void q_mediacapturesession_set_video_sink(void* self, void* sink);
QVideoSink* q_mediacapturesession_video_sink(void* self);
void q_mediacapturesession_set_audio_output(void* self, void* output);
QAudioOutput* q_mediacapturesession_audio_output(void* self);
void q_mediacapturesession_audio_input_changed(void* self);
void q_mediacapturesession_on_audio_input_changed(void* self, void (*slot)(void*));
void q_mediacapturesession_camera_changed(void* self);
void q_mediacapturesession_on_camera_changed(void* self, void (*slot)(void*));
void q_mediacapturesession_image_capture_changed(void* self);
void q_mediacapturesession_on_image_capture_changed(void* self, void (*slot)(void*));
void q_mediacapturesession_recorder_changed(void* self);
void q_mediacapturesession_on_recorder_changed(void* self, void (*slot)(void*));
void q_mediacapturesession_video_output_changed(void* self);
void q_mediacapturesession_on_video_output_changed(void* self, void (*slot)(void*));
void q_mediacapturesession_audio_output_changed(void* self);
void q_mediacapturesession_on_audio_output_changed(void* self, void (*slot)(void*));
const char* q_mediacapturesession_tr2(const char* s, const char* c);
const char* q_mediacapturesession_tr3(const char* s, const char* c, int n);
const char* q_mediacapturesession_object_name(void* self);
void q_mediacapturesession_set_object_name(void* self, const char* name);
bool q_mediacapturesession_is_widget_type(void* self);
bool q_mediacapturesession_is_window_type(void* self);
bool q_mediacapturesession_is_quick_item_type(void* self);
bool q_mediacapturesession_signals_blocked(void* self);
bool q_mediacapturesession_block_signals(void* self, bool b);
QThread* q_mediacapturesession_thread(void* self);
void q_mediacapturesession_move_to_thread(void* self, void* thread);
int32_t q_mediacapturesession_start_timer(void* self, int interval);
void q_mediacapturesession_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_mediacapturesession_children(void* self);
void q_mediacapturesession_set_parent(void* self, void* parent);
void q_mediacapturesession_install_event_filter(void* self, void* filterObj);
void q_mediacapturesession_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_mediacapturesession_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_mediacapturesession_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_mediacapturesession_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_mediacapturesession_disconnect_with_q_meta_object_connection(void* param1);
void q_mediacapturesession_dump_object_tree(void* self);
void q_mediacapturesession_dump_object_info(void* self);
bool q_mediacapturesession_set_property(void* self, const char* name, void* value);
QVariant* q_mediacapturesession_property(void* self, const char* name);
const char** q_mediacapturesession_dynamic_property_names(void* self);
QBindingStorage* q_mediacapturesession_binding_storage(void* self);
QBindingStorage* q_mediacapturesession_binding_storage2(void* self);
void q_mediacapturesession_destroyed(void* self);
void q_mediacapturesession_on_destroyed(void* self, void (*slot)(void*));
QObject* q_mediacapturesession_parent(void* self);
bool q_mediacapturesession_inherits(void* self, const char* classname);
void q_mediacapturesession_delete_later(void* self);
int32_t q_mediacapturesession_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_mediacapturesession_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_mediacapturesession_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_mediacapturesession_destroyed1(void* self, void* param1);
void q_mediacapturesession_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_mediacapturesession_event(void* self, void* event);
bool q_mediacapturesession_qbase_event(void* self, void* event);
void q_mediacapturesession_on_event(void* self, bool (*slot)(void*, void*));
bool q_mediacapturesession_event_filter(void* self, void* watched, void* event);
bool q_mediacapturesession_qbase_event_filter(void* self, void* watched, void* event);
void q_mediacapturesession_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_mediacapturesession_timer_event(void* self, void* event);
void q_mediacapturesession_qbase_timer_event(void* self, void* event);
void q_mediacapturesession_on_timer_event(void* self, void (*slot)(void*, void*));
void q_mediacapturesession_child_event(void* self, void* event);
void q_mediacapturesession_qbase_child_event(void* self, void* event);
void q_mediacapturesession_on_child_event(void* self, void (*slot)(void*, void*));
void q_mediacapturesession_custom_event(void* self, void* event);
void q_mediacapturesession_qbase_custom_event(void* self, void* event);
void q_mediacapturesession_on_custom_event(void* self, void (*slot)(void*, void*));
void q_mediacapturesession_connect_notify(void* self, void* signal);
void q_mediacapturesession_qbase_connect_notify(void* self, void* signal);
void q_mediacapturesession_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_mediacapturesession_disconnect_notify(void* self, void* signal);
void q_mediacapturesession_qbase_disconnect_notify(void* self, void* signal);
void q_mediacapturesession_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_mediacapturesession_sender(void* self);
QObject* q_mediacapturesession_qbase_sender(void* self);
void q_mediacapturesession_on_sender(void* self, QObject* (*slot)());
int32_t q_mediacapturesession_sender_signal_index(void* self);
int32_t q_mediacapturesession_qbase_sender_signal_index(void* self);
void q_mediacapturesession_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_mediacapturesession_receivers(void* self, const char* signal);
int32_t q_mediacapturesession_qbase_receivers(void* self, const char* signal);
void q_mediacapturesession_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_mediacapturesession_is_signal_connected(void* self, void* signal);
bool q_mediacapturesession_qbase_is_signal_connected(void* self, void* signal);
void q_mediacapturesession_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_mediacapturesession_delete(void* self);

#endif
