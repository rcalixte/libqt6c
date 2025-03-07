#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQSOUNDEFFECT_H
#define SRC_MULTIMEDIAQT6C_LIBQSOUNDEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiodevice.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QSoundEffect* q_soundeffect_new();
QSoundEffect* q_soundeffect_new2(void* audioDevice);
QSoundEffect* q_soundeffect_new3(void* parent);
QSoundEffect* q_soundeffect_new4(void* audioDevice, void* parent);
QMetaObject* q_soundeffect_meta_object(void* self);
void* q_soundeffect_metacast(void* self, const char* param1);
int32_t q_soundeffect_metacall(void* self, int64_t param1, int param2, void* param3);
void q_soundeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_soundeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_soundeffect_tr(const char* s);
const char** q_soundeffect_supported_mime_types();
QUrl* q_soundeffect_source(void* self);
void q_soundeffect_set_source(void* self, void* url);
int32_t q_soundeffect_loop_count(void* self);
int32_t q_soundeffect_loops_remaining(void* self);
void q_soundeffect_set_loop_count(void* self, int loopCount);
QAudioDevice* q_soundeffect_audio_device(void* self);
void q_soundeffect_set_audio_device(void* self, void* device);
float q_soundeffect_volume(void* self);
void q_soundeffect_set_volume(void* self, float volume);
bool q_soundeffect_is_muted(void* self);
void q_soundeffect_set_muted(void* self, bool muted);
bool q_soundeffect_is_loaded(void* self);
bool q_soundeffect_is_playing(void* self);
int64_t q_soundeffect_status(void* self);
void q_soundeffect_source_changed(void* self);
void q_soundeffect_on_source_changed(void* self, void (*slot)(void*));
void q_soundeffect_loop_count_changed(void* self);
void q_soundeffect_on_loop_count_changed(void* self, void (*slot)(void*));
void q_soundeffect_loops_remaining_changed(void* self);
void q_soundeffect_on_loops_remaining_changed(void* self, void (*slot)(void*));
void q_soundeffect_volume_changed(void* self);
void q_soundeffect_on_volume_changed(void* self, void (*slot)(void*));
void q_soundeffect_muted_changed(void* self);
void q_soundeffect_on_muted_changed(void* self, void (*slot)(void*));
void q_soundeffect_loaded_changed(void* self);
void q_soundeffect_on_loaded_changed(void* self, void (*slot)(void*));
void q_soundeffect_playing_changed(void* self);
void q_soundeffect_on_playing_changed(void* self, void (*slot)(void*));
void q_soundeffect_status_changed(void* self);
void q_soundeffect_on_status_changed(void* self, void (*slot)(void*));
void q_soundeffect_audio_device_changed(void* self);
void q_soundeffect_on_audio_device_changed(void* self, void (*slot)(void*));
void q_soundeffect_play(void* self);
void q_soundeffect_stop(void* self);
const char* q_soundeffect_tr2(const char* s, const char* c);
const char* q_soundeffect_tr3(const char* s, const char* c, int n);
const char* q_soundeffect_object_name(void* self);
void q_soundeffect_set_object_name(void* self, const char* name);
bool q_soundeffect_is_widget_type(void* self);
bool q_soundeffect_is_window_type(void* self);
bool q_soundeffect_is_quick_item_type(void* self);
bool q_soundeffect_signals_blocked(void* self);
bool q_soundeffect_block_signals(void* self, bool b);
QThread* q_soundeffect_thread(void* self);
void q_soundeffect_move_to_thread(void* self, void* thread);
int32_t q_soundeffect_start_timer(void* self, int interval);
void q_soundeffect_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_soundeffect_children(void* self);
void q_soundeffect_set_parent(void* self, void* parent);
void q_soundeffect_install_event_filter(void* self, void* filterObj);
void q_soundeffect_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_soundeffect_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_soundeffect_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_soundeffect_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_soundeffect_disconnect_with_q_meta_object_connection(void* param1);
void q_soundeffect_dump_object_tree(void* self);
void q_soundeffect_dump_object_info(void* self);
bool q_soundeffect_set_property(void* self, const char* name, void* value);
QVariant* q_soundeffect_property(void* self, const char* name);
const char** q_soundeffect_dynamic_property_names(void* self);
QBindingStorage* q_soundeffect_binding_storage(void* self);
QBindingStorage* q_soundeffect_binding_storage2(void* self);
void q_soundeffect_destroyed(void* self);
void q_soundeffect_on_destroyed(void* self, void (*slot)(void*));
QObject* q_soundeffect_parent(void* self);
bool q_soundeffect_inherits(void* self, const char* classname);
void q_soundeffect_delete_later(void* self);
int32_t q_soundeffect_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_soundeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_soundeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_soundeffect_destroyed1(void* self, void* param1);
void q_soundeffect_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_soundeffect_event(void* self, void* event);
bool q_soundeffect_qbase_event(void* self, void* event);
void q_soundeffect_on_event(void* self, bool (*slot)(void*, void*));
bool q_soundeffect_event_filter(void* self, void* watched, void* event);
bool q_soundeffect_qbase_event_filter(void* self, void* watched, void* event);
void q_soundeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_soundeffect_timer_event(void* self, void* event);
void q_soundeffect_qbase_timer_event(void* self, void* event);
void q_soundeffect_on_timer_event(void* self, void (*slot)(void*, void*));
void q_soundeffect_child_event(void* self, void* event);
void q_soundeffect_qbase_child_event(void* self, void* event);
void q_soundeffect_on_child_event(void* self, void (*slot)(void*, void*));
void q_soundeffect_custom_event(void* self, void* event);
void q_soundeffect_qbase_custom_event(void* self, void* event);
void q_soundeffect_on_custom_event(void* self, void (*slot)(void*, void*));
void q_soundeffect_connect_notify(void* self, void* signal);
void q_soundeffect_qbase_connect_notify(void* self, void* signal);
void q_soundeffect_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_soundeffect_disconnect_notify(void* self, void* signal);
void q_soundeffect_qbase_disconnect_notify(void* self, void* signal);
void q_soundeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_soundeffect_sender(void* self);
QObject* q_soundeffect_qbase_sender(void* self);
void q_soundeffect_on_sender(void* self, QObject* (*slot)());
int32_t q_soundeffect_sender_signal_index(void* self);
int32_t q_soundeffect_qbase_sender_signal_index(void* self);
void q_soundeffect_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_soundeffect_receivers(void* self, const char* signal);
int32_t q_soundeffect_qbase_receivers(void* self, const char* signal);
void q_soundeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_soundeffect_is_signal_connected(void* self, void* signal);
bool q_soundeffect_qbase_is_signal_connected(void* self, void* signal);
void q_soundeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_soundeffect_delete(void* self);

/// https://doc.qt.io/qt-6/qsoundeffect.html#types

typedef enum {
    QSOUNDEFFECT_LOOP_INFINITE = -2
} QSoundEffect__Loop;

typedef enum {
    QSOUNDEFFECT_STATUS_NULL = 0,
    QSOUNDEFFECT_STATUS_LOADING = 1,
    QSOUNDEFFECT_STATUS_READY = 2,
    QSOUNDEFFECT_STATUS_ERROR = 3
} QSoundEffect__Status;

#endif
