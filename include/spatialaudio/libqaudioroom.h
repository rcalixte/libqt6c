#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAUDIOROOM_H
#define SRC_SPATIALAUDIOQT6C_LIBQAUDIOROOM_H

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
#include "../libqvariant.h"
#include "../libqvectornd.h"

QAudioRoom* q_audioroom_new(void* engine);
QMetaObject* q_audioroom_meta_object(void* self);
void* q_audioroom_metacast(void* self, const char* param1);
int32_t q_audioroom_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audioroom_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audioroom_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audioroom_tr(const char* s);
void q_audioroom_set_position(void* self, void* pos);
QVector3D* q_audioroom_position(void* self);
void q_audioroom_set_dimensions(void* self, void* dim);
QVector3D* q_audioroom_dimensions(void* self);
void q_audioroom_set_rotation(void* self, void* q);
QQuaternion* q_audioroom_rotation(void* self);
void q_audioroom_set_wall_material(void* self, int64_t wall, int64_t material);
int64_t q_audioroom_wall_material(void* self, int64_t wall);
void q_audioroom_set_reflection_gain(void* self, float factor);
float q_audioroom_reflection_gain(void* self);
void q_audioroom_set_reverb_gain(void* self, float factor);
float q_audioroom_reverb_gain(void* self);
void q_audioroom_set_reverb_time(void* self, float factor);
float q_audioroom_reverb_time(void* self);
void q_audioroom_set_reverb_brightness(void* self, float factor);
float q_audioroom_reverb_brightness(void* self);
void q_audioroom_position_changed(void* self);
void q_audioroom_on_position_changed(void* self, void (*slot)(void*));
void q_audioroom_dimensions_changed(void* self);
void q_audioroom_on_dimensions_changed(void* self, void (*slot)(void*));
void q_audioroom_rotation_changed(void* self);
void q_audioroom_on_rotation_changed(void* self, void (*slot)(void*));
void q_audioroom_walls_changed(void* self);
void q_audioroom_on_walls_changed(void* self, void (*slot)(void*));
void q_audioroom_reflection_gain_changed(void* self);
void q_audioroom_on_reflection_gain_changed(void* self, void (*slot)(void*));
void q_audioroom_reverb_gain_changed(void* self);
void q_audioroom_on_reverb_gain_changed(void* self, void (*slot)(void*));
void q_audioroom_reverb_time_changed(void* self);
void q_audioroom_on_reverb_time_changed(void* self, void (*slot)(void*));
void q_audioroom_reverb_brightness_changed(void* self);
void q_audioroom_on_reverb_brightness_changed(void* self, void (*slot)(void*));
const char* q_audioroom_tr2(const char* s, const char* c);
const char* q_audioroom_tr3(const char* s, const char* c, int n);
const char* q_audioroom_object_name(void* self);
void q_audioroom_set_object_name(void* self, const char* name);
bool q_audioroom_is_widget_type(void* self);
bool q_audioroom_is_window_type(void* self);
bool q_audioroom_is_quick_item_type(void* self);
bool q_audioroom_signals_blocked(void* self);
bool q_audioroom_block_signals(void* self, bool b);
QThread* q_audioroom_thread(void* self);
void q_audioroom_move_to_thread(void* self, void* thread);
int32_t q_audioroom_start_timer(void* self, int interval);
void q_audioroom_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audioroom_children(void* self);
void q_audioroom_set_parent(void* self, void* parent);
void q_audioroom_install_event_filter(void* self, void* filterObj);
void q_audioroom_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audioroom_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audioroom_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audioroom_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audioroom_disconnect_with_q_meta_object_connection(void* param1);
void q_audioroom_dump_object_tree(void* self);
void q_audioroom_dump_object_info(void* self);
bool q_audioroom_set_property(void* self, const char* name, void* value);
QVariant* q_audioroom_property(void* self, const char* name);
const char** q_audioroom_dynamic_property_names(void* self);
QBindingStorage* q_audioroom_binding_storage(void* self);
QBindingStorage* q_audioroom_binding_storage2(void* self);
void q_audioroom_destroyed(void* self);
void q_audioroom_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audioroom_parent(void* self);
bool q_audioroom_inherits(void* self, const char* classname);
void q_audioroom_delete_later(void* self);
int32_t q_audioroom_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audioroom_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audioroom_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audioroom_destroyed1(void* self, void* param1);
void q_audioroom_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audioroom_event(void* self, void* event);
bool q_audioroom_qbase_event(void* self, void* event);
void q_audioroom_on_event(void* self, bool (*slot)(void*, void*));
bool q_audioroom_event_filter(void* self, void* watched, void* event);
bool q_audioroom_qbase_event_filter(void* self, void* watched, void* event);
void q_audioroom_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audioroom_timer_event(void* self, void* event);
void q_audioroom_qbase_timer_event(void* self, void* event);
void q_audioroom_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audioroom_child_event(void* self, void* event);
void q_audioroom_qbase_child_event(void* self, void* event);
void q_audioroom_on_child_event(void* self, void (*slot)(void*, void*));
void q_audioroom_custom_event(void* self, void* event);
void q_audioroom_qbase_custom_event(void* self, void* event);
void q_audioroom_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audioroom_connect_notify(void* self, void* signal);
void q_audioroom_qbase_connect_notify(void* self, void* signal);
void q_audioroom_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audioroom_disconnect_notify(void* self, void* signal);
void q_audioroom_qbase_disconnect_notify(void* self, void* signal);
void q_audioroom_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audioroom_sender(void* self);
QObject* q_audioroom_qbase_sender(void* self);
void q_audioroom_on_sender(void* self, QObject* (*slot)());
int32_t q_audioroom_sender_signal_index(void* self);
int32_t q_audioroom_qbase_sender_signal_index(void* self);
void q_audioroom_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audioroom_receivers(void* self, const char* signal);
int32_t q_audioroom_qbase_receivers(void* self, const char* signal);
void q_audioroom_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audioroom_is_signal_connected(void* self, void* signal);
bool q_audioroom_qbase_is_signal_connected(void* self, void* signal);
void q_audioroom_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audioroom_delete(void* self);

