#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQGRAPHICSVIDEOITEM_H
#define SRC_MULTIMEDIAQT6C_LIBQGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqcursor.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsitem.h"
#include "../libqgraphicsscene.h"
#include "../libqgraphicstransform.h"
#include "../libqgraphicswidget.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqpainterpath.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqstyleoption.h"
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "libqvideosink.h"
#include "../libqwidget.h"

QGraphicsVideoItem* q_graphicsvideoitem_new();
QGraphicsVideoItem* q_graphicsvideoitem_new2(void* parent);
QMetaObject* q_graphicsvideoitem_meta_object(void* self);
void* q_graphicsvideoitem_metacast(void* self, const char* param1);
int32_t q_graphicsvideoitem_metacall(void* self, int64_t param1, int param2, void* param3);
void q_graphicsvideoitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_graphicsvideoitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_graphicsvideoitem_tr(const char* s);
QVideoSink* q_graphicsvideoitem_video_sink(void* self);
int64_t q_graphicsvideoitem_aspect_ratio_mode(void* self);
void q_graphicsvideoitem_set_aspect_ratio_mode(void* self, int64_t mode);
QPointF* q_graphicsvideoitem_offset(void* self);
void q_graphicsvideoitem_set_offset(void* self, void* offset);
QSizeF* q_graphicsvideoitem_size(void* self);
void q_graphicsvideoitem_set_size(void* self, void* size);
QSizeF* q_graphicsvideoitem_native_size(void* self);
QRectF* q_graphicsvideoitem_bounding_rect(void* self);
void q_graphicsvideoitem_on_bounding_rect(void* self, QRectF* (*slot)());
QRectF* q_graphicsvideoitem_qbase_bounding_rect(void* self);
void q_graphicsvideoitem_paint(void* self, void* painter, void* option, void* widget);
void q_graphicsvideoitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));
void q_graphicsvideoitem_qbase_paint(void* self, void* painter, void* option, void* widget);
int32_t q_graphicsvideoitem_type(void* self);
void q_graphicsvideoitem_on_type(void* self, int32_t (*slot)());
int32_t q_graphicsvideoitem_qbase_type(void* self);
void q_graphicsvideoitem_native_size_changed(void* self, void* size);
void q_graphicsvideoitem_on_native_size_changed(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_timer_event(void* self, void* event);
void q_graphicsvideoitem_on_timer_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_qbase_timer_event(void* self, void* event);
QVariant* q_graphicsvideoitem_item_change(void* self, int64_t change, void* value);
void q_graphicsvideoitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));
QVariant* q_graphicsvideoitem_qbase_item_change(void* self, int64_t change, void* value);
const char* q_graphicsvideoitem_tr2(const char* s, const char* c);
const char* q_graphicsvideoitem_tr3(const char* s, const char* c, int n);
void q_graphicsvideoitem_grab_gesture(void* self, int64_t typeVal);
void q_graphicsvideoitem_ungrab_gesture(void* self, int64_t typeVal);
void q_graphicsvideoitem_parent_changed(void* self);
void q_graphicsvideoitem_on_parent_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_opacity_changed(void* self);
void q_graphicsvideoitem_on_opacity_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_visible_changed(void* self);
void q_graphicsvideoitem_on_visible_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_enabled_changed(void* self);
void q_graphicsvideoitem_on_enabled_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_x_changed(void* self);
void q_graphicsvideoitem_on_x_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_y_changed(void* self);
void q_graphicsvideoitem_on_y_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_z_changed(void* self);
void q_graphicsvideoitem_on_z_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_rotation_changed(void* self);
void q_graphicsvideoitem_on_rotation_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_scale_changed(void* self);
void q_graphicsvideoitem_on_scale_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_children_changed(void* self);
void q_graphicsvideoitem_on_children_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_width_changed(void* self);
void q_graphicsvideoitem_on_width_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_height_changed(void* self);
void q_graphicsvideoitem_on_height_changed(void* self, void (*slot)(void*));
void q_graphicsvideoitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
const char* q_graphicsvideoitem_object_name(void* self);
void q_graphicsvideoitem_set_object_name(void* self, const char* name);
bool q_graphicsvideoitem_is_widget_type(void* self);
bool q_graphicsvideoitem_is_window_type(void* self);
bool q_graphicsvideoitem_is_quick_item_type(void* self);
bool q_graphicsvideoitem_signals_blocked(void* self);
bool q_graphicsvideoitem_block_signals(void* self, bool b);
QThread* q_graphicsvideoitem_thread(void* self);
void q_graphicsvideoitem_move_to_thread(void* self, void* thread);
int32_t q_graphicsvideoitem_start_timer(void* self, int interval);
void q_graphicsvideoitem_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_graphicsvideoitem_children(void* self);
void q_graphicsvideoitem_set_parent(void* self, void* parent);
void q_graphicsvideoitem_install_event_filter(void* self, void* filterObj);
void q_graphicsvideoitem_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_graphicsvideoitem_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_graphicsvideoitem_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_graphicsvideoitem_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_graphicsvideoitem_disconnect_with_q_meta_object_connection(void* param1);
void q_graphicsvideoitem_dump_object_tree(void* self);
void q_graphicsvideoitem_dump_object_info(void* self);
bool q_graphicsvideoitem_set_property(void* self, const char* name, void* value);
QVariant* q_graphicsvideoitem_property(void* self, const char* name);
const char** q_graphicsvideoitem_dynamic_property_names(void* self);
QBindingStorage* q_graphicsvideoitem_binding_storage(void* self);
QBindingStorage* q_graphicsvideoitem_binding_storage2(void* self);
void q_graphicsvideoitem_destroyed(void* self);
void q_graphicsvideoitem_on_destroyed(void* self, void (*slot)(void*));
QObject* q_graphicsvideoitem_parent(void* self);
bool q_graphicsvideoitem_inherits(void* self, const char* classname);
void q_graphicsvideoitem_delete_later(void* self);
int32_t q_graphicsvideoitem_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_graphicsvideoitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_graphicsvideoitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_graphicsvideoitem_destroyed1(void* self, void* param1);
void q_graphicsvideoitem_on_destroyed1(void* self, void (*slot)(void*, void*));
QGraphicsScene* q_graphicsvideoitem_scene(void* self);
QGraphicsItem* q_graphicsvideoitem_parent_item(void* self);
QGraphicsItem* q_graphicsvideoitem_top_level_item(void* self);
QGraphicsObject* q_graphicsvideoitem_parent_object(void* self);
QGraphicsWidget* q_graphicsvideoitem_parent_widget(void* self);
QGraphicsWidget* q_graphicsvideoitem_top_level_widget(void* self);
QGraphicsWidget* q_graphicsvideoitem_window(void* self);
QGraphicsItem* q_graphicsvideoitem_panel(void* self);
void q_graphicsvideoitem_set_parent_item(void* self, void* parent);
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_child_items(void* self);
bool q_graphicsvideoitem_is_widget(void* self);
bool q_graphicsvideoitem_is_window(void* self);
bool q_graphicsvideoitem_is_panel(void* self);
QGraphicsObject* q_graphicsvideoitem_to_graphics_object(void* self);
QGraphicsObject* q_graphicsvideoitem_to_graphics_object2(void* self);
QGraphicsItemGroup* q_graphicsvideoitem_group(void* self);
void q_graphicsvideoitem_set_group(void* self, void* group);
int64_t q_graphicsvideoitem_flags(void* self);
void q_graphicsvideoitem_set_flag(void* self, int64_t flag);
void q_graphicsvideoitem_set_flags(void* self, int64_t flags);
int64_t q_graphicsvideoitem_cache_mode(void* self);
void q_graphicsvideoitem_set_cache_mode(void* self, int64_t mode);
int64_t q_graphicsvideoitem_panel_modality(void* self);
void q_graphicsvideoitem_set_panel_modality(void* self, int64_t panelModality);
bool q_graphicsvideoitem_is_blocked_by_modal_panel(void* self);
const char* q_graphicsvideoitem_tool_tip(void* self);
void q_graphicsvideoitem_set_tool_tip(void* self, const char* toolTip);
QCursor* q_graphicsvideoitem_cursor(void* self);
void q_graphicsvideoitem_set_cursor(void* self, void* cursor);
bool q_graphicsvideoitem_has_cursor(void* self);
void q_graphicsvideoitem_unset_cursor(void* self);
bool q_graphicsvideoitem_is_visible(void* self);
bool q_graphicsvideoitem_is_visible_to(void* self, void* parent);
void q_graphicsvideoitem_set_visible(void* self, bool visible);
void q_graphicsvideoitem_hide(void* self);
void q_graphicsvideoitem_show(void* self);
bool q_graphicsvideoitem_is_enabled(void* self);
void q_graphicsvideoitem_set_enabled(void* self, bool enabled);
bool q_graphicsvideoitem_is_selected(void* self);
void q_graphicsvideoitem_set_selected(void* self, bool selected);
bool q_graphicsvideoitem_accept_drops(void* self);
void q_graphicsvideoitem_set_accept_drops(void* self, bool on);
double q_graphicsvideoitem_opacity(void* self);
double q_graphicsvideoitem_effective_opacity(void* self);
void q_graphicsvideoitem_set_opacity(void* self, double opacity);
QGraphicsEffect* q_graphicsvideoitem_graphics_effect(void* self);
void q_graphicsvideoitem_set_graphics_effect(void* self, void* effect);
int64_t q_graphicsvideoitem_accepted_mouse_buttons(void* self);
void q_graphicsvideoitem_set_accepted_mouse_buttons(void* self, int64_t buttons);
bool q_graphicsvideoitem_accept_hover_events(void* self);
void q_graphicsvideoitem_set_accept_hover_events(void* self, bool enabled);
bool q_graphicsvideoitem_accept_touch_events(void* self);
void q_graphicsvideoitem_set_accept_touch_events(void* self, bool enabled);
bool q_graphicsvideoitem_filters_child_events(void* self);
void q_graphicsvideoitem_set_filters_child_events(void* self, bool enabled);
bool q_graphicsvideoitem_handles_child_events(void* self);
void q_graphicsvideoitem_set_handles_child_events(void* self, bool enabled);
bool q_graphicsvideoitem_is_active(void* self);
void q_graphicsvideoitem_set_active(void* self, bool active);
bool q_graphicsvideoitem_has_focus(void* self);
void q_graphicsvideoitem_set_focus(void* self);
void q_graphicsvideoitem_clear_focus(void* self);
QGraphicsItem* q_graphicsvideoitem_focus_proxy(void* self);
void q_graphicsvideoitem_set_focus_proxy(void* self, void* item);
QGraphicsItem* q_graphicsvideoitem_focus_item(void* self);
QGraphicsItem* q_graphicsvideoitem_focus_scope_item(void* self);
void q_graphicsvideoitem_grab_mouse(void* self);
void q_graphicsvideoitem_ungrab_mouse(void* self);
void q_graphicsvideoitem_grab_keyboard(void* self);
void q_graphicsvideoitem_ungrab_keyboard(void* self);
QPointF* q_graphicsvideoitem_pos(void* self);
double q_graphicsvideoitem_x(void* self);
void q_graphicsvideoitem_set_x(void* self, double x);
double q_graphicsvideoitem_y(void* self);
void q_graphicsvideoitem_set_y(void* self, double y);
QPointF* q_graphicsvideoitem_scene_pos(void* self);
void q_graphicsvideoitem_set_pos(void* self, void* pos);
void q_graphicsvideoitem_set_pos2(void* self, double x, double y);
void q_graphicsvideoitem_move_by(void* self, double dx, double dy);
void q_graphicsvideoitem_ensure_visible(void* self);
void q_graphicsvideoitem_ensure_visible2(void* self, double x, double y, double w, double h);
QTransform* q_graphicsvideoitem_transform(void* self);
QTransform* q_graphicsvideoitem_scene_transform(void* self);
QTransform* q_graphicsvideoitem_device_transform(void* self, void* viewportTransform);
QTransform* q_graphicsvideoitem_item_transform(void* self, void* other);
void q_graphicsvideoitem_set_transform(void* self, void* matrix);
void q_graphicsvideoitem_reset_transform(void* self);
void q_graphicsvideoitem_set_rotation(void* self, double angle);
double q_graphicsvideoitem_rotation(void* self);
void q_graphicsvideoitem_set_scale(void* self, double scale);
double q_graphicsvideoitem_scale(void* self);
libqt_list /* of QGraphicsTransform* */ q_graphicsvideoitem_transformations(void* self);
void q_graphicsvideoitem_set_transformations(void* self, void* transformations[]);
QPointF* q_graphicsvideoitem_transform_origin_point(void* self);
void q_graphicsvideoitem_set_transform_origin_point(void* self, void* origin);
void q_graphicsvideoitem_set_transform_origin_point2(void* self, double ax, double ay);
double q_graphicsvideoitem_z_value(void* self);
void q_graphicsvideoitem_set_z_value(void* self, double z);
void q_graphicsvideoitem_stack_before(void* self, void* sibling);
QRectF* q_graphicsvideoitem_children_bounding_rect(void* self);
QRectF* q_graphicsvideoitem_scene_bounding_rect(void* self);
bool q_graphicsvideoitem_is_clipped(void* self);
QPainterPath* q_graphicsvideoitem_clip_path(void* self);
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items(void* self);
bool q_graphicsvideoitem_is_obscured(void* self);
bool q_graphicsvideoitem_is_obscured2(void* self, double x, double y, double w, double h);
QRegion* q_graphicsvideoitem_bounding_region(void* self, void* itemToDeviceTransform);
double q_graphicsvideoitem_bounding_region_granularity(void* self);
void q_graphicsvideoitem_set_bounding_region_granularity(void* self, double granularity);
void q_graphicsvideoitem_update(void* self);
void q_graphicsvideoitem_update2(void* self, double x, double y, double width, double height);
void q_graphicsvideoitem_scroll(void* self, double dx, double dy);
QPointF* q_graphicsvideoitem_map_to_item(void* self, void* item, void* point);
QPointF* q_graphicsvideoitem_map_to_parent(void* self, void* point);
QPointF* q_graphicsvideoitem_map_to_scene(void* self, void* point);
QRectF* q_graphicsvideoitem_map_rect_to_item(void* self, void* item, void* rect);
QRectF* q_graphicsvideoitem_map_rect_to_parent(void* self, void* rect);
QRectF* q_graphicsvideoitem_map_rect_to_scene(void* self, void* rect);
QPainterPath* q_graphicsvideoitem_map_to_item4(void* self, void* item, void* path);
QPainterPath* q_graphicsvideoitem_map_to_parent_with_path(void* self, void* path);
QPainterPath* q_graphicsvideoitem_map_to_scene_with_path(void* self, void* path);
QPointF* q_graphicsvideoitem_map_from_item(void* self, void* item, void* point);
QPointF* q_graphicsvideoitem_map_from_parent(void* self, void* point);
QPointF* q_graphicsvideoitem_map_from_scene(void* self, void* point);
QRectF* q_graphicsvideoitem_map_rect_from_item(void* self, void* item, void* rect);
QRectF* q_graphicsvideoitem_map_rect_from_parent(void* self, void* rect);
QRectF* q_graphicsvideoitem_map_rect_from_scene(void* self, void* rect);
QPainterPath* q_graphicsvideoitem_map_from_item4(void* self, void* item, void* path);
QPainterPath* q_graphicsvideoitem_map_from_parent_with_path(void* self, void* path);
QPainterPath* q_graphicsvideoitem_map_from_scene_with_path(void* self, void* path);
QPointF* q_graphicsvideoitem_map_to_item5(void* self, void* item, double x, double y);
QPointF* q_graphicsvideoitem_map_to_parent2(void* self, double x, double y);
QPointF* q_graphicsvideoitem_map_to_scene2(void* self, double x, double y);
QRectF* q_graphicsvideoitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_graphicsvideoitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);
QRectF* q_graphicsvideoitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);
QPointF* q_graphicsvideoitem_map_from_item5(void* self, void* item, double x, double y);
QPointF* q_graphicsvideoitem_map_from_parent2(void* self, double x, double y);
QPointF* q_graphicsvideoitem_map_from_scene2(void* self, double x, double y);
QRectF* q_graphicsvideoitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_graphicsvideoitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);
QRectF* q_graphicsvideoitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);
bool q_graphicsvideoitem_is_ancestor_of(void* self, void* child);
QGraphicsItem* q_graphicsvideoitem_common_ancestor_item(void* self, void* other);
bool q_graphicsvideoitem_is_under_mouse(void* self);
QVariant* q_graphicsvideoitem_data(void* self, int key);
void q_graphicsvideoitem_set_data(void* self, int key, void* value);
int64_t q_graphicsvideoitem_input_method_hints(void* self);
void q_graphicsvideoitem_set_input_method_hints(void* self, int64_t hints);
void q_graphicsvideoitem_install_scene_event_filter(void* self, void* filterItem);
void q_graphicsvideoitem_remove_scene_event_filter(void* self, void* filterItem);
void q_graphicsvideoitem_set_flag2(void* self, int64_t flag, bool enabled);
void q_graphicsvideoitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);
void q_graphicsvideoitem_set_focus1(void* self, int64_t focusReason);
void q_graphicsvideoitem_ensure_visible1(void* self, void* rect);
void q_graphicsvideoitem_ensure_visible22(void* self, void* rect, int xmargin);
void q_graphicsvideoitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);
void q_graphicsvideoitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);
void q_graphicsvideoitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);
QTransform* q_graphicsvideoitem_item_transform2(void* self, void* other, bool* ok);
void q_graphicsvideoitem_set_transform2(void* self, void* matrix, bool combine);
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items1(void* self, int64_t mode);
bool q_graphicsvideoitem_is_obscured1(void* self, void* rect);
void q_graphicsvideoitem_update1(void* self, void* rect);
void q_graphicsvideoitem_scroll3(void* self, double dx, double dy, void* rect);
bool q_graphicsvideoitem_event(void* self, void* ev);
bool q_graphicsvideoitem_qbase_event(void* self, void* ev);
void q_graphicsvideoitem_on_event(void* self, bool (*slot)(void*, void*));
bool q_graphicsvideoitem_event_filter(void* self, void* watched, void* event);
bool q_graphicsvideoitem_qbase_event_filter(void* self, void* watched, void* event);
void q_graphicsvideoitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_graphicsvideoitem_child_event(void* self, void* event);
void q_graphicsvideoitem_qbase_child_event(void* self, void* event);
void q_graphicsvideoitem_on_child_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_custom_event(void* self, void* event);
void q_graphicsvideoitem_qbase_custom_event(void* self, void* event);
void q_graphicsvideoitem_on_custom_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_connect_notify(void* self, void* signal);
void q_graphicsvideoitem_qbase_connect_notify(void* self, void* signal);
void q_graphicsvideoitem_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_disconnect_notify(void* self, void* signal);
void q_graphicsvideoitem_qbase_disconnect_notify(void* self, void* signal);
void q_graphicsvideoitem_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_advance(void* self, int phase);
void q_graphicsvideoitem_qbase_advance(void* self, int phase);
void q_graphicsvideoitem_on_advance(void* self, void (*slot)(void*, int));
QPainterPath* q_graphicsvideoitem_shape(void* self);
QPainterPath* q_graphicsvideoitem_qbase_shape(void* self);
void q_graphicsvideoitem_on_shape(void* self, QPainterPath* (*slot)());
bool q_graphicsvideoitem_contains(void* self, void* point);
bool q_graphicsvideoitem_qbase_contains(void* self, void* point);
void q_graphicsvideoitem_on_contains(void* self, bool (*slot)(void*, void*));
bool q_graphicsvideoitem_collides_with_item(void* self, void* other, int64_t mode);
bool q_graphicsvideoitem_qbase_collides_with_item(void* self, void* other, int64_t mode);
void q_graphicsvideoitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));
bool q_graphicsvideoitem_collides_with_path(void* self, void* path, int64_t mode);
bool q_graphicsvideoitem_qbase_collides_with_path(void* self, void* path, int64_t mode);
void q_graphicsvideoitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));
bool q_graphicsvideoitem_is_obscured_by(void* self, void* item);
bool q_graphicsvideoitem_qbase_is_obscured_by(void* self, void* item);
void q_graphicsvideoitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));
QPainterPath* q_graphicsvideoitem_opaque_area(void* self);
QPainterPath* q_graphicsvideoitem_qbase_opaque_area(void* self);
void q_graphicsvideoitem_on_opaque_area(void* self, QPainterPath* (*slot)());
bool q_graphicsvideoitem_scene_event_filter(void* self, void* watched, void* event);
bool q_graphicsvideoitem_qbase_scene_event_filter(void* self, void* watched, void* event);
void q_graphicsvideoitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_graphicsvideoitem_scene_event(void* self, void* event);
bool q_graphicsvideoitem_qbase_scene_event(void* self, void* event);
void q_graphicsvideoitem_on_scene_event(void* self, bool (*slot)(void*, void*));
void q_graphicsvideoitem_context_menu_event(void* self, void* event);
void q_graphicsvideoitem_qbase_context_menu_event(void* self, void* event);
void q_graphicsvideoitem_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_drag_enter_event(void* self, void* event);
void q_graphicsvideoitem_qbase_drag_enter_event(void* self, void* event);
void q_graphicsvideoitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_drag_leave_event(void* self, void* event);
void q_graphicsvideoitem_qbase_drag_leave_event(void* self, void* event);
void q_graphicsvideoitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_drag_move_event(void* self, void* event);
void q_graphicsvideoitem_qbase_drag_move_event(void* self, void* event);
void q_graphicsvideoitem_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_drop_event(void* self, void* event);
void q_graphicsvideoitem_qbase_drop_event(void* self, void* event);
void q_graphicsvideoitem_on_drop_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_focus_in_event(void* self, void* event);
void q_graphicsvideoitem_qbase_focus_in_event(void* self, void* event);
void q_graphicsvideoitem_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_focus_out_event(void* self, void* event);
void q_graphicsvideoitem_qbase_focus_out_event(void* self, void* event);
void q_graphicsvideoitem_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_hover_enter_event(void* self, void* event);
void q_graphicsvideoitem_qbase_hover_enter_event(void* self, void* event);
void q_graphicsvideoitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_hover_move_event(void* self, void* event);
void q_graphicsvideoitem_qbase_hover_move_event(void* self, void* event);
void q_graphicsvideoitem_on_hover_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_hover_leave_event(void* self, void* event);
void q_graphicsvideoitem_qbase_hover_leave_event(void* self, void* event);
void q_graphicsvideoitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_key_press_event(void* self, void* event);
void q_graphicsvideoitem_qbase_key_press_event(void* self, void* event);
void q_graphicsvideoitem_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_key_release_event(void* self, void* event);
void q_graphicsvideoitem_qbase_key_release_event(void* self, void* event);
void q_graphicsvideoitem_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_mouse_press_event(void* self, void* event);
void q_graphicsvideoitem_qbase_mouse_press_event(void* self, void* event);
void q_graphicsvideoitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_mouse_move_event(void* self, void* event);
void q_graphicsvideoitem_qbase_mouse_move_event(void* self, void* event);
void q_graphicsvideoitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_mouse_release_event(void* self, void* event);
void q_graphicsvideoitem_qbase_mouse_release_event(void* self, void* event);
void q_graphicsvideoitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_mouse_double_click_event(void* self, void* event);
void q_graphicsvideoitem_qbase_mouse_double_click_event(void* self, void* event);
void q_graphicsvideoitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_wheel_event(void* self, void* event);
void q_graphicsvideoitem_qbase_wheel_event(void* self, void* event);
void q_graphicsvideoitem_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_graphicsvideoitem_input_method_event(void* self, void* event);
void q_graphicsvideoitem_qbase_input_method_event(void* self, void* event);
void q_graphicsvideoitem_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_graphicsvideoitem_input_method_query(void* self, int64_t query);
QVariant* q_graphicsvideoitem_qbase_input_method_query(void* self, int64_t query);
void q_graphicsvideoitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_graphicsvideoitem_supports_extension(void* self, int64_t extension);
bool q_graphicsvideoitem_qbase_supports_extension(void* self, int64_t extension);
void q_graphicsvideoitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));
void q_graphicsvideoitem_set_extension(void* self, int64_t extension, void* variant);
void q_graphicsvideoitem_qbase_set_extension(void* self, int64_t extension, void* variant);
void q_graphicsvideoitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));
QVariant* q_graphicsvideoitem_extension(void* self, void* variant);
QVariant* q_graphicsvideoitem_qbase_extension(void* self, void* variant);
void q_graphicsvideoitem_on_extension(void* self, QVariant* (*slot)(void*, void*));
void q_graphicsvideoitem_update_micro_focus(void* self);
void q_graphicsvideoitem_qbase_update_micro_focus(void* self);
void q_graphicsvideoitem_on_update_micro_focus(void* self, void (*slot)());
QObject* q_graphicsvideoitem_sender(void* self);
QObject* q_graphicsvideoitem_qbase_sender(void* self);
void q_graphicsvideoitem_on_sender(void* self, QObject* (*slot)());
int32_t q_graphicsvideoitem_sender_signal_index(void* self);
int32_t q_graphicsvideoitem_qbase_sender_signal_index(void* self);
void q_graphicsvideoitem_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_graphicsvideoitem_receivers(void* self, const char* signal);
int32_t q_graphicsvideoitem_qbase_receivers(void* self, const char* signal);
void q_graphicsvideoitem_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_graphicsvideoitem_is_signal_connected(void* self, void* signal);
bool q_graphicsvideoitem_qbase_is_signal_connected(void* self, void* signal);
void q_graphicsvideoitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_graphicsvideoitem_add_to_index(void* self);
void q_graphicsvideoitem_qbase_add_to_index(void* self);
void q_graphicsvideoitem_on_add_to_index(void* self, void (*slot)());
void q_graphicsvideoitem_remove_from_index(void* self);
void q_graphicsvideoitem_qbase_remove_from_index(void* self);
void q_graphicsvideoitem_on_remove_from_index(void* self, void (*slot)());
void q_graphicsvideoitem_prepare_geometry_change(void* self);
void q_graphicsvideoitem_qbase_prepare_geometry_change(void* self);
void q_graphicsvideoitem_on_prepare_geometry_change(void* self, void (*slot)());
void q_graphicsvideoitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsvideoitem.html#types

typedef enum {
    QGRAPHICSVIDEOITEM__TYPE = 14
} QGraphicsVideoItem__;

#endif
