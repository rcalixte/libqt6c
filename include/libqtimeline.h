#pragma once
#ifndef SRCQT6C_LIBQTIMELINE_H
#define SRCQT6C_LIBQTIMELINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqeasingcurve.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QTimeLine* q_timeline_new();
QTimeLine* q_timeline_new2(int duration);
QTimeLine* q_timeline_new3(int duration, void* parent);
QMetaObject* q_timeline_meta_object(void* self);
void* q_timeline_metacast(void* self, const char* param1);
int32_t q_timeline_metacall(void* self, int64_t param1, int param2, void* param3);
void q_timeline_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_timeline_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_timeline_tr(const char* s);
int64_t q_timeline_state(void* self);
int32_t q_timeline_loop_count(void* self);
void q_timeline_set_loop_count(void* self, int count);
int64_t q_timeline_direction(void* self);
void q_timeline_set_direction(void* self, int64_t direction);
int32_t q_timeline_duration(void* self);
void q_timeline_set_duration(void* self, int duration);
int32_t q_timeline_start_frame(void* self);
void q_timeline_set_start_frame(void* self, int frame);
int32_t q_timeline_end_frame(void* self);
void q_timeline_set_end_frame(void* self, int frame);
void q_timeline_set_frame_range(void* self, int startFrame, int endFrame);
int32_t q_timeline_update_interval(void* self);
void q_timeline_set_update_interval(void* self, int interval);
QEasingCurve* q_timeline_easing_curve(void* self);
void q_timeline_set_easing_curve(void* self, void* curve);
int32_t q_timeline_current_time(void* self);
int32_t q_timeline_current_frame(void* self);
double q_timeline_current_value(void* self);
int32_t q_timeline_frame_for_time(void* self, int msec);
double q_timeline_value_for_time(void* self, int msec);
void q_timeline_on_value_for_time(void* self, double (*slot)(void*, int));
double q_timeline_qbase_value_for_time(void* self, int msec);
void q_timeline_start(void* self);
void q_timeline_resume(void* self);
void q_timeline_stop(void* self);
void q_timeline_set_paused(void* self, bool paused);
void q_timeline_set_current_time(void* self, int msec);
void q_timeline_toggle_direction(void* self);
void q_timeline_timer_event(void* self, void* event);
void q_timeline_on_timer_event(void* self, void (*slot)(void*, void*));
void q_timeline_qbase_timer_event(void* self, void* event);
const char* q_timeline_tr2(const char* s, const char* c);
const char* q_timeline_tr3(const char* s, const char* c, int n);
const char* q_timeline_object_name(void* self);
void q_timeline_set_object_name(void* self, const char* name);
bool q_timeline_is_widget_type(void* self);
bool q_timeline_is_window_type(void* self);
bool q_timeline_is_quick_item_type(void* self);
bool q_timeline_signals_blocked(void* self);
bool q_timeline_block_signals(void* self, bool b);
QThread* q_timeline_thread(void* self);
void q_timeline_move_to_thread(void* self, void* thread);
int32_t q_timeline_start_timer(void* self, int interval);
void q_timeline_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_timeline_children(void* self);
void q_timeline_set_parent(void* self, void* parent);
void q_timeline_install_event_filter(void* self, void* filterObj);
void q_timeline_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_timeline_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_timeline_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_timeline_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_timeline_disconnect_with_q_meta_object_connection(void* param1);
void q_timeline_dump_object_tree(void* self);
void q_timeline_dump_object_info(void* self);
bool q_timeline_set_property(void* self, const char* name, void* value);
QVariant* q_timeline_property(void* self, const char* name);
const char** q_timeline_dynamic_property_names(void* self);
QBindingStorage* q_timeline_binding_storage(void* self);
QBindingStorage* q_timeline_binding_storage2(void* self);
void q_timeline_destroyed(void* self);
void q_timeline_on_destroyed(void* self, void (*slot)(void*));
QObject* q_timeline_parent(void* self);
bool q_timeline_inherits(void* self, const char* classname);
void q_timeline_delete_later(void* self);
int32_t q_timeline_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_timeline_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_timeline_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_timeline_destroyed1(void* self, void* param1);
void q_timeline_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_timeline_event(void* self, void* event);
bool q_timeline_qbase_event(void* self, void* event);
void q_timeline_on_event(void* self, bool (*slot)(void*, void*));
bool q_timeline_event_filter(void* self, void* watched, void* event);
bool q_timeline_qbase_event_filter(void* self, void* watched, void* event);
void q_timeline_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_timeline_child_event(void* self, void* event);
void q_timeline_qbase_child_event(void* self, void* event);
void q_timeline_on_child_event(void* self, void (*slot)(void*, void*));
void q_timeline_custom_event(void* self, void* event);
void q_timeline_qbase_custom_event(void* self, void* event);
void q_timeline_on_custom_event(void* self, void (*slot)(void*, void*));
void q_timeline_connect_notify(void* self, void* signal);
void q_timeline_qbase_connect_notify(void* self, void* signal);
void q_timeline_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_timeline_disconnect_notify(void* self, void* signal);
void q_timeline_qbase_disconnect_notify(void* self, void* signal);
void q_timeline_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_timeline_sender(void* self);
QObject* q_timeline_qbase_sender(void* self);
void q_timeline_on_sender(void* self, QObject* (*slot)());
int32_t q_timeline_sender_signal_index(void* self);
int32_t q_timeline_qbase_sender_signal_index(void* self);
void q_timeline_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_timeline_receivers(void* self, const char* signal);
int32_t q_timeline_qbase_receivers(void* self, const char* signal);
void q_timeline_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_timeline_is_signal_connected(void* self, void* signal);
bool q_timeline_qbase_is_signal_connected(void* self, void* signal);
void q_timeline_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_timeline_delete(void* self);

/// https://doc.qt.io/qt-6/qtimeline.html#types

typedef enum {
    QTIMELINE_STATE_NOTRUNNING = 0,
    QTIMELINE_STATE_PAUSED = 1,
    QTIMELINE_STATE_RUNNING = 2
} QTimeLine__State;

typedef enum {
    QTIMELINE_DIRECTION_FORWARD = 0,
    QTIMELINE_DIRECTION_BACKWARD = 1
} QTimeLine__Direction;

#endif
