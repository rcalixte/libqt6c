#pragma once
#ifndef SRC_CHARTSQT6C_LIBQXYSERIES_H
#define SRC_CHARTSQT6C_LIBQXYSERIES_H

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

QMetaObject* q_xyseries_meta_object(void* self);
void* q_xyseries_metacast(void* self, const char* param1);
int32_t q_xyseries_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_xyseries_tr(const char* s);
void q_xyseries_append(void* self, double x, double y);
void q_xyseries_append_with_point(void* self, void* point);
void q_xyseries_append_with_points(void* self, void* points[]);
void q_xyseries_replace(void* self, double oldX, double oldY, double newX, double newY);
void q_xyseries_replace2(void* self, void* oldPoint, void* newPoint);
void q_xyseries_replace3(void* self, int index, double newX, double newY);
void q_xyseries_replace4(void* self, int index, void* newPoint);
void q_xyseries_remove(void* self, double x, double y);
void q_xyseries_remove_with_point(void* self, void* point);
void q_xyseries_remove_with_index(void* self, int index);
void q_xyseries_remove_points(void* self, int index, int count);
void q_xyseries_insert(void* self, int index, void* point);
void q_xyseries_clear(void* self);
int32_t q_xyseries_count(void* self);
libqt_list /* of QPointF* */ q_xyseries_points(void* self);
libqt_list /* of QPointF* */ q_xyseries_points_vector(void* self);
QPointF* q_xyseries_at(void* self, int index);
QXYSeries* q_xyseries_operator_shift_left(void* self, void* point);
QXYSeries* q_xyseries_operator_shift_left_with_points(void* self, void* points[]);
void q_xyseries_set_pen(void* self, void* pen);
QPen* q_xyseries_pen(void* self);
void q_xyseries_set_brush(void* self, void* brush);
QBrush* q_xyseries_brush(void* self);
void q_xyseries_set_color(void* self, void* color);
QColor* q_xyseries_color(void* self);
void q_xyseries_set_selected_color(void* self, void* color);
QColor* q_xyseries_selected_color(void* self);
void q_xyseries_set_points_visible(void* self);
bool q_xyseries_points_visible(void* self);
void q_xyseries_set_point_labels_format(void* self, const char* format);
const char* q_xyseries_point_labels_format(void* self);
void q_xyseries_set_point_labels_visible(void* self);
bool q_xyseries_point_labels_visible(void* self);
void q_xyseries_set_point_labels_font(void* self, void* font);
QFont* q_xyseries_point_labels_font(void* self);
void q_xyseries_set_point_labels_color(void* self, void* color);
QColor* q_xyseries_point_labels_color(void* self);
void q_xyseries_set_point_labels_clipping(void* self);
bool q_xyseries_point_labels_clipping(void* self);
void q_xyseries_replace_with_points(void* self, void* points[]);
bool q_xyseries_is_point_selected(void* self, int index);
void q_xyseries_select_point(void* self, int index);
void q_xyseries_deselect_point(void* self, int index);
void q_xyseries_set_point_selected(void* self, int index, bool selected);
void q_xyseries_select_all_points(void* self);
void q_xyseries_deselect_all_points(void* self);
void q_xyseries_select_points(void* self, int* indexes[]);
void q_xyseries_deselect_points(void* self, int* indexes[]);
void q_xyseries_toggle_selection(void* self, int* indexes[]);
libqt_list /* of int */ q_xyseries_selected_points(void* self);
void q_xyseries_set_light_marker(void* self, void* lightMarker);
QImage* q_xyseries_light_marker(void* self);
void q_xyseries_set_selected_light_marker(void* self, void* selectedLightMarker);
QImage* q_xyseries_selected_light_marker(void* self);
void q_xyseries_set_marker_size(void* self, double size);
double q_xyseries_marker_size(void* self);
void q_xyseries_set_best_fit_line_visible(void* self);
bool q_xyseries_best_fit_line_visible(void* self);
libqt_pair /* tuple of double and double */ q_xyseries_best_fit_line_equation(void* self, bool* ok);
void q_xyseries_set_best_fit_line_pen(void* self, void* pen);
QPen* q_xyseries_best_fit_line_pen(void* self);
void q_xyseries_set_best_fit_line_color(void* self, void* color);
QColor* q_xyseries_best_fit_line_color(void* self);
void q_xyseries_clear_point_configuration(void* self, int index);
void q_xyseries_clear_point_configuration2(void* self, int index, int64_t key);
void q_xyseries_clear_points_configuration(void* self);
void q_xyseries_clear_points_configuration_with_key(void* self, int64_t key);
void q_xyseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);
void q_xyseries_set_point_configuration2(void* self, int index, int64_t key, void* value);
void q_xyseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);
libqt_map /* of int64_t to QVariant* */ q_xyseries_point_configuration(void* self, int index);
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_xyseries_points_configuration(void* self);
void q_xyseries_size_by(void* self, double* sourceData[], double minSize, double maxSize);
void q_xyseries_color_by(void* self, double* sourceData[]);
void q_xyseries_clicked(void* self, void* point);
void q_xyseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_xyseries_hovered(void* self, void* point, bool state);
void q_xyseries_on_hovered(void* self, void (*slot)(void*, void*, bool));
void q_xyseries_pressed(void* self, void* point);
void q_xyseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_xyseries_released(void* self, void* point);
void q_xyseries_on_released(void* self, void (*slot)(void*, void*));
void q_xyseries_double_clicked(void* self, void* point);
void q_xyseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_xyseries_point_replaced(void* self, int index);
void q_xyseries_on_point_replaced(void* self, void (*slot)(void*, int));
void q_xyseries_point_removed(void* self, int index);
void q_xyseries_on_point_removed(void* self, void (*slot)(void*, int));
void q_xyseries_point_added(void* self, int index);
void q_xyseries_on_point_added(void* self, void (*slot)(void*, int));
void q_xyseries_color_changed(void* self, void* color);
void q_xyseries_on_color_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_selected_color_changed(void* self, void* color);
void q_xyseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_points_replaced(void* self);
void q_xyseries_on_points_replaced(void* self, void (*slot)(void*));
void q_xyseries_point_labels_format_changed(void* self, const char* format);
void q_xyseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_xyseries_point_labels_visibility_changed(void* self, bool visible);
void q_xyseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));
void q_xyseries_point_labels_font_changed(void* self, void* font);
void q_xyseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_point_labels_color_changed(void* self, void* color);
void q_xyseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_point_labels_clipping_changed(void* self, bool clipping);
void q_xyseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));
void q_xyseries_points_removed(void* self, int index, int count);
void q_xyseries_on_points_removed(void* self, void (*slot)(void*, int, int));
void q_xyseries_pen_changed(void* self, void* pen);
void q_xyseries_on_pen_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_selected_points_changed(void* self);
void q_xyseries_on_selected_points_changed(void* self, void (*slot)(void*));
void q_xyseries_light_marker_changed(void* self, void* lightMarker);
void q_xyseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_selected_light_marker_changed(void* self, void* selectedLightMarker);
void q_xyseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_best_fit_line_visibility_changed(void* self, bool visible);
void q_xyseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));
void q_xyseries_best_fit_line_pen_changed(void* self, void* pen);
void q_xyseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_best_fit_line_color_changed(void* self, void* color);
void q_xyseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));
void q_xyseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);
void q_xyseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));
void q_xyseries_marker_size_changed(void* self, double size);
void q_xyseries_on_marker_size_changed(void* self, void (*slot)(void*, double));
const char* q_xyseries_tr2(const char* s, const char* c);
const char* q_xyseries_tr3(const char* s, const char* c, int n);
void q_xyseries_set_points_visible1(void* self, bool visible);
void q_xyseries_set_point_labels_visible1(void* self, bool visible);
void q_xyseries_set_point_labels_clipping1(void* self, bool enabled);
void q_xyseries_set_best_fit_line_visible1(void* self, bool visible);
void q_xyseries_color_by2(void* self, double* sourceData[], void* gradient);
int64_t q_xyseries_type(void* self);
void q_xyseries_set_name(void* self, const char* name);
const char* q_xyseries_name(void* self);
void q_xyseries_set_visible(void* self);
bool q_xyseries_is_visible(void* self);
double q_xyseries_opacity(void* self);
void q_xyseries_set_opacity(void* self, double opacity);
void q_xyseries_set_use_open_g_l(void* self);
bool q_xyseries_use_open_g_l(void* self);
QChart* q_xyseries_chart(void* self);
bool q_xyseries_attach_axis(void* self, void* axis);
bool q_xyseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_xyseries_attached_axes(void* self);
void q_xyseries_show(void* self);
void q_xyseries_hide(void* self);
void q_xyseries_name_changed(void* self);
void q_xyseries_on_name_changed(void* self, void (*slot)(void*));
void q_xyseries_visible_changed(void* self);
void q_xyseries_on_visible_changed(void* self, void (*slot)(void*));
void q_xyseries_opacity_changed(void* self);
void q_xyseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_xyseries_use_open_g_l_changed(void* self);
void q_xyseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_xyseries_set_visible1(void* self, bool visible);
void q_xyseries_set_use_open_g_l1(void* self, bool enable);
bool q_xyseries_event(void* self, void* event);
bool q_xyseries_event_filter(void* self, void* watched, void* event);
const char* q_xyseries_object_name(void* self);
void q_xyseries_set_object_name(void* self, const char* name);
bool q_xyseries_is_widget_type(void* self);
bool q_xyseries_is_window_type(void* self);
bool q_xyseries_is_quick_item_type(void* self);
bool q_xyseries_signals_blocked(void* self);
bool q_xyseries_block_signals(void* self, bool b);
QThread* q_xyseries_thread(void* self);
void q_xyseries_move_to_thread(void* self, void* thread);
int32_t q_xyseries_start_timer(void* self, int interval);
void q_xyseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_xyseries_children(void* self);
void q_xyseries_set_parent(void* self, void* parent);
void q_xyseries_install_event_filter(void* self, void* filterObj);
void q_xyseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_xyseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_xyseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_xyseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_xyseries_disconnect_with_q_meta_object_connection(void* param1);
void q_xyseries_dump_object_tree(void* self);
void q_xyseries_dump_object_info(void* self);
bool q_xyseries_set_property(void* self, const char* name, void* value);
QVariant* q_xyseries_property(void* self, const char* name);
const char** q_xyseries_dynamic_property_names(void* self);
QBindingStorage* q_xyseries_binding_storage(void* self);
QBindingStorage* q_xyseries_binding_storage2(void* self);
void q_xyseries_destroyed(void* self);
void q_xyseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_xyseries_parent(void* self);
bool q_xyseries_inherits(void* self, const char* classname);
void q_xyseries_delete_later(void* self);
int32_t q_xyseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_xyseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_xyseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_xyseries_destroyed1(void* self, void* param1);
void q_xyseries_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_xyseries_delete(void* self);

/// https://doc.qt.io/qt-6/qxyseries.html#types

typedef enum {
    QXYSERIES_POINTCONFIGURATION_COLOR = 0,
    QXYSERIES_POINTCONFIGURATION_SIZE = 1,
    QXYSERIES_POINTCONFIGURATION_VISIBILITY = 2,
    QXYSERIES_POINTCONFIGURATION_LABELVISIBILITY = 3
} QXYSeries__PointConfiguration;

#endif
