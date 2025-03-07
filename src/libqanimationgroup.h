#pragma once
#ifndef SRCQT6C_LIBQANIMATIONGROUP_H
#define SRCQT6C_LIBQANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractanimation.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QAnimationGroup* q_animationgroup_new();
QAnimationGroup* q_animationgroup_new2(void* parent);
QMetaObject* q_animationgroup_meta_object(void* self);
void* q_animationgroup_metacast(void* self, const char* param1);
int32_t q_animationgroup_metacall(void* self, int64_t param1, int param2, void* param3);
void q_animationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_animationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_animationgroup_tr(const char* s);
QAbstractAnimation* q_animationgroup_animation_at(void* self, int index);
int32_t q_animationgroup_animation_count(void* self);
int32_t q_animationgroup_index_of_animation(void* self, void* animation);
void q_animationgroup_add_animation(void* self, void* animation);
void q_animationgroup_insert_animation(void* self, int index, void* animation);
void q_animationgroup_remove_animation(void* self, void* animation);
QAbstractAnimation* q_animationgroup_take_animation(void* self, int index);
void q_animationgroup_clear(void* self);
bool q_animationgroup_event(void* self, void* event);
void q_animationgroup_on_event(void* self, bool (*slot)(void*, void*));
bool q_animationgroup_qbase_event(void* self, void* event);
const char* q_animationgroup_tr2(const char* s, const char* c);
const char* q_animationgroup_tr3(const char* s, const char* c, int n);
int64_t q_animationgroup_state(void* self);
QAnimationGroup* q_animationgroup_group(void* self);
int64_t q_animationgroup_direction(void* self);
void q_animationgroup_set_direction(void* self, int64_t direction);
int32_t q_animationgroup_current_time(void* self);
int32_t q_animationgroup_current_loop_time(void* self);
int32_t q_animationgroup_loop_count(void* self);
void q_animationgroup_set_loop_count(void* self, int loopCount);
int32_t q_animationgroup_current_loop(void* self);
int32_t q_animationgroup_total_duration(void* self);
void q_animationgroup_finished(void* self);
void q_animationgroup_on_finished(void* self, void (*slot)(void*));
void q_animationgroup_state_changed(void* self, int64_t newState, int64_t oldState);
void q_animationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));
void q_animationgroup_current_loop_changed(void* self, int currentLoop);
void q_animationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int));
void q_animationgroup_direction_changed(void* self, int64_t param1);
void q_animationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_animationgroup_start(void* self);
void q_animationgroup_pause(void* self);
void q_animationgroup_resume(void* self);
void q_animationgroup_set_paused(void* self, bool paused);
void q_animationgroup_stop(void* self);
void q_animationgroup_set_current_time(void* self, int msecs);
void q_animationgroup_start1(void* self, int64_t policy);
const char* q_animationgroup_object_name(void* self);
void q_animationgroup_set_object_name(void* self, const char* name);
bool q_animationgroup_is_widget_type(void* self);
bool q_animationgroup_is_window_type(void* self);
bool q_animationgroup_is_quick_item_type(void* self);
bool q_animationgroup_signals_blocked(void* self);
bool q_animationgroup_block_signals(void* self, bool b);
QThread* q_animationgroup_thread(void* self);
void q_animationgroup_move_to_thread(void* self, void* thread);
int32_t q_animationgroup_start_timer(void* self, int interval);
void q_animationgroup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_animationgroup_children(void* self);
void q_animationgroup_set_parent(void* self, void* parent);
void q_animationgroup_install_event_filter(void* self, void* filterObj);
void q_animationgroup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_animationgroup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_animationgroup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_animationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_animationgroup_disconnect_with_q_meta_object_connection(void* param1);
void q_animationgroup_dump_object_tree(void* self);
void q_animationgroup_dump_object_info(void* self);
bool q_animationgroup_set_property(void* self, const char* name, void* value);
QVariant* q_animationgroup_property(void* self, const char* name);
const char** q_animationgroup_dynamic_property_names(void* self);
QBindingStorage* q_animationgroup_binding_storage(void* self);
QBindingStorage* q_animationgroup_binding_storage2(void* self);
void q_animationgroup_destroyed(void* self);
void q_animationgroup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_animationgroup_parent(void* self);
bool q_animationgroup_inherits(void* self, const char* classname);
void q_animationgroup_delete_later(void* self);
int32_t q_animationgroup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_animationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_animationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_animationgroup_destroyed1(void* self, void* param1);
void q_animationgroup_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_animationgroup_duration(void* self);
int32_t q_animationgroup_qbase_duration(void* self);
void q_animationgroup_on_duration(void* self, int32_t (*slot)());
void q_animationgroup_update_current_time(void* self, int currentTime);
void q_animationgroup_qbase_update_current_time(void* self, int currentTime);
void q_animationgroup_on_update_current_time(void* self, void (*slot)(void*, int));
void q_animationgroup_update_state(void* self, int64_t newState, int64_t oldState);
void q_animationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState);
void q_animationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));
void q_animationgroup_update_direction(void* self, int64_t direction);
void q_animationgroup_qbase_update_direction(void* self, int64_t direction);
void q_animationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t));
bool q_animationgroup_event_filter(void* self, void* watched, void* event);
bool q_animationgroup_qbase_event_filter(void* self, void* watched, void* event);
void q_animationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_animationgroup_timer_event(void* self, void* event);
void q_animationgroup_qbase_timer_event(void* self, void* event);
void q_animationgroup_on_timer_event(void* self, void (*slot)(void*, void*));
void q_animationgroup_child_event(void* self, void* event);
void q_animationgroup_qbase_child_event(void* self, void* event);
void q_animationgroup_on_child_event(void* self, void (*slot)(void*, void*));
void q_animationgroup_custom_event(void* self, void* event);
void q_animationgroup_qbase_custom_event(void* self, void* event);
void q_animationgroup_on_custom_event(void* self, void (*slot)(void*, void*));
void q_animationgroup_connect_notify(void* self, void* signal);
void q_animationgroup_qbase_connect_notify(void* self, void* signal);
void q_animationgroup_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_animationgroup_disconnect_notify(void* self, void* signal);
void q_animationgroup_qbase_disconnect_notify(void* self, void* signal);
void q_animationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_animationgroup_sender(void* self);
QObject* q_animationgroup_qbase_sender(void* self);
void q_animationgroup_on_sender(void* self, QObject* (*slot)());
int32_t q_animationgroup_sender_signal_index(void* self);
int32_t q_animationgroup_qbase_sender_signal_index(void* self);
void q_animationgroup_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_animationgroup_receivers(void* self, const char* signal);
int32_t q_animationgroup_qbase_receivers(void* self, const char* signal);
void q_animationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_animationgroup_is_signal_connected(void* self, void* signal);
bool q_animationgroup_qbase_is_signal_connected(void* self, void* signal);
void q_animationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_animationgroup_delete(void* self);

#endif
