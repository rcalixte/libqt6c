#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSVIEW_H
#define SRCQT6C_LIBQGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractscrollarea.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqbrush.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqframe.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsitem.h"
#include "libqgraphicsproxywidget.h"
#include "libqgraphicsscene.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqscrollbar.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QGraphicsView* q_graphicsview_new(void* parent);
QGraphicsView* q_graphicsview_new2();
QGraphicsView* q_graphicsview_new3(void* scene);
QGraphicsView* q_graphicsview_new4(void* scene, void* parent);
QMetaObject* q_graphicsview_meta_object(void* self);
void* q_graphicsview_metacast(void* self, const char* param1);
int32_t q_graphicsview_metacall(void* self, int64_t param1, int param2, void* param3);
void q_graphicsview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_graphicsview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_graphicsview_tr(const char* s);
QSize* q_graphicsview_size_hint(void* self);
void q_graphicsview_on_size_hint(void* self, QSize* (*slot)());
QSize* q_graphicsview_qbase_size_hint(void* self);
int64_t q_graphicsview_render_hints(void* self);
void q_graphicsview_set_render_hint(void* self, int64_t hint);
void q_graphicsview_set_render_hints(void* self, int64_t hints);
int64_t q_graphicsview_alignment(void* self);
void q_graphicsview_set_alignment(void* self, int64_t alignment);
int64_t q_graphicsview_transformation_anchor(void* self);
void q_graphicsview_set_transformation_anchor(void* self, int64_t anchor);
int64_t q_graphicsview_resize_anchor(void* self);
void q_graphicsview_set_resize_anchor(void* self, int64_t anchor);
int64_t q_graphicsview_viewport_update_mode(void* self);
void q_graphicsview_set_viewport_update_mode(void* self, int64_t mode);
int64_t q_graphicsview_optimization_flags(void* self);
void q_graphicsview_set_optimization_flag(void* self, int64_t flag);
void q_graphicsview_set_optimization_flags(void* self, int64_t flags);
int64_t q_graphicsview_drag_mode(void* self);
void q_graphicsview_set_drag_mode(void* self, int64_t mode);
int64_t q_graphicsview_rubber_band_selection_mode(void* self);
void q_graphicsview_set_rubber_band_selection_mode(void* self, int64_t mode);
QRect* q_graphicsview_rubber_band_rect(void* self);
int64_t q_graphicsview_cache_mode(void* self);
void q_graphicsview_set_cache_mode(void* self, int64_t mode);
void q_graphicsview_reset_cached_content(void* self);
bool q_graphicsview_is_interactive(void* self);
void q_graphicsview_set_interactive(void* self, bool allowed);
QGraphicsScene* q_graphicsview_scene(void* self);
void q_graphicsview_set_scene(void* self, void* scene);
QRectF* q_graphicsview_scene_rect(void* self);
void q_graphicsview_set_scene_rect(void* self, void* rect);
void q_graphicsview_set_scene_rect2(void* self, double x, double y, double w, double h);
QTransform* q_graphicsview_transform(void* self);
QTransform* q_graphicsview_viewport_transform(void* self);
bool q_graphicsview_is_transformed(void* self);
void q_graphicsview_set_transform(void* self, void* matrix);
void q_graphicsview_reset_transform(void* self);
void q_graphicsview_rotate(void* self, double angle);
void q_graphicsview_scale(void* self, double sx, double sy);
void q_graphicsview_shear(void* self, double sh, double sv);
void q_graphicsview_translate(void* self, double dx, double dy);
void q_graphicsview_center_on(void* self, void* pos);
void q_graphicsview_center_on2(void* self, double x, double y);
void q_graphicsview_center_on_with_item(void* self, void* item);
void q_graphicsview_ensure_visible(void* self, void* rect);
void q_graphicsview_ensure_visible2(void* self, double x, double y, double w, double h);
void q_graphicsview_ensure_visible_with_item(void* self, void* item);
void q_graphicsview_fit_in_view(void* self, void* rect);
void q_graphicsview_fit_in_view2(void* self, double x, double y, double w, double h);
void q_graphicsview_fit_in_view_with_item(void* self, void* item);
void q_graphicsview_render(void* self, void* painter);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items(void* self);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_pos(void* self, void* pos);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items2(void* self, int x, int y);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_rect(void* self, void* rect);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items3(void* self, int x, int y, int w, int h);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_path(void* self, void* path);
QGraphicsItem* q_graphicsview_item_at(void* self, void* pos);
QGraphicsItem* q_graphicsview_item_at2(void* self, int x, int y);
QPointF* q_graphicsview_map_to_scene(void* self, void* point);
QPainterPath* q_graphicsview_map_to_scene_with_path(void* self, void* path);
QPoint* q_graphicsview_map_from_scene(void* self, void* point);
QPainterPath* q_graphicsview_map_from_scene_with_path(void* self, void* path);
QPointF* q_graphicsview_map_to_scene2(void* self, int x, int y);
QPoint* q_graphicsview_map_from_scene2(void* self, double x, double y);
QVariant* q_graphicsview_input_method_query(void* self, int64_t query);
void q_graphicsview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_graphicsview_qbase_input_method_query(void* self, int64_t query);
QBrush* q_graphicsview_background_brush(void* self);
void q_graphicsview_set_background_brush(void* self, void* brush);
QBrush* q_graphicsview_foreground_brush(void* self);
void q_graphicsview_set_foreground_brush(void* self, void* brush);
void q_graphicsview_update_scene(void* self, void* rects[]);
void q_graphicsview_invalidate_scene(void* self);
void q_graphicsview_update_scene_rect(void* self, void* rect);
void q_graphicsview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint);
void q_graphicsview_on_rubber_band_changed(void* self, void (*slot)(void*, void*, void*, void*));
void q_graphicsview_setup_viewport(void* self, void* widget);
void q_graphicsview_on_setup_viewport(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_setup_viewport(void* self, void* widget);
bool q_graphicsview_event(void* self, void* event);
void q_graphicsview_on_event(void* self, bool (*slot)(void*, void*));
bool q_graphicsview_qbase_event(void* self, void* event);
bool q_graphicsview_viewport_event(void* self, void* event);
void q_graphicsview_on_viewport_event(void* self, bool (*slot)(void*, void*));
bool q_graphicsview_qbase_viewport_event(void* self, void* event);
void q_graphicsview_context_menu_event(void* self, void* event);
void q_graphicsview_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_context_menu_event(void* self, void* event);
void q_graphicsview_drag_enter_event(void* self, void* event);
void q_graphicsview_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_drag_enter_event(void* self, void* event);
void q_graphicsview_drag_leave_event(void* self, void* event);
void q_graphicsview_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_drag_leave_event(void* self, void* event);
void q_graphicsview_drag_move_event(void* self, void* event);
void q_graphicsview_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_drag_move_event(void* self, void* event);
void q_graphicsview_drop_event(void* self, void* event);
void q_graphicsview_on_drop_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_drop_event(void* self, void* event);
void q_graphicsview_focus_in_event(void* self, void* event);
void q_graphicsview_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_focus_in_event(void* self, void* event);
bool q_graphicsview_focus_next_prev_child(void* self, bool next);
void q_graphicsview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_graphicsview_qbase_focus_next_prev_child(void* self, bool next);
void q_graphicsview_focus_out_event(void* self, void* event);
void q_graphicsview_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_focus_out_event(void* self, void* event);
void q_graphicsview_key_press_event(void* self, void* event);
void q_graphicsview_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_key_press_event(void* self, void* event);
void q_graphicsview_key_release_event(void* self, void* event);
void q_graphicsview_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_key_release_event(void* self, void* event);
void q_graphicsview_mouse_double_click_event(void* self, void* event);
void q_graphicsview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_mouse_double_click_event(void* self, void* event);
void q_graphicsview_mouse_press_event(void* self, void* event);
void q_graphicsview_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_mouse_press_event(void* self, void* event);
void q_graphicsview_mouse_move_event(void* self, void* event);
void q_graphicsview_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_mouse_move_event(void* self, void* event);
void q_graphicsview_mouse_release_event(void* self, void* event);
void q_graphicsview_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_mouse_release_event(void* self, void* event);
void q_graphicsview_wheel_event(void* self, void* event);
void q_graphicsview_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_wheel_event(void* self, void* event);
void q_graphicsview_paint_event(void* self, void* event);
void q_graphicsview_on_paint_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_paint_event(void* self, void* event);
void q_graphicsview_resize_event(void* self, void* event);
void q_graphicsview_on_resize_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_resize_event(void* self, void* event);
void q_graphicsview_scroll_contents_by(void* self, int dx, int dy);
void q_graphicsview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
void q_graphicsview_qbase_scroll_contents_by(void* self, int dx, int dy);
void q_graphicsview_show_event(void* self, void* event);
void q_graphicsview_on_show_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_show_event(void* self, void* event);
void q_graphicsview_input_method_event(void* self, void* event);
void q_graphicsview_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_qbase_input_method_event(void* self, void* event);
void q_graphicsview_draw_background(void* self, void* painter, void* rect);
void q_graphicsview_on_draw_background(void* self, void (*slot)(void*, void*, void*));
void q_graphicsview_qbase_draw_background(void* self, void* painter, void* rect);
void q_graphicsview_draw_foreground(void* self, void* painter, void* rect);
void q_graphicsview_on_draw_foreground(void* self, void (*slot)(void*, void*, void*));
void q_graphicsview_qbase_draw_foreground(void* self, void* painter, void* rect);
const char* q_graphicsview_tr2(const char* s, const char* c);
const char* q_graphicsview_tr3(const char* s, const char* c, int n);
void q_graphicsview_set_render_hint2(void* self, int64_t hint, bool enabled);
void q_graphicsview_set_optimization_flag2(void* self, int64_t flag, bool enabled);
void q_graphicsview_set_transform2(void* self, void* matrix, bool combine);
void q_graphicsview_ensure_visible22(void* self, void* rect, int xmargin);
void q_graphicsview_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);
void q_graphicsview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);
void q_graphicsview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);
void q_graphicsview_ensure_visible23(void* self, void* item, int xmargin);
void q_graphicsview_ensure_visible32(void* self, void* item, int xmargin, int ymargin);
void q_graphicsview_fit_in_view22(void* self, void* rect, int64_t aspectRadioMode);
void q_graphicsview_fit_in_view5(void* self, double x, double y, double w, double h, int64_t aspectRadioMode);
void q_graphicsview_fit_in_view23(void* self, void* item, int64_t aspectRadioMode);
void q_graphicsview_render2(void* self, void* painter, void* target);
void q_graphicsview_render3(void* self, void* painter, void* target, void* source);
void q_graphicsview_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items22(void* self, void* rect, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items5(void* self, int x, int y, int w, int h, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_graphicsview_items24(void* self, void* path, int64_t mode);
void q_graphicsview_invalidate_scene1(void* self, void* rect);
void q_graphicsview_invalidate_scene2(void* self, void* rect, int64_t layers);
int64_t q_graphicsview_vertical_scroll_bar_policy(void* self);
void q_graphicsview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_graphicsview_vertical_scroll_bar(void* self);
void q_graphicsview_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_graphicsview_horizontal_scroll_bar_policy(void* self);
void q_graphicsview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_graphicsview_horizontal_scroll_bar(void* self);
void q_graphicsview_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_graphicsview_corner_widget(void* self);
void q_graphicsview_set_corner_widget(void* self, void* widget);
void q_graphicsview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_graphicsview_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_graphicsview_viewport(void* self);
void q_graphicsview_set_viewport(void* self, void* widget);
QSize* q_graphicsview_maximum_viewport_size(void* self);
int64_t q_graphicsview_size_adjust_policy(void* self);
void q_graphicsview_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_graphicsview_frame_style(void* self);
void q_graphicsview_set_frame_style(void* self, int frameStyle);
int32_t q_graphicsview_frame_width(void* self);
int64_t q_graphicsview_frame_shape(void* self);
void q_graphicsview_set_frame_shape(void* self, int64_t frameShape);
int64_t q_graphicsview_frame_shadow(void* self);
void q_graphicsview_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_graphicsview_line_width(void* self);
void q_graphicsview_set_line_width(void* self, int lineWidth);
int32_t q_graphicsview_mid_line_width(void* self);
void q_graphicsview_set_mid_line_width(void* self, int midLineWidth);
QRect* q_graphicsview_frame_rect(void* self);
void q_graphicsview_set_frame_rect(void* self, void* frameRect);
uintptr_t q_graphicsview_win_id(void* self);
void q_graphicsview_create_win_id(void* self);
uintptr_t q_graphicsview_internal_win_id(void* self);
uintptr_t q_graphicsview_effective_win_id(void* self);
QStyle* q_graphicsview_style(void* self);
void q_graphicsview_set_style(void* self, void* style);
bool q_graphicsview_is_top_level(void* self);
bool q_graphicsview_is_window(void* self);
bool q_graphicsview_is_modal(void* self);
int64_t q_graphicsview_window_modality(void* self);
void q_graphicsview_set_window_modality(void* self, int64_t windowModality);
bool q_graphicsview_is_enabled(void* self);
bool q_graphicsview_is_enabled_to(void* self, void* param1);
void q_graphicsview_set_enabled(void* self, bool enabled);
void q_graphicsview_set_disabled(void* self, bool disabled);
void q_graphicsview_set_window_modified(void* self, bool windowModified);
QRect* q_graphicsview_frame_geometry(void* self);
QRect* q_graphicsview_geometry(void* self);
QRect* q_graphicsview_normal_geometry(void* self);
int32_t q_graphicsview_x(void* self);
int32_t q_graphicsview_y(void* self);
QPoint* q_graphicsview_pos(void* self);
QSize* q_graphicsview_frame_size(void* self);
QSize* q_graphicsview_size(void* self);
int32_t q_graphicsview_width(void* self);
int32_t q_graphicsview_height(void* self);
QRect* q_graphicsview_rect(void* self);
QRect* q_graphicsview_children_rect(void* self);
QRegion* q_graphicsview_children_region(void* self);
QSize* q_graphicsview_minimum_size(void* self);
QSize* q_graphicsview_maximum_size(void* self);
int32_t q_graphicsview_minimum_width(void* self);
int32_t q_graphicsview_minimum_height(void* self);
int32_t q_graphicsview_maximum_width(void* self);
int32_t q_graphicsview_maximum_height(void* self);
void q_graphicsview_set_minimum_size(void* self, void* minimumSize);
void q_graphicsview_set_minimum_size2(void* self, int minw, int minh);
void q_graphicsview_set_maximum_size(void* self, void* maximumSize);
void q_graphicsview_set_maximum_size2(void* self, int maxw, int maxh);
void q_graphicsview_set_minimum_width(void* self, int minw);
void q_graphicsview_set_minimum_height(void* self, int minh);
void q_graphicsview_set_maximum_width(void* self, int maxw);
void q_graphicsview_set_maximum_height(void* self, int maxh);
QSize* q_graphicsview_size_increment(void* self);
void q_graphicsview_set_size_increment(void* self, void* sizeIncrement);
void q_graphicsview_set_size_increment2(void* self, int w, int h);
QSize* q_graphicsview_base_size(void* self);
void q_graphicsview_set_base_size(void* self, void* baseSize);
void q_graphicsview_set_base_size2(void* self, int basew, int baseh);
void q_graphicsview_set_fixed_size(void* self, void* fixedSize);
void q_graphicsview_set_fixed_size2(void* self, int w, int h);
void q_graphicsview_set_fixed_width(void* self, int w);
void q_graphicsview_set_fixed_height(void* self, int h);
QPointF* q_graphicsview_map_to_global(void* self, void* param1);
QPoint* q_graphicsview_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_graphicsview_map_from_global(void* self, void* param1);
QPoint* q_graphicsview_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_graphicsview_map_to_parent(void* self, void* param1);
QPoint* q_graphicsview_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_graphicsview_map_from_parent(void* self, void* param1);
QPoint* q_graphicsview_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_graphicsview_map_to(void* self, void* param1, void* param2);
QPoint* q_graphicsview_map_to2(void* self, void* param1, void* param2);
QPointF* q_graphicsview_map_from(void* self, void* param1, void* param2);
QPoint* q_graphicsview_map_from2(void* self, void* param1, void* param2);
QWidget* q_graphicsview_window(void* self);
QWidget* q_graphicsview_native_parent_widget(void* self);
QWidget* q_graphicsview_top_level_widget(void* self);
QPalette* q_graphicsview_palette(void* self);
void q_graphicsview_set_palette(void* self, void* palette);
void q_graphicsview_set_background_role(void* self, int64_t backgroundRole);
int64_t q_graphicsview_background_role(void* self);
void q_graphicsview_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_graphicsview_foreground_role(void* self);
QFont* q_graphicsview_font(void* self);
void q_graphicsview_set_font(void* self, void* font);
QFontMetrics* q_graphicsview_font_metrics(void* self);
QFontInfo* q_graphicsview_font_info(void* self);
QCursor* q_graphicsview_cursor(void* self);
void q_graphicsview_set_cursor(void* self, void* cursor);
void q_graphicsview_unset_cursor(void* self);
void q_graphicsview_set_mouse_tracking(void* self, bool enable);
bool q_graphicsview_has_mouse_tracking(void* self);
bool q_graphicsview_under_mouse(void* self);
void q_graphicsview_set_tablet_tracking(void* self, bool enable);
bool q_graphicsview_has_tablet_tracking(void* self);
void q_graphicsview_set_mask(void* self, void* mask);
void q_graphicsview_set_mask_with_mask(void* self, void* mask);
QRegion* q_graphicsview_mask(void* self);
void q_graphicsview_clear_mask(void* self);
void q_graphicsview_render_with_painter(void* self, void* painter);
QPixmap* q_graphicsview_grab(void* self);
QGraphicsEffect* q_graphicsview_graphics_effect(void* self);
void q_graphicsview_set_graphics_effect(void* self, void* effect);
void q_graphicsview_grab_gesture(void* self, int64_t typeVal);
void q_graphicsview_ungrab_gesture(void* self, int64_t typeVal);
void q_graphicsview_set_window_title(void* self, const char* windowTitle);
void q_graphicsview_set_style_sheet(void* self, const char* styleSheet);
const char* q_graphicsview_style_sheet(void* self);
const char* q_graphicsview_window_title(void* self);
void q_graphicsview_set_window_icon(void* self, void* icon);
QIcon* q_graphicsview_window_icon(void* self);
void q_graphicsview_set_window_icon_text(void* self, const char* windowIconText);
const char* q_graphicsview_window_icon_text(void* self);
void q_graphicsview_set_window_role(void* self, const char* windowRole);
const char* q_graphicsview_window_role(void* self);
void q_graphicsview_set_window_file_path(void* self, const char* filePath);
const char* q_graphicsview_window_file_path(void* self);
void q_graphicsview_set_window_opacity(void* self, double level);
double q_graphicsview_window_opacity(void* self);
bool q_graphicsview_is_window_modified(void* self);
void q_graphicsview_set_tool_tip(void* self, const char* toolTip);
const char* q_graphicsview_tool_tip(void* self);
void q_graphicsview_set_tool_tip_duration(void* self, int msec);
int32_t q_graphicsview_tool_tip_duration(void* self);
void q_graphicsview_set_status_tip(void* self, const char* statusTip);
const char* q_graphicsview_status_tip(void* self);
void q_graphicsview_set_whats_this(void* self, const char* whatsThis);
const char* q_graphicsview_whats_this(void* self);
const char* q_graphicsview_accessible_name(void* self);
void q_graphicsview_set_accessible_name(void* self, const char* name);
const char* q_graphicsview_accessible_description(void* self);
void q_graphicsview_set_accessible_description(void* self, const char* description);
void q_graphicsview_set_layout_direction(void* self, int64_t direction);
int64_t q_graphicsview_layout_direction(void* self);
void q_graphicsview_unset_layout_direction(void* self);
void q_graphicsview_set_locale(void* self, void* locale);
QLocale* q_graphicsview_locale(void* self);
void q_graphicsview_unset_locale(void* self);
bool q_graphicsview_is_right_to_left(void* self);
bool q_graphicsview_is_left_to_right(void* self);
void q_graphicsview_set_focus(void* self);
bool q_graphicsview_is_active_window(void* self);
void q_graphicsview_activate_window(void* self);
void q_graphicsview_clear_focus(void* self);
void q_graphicsview_set_focus_with_reason(void* self, int64_t reason);
int64_t q_graphicsview_focus_policy(void* self);
void q_graphicsview_set_focus_policy(void* self, int64_t policy);
bool q_graphicsview_has_focus(void* self);
void q_graphicsview_set_tab_order(void* param1, void* param2);
void q_graphicsview_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_graphicsview_focus_proxy(void* self);
int64_t q_graphicsview_context_menu_policy(void* self);
void q_graphicsview_set_context_menu_policy(void* self, int64_t policy);
void q_graphicsview_grab_mouse(void* self);
void q_graphicsview_grab_mouse_with_q_cursor(void* self, void* param1);
void q_graphicsview_release_mouse(void* self);
void q_graphicsview_grab_keyboard(void* self);
void q_graphicsview_release_keyboard(void* self);
int32_t q_graphicsview_grab_shortcut(void* self, void* key);
void q_graphicsview_release_shortcut(void* self, int id);
void q_graphicsview_set_shortcut_enabled(void* self, int id);
void q_graphicsview_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_graphicsview_mouse_grabber();
QWidget* q_graphicsview_keyboard_grabber();
bool q_graphicsview_updates_enabled(void* self);
void q_graphicsview_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_graphicsview_graphics_proxy_widget(void* self);
void q_graphicsview_update(void* self);
void q_graphicsview_repaint(void* self);
void q_graphicsview_update2(void* self, int x, int y, int w, int h);
void q_graphicsview_update_with_q_rect(void* self, void* param1);
void q_graphicsview_update_with_q_region(void* self, void* param1);
void q_graphicsview_repaint2(void* self, int x, int y, int w, int h);
void q_graphicsview_repaint_with_q_rect(void* self, void* param1);
void q_graphicsview_repaint_with_q_region(void* self, void* param1);
void q_graphicsview_set_hidden(void* self, bool hidden);
void q_graphicsview_show(void* self);
void q_graphicsview_hide(void* self);
void q_graphicsview_show_minimized(void* self);
void q_graphicsview_show_maximized(void* self);
void q_graphicsview_show_full_screen(void* self);
void q_graphicsview_show_normal(void* self);
bool q_graphicsview_close(void* self);
void q_graphicsview_raise(void* self);
void q_graphicsview_lower(void* self);
void q_graphicsview_stack_under(void* self, void* param1);
void q_graphicsview_move(void* self, int x, int y);
void q_graphicsview_move_with_q_point(void* self, void* param1);
void q_graphicsview_resize(void* self, int w, int h);
void q_graphicsview_resize_with_q_size(void* self, void* param1);
void q_graphicsview_set_geometry(void* self, int x, int y, int w, int h);
void q_graphicsview_set_geometry_with_geometry(void* self, void* geometry);
char* q_graphicsview_save_geometry(void* self);
bool q_graphicsview_restore_geometry(void* self, const char* geometry);
void q_graphicsview_adjust_size(void* self);
bool q_graphicsview_is_visible(void* self);
bool q_graphicsview_is_visible_to(void* self, void* param1);
bool q_graphicsview_is_hidden(void* self);
bool q_graphicsview_is_minimized(void* self);
bool q_graphicsview_is_maximized(void* self);
bool q_graphicsview_is_full_screen(void* self);
int64_t q_graphicsview_window_state(void* self);
void q_graphicsview_set_window_state(void* self, int64_t state);
void q_graphicsview_override_window_state(void* self, int64_t state);
QSizePolicy* q_graphicsview_size_policy(void* self);
void q_graphicsview_set_size_policy(void* self, void* sizePolicy);
void q_graphicsview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_graphicsview_visible_region(void* self);
void q_graphicsview_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_graphicsview_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_graphicsview_contents_margins(void* self);
QRect* q_graphicsview_contents_rect(void* self);
QLayout* q_graphicsview_layout(void* self);
void q_graphicsview_set_layout(void* self, void* layout);
void q_graphicsview_update_geometry(void* self);
void q_graphicsview_set_parent(void* self, void* parent);
void q_graphicsview_set_parent2(void* self, void* parent, int64_t f);
void q_graphicsview_scroll(void* self, int dx, int dy);
void q_graphicsview_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_graphicsview_focus_widget(void* self);
QWidget* q_graphicsview_next_in_focus_chain(void* self);
QWidget* q_graphicsview_previous_in_focus_chain(void* self);
bool q_graphicsview_accept_drops(void* self);
void q_graphicsview_set_accept_drops(void* self, bool on);
void q_graphicsview_add_action(void* self, void* action);
void q_graphicsview_add_actions(void* self, void* actions[]);
void q_graphicsview_insert_actions(void* self, void* before, void* actions[]);
void q_graphicsview_insert_action(void* self, void* before, void* action);
void q_graphicsview_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_graphicsview_actions(void* self);
QAction* q_graphicsview_add_action_with_text(void* self, const char* text);
QAction* q_graphicsview_add_action2(void* self, void* icon, const char* text);
QAction* q_graphicsview_add_action3(void* self, const char* text, void* shortcut);
QAction* q_graphicsview_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_graphicsview_parent_widget(void* self);
void q_graphicsview_set_window_flags(void* self, int64_t typeVal);
int64_t q_graphicsview_window_flags(void* self);
void q_graphicsview_set_window_flag(void* self, int64_t param1);
void q_graphicsview_override_window_flags(void* self, int64_t typeVal);
int64_t q_graphicsview_window_type(void* self);
QWidget* q_graphicsview_find(uint64_t param1);
QWidget* q_graphicsview_child_at(void* self, int x, int y);
QWidget* q_graphicsview_child_at_with_q_point(void* self, void* p);
void q_graphicsview_set_attribute(void* self, int64_t param1);
bool q_graphicsview_test_attribute(void* self, int64_t param1);
void q_graphicsview_ensure_polished(void* self);
bool q_graphicsview_is_ancestor_of(void* self, void* child);
bool q_graphicsview_auto_fill_background(void* self);
void q_graphicsview_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_graphicsview_backing_store(void* self);
QWindow* q_graphicsview_window_handle(void* self);
QScreen* q_graphicsview_screen(void* self);
void q_graphicsview_set_screen(void* self, void* screen);
QWidget* q_graphicsview_create_window_container(void* window);
void q_graphicsview_window_title_changed(void* self, const char* title);
void q_graphicsview_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_graphicsview_window_icon_changed(void* self, void* icon);
void q_graphicsview_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_graphicsview_window_icon_text_changed(void* self, const char* iconText);
void q_graphicsview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_graphicsview_custom_context_menu_requested(void* self, void* pos);
void q_graphicsview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_graphicsview_input_method_hints(void* self);
void q_graphicsview_set_input_method_hints(void* self, int64_t hints);
void q_graphicsview_render22(void* self, void* painter, void* targetOffset);
void q_graphicsview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_graphicsview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_graphicsview_grab1(void* self, void* rectangle);
void q_graphicsview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_graphicsview_grab_shortcut2(void* self, void* key, int64_t context);
void q_graphicsview_set_shortcut_enabled2(void* self, int id, bool enable);
void q_graphicsview_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_graphicsview_set_window_flag2(void* self, int64_t param1, bool on);
void q_graphicsview_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_graphicsview_create_window_container2(void* window, void* parent);
QWidget* q_graphicsview_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_graphicsview_object_name(void* self);
void q_graphicsview_set_object_name(void* self, const char* name);
bool q_graphicsview_is_widget_type(void* self);
bool q_graphicsview_is_window_type(void* self);
bool q_graphicsview_is_quick_item_type(void* self);
bool q_graphicsview_signals_blocked(void* self);
bool q_graphicsview_block_signals(void* self, bool b);
QThread* q_graphicsview_thread(void* self);
void q_graphicsview_move_to_thread(void* self, void* thread);
int32_t q_graphicsview_start_timer(void* self, int interval);
void q_graphicsview_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_graphicsview_children(void* self);
void q_graphicsview_install_event_filter(void* self, void* filterObj);
void q_graphicsview_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_graphicsview_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_graphicsview_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_graphicsview_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_graphicsview_disconnect_with_q_meta_object_connection(void* param1);
void q_graphicsview_dump_object_tree(void* self);
void q_graphicsview_dump_object_info(void* self);
bool q_graphicsview_set_property(void* self, const char* name, void* value);
QVariant* q_graphicsview_property(void* self, const char* name);
const char** q_graphicsview_dynamic_property_names(void* self);
QBindingStorage* q_graphicsview_binding_storage(void* self);
QBindingStorage* q_graphicsview_binding_storage2(void* self);
void q_graphicsview_destroyed(void* self);
void q_graphicsview_on_destroyed(void* self, void (*slot)(void*));
QObject* q_graphicsview_parent(void* self);
bool q_graphicsview_inherits(void* self, const char* classname);
void q_graphicsview_delete_later(void* self);
int32_t q_graphicsview_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_graphicsview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_graphicsview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_graphicsview_destroyed1(void* self, void* param1);
void q_graphicsview_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_graphicsview_painting_active(void* self);
int32_t q_graphicsview_width_m_m(void* self);
int32_t q_graphicsview_height_m_m(void* self);
int32_t q_graphicsview_logical_dpi_x(void* self);
int32_t q_graphicsview_logical_dpi_y(void* self);
int32_t q_graphicsview_physical_dpi_x(void* self);
int32_t q_graphicsview_physical_dpi_y(void* self);
double q_graphicsview_device_pixel_ratio(void* self);
double q_graphicsview_device_pixel_ratio_f(void* self);
int32_t q_graphicsview_color_count(void* self);
int32_t q_graphicsview_depth(void* self);
double q_graphicsview_device_pixel_ratio_f_scale();
QSize* q_graphicsview_minimum_size_hint(void* self);
QSize* q_graphicsview_qbase_minimum_size_hint(void* self);
void q_graphicsview_on_minimum_size_hint(void* self, QSize* (*slot)());
bool q_graphicsview_event_filter(void* self, void* param1, void* param2);
bool q_graphicsview_qbase_event_filter(void* self, void* param1, void* param2);
void q_graphicsview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
QSize* q_graphicsview_viewport_size_hint(void* self);
QSize* q_graphicsview_qbase_viewport_size_hint(void* self);
void q_graphicsview_on_viewport_size_hint(void* self, QSize* (*slot)());
void q_graphicsview_change_event(void* self, void* param1);
void q_graphicsview_qbase_change_event(void* self, void* param1);
void q_graphicsview_on_change_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_init_style_option(void* self, void* option);
void q_graphicsview_qbase_init_style_option(void* self, void* option);
void q_graphicsview_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_graphicsview_dev_type(void* self);
int32_t q_graphicsview_qbase_dev_type(void* self);
void q_graphicsview_on_dev_type(void* self, int32_t (*slot)());
void q_graphicsview_set_visible(void* self, bool visible);
void q_graphicsview_qbase_set_visible(void* self, bool visible);
void q_graphicsview_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_graphicsview_height_for_width(void* self, int param1);
int32_t q_graphicsview_qbase_height_for_width(void* self, int param1);
void q_graphicsview_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_graphicsview_has_height_for_width(void* self);
bool q_graphicsview_qbase_has_height_for_width(void* self);
void q_graphicsview_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_graphicsview_paint_engine(void* self);
QPaintEngine* q_graphicsview_qbase_paint_engine(void* self);
void q_graphicsview_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_graphicsview_enter_event(void* self, void* event);
void q_graphicsview_qbase_enter_event(void* self, void* event);
void q_graphicsview_on_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_leave_event(void* self, void* event);
void q_graphicsview_qbase_leave_event(void* self, void* event);
void q_graphicsview_on_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_move_event(void* self, void* event);
void q_graphicsview_qbase_move_event(void* self, void* event);
void q_graphicsview_on_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_close_event(void* self, void* event);
void q_graphicsview_qbase_close_event(void* self, void* event);
void q_graphicsview_on_close_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_tablet_event(void* self, void* event);
void q_graphicsview_qbase_tablet_event(void* self, void* event);
void q_graphicsview_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_action_event(void* self, void* event);
void q_graphicsview_qbase_action_event(void* self, void* event);
void q_graphicsview_on_action_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_hide_event(void* self, void* event);
void q_graphicsview_qbase_hide_event(void* self, void* event);
void q_graphicsview_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_graphicsview_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_graphicsview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_graphicsview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_graphicsview_metric(void* self, int64_t param1);
int32_t q_graphicsview_qbase_metric(void* self, int64_t param1);
void q_graphicsview_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_graphicsview_init_painter(void* self, void* painter);
void q_graphicsview_qbase_init_painter(void* self, void* painter);
void q_graphicsview_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_graphicsview_redirected(void* self, void* offset);
QPaintDevice* q_graphicsview_qbase_redirected(void* self, void* offset);
void q_graphicsview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_graphicsview_shared_painter(void* self);
QPainter* q_graphicsview_qbase_shared_painter(void* self);
void q_graphicsview_on_shared_painter(void* self, QPainter* (*slot)());
void q_graphicsview_timer_event(void* self, void* event);
void q_graphicsview_qbase_timer_event(void* self, void* event);
void q_graphicsview_on_timer_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_child_event(void* self, void* event);
void q_graphicsview_qbase_child_event(void* self, void* event);
void q_graphicsview_on_child_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_custom_event(void* self, void* event);
void q_graphicsview_qbase_custom_event(void* self, void* event);
void q_graphicsview_on_custom_event(void* self, void (*slot)(void*, void*));
void q_graphicsview_connect_notify(void* self, void* signal);
void q_graphicsview_qbase_connect_notify(void* self, void* signal);
void q_graphicsview_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_graphicsview_disconnect_notify(void* self, void* signal);
void q_graphicsview_qbase_disconnect_notify(void* self, void* signal);
void q_graphicsview_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_graphicsview_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_graphicsview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_graphicsview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
QMargins* q_graphicsview_viewport_margins(void* self);
QMargins* q_graphicsview_qbase_viewport_margins(void* self);
void q_graphicsview_on_viewport_margins(void* self, QMargins* (*slot)());
void q_graphicsview_draw_frame(void* self, void* param1);
void q_graphicsview_qbase_draw_frame(void* self, void* param1);
void q_graphicsview_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_graphicsview_update_micro_focus(void* self);
void q_graphicsview_qbase_update_micro_focus(void* self);
void q_graphicsview_on_update_micro_focus(void* self, void (*slot)());
void q_graphicsview_create(void* self);
void q_graphicsview_qbase_create(void* self);
void q_graphicsview_on_create(void* self, void (*slot)());
void q_graphicsview_destroy(void* self);
void q_graphicsview_qbase_destroy(void* self);
void q_graphicsview_on_destroy(void* self, void (*slot)());
bool q_graphicsview_focus_next_child(void* self);
bool q_graphicsview_qbase_focus_next_child(void* self);
void q_graphicsview_on_focus_next_child(void* self, bool (*slot)());
bool q_graphicsview_focus_previous_child(void* self);
bool q_graphicsview_qbase_focus_previous_child(void* self);
void q_graphicsview_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_graphicsview_sender(void* self);
QObject* q_graphicsview_qbase_sender(void* self);
void q_graphicsview_on_sender(void* self, QObject* (*slot)());
int32_t q_graphicsview_sender_signal_index(void* self);
int32_t q_graphicsview_qbase_sender_signal_index(void* self);
void q_graphicsview_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_graphicsview_receivers(void* self, const char* signal);
int32_t q_graphicsview_qbase_receivers(void* self, const char* signal);
void q_graphicsview_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_graphicsview_is_signal_connected(void* self, void* signal);
bool q_graphicsview_qbase_is_signal_connected(void* self, void* signal);
void q_graphicsview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_graphicsview_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsview.html#types

typedef enum {
    QGRAPHICSVIEW_VIEWPORTANCHOR_NOANCHOR = 0,
    QGRAPHICSVIEW_VIEWPORTANCHOR_ANCHORVIEWCENTER = 1,
    QGRAPHICSVIEW_VIEWPORTANCHOR_ANCHORUNDERMOUSE = 2
} QGraphicsView__ViewportAnchor;

typedef enum {
    QGRAPHICSVIEW_CACHEMODEFLAG_CACHENONE = 0,
    QGRAPHICSVIEW_CACHEMODEFLAG_CACHEBACKGROUND = 1
} QGraphicsView__CacheModeFlag;

typedef enum {
    QGRAPHICSVIEW_DRAGMODE_NODRAG = 0,
    QGRAPHICSVIEW_DRAGMODE_SCROLLHANDDRAG = 1,
    QGRAPHICSVIEW_DRAGMODE_RUBBERBANDDRAG = 2
} QGraphicsView__DragMode;

typedef enum {
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_FULLVIEWPORTUPDATE = 0,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_MINIMALVIEWPORTUPDATE = 1,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_SMARTVIEWPORTUPDATE = 2,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_NOVIEWPORTUPDATE = 3,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_BOUNDINGRECTVIEWPORTUPDATE = 4
} QGraphicsView__ViewportUpdateMode;

typedef enum {
    QGRAPHICSVIEW_OPTIMIZATIONFLAG_DONTSAVEPAINTERSTATE = 1,
    QGRAPHICSVIEW_OPTIMIZATIONFLAG_DONTADJUSTFORANTIALIASING = 2,
    QGRAPHICSVIEW_OPTIMIZATIONFLAG_INDIRECTPAINTING = 4
} QGraphicsView__OptimizationFlag;

#endif
