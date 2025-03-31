#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGEND_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLEGEND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "../libqaction.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqcursor.h"
#include "../libqfont.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsitem.h"
#include "../libqgraphicslayout.h"
#include "../libqgraphicslayoutitem.h"
#include "../libqgraphicsscene.h"
#include "../libqgraphicstransform.h"
#include "../libqgraphicswidget.h"
#include "../libqkeysequence.h"
#include "libqlegendmarker.h"
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

QMetaObject* q_legend_meta_object(void* self);
void* q_legend_metacast(void* self, const char* param1);
int32_t q_legend_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_legend_tr(const char* s);
void q_legend_paint(void* self, void* painter, void* option, void* widget);
void q_legend_set_brush(void* self, void* brush);
QBrush* q_legend_brush(void* self);
void q_legend_set_color(void* self, void* color);
QColor* q_legend_color(void* self);
void q_legend_set_pen(void* self, void* pen);
QPen* q_legend_pen(void* self);
void q_legend_set_border_color(void* self, void* color);
QColor* q_legend_border_color(void* self);
void q_legend_set_font(void* self, void* font);
QFont* q_legend_font(void* self);
void q_legend_set_label_brush(void* self, void* brush);
QBrush* q_legend_label_brush(void* self);
void q_legend_set_label_color(void* self, void* color);
QColor* q_legend_label_color(void* self);
void q_legend_set_alignment(void* self, int64_t alignment);
int64_t q_legend_alignment(void* self);
void q_legend_detach_from_chart(void* self);
void q_legend_attach_to_chart(void* self);
bool q_legend_is_attached_to_chart(void* self);
void q_legend_set_background_visible(void* self);
bool q_legend_is_background_visible(void* self);
libqt_list /* of QLegendMarker* */ q_legend_markers(void* self);
bool q_legend_reverse_markers(void* self);
void q_legend_set_reverse_markers(void* self);
bool q_legend_show_tool_tips(void* self);
void q_legend_set_show_tool_tips(void* self, bool show);
bool q_legend_is_interactive(void* self);
void q_legend_set_interactive(void* self, bool interactive);
int64_t q_legend_marker_shape(void* self);
void q_legend_set_marker_shape(void* self, int64_t shape);
void q_legend_background_visible_changed(void* self, bool visible);
void q_legend_on_background_visible_changed(void* self, void (*slot)(void*, bool));
void q_legend_color_changed(void* self, void* color);
void q_legend_on_color_changed(void* self, void (*slot)(void*, void*));
void q_legend_border_color_changed(void* self, void* color);
void q_legend_on_border_color_changed(void* self, void (*slot)(void*, void*));
void q_legend_font_changed(void* self, void* font);
void q_legend_on_font_changed(void* self, void (*slot)(void*, void*));
void q_legend_label_color_changed(void* self, void* color);
void q_legend_on_label_color_changed(void* self, void (*slot)(void*, void*));
void q_legend_reverse_markers_changed(void* self, bool reverseMarkers);
void q_legend_on_reverse_markers_changed(void* self, void (*slot)(void*, bool));
void q_legend_show_tool_tips_changed(void* self, bool showToolTips);
void q_legend_on_show_tool_tips_changed(void* self, void (*slot)(void*, bool));
void q_legend_marker_shape_changed(void* self, int64_t shape);
void q_legend_on_marker_shape_changed(void* self, void (*slot)(void*, int64_t));
void q_legend_attached_to_chart_changed(void* self, bool attachedToChart);
void q_legend_on_attached_to_chart_changed(void* self, void (*slot)(void*, bool));
void q_legend_interactive_changed(void* self, bool interactive);
void q_legend_on_interactive_changed(void* self, void (*slot)(void*, bool));
const char* q_legend_tr2(const char* s, const char* c);
const char* q_legend_tr3(const char* s, const char* c, int n);
void q_legend_set_background_visible1(void* self, bool visible);
libqt_list /* of QLegendMarker* */ q_legend_markers1(void* self, void* series);
void q_legend_set_reverse_markers1(void* self, bool reverseMarkers);
QGraphicsLayout* q_legend_layout(void* self);
void q_legend_set_layout(void* self, void* layout);
void q_legend_adjust_size(void* self);
int64_t q_legend_layout_direction(void* self);
void q_legend_set_layout_direction(void* self, int64_t direction);
void q_legend_unset_layout_direction(void* self);
QStyle* q_legend_style(void* self);
void q_legend_set_style(void* self, void* style);
QPalette* q_legend_palette(void* self);
void q_legend_set_palette(void* self, void* palette);
bool q_legend_auto_fill_background(void* self);
void q_legend_set_auto_fill_background(void* self, bool enabled);
void q_legend_resize(void* self, void* size);
void q_legend_resize2(void* self, double w, double h);
QSizeF* q_legend_size(void* self);
void q_legend_set_geometry(void* self, void* rect);
void q_legend_set_geometry2(void* self, double x, double y, double w, double h);
QRectF* q_legend_rect(void* self);
void q_legend_set_contents_margins(void* self, double left, double top, double right, double bottom);
void q_legend_set_contents_margins_with_margins(void* self, void* margins);
void q_legend_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_legend_set_window_frame_margins(void* self, double left, double top, double right, double bottom);
void q_legend_set_window_frame_margins_with_margins(void* self, void* margins);
void q_legend_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);
void q_legend_unset_window_frame_margins(void* self);
QRectF* q_legend_window_frame_geometry(void* self);
QRectF* q_legend_window_frame_rect(void* self);
int64_t q_legend_window_flags(void* self);
int64_t q_legend_window_type(void* self);
void q_legend_set_window_flags(void* self, int64_t wFlags);
bool q_legend_is_active_window(void* self);
void q_legend_set_window_title(void* self, const char* title);
const char* q_legend_window_title(void* self);
int64_t q_legend_focus_policy(void* self);
void q_legend_set_focus_policy(void* self, int64_t policy);
void q_legend_set_tab_order(void* first, void* second);
QGraphicsWidget* q_legend_focus_widget(void* self);
int32_t q_legend_grab_shortcut(void* self, void* sequence);
void q_legend_release_shortcut(void* self, int id);
void q_legend_set_shortcut_enabled(void* self, int id);
void q_legend_set_shortcut_auto_repeat(void* self, int id);
void q_legend_add_action(void* self, void* action);
void q_legend_add_actions(void* self, void* actions[]);
void q_legend_insert_actions(void* self, void* before, void* actions[]);
void q_legend_insert_action(void* self, void* before, void* action);
void q_legend_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_legend_actions(void* self);
void q_legend_set_attribute(void* self, int64_t attribute);
bool q_legend_test_attribute(void* self, int64_t attribute);
int32_t q_legend_type(void* self);
void q_legend_paint_window_frame(void* self, void* painter, void* option, void* widget);
QRectF* q_legend_bounding_rect(void* self);
QPainterPath* q_legend_shape(void* self);
void q_legend_geometry_changed(void* self);
void q_legend_on_geometry_changed(void* self, void (*slot)(void*));
void q_legend_layout_changed(void* self);
void q_legend_on_layout_changed(void* self, void (*slot)(void*));
bool q_legend_close(void* self);
int32_t q_legend_grab_shortcut2(void* self, void* sequence, int64_t context);
void q_legend_set_shortcut_enabled2(void* self, int id, bool enabled);
void q_legend_set_shortcut_auto_repeat2(void* self, int id, bool enabled);
void q_legend_set_attribute2(void* self, int64_t attribute, bool on);
void q_legend_grab_gesture(void* self, int64_t typeVal);
void q_legend_ungrab_gesture(void* self, int64_t typeVal);
void q_legend_parent_changed(void* self);
void q_legend_on_parent_changed(void* self, void (*slot)(void*));
void q_legend_opacity_changed(void* self);
void q_legend_on_opacity_changed(void* self, void (*slot)(void*));
void q_legend_visible_changed(void* self);
void q_legend_on_visible_changed(void* self, void (*slot)(void*));
void q_legend_enabled_changed(void* self);
void q_legend_on_enabled_changed(void* self, void (*slot)(void*));
void q_legend_x_changed(void* self);
void q_legend_on_x_changed(void* self, void (*slot)(void*));
void q_legend_y_changed(void* self);
void q_legend_on_y_changed(void* self, void (*slot)(void*));
void q_legend_z_changed(void* self);
void q_legend_on_z_changed(void* self, void (*slot)(void*));
void q_legend_rotation_changed(void* self);
void q_legend_on_rotation_changed(void* self, void (*slot)(void*));
void q_legend_scale_changed(void* self);
void q_legend_on_scale_changed(void* self, void (*slot)(void*));
void q_legend_children_changed(void* self);
void q_legend_on_children_changed(void* self, void (*slot)(void*));
void q_legend_width_changed(void* self);
void q_legend_on_width_changed(void* self, void (*slot)(void*));
void q_legend_height_changed(void* self);
void q_legend_on_height_changed(void* self, void (*slot)(void*));
void q_legend_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
bool q_legend_event_filter(void* self, void* watched, void* event);
const char* q_legend_object_name(void* self);
void q_legend_set_object_name(void* self, const char* name);
bool q_legend_is_widget_type(void* self);
bool q_legend_is_window_type(void* self);
bool q_legend_is_quick_item_type(void* self);
bool q_legend_signals_blocked(void* self);
bool q_legend_block_signals(void* self, bool b);
QThread* q_legend_thread(void* self);
void q_legend_move_to_thread(void* self, void* thread);
int32_t q_legend_start_timer(void* self, int interval);
void q_legend_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_legend_children(void* self);
void q_legend_set_parent(void* self, void* parent);
void q_legend_install_event_filter(void* self, void* filterObj);
void q_legend_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_legend_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_legend_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_legend_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_legend_disconnect_with_q_meta_object_connection(void* param1);
void q_legend_dump_object_tree(void* self);
void q_legend_dump_object_info(void* self);
bool q_legend_set_property(void* self, const char* name, void* value);
QVariant* q_legend_property(void* self, const char* name);
const char** q_legend_dynamic_property_names(void* self);
QBindingStorage* q_legend_binding_storage(void* self);
QBindingStorage* q_legend_binding_storage2(void* self);
void q_legend_destroyed(void* self);
void q_legend_on_destroyed(void* self, void (*slot)(void*));
QObject* q_legend_parent(void* self);
bool q_legend_inherits(void* self, const char* classname);
void q_legend_delete_later(void* self);
int32_t q_legend_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_legend_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_legend_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_legend_destroyed1(void* self, void* param1);
void q_legend_on_destroyed1(void* self, void (*slot)(void*, void*));
QGraphicsScene* q_legend_scene(void* self);
QGraphicsItem* q_legend_parent_item(void* self);
QGraphicsItem* q_legend_top_level_item(void* self);
QGraphicsObject* q_legend_parent_object(void* self);
QGraphicsWidget* q_legend_parent_widget(void* self);
QGraphicsWidget* q_legend_top_level_widget(void* self);
QGraphicsWidget* q_legend_window(void* self);
QGraphicsItem* q_legend_panel(void* self);
void q_legend_set_parent_item(void* self, void* parent);
libqt_list /* of QGraphicsItem* */ q_legend_child_items(void* self);
bool q_legend_is_widget(void* self);
bool q_legend_is_window(void* self);
bool q_legend_is_panel(void* self);
QGraphicsObject* q_legend_to_graphics_object(void* self);
QGraphicsObject* q_legend_to_graphics_object2(void* self);
QGraphicsItemGroup* q_legend_group(void* self);
void q_legend_set_group(void* self, void* group);
int64_t q_legend_flags(void* self);
void q_legend_set_flag(void* self, int64_t flag);
void q_legend_set_flags(void* self, int64_t flags);
int64_t q_legend_cache_mode(void* self);
void q_legend_set_cache_mode(void* self, int64_t mode);
int64_t q_legend_panel_modality(void* self);
void q_legend_set_panel_modality(void* self, int64_t panelModality);
bool q_legend_is_blocked_by_modal_panel(void* self);
const char* q_legend_tool_tip(void* self);
void q_legend_set_tool_tip(void* self, const char* toolTip);
QCursor* q_legend_cursor(void* self);
void q_legend_set_cursor(void* self, void* cursor);
bool q_legend_has_cursor(void* self);
void q_legend_unset_cursor(void* self);
bool q_legend_is_visible(void* self);
bool q_legend_is_visible_to(void* self, void* parent);
void q_legend_set_visible(void* self, bool visible);
void q_legend_hide(void* self);
void q_legend_show(void* self);
bool q_legend_is_enabled(void* self);
void q_legend_set_enabled(void* self, bool enabled);
bool q_legend_is_selected(void* self);
void q_legend_set_selected(void* self, bool selected);
bool q_legend_accept_drops(void* self);
void q_legend_set_accept_drops(void* self, bool on);
double q_legend_opacity(void* self);
double q_legend_effective_opacity(void* self);
void q_legend_set_opacity(void* self, double opacity);
QGraphicsEffect* q_legend_graphics_effect(void* self);
void q_legend_set_graphics_effect(void* self, void* effect);
int64_t q_legend_accepted_mouse_buttons(void* self);
void q_legend_set_accepted_mouse_buttons(void* self, int64_t buttons);
bool q_legend_accept_hover_events(void* self);
void q_legend_set_accept_hover_events(void* self, bool enabled);
bool q_legend_accept_touch_events(void* self);
void q_legend_set_accept_touch_events(void* self, bool enabled);
bool q_legend_filters_child_events(void* self);
void q_legend_set_filters_child_events(void* self, bool enabled);
bool q_legend_handles_child_events(void* self);
void q_legend_set_handles_child_events(void* self, bool enabled);
bool q_legend_is_active(void* self);
void q_legend_set_active(void* self, bool active);
bool q_legend_has_focus(void* self);
void q_legend_set_focus(void* self);
void q_legend_clear_focus(void* self);
QGraphicsItem* q_legend_focus_proxy(void* self);
void q_legend_set_focus_proxy(void* self, void* item);
QGraphicsItem* q_legend_focus_item(void* self);
QGraphicsItem* q_legend_focus_scope_item(void* self);
void q_legend_grab_mouse(void* self);
void q_legend_ungrab_mouse(void* self);
void q_legend_grab_keyboard(void* self);
void q_legend_ungrab_keyboard(void* self);
QPointF* q_legend_pos(void* self);
double q_legend_x(void* self);
void q_legend_set_x(void* self, double x);
double q_legend_y(void* self);
void q_legend_set_y(void* self, double y);
QPointF* q_legend_scene_pos(void* self);
void q_legend_set_pos(void* self, void* pos);
void q_legend_set_pos2(void* self, double x, double y);
void q_legend_move_by(void* self, double dx, double dy);
void q_legend_ensure_visible(void* self);
void q_legend_ensure_visible2(void* self, double x, double y, double w, double h);
QTransform* q_legend_transform(void* self);
QTransform* q_legend_scene_transform(void* self);
QTransform* q_legend_device_transform(void* self, void* viewportTransform);
QTransform* q_legend_item_transform(void* self, void* other);
void q_legend_set_transform(void* self, void* matrix);
void q_legend_reset_transform(void* self);
void q_legend_set_rotation(void* self, double angle);
double q_legend_rotation(void* self);
void q_legend_set_scale(void* self, double scale);
double q_legend_scale(void* self);
libqt_list /* of QGraphicsTransform* */ q_legend_transformations(void* self);
void q_legend_set_transformations(void* self, void* transformations[]);
QPointF* q_legend_transform_origin_point(void* self);
void q_legend_set_transform_origin_point(void* self, void* origin);
void q_legend_set_transform_origin_point2(void* self, double ax, double ay);
void q_legend_advance(void* self, int phase);
double q_legend_z_value(void* self);
void q_legend_set_z_value(void* self, double z);
void q_legend_stack_before(void* self, void* sibling);
QRectF* q_legend_children_bounding_rect(void* self);
QRectF* q_legend_scene_bounding_rect(void* self);
bool q_legend_is_clipped(void* self);
QPainterPath* q_legend_clip_path(void* self);
bool q_legend_contains(void* self, void* point);
bool q_legend_collides_with_item(void* self, void* other, int64_t mode);
bool q_legend_collides_with_path(void* self, void* path, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_legend_colliding_items(void* self);
bool q_legend_is_obscured(void* self);
bool q_legend_is_obscured2(void* self, double x, double y, double w, double h);
bool q_legend_is_obscured_by(void* self, void* item);
QPainterPath* q_legend_opaque_area(void* self);
QRegion* q_legend_bounding_region(void* self, void* itemToDeviceTransform);
double q_legend_bounding_region_granularity(void* self);
void q_legend_set_bounding_region_granularity(void* self, double granularity);
void q_legend_update(void* self);
void q_legend_update2(void* self, double x, double y, double width, double height);
void q_legend_scroll(void* self, double dx, double dy);
QPointF* q_legend_map_to_item(void* self, void* item, void* point);
QPointF* q_legend_map_to_parent(void* self, void* point);
QPointF* q_legend_map_to_scene(void* self, void* point);
QRectF* q_legend_map_rect_to_item(void* self, void* item, void* rect);
QRectF* q_legend_map_rect_to_parent(void* self, void* rect);
QRectF* q_legend_map_rect_to_scene(void* self, void* rect);
QPainterPath* q_legend_map_to_item4(void* self, void* item, void* path);
QPainterPath* q_legend_map_to_parent_with_path(void* self, void* path);
QPainterPath* q_legend_map_to_scene_with_path(void* self, void* path);
QPointF* q_legend_map_from_item(void* self, void* item, void* point);
QPointF* q_legend_map_from_parent(void* self, void* point);
QPointF* q_legend_map_from_scene(void* self, void* point);
QRectF* q_legend_map_rect_from_item(void* self, void* item, void* rect);
QRectF* q_legend_map_rect_from_parent(void* self, void* rect);
QRectF* q_legend_map_rect_from_scene(void* self, void* rect);
QPainterPath* q_legend_map_from_item4(void* self, void* item, void* path);
QPainterPath* q_legend_map_from_parent_with_path(void* self, void* path);
QPainterPath* q_legend_map_from_scene_with_path(void* self, void* path);
QPointF* q_legend_map_to_item5(void* self, void* item, double x, double y);
QPointF* q_legend_map_to_parent2(void* self, double x, double y);
QPointF* q_legend_map_to_scene2(void* self, double x, double y);
QRectF* q_legend_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_legend_map_rect_to_parent2(void* self, double x, double y, double w, double h);
QRectF* q_legend_map_rect_to_scene2(void* self, double x, double y, double w, double h);
QPointF* q_legend_map_from_item5(void* self, void* item, double x, double y);
QPointF* q_legend_map_from_parent2(void* self, double x, double y);
QPointF* q_legend_map_from_scene2(void* self, double x, double y);
QRectF* q_legend_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_legend_map_rect_from_parent2(void* self, double x, double y, double w, double h);
QRectF* q_legend_map_rect_from_scene2(void* self, double x, double y, double w, double h);
bool q_legend_is_ancestor_of(void* self, void* child);
QGraphicsItem* q_legend_common_ancestor_item(void* self, void* other);
bool q_legend_is_under_mouse(void* self);
QVariant* q_legend_data(void* self, int key);
void q_legend_set_data(void* self, int key, void* value);
int64_t q_legend_input_method_hints(void* self);
void q_legend_set_input_method_hints(void* self, int64_t hints);
void q_legend_install_scene_event_filter(void* self, void* filterItem);
void q_legend_remove_scene_event_filter(void* self, void* filterItem);
void q_legend_set_flag2(void* self, int64_t flag, bool enabled);
void q_legend_set_cache_mode2(void* self, int64_t mode, void* cacheSize);
void q_legend_set_focus1(void* self, int64_t focusReason);
void q_legend_ensure_visible1(void* self, void* rect);
void q_legend_ensure_visible22(void* self, void* rect, int xmargin);
void q_legend_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);
void q_legend_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);
void q_legend_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);
QTransform* q_legend_item_transform2(void* self, void* other, bool* ok);
void q_legend_set_transform2(void* self, void* matrix, bool combine);
libqt_list /* of QGraphicsItem* */ q_legend_colliding_items1(void* self, int64_t mode);
bool q_legend_is_obscured1(void* self, void* rect);
void q_legend_update1(void* self, void* rect);
void q_legend_scroll3(void* self, double dx, double dy, void* rect);
void q_legend_set_size_policy(void* self, void* policy);
void q_legend_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);
QSizePolicy* q_legend_size_policy(void* self);
void q_legend_set_minimum_size(void* self, void* size);
void q_legend_set_minimum_size2(void* self, double w, double h);
QSizeF* q_legend_minimum_size(void* self);
void q_legend_set_minimum_width(void* self, double width);
double q_legend_minimum_width(void* self);
void q_legend_set_minimum_height(void* self, double height);
double q_legend_minimum_height(void* self);
void q_legend_set_preferred_size(void* self, void* size);
void q_legend_set_preferred_size2(void* self, double w, double h);
QSizeF* q_legend_preferred_size(void* self);
void q_legend_set_preferred_width(void* self, double width);
double q_legend_preferred_width(void* self);
void q_legend_set_preferred_height(void* self, double height);
double q_legend_preferred_height(void* self);
void q_legend_set_maximum_size(void* self, void* size);
void q_legend_set_maximum_size2(void* self, double w, double h);
QSizeF* q_legend_maximum_size(void* self);
void q_legend_set_maximum_width(void* self, double width);
double q_legend_maximum_width(void* self);
void q_legend_set_maximum_height(void* self, double height);
double q_legend_maximum_height(void* self);
QRectF* q_legend_geometry(void* self);
QRectF* q_legend_contents_rect(void* self);
QSizeF* q_legend_effective_size_hint(void* self, int64_t which);
bool q_legend_is_empty(void* self);
QGraphicsLayoutItem* q_legend_parent_layout_item(void* self);
void q_legend_set_parent_layout_item(void* self, void* parent);
bool q_legend_is_layout(void* self);
QGraphicsItem* q_legend_graphics_item(void* self);
bool q_legend_owned_by_layout(void* self);
void q_legend_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);
QSizeF* q_legend_effective_size_hint2(void* self, int64_t which, void* constraint);
void q_legend_delete(void* self);

/// https://doc.qt.io/qt-6/qlegend.html#types

typedef enum {
    QLEGEND_MARKERSHAPE_MARKERSHAPEDEFAULT = 0,
    QLEGEND_MARKERSHAPE_MARKERSHAPERECTANGLE = 1,
    QLEGEND_MARKERSHAPE_MARKERSHAPECIRCLE = 2,
    QLEGEND_MARKERSHAPE_MARKERSHAPEFROMSERIES = 3,
    QLEGEND_MARKERSHAPE_MARKERSHAPEROTATEDRECTANGLE = 4,
    QLEGEND_MARKERSHAPE_MARKERSHAPETRIANGLE = 5,
    QLEGEND_MARKERSHAPE_MARKERSHAPESTAR = 6,
    QLEGEND_MARKERSHAPE_MARKERSHAPEPENTAGON = 7
} QLegend__MarkerShape;

#endif
