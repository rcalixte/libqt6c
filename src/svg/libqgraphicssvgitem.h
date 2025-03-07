#pragma once
#ifndef SRC_SVGQT6C_LIBQGRAPHICSSVGITEM_H
#define SRC_SVGQT6C_LIBQGRAPHICSSVGITEM_H

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
#include "libqsvgrenderer.h"
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "../libqwidget.h"

QGraphicsSvgItem* q_graphicssvgitem_new();
QGraphicsSvgItem* q_graphicssvgitem_new2(const char* fileName);
QGraphicsSvgItem* q_graphicssvgitem_new3(void* parentItem);
QGraphicsSvgItem* q_graphicssvgitem_new4(const char* fileName, void* parentItem);
QMetaObject* q_graphicssvgitem_meta_object(void* self);
void* q_graphicssvgitem_metacast(void* self, const char* param1);
int32_t q_graphicssvgitem_metacall(void* self, int64_t param1, int param2, void* param3);
void q_graphicssvgitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_graphicssvgitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_graphicssvgitem_tr(const char* s);
void q_graphicssvgitem_set_shared_renderer(void* self, void* renderer);
QSvgRenderer* q_graphicssvgitem_renderer(void* self);
void q_graphicssvgitem_set_element_id(void* self, const char* id);
const char* q_graphicssvgitem_element_id(void* self);
void q_graphicssvgitem_set_caching_enabled(void* self, bool cachingEnabled);
bool q_graphicssvgitem_is_caching_enabled(void* self);
void q_graphicssvgitem_set_maximum_cache_size(void* self, void* size);
QSize* q_graphicssvgitem_maximum_cache_size(void* self);
QRectF* q_graphicssvgitem_bounding_rect(void* self);
void q_graphicssvgitem_on_bounding_rect(void* self, QRectF* (*slot)());
QRectF* q_graphicssvgitem_qbase_bounding_rect(void* self);
void q_graphicssvgitem_paint(void* self, void* painter, void* option, void* widget);
void q_graphicssvgitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*));
void q_graphicssvgitem_qbase_paint(void* self, void* painter, void* option, void* widget);
int32_t q_graphicssvgitem_type(void* self);
void q_graphicssvgitem_on_type(void* self, int32_t (*slot)());
int32_t q_graphicssvgitem_qbase_type(void* self);
const char* q_graphicssvgitem_tr2(const char* s, const char* c);
const char* q_graphicssvgitem_tr3(const char* s, const char* c, int n);
void q_graphicssvgitem_grab_gesture(void* self, int64_t typeVal);
void q_graphicssvgitem_ungrab_gesture(void* self, int64_t typeVal);
void q_graphicssvgitem_parent_changed(void* self);
void q_graphicssvgitem_on_parent_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_opacity_changed(void* self);
void q_graphicssvgitem_on_opacity_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_visible_changed(void* self);
void q_graphicssvgitem_on_visible_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_enabled_changed(void* self);
void q_graphicssvgitem_on_enabled_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_x_changed(void* self);
void q_graphicssvgitem_on_x_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_y_changed(void* self);
void q_graphicssvgitem_on_y_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_z_changed(void* self);
void q_graphicssvgitem_on_z_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_rotation_changed(void* self);
void q_graphicssvgitem_on_rotation_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_scale_changed(void* self);
void q_graphicssvgitem_on_scale_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_children_changed(void* self);
void q_graphicssvgitem_on_children_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_width_changed(void* self);
void q_graphicssvgitem_on_width_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_height_changed(void* self);
void q_graphicssvgitem_on_height_changed(void* self, void (*slot)(void*));
void q_graphicssvgitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
const char* q_graphicssvgitem_object_name(void* self);
void q_graphicssvgitem_set_object_name(void* self, const char* name);
bool q_graphicssvgitem_is_widget_type(void* self);
bool q_graphicssvgitem_is_window_type(void* self);
bool q_graphicssvgitem_is_quick_item_type(void* self);
bool q_graphicssvgitem_signals_blocked(void* self);
bool q_graphicssvgitem_block_signals(void* self, bool b);
QThread* q_graphicssvgitem_thread(void* self);
void q_graphicssvgitem_move_to_thread(void* self, void* thread);
int32_t q_graphicssvgitem_start_timer(void* self, int interval);
void q_graphicssvgitem_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_graphicssvgitem_children(void* self);
void q_graphicssvgitem_set_parent(void* self, void* parent);
void q_graphicssvgitem_install_event_filter(void* self, void* filterObj);
void q_graphicssvgitem_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_graphicssvgitem_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_graphicssvgitem_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_graphicssvgitem_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_graphicssvgitem_disconnect_with_q_meta_object_connection(void* param1);
void q_graphicssvgitem_dump_object_tree(void* self);
void q_graphicssvgitem_dump_object_info(void* self);
bool q_graphicssvgitem_set_property(void* self, const char* name, void* value);
QVariant* q_graphicssvgitem_property(void* self, const char* name);
const char** q_graphicssvgitem_dynamic_property_names(void* self);
QBindingStorage* q_graphicssvgitem_binding_storage(void* self);
QBindingStorage* q_graphicssvgitem_binding_storage2(void* self);
void q_graphicssvgitem_destroyed(void* self);
void q_graphicssvgitem_on_destroyed(void* self, void (*slot)(void*));
QObject* q_graphicssvgitem_parent(void* self);
bool q_graphicssvgitem_inherits(void* self, const char* classname);
void q_graphicssvgitem_delete_later(void* self);
int32_t q_graphicssvgitem_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_graphicssvgitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_graphicssvgitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_graphicssvgitem_destroyed1(void* self, void* param1);
void q_graphicssvgitem_on_destroyed1(void* self, void (*slot)(void*, void*));
QGraphicsScene* q_graphicssvgitem_scene(void* self);
QGraphicsItem* q_graphicssvgitem_parent_item(void* self);
QGraphicsItem* q_graphicssvgitem_top_level_item(void* self);
QGraphicsObject* q_graphicssvgitem_parent_object(void* self);
QGraphicsWidget* q_graphicssvgitem_parent_widget(void* self);
QGraphicsWidget* q_graphicssvgitem_top_level_widget(void* self);
QGraphicsWidget* q_graphicssvgitem_window(void* self);
QGraphicsItem* q_graphicssvgitem_panel(void* self);
void q_graphicssvgitem_set_parent_item(void* self, void* parent);
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_child_items(void* self);
bool q_graphicssvgitem_is_widget(void* self);
bool q_graphicssvgitem_is_window(void* self);
bool q_graphicssvgitem_is_panel(void* self);
QGraphicsObject* q_graphicssvgitem_to_graphics_object(void* self);
QGraphicsObject* q_graphicssvgitem_to_graphics_object2(void* self);
QGraphicsItemGroup* q_graphicssvgitem_group(void* self);
void q_graphicssvgitem_set_group(void* self, void* group);
int64_t q_graphicssvgitem_flags(void* self);
void q_graphicssvgitem_set_flag(void* self, int64_t flag);
void q_graphicssvgitem_set_flags(void* self, int64_t flags);
int64_t q_graphicssvgitem_cache_mode(void* self);
void q_graphicssvgitem_set_cache_mode(void* self, int64_t mode);
int64_t q_graphicssvgitem_panel_modality(void* self);
void q_graphicssvgitem_set_panel_modality(void* self, int64_t panelModality);
bool q_graphicssvgitem_is_blocked_by_modal_panel(void* self);
const char* q_graphicssvgitem_tool_tip(void* self);
void q_graphicssvgitem_set_tool_tip(void* self, const char* toolTip);
QCursor* q_graphicssvgitem_cursor(void* self);
void q_graphicssvgitem_set_cursor(void* self, void* cursor);
bool q_graphicssvgitem_has_cursor(void* self);
void q_graphicssvgitem_unset_cursor(void* self);
bool q_graphicssvgitem_is_visible(void* self);
bool q_graphicssvgitem_is_visible_to(void* self, void* parent);
void q_graphicssvgitem_set_visible(void* self, bool visible);
void q_graphicssvgitem_hide(void* self);
void q_graphicssvgitem_show(void* self);
bool q_graphicssvgitem_is_enabled(void* self);
void q_graphicssvgitem_set_enabled(void* self, bool enabled);
bool q_graphicssvgitem_is_selected(void* self);
void q_graphicssvgitem_set_selected(void* self, bool selected);
bool q_graphicssvgitem_accept_drops(void* self);
void q_graphicssvgitem_set_accept_drops(void* self, bool on);
double q_graphicssvgitem_opacity(void* self);
double q_graphicssvgitem_effective_opacity(void* self);
void q_graphicssvgitem_set_opacity(void* self, double opacity);
QGraphicsEffect* q_graphicssvgitem_graphics_effect(void* self);
void q_graphicssvgitem_set_graphics_effect(void* self, void* effect);
int64_t q_graphicssvgitem_accepted_mouse_buttons(void* self);
void q_graphicssvgitem_set_accepted_mouse_buttons(void* self, int64_t buttons);
bool q_graphicssvgitem_accept_hover_events(void* self);
void q_graphicssvgitem_set_accept_hover_events(void* self, bool enabled);
bool q_graphicssvgitem_accept_touch_events(void* self);
void q_graphicssvgitem_set_accept_touch_events(void* self, bool enabled);
bool q_graphicssvgitem_filters_child_events(void* self);
void q_graphicssvgitem_set_filters_child_events(void* self, bool enabled);
bool q_graphicssvgitem_handles_child_events(void* self);
void q_graphicssvgitem_set_handles_child_events(void* self, bool enabled);
bool q_graphicssvgitem_is_active(void* self);
void q_graphicssvgitem_set_active(void* self, bool active);
bool q_graphicssvgitem_has_focus(void* self);
void q_graphicssvgitem_set_focus(void* self);
void q_graphicssvgitem_clear_focus(void* self);
QGraphicsItem* q_graphicssvgitem_focus_proxy(void* self);
void q_graphicssvgitem_set_focus_proxy(void* self, void* item);
QGraphicsItem* q_graphicssvgitem_focus_item(void* self);
QGraphicsItem* q_graphicssvgitem_focus_scope_item(void* self);
void q_graphicssvgitem_grab_mouse(void* self);
void q_graphicssvgitem_ungrab_mouse(void* self);
void q_graphicssvgitem_grab_keyboard(void* self);
void q_graphicssvgitem_ungrab_keyboard(void* self);
QPointF* q_graphicssvgitem_pos(void* self);
double q_graphicssvgitem_x(void* self);
void q_graphicssvgitem_set_x(void* self, double x);
double q_graphicssvgitem_y(void* self);
void q_graphicssvgitem_set_y(void* self, double y);
QPointF* q_graphicssvgitem_scene_pos(void* self);
void q_graphicssvgitem_set_pos(void* self, void* pos);
void q_graphicssvgitem_set_pos2(void* self, double x, double y);
void q_graphicssvgitem_move_by(void* self, double dx, double dy);
void q_graphicssvgitem_ensure_visible(void* self);
void q_graphicssvgitem_ensure_visible2(void* self, double x, double y, double w, double h);
QTransform* q_graphicssvgitem_transform(void* self);
QTransform* q_graphicssvgitem_scene_transform(void* self);
QTransform* q_graphicssvgitem_device_transform(void* self, void* viewportTransform);
QTransform* q_graphicssvgitem_item_transform(void* self, void* other);
void q_graphicssvgitem_set_transform(void* self, void* matrix);
void q_graphicssvgitem_reset_transform(void* self);
void q_graphicssvgitem_set_rotation(void* self, double angle);
double q_graphicssvgitem_rotation(void* self);
void q_graphicssvgitem_set_scale(void* self, double scale);
double q_graphicssvgitem_scale(void* self);
libqt_list /* of QGraphicsTransform* */ q_graphicssvgitem_transformations(void* self);
void q_graphicssvgitem_set_transformations(void* self, void* transformations[]);
QPointF* q_graphicssvgitem_transform_origin_point(void* self);
void q_graphicssvgitem_set_transform_origin_point(void* self, void* origin);
void q_graphicssvgitem_set_transform_origin_point2(void* self, double ax, double ay);
double q_graphicssvgitem_z_value(void* self);
void q_graphicssvgitem_set_z_value(void* self, double z);
void q_graphicssvgitem_stack_before(void* self, void* sibling);
QRectF* q_graphicssvgitem_children_bounding_rect(void* self);
QRectF* q_graphicssvgitem_scene_bounding_rect(void* self);
bool q_graphicssvgitem_is_clipped(void* self);
QPainterPath* q_graphicssvgitem_clip_path(void* self);
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items(void* self);
bool q_graphicssvgitem_is_obscured(void* self);
bool q_graphicssvgitem_is_obscured2(void* self, double x, double y, double w, double h);
QRegion* q_graphicssvgitem_bounding_region(void* self, void* itemToDeviceTransform);
double q_graphicssvgitem_bounding_region_granularity(void* self);
void q_graphicssvgitem_set_bounding_region_granularity(void* self, double granularity);
void q_graphicssvgitem_update(void* self);
void q_graphicssvgitem_update2(void* self, double x, double y, double width, double height);
void q_graphicssvgitem_scroll(void* self, double dx, double dy);
QPointF* q_graphicssvgitem_map_to_item(void* self, void* item, void* point);
QPointF* q_graphicssvgitem_map_to_parent(void* self, void* point);
QPointF* q_graphicssvgitem_map_to_scene(void* self, void* point);
QRectF* q_graphicssvgitem_map_rect_to_item(void* self, void* item, void* rect);
QRectF* q_graphicssvgitem_map_rect_to_parent(void* self, void* rect);
QRectF* q_graphicssvgitem_map_rect_to_scene(void* self, void* rect);
QPainterPath* q_graphicssvgitem_map_to_item4(void* self, void* item, void* path);
QPainterPath* q_graphicssvgitem_map_to_parent_with_path(void* self, void* path);
QPainterPath* q_graphicssvgitem_map_to_scene_with_path(void* self, void* path);
QPointF* q_graphicssvgitem_map_from_item(void* self, void* item, void* point);
QPointF* q_graphicssvgitem_map_from_parent(void* self, void* point);
QPointF* q_graphicssvgitem_map_from_scene(void* self, void* point);
QRectF* q_graphicssvgitem_map_rect_from_item(void* self, void* item, void* rect);
QRectF* q_graphicssvgitem_map_rect_from_parent(void* self, void* rect);
QRectF* q_graphicssvgitem_map_rect_from_scene(void* self, void* rect);
QPainterPath* q_graphicssvgitem_map_from_item4(void* self, void* item, void* path);
QPainterPath* q_graphicssvgitem_map_from_parent_with_path(void* self, void* path);
QPainterPath* q_graphicssvgitem_map_from_scene_with_path(void* self, void* path);
QPointF* q_graphicssvgitem_map_to_item5(void* self, void* item, double x, double y);
QPointF* q_graphicssvgitem_map_to_parent2(void* self, double x, double y);
QPointF* q_graphicssvgitem_map_to_scene2(void* self, double x, double y);
QRectF* q_graphicssvgitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_graphicssvgitem_map_rect_to_parent2(void* self, double x, double y, double w, double h);
QRectF* q_graphicssvgitem_map_rect_to_scene2(void* self, double x, double y, double w, double h);
QPointF* q_graphicssvgitem_map_from_item5(void* self, void* item, double x, double y);
QPointF* q_graphicssvgitem_map_from_parent2(void* self, double x, double y);
QPointF* q_graphicssvgitem_map_from_scene2(void* self, double x, double y);
QRectF* q_graphicssvgitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);
QRectF* q_graphicssvgitem_map_rect_from_parent2(void* self, double x, double y, double w, double h);
QRectF* q_graphicssvgitem_map_rect_from_scene2(void* self, double x, double y, double w, double h);
bool q_graphicssvgitem_is_ancestor_of(void* self, void* child);
QGraphicsItem* q_graphicssvgitem_common_ancestor_item(void* self, void* other);
bool q_graphicssvgitem_is_under_mouse(void* self);
QVariant* q_graphicssvgitem_data(void* self, int key);
void q_graphicssvgitem_set_data(void* self, int key, void* value);
int64_t q_graphicssvgitem_input_method_hints(void* self);
void q_graphicssvgitem_set_input_method_hints(void* self, int64_t hints);
void q_graphicssvgitem_install_scene_event_filter(void* self, void* filterItem);
void q_graphicssvgitem_remove_scene_event_filter(void* self, void* filterItem);
void q_graphicssvgitem_set_flag2(void* self, int64_t flag, bool enabled);
void q_graphicssvgitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize);
void q_graphicssvgitem_set_focus1(void* self, int64_t focusReason);
void q_graphicssvgitem_ensure_visible1(void* self, void* rect);
void q_graphicssvgitem_ensure_visible22(void* self, void* rect, int xmargin);
void q_graphicssvgitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);
void q_graphicssvgitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);
void q_graphicssvgitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);
QTransform* q_graphicssvgitem_item_transform2(void* self, void* other, bool* ok);
void q_graphicssvgitem_set_transform2(void* self, void* matrix, bool combine);
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items1(void* self, int64_t mode);
bool q_graphicssvgitem_is_obscured1(void* self, void* rect);
void q_graphicssvgitem_update1(void* self, void* rect);
void q_graphicssvgitem_scroll3(void* self, double dx, double dy, void* rect);
bool q_graphicssvgitem_event(void* self, void* ev);
bool q_graphicssvgitem_qbase_event(void* self, void* ev);
void q_graphicssvgitem_on_event(void* self, bool (*slot)(void*, void*));
bool q_graphicssvgitem_event_filter(void* self, void* watched, void* event);
bool q_graphicssvgitem_qbase_event_filter(void* self, void* watched, void* event);
void q_graphicssvgitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_graphicssvgitem_timer_event(void* self, void* event);
void q_graphicssvgitem_qbase_timer_event(void* self, void* event);
void q_graphicssvgitem_on_timer_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_child_event(void* self, void* event);
void q_graphicssvgitem_qbase_child_event(void* self, void* event);
void q_graphicssvgitem_on_child_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_custom_event(void* self, void* event);
void q_graphicssvgitem_qbase_custom_event(void* self, void* event);
void q_graphicssvgitem_on_custom_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_connect_notify(void* self, void* signal);
void q_graphicssvgitem_qbase_connect_notify(void* self, void* signal);
void q_graphicssvgitem_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_disconnect_notify(void* self, void* signal);
void q_graphicssvgitem_qbase_disconnect_notify(void* self, void* signal);
void q_graphicssvgitem_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_advance(void* self, int phase);
void q_graphicssvgitem_qbase_advance(void* self, int phase);
void q_graphicssvgitem_on_advance(void* self, void (*slot)(void*, int));
QPainterPath* q_graphicssvgitem_shape(void* self);
QPainterPath* q_graphicssvgitem_qbase_shape(void* self);
void q_graphicssvgitem_on_shape(void* self, QPainterPath* (*slot)());
bool q_graphicssvgitem_contains(void* self, void* point);
bool q_graphicssvgitem_qbase_contains(void* self, void* point);
void q_graphicssvgitem_on_contains(void* self, bool (*slot)(void*, void*));
bool q_graphicssvgitem_collides_with_item(void* self, void* other, int64_t mode);
bool q_graphicssvgitem_qbase_collides_with_item(void* self, void* other, int64_t mode);
void q_graphicssvgitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));
bool q_graphicssvgitem_collides_with_path(void* self, void* path, int64_t mode);
bool q_graphicssvgitem_qbase_collides_with_path(void* self, void* path, int64_t mode);
void q_graphicssvgitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));
bool q_graphicssvgitem_is_obscured_by(void* self, void* item);
bool q_graphicssvgitem_qbase_is_obscured_by(void* self, void* item);
void q_graphicssvgitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*));
QPainterPath* q_graphicssvgitem_opaque_area(void* self);
QPainterPath* q_graphicssvgitem_qbase_opaque_area(void* self);
void q_graphicssvgitem_on_opaque_area(void* self, QPainterPath* (*slot)());
bool q_graphicssvgitem_scene_event_filter(void* self, void* watched, void* event);
bool q_graphicssvgitem_qbase_scene_event_filter(void* self, void* watched, void* event);
void q_graphicssvgitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_graphicssvgitem_scene_event(void* self, void* event);
bool q_graphicssvgitem_qbase_scene_event(void* self, void* event);
void q_graphicssvgitem_on_scene_event(void* self, bool (*slot)(void*, void*));
void q_graphicssvgitem_context_menu_event(void* self, void* event);
void q_graphicssvgitem_qbase_context_menu_event(void* self, void* event);
void q_graphicssvgitem_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_drag_enter_event(void* self, void* event);
void q_graphicssvgitem_qbase_drag_enter_event(void* self, void* event);
void q_graphicssvgitem_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_drag_leave_event(void* self, void* event);
void q_graphicssvgitem_qbase_drag_leave_event(void* self, void* event);
void q_graphicssvgitem_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_drag_move_event(void* self, void* event);
void q_graphicssvgitem_qbase_drag_move_event(void* self, void* event);
void q_graphicssvgitem_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_drop_event(void* self, void* event);
void q_graphicssvgitem_qbase_drop_event(void* self, void* event);
void q_graphicssvgitem_on_drop_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_focus_in_event(void* self, void* event);
void q_graphicssvgitem_qbase_focus_in_event(void* self, void* event);
void q_graphicssvgitem_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_focus_out_event(void* self, void* event);
void q_graphicssvgitem_qbase_focus_out_event(void* self, void* event);
void q_graphicssvgitem_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_hover_enter_event(void* self, void* event);
void q_graphicssvgitem_qbase_hover_enter_event(void* self, void* event);
void q_graphicssvgitem_on_hover_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_hover_move_event(void* self, void* event);
void q_graphicssvgitem_qbase_hover_move_event(void* self, void* event);
void q_graphicssvgitem_on_hover_move_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_hover_leave_event(void* self, void* event);
void q_graphicssvgitem_qbase_hover_leave_event(void* self, void* event);
void q_graphicssvgitem_on_hover_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_key_press_event(void* self, void* event);
void q_graphicssvgitem_qbase_key_press_event(void* self, void* event);
void q_graphicssvgitem_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_key_release_event(void* self, void* event);
void q_graphicssvgitem_qbase_key_release_event(void* self, void* event);
void q_graphicssvgitem_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_mouse_press_event(void* self, void* event);
void q_graphicssvgitem_qbase_mouse_press_event(void* self, void* event);
void q_graphicssvgitem_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_mouse_move_event(void* self, void* event);
void q_graphicssvgitem_qbase_mouse_move_event(void* self, void* event);
void q_graphicssvgitem_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_mouse_release_event(void* self, void* event);
void q_graphicssvgitem_qbase_mouse_release_event(void* self, void* event);
void q_graphicssvgitem_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_mouse_double_click_event(void* self, void* event);
void q_graphicssvgitem_qbase_mouse_double_click_event(void* self, void* event);
void q_graphicssvgitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_wheel_event(void* self, void* event);
void q_graphicssvgitem_qbase_wheel_event(void* self, void* event);
void q_graphicssvgitem_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_graphicssvgitem_input_method_event(void* self, void* event);
void q_graphicssvgitem_qbase_input_method_event(void* self, void* event);
void q_graphicssvgitem_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_graphicssvgitem_input_method_query(void* self, int64_t query);
QVariant* q_graphicssvgitem_qbase_input_method_query(void* self, int64_t query);
void q_graphicssvgitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_graphicssvgitem_item_change(void* self, int64_t change, void* value);
QVariant* q_graphicssvgitem_qbase_item_change(void* self, int64_t change, void* value);
void q_graphicssvgitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));
bool q_graphicssvgitem_supports_extension(void* self, int64_t extension);
bool q_graphicssvgitem_qbase_supports_extension(void* self, int64_t extension);
void q_graphicssvgitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t));
void q_graphicssvgitem_set_extension(void* self, int64_t extension, void* variant);
void q_graphicssvgitem_qbase_set_extension(void* self, int64_t extension, void* variant);
void q_graphicssvgitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));
QVariant* q_graphicssvgitem_extension(void* self, void* variant);
QVariant* q_graphicssvgitem_qbase_extension(void* self, void* variant);
void q_graphicssvgitem_on_extension(void* self, QVariant* (*slot)(void*, void*));
void q_graphicssvgitem_update_micro_focus(void* self);
void q_graphicssvgitem_qbase_update_micro_focus(void* self);
void q_graphicssvgitem_on_update_micro_focus(void* self, void (*slot)());
QObject* q_graphicssvgitem_sender(void* self);
QObject* q_graphicssvgitem_qbase_sender(void* self);
void q_graphicssvgitem_on_sender(void* self, QObject* (*slot)());
int32_t q_graphicssvgitem_sender_signal_index(void* self);
int32_t q_graphicssvgitem_qbase_sender_signal_index(void* self);
void q_graphicssvgitem_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_graphicssvgitem_receivers(void* self, const char* signal);
int32_t q_graphicssvgitem_qbase_receivers(void* self, const char* signal);
void q_graphicssvgitem_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_graphicssvgitem_is_signal_connected(void* self, void* signal);
bool q_graphicssvgitem_qbase_is_signal_connected(void* self, void* signal);
void q_graphicssvgitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_graphicssvgitem_add_to_index(void* self);
void q_graphicssvgitem_qbase_add_to_index(void* self);
void q_graphicssvgitem_on_add_to_index(void* self, void (*slot)());
void q_graphicssvgitem_remove_from_index(void* self);
void q_graphicssvgitem_qbase_remove_from_index(void* self);
void q_graphicssvgitem_on_remove_from_index(void* self, void (*slot)());
void q_graphicssvgitem_prepare_geometry_change(void* self);
void q_graphicssvgitem_qbase_prepare_geometry_change(void* self);
void q_graphicssvgitem_on_prepare_geometry_change(void* self, void (*slot)());
void q_graphicssvgitem_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html#types

typedef enum {
    QGRAPHICSSVGITEM__TYPE = 13
} QGraphicsSvgItem__;

#endif
