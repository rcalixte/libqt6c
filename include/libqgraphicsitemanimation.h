#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSITEMANIMATION_H
#define SRCQT6C_LIBQGRAPHICSITEMANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqgraphicsitem.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpoint.h"
#include <string.h>
#include "libqthread.h"
#include "libqtimeline.h"
#include "libqtransform.h"
#include "libqvariant.h"

QGraphicsItemAnimation* q_graphicsitemanimation_new();
QGraphicsItemAnimation* q_graphicsitemanimation_new2(void* parent);
QMetaObject* q_graphicsitemanimation_meta_object(void* self);
void* q_graphicsitemanimation_metacast(void* self, const char* param1);
int32_t q_graphicsitemanimation_metacall(void* self, int64_t param1, int param2, void* param3);
void q_graphicsitemanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_graphicsitemanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_graphicsitemanimation_tr(const char* s);
QGraphicsItem* q_graphicsitemanimation_item(void* self);
void q_graphicsitemanimation_set_item(void* self, void* item);
QTimeLine* q_graphicsitemanimation_time_line(void* self);
void q_graphicsitemanimation_set_time_line(void* self, void* timeLine);
QPointF* q_graphicsitemanimation_pos_at(void* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_pos_list(void* self);
void q_graphicsitemanimation_set_pos_at(void* self, double step, void* pos);
QTransform* q_graphicsitemanimation_transform_at(void* self, double step);
double q_graphicsitemanimation_rotation_at(void* self, double step);
libqt_list /* of libqt_pair  tuple of double and double  */ q_graphicsitemanimation_rotation_list(void* self);
void q_graphicsitemanimation_set_rotation_at(void* self, double step, double angle);
double q_graphicsitemanimation_x_translation_at(void* self, double step);
double q_graphicsitemanimation_y_translation_at(void* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_translation_list(void* self);
void q_graphicsitemanimation_set_translation_at(void* self, double step, double dx, double dy);
double q_graphicsitemanimation_vertical_scale_at(void* self, double step);
double q_graphicsitemanimation_horizontal_scale_at(void* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_scale_list(void* self);
void q_graphicsitemanimation_set_scale_at(void* self, double step, double sx, double sy);
double q_graphicsitemanimation_vertical_shear_at(void* self, double step);
double q_graphicsitemanimation_horizontal_shear_at(void* self, double step);
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_shear_list(void* self);
void q_graphicsitemanimation_set_shear_at(void* self, double step, double sh, double sv);
void q_graphicsitemanimation_clear(void* self);
void q_graphicsitemanimation_set_step(void* self, double x);
void q_graphicsitemanimation_before_animation_step(void* self, double step);
void q_graphicsitemanimation_on_before_animation_step(void* self, void (*slot)(void*, double));
void q_graphicsitemanimation_qbase_before_animation_step(void* self, double step);
void q_graphicsitemanimation_after_animation_step(void* self, double step);
void q_graphicsitemanimation_on_after_animation_step(void* self, void (*slot)(void*, double));
void q_graphicsitemanimation_qbase_after_animation_step(void* self, double step);
const char* q_graphicsitemanimation_tr2(const char* s, const char* c);
const char* q_graphicsitemanimation_tr3(const char* s, const char* c, int n);
const char* q_graphicsitemanimation_object_name(void* self);
void q_graphicsitemanimation_set_object_name(void* self, const char* name);
bool q_graphicsitemanimation_is_widget_type(void* self);
bool q_graphicsitemanimation_is_window_type(void* self);
bool q_graphicsitemanimation_is_quick_item_type(void* self);
bool q_graphicsitemanimation_signals_blocked(void* self);
bool q_graphicsitemanimation_block_signals(void* self, bool b);
QThread* q_graphicsitemanimation_thread(void* self);
void q_graphicsitemanimation_move_to_thread(void* self, void* thread);
int32_t q_graphicsitemanimation_start_timer(void* self, int interval);
void q_graphicsitemanimation_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_graphicsitemanimation_children(void* self);
void q_graphicsitemanimation_set_parent(void* self, void* parent);
void q_graphicsitemanimation_install_event_filter(void* self, void* filterObj);
void q_graphicsitemanimation_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_graphicsitemanimation_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_graphicsitemanimation_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_graphicsitemanimation_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_graphicsitemanimation_disconnect_with_q_meta_object_connection(void* param1);
void q_graphicsitemanimation_dump_object_tree(void* self);
void q_graphicsitemanimation_dump_object_info(void* self);
bool q_graphicsitemanimation_set_property(void* self, const char* name, void* value);
QVariant* q_graphicsitemanimation_property(void* self, const char* name);
const char** q_graphicsitemanimation_dynamic_property_names(void* self);
QBindingStorage* q_graphicsitemanimation_binding_storage(void* self);
QBindingStorage* q_graphicsitemanimation_binding_storage2(void* self);
void q_graphicsitemanimation_destroyed(void* self);
void q_graphicsitemanimation_on_destroyed(void* self, void (*slot)(void*));
QObject* q_graphicsitemanimation_parent(void* self);
bool q_graphicsitemanimation_inherits(void* self, const char* classname);
void q_graphicsitemanimation_delete_later(void* self);
int32_t q_graphicsitemanimation_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_graphicsitemanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_graphicsitemanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_graphicsitemanimation_destroyed1(void* self, void* param1);
void q_graphicsitemanimation_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_graphicsitemanimation_event(void* self, void* event);
bool q_graphicsitemanimation_qbase_event(void* self, void* event);
void q_graphicsitemanimation_on_event(void* self, bool (*slot)(void*, void*));
bool q_graphicsitemanimation_event_filter(void* self, void* watched, void* event);
bool q_graphicsitemanimation_qbase_event_filter(void* self, void* watched, void* event);
void q_graphicsitemanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_graphicsitemanimation_timer_event(void* self, void* event);
void q_graphicsitemanimation_qbase_timer_event(void* self, void* event);
void q_graphicsitemanimation_on_timer_event(void* self, void (*slot)(void*, void*));
void q_graphicsitemanimation_child_event(void* self, void* event);
void q_graphicsitemanimation_qbase_child_event(void* self, void* event);
void q_graphicsitemanimation_on_child_event(void* self, void (*slot)(void*, void*));
void q_graphicsitemanimation_custom_event(void* self, void* event);
void q_graphicsitemanimation_qbase_custom_event(void* self, void* event);
void q_graphicsitemanimation_on_custom_event(void* self, void (*slot)(void*, void*));
void q_graphicsitemanimation_connect_notify(void* self, void* signal);
void q_graphicsitemanimation_qbase_connect_notify(void* self, void* signal);
void q_graphicsitemanimation_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_graphicsitemanimation_disconnect_notify(void* self, void* signal);
void q_graphicsitemanimation_qbase_disconnect_notify(void* self, void* signal);
void q_graphicsitemanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_graphicsitemanimation_sender(void* self);
QObject* q_graphicsitemanimation_qbase_sender(void* self);
void q_graphicsitemanimation_on_sender(void* self, QObject* (*slot)());
int32_t q_graphicsitemanimation_sender_signal_index(void* self);
int32_t q_graphicsitemanimation_qbase_sender_signal_index(void* self);
void q_graphicsitemanimation_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_graphicsitemanimation_receivers(void* self, const char* signal);
int32_t q_graphicsitemanimation_qbase_receivers(void* self, const char* signal);
void q_graphicsitemanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_graphicsitemanimation_is_signal_connected(void* self, void* signal);
bool q_graphicsitemanimation_qbase_is_signal_connected(void* self, void* signal);
void q_graphicsitemanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_graphicsitemanimation_delete(void* self);

#endif
