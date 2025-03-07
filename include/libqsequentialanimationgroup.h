#pragma once
#ifndef SRCQT6C_LIBQSEQUENTIALANIMATIONGROUP_H
#define SRCQT6C_LIBQSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractanimation.h"
#include "libqanimationgroup.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpauseanimation.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QSequentialAnimationGroup* q_sequentialanimationgroup_new();
QSequentialAnimationGroup* q_sequentialanimationgroup_new2(void* parent);
QMetaObject* q_sequentialanimationgroup_meta_object(void* self);
void* q_sequentialanimationgroup_metacast(void* self, const char* param1);
int32_t q_sequentialanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sequentialanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sequentialanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sequentialanimationgroup_tr(const char* s);
QPauseAnimation* q_sequentialanimationgroup_add_pause(void* self, int msecs);
QPauseAnimation* q_sequentialanimationgroup_insert_pause(void* self, int index, int msecs);
QAbstractAnimation* q_sequentialanimationgroup_current_animation(void* self);
int32_t q_sequentialanimationgroup_duration(void* self);
void q_sequentialanimationgroup_on_duration(void* self, int32_t (*slot)());
int32_t q_sequentialanimationgroup_qbase_duration(void* self);
void q_sequentialanimationgroup_current_animation_changed(void* self, void* current);
void q_sequentialanimationgroup_on_current_animation_changed(void* self, void (*slot)(void*, void*));
bool q_sequentialanimationgroup_event(void* self, void* event);
void q_sequentialanimationgroup_on_event(void* self, bool (*slot)(void*, void*));
bool q_sequentialanimationgroup_qbase_event(void* self, void* event);
void q_sequentialanimationgroup_update_current_time(void* self, int param1);
void q_sequentialanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int));
void q_sequentialanimationgroup_qbase_update_current_time(void* self, int param1);
void q_sequentialanimationgroup_update_state(void* self, int64_t newState, int64_t oldState);
void q_sequentialanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));
void q_sequentialanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState);
void q_sequentialanimationgroup_update_direction(void* self, int64_t direction);
void q_sequentialanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t));
void q_sequentialanimationgroup_qbase_update_direction(void* self, int64_t direction);
const char* q_sequentialanimationgroup_tr2(const char* s, const char* c);
const char* q_sequentialanimationgroup_tr3(const char* s, const char* c, int n);
QAbstractAnimation* q_sequentialanimationgroup_animation_at(void* self, int index);
int32_t q_sequentialanimationgroup_animation_count(void* self);
int32_t q_sequentialanimationgroup_index_of_animation(void* self, void* animation);
void q_sequentialanimationgroup_add_animation(void* self, void* animation);
void q_sequentialanimationgroup_insert_animation(void* self, int index, void* animation);
void q_sequentialanimationgroup_remove_animation(void* self, void* animation);
QAbstractAnimation* q_sequentialanimationgroup_take_animation(void* self, int index);
void q_sequentialanimationgroup_clear(void* self);
int64_t q_sequentialanimationgroup_state(void* self);
QAnimationGroup* q_sequentialanimationgroup_group(void* self);
int64_t q_sequentialanimationgroup_direction(void* self);
void q_sequentialanimationgroup_set_direction(void* self, int64_t direction);
int32_t q_sequentialanimationgroup_current_time(void* self);
int32_t q_sequentialanimationgroup_current_loop_time(void* self);
int32_t q_sequentialanimationgroup_loop_count(void* self);
void q_sequentialanimationgroup_set_loop_count(void* self, int loopCount);
int32_t q_sequentialanimationgroup_current_loop(void* self);
int32_t q_sequentialanimationgroup_total_duration(void* self);
void q_sequentialanimationgroup_finished(void* self);
void q_sequentialanimationgroup_on_finished(void* self, void (*slot)(void*));
void q_sequentialanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState);
void q_sequentialanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));
void q_sequentialanimationgroup_current_loop_changed(void* self, int currentLoop);
void q_sequentialanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int));
void q_sequentialanimationgroup_direction_changed(void* self, int64_t param1);
void q_sequentialanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_sequentialanimationgroup_start(void* self);
void q_sequentialanimationgroup_pause(void* self);
void q_sequentialanimationgroup_resume(void* self);
void q_sequentialanimationgroup_set_paused(void* self, bool paused);
void q_sequentialanimationgroup_stop(void* self);
void q_sequentialanimationgroup_set_current_time(void* self, int msecs);
void q_sequentialanimationgroup_start1(void* self, int64_t policy);
const char* q_sequentialanimationgroup_object_name(void* self);
void q_sequentialanimationgroup_set_object_name(void* self, const char* name);
bool q_sequentialanimationgroup_is_widget_type(void* self);
bool q_sequentialanimationgroup_is_window_type(void* self);
bool q_sequentialanimationgroup_is_quick_item_type(void* self);
bool q_sequentialanimationgroup_signals_blocked(void* self);
bool q_sequentialanimationgroup_block_signals(void* self, bool b);
QThread* q_sequentialanimationgroup_thread(void* self);
void q_sequentialanimationgroup_move_to_thread(void* self, void* thread);
int32_t q_sequentialanimationgroup_start_timer(void* self, int interval);
void q_sequentialanimationgroup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sequentialanimationgroup_children(void* self);
void q_sequentialanimationgroup_set_parent(void* self, void* parent);
void q_sequentialanimationgroup_install_event_filter(void* self, void* filterObj);
void q_sequentialanimationgroup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sequentialanimationgroup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sequentialanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sequentialanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sequentialanimationgroup_disconnect_with_q_meta_object_connection(void* param1);
void q_sequentialanimationgroup_dump_object_tree(void* self);
void q_sequentialanimationgroup_dump_object_info(void* self);
bool q_sequentialanimationgroup_set_property(void* self, const char* name, void* value);
QVariant* q_sequentialanimationgroup_property(void* self, const char* name);
const char** q_sequentialanimationgroup_dynamic_property_names(void* self);
QBindingStorage* q_sequentialanimationgroup_binding_storage(void* self);
QBindingStorage* q_sequentialanimationgroup_binding_storage2(void* self);
void q_sequentialanimationgroup_destroyed(void* self);
void q_sequentialanimationgroup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sequentialanimationgroup_parent(void* self);
bool q_sequentialanimationgroup_inherits(void* self, const char* classname);
void q_sequentialanimationgroup_delete_later(void* self);
int32_t q_sequentialanimationgroup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sequentialanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sequentialanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sequentialanimationgroup_destroyed1(void* self, void* param1);
void q_sequentialanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sequentialanimationgroup_event_filter(void* self, void* watched, void* event);
bool q_sequentialanimationgroup_qbase_event_filter(void* self, void* watched, void* event);
void q_sequentialanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sequentialanimationgroup_timer_event(void* self, void* event);
void q_sequentialanimationgroup_qbase_timer_event(void* self, void* event);
void q_sequentialanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sequentialanimationgroup_child_event(void* self, void* event);
void q_sequentialanimationgroup_qbase_child_event(void* self, void* event);
void q_sequentialanimationgroup_on_child_event(void* self, void (*slot)(void*, void*));
void q_sequentialanimationgroup_custom_event(void* self, void* event);
void q_sequentialanimationgroup_qbase_custom_event(void* self, void* event);
void q_sequentialanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sequentialanimationgroup_connect_notify(void* self, void* signal);
void q_sequentialanimationgroup_qbase_connect_notify(void* self, void* signal);
void q_sequentialanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sequentialanimationgroup_disconnect_notify(void* self, void* signal);
void q_sequentialanimationgroup_qbase_disconnect_notify(void* self, void* signal);
void q_sequentialanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_sequentialanimationgroup_sender(void* self);
QObject* q_sequentialanimationgroup_qbase_sender(void* self);
void q_sequentialanimationgroup_on_sender(void* self, QObject* (*slot)());
int32_t q_sequentialanimationgroup_sender_signal_index(void* self);
int32_t q_sequentialanimationgroup_qbase_sender_signal_index(void* self);
void q_sequentialanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sequentialanimationgroup_receivers(void* self, const char* signal);
int32_t q_sequentialanimationgroup_qbase_receivers(void* self, const char* signal);
void q_sequentialanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sequentialanimationgroup_is_signal_connected(void* self, void* signal);
bool q_sequentialanimationgroup_qbase_is_signal_connected(void* self, void* signal);
void q_sequentialanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sequentialanimationgroup_delete(void* self);

#endif
