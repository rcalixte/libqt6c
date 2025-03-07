#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAUDIOENGINE_H
#define SRC_SPATIALAUDIOQT6C_LIBQAUDIOENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../multimedia/libqaudiodevice.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QAudioEngine* q_audioengine_new();
QAudioEngine* q_audioengine_new2(void* parent);
QAudioEngine* q_audioengine_new3(int sampleRate);
QAudioEngine* q_audioengine_new4(int sampleRate, void* parent);
QMetaObject* q_audioengine_meta_object(void* self);
void* q_audioengine_metacast(void* self, const char* param1);
int32_t q_audioengine_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audioengine_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audioengine_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audioengine_tr(const char* s);
void q_audioengine_set_output_mode(void* self, int64_t mode);
int64_t q_audioengine_output_mode(void* self);
int32_t q_audioengine_sample_rate(void* self);
void q_audioengine_set_output_device(void* self, void* device);
QAudioDevice* q_audioengine_output_device(void* self);
void q_audioengine_set_master_volume(void* self, float volume);
float q_audioengine_master_volume(void* self);
void q_audioengine_set_paused(void* self, bool paused);
bool q_audioengine_paused(void* self);
void q_audioengine_set_room_effects_enabled(void* self, bool enabled);
bool q_audioengine_room_effects_enabled(void* self);
void q_audioengine_set_distance_scale(void* self, float scale);
float q_audioengine_distance_scale(void* self);
void q_audioengine_output_mode_changed(void* self);
void q_audioengine_on_output_mode_changed(void* self, void (*slot)(void*));
void q_audioengine_output_device_changed(void* self);
void q_audioengine_on_output_device_changed(void* self, void (*slot)(void*));
void q_audioengine_master_volume_changed(void* self);
void q_audioengine_on_master_volume_changed(void* self, void (*slot)(void*));
void q_audioengine_paused_changed(void* self);
void q_audioengine_on_paused_changed(void* self, void (*slot)(void*));
void q_audioengine_distance_scale_changed(void* self);
void q_audioengine_on_distance_scale_changed(void* self, void (*slot)(void*));
void q_audioengine_start(void* self);
void q_audioengine_stop(void* self);
void q_audioengine_pause(void* self);
void q_audioengine_resume(void* self);
const char* q_audioengine_tr2(const char* s, const char* c);
const char* q_audioengine_tr3(const char* s, const char* c, int n);
const char* q_audioengine_object_name(void* self);
void q_audioengine_set_object_name(void* self, const char* name);
bool q_audioengine_is_widget_type(void* self);
bool q_audioengine_is_window_type(void* self);
bool q_audioengine_is_quick_item_type(void* self);
bool q_audioengine_signals_blocked(void* self);
bool q_audioengine_block_signals(void* self, bool b);
QThread* q_audioengine_thread(void* self);
void q_audioengine_move_to_thread(void* self, void* thread);
int32_t q_audioengine_start_timer(void* self, int interval);
void q_audioengine_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audioengine_children(void* self);
void q_audioengine_set_parent(void* self, void* parent);
void q_audioengine_install_event_filter(void* self, void* filterObj);
void q_audioengine_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audioengine_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audioengine_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audioengine_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audioengine_disconnect_with_q_meta_object_connection(void* param1);
void q_audioengine_dump_object_tree(void* self);
void q_audioengine_dump_object_info(void* self);
bool q_audioengine_set_property(void* self, const char* name, void* value);
QVariant* q_audioengine_property(void* self, const char* name);
const char** q_audioengine_dynamic_property_names(void* self);
QBindingStorage* q_audioengine_binding_storage(void* self);
QBindingStorage* q_audioengine_binding_storage2(void* self);
void q_audioengine_destroyed(void* self);
void q_audioengine_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audioengine_parent(void* self);
bool q_audioengine_inherits(void* self, const char* classname);
void q_audioengine_delete_later(void* self);
int32_t q_audioengine_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audioengine_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audioengine_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audioengine_destroyed1(void* self, void* param1);
void q_audioengine_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audioengine_event(void* self, void* event);
bool q_audioengine_qbase_event(void* self, void* event);
void q_audioengine_on_event(void* self, bool (*slot)(void*, void*));
bool q_audioengine_event_filter(void* self, void* watched, void* event);
bool q_audioengine_qbase_event_filter(void* self, void* watched, void* event);
void q_audioengine_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audioengine_timer_event(void* self, void* event);
void q_audioengine_qbase_timer_event(void* self, void* event);
void q_audioengine_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audioengine_child_event(void* self, void* event);
void q_audioengine_qbase_child_event(void* self, void* event);
void q_audioengine_on_child_event(void* self, void (*slot)(void*, void*));
void q_audioengine_custom_event(void* self, void* event);
void q_audioengine_qbase_custom_event(void* self, void* event);
void q_audioengine_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audioengine_connect_notify(void* self, void* signal);
void q_audioengine_qbase_connect_notify(void* self, void* signal);
void q_audioengine_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audioengine_disconnect_notify(void* self, void* signal);
void q_audioengine_qbase_disconnect_notify(void* self, void* signal);
void q_audioengine_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audioengine_sender(void* self);
QObject* q_audioengine_qbase_sender(void* self);
void q_audioengine_on_sender(void* self, QObject* (*slot)());
int32_t q_audioengine_sender_signal_index(void* self);
int32_t q_audioengine_qbase_sender_signal_index(void* self);
void q_audioengine_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audioengine_receivers(void* self, const char* signal);
int32_t q_audioengine_qbase_receivers(void* self, const char* signal);
void q_audioengine_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audioengine_is_signal_connected(void* self, void* signal);
bool q_audioengine_qbase_is_signal_connected(void* self, void* signal);
void q_audioengine_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audioengine_delete(void* self);

/// https://doc.qt.io/qt-6/qaudioengine.html#types

typedef enum {
    QAUDIOENGINE_OUTPUTMODE_SURROUND = 0,
    QAUDIOENGINE_OUTPUTMODE_STEREO = 1,
    QAUDIOENGINE_OUTPUTMODE_HEADPHONE = 2
} QAudioEngine__OutputMode;

#endif