/// https://doc.qt.io/qt-6/qaudioroom.html#types

typedef enum {
    QAUDIOROOM_MATERIAL_TRANSPARENT = 0,
    QAUDIOROOM_MATERIAL_ACOUSTICCEILINGTILES = 1,
    QAUDIOROOM_MATERIAL_BRICKBARE = 2,
    QAUDIOROOM_MATERIAL_BRICKPAINTED = 3,
    QAUDIOROOM_MATERIAL_CONCRETEBLOCKCOARSE = 4,
    QAUDIOROOM_MATERIAL_CONCRETEBLOCKPAINTED = 5,
    QAUDIOROOM_MATERIAL_CURTAINHEAVY = 6,
    QAUDIOROOM_MATERIAL_FIBERGLASSINSULATION = 7,
    QAUDIOROOM_MATERIAL_GLASSTHIN = 8,
    QAUDIOROOM_MATERIAL_GLASSTHICK = 9,
    QAUDIOROOM_MATERIAL_GRASS = 10,
    QAUDIOROOM_MATERIAL_LINOLEUMONCONCRETE = 11,
    QAUDIOROOM_MATERIAL_MARBLE = 12,
    QAUDIOROOM_MATERIAL_METAL = 13,
    QAUDIOROOM_MATERIAL_PARQUETONCONCRETE = 14,
    QAUDIOROOM_MATERIAL_PLASTERROUGH = 15,
    QAUDIOROOM_MATERIAL_PLASTERSMOOTH = 16,
    QAUDIOROOM_MATERIAL_PLYWOODPANEL = 17,
    QAUDIOROOM_MATERIAL_POLISHEDCONCRETEORTILE = 18,
    QAUDIOROOM_MATERIAL_SHEETROCK = 19,
    QAUDIOROOM_MATERIAL_WATERORICESURFACE = 20,
    QAUDIOROOM_MATERIAL_WOODCEILING = 21,
    QAUDIOROOM_MATERIAL_WOODPANEL = 22,
    QAUDIOROOM_MATERIAL_UNIFORMMATERIAL = 23
} QAudioRoom__Material;

typedef enum {
    QAUDIOROOM_WALL_LEFTWALL = 0,
    QAUDIOROOM_WALL_RIGHTWALL = 1,
    QAUDIOROOM_WALL_FLOOR = 2,
    QAUDIOROOM_WALL_CEILING = 3,
    QAUDIOROOM_WALL_FRONTWALL = 4,
    QAUDIOROOM_WALL_BACKWALL = 5
} QAudioRoom__Wall;

#endif
