#pragma once
#ifndef SRC_CHARTSQT6C_LIBQBOXPLOTSERIES_H
#define SRC_CHARTSQT6C_LIBQBOXPLOTSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqboxset.h"
#include "../libqbrush.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QBoxPlotSeries* q_boxplotseries_new();
QBoxPlotSeries* q_boxplotseries_new2(void* parent);
QMetaObject* q_boxplotseries_meta_object(void* self);
void* q_boxplotseries_metacast(void* self, const char* param1);
int32_t q_boxplotseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_boxplotseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_boxplotseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_boxplotseries_tr(const char* s);
bool q_boxplotseries_append(void* self, void* box);
bool q_boxplotseries_remove(void* self, void* box);
bool q_boxplotseries_take(void* self, void* box);
bool q_boxplotseries_append_with_boxes(void* self, void* boxes[]);
bool q_boxplotseries_insert(void* self, int index, void* box);
int32_t q_boxplotseries_count(void* self);
libqt_list /* of QBoxSet* */ q_boxplotseries_box_sets(void* self);
void q_boxplotseries_clear(void* self);
int64_t q_boxplotseries_type(void* self);
void q_boxplotseries_on_type(void* self, int64_t (*slot)());
int64_t q_boxplotseries_qbase_type(void* self);
void q_boxplotseries_set_box_outline_visible(void* self, bool visible);
bool q_boxplotseries_box_outline_visible(void* self);
void q_boxplotseries_set_box_width(void* self, double width);
double q_boxplotseries_box_width(void* self);
void q_boxplotseries_set_brush(void* self, void* brush);
QBrush* q_boxplotseries_brush(void* self);
void q_boxplotseries_set_pen(void* self, void* pen);
QPen* q_boxplotseries_pen(void* self);
void q_boxplotseries_clicked(void* self, void* boxset);
void q_boxplotseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_boxplotseries_hovered(void* self, bool status, void* boxset);
void q_boxplotseries_on_hovered(void* self, void (*slot)(void*, bool, void*));
void q_boxplotseries_pressed(void* self, void* boxset);
void q_boxplotseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_boxplotseries_released(void* self, void* boxset);
void q_boxplotseries_on_released(void* self, void (*slot)(void*, void*));
void q_boxplotseries_double_clicked(void* self, void* boxset);
void q_boxplotseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_boxplotseries_count_changed(void* self);
void q_boxplotseries_on_count_changed(void* self, void (*slot)(void*));
void q_boxplotseries_pen_changed(void* self);
void q_boxplotseries_on_pen_changed(void* self, void (*slot)(void*));
void q_boxplotseries_brush_changed(void* self);
void q_boxplotseries_on_brush_changed(void* self, void (*slot)(void*));
void q_boxplotseries_box_outline_visibility_changed(void* self);
void q_boxplotseries_on_box_outline_visibility_changed(void* self, void (*slot)(void*));
void q_boxplotseries_box_width_changed(void* self);
void q_boxplotseries_on_box_width_changed(void* self, void (*slot)(void*));
void q_boxplotseries_boxsets_added(void* self, void* sets[]);
void q_boxplotseries_on_boxsets_added(void* self, void (*slot)(void*, void*));
void q_boxplotseries_boxsets_removed(void* self, void* sets[]);
void q_boxplotseries_on_boxsets_removed(void* self, void (*slot)(void*, void*));
const char* q_boxplotseries_tr2(const char* s, const char* c);
const char* q_boxplotseries_tr3(const char* s, const char* c, int n);
void q_boxplotseries_set_name(void* self, const char* name);
const char* q_boxplotseries_name(void* self);
void q_boxplotseries_set_visible(void* self);
bool q_boxplotseries_is_visible(void* self);
double q_boxplotseries_opacity(void* self);
void q_boxplotseries_set_opacity(void* self, double opacity);
void q_boxplotseries_set_use_open_g_l(void* self);
bool q_boxplotseries_use_open_g_l(void* self);
QChart* q_boxplotseries_chart(void* self);
bool q_boxplotseries_attach_axis(void* self, void* axis);
bool q_boxplotseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_boxplotseries_attached_axes(void* self);
void q_boxplotseries_show(void* self);
void q_boxplotseries_hide(void* self);
void q_boxplotseries_name_changed(void* self);
void q_boxplotseries_on_name_changed(void* self, void (*slot)(void*));
void q_boxplotseries_visible_changed(void* self);
void q_boxplotseries_on_visible_changed(void* self, void (*slot)(void*));
void q_boxplotseries_opacity_changed(void* self);
void q_boxplotseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_boxplotseries_use_open_g_l_changed(void* self);
void q_boxplotseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_boxplotseries_set_visible1(void* self, bool visible);
void q_boxplotseries_set_use_open_g_l1(void* self, bool enable);
const char* q_boxplotseries_object_name(void* self);
void q_boxplotseries_set_object_name(void* self, const char* name);
bool q_boxplotseries_is_widget_type(void* self);
bool q_boxplotseries_is_window_type(void* self);
bool q_boxplotseries_is_quick_item_type(void* self);
bool q_boxplotseries_signals_blocked(void* self);
bool q_boxplotseries_block_signals(void* self, bool b);
QThread* q_boxplotseries_thread(void* self);
void q_boxplotseries_move_to_thread(void* self, void* thread);
int32_t q_boxplotseries_start_timer(void* self, int interval);
void q_boxplotseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_boxplotseries_children(void* self);
void q_boxplotseries_set_parent(void* self, void* parent);
void q_boxplotseries_install_event_filter(void* self, void* filterObj);
void q_boxplotseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_boxplotseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_boxplotseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_boxplotseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_boxplotseries_disconnect_with_q_meta_object_connection(void* param1);
void q_boxplotseries_dump_object_tree(void* self);
void q_boxplotseries_dump_object_info(void* self);
bool q_boxplotseries_set_property(void* self, const char* name, void* value);
QVariant* q_boxplotseries_property(void* self, const char* name);
const char** q_boxplotseries_dynamic_property_names(void* self);
QBindingStorage* q_boxplotseries_binding_storage(void* self);
QBindingStorage* q_boxplotseries_binding_storage2(void* self);
void q_boxplotseries_destroyed(void* self);
void q_boxplotseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_boxplotseries_parent(void* self);
bool q_boxplotseries_inherits(void* self, const char* classname);
void q_boxplotseries_delete_later(void* self);
int32_t q_boxplotseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_boxplotseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_boxplotseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_boxplotseries_destroyed1(void* self, void* param1);
void q_boxplotseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_boxplotseries_event(void* self, void* event);
bool q_boxplotseries_qbase_event(void* self, void* event);
void q_boxplotseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_boxplotseries_event_filter(void* self, void* watched, void* event);
bool q_boxplotseries_qbase_event_filter(void* self, void* watched, void* event);
void q_boxplotseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_boxplotseries_timer_event(void* self, void* event);
void q_boxplotseries_qbase_timer_event(void* self, void* event);
void q_boxplotseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_boxplotseries_child_event(void* self, void* event);
void q_boxplotseries_qbase_child_event(void* self, void* event);
void q_boxplotseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_boxplotseries_custom_event(void* self, void* event);
void q_boxplotseries_qbase_custom_event(void* self, void* event);
void q_boxplotseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_boxplotseries_connect_notify(void* self, void* signal);
void q_boxplotseries_qbase_connect_notify(void* self, void* signal);
void q_boxplotseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_boxplotseries_disconnect_notify(void* self, void* signal);
void q_boxplotseries_qbase_disconnect_notify(void* self, void* signal);
void q_boxplotseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_boxplotseries_sender(void* self);
QObject* q_boxplotseries_qbase_sender(void* self);
void q_boxplotseries_on_sender(void* self, QObject* (*slot)());
int32_t q_boxplotseries_sender_signal_index(void* self);
int32_t q_boxplotseries_qbase_sender_signal_index(void* self);
void q_boxplotseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_boxplotseries_receivers(void* self, const char* signal);
int32_t q_boxplotseries_qbase_receivers(void* self, const char* signal);
void q_boxplotseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_boxplotseries_is_signal_connected(void* self, void* signal);
bool q_boxplotseries_qbase_is_signal_connected(void* self, void* signal);
void q_boxplotseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_boxplotseries_delete(void* self);

#endif
