#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQAREASERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQAREASERIES_H

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
#include "../libqbrush.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "libqlineseries.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QAreaSeries* q_areaseries_new();
QAreaSeries* q_areaseries_new2(void* upperSeries);
QAreaSeries* q_areaseries_new3(void* parent);
QAreaSeries* q_areaseries_new4(void* upperSeries, void* lowerSeries);
QMetaObject* q_areaseries_meta_object(void* self);
void* q_areaseries_metacast(void* self, const char* param1);
int32_t q_areaseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_areaseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_areaseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_areaseries_tr(const char* s);
int64_t q_areaseries_type(void* self);
void q_areaseries_on_type(void* self, int64_t (*slot)());
int64_t q_areaseries_qbase_type(void* self);
void q_areaseries_set_upper_series(void* self, void* series);
QLineSeries* q_areaseries_upper_series(void* self);
void q_areaseries_set_lower_series(void* self, void* series);
QLineSeries* q_areaseries_lower_series(void* self);
void q_areaseries_set_pen(void* self, void* pen);
QPen* q_areaseries_pen(void* self);
void q_areaseries_set_brush(void* self, void* brush);
QBrush* q_areaseries_brush(void* self);
void q_areaseries_set_color(void* self, void* color);
QColor* q_areaseries_color(void* self);
void q_areaseries_set_border_color(void* self, void* color);
QColor* q_areaseries_border_color(void* self);
void q_areaseries_set_points_visible(void* self);
bool q_areaseries_points_visible(void* self);
void q_areaseries_set_point_labels_format(void* self, const char* format);
const char* q_areaseries_point_labels_format(void* self);
void q_areaseries_set_point_labels_visible(void* self);
bool q_areaseries_point_labels_visible(void* self);
void q_areaseries_set_point_labels_font(void* self, void* font);
QFont* q_areaseries_point_labels_font(void* self);
void q_areaseries_set_point_labels_color(void* self, void* color);
QColor* q_areaseries_point_labels_color(void* self);
void q_areaseries_set_point_labels_clipping(void* self);
bool q_areaseries_point_labels_clipping(void* self);
void q_areaseries_clicked(void* self, void* point);
void q_areaseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_areaseries_hovered(void* self, void* point, bool state);
void q_areaseries_on_hovered(void* self, void (*slot)(void*, void*, bool));
void q_areaseries_pressed(void* self, void* point);
void q_areaseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_areaseries_released(void* self, void* point);
void q_areaseries_on_released(void* self, void (*slot)(void*, void*));
void q_areaseries_double_clicked(void* self, void* point);
void q_areaseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_areaseries_selected(void* self);
void q_areaseries_on_selected(void* self, void (*slot)(void*));
void q_areaseries_color_changed(void* self, void* color);
void q_areaseries_on_color_changed(void* self, void (*slot)(void*, void*));
void q_areaseries_border_color_changed(void* self, void* color);
void q_areaseries_on_border_color_changed(void* self, void (*slot)(void*, void*));
void q_areaseries_point_labels_format_changed(void* self, const char* format);
void q_areaseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_areaseries_point_labels_visibility_changed(void* self, bool visible);
void q_areaseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));
void q_areaseries_point_labels_font_changed(void* self, void* font);
void q_areaseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_areaseries_point_labels_color_changed(void* self, void* color);
void q_areaseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_areaseries_point_labels_clipping_changed(void* self, bool clipping);
void q_areaseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));
const char* q_areaseries_tr2(const char* s, const char* c);
const char* q_areaseries_tr3(const char* s, const char* c, int n);
void q_areaseries_set_points_visible1(void* self, bool visible);
void q_areaseries_set_point_labels_visible1(void* self, bool visible);
void q_areaseries_set_point_labels_clipping1(void* self, bool enabled);
void q_areaseries_set_name(void* self, const char* name);
const char* q_areaseries_name(void* self);
void q_areaseries_set_visible(void* self);
bool q_areaseries_is_visible(void* self);
double q_areaseries_opacity(void* self);
void q_areaseries_set_opacity(void* self, double opacity);
void q_areaseries_set_use_open_g_l(void* self);
bool q_areaseries_use_open_g_l(void* self);
QChart* q_areaseries_chart(void* self);
bool q_areaseries_attach_axis(void* self, void* axis);
bool q_areaseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_areaseries_attached_axes(void* self);
void q_areaseries_show(void* self);
void q_areaseries_hide(void* self);
void q_areaseries_name_changed(void* self);
void q_areaseries_on_name_changed(void* self, void (*slot)(void*));
void q_areaseries_visible_changed(void* self);
void q_areaseries_on_visible_changed(void* self, void (*slot)(void*));
void q_areaseries_opacity_changed(void* self);
void q_areaseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_areaseries_use_open_g_l_changed(void* self);
void q_areaseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_areaseries_set_visible1(void* self, bool visible);
void q_areaseries_set_use_open_g_l1(void* self, bool enable);
const char* q_areaseries_object_name(void* self);
void q_areaseries_set_object_name(void* self, const char* name);
bool q_areaseries_is_widget_type(void* self);
bool q_areaseries_is_window_type(void* self);
bool q_areaseries_is_quick_item_type(void* self);
bool q_areaseries_signals_blocked(void* self);
bool q_areaseries_block_signals(void* self, bool b);
QThread* q_areaseries_thread(void* self);
void q_areaseries_move_to_thread(void* self, void* thread);
int32_t q_areaseries_start_timer(void* self, int interval);
void q_areaseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_areaseries_children(void* self);
void q_areaseries_set_parent(void* self, void* parent);
void q_areaseries_install_event_filter(void* self, void* filterObj);
void q_areaseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_areaseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_areaseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_areaseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_areaseries_disconnect_with_q_meta_object_connection(void* param1);
void q_areaseries_dump_object_tree(void* self);
void q_areaseries_dump_object_info(void* self);
bool q_areaseries_set_property(void* self, const char* name, void* value);
QVariant* q_areaseries_property(void* self, const char* name);
const char** q_areaseries_dynamic_property_names(void* self);
QBindingStorage* q_areaseries_binding_storage(void* self);
QBindingStorage* q_areaseries_binding_storage2(void* self);
void q_areaseries_destroyed(void* self);
void q_areaseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_areaseries_parent(void* self);
bool q_areaseries_inherits(void* self, const char* classname);
void q_areaseries_delete_later(void* self);
int32_t q_areaseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_areaseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_areaseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_areaseries_destroyed1(void* self, void* param1);
void q_areaseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_areaseries_event(void* self, void* event);
bool q_areaseries_qbase_event(void* self, void* event);
void q_areaseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_areaseries_event_filter(void* self, void* watched, void* event);
bool q_areaseries_qbase_event_filter(void* self, void* watched, void* event);
void q_areaseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_areaseries_timer_event(void* self, void* event);
void q_areaseries_qbase_timer_event(void* self, void* event);
void q_areaseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_areaseries_child_event(void* self, void* event);
void q_areaseries_qbase_child_event(void* self, void* event);
void q_areaseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_areaseries_custom_event(void* self, void* event);
void q_areaseries_qbase_custom_event(void* self, void* event);
void q_areaseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_areaseries_connect_notify(void* self, void* signal);
void q_areaseries_qbase_connect_notify(void* self, void* signal);
void q_areaseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_areaseries_disconnect_notify(void* self, void* signal);
void q_areaseries_qbase_disconnect_notify(void* self, void* signal);
void q_areaseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_areaseries_sender(void* self);
QObject* q_areaseries_qbase_sender(void* self);
void q_areaseries_on_sender(void* self, QObject* (*slot)());
int32_t q_areaseries_sender_signal_index(void* self);
int32_t q_areaseries_qbase_sender_signal_index(void* self);
void q_areaseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_areaseries_receivers(void* self, const char* signal);
int32_t q_areaseries_qbase_receivers(void* self, const char* signal);
void q_areaseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_areaseries_is_signal_connected(void* self, void* signal);
bool q_areaseries_qbase_is_signal_connected(void* self, void* signal);
void q_areaseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_areaseries_delete(void* self);

#endif
