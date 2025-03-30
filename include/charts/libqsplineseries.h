#pragma once
#ifndef SRC_CHARTSQT6C_LIBQSPLINESERIES_H
#define SRC_CHARTSQT6C_LIBQSPLINESERIES_H

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
#include "../libqimage.h"
#include "libqlineseries.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqxyseries.h"

QSplineSeries* q_splineseries_new();
QSplineSeries* q_splineseries_new2(void* parent);
QMetaObject* q_splineseries_meta_object(void* self);
void* q_splineseries_metacast(void* self, const char* param1);
int32_t q_splineseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_splineseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_splineseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_splineseries_tr(const char* s);
int64_t q_splineseries_type(void* self);
void q_splineseries_on_type(void* self, int64_t (*slot)());
int64_t q_splineseries_qbase_type(void* self);
const char* q_splineseries_tr2(const char* s, const char* c);
const char* q_splineseries_tr3(const char* s, const char* c, int n);
void q_splineseries_append(void* self, double x, double y);
void q_splineseries_append_with_point(void* self, void* point);
void q_splineseries_append_with_points(void* self, void* points[]);
void q_splineseries_replace(void* self, double oldX, double oldY, double newX, double newY);
void q_splineseries_replace2(void* self, void* oldPoint, void* newPoint);
void q_splineseries_replace3(void* self, int index, double newX, double newY);
void q_splineseries_replace4(void* self, int index, void* newPoint);
void q_splineseries_remove(void* self, double x, double y);
void q_splineseries_remove_with_point(void* self, void* point);
void q_splineseries_remove_with_index(void* self, int index);
void q_splineseries_remove_points(void* self, int index, int count);
void q_splineseries_insert(void* self, int index, void* point);
void q_splineseries_clear(void* self);
int32_t q_splineseries_count(void* self);
libqt_list /* of QPointF* */ q_splineseries_points(void* self);
libqt_list /* of QPointF* */ q_splineseries_points_vector(void* self);
QPointF* q_splineseries_at(void* self, int index);
QXYSeries* q_splineseries_operator_shift_left(void* self, void* point);
QXYSeries* q_splineseries_operator_shift_left_with_points(void* self, void* points[]);
QPen* q_splineseries_pen(void* self);
QBrush* q_splineseries_brush(void* self);
void q_splineseries_set_selected_color(void* self, void* color);
QColor* q_splineseries_selected_color(void* self);
void q_splineseries_set_points_visible(void* self);
bool q_splineseries_points_visible(void* self);
void q_splineseries_set_point_labels_format(void* self, const char* format);
const char* q_splineseries_point_labels_format(void* self);
void q_splineseries_set_point_labels_visible(void* self);
bool q_splineseries_point_labels_visible(void* self);
void q_splineseries_set_point_labels_font(void* self, void* font);
QFont* q_splineseries_point_labels_font(void* self);
void q_splineseries_set_point_labels_color(void* self, void* color);
QColor* q_splineseries_point_labels_color(void* self);
void q_splineseries_set_point_labels_clipping(void* self);
bool q_splineseries_point_labels_clipping(void* self);
void q_splineseries_replace_with_points(void* self, void* points[]);
bool q_splineseries_is_point_selected(void* self, int index);
void q_splineseries_select_point(void* self, int index);
void q_splineseries_deselect_point(void* self, int index);
void q_splineseries_set_point_selected(void* self, int index, bool selected);
void q_splineseries_select_all_points(void* self);
void q_splineseries_deselect_all_points(void* self);
void q_splineseries_select_points(void* self, int* indexes[]);
void q_splineseries_deselect_points(void* self, int* indexes[]);
void q_splineseries_toggle_selection(void* self, int* indexes[]);
libqt_list /* of int */ q_splineseries_selected_points(void* self);
void q_splineseries_set_light_marker(void* self, void* lightMarker);
QImage* q_splineseries_light_marker(void* self);
void q_splineseries_set_selected_light_marker(void* self, void* selectedLightMarker);
QImage* q_splineseries_selected_light_marker(void* self);
void q_splineseries_set_marker_size(void* self, double size);
double q_splineseries_marker_size(void* self);
void q_splineseries_set_best_fit_line_visible(void* self);
bool q_splineseries_best_fit_line_visible(void* self);
libqt_pair /* tuple of double and double */ q_splineseries_best_fit_line_equation(void* self, bool* ok);
void q_splineseries_set_best_fit_line_pen(void* self, void* pen);
QPen* q_splineseries_best_fit_line_pen(void* self);
void q_splineseries_set_best_fit_line_color(void* self, void* color);
QColor* q_splineseries_best_fit_line_color(void* self);
void q_splineseries_clear_point_configuration(void* self, int index);
void q_splineseries_clear_point_configuration2(void* self, int index, int64_t key);
void q_splineseries_clear_points_configuration(void* self);
void q_splineseries_clear_points_configuration_with_key(void* self, int64_t key);
void q_splineseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);
void q_splineseries_set_point_configuration2(void* self, int index, int64_t key, void* value);
void q_splineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);
libqt_map /* of int64_t to QVariant* */ q_splineseries_point_configuration(void* self, int index);
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_splineseries_points_configuration(void* self);
void q_splineseries_size_by(void* self, double* sourceData[], double minSize, double maxSize);
void q_splineseries_color_by(void* self, double* sourceData[]);
void q_splineseries_clicked(void* self, void* point);
void q_splineseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_splineseries_hovered(void* self, void* point, bool state);
void q_splineseries_on_hovered(void* self, void (*slot)(void*, void*, bool));
void q_splineseries_pressed(void* self, void* point);
void q_splineseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_splineseries_released(void* self, void* point);
void q_splineseries_on_released(void* self, void (*slot)(void*, void*));
void q_splineseries_double_clicked(void* self, void* point);
void q_splineseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_splineseries_point_replaced(void* self, int index);
void q_splineseries_on_point_replaced(void* self, void (*slot)(void*, int));
void q_splineseries_point_removed(void* self, int index);
void q_splineseries_on_point_removed(void* self, void (*slot)(void*, int));
void q_splineseries_point_added(void* self, int index);
void q_splineseries_on_point_added(void* self, void (*slot)(void*, int));
void q_splineseries_color_changed(void* self, void* color);
void q_splineseries_on_color_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_selected_color_changed(void* self, void* color);
void q_splineseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_points_replaced(void* self);
void q_splineseries_on_points_replaced(void* self, void (*slot)(void*));
void q_splineseries_point_labels_format_changed(void* self, const char* format);
void q_splineseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_splineseries_point_labels_visibility_changed(void* self, bool visible);
void q_splineseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));
void q_splineseries_point_labels_font_changed(void* self, void* font);
void q_splineseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_point_labels_color_changed(void* self, void* color);
void q_splineseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_point_labels_clipping_changed(void* self, bool clipping);
void q_splineseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));
void q_splineseries_points_removed(void* self, int index, int count);
void q_splineseries_on_points_removed(void* self, void (*slot)(void*, int, int));
void q_splineseries_pen_changed(void* self, void* pen);
void q_splineseries_on_pen_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_selected_points_changed(void* self);
void q_splineseries_on_selected_points_changed(void* self, void (*slot)(void*));
void q_splineseries_light_marker_changed(void* self, void* lightMarker);
void q_splineseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_selected_light_marker_changed(void* self, void* selectedLightMarker);
void q_splineseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_best_fit_line_visibility_changed(void* self, bool visible);
void q_splineseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));
void q_splineseries_best_fit_line_pen_changed(void* self, void* pen);
void q_splineseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_best_fit_line_color_changed(void* self, void* color);
void q_splineseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));
void q_splineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);
void q_splineseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));
void q_splineseries_marker_size_changed(void* self, double size);
void q_splineseries_on_marker_size_changed(void* self, void (*slot)(void*, double));
void q_splineseries_set_points_visible1(void* self, bool visible);
void q_splineseries_set_point_labels_visible1(void* self, bool visible);
void q_splineseries_set_point_labels_clipping1(void* self, bool enabled);
void q_splineseries_set_best_fit_line_visible1(void* self, bool visible);
void q_splineseries_color_by2(void* self, double* sourceData[], void* gradient);
void q_splineseries_set_name(void* self, const char* name);
const char* q_splineseries_name(void* self);
void q_splineseries_set_visible(void* self);
bool q_splineseries_is_visible(void* self);
double q_splineseries_opacity(void* self);
void q_splineseries_set_opacity(void* self, double opacity);
void q_splineseries_set_use_open_g_l(void* self);
bool q_splineseries_use_open_g_l(void* self);
QChart* q_splineseries_chart(void* self);
bool q_splineseries_attach_axis(void* self, void* axis);
bool q_splineseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_splineseries_attached_axes(void* self);
void q_splineseries_show(void* self);
void q_splineseries_hide(void* self);
void q_splineseries_name_changed(void* self);
void q_splineseries_on_name_changed(void* self, void (*slot)(void*));
void q_splineseries_visible_changed(void* self);
void q_splineseries_on_visible_changed(void* self, void (*slot)(void*));
void q_splineseries_opacity_changed(void* self);
void q_splineseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_splineseries_use_open_g_l_changed(void* self);
void q_splineseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_splineseries_set_visible1(void* self, bool visible);
void q_splineseries_set_use_open_g_l1(void* self, bool enable);
const char* q_splineseries_object_name(void* self);
void q_splineseries_set_object_name(void* self, const char* name);
bool q_splineseries_is_widget_type(void* self);
bool q_splineseries_is_window_type(void* self);
bool q_splineseries_is_quick_item_type(void* self);
bool q_splineseries_signals_blocked(void* self);
bool q_splineseries_block_signals(void* self, bool b);
QThread* q_splineseries_thread(void* self);
void q_splineseries_move_to_thread(void* self, void* thread);
int32_t q_splineseries_start_timer(void* self, int interval);
void q_splineseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_splineseries_children(void* self);
void q_splineseries_set_parent(void* self, void* parent);
void q_splineseries_install_event_filter(void* self, void* filterObj);
void q_splineseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_splineseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_splineseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_splineseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_splineseries_disconnect_with_q_meta_object_connection(void* param1);
void q_splineseries_dump_object_tree(void* self);
void q_splineseries_dump_object_info(void* self);
bool q_splineseries_set_property(void* self, const char* name, void* value);
QVariant* q_splineseries_property(void* self, const char* name);
const char** q_splineseries_dynamic_property_names(void* self);
QBindingStorage* q_splineseries_binding_storage(void* self);
QBindingStorage* q_splineseries_binding_storage2(void* self);
void q_splineseries_destroyed(void* self);
void q_splineseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_splineseries_parent(void* self);
bool q_splineseries_inherits(void* self, const char* classname);
void q_splineseries_delete_later(void* self);
int32_t q_splineseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_splineseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_splineseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_splineseries_destroyed1(void* self, void* param1);
void q_splineseries_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_splineseries_set_pen(void* self, void* pen);
void q_splineseries_qbase_set_pen(void* self, void* pen);
void q_splineseries_on_set_pen(void* self, void (*slot)(void*, void*));
void q_splineseries_set_brush(void* self, void* brush);
void q_splineseries_qbase_set_brush(void* self, void* brush);
void q_splineseries_on_set_brush(void* self, void (*slot)(void*, void*));
void q_splineseries_set_color(void* self, void* color);
void q_splineseries_qbase_set_color(void* self, void* color);
void q_splineseries_on_set_color(void* self, void (*slot)(void*, void*));
QColor* q_splineseries_color(void* self);
QColor* q_splineseries_qbase_color(void* self);
void q_splineseries_on_color(void* self, QColor* (*slot)());
bool q_splineseries_event(void* self, void* event);
bool q_splineseries_qbase_event(void* self, void* event);
void q_splineseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_splineseries_event_filter(void* self, void* watched, void* event);
bool q_splineseries_qbase_event_filter(void* self, void* watched, void* event);
void q_splineseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_splineseries_timer_event(void* self, void* event);
void q_splineseries_qbase_timer_event(void* self, void* event);
void q_splineseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_splineseries_child_event(void* self, void* event);
void q_splineseries_qbase_child_event(void* self, void* event);
void q_splineseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_splineseries_custom_event(void* self, void* event);
void q_splineseries_qbase_custom_event(void* self, void* event);
void q_splineseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_splineseries_connect_notify(void* self, void* signal);
void q_splineseries_qbase_connect_notify(void* self, void* signal);
void q_splineseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_splineseries_disconnect_notify(void* self, void* signal);
void q_splineseries_qbase_disconnect_notify(void* self, void* signal);
void q_splineseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_splineseries_sender(void* self);
QObject* q_splineseries_qbase_sender(void* self);
void q_splineseries_on_sender(void* self, QObject* (*slot)());
int32_t q_splineseries_sender_signal_index(void* self);
int32_t q_splineseries_qbase_sender_signal_index(void* self);
void q_splineseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_splineseries_receivers(void* self, const char* signal);
int32_t q_splineseries_qbase_receivers(void* self, const char* signal);
void q_splineseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_splineseries_is_signal_connected(void* self, void* signal);
bool q_splineseries_qbase_is_signal_connected(void* self, void* signal);
void q_splineseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_splineseries_delete(void* self);

#endif
