#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHART_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractseries.h"
#include "../libqaction.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqcursor.h"
#include "../libqeasingcurve.h"
#include "../libqfont.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsitem.h"
#include "../libqgraphicslayout.h"
#include "../libqgraphicslayoutitem.h"
#include "../libqgraphicsscene.h"
#include "../libqgraphicstransform.h"
#include "../libqgraphicswidget.h"
#include "../libqkeysequence.h"
#include "libqlegend.h"
#include "../libqlocale.h"
#include "../libqmargins.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqpainterpath.h"
#include "../libqpalette.h"
#include "../libqpen.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqsize.h"
#include "../libqsizepolicy.h"
#include <string.h>
#include "../libqstyle.h"
#include "../libqstyleoption.h"
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "../libqwidget.h"

QChart* q_chart_new();
QChart* q_chart_new2(void* parent);
QChart* q_chart_new3(void* parent, int64_t wFlags);
QMetaObject* q_chart_meta_object(void* self);
void* q_chart_metacast(void* self, const char* param1);
int32_t q_chart_metacall(void* self, int64_t param1, int param2, void* param3);
void q_chart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_chart_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_chart_tr(const char* s);
void q_chart_add_series(void* self, void* series);
void q_chart_remove_series(void* self, void* series);
void q_chart_remove_all_series(void* self);
libqt_list /* of QAbstractSeries* */ q_chart_series(void* self);
void q_chart_set_axis_x(void* self, void* axis);
void q_chart_set_axis_y(void* self, void* axis);
QAbstractAxis* q_chart_axis_x(void* self);
QAbstractAxis* q_chart_axis_y(void* self);
void q_chart_add_axis(void* self, void* axis, int64_t alignment);
void q_chart_remove_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_chart_axes(void* self);
void q_chart_create_default_axes(void* self);
void q_chart_set_theme(void* self, int64_t theme);
int64_t q_chart_theme(void* self);
void q_chart_set_title(void* self, const char* title);
const char* q_chart_title(void* self);
void q_chart_set_title_font(void* self, void* font);
QFont* q_chart_title_font(void* self);
void q_chart_set_title_brush(void* self, void* brush);
QBrush* q_chart_title_brush(void* self);
void q_chart_set_background_brush(void* self, void* brush);
QBrush* q_chart_background_brush(void* self);
void q_chart_set_background_pen(void* self, void* pen);
QPen* q_chart_background_pen(void* self);
void q_chart_set_background_visible(void* self);
bool q_chart_is_background_visible(void* self);
void q_chart_set_drop_shadow_enabled(void* self);
bool q_chart_is_drop_shadow_enabled(void* self);
void q_chart_set_background_roundness(void* self, double diameter);
double q_chart_background_roundness(void* self);
void q_chart_set_animation_options(void* self, int64_t options);
int64_t q_chart_animation_options(void* self);
void q_chart_set_animation_duration(void* self, int msecs);
int32_t q_chart_animation_duration(void* self);
void q_chart_set_animation_easing_curve(void* self, void* curve);
QEasingCurve* q_chart_animation_easing_curve(void* self);
void q_chart_zoom_in(void* self);
void q_chart_zoom_out(void* self);
void q_chart_zoom_in_with_rect(void* self, void* rect);
void q_chart_zoom(void* self, double factor);
void q_chart_zoom_reset(void* self);
bool q_chart_is_zoomed(void* self);
void q_chart_scroll(void* self, double dx, double dy);
QLegend* q_chart_legend(void* self);
void q_chart_set_margins(void* self, void* margins);
QMargins* q_chart_margins(void* self);
QRectF* q_chart_plot_area(void* self);
void q_chart_set_plot_area(void* self, void* rect);
void q_chart_set_plot_area_background_brush(void* self, void* brush);
QBrush* q_chart_plot_area_background_brush(void* self);
void q_chart_set_plot_area_background_pen(void* self, void* pen);
QPen* q_chart_plot_area_background_pen(void* self);
void q_chart_set_plot_area_background_visible(void* self);
bool q_chart_is_plot_area_background_visible(void* self);
void q_chart_set_localize_numbers(void* self, bool localize);
bool q_chart_localize_numbers(void* self);
void q_chart_set_locale(void* self, void* locale);
QLocale* q_chart_locale(void* self);
QPointF* q_chart_map_to_value(void* self, void* position);
QPointF* q_chart_map_to_position(void* self, void* value);
int64_t q_chart_chart_type(void* self);
void q_chart_plot_area_changed(void* self, void* plotArea);
void q_chart_on_plot_area_changed(void* self, void (*slot)(void*, void*));
const char* q_chart_tr2(const char* s, const char* c);
const char* q_chart_tr3(const char* s, const char* c, int n);
void q_chart_set_axis_x2(void* self, void* axis, void* series);
void q_chart_set_axis_y2(void* self, void* axis, void* series);
QAbstractAxis* q_chart_axis_x1(void* self, void* series);
QAbstractAxis* q_chart_axis_y1(void* self, void* series);
libqt_list /* of QAbstractAxis* */ q_chart_axes1(void* self, int64_t orientation);
libqt_list /* of QAbstractAxis* */ q_chart_axes2(void* self, int64_t orientation, void* series);
void q_chart_set_background_visible1(void* self, bool visible);
void q_chart_set_drop_shadow_enabled1(void* self, bool enabled);
void q_chart_set_plot_area_background_visible1(void* self, bool visible);
QPointF* q_chart_map_to_value2(void* self, void* position, void* series);
QPointF* q_chart_map_to_position2(void* self, void* value, void* series);
QGraphicsLayout* q_chart_layout(void* self);
void q_chart_set_layout(void* self, void* layout);
void q_chart_adjust_size(void* self);
int64_t q_chart_layout_direction(void* self);
void q_chart_set_layout_direction(void* self, int64_t direction);
void q_chart_unset_layout_direction(void* self);
QStyle* q_chart_style(void* self);
void q_chart_set_style(void* self, void* style);
QFont* q_chart_font(void* self);
void q_chart_set_font(void* self, void* font);
QPalette* q_chart_palette(void* self);
void q_chart_set_palette(void* self, void* palette);
bool q_chart_auto_fill_background(void* self);
void q_chart_set_auto_fill_background(void* self, bool enabled);
void q_chart_resize(void* self, void* size);
void q_chart_resize2(void* self, double w, double h);
QSizeF* q_chart_size(void* self);
void q_chart_set_geometry2(void* self, double x, double y, double w, double h);
QRectF* q_chart_rect(void* self);
void q_chart_set_contents_margins(void* self, double left, double top, double right, double bottom);
void q_chart_set_contents_margins_with_margins(void* self, void* margins);
void q_chart_set_window_frame_margins(void* self, double left, double top, double right, double bottom);
void q_chart_set_window_frame_margins_with_margins(void* self, void* margins);
void q_chart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_chart_unset_window_frame_margins(void* self);
QRectF* q_chart_window_frame_geometry(void* self);
QRectF* q_chart_window_frame_rect(void* self);
int64_t q_chart_window_flags(void* self);
int64_t q_chart_window_type(void* self);
void q_chart_set_window_flags(void* self, int64_t wFlags);
bool q_chart_is_active_window(void* self);
void q_chart_set_window_title(void* self, const char* title);
const char* q_chart_window_title(void* self);
int64_t q_chart_focus_policy(void* self);
void q_chart_set_focus_policy(void* self, int64_t policy);
void q_chart_set_tab_order(void* first, void* second);
QGraphicsWidget* q_chart_focus_widget(void* self);
int32_t q_chart_grab_shortcut(void* self, void* sequence);
void q_chart_release_shortcut(void* self, int id);
void q_chart_set_shortcut_enabled(void* self, int id);
void q_chart_set_shortcut_auto_repeat(void* self, int id);
void q_chart_add_action(void* self, void* action);
void q_chart_add_actions(void* self, void* actions[]);
void q_chart_insert_actions(void* self, void* before, void* actions[]);
void q_chart_insert_action(void* self, void* before, void* action);
void q_chart_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_chart_actions(void* self);
void q_chart_set_attribute(void* self, int64_t attribute);
bool q_chart_test_attribute(void* self, int64_t attribute);
void q_chart_geometry_changed(void* self);
void q_chart_on_geometry_changed(void* self, void (*slot)(void*));
void q_chart_layout_changed(void* self);
void q_chart_on_layout_changed(void* self, void (*slot)(void*));
bool q_chart_close(void* self);
int32_t q_chart_grab_shortcut2(void* self, void* sequence, int64_t context);
void q_chart_set_shortcut_enabled2(void* self, int id, bool enabled);
void q_chart_set_shortcut_auto_repeat2(void* self, int id, bool enabled);
void q_chart_set_attribute2(void* self, int64_t attribute, bool on);
void q_chart_grab_gesture(void* self, int64_t typeVal);
void q_chart_ungrab_gesture(void* self, int64_t typeVal);
void q_chart_parent_changed(void* self);
void q_chart_on_parent_changed(void* self, void (*slot)(void*));
void q_chart_opacity_changed(void* self);
void q_chart_on_opacity_changed(void* self, void (*slot)(void*));
void q_chart_visible_changed(void* self);
void q_chart_on_visible_changed(void* self, void (*slot)(void*));
void q_chart_enabled_changed(void* self);
void q_chart_on_enabled_changed(void* self, void (*slot)(void*));
void q_chart_x_changed(void* self);
void q_chart_on_x_changed(void* self, void (*slot)(void*));
void q_chart_y_changed(void* self);
void q_chart_on_y_changed(void* self, void (*slot)(void*));
void q_chart_z_changed(void* self);
void q_chart_on_z_changed(void* self, void (*slot)(void*));
void q_chart_rotation_changed(void* self);
void q_chart_on_rotation_changed(void* self, void (*slot)(void*));
void q_chart_scale_changed(void* self);
void q_chart_on_scale_changed(void* self, void (*slot)(void*));
void q_chart_children_changed(void* self);
void q_chart_on_children_changed(void* self, void (*slot)(void*));
void q_chart_width_changed(void* self);
void q_chart_on_width_changed(void* self, void (*slot)(void*));
void q_chart_height_changed(void* self);
void q_chart_on_height_changed(void* self, void (*slot)(void*));
void q_chart_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
const char* q_chart_object_name(void* self);
void q_chart_set_object_name(void* self, const char* name);
bool q_chart_is_widget_type(void* self);
bool q_chart_is_window_type(void* self);
bool q_chart_is_quick_item_type(void* self);
bool q_chart_signals_blocked(void* self);
bool q_chart_block_signals(void* self, bool b);
QThread* q_chart_thread(void* self);
void q_chart_move_to_thread(void* self, void* thread);
int32_t q_chart_start_timer(void* self, int interval);
void q_chart_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_chart_children(void* self);
void q_chart_set_parent(void* self, void* parent);
void q_chart_install_event_filter(void* self, void* filterObj);
void q_chart_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_chart_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_chart_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_chart_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_chart_disconnect_with_q_meta_object_connection(void* param1);
void q_chart_dump_object_tree(void* self);
void q_chart_dump_object_info(void* self);
bool q_chart_set_property(void* self, const char* name, void* value);
QVariant* q_chart_property(void* self, const char* name);
const char** q_chart_dynamic_property_names(void* self);
QBindingStorage* q_chart_binding_storage(void* self);
QBindingStorage* q_chart_binding_storage2(void* self);
void q_chart_destroyed(void* self);
void q_chart_on_destroyed(void* self, void (*slot)(void*));
QObject* q_chart_parent(void* self);
bool q_chart_inherits(void* self, const char* classname);
void q_chart_delete_later(void* self);
int32_t q_chart_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_chart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_chart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_chart_destroyed1(void* self, void* param1);
void q_chart_on_destroyed1(void* self, void (*slot)(void*, void*));
QGraphicsScene* q_chart_scene(void* self);
QGraphicsItem* q_chart_parent_item(void* self);
QGraphicsItem* q_chart_top_level_item(void* self);
QGraphicsObject* q_chart_parent_object(void* self);
QGraphicsWidget* q_chart_parent_widget(void* self);
QGraphicsWidget* q_chart_top_level_widget(void* self);
QGraphicsWidget* q_chart_window(void* self);
QGraphicsItem* q_chart_panel(void* self);
void q_chart_set_parent_item(void* self, void* parent);
libqt_list /* of QGraphicsItem* */ q_chart_child_items(void* self);
bool q_chart_is_widget(void* self);
bool q_chart_is_window(void* self);
bool q_chart_is_panel(void* self);
QGraphicsObject* q_chart_to_graphics_object(void* self);
QGraphicsObject* q_chart_to_graphics_object2(void* self);
QGraphicsItemGroup* q_chart_group(void* self);
void q_chart_set_group(void* self, void* group);
int64_t q_chart_flags(void* self);
void q_chart_set_flag(void* self, int64_t flag);
void q_chart_set_flags(void* self, int64_t flags);
int64_t q_chart_cache_mode(void* self);
void q_chart_set_cache_mode(void* self, int64_t mode);
int64_t q_chart_panel_modality(void* self);
void q_chart_set_panel_modality(void* self, int64_t panelModality);
bool q_chart_is_blocked_by_modal_panel(void* self);
const char* q_chart_tool_tip(void* self);
void q_chart_set_tool_tip(void* self, const char* toolTip);
QCursor* q_chart_cursor(void* self);
void q_chart_set_cursor(void* self, void* cursor);
bool q_chart_has_cursor(void* self);
void q_chart_unset_cursor(void* self);
bool q_chart_is_visible(void* self);
bool q_chart_is_visible_to(void* self, void* parent);
void q_chart_set_visible(void* self, bool visible);
void q_chart_hide(void* self);
void q_chart_show(void* self);
bool q_chart_is_enabled(void* self);
void q_chart_set_enabled(void* self, bool enabled);
bool q_chart_is_selected(void* self);
void q_chart_set_selected(void* self, bool selected);
bool q_chart_accept_drops(void* self);
void q_chart_set_accept_drops(void* self, bool on);
double q_chart_opacity(void* self);
double q_chart_effective_opacity(void* self);
void q_chart_set_opacity(void* self, double opacity);
QGraphicsEffect* q_chart_graphics_effect(void* self);
void q_chart_set_graphics_effect(void* self, void* effect);
int64_t q_chart_accepted_mouse_buttons(void* self);
void q_chart_set_accepted_mouse_buttons(void* self, int64_t buttons);
bool q_chart_accept_hover_events(void* self);
void q_chart_set_accept_hover_events(void* self, bool enabled);
bool q_chart_accept_touch_events(void* self);
void q_chart_set_accept_touch_events(void* self, bool enabled);
bool q_chart_filters_child_events(void* self);
void q_chart_set_filters_child_events(void* self, bool enabled);
bool q_chart_handles_child_events(void* self);
void q_chart_set_handles_child_events(void* self, bool enabled);
bool q_chart_is_active(void* self);
void q_chart_set_active(void* self, bool active);
bool q_chart_has_focus(void* self);
void q_chart_set_focus(void* self);
void q_chart_clear_focus(void* self);
QGraphicsItem* q_chart_focus_proxy(void* self);
void q_chart_set_focus_proxy(void* self, void* item);
QGraphicsItem* q_chart_focus_item(void* self);
QGraphicsItem* q_chart_focus_scope_item(void* self);
void q_chart_grab_mouse(void* self);
void q_chart_ungrab_mouse(void* self);
void q_chart_grab_keyboard(void* self);
void q_chart_ungrab_keyboard(void* self);
QPointF* q_chart_pos(void* self);
double q_chart_x(void* self);
void q_chart_set_x(void* self, double x);
double q_chart_y(void* self);
void q_chart_set_y(void* self, double y);
QPointF* q_chart_scene_pos(void* self);
void q_chart_set_pos(void* self, void* pos);
void q_chart_set_pos2(void* self, double x, double y);
void q_chart_move_by(void* self, double dx, double dy);
void q_chart_ensure_visible(void* self);
void q_chart_ensure_visible2(void* self, double x, double y, double w, double h);
QTransform* q_chart_transform(void* self);
QTransform* q_chart_scene_transform(void* self);
QTransform* q_chart_device_transform(void* self, void* viewportTransform);
QTransform* q_chart_item_transform(void* self, void* other);
void q_chart_set_transform(void* self, void* matrix);
void q_chart_reset_transform(void* self);
void q_chart_set_rotation(void* self, double angle);
double q_chart_rotation(void* self);
void q_chart_set_scale(void* self, double scale);
double q_chart_scale(void* self);
libqt_list /* of QGraphicsTransform* */ q_chart_transformations(void* self);
void q_chart_set_transformations(void* self, void* transformations[]);
QPointF* q_chart_transform_origin_point(void* self);
void q_chart_set_transform_origin_point(void* self, void* origin);
void q_chart_set_transform_origin_point2(void* self, double ax, double ay);
double q_chart_z_value(void* self);
void q_chart_set_z_value(void* self, double z);
void q_chart_stack_before(void* self, void* sibling);
QRectF* q_chart_children_bounding_rect(void* self);
QRectF* q_chart_scene_bounding_rect(void* self);
bool q_chart_is_clipped(void* self);
QPainterPath* q_chart_clip_path(void* self);
libqt_list /* of QGraphicsItem* */ q_chart_colliding_items(void* self);
bool q_chart_is_obscured(void* self);
bool q_chart_is_obscured2(void* self, double x, double y, double w, double h);
QRegion* q_chart_bounding_region(void* self, void* itemToDeviceTransform);
double q_chart_bounding_region_granularity(void* self);
void q_chart_set_bounding_region_granularity(void* self, double granularity);
void q_chart_update(void* self);
void q_chart_update2(void* self, double x, double y, double width, double height);
QPointF* q_chart_map_to_item(void* self, void* item, void* point);
QPointF* q_chart_map_to_parent(void* self, void* point);
QPointF* q_chart_map_to_scene(void* self, void* point);
QRectF* q_chart_map_rect_to_item(void* self, void* item, void* rect);
QRectF* q_chart_map_rect_to_parent(void* self, void* rect);
QRectF* q_chart_map_rect_to_scene(void* self, void* rect);
QPainterPath* q_chart_map_to_item4(void* self, void* item, void* path);
QPainterPath* q_chart_map_to_parent_with_path(void* self, void* path);
QPainterPath* q_chart_map_to_scene_with_path(void* self, void* path);
QPointF* q_chart_map_from_item(void* self, void* item, void* point);
QPointF* q_chart_map_from_parent(void* self, void* point);
QPointF* q_chart_map_from_scene(void* self, void* point);
QRectF* q_chart_map_rect_from_item(void* self, void* item, void* rect);
QRectF* q_chart_map_rect_from_parent(void* self, void* rect);
QRectF* q_chart_map_rect_from_scene(void* self, void* rect);
QPainterPath* q_chart_map_from_item4(void* self, void* item, void* path);
QPainterPath* q_chart_map_from_parent_with_path(void* self, void* path);
QPainterPath* q_chart_map_from_scene_with_path(void* self, void* path);
QPointF* q_chart_map_to_item5(void* self, void* item, double x, double y);
QPointF* q_chart_map_to_parent2(void* self, double x, double y);
QPointF* q_chart_map_to_scene2(void* self, double x, double y);
QRectF* q_chart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_chart_map_rect_to_parent2(void* self, double x, double y, double w, double h);
QRectF* q_chart_map_rect_to_scene2(void* self, double x, double y, double w, double h);
QPointF* q_chart_map_from_item5(void* self, void* item, double x, double y);
QPointF* q_chart_map_from_parent2(void* self, double x, double y);
QPointF* q_chart_map_from_scene2(void* self, double x, double y);
QRectF* q_chart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_chart_map_rect_from_parent2(void* self, double x, double y, double w, double h);
QRectF* q_chart_map_rect_from_scene2(void* self, double x, double y, double w, double h);
bool q_chart_is_ancestor_of(void* self, void* child);
QGraphicsItem* q_chart_common_ancestor_item(void* self, void* other);
bool q_chart_is_under_mouse(void* self);
QVariant* q_chart_data(void* self, int key);
void q_chart_set_data(void* self, int key, void* value);
int64_t q_chart_input_method_hints(void* self);
void q_chart_set_input_method_hints(void* self, int64_t hints);
void q_chart_install_scene_event_filter(void* self, void* filterItem);
void q_chart_remove_scene_event_filter(void* self, void* filterItem);
void q_chart_set_flag2(void* self, int64_t flag, bool enabled);
void q_chart_set_cache_mode2(void* self, int64_t mode, void* cacheSize);
void q_chart_set_focus1(void* self, int64_t focusReason);
void q_chart_ensure_visible1(void* self, void* rect);
void q_chart_ensure_visible22(void* self, void* rect, int xmargin);
void q_chart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);
void q_chart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);
void q_chart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);
QTransform* q_chart_item_transform2(void* self, void* other, bool* ok);
void q_chart_set_transform2(void* self, void* matrix, bool combine);
libqt_list /* of QGraphicsItem* */ q_chart_colliding_items1(void* self, int64_t mode);
bool q_chart_is_obscured1(void* self, void* rect);
void q_chart_update1(void* self, void* rect);
void q_chart_scroll3(void* self, double dx, double dy, void* rect);
void q_chart_set_size_policy(void* self, void* policy);
void q_chart_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_chart_size_policy(void* self);
void q_chart_set_minimum_size(void* self, void* size);
void q_chart_set_minimum_size2(void* self, double w, double h);
QSizeF* q_chart_minimum_size(void* self);
void q_chart_set_minimum_width(void* self, double width);
double q_chart_minimum_width(void* self);
void q_chart_set_minimum_height(void* self, double height);
double q_chart_minimum_height(void* self);
void q_chart_set_preferred_size(void* self, void* size);
void q_chart_set_preferred_size2(void* self, double w, double h);
QSizeF* q_chart_preferred_size(void* self);
void q_chart_set_preferred_width(void* self, double width);
double q_chart_preferred_width(void* self);
void q_chart_set_preferred_height(void* self, double height);
double q_chart_preferred_height(void* self);
void q_chart_set_maximum_size(void* self, void* size);
void q_chart_set_maximum_size2(void* self, double w, double h);
QSizeF* q_chart_maximum_size(void* self);
void q_chart_set_maximum_width(void* self, double width);
double q_chart_maximum_width(void* self);
void q_chart_set_maximum_height(void* self, double height);
double q_chart_maximum_height(void* self);
QRectF* q_chart_geometry(void* self);
QRectF* q_chart_contents_rect(void* self);
QSizeF* q_chart_effective_size_hint(void* self, int64_t which);
QGraphicsLayoutItem* q_chart_parent_layout_item(void* self);
void q_chart_set_parent_layout_item(void* self, void* parent);
bool q_chart_is_layout(void* self);
QGraphicsItem* q_chart_graphics_item(void* self);
bool q_chart_owned_by_layout(void* self);
void q_chart_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_chart_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_chart_set_geometry(void* self, void* rect);
void q_chart_qbase_set_geometry(void* self, void* rect);
void q_chart_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_chart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_chart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_chart_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));
int32_t q_chart_type(void* self);
int32_t q_chart_qbase_type(void* self);
void q_chart_on_type(void* self, int32_t (*slot)());
void q_chart_paint(void* self, void* painter, void* option, void* widget);
void q_chart_qbase_paint(void* self, void* painter, void* option, void* widget);
void q_chart_on_paint(void* self, void (*slot)(void*, void*, void*, void*));
void q_chart_paint_window_frame(void* self, void* painter, void* option, void* widget);
void q_chart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);
void q_chart_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*));
QRectF* q_chart_bounding_rect(void* self);
QRectF* q_chart_qbase_bounding_rect(void* self);
void q_chart_on_bounding_rect(void* self, QRectF* (*slot)());
QPainterPath* q_chart_shape(void* self);
QPainterPath* q_chart_qbase_shape(void* self);
void q_chart_on_shape(void* self, QPainterPath* (*slot)());
void q_chart_init_style_option(void* self, void* option);
void q_chart_qbase_init_style_option(void* self, void* option);
void q_chart_on_init_style_option(void* self, void (*slot)(void*, void*));
QSizeF* q_chart_size_hint(void* self, int64_t which, void* constraint);
QSizeF* q_chart_qbase_size_hint(void* self, int64_t which, void* constraint);
void q_chart_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));
void q_chart_update_geometry(void* self);
void q_chart_qbase_update_geometry(void* self);
void q_chart_on_update_geometry(void* self, void (*slot)());
QVariant* q_chart_item_change(void* self, int64_t change, void* value);
QVariant* q_chart_qbase_item_change(void* self, int64_t change, void* value);
void q_chart_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));
QVariant* q_chart_property_change(void* self, const char* propertyName, void* value);
QVariant* q_chart_qbase_property_change(void* self, const char* propertyName, void* value);
void q_chart_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*));
bool q_chart_scene_event(void* self, void* event);
bool q_chart_qbase_scene_event(void* self, void* event);
void q_chart_on_scene_event(void* self, bool (*slot)(void*, void*));
bool q_chart_window_frame_event(void* self, void* e);
bool q_chart_qbase_window_frame_event(void* self, void* e);
void q_chart_on_window_frame_event(void* self, bool (*slot)(void*, void*));
int64_t q_chart_window_frame_section_at(void* self, void* pos);
int64_t q_chart_qbase_window_frame_section_at(void* self, void* pos);
void q_chart_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*));
bool q_chart_event(void* self, void* event);
bool q_chart_qbase_event(void* self, void* event);
void q_chart_on_event(void* self, bool (*slot)(void*, void*));
void q_chart_change_event(void* self, void* event);
void q_chart_qbase_change_event(void* self, void* event);
void q_chart_on_change_event(void* self, void (*slot)(void*, void*));
void q_chart_close_event(void* self, void* event);
void q_chart_qbase_close_event(void* self, void* event);
void q_chart_on_close_event(void* self, void (*slot)(void*, void*));
void q_chart_focus_in_event(void* self, void* event);
void q_chart_qbase_focus_in_event(void* self, void* event);
void q_chart_on_focus_in_event(void* self, void (*slot)(void*, void*));
bool q_chart_focus_next_prev_child(void* self, bool next);
bool q_chart_qbase_focus_next_prev_child(void* self, bool next);
void q_chart_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_chart_focus_out_event(void* self, void* event);
void q_chart_qbase_focus_out_event(void* self, void* event);
void q_chart_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_chart_hide_event(void* self, void* event);
void q_chart_qbase_hide_event(void* self, void* event);
void q_chart_on_hide_event(void* self, void (*slot)(void*, void*));
void q_chart_move_event(void* self, void* event);
void q_chart_qbase_move_event(void* self, void* event);
void q_chart_on_move_event(void* self, void (*slot)(void*, void*));
void q_chart_polish_event(void* self);
void q_chart_qbase_polish_event(void* self);
void q_chart_on_polish_event(void* self, void (*slot)());
void q_chart_resize_event(void* self, void* event);
void q_chart_qbase_resize_event(void* self, void* event);
void q_chart_on_resize_event(void* self, void (*slot)(void*, void*));
void q_chart_show_event(void* self, void* event);
void q_chart_qbase_show_event(void* self, void* event);
void q_chart_on_show_event(void* self, void (*slot)(void*, void*));
void q_chart_hover_move_event(void* self, void* event);
void q_chart_qbase_hover_move_event(void* self, void* event);
void q_chart_on_hover_move_event(void* self, void (*slot)(void*, void*));
void q_chart_hover_leave_event(void* self, void* event);
void q_chart_qbase_hover_leave_event(void* self, void* event);
void q_chart_on_hover_leave_event(void* self, void (*slot)(void*, void*));
void q_chart_grab_mouse_event(void* self, void* event);
void q_chart_qbase_grab_mouse_event(void* self, void* event);
void q_chart_on_grab_mouse_event(void* self, void (*slot)(void*, void*));
void q_chart_ungrab_mouse_event(void* self, void* event);
void q_chart_qbase_ungrab_mouse_event(void* self, void* event);
void q_chart_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*));
void q_chart_grab_keyboard_event(void* self, void* event);
void q_chart_qbase_grab_keyboard_event(void* self, void* event);
void q_chart_on_grab_keyboard_event(void* self, void (*slot)(void*, void*));
void q_chart_ungrab_keyboard_event(void* self, void* event);
void q_chart_qbase_ungrab_keyboard_event(void* self, void* event);
void q_chart_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*));
bool q_chart_event_filter(void* self, void* watched, void* event);
bool q_chart_qbase_event_filter(void* self, void* watched, void* event);
void q_chart_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_chart_timer_event(void* self, void* event);
void q_chart_qbase_timer_event(void* self, void* event);
void q_chart_on_timer_event(void* self, void (*slot)(void*, void*));
void q_chart_child_event(void* self, void* event);
void q_chart_qbase_child_event(void* self, void* event);
void q_chart_on_child_event(void* self, void (*slot)(void*, void*));
void q_chart_custom_event(void* self, void* event);
void q_chart_qbase_custom_event(void* self, void* event);
void q_chart_on_custom_event(void* self, void (*slot)(void*, void*));
void q_chart_connect_notify(void* self, void* signal);
void q_chart_qbase_connect_notify(void* self, void* signal);
void q_chart_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_chart_disconnect_notify(void* self, void* signal);
void q_chart_qbase_disconnect_notify(void* self, void* signal);
void q_chart_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_chart_advance(void* self, int phase);
void q_chart_qbase_advance(void* self, int phase);
void q_chart_on_advance(void* self, void (*slot)(void*, int));
bool q_chart_contains(void* self, void* point);
bool q_chart_qbase_contains(void* self, void* point);
void q_chart_on_contains(void* self, bool (*slot)(void*, void*));
bool q_chart_collides_with_item(void* self, void* other, int64_t mode);
bool q_chart_qbase_collides_with_item(void* self, void* other, int64_t mode);
void q_chart_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));
bool q_chart_collides_with_path(void* self, void* path, int64_t mode);
bool q_chart_qbase_collides_with_path(void* self, void* path, int64_t mode);
void q_chart_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));
bool q_chart_is_obscured_by(void* self, void* item);
bool q_chart_qbase_is_obscured_by(void* self, void* item);
void q_chart_on_is_obscured_by(void* self, bool (*slot)(void*, void*));
QPainterPath* q_chart_opaque_area(void* self);
QPainterPath* q_chart_qbase_opaque_area(void* self);
void q_chart_on_opaque_area(void* self, QPainterPath* (*slot)());
bool q_chart_scene_event_filter(void* self, void* watched, void* event);
bool q_chart_qbase_scene_event_filter(void* self, void* watched, void* event);
void q_chart_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_chart_context_menu_event(void* self, void* event);
void q_chart_qbase_context_menu_event(void* self, void* event);
void q_chart_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_chart_drag_enter_event(void* self, void* event);
void q_chart_qbase_drag_enter_event(void* self, void* event);
void q_chart_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_chart_drag_leave_event(void* self, void* event);
void q_chart_qbase_drag_leave_event(void* self, void* event);
void q_chart_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_chart_drag_move_event(void* self, void* event);
void q_chart_qbase_drag_move_event(void* self, void* event);
void q_chart_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_chart_drop_event(void* self, void* event);
void q_chart_qbase_drop_event(void* self, void* event);
void q_chart_on_drop_event(void* self, void (*slot)(void*, void*));
void q_chart_hover_enter_event(void* self, void* event);
void q_chart_qbase_hover_enter_event(void* self, void* event);
void q_chart_on_hover_enter_event(void* self, void (*slot)(void*, void*));
void q_chart_key_press_event(void* self, void* event);
void q_chart_qbase_key_press_event(void* self, void* event);
void q_chart_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_chart_key_release_event(void* self, void* event);
void q_chart_qbase_key_release_event(void* self, void* event);
void q_chart_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_chart_mouse_press_event(void* self, void* event);
void q_chart_qbase_mouse_press_event(void* self, void* event);
void q_chart_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_chart_mouse_move_event(void* self, void* event);
void q_chart_qbase_mouse_move_event(void* self, void* event);
void q_chart_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_chart_mouse_release_event(void* self, void* event);
void q_chart_qbase_mouse_release_event(void* self, void* event);
void q_chart_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_chart_mouse_double_click_event(void* self, void* event);
void q_chart_qbase_mouse_double_click_event(void* self, void* event);
void q_chart_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_chart_wheel_event(void* self, void* event);
void q_chart_qbase_wheel_event(void* self, void* event);
void q_chart_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_chart_input_method_event(void* self, void* event);
void q_chart_qbase_input_method_event(void* self, void* event);
void q_chart_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_chart_input_method_query(void* self, int64_t query);
QVariant* q_chart_qbase_input_method_query(void* self, int64_t query);
void q_chart_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_chart_supports_extension(void* self, int64_t extension);
bool q_chart_qbase_supports_extension(void* self, int64_t extension);
void q_chart_on_supports_extension(void* self, bool (*slot)(void*, int64_t));
void q_chart_set_extension(void* self, int64_t extension, void* variant);
void q_chart_qbase_set_extension(void* self, int64_t extension, void* variant);
void q_chart_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));
QVariant* q_chart_extension(void* self, void* variant);
QVariant* q_chart_qbase_extension(void* self, void* variant);
void q_chart_on_extension(void* self, QVariant* (*slot)(void*, void*));
bool q_chart_is_empty(void* self);
bool q_chart_qbase_is_empty(void* self);
void q_chart_on_is_empty(void* self, bool (*slot)());
void q_chart_update_micro_focus(void* self);
void q_chart_qbase_update_micro_focus(void* self);
void q_chart_on_update_micro_focus(void* self, void (*slot)());
QObject* q_chart_sender(void* self);
QObject* q_chart_qbase_sender(void* self);
void q_chart_on_sender(void* self, QObject* (*slot)());
int32_t q_chart_sender_signal_index(void* self);
int32_t q_chart_qbase_sender_signal_index(void* self);
void q_chart_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_chart_receivers(void* self, const char* signal);
int32_t q_chart_qbase_receivers(void* self, const char* signal);
void q_chart_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_chart_is_signal_connected(void* self, void* signal);
bool q_chart_qbase_is_signal_connected(void* self, void* signal);
void q_chart_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_chart_add_to_index(void* self);
void q_chart_qbase_add_to_index(void* self);
void q_chart_on_add_to_index(void* self, void (*slot)());
void q_chart_remove_from_index(void* self);
void q_chart_qbase_remove_from_index(void* self);
void q_chart_on_remove_from_index(void* self, void (*slot)());
void q_chart_prepare_geometry_change(void* self);
void q_chart_qbase_prepare_geometry_change(void* self);
void q_chart_on_prepare_geometry_change(void* self, void (*slot)());
void q_chart_set_graphics_item(void* self, void* item);
void q_chart_qbase_set_graphics_item(void* self, void* item);
void q_chart_on_set_graphics_item(void* self, void (*slot)(void*, void*));
void q_chart_set_owned_by_layout(void* self, bool ownedByLayout);
void q_chart_qbase_set_owned_by_layout(void* self, bool ownedByLayout);
void q_chart_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));
void q_chart_delete(void* self);

