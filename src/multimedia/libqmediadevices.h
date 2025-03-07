#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIADEVICES_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIADEVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiodevice.h"
#include "../libqbindingstorage.h"
#include "libqcameradevice.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMediaDevices* q_mediadevices_new();
QMediaDevices* q_mediadevices_new2(void* parent);
QMetaObject* q_mediadevices_meta_object(void* self);
void* q_mediadevices_metacast(void* self, const char* param1);
int32_t q_mediadevices_metacall(void* self, int64_t param1, int param2, void* param3);
void q_mediadevices_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_mediadevices_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_mediadevices_tr(const char* s);
libqt_list /* of QAudioDevice* */ q_mediadevices_audio_inputs();
libqt_list /* of QAudioDevice* */ q_mediadevices_audio_outputs();
libqt_list /* of QCameraDevice* */ q_mediadevices_video_inputs();
QAudioDevice* q_mediadevices_default_audio_input();
QAudioDevice* q_mediadevices_default_audio_output();
QCameraDevice* q_mediadevices_default_video_input();
void q_mediadevices_audio_inputs_changed(void* self);
void q_mediadevices_on_audio_inputs_changed(void* self, void (*slot)(void*));
void q_mediadevices_audio_outputs_changed(void* self);
void q_mediadevices_on_audio_outputs_changed(void* self, void (*slot)(void*));
void q_mediadevices_video_inputs_changed(void* self);
void q_mediadevices_on_video_inputs_changed(void* self, void (*slot)(void*));
const char* q_mediadevices_tr2(const char* s, const char* c);
const char* q_mediadevices_tr3(const char* s, const char* c, int n);
const char* q_mediadevices_object_name(void* self);
void q_mediadevices_set_object_name(void* self, const char* name);
bool q_mediadevices_is_widget_type(void* self);
bool q_mediadevices_is_window_type(void* self);
bool q_mediadevices_is_quick_item_type(void* self);
bool q_mediadevices_signals_blocked(void* self);
bool q_mediadevices_block_signals(void* self, bool b);
QThread* q_mediadevices_thread(void* self);
void q_mediadevices_move_to_thread(void* self, void* thread);
int32_t q_mediadevices_start_timer(void* self, int interval);
void q_mediadevices_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_mediadevices_children(void* self);
void q_mediadevices_set_parent(void* self, void* parent);
void q_mediadevices_install_event_filter(void* self, void* filterObj);
void q_mediadevices_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_mediadevices_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_mediadevices_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_mediadevices_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_mediadevices_disconnect_with_q_meta_object_connection(void* param1);
void q_mediadevices_dump_object_tree(void* self);
void q_mediadevices_dump_object_info(void* self);
bool q_mediadevices_set_property(void* self, const char* name, void* value);
QVariant* q_mediadevices_property(void* self, const char* name);
const char** q_mediadevices_dynamic_property_names(void* self);
QBindingStorage* q_mediadevices_binding_storage(void* self);
QBindingStorage* q_mediadevices_binding_storage2(void* self);
void q_mediadevices_destroyed(void* self);
void q_mediadevices_on_destroyed(void* self, void (*slot)(void*));
QObject* q_mediadevices_parent(void* self);
bool q_mediadevices_inherits(void* self, const char* classname);
void q_mediadevices_delete_later(void* self);
int32_t q_mediadevices_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_mediadevices_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_mediadevices_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_mediadevices_destroyed1(void* self, void* param1);
void q_mediadevices_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_mediadevices_event(void* self, void* event);
bool q_mediadevices_qbase_event(void* self, void* event);
void q_mediadevices_on_event(void* self, bool (*slot)(void*, void*));
bool q_mediadevices_event_filter(void* self, void* watched, void* event);
bool q_mediadevices_qbase_event_filter(void* self, void* watched, void* event);
void q_mediadevices_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_mediadevices_timer_event(void* self, void* event);
void q_mediadevices_qbase_timer_event(void* self, void* event);
void q_mediadevices_on_timer_event(void* self, void (*slot)(void*, void*));
void q_mediadevices_child_event(void* self, void* event);
void q_mediadevices_qbase_child_event(void* self, void* event);
void q_mediadevices_on_child_event(void* self, void (*slot)(void*, void*));
void q_mediadevices_custom_event(void* self, void* event);
void q_mediadevices_qbase_custom_event(void* self, void* event);
void q_mediadevices_on_custom_event(void* self, void (*slot)(void*, void*));
void q_mediadevices_connect_notify(void* self, void* signal);
void q_mediadevices_qbase_connect_notify(void* self, void* signal);
void q_mediadevices_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_mediadevices_disconnect_notify(void* self, void* signal);
void q_mediadevices_qbase_disconnect_notify(void* self, void* signal);
void q_mediadevices_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_mediadevices_sender(void* self);
QObject* q_mediadevices_qbase_sender(void* self);
void q_mediadevices_on_sender(void* self, QObject* (*slot)());
int32_t q_mediadevices_sender_signal_index(void* self);
int32_t q_mediadevices_qbase_sender_signal_index(void* self);
void q_mediadevices_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_mediadevices_receivers(void* self, const char* signal);
int32_t q_mediadevices_qbase_receivers(void* self, const char* signal);
void q_mediadevices_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_mediadevices_is_signal_connected(void* self, void* signal);
bool q_mediadevices_qbase_is_signal_connected(void* self, void* signal);
void q_mediadevices_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_mediadevices_delete(void* self);

#endif
