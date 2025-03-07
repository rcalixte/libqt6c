#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQSPATIALSOUND_H
#define SRC_SPATIALAUDIOQT6C_LIBQSPATIALSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioengine.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqquaternion.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "../libqvectornd.h"

QSpatialSound* q_spatialsound_new(void* engine);
QMetaObject* q_spatialsound_meta_object(void* self);
void* q_spatialsound_metacast(void* self, const char* param1);
int32_t q_spatialsound_metacall(void* self, int64_t param1, int param2, void* param3);
void q_spatialsound_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_spatialsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_spatialsound_tr(const char* s);
void q_spatialsound_set_source(void* self, void* url);
QUrl* q_spatialsound_source(void* self);
int32_t q_spatialsound_loops(void* self);
void q_spatialsound_set_loops(void* self, int loops);
bool q_spatialsound_auto_play(void* self);
void q_spatialsound_set_auto_play(void* self, bool autoPlay);
void q_spatialsound_set_position(void* self, void* pos);
QVector3D* q_spatialsound_position(void* self);
void q_spatialsound_set_rotation(void* self, void* q);
QQuaternion* q_spatialsound_rotation(void* self);
void q_spatialsound_set_volume(void* self, float volume);
float q_spatialsound_volume(void* self);
void q_spatialsound_set_distance_model(void* self, int64_t model);
int64_t q_spatialsound_distance_model(void* self);
void q_spatialsound_set_size(void* self, float size);
float q_spatialsound_size(void* self);
void q_spatialsound_set_distance_cutoff(void* self, float cutoff);
float q_spatialsound_distance_cutoff(void* self);
void q_spatialsound_set_manual_attenuation(void* self, float attenuation);
float q_spatialsound_manual_attenuation(void* self);
void q_spatialsound_set_occlusion_intensity(void* self, float occlusion);
float q_spatialsound_occlusion_intensity(void* self);
void q_spatialsound_set_directivity(void* self, float alpha);
float q_spatialsound_directivity(void* self);
void q_spatialsound_set_directivity_order(void* self, float alpha);
float q_spatialsound_directivity_order(void* self);
void q_spatialsound_set_near_field_gain(void* self, float gain);
float q_spatialsound_near_field_gain(void* self);
QAudioEngine* q_spatialsound_engine(void* self);
void q_spatialsound_source_changed(void* self);
void q_spatialsound_on_source_changed(void* self, void (*slot)(void*));
void q_spatialsound_loops_changed(void* self);
void q_spatialsound_on_loops_changed(void* self, void (*slot)(void*));
void q_spatialsound_auto_play_changed(void* self);
void q_spatialsound_on_auto_play_changed(void* self, void (*slot)(void*));
void q_spatialsound_position_changed(void* self);
void q_spatialsound_on_position_changed(void* self, void (*slot)(void*));
void q_spatialsound_rotation_changed(void* self);
void q_spatialsound_on_rotation_changed(void* self, void (*slot)(void*));
void q_spatialsound_volume_changed(void* self);
void q_spatialsound_on_volume_changed(void* self, void (*slot)(void*));
void q_spatialsound_distance_model_changed(void* self);
void q_spatialsound_on_distance_model_changed(void* self, void (*slot)(void*));
void q_spatialsound_size_changed(void* self);
void q_spatialsound_on_size_changed(void* self, void (*slot)(void*));
void q_spatialsound_distance_cutoff_changed(void* self);
void q_spatialsound_on_distance_cutoff_changed(void* self, void (*slot)(void*));
void q_spatialsound_manual_attenuation_changed(void* self);
void q_spatialsound_on_manual_attenuation_changed(void* self, void (*slot)(void*));
void q_spatialsound_occlusion_intensity_changed(void* self);
void q_spatialsound_on_occlusion_intensity_changed(void* self, void (*slot)(void*));
void q_spatialsound_directivity_changed(void* self);
void q_spatialsound_on_directivity_changed(void* self, void (*slot)(void*));
void q_spatialsound_directivity_order_changed(void* self);
void q_spatialsound_on_directivity_order_changed(void* self, void (*slot)(void*));
void q_spatialsound_near_field_gain_changed(void* self);
void q_spatialsound_on_near_field_gain_changed(void* self, void (*slot)(void*));
void q_spatialsound_play(void* self);
void q_spatialsound_pause(void* self);
void q_spatialsound_stop(void* self);
const char* q_spatialsound_tr2(const char* s, const char* c);
const char* q_spatialsound_tr3(const char* s, const char* c, int n);
const char* q_spatialsound_object_name(void* self);
void q_spatialsound_set_object_name(void* self, const char* name);
bool q_spatialsound_is_widget_type(void* self);
bool q_spatialsound_is_window_type(void* self);
bool q_spatialsound_is_quick_item_type(void* self);
bool q_spatialsound_signals_blocked(void* self);
bool q_spatialsound_block_signals(void* self, bool b);
QThread* q_spatialsound_thread(void* self);
void q_spatialsound_move_to_thread(void* self, void* thread);
int32_t q_spatialsound_start_timer(void* self, int interval);
void q_spatialsound_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_spatialsound_children(void* self);
void q_spatialsound_set_parent(void* self, void* parent);
void q_spatialsound_install_event_filter(void* self, void* filterObj);
void q_spatialsound_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_spatialsound_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_spatialsound_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_spatialsound_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_spatialsound_disconnect_with_q_meta_object_connection(void* param1);
void q_spatialsound_dump_object_tree(void* self);
void q_spatialsound_dump_object_info(void* self);
bool q_spatialsound_set_property(void* self, const char* name, void* value);
QVariant* q_spatialsound_property(void* self, const char* name);
const char** q_spatialsound_dynamic_property_names(void* self);
QBindingStorage* q_spatialsound_binding_storage(void* self);
QBindingStorage* q_spatialsound_binding_storage2(void* self);
void q_spatialsound_destroyed(void* self);
void q_spatialsound_on_destroyed(void* self, void (*slot)(void*));
QObject* q_spatialsound_parent(void* self);
bool q_spatialsound_inherits(void* self, const char* classname);
void q_spatialsound_delete_later(void* self);
int32_t q_spatialsound_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_spatialsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_spatialsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_spatialsound_destroyed1(void* self, void* param1);
void q_spatialsound_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_spatialsound_event(void* self, void* event);
bool q_spatialsound_qbase_event(void* self, void* event);
void q_spatialsound_on_event(void* self, bool (*slot)(void*, void*));
bool q_spatialsound_event_filter(void* self, void* watched, void* event);
bool q_spatialsound_qbase_event_filter(void* self, void* watched, void* event);
void q_spatialsound_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_spatialsound_timer_event(void* self, void* event);
void q_spatialsound_qbase_timer_event(void* self, void* event);
void q_spatialsound_on_timer_event(void* self, void (*slot)(void*, void*));
void q_spatialsound_child_event(void* self, void* event);
void q_spatialsound_qbase_child_event(void* self, void* event);
void q_spatialsound_on_child_event(void* self, void (*slot)(void*, void*));
void q_spatialsound_custom_event(void* self, void* event);
void q_spatialsound_qbase_custom_event(void* self, void* event);
void q_spatialsound_on_custom_event(void* self, void (*slot)(void*, void*));
void q_spatialsound_connect_notify(void* self, void* signal);
void q_spatialsound_qbase_connect_notify(void* self, void* signal);
void q_spatialsound_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_spatialsound_disconnect_notify(void* self, void* signal);
void q_spatialsound_qbase_disconnect_notify(void* self, void* signal);
void q_spatialsound_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_spatialsound_sender(void* self);
QObject* q_spatialsound_qbase_sender(void* self);
void q_spatialsound_on_sender(void* self, QObject* (*slot)());
int32_t q_spatialsound_sender_signal_index(void* self);
int32_t q_spatialsound_qbase_sender_signal_index(void* self);
void q_spatialsound_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_spatialsound_receivers(void* self, const char* signal);
int32_t q_spatialsound_qbase_receivers(void* self, const char* signal);
void q_spatialsound_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_spatialsound_is_signal_connected(void* self, void* signal);
bool q_spatialsound_qbase_is_signal_connected(void* self, void* signal);
void q_spatialsound_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_spatialsound_delete(void* self);

/// https://doc.qt.io/qt-6/qspatialsound.html#types

typedef enum {
    QSPATIALSOUND_LOOPS_INFINITE = -1,
    QSPATIALSOUND_LOOPS_ONCE = 1
} QSpatialSound__Loops;

typedef enum {
    QSPATIALSOUND_DISTANCEMODEL_LOGARITHMIC = 0,
    QSPATIALSOUND_DISTANCEMODEL_LINEAR = 1,
    QSPATIALSOUND_DISTANCEMODEL_MANUALATTENUATION = 2
} QSpatialSound__DistanceModel;

#endif
