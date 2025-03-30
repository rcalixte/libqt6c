#pragma once
#ifndef SRC_CHARTSQT6C_LIBQBOXSET_H
#define SRC_CHARTSQT6C_LIBQBOXSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QBoxSet* q_boxset_new();
QBoxSet* q_boxset_new2(double le, double lq, double m, double uq, double ue);
QBoxSet* q_boxset_new3(const char* label);
QBoxSet* q_boxset_new4(const char* label, void* parent);
QBoxSet* q_boxset_new5(double le, double lq, double m, double uq, double ue, const char* label);
QBoxSet* q_boxset_new6(double le, double lq, double m, double uq, double ue, const char* label, void* parent);
QMetaObject* q_boxset_meta_object(void* self);
void* q_boxset_metacast(void* self, const char* param1);
int32_t q_boxset_metacall(void* self, int64_t param1, int param2, void* param3);
void q_boxset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_boxset_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_boxset_tr(const char* s);
void q_boxset_append(void* self, double value);
void q_boxset_append_with_values(void* self, double* values[]);
void q_boxset_clear(void* self);
void q_boxset_set_label(void* self, const char* label);
const char* q_boxset_label(void* self);
QBoxSet* q_boxset_operator_shift_left(void* self, double* value);
void q_boxset_set_value(void* self, int index, double value);
double q_boxset_at(void* self, int index);
double q_boxset_operator_subscript(void* self, int index);
int32_t q_boxset_count(void* self);
void q_boxset_set_pen(void* self, void* pen);
QPen* q_boxset_pen(void* self);
void q_boxset_set_brush(void* self, void* brush);
QBrush* q_boxset_brush(void* self);
void q_boxset_clicked(void* self);
void q_boxset_on_clicked(void* self, void (*slot)(void*));
void q_boxset_hovered(void* self, bool status);
void q_boxset_on_hovered(void* self, void (*slot)(void*, bool));
void q_boxset_pressed(void* self);
void q_boxset_on_pressed(void* self, void (*slot)(void*));
void q_boxset_released(void* self);
void q_boxset_on_released(void* self, void (*slot)(void*));
void q_boxset_double_clicked(void* self);
void q_boxset_on_double_clicked(void* self, void (*slot)(void*));
void q_boxset_pen_changed(void* self);
void q_boxset_on_pen_changed(void* self, void (*slot)(void*));
void q_boxset_brush_changed(void* self);
void q_boxset_on_brush_changed(void* self, void (*slot)(void*));
void q_boxset_values_changed(void* self);
void q_boxset_on_values_changed(void* self, void (*slot)(void*));
void q_boxset_value_changed(void* self, int index);
void q_boxset_on_value_changed(void* self, void (*slot)(void*, int));
void q_boxset_cleared(void* self);
void q_boxset_on_cleared(void* self, void (*slot)(void*));
const char* q_boxset_tr2(const char* s, const char* c);
const char* q_boxset_tr3(const char* s, const char* c, int n);
const char* q_boxset_object_name(void* self);
void q_boxset_set_object_name(void* self, const char* name);
bool q_boxset_is_widget_type(void* self);
bool q_boxset_is_window_type(void* self);
bool q_boxset_is_quick_item_type(void* self);
bool q_boxset_signals_blocked(void* self);
bool q_boxset_block_signals(void* self, bool b);
QThread* q_boxset_thread(void* self);
void q_boxset_move_to_thread(void* self, void* thread);
int32_t q_boxset_start_timer(void* self, int interval);
void q_boxset_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_boxset_children(void* self);
void q_boxset_set_parent(void* self, void* parent);
void q_boxset_install_event_filter(void* self, void* filterObj);
void q_boxset_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_boxset_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_boxset_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_boxset_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_boxset_disconnect_with_q_meta_object_connection(void* param1);
void q_boxset_dump_object_tree(void* self);
void q_boxset_dump_object_info(void* self);
bool q_boxset_set_property(void* self, const char* name, void* value);
QVariant* q_boxset_property(void* self, const char* name);
const char** q_boxset_dynamic_property_names(void* self);
QBindingStorage* q_boxset_binding_storage(void* self);
QBindingStorage* q_boxset_binding_storage2(void* self);
void q_boxset_destroyed(void* self);
void q_boxset_on_destroyed(void* self, void (*slot)(void*));
QObject* q_boxset_parent(void* self);
bool q_boxset_inherits(void* self, const char* classname);
void q_boxset_delete_later(void* self);
int32_t q_boxset_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_boxset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_boxset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_boxset_destroyed1(void* self, void* param1);
void q_boxset_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_boxset_event(void* self, void* event);
bool q_boxset_qbase_event(void* self, void* event);
void q_boxset_on_event(void* self, bool (*slot)(void*, void*));
bool q_boxset_event_filter(void* self, void* watched, void* event);
bool q_boxset_qbase_event_filter(void* self, void* watched, void* event);
void q_boxset_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_boxset_timer_event(void* self, void* event);
void q_boxset_qbase_timer_event(void* self, void* event);
void q_boxset_on_timer_event(void* self, void (*slot)(void*, void*));
void q_boxset_child_event(void* self, void* event);
void q_boxset_qbase_child_event(void* self, void* event);
void q_boxset_on_child_event(void* self, void (*slot)(void*, void*));
void q_boxset_custom_event(void* self, void* event);
void q_boxset_qbase_custom_event(void* self, void* event);
void q_boxset_on_custom_event(void* self, void (*slot)(void*, void*));
void q_boxset_connect_notify(void* self, void* signal);
void q_boxset_qbase_connect_notify(void* self, void* signal);
void q_boxset_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_boxset_disconnect_notify(void* self, void* signal);
void q_boxset_qbase_disconnect_notify(void* self, void* signal);
void q_boxset_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_boxset_sender(void* self);
QObject* q_boxset_qbase_sender(void* self);
void q_boxset_on_sender(void* self, QObject* (*slot)());
int32_t q_boxset_sender_signal_index(void* self);
int32_t q_boxset_qbase_sender_signal_index(void* self);
void q_boxset_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_boxset_receivers(void* self, const char* signal);
int32_t q_boxset_qbase_receivers(void* self, const char* signal);
void q_boxset_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_boxset_is_signal_connected(void* self, void* signal);
bool q_boxset_qbase_is_signal_connected(void* self, void* signal);
void q_boxset_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_boxset_delete(void* self);

/// https://doc.qt.io/qt-6/qboxset.html#types

typedef enum {
    QBOXSET_VALUEPOSITIONS_LOWEREXTREME = 0,
    QBOXSET_VALUEPOSITIONS_LOWERQUARTILE = 1,
    QBOXSET_VALUEPOSITIONS_MEDIAN = 2,
    QBOXSET_VALUEPOSITIONS_UPPERQUARTILE = 3,
    QBOXSET_VALUEPOSITIONS_UPPEREXTREME = 4
} QBoxSet__ValuePositions;

#endif