/// https://doc.qt.io/qt-6/qchart.html#types

typedef enum {
    QCHART_CHARTTYPE_CHARTTYPEUNDEFINED = 0,
    QCHART_CHARTTYPE_CHARTTYPECARTESIAN = 1,
    QCHART_CHARTTYPE_CHARTTYPEPOLAR = 2
} QChart__ChartType;

typedef enum {
    QCHART_CHARTTHEME_CHARTTHEMELIGHT = 0,
    QCHART_CHARTTHEME_CHARTTHEMEBLUECERULEAN = 1,
    QCHART_CHARTTHEME_CHARTTHEMEDARK = 2,
    QCHART_CHARTTHEME_CHARTTHEMEBROWNSAND = 3,
    QCHART_CHARTTHEME_CHARTTHEMEBLUENCS = 4,
    QCHART_CHARTTHEME_CHARTTHEMEHIGHCONTRAST = 5,
    QCHART_CHARTTHEME_CHARTTHEMEBLUEICY = 6,
    QCHART_CHARTTHEME_CHARTTHEMEQT = 7
} QChart__ChartTheme;

typedef enum {
    QCHART_ANIMATIONOPTION_NOANIMATION = 0,
    QCHART_ANIMATIONOPTION_GRIDAXISANIMATIONS = 1,
    QCHART_ANIMATIONOPTION_SERIESANIMATIONS = 2,
    QCHART_ANIMATIONOPTION_ALLANIMATIONS = 3
} QChart__AnimationOption;

#endif
