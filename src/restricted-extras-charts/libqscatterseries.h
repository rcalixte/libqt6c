#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSCATTERSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSCATTERSERIES_H

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
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqxyseries.h"

QScatterSeries* q_scatterseries_new();
QScatterSeries* q_scatterseries_new2(void* parent);
QMetaObject* q_scatterseries_meta_object(void* self);
void* q_scatterseries_metacast(void* self, const char* param1);
int32_t q_scatterseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scatterseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scatterseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scatterseries_tr(const char* s);
int64_t q_scatterseries_type(void* self);
void q_scatterseries_on_type(void* self, int64_t (*slot)());
int64_t q_scatterseries_qbase_type(void* self);
void q_scatterseries_set_pen(void* self, void* pen);
void q_scatterseries_on_set_pen(void* self, void (*slot)(void*, void*));
void q_scatterseries_qbase_set_pen(void* self, void* pen);
void q_scatterseries_set_brush(void* self, void* brush);
void q_scatterseries_on_set_brush(void* self, void (*slot)(void*, void*));
void q_scatterseries_qbase_set_brush(void* self, void* brush);
QBrush* q_scatterseries_brush(void* self);
void q_scatterseries_set_color(void* self, void* color);
void q_scatterseries_on_set_color(void* self, void (*slot)(void*, void*));
void q_scatterseries_qbase_set_color(void* self, void* color);
QColor* q_scatterseries_color(void* self);
void q_scatterseries_on_color(void* self, QColor* (*slot)());
QColor* q_scatterseries_qbase_color(void* self);
void q_scatterseries_set_border_color(void* self, void* color);
QColor* q_scatterseries_border_color(void* self);
int64_t q_scatterseries_marker_shape(void* self);
void q_scatterseries_set_marker_shape(void* self, int64_t shape);
double q_scatterseries_marker_size(void* self);
void q_scatterseries_set_marker_size(void* self, double size);
void q_scatterseries_color_changed(void* self, void* color);
void q_scatterseries_on_color_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_border_color_changed(void* self, void* color);
void q_scatterseries_on_border_color_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_marker_shape_changed(void* self, int64_t shape);
void q_scatterseries_on_marker_shape_changed(void* self, void (*slot)(void*, int64_t));
void q_scatterseries_marker_size_changed(void* self, double size);
void q_scatterseries_on_marker_size_changed(void* self, void (*slot)(void*, double));
const char* q_scatterseries_tr2(const char* s, const char* c);
const char* q_scatterseries_tr3(const char* s, const char* c, int n);
void q_scatterseries_append(void* self, double x, double y);
void q_scatterseries_append_with_point(void* self, void* point);
void q_scatterseries_append_with_points(void* self, void* points[]);
void q_scatterseries_replace(void* self, double oldX, double oldY, double newX, double newY);
void q_scatterseries_replace2(void* self, void* oldPoint, void* newPoint);
void q_scatterseries_replace3(void* self, int index, double newX, double newY);
void q_scatterseries_replace4(void* self, int index, void* newPoint);
void q_scatterseries_remove(void* self, double x, double y);
void q_scatterseries_remove_with_point(void* self, void* point);
void q_scatterseries_remove_with_index(void* self, int index);
void q_scatterseries_remove_points(void* self, int index, int count);
void q_scatterseries_insert(void* self, int index, void* point);
void q_scatterseries_clear(void* self);
int32_t q_scatterseries_count(void* self);
libqt_list /* of QPointF* */ q_scatterseries_points(void* self);
libqt_list /* of QPointF* */ q_scatterseries_points_vector(void* self);
QPointF* q_scatterseries_at(void* self, int index);
QXYSeries* q_scatterseries_operator_shift_left(void* self, void* point);
QXYSeries* q_scatterseries_operator_shift_left_with_points(void* self, void* points[]);
QPen* q_scatterseries_pen(void* self);
void q_scatterseries_set_selected_color(void* self, void* color);
QColor* q_scatterseries_selected_color(void* self);
void q_scatterseries_set_points_visible(void* self);
bool q_scatterseries_points_visible(void* self);
void q_scatterseries_set_point_labels_format(void* self, const char* format);
const char* q_scatterseries_point_labels_format(void* self);
void q_scatterseries_set_point_labels_visible(void* self);
bool q_scatterseries_point_labels_visible(void* self);
void q_scatterseries_set_point_labels_font(void* self, void* font);
QFont* q_scatterseries_point_labels_font(void* self);
void q_scatterseries_set_point_labels_color(void* self, void* color);
QColor* q_scatterseries_point_labels_color(void* self);
void q_scatterseries_set_point_labels_clipping(void* self);
bool q_scatterseries_point_labels_clipping(void* self);
void q_scatterseries_replace_with_points(void* self, void* points[]);
bool q_scatterseries_is_point_selected(void* self, int index);
void q_scatterseries_select_point(void* self, int index);
void q_scatterseries_deselect_point(void* self, int index);
void q_scatterseries_set_point_selected(void* self, int index, bool selected);
void q_scatterseries_select_all_points(void* self);
void q_scatterseries_deselect_all_points(void* self);
void q_scatterseries_select_points(void* self, int* indexes[]);
void q_scatterseries_deselect_points(void* self, int* indexes[]);
void q_scatterseries_toggle_selection(void* self, int* indexes[]);
libqt_list /* of int */ q_scatterseries_selected_points(void* self);
void q_scatterseries_set_light_marker(void* self, void* lightMarker);
QImage* q_scatterseries_light_marker(void* self);
void q_scatterseries_set_selected_light_marker(void* self, void* selectedLightMarker);
QImage* q_scatterseries_selected_light_marker(void* self);
void q_scatterseries_set_best_fit_line_visible(void* self);
bool q_scatterseries_best_fit_line_visible(void* self);
libqt_pair /* tuple of double and double */ q_scatterseries_best_fit_line_equation(void* self, bool* ok);
void q_scatterseries_set_best_fit_line_pen(void* self, void* pen);
QPen* q_scatterseries_best_fit_line_pen(void* self);
void q_scatterseries_set_best_fit_line_color(void* self, void* color);
QColor* q_scatterseries_best_fit_line_color(void* self);
void q_scatterseries_clear_point_configuration(void* self, int index);
void q_scatterseries_clear_point_configuration2(void* self, int index, int64_t key);
void q_scatterseries_clear_points_configuration(void* self);
void q_scatterseries_clear_points_configuration_with_key(void* self, int64_t key);
void q_scatterseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);
void q_scatterseries_set_point_configuration2(void* self, int index, int64_t key, void* value);
void q_scatterseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);
libqt_map /* of int64_t to QVariant* */ q_scatterseries_point_configuration(void* self, int index);
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_scatterseries_points_configuration(void* self);
void q_scatterseries_size_by(void* self, double* sourceData[], double minSize, double maxSize);
void q_scatterseries_color_by(void* self, double* sourceData[]);
void q_scatterseries_clicked(void* self, void* point);
void q_scatterseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_scatterseries_hovered(void* self, void* point, bool state);
void q_scatterseries_on_hovered(void* self, void (*slot)(void*, void*, bool));
void q_scatterseries_pressed(void* self, void* point);
void q_scatterseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_scatterseries_released(void* self, void* point);
void q_scatterseries_on_released(void* self, void (*slot)(void*, void*));
void q_scatterseries_double_clicked(void* self, void* point);
void q_scatterseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_scatterseries_point_replaced(void* self, int index);
void q_scatterseries_on_point_replaced(void* self, void (*slot)(void*, int));
void q_scatterseries_point_removed(void* self, int index);
void q_scatterseries_on_point_removed(void* self, void (*slot)(void*, int));
void q_scatterseries_point_added(void* self, int index);
void q_scatterseries_on_point_added(void* self, void (*slot)(void*, int));
void q_scatterseries_selected_color_changed(void* self, void* color);
void q_scatterseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_points_replaced(void* self);
void q_scatterseries_on_points_replaced(void* self, void (*slot)(void*));
void q_scatterseries_point_labels_format_changed(void* self, const char* format);
void q_scatterseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_scatterseries_point_labels_visibility_changed(void* self, bool visible);
void q_scatterseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));
void q_scatterseries_point_labels_font_changed(void* self, void* font);
void q_scatterseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_point_labels_color_changed(void* self, void* color);
void q_scatterseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_point_labels_clipping_changed(void* self, bool clipping);
void q_scatterseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));
void q_scatterseries_points_removed(void* self, int index, int count);
void q_scatterseries_on_points_removed(void* self, void (*slot)(void*, int, int));
void q_scatterseries_pen_changed(void* self, void* pen);
void q_scatterseries_on_pen_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_selected_points_changed(void* self);
void q_scatterseries_on_selected_points_changed(void* self, void (*slot)(void*));
void q_scatterseries_light_marker_changed(void* self, void* lightMarker);
void q_scatterseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_selected_light_marker_changed(void* self, void* selectedLightMarker);
void q_scatterseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_best_fit_line_visibility_changed(void* self, bool visible);
void q_scatterseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));
void q_scatterseries_best_fit_line_pen_changed(void* self, void* pen);
void q_scatterseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_best_fit_line_color_changed(void* self, void* color);
void q_scatterseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));
void q_scatterseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);
void q_scatterseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));
void q_scatterseries_set_points_visible1(void* self, bool visible);
void q_scatterseries_set_point_labels_visible1(void* self, bool visible);
void q_scatterseries_set_point_labels_clipping1(void* self, bool enabled);
void q_scatterseries_set_best_fit_line_visible1(void* self, bool visible);
void q_scatterseries_color_by2(void* self, double* sourceData[], void* gradient);
void q_scatterseries_set_name(void* self, const char* name);
const char* q_scatterseries_name(void* self);
void q_scatterseries_set_visible(void* self);
bool q_scatterseries_is_visible(void* self);
double q_scatterseries_opacity(void* self);
void q_scatterseries_set_opacity(void* self, double opacity);
void q_scatterseries_set_use_open_g_l(void* self);
bool q_scatterseries_use_open_g_l(void* self);
QChart* q_scatterseries_chart(void* self);
bool q_scatterseries_attach_axis(void* self, void* axis);
bool q_scatterseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_scatterseries_attached_axes(void* self);
void q_scatterseries_show(void* self);
void q_scatterseries_hide(void* self);
void q_scatterseries_name_changed(void* self);
void q_scatterseries_on_name_changed(void* self, void (*slot)(void*));
void q_scatterseries_visible_changed(void* self);
void q_scatterseries_on_visible_changed(void* self, void (*slot)(void*));
void q_scatterseries_opacity_changed(void* self);
void q_scatterseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_scatterseries_use_open_g_l_changed(void* self);
void q_scatterseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_scatterseries_set_visible1(void* self, bool visible);
void q_scatterseries_set_use_open_g_l1(void* self, bool enable);
const char* q_scatterseries_object_name(void* self);
void q_scatterseries_set_object_name(void* self, const char* name);
bool q_scatterseries_is_widget_type(void* self);
bool q_scatterseries_is_window_type(void* self);
bool q_scatterseries_is_quick_item_type(void* self);
bool q_scatterseries_signals_blocked(void* self);
bool q_scatterseries_block_signals(void* self, bool b);
QThread* q_scatterseries_thread(void* self);
void q_scatterseries_move_to_thread(void* self, void* thread);
int32_t q_scatterseries_start_timer(void* self, int interval);
void q_scatterseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scatterseries_children(void* self);
void q_scatterseries_set_parent(void* self, void* parent);
void q_scatterseries_install_event_filter(void* self, void* filterObj);
void q_scatterseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scatterseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scatterseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scatterseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scatterseries_disconnect_with_q_meta_object_connection(void* param1);
void q_scatterseries_dump_object_tree(void* self);
void q_scatterseries_dump_object_info(void* self);
bool q_scatterseries_set_property(void* self, const char* name, void* value);
QVariant* q_scatterseries_property(void* self, const char* name);
const char** q_scatterseries_dynamic_property_names(void* self);
QBindingStorage* q_scatterseries_binding_storage(void* self);
QBindingStorage* q_scatterseries_binding_storage2(void* self);
void q_scatterseries_destroyed(void* self);
void q_scatterseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scatterseries_parent(void* self);
bool q_scatterseries_inherits(void* self, const char* classname);
void q_scatterseries_delete_later(void* self);
int32_t q_scatterseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scatterseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scatterseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scatterseries_destroyed1(void* self, void* param1);
void q_scatterseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_scatterseries_event(void* self, void* event);
bool q_scatterseries_qbase_event(void* self, void* event);
void q_scatterseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_scatterseries_event_filter(void* self, void* watched, void* event);
bool q_scatterseries_qbase_event_filter(void* self, void* watched, void* event);
void q_scatterseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_scatterseries_timer_event(void* self, void* event);
void q_scatterseries_qbase_timer_event(void* self, void* event);
void q_scatterseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scatterseries_child_event(void* self, void* event);
void q_scatterseries_qbase_child_event(void* self, void* event);
void q_scatterseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_scatterseries_custom_event(void* self, void* event);
void q_scatterseries_qbase_custom_event(void* self, void* event);
void q_scatterseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scatterseries_connect_notify(void* self, void* signal);
void q_scatterseries_qbase_connect_notify(void* self, void* signal);
void q_scatterseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scatterseries_disconnect_notify(void* self, void* signal);
void q_scatterseries_qbase_disconnect_notify(void* self, void* signal);
void q_scatterseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_scatterseries_sender(void* self);
QObject* q_scatterseries_qbase_sender(void* self);
void q_scatterseries_on_sender(void* self, QObject* (*slot)());
int32_t q_scatterseries_sender_signal_index(void* self);
int32_t q_scatterseries_qbase_sender_signal_index(void* self);
void q_scatterseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scatterseries_receivers(void* self, const char* signal);
int32_t q_scatterseries_qbase_receivers(void* self, const char* signal);
void q_scatterseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scatterseries_is_signal_connected(void* self, void* signal);
bool q_scatterseries_qbase_is_signal_connected(void* self, void* signal);
void q_scatterseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scatterseries_delete(void* self);

/// https://doc.qt.io/qt-6/qscatterseries.html#types

typedef enum {
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPECIRCLE = 0,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPERECTANGLE = 1,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPEROTATEDRECTANGLE = 2,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPETRIANGLE = 3,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPESTAR = 4,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPEPENTAGON = 5
} QScatterSeries__MarkerShape;

#endif
