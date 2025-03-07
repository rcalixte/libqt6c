#pragma once
#ifndef SRCQT6C_LIBQVARIANTANIMATION_H
#define SRCQT6C_LIBQVARIANTANIMATION_H

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
#include "libqeasingcurve.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QVariantAnimation* q_variantanimation_new();
QVariantAnimation* q_variantanimation_new2(void* parent);
QMetaObject* q_variantanimation_meta_object(void* self);
void* q_variantanimation_metacast(void* self, const char* param1);
int32_t q_variantanimation_metacall(void* self, int64_t param1, int param2, void* param3);
void q_variantanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_variantanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_variantanimation_tr(const char* s);
QVariant* q_variantanimation_start_value(void* self);
void q_variantanimation_set_start_value(void* self, void* value);
QVariant* q_variantanimation_end_value(void* self);
void q_variantanimation_set_end_value(void* self, void* value);
QVariant* q_variantanimation_key_value_at(void* self, double step);
void q_variantanimation_set_key_value_at(void* self, double step, void* value);
libqt_list /* of libqt_pair  tuple of double and QVariant*  */ q_variantanimation_key_values(void* self);
void q_variantanimation_set_key_values(void* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values);
QVariant* q_variantanimation_current_value(void* self);
int32_t q_variantanimation_duration(void* self);
void q_variantanimation_on_duration(void* self, int32_t (*slot)());
int32_t q_variantanimation_qbase_duration(void* self);
void q_variantanimation_set_duration(void* self, int msecs);
QEasingCurve* q_variantanimation_easing_curve(void* self);
void q_variantanimation_set_easing_curve(void* self, void* easing);
void q_variantanimation_value_changed(void* self, void* value);
void q_variantanimation_on_value_changed(void* self, void (*slot)(void*, void*));
bool q_variantanimation_event(void* self, void* event);
void q_variantanimation_on_event(void* self, bool (*slot)(void*, void*));
bool q_variantanimation_qbase_event(void* self, void* event);
void q_variantanimation_update_current_time(void* self, int param1);
void q_variantanimation_on_update_current_time(void* self, void (*slot)(void*, int));
void q_variantanimation_qbase_update_current_time(void* self, int param1);
void q_variantanimation_update_state(void* self, int64_t newState, int64_t oldState);
void q_variantanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));
void q_variantanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);
void q_variantanimation_update_current_value(void* self, void* value);
void q_variantanimation_on_update_current_value(void* self, void (*slot)(void*, void*));
void q_variantanimation_qbase_update_current_value(void* self, void* value);
QVariant* q_variantanimation_interpolated(void* self, void* from, void* to, double progress);
void q_variantanimation_on_interpolated(void* self, QVariant* (*slot)(void*, void*, void*, double));
QVariant* q_variantanimation_qbase_interpolated(void* self, void* from, void* to, double progress);
const char* q_variantanimation_tr2(const char* s, const char* c);
const char* q_variantanimation_tr3(const char* s, const char* c, int n);
int64_t q_variantanimation_state(void* self);
QAnimationGroup* q_variantanimation_group(void* self);
int64_t q_variantanimation_direction(void* self);
void q_variantanimation_set_direction(void* self, int64_t direction);
int32_t q_variantanimation_current_time(void* self);
int32_t q_variantanimation_current_loop_time(void* self);
int32_t q_variantanimation_loop_count(void* self);
void q_variantanimation_set_loop_count(void* self, int loopCount);
int32_t q_variantanimation_current_loop(void* self);
int32_t q_variantanimation_total_duration(void* self);
void q_variantanimation_finished(void* self);
void q_variantanimation_on_finished(void* self, void (*slot)(void*));
void q_variantanimation_state_changed(void* self, int64_t newState, int64_t oldState);
void q_variantanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));
void q_variantanimation_current_loop_changed(void* self, int currentLoop);
void q_variantanimation_on_current_loop_changed(void* self, void (*slot)(void*, int));
void q_variantanimation_direction_changed(void* self, int64_t param1);
void q_variantanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_variantanimation_start(void* self);
void q_variantanimation_pause(void* self);
void q_variantanimation_resume(void* self);
void q_variantanimation_set_paused(void* self, bool paused);
void q_variantanimation_stop(void* self);
void q_variantanimation_set_current_time(void* self, int msecs);
void q_variantanimation_start1(void* self, int64_t policy);
const char* q_variantanimation_object_name(void* self);
void q_variantanimation_set_object_name(void* self, const char* name);
bool q_variantanimation_is_widget_type(void* self);
bool q_variantanimation_is_window_type(void* self);
bool q_variantanimation_is_quick_item_type(void* self);
bool q_variantanimation_signals_blocked(void* self);
bool q_variantanimation_block_signals(void* self, bool b);
QThread* q_variantanimation_thread(void* self);
void q_variantanimation_move_to_thread(void* self, void* thread);
int32_t q_variantanimation_start_timer(void* self, int interval);
void q_variantanimation_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_variantanimation_children(void* self);
void q_variantanimation_set_parent(void* self, void* parent);
void q_variantanimation_install_event_filter(void* self, void* filterObj);
void q_variantanimation_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_variantanimation_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_variantanimation_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_variantanimation_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_variantanimation_disconnect_with_q_meta_object_connection(void* param1);
void q_variantanimation_dump_object_tree(void* self);
void q_variantanimation_dump_object_info(void* self);
bool q_variantanimation_set_property(void* self, const char* name, void* value);
QVariant* q_variantanimation_property(void* self, const char* name);
const char** q_variantanimation_dynamic_property_names(void* self);
QBindingStorage* q_variantanimation_binding_storage(void* self);
QBindingStorage* q_variantanimation_binding_storage2(void* self);
void q_variantanimation_destroyed(void* self);
void q_variantanimation_on_destroyed(void* self, void (*slot)(void*));
QObject* q_variantanimation_parent(void* self);
bool q_variantanimation_inherits(void* self, const char* classname);
void q_variantanimation_delete_later(void* self);
int32_t q_variantanimation_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_variantanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_variantanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_variantanimation_destroyed1(void* self, void* param1);
void q_variantanimation_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_variantanimation_update_direction(void* self, int64_t direction);
void q_variantanimation_qbase_update_direction(void* self, int64_t direction);
void q_variantanimation_on_update_direction(void* self, void (*slot)(void*, int64_t));
bool q_variantanimation_event_filter(void* self, void* watched, void* event);
bool q_variantanimation_qbase_event_filter(void* self, void* watched, void* event);
void q_variantanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_variantanimation_timer_event(void* self, void* event);
void q_variantanimation_qbase_timer_event(void* self, void* event);
void q_variantanimation_on_timer_event(void* self, void (*slot)(void*, void*));
void q_variantanimation_child_event(void* self, void* event);
void q_variantanimation_qbase_child_event(void* self, void* event);
void q_variantanimation_on_child_event(void* self, void (*slot)(void*, void*));
void q_variantanimation_custom_event(void* self, void* event);
void q_variantanimation_qbase_custom_event(void* self, void* event);
void q_variantanimation_on_custom_event(void* self, void (*slot)(void*, void*));
void q_variantanimation_connect_notify(void* self, void* signal);
void q_variantanimation_qbase_connect_notify(void* self, void* signal);
void q_variantanimation_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_variantanimation_disconnect_notify(void* self, void* signal);
void q_variantanimation_qbase_disconnect_notify(void* self, void* signal);
void q_variantanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_variantanimation_sender(void* self);
QObject* q_variantanimation_qbase_sender(void* self);
void q_variantanimation_on_sender(void* self, QObject* (*slot)());
int32_t q_variantanimation_sender_signal_index(void* self);
int32_t q_variantanimation_qbase_sender_signal_index(void* self);
void q_variantanimation_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_variantanimation_receivers(void* self, const char* signal);
int32_t q_variantanimation_qbase_receivers(void* self, const char* signal);
void q_variantanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_variantanimation_is_signal_connected(void* self, void* signal);
bool q_variantanimation_qbase_is_signal_connected(void* self, void* signal);
void q_variantanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_variantanimation_delete(void* self);

#endif
