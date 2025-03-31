#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHARTVIEW_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractscrollarea.h"
#include "../libqaction.h"
#include "../libqevent.h"
#include "../libqanystringview.h"
#include "../libqbackingstore.h"
#include "../libqbindingstorage.h"
#include "../libqbitmap.h"
#include "../libqbrush.h"
#include "libqchart.h"
#include "../libqcursor.h"
#include "../libqfont.h"
#include "../libqfontinfo.h"
#include "../libqfontmetrics.h"
#include "../libqframe.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsitem.h"
#include "../libqgraphicsproxywidget.h"
#include "../libqgraphicsscene.h"
#include "../libqgraphicsview.h"
#include "../libqicon.h"
#include "../libqkeysequence.h"
#include "../libqlayout.h"
#include "../libqlocale.h"
#include "../libqmargins.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpainterpath.h"
#include "../libqpalette.h"
#include "../libqpixmap.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqscreen.h"
#include "../libqscrollbar.h"
#include "../libqsize.h"
#include "../libqsizepolicy.h"
#include <string.h>
#include "../libqstyle.h"
#include "../libqstyleoption.h"
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "../libqwidget.h"
#include "../libqwindow.h"

QChartView* q_chartview_new(void* parent);
QChartView* q_chartview_new2();
QChartView* q_chartview_new3(void* chart);
QChartView* q_chartview_new4(void* chart, void* parent);
QMetaObject* q_chartview_meta_object(void* self);
void* q_chartview_metacast(void* self, const char* param1);
int32_t q_chartview_metacall(void* self, int64_t param1, int param2, void* param3);
void q_chartview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_chartview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_chartview_tr(const char* s);
void q_chartview_set_rubber_band(void* self, int64_t* rubberBands);
int64_t q_chartview_rubber_band(void* self);
QChart* q_chartview_chart(void* self);
void q_chartview_set_chart(void* self, void* chart);
void q_chartview_resize_event(void* self, void* event);
void q_chartview_on_resize_event(void* self, void (*slot)(void*, void*));
void q_chartview_qbase_resize_event(void* self, void* event);
void q_chartview_mouse_press_event(void* self, void* event);
void q_chartview_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_chartview_qbase_mouse_press_event(void* self, void* event);
void q_chartview_mouse_move_event(void* self, void* event);
void q_chartview_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_chartview_qbase_mouse_move_event(void* self, void* event);
void q_chartview_mouse_release_event(void* self, void* event);
void q_chartview_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_chartview_qbase_mouse_release_event(void* self, void* event);
const char* q_chartview_tr2(const char* s, const char* c);
const char* q_chartview_tr3(const char* s, const char* c, int n);
int64_t q_chartview_render_hints(void* self);
void q_chartview_set_render_hint(void* self, int64_t hint);
void q_chartview_set_render_hints(void* self, int64_t hints);
int64_t q_chartview_alignment(void* self);
void q_chartview_set_alignment(void* self, int64_t alignment);
int64_t q_chartview_transformation_anchor(void* self);
void q_chartview_set_transformation_anchor(void* self, int64_t anchor);
int64_t q_chartview_resize_anchor(void* self);
void q_chartview_set_resize_anchor(void* self, int64_t anchor);
int64_t q_chartview_viewport_update_mode(void* self);
void q_chartview_set_viewport_update_mode(void* self, int64_t mode);
int64_t q_chartview_optimization_flags(void* self);
void q_chartview_set_optimization_flag(void* self, int64_t flag);
void q_chartview_set_optimization_flags(void* self, int64_t flags);
int64_t q_chartview_drag_mode(void* self);
void q_chartview_set_drag_mode(void* self, int64_t mode);
int64_t q_chartview_rubber_band_selection_mode(void* self);
void q_chartview_set_rubber_band_selection_mode(void* self, int64_t mode);
QRect* q_chartview_rubber_band_rect(void* self);
int64_t q_chartview_cache_mode(void* self);
void q_chartview_set_cache_mode(void* self, int64_t mode);
void q_chartview_reset_cached_content(void* self);
bool q_chartview_is_interactive(void* self);
void q_chartview_set_interactive(void* self, bool allowed);
QGraphicsScene* q_chartview_scene(void* self);
void q_chartview_set_scene(void* self, void* scene);
QRectF* q_chartview_scene_rect(void* self);
void q_chartview_set_scene_rect(void* self, void* rect);
void q_chartview_set_scene_rect2(void* self, double x, double y, double w, double h);
QTransform* q_chartview_transform(void* self);
QTransform* q_chartview_viewport_transform(void* self);
bool q_chartview_is_transformed(void* self);
void q_chartview_set_transform(void* self, void* matrix);
void q_chartview_reset_transform(void* self);
void q_chartview_rotate(void* self, double angle);
void q_chartview_scale(void* self, double sx, double sy);
void q_chartview_shear(void* self, double sh, double sv);
void q_chartview_translate(void* self, double dx, double dy);
void q_chartview_center_on(void* self, void* pos);
void q_chartview_center_on2(void* self, double x, double y);
void q_chartview_center_on_with_item(void* self, void* item);
void q_chartview_ensure_visible(void* self, void* rect);
void q_chartview_ensure_visible2(void* self, double x, double y, double w, double h);
void q_chartview_ensure_visible_with_item(void* self, void* item);
void q_chartview_fit_in_view(void* self, void* rect);
void q_chartview_fit_in_view2(void* self, double x, double y, double w, double h);
void q_chartview_fit_in_view_with_item(void* self, void* item);
void q_chartview_render(void* self, void* painter);
libqt_list /* of QGraphicsItem* */ q_chartview_items(void* self);
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_pos(void* self, void* pos);
libqt_list /* of QGraphicsItem* */ q_chartview_items2(void* self, int x, int y);
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_rect(void* self, void* rect);
libqt_list /* of QGraphicsItem* */ q_chartview_items3(void* self, int x, int y, int w, int h);
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_path(void* self, void* path);
QGraphicsItem* q_chartview_item_at(void* self, void* pos);
QGraphicsItem* q_chartview_item_at2(void* self, int x, int y);
QPointF* q_chartview_map_to_scene(void* self, void* point);
QPainterPath* q_chartview_map_to_scene_with_path(void* self, void* path);
QPoint* q_chartview_map_from_scene(void* self, void* point);
QPainterPath* q_chartview_map_from_scene_with_path(void* self, void* path);
QPointF* q_chartview_map_to_scene2(void* self, int x, int y);
QPoint* q_chartview_map_from_scene2(void* self, double x, double y);
QBrush* q_chartview_background_brush(void* self);
void q_chartview_set_background_brush(void* self, void* brush);
QBrush* q_chartview_foreground_brush(void* self);
void q_chartview_set_foreground_brush(void* self, void* brush);
void q_chartview_update_scene(void* self, void* rects[]);
void q_chartview_invalidate_scene(void* self);
void q_chartview_update_scene_rect(void* self, void* rect);
void q_chartview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint);
void q_chartview_on_rubber_band_changed(void* self, void (*slot)(void*, void*, void*, void*));
void q_chartview_set_render_hint2(void* self, int64_t hint, bool enabled);
void q_chartview_set_optimization_flag2(void* self, int64_t flag, bool enabled);
void q_chartview_set_transform2(void* self, void* matrix, bool combine);
void q_chartview_ensure_visible22(void* self, void* rect, int xmargin);
void q_chartview_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);
void q_chartview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);
void q_chartview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);
void q_chartview_ensure_visible23(void* self, void* item, int xmargin);
void q_chartview_ensure_visible32(void* self, void* item, int xmargin, int ymargin);
void q_chartview_fit_in_view22(void* self, void* rect, int64_t aspectRadioMode);
void q_chartview_fit_in_view5(void* self, double x, double y, double w, double h, int64_t aspectRadioMode);
void q_chartview_fit_in_view23(void* self, void* item, int64_t aspectRadioMode);
void q_chartview_render2(void* self, void* painter, void* target);
void q_chartview_render3(void* self, void* painter, void* target, void* source);
void q_chartview_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode);
libqt_list /* of QGraphicsItem* */ q_chartview_items22(void* self, void* rect, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_chartview_items5(void* self, int x, int y, int w, int h, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_chartview_items24(void* self, void* path, int64_t mode);
void q_chartview_invalidate_scene1(void* self, void* rect);
void q_chartview_invalidate_scene2(void* self, void* rect, int64_t layers);
int64_t q_chartview_vertical_scroll_bar_policy(void* self);
void q_chartview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_chartview_vertical_scroll_bar(void* self);
void q_chartview_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_chartview_horizontal_scroll_bar_policy(void* self);
void q_chartview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_chartview_horizontal_scroll_bar(void* self);
void q_chartview_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_chartview_corner_widget(void* self);
void q_chartview_set_corner_widget(void* self, void* widget);
void q_chartview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_chartview_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_chartview_viewport(void* self);
void q_chartview_set_viewport(void* self, void* widget);
QSize* q_chartview_maximum_viewport_size(void* self);
int64_t q_chartview_size_adjust_policy(void* self);
void q_chartview_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_chartview_frame_style(void* self);
void q_chartview_set_frame_style(void* self, int frameStyle);
int32_t q_chartview_frame_width(void* self);
int64_t q_chartview_frame_shape(void* self);
void q_chartview_set_frame_shape(void* self, int64_t frameShape);
int64_t q_chartview_frame_shadow(void* self);
void q_chartview_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_chartview_line_width(void* self);
void q_chartview_set_line_width(void* self, int lineWidth);
int32_t q_chartview_mid_line_width(void* self);
void q_chartview_set_mid_line_width(void* self, int midLineWidth);
QRect* q_chartview_frame_rect(void* self);
void q_chartview_set_frame_rect(void* self, void* frameRect);
uintptr_t q_chartview_win_id(void* self);
void q_chartview_create_win_id(void* self);
uintptr_t q_chartview_internal_win_id(void* self);
uintptr_t q_chartview_effective_win_id(void* self);
QStyle* q_chartview_style(void* self);
void q_chartview_set_style(void* self, void* style);
bool q_chartview_is_top_level(void* self);
bool q_chartview_is_window(void* self);
bool q_chartview_is_modal(void* self);
int64_t q_chartview_window_modality(void* self);
void q_chartview_set_window_modality(void* self, int64_t windowModality);
bool q_chartview_is_enabled(void* self);
bool q_chartview_is_enabled_to(void* self, void* param1);
void q_chartview_set_enabled(void* self, bool enabled);
void q_chartview_set_disabled(void* self, bool disabled);
void q_chartview_set_window_modified(void* self, bool windowModified);
QRect* q_chartview_frame_geometry(void* self);
QRect* q_chartview_geometry(void* self);
QRect* q_chartview_normal_geometry(void* self);
int32_t q_chartview_x(void* self);
int32_t q_chartview_y(void* self);
QPoint* q_chartview_pos(void* self);
QSize* q_chartview_frame_size(void* self);
QSize* q_chartview_size(void* self);
int32_t q_chartview_width(void* self);
int32_t q_chartview_height(void* self);
QRect* q_chartview_rect(void* self);
QRect* q_chartview_children_rect(void* self);
QRegion* q_chartview_children_region(void* self);
QSize* q_chartview_minimum_size(void* self);
QSize* q_chartview_maximum_size(void* self);
int32_t q_chartview_minimum_width(void* self);
int32_t q_chartview_minimum_height(void* self);
int32_t q_chartview_maximum_width(void* self);
int32_t q_chartview_maximum_height(void* self);
void q_chartview_set_minimum_size(void* self, void* minimumSize);
void q_chartview_set_minimum_size2(void* self, int minw, int minh);
void q_chartview_set_maximum_size(void* self, void* maximumSize);
void q_chartview_set_maximum_size2(void* self, int maxw, int maxh);
void q_chartview_set_minimum_width(void* self, int minw);
void q_chartview_set_minimum_height(void* self, int minh);
void q_chartview_set_maximum_width(void* self, int maxw);
void q_chartview_set_maximum_height(void* self, int maxh);
QSize* q_chartview_size_increment(void* self);
void q_chartview_set_size_increment(void* self, void* sizeIncrement);
void q_chartview_set_size_increment2(void* self, int w, int h);
QSize* q_chartview_base_size(void* self);
void q_chartview_set_base_size(void* self, void* baseSize);
void q_chartview_set_base_size2(void* self, int basew, int baseh);
void q_chartview_set_fixed_size(void* self, void* fixedSize);
void q_chartview_set_fixed_size2(void* self, int w, int h);
void q_chartview_set_fixed_width(void* self, int w);
void q_chartview_set_fixed_height(void* self, int h);
QPointF* q_chartview_map_to_global(void* self, void* param1);
QPoint* q_chartview_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_chartview_map_from_global(void* self, void* param1);
QPoint* q_chartview_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_chartview_map_to_parent(void* self, void* param1);
QPoint* q_chartview_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_chartview_map_from_parent(void* self, void* param1);
QPoint* q_chartview_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_chartview_map_to(void* self, void* param1, void* param2);
QPoint* q_chartview_map_to2(void* self, void* param1, void* param2);
QPointF* q_chartview_map_from(void* self, void* param1, void* param2);
QPoint* q_chartview_map_from2(void* self, void* param1, void* param2);
QWidget* q_chartview_window(void* self);
QWidget* q_chartview_native_parent_widget(void* self);
QWidget* q_chartview_top_level_widget(void* self);
QPalette* q_chartview_palette(void* self);
void q_chartview_set_palette(void* self, void* palette);
void q_chartview_set_background_role(void* self, int64_t backgroundRole);
int64_t q_chartview_background_role(void* self);
void q_chartview_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_chartview_foreground_role(void* self);
QFont* q_chartview_font(void* self);
void q_chartview_set_font(void* self, void* font);
QFontMetrics* q_chartview_font_metrics(void* self);
QFontInfo* q_chartview_font_info(void* self);
QCursor* q_chartview_cursor(void* self);
void q_chartview_set_cursor(void* self, void* cursor);
void q_chartview_unset_cursor(void* self);
void q_chartview_set_mouse_tracking(void* self, bool enable);
bool q_chartview_has_mouse_tracking(void* self);
bool q_chartview_under_mouse(void* self);
void q_chartview_set_tablet_tracking(void* self, bool enable);
bool q_chartview_has_tablet_tracking(void* self);
void q_chartview_set_mask(void* self, void* mask);
void q_chartview_set_mask_with_mask(void* self, void* mask);
QRegion* q_chartview_mask(void* self);
void q_chartview_clear_mask(void* self);
void q_chartview_render_with_painter(void* self, void* painter);
QPixmap* q_chartview_grab(void* self);
QGraphicsEffect* q_chartview_graphics_effect(void* self);
void q_chartview_set_graphics_effect(void* self, void* effect);
void q_chartview_grab_gesture(void* self, int64_t typeVal);
void q_chartview_ungrab_gesture(void* self, int64_t typeVal);
void q_chartview_set_window_title(void* self, const char* windowTitle);
void q_chartview_set_style_sheet(void* self, const char* styleSheet);
const char* q_chartview_style_sheet(void* self);
const char* q_chartview_window_title(void* self);
void q_chartview_set_window_icon(void* self, void* icon);
QIcon* q_chartview_window_icon(void* self);
void q_chartview_set_window_icon_text(void* self, const char* windowIconText);
const char* q_chartview_window_icon_text(void* self);
void q_chartview_set_window_role(void* self, const char* windowRole);
const char* q_chartview_window_role(void* self);
void q_chartview_set_window_file_path(void* self, const char* filePath);
const char* q_chartview_window_file_path(void* self);
void q_chartview_set_window_opacity(void* self, double level);
double q_chartview_window_opacity(void* self);
bool q_chartview_is_window_modified(void* self);
void q_chartview_set_tool_tip(void* self, const char* toolTip);
const char* q_chartview_tool_tip(void* self);
void q_chartview_set_tool_tip_duration(void* self, int msec);
int32_t q_chartview_tool_tip_duration(void* self);
void q_chartview_set_status_tip(void* self, const char* statusTip);
const char* q_chartview_status_tip(void* self);
void q_chartview_set_whats_this(void* self, const char* whatsThis);
const char* q_chartview_whats_this(void* self);
const char* q_chartview_accessible_name(void* self);
void q_chartview_set_accessible_name(void* self, const char* name);
const char* q_chartview_accessible_description(void* self);
void q_chartview_set_accessible_description(void* self, const char* description);
void q_chartview_set_layout_direction(void* self, int64_t direction);
int64_t q_chartview_layout_direction(void* self);
void q_chartview_unset_layout_direction(void* self);
void q_chartview_set_locale(void* self, void* locale);
QLocale* q_chartview_locale(void* self);
void q_chartview_unset_locale(void* self);
bool q_chartview_is_right_to_left(void* self);
bool q_chartview_is_left_to_right(void* self);
void q_chartview_set_focus(void* self);
bool q_chartview_is_active_window(void* self);
void q_chartview_activate_window(void* self);
void q_chartview_clear_focus(void* self);
void q_chartview_set_focus_with_reason(void* self, int64_t reason);
int64_t q_chartview_focus_policy(void* self);
void q_chartview_set_focus_policy(void* self, int64_t policy);
bool q_chartview_has_focus(void* self);
void q_chartview_set_tab_order(void* param1, void* param2);
void q_chartview_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_chartview_focus_proxy(void* self);
int64_t q_chartview_context_menu_policy(void* self);
void q_chartview_set_context_menu_policy(void* self, int64_t policy);
void q_chartview_grab_mouse(void* self);
void q_chartview_grab_mouse_with_q_cursor(void* self, void* param1);
void q_chartview_release_mouse(void* self);
void q_chartview_grab_keyboard(void* self);
void q_chartview_release_keyboard(void* self);
int32_t q_chartview_grab_shortcut(void* self, void* key);
void q_chartview_release_shortcut(void* self, int id);
void q_chartview_set_shortcut_enabled(void* self, int id);
void q_chartview_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_chartview_mouse_grabber();
QWidget* q_chartview_keyboard_grabber();
bool q_chartview_updates_enabled(void* self);
void q_chartview_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_chartview_graphics_proxy_widget(void* self);
void q_chartview_update(void* self);
void q_chartview_repaint(void* self);
void q_chartview_update2(void* self, int x, int y, int w, int h);
void q_chartview_update_with_q_rect(void* self, void* param1);
void q_chartview_update_with_q_region(void* self, void* param1);
void q_chartview_repaint2(void* self, int x, int y, int w, int h);
void q_chartview_repaint_with_q_rect(void* self, void* param1);
void q_chartview_repaint_with_q_region(void* self, void* param1);
void q_chartview_set_hidden(void* self, bool hidden);
void q_chartview_show(void* self);
void q_chartview_hide(void* self);
void q_chartview_show_minimized(void* self);
void q_chartview_show_maximized(void* self);
void q_chartview_show_full_screen(void* self);
void q_chartview_show_normal(void* self);
bool q_chartview_close(void* self);
void q_chartview_raise(void* self);
void q_chartview_lower(void* self);
void q_chartview_stack_under(void* self, void* param1);
void q_chartview_move(void* self, int x, int y);
void q_chartview_move_with_q_point(void* self, void* param1);
void q_chartview_resize(void* self, int w, int h);
void q_chartview_resize_with_q_size(void* self, void* param1);
void q_chartview_set_geometry(void* self, int x, int y, int w, int h);
void q_chartview_set_geometry_with_geometry(void* self, void* geometry);
char* q_chartview_save_geometry(void* self);
bool q_chartview_restore_geometry(void* self, const char* geometry);
void q_chartview_adjust_size(void* self);
bool q_chartview_is_visible(void* self);
bool q_chartview_is_visible_to(void* self, void* param1);
bool q_chartview_is_hidden(void* self);
bool q_chartview_is_minimized(void* self);
bool q_chartview_is_maximized(void* self);
bool q_chartview_is_full_screen(void* self);
int64_t q_chartview_window_state(void* self);
void q_chartview_set_window_state(void* self, int64_t state);
void q_chartview_override_window_state(void* self, int64_t state);
QSizePolicy* q_chartview_size_policy(void* self);
void q_chartview_set_size_policy(void* self, void* sizePolicy);
void q_chartview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_chartview_visible_region(void* self);
void q_chartview_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_chartview_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_chartview_contents_margins(void* self);
QRect* q_chartview_contents_rect(void* self);
QLayout* q_chartview_layout(void* self);
void q_chartview_set_layout(void* self, void* layout);
void q_chartview_update_geometry(void* self);
void q_chartview_set_parent(void* self, void* parent);
void q_chartview_set_parent2(void* self, void* parent, int64_t f);
void q_chartview_scroll(void* self, int dx, int dy);
void q_chartview_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_chartview_focus_widget(void* self);
QWidget* q_chartview_next_in_focus_chain(void* self);
QWidget* q_chartview_previous_in_focus_chain(void* self);
bool q_chartview_accept_drops(void* self);
void q_chartview_set_accept_drops(void* self, bool on);
void q_chartview_add_action(void* self, void* action);
void q_chartview_add_actions(void* self, void* actions[]);
void q_chartview_insert_actions(void* self, void* before, void* actions[]);
void q_chartview_insert_action(void* self, void* before, void* action);
void q_chartview_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_chartview_actions(void* self);
QAction* q_chartview_add_action_with_text(void* self, const char* text);
QAction* q_chartview_add_action2(void* self, void* icon, const char* text);
QAction* q_chartview_add_action3(void* self, const char* text, void* shortcut);
QAction* q_chartview_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_chartview_parent_widget(void* self);
void q_chartview_set_window_flags(void* self, int64_t typeVal);
int64_t q_chartview_window_flags(void* self);
void q_chartview_set_window_flag(void* self, int64_t param1);
void q_chartview_override_window_flags(void* self, int64_t typeVal);
int64_t q_chartview_window_type(void* self);
QWidget* q_chartview_find(uint64_t param1);
QWidget* q_chartview_child_at(void* self, int x, int y);
QWidget* q_chartview_child_at_with_q_point(void* self, void* p);
void q_chartview_set_attribute(void* self, int64_t param1);
bool q_chartview_test_attribute(void* self, int64_t param1);
void q_chartview_ensure_polished(void* self);
bool q_chartview_is_ancestor_of(void* self, void* child);
bool q_chartview_auto_fill_background(void* self);
void q_chartview_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_chartview_backing_store(void* self);
QWindow* q_chartview_window_handle(void* self);
QScreen* q_chartview_screen(void* self);
void q_chartview_set_screen(void* self, void* screen);
QWidget* q_chartview_create_window_container(void* window);
void q_chartview_window_title_changed(void* self, const char* title);
void q_chartview_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_chartview_window_icon_changed(void* self, void* icon);
void q_chartview_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_chartview_window_icon_text_changed(void* self, const char* iconText);
void q_chartview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_chartview_custom_context_menu_requested(void* self, void* pos);
void q_chartview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_chartview_input_method_hints(void* self);
void q_chartview_set_input_method_hints(void* self, int64_t hints);
void q_chartview_render22(void* self, void* painter, void* targetOffset);
void q_chartview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_chartview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_chartview_grab1(void* self, void* rectangle);
void q_chartview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_chartview_grab_shortcut2(void* self, void* key, int64_t context);
void q_chartview_set_shortcut_enabled2(void* self, int id, bool enable);
void q_chartview_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_chartview_set_window_flag2(void* self, int64_t param1, bool on);
void q_chartview_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_chartview_create_window_container2(void* window, void* parent);
QWidget* q_chartview_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_chartview_object_name(void* self);
void q_chartview_set_object_name(void* self, const char* name);
bool q_chartview_is_widget_type(void* self);
bool q_chartview_is_window_type(void* self);
bool q_chartview_is_quick_item_type(void* self);
bool q_chartview_signals_blocked(void* self);
bool q_chartview_block_signals(void* self, bool b);
QThread* q_chartview_thread(void* self);
void q_chartview_move_to_thread(void* self, void* thread);
int32_t q_chartview_start_timer(void* self, int interval);
void q_chartview_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_chartview_children(void* self);
void q_chartview_install_event_filter(void* self, void* filterObj);
void q_chartview_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_chartview_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_chartview_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_chartview_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_chartview_disconnect_with_q_meta_object_connection(void* param1);
void q_chartview_dump_object_tree(void* self);
void q_chartview_dump_object_info(void* self);
bool q_chartview_set_property(void* self, const char* name, void* value);
QVariant* q_chartview_property(void* self, const char* name);
const char** q_chartview_dynamic_property_names(void* self);
QBindingStorage* q_chartview_binding_storage(void* self);
QBindingStorage* q_chartview_binding_storage2(void* self);
void q_chartview_destroyed(void* self);
void q_chartview_on_destroyed(void* self, void (*slot)(void*));
QObject* q_chartview_parent(void* self);
bool q_chartview_inherits(void* self, const char* classname);
void q_chartview_delete_later(void* self);
int32_t q_chartview_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_chartview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_chartview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_chartview_destroyed1(void* self, void* param1);
void q_chartview_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_chartview_painting_active(void* self);
int32_t q_chartview_width_m_m(void* self);
int32_t q_chartview_height_m_m(void* self);
int32_t q_chartview_logical_dpi_x(void* self);
int32_t q_chartview_logical_dpi_y(void* self);
int32_t q_chartview_physical_dpi_x(void* self);
int32_t q_chartview_physical_dpi_y(void* self);
double q_chartview_device_pixel_ratio(void* self);
double q_chartview_device_pixel_ratio_f(void* self);
int32_t q_chartview_color_count(void* self);
int32_t q_chartview_depth(void* self);
double q_chartview_device_pixel_ratio_f_scale();
QSize* q_chartview_size_hint(void* self);
QSize* q_chartview_qbase_size_hint(void* self);
void q_chartview_on_size_hint(void* self, QSize* (*slot)());
QVariant* q_chartview_input_method_query(void* self, int64_t query);
QVariant* q_chartview_qbase_input_method_query(void* self, int64_t query);
void q_chartview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
void q_chartview_setup_viewport(void* self, void* widget);
void q_chartview_qbase_setup_viewport(void* self, void* widget);
void q_chartview_on_setup_viewport(void* self, void (*slot)(void*, void*));
bool q_chartview_event(void* self, void* event);
bool q_chartview_qbase_event(void* self, void* event);
void q_chartview_on_event(void* self, bool (*slot)(void*, void*));
bool q_chartview_viewport_event(void* self, void* event);
bool q_chartview_qbase_viewport_event(void* self, void* event);
void q_chartview_on_viewport_event(void* self, bool (*slot)(void*, void*));
void q_chartview_context_menu_event(void* self, void* event);
void q_chartview_qbase_context_menu_event(void* self, void* event);
void q_chartview_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_chartview_drag_enter_event(void* self, void* event);
void q_chartview_qbase_drag_enter_event(void* self, void* event);
void q_chartview_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_chartview_drag_leave_event(void* self, void* event);
void q_chartview_qbase_drag_leave_event(void* self, void* event);
void q_chartview_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_chartview_drag_move_event(void* self, void* event);
void q_chartview_qbase_drag_move_event(void* self, void* event);
void q_chartview_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_chartview_drop_event(void* self, void* event);
void q_chartview_qbase_drop_event(void* self, void* event);
void q_chartview_on_drop_event(void* self, void (*slot)(void*, void*));
void q_chartview_focus_in_event(void* self, void* event);
void q_chartview_qbase_focus_in_event(void* self, void* event);
void q_chartview_on_focus_in_event(void* self, void (*slot)(void*, void*));
bool q_chartview_focus_next_prev_child(void* self, bool next);
bool q_chartview_qbase_focus_next_prev_child(void* self, bool next);
void q_chartview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_chartview_focus_out_event(void* self, void* event);
void q_chartview_qbase_focus_out_event(void* self, void* event);
void q_chartview_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_chartview_key_press_event(void* self, void* event);
void q_chartview_qbase_key_press_event(void* self, void* event);
void q_chartview_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_chartview_key_release_event(void* self, void* event);
void q_chartview_qbase_key_release_event(void* self, void* event);
void q_chartview_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_chartview_mouse_double_click_event(void* self, void* event);
void q_chartview_qbase_mouse_double_click_event(void* self, void* event);
void q_chartview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_chartview_wheel_event(void* self, void* event);
void q_chartview_qbase_wheel_event(void* self, void* event);
void q_chartview_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_chartview_paint_event(void* self, void* event);
void q_chartview_qbase_paint_event(void* self, void* event);
void q_chartview_on_paint_event(void* self, void (*slot)(void*, void*));
void q_chartview_scroll_contents_by(void* self, int dx, int dy);
void q_chartview_qbase_scroll_contents_by(void* self, int dx, int dy);
void q_chartview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
void q_chartview_show_event(void* self, void* event);
void q_chartview_qbase_show_event(void* self, void* event);
void q_chartview_on_show_event(void* self, void (*slot)(void*, void*));
void q_chartview_input_method_event(void* self, void* event);
void q_chartview_qbase_input_method_event(void* self, void* event);
void q_chartview_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_chartview_draw_background(void* self, void* painter, void* rect);
void q_chartview_qbase_draw_background(void* self, void* painter, void* rect);
void q_chartview_on_draw_background(void* self, void (*slot)(void*, void*, void*));
void q_chartview_draw_foreground(void* self, void* painter, void* rect);
void q_chartview_qbase_draw_foreground(void* self, void* painter, void* rect);
void q_chartview_on_draw_foreground(void* self, void (*slot)(void*, void*, void*));
QSize* q_chartview_minimum_size_hint(void* self);
QSize* q_chartview_qbase_minimum_size_hint(void* self);
void q_chartview_on_minimum_size_hint(void* self, QSize* (*slot)());
bool q_chartview_event_filter(void* self, void* param1, void* param2);
bool q_chartview_qbase_event_filter(void* self, void* param1, void* param2);
void q_chartview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
QSize* q_chartview_viewport_size_hint(void* self);
QSize* q_chartview_qbase_viewport_size_hint(void* self);
void q_chartview_on_viewport_size_hint(void* self, QSize* (*slot)());
void q_chartview_change_event(void* self, void* param1);
void q_chartview_qbase_change_event(void* self, void* param1);
void q_chartview_on_change_event(void* self, void (*slot)(void*, void*));
void q_chartview_init_style_option(void* self, void* option);
void q_chartview_qbase_init_style_option(void* self, void* option);
void q_chartview_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_chartview_dev_type(void* self);
int32_t q_chartview_qbase_dev_type(void* self);
void q_chartview_on_dev_type(void* self, int32_t (*slot)());
void q_chartview_set_visible(void* self, bool visible);
void q_chartview_qbase_set_visible(void* self, bool visible);
void q_chartview_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_chartview_height_for_width(void* self, int param1);
int32_t q_chartview_qbase_height_for_width(void* self, int param1);
void q_chartview_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_chartview_has_height_for_width(void* self);
bool q_chartview_qbase_has_height_for_width(void* self);
void q_chartview_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_chartview_paint_engine(void* self);
QPaintEngine* q_chartview_qbase_paint_engine(void* self);
void q_chartview_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_chartview_enter_event(void* self, void* event);
void q_chartview_qbase_enter_event(void* self, void* event);
void q_chartview_on_enter_event(void* self, void (*slot)(void*, void*));
void q_chartview_leave_event(void* self, void* event);
void q_chartview_qbase_leave_event(void* self, void* event);
void q_chartview_on_leave_event(void* self, void (*slot)(void*, void*));
void q_chartview_move_event(void* self, void* event);
void q_chartview_qbase_move_event(void* self, void* event);
void q_chartview_on_move_event(void* self, void (*slot)(void*, void*));
void q_chartview_close_event(void* self, void* event);
void q_chartview_qbase_close_event(void* self, void* event);
void q_chartview_on_close_event(void* self, void (*slot)(void*, void*));
void q_chartview_tablet_event(void* self, void* event);
void q_chartview_qbase_tablet_event(void* self, void* event);
void q_chartview_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_chartview_action_event(void* self, void* event);
void q_chartview_qbase_action_event(void* self, void* event);
void q_chartview_on_action_event(void* self, void (*slot)(void*, void*));
void q_chartview_hide_event(void* self, void* event);
void q_chartview_qbase_hide_event(void* self, void* event);
void q_chartview_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_chartview_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_chartview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_chartview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_chartview_metric(void* self, int64_t param1);
int32_t q_chartview_qbase_metric(void* self, int64_t param1);
void q_chartview_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_chartview_init_painter(void* self, void* painter);
void q_chartview_qbase_init_painter(void* self, void* painter);
void q_chartview_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_chartview_redirected(void* self, void* offset);
QPaintDevice* q_chartview_qbase_redirected(void* self, void* offset);
void q_chartview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_chartview_shared_painter(void* self);
QPainter* q_chartview_qbase_shared_painter(void* self);
void q_chartview_on_shared_painter(void* self, QPainter* (*slot)());
void q_chartview_timer_event(void* self, void* event);
void q_chartview_qbase_timer_event(void* self, void* event);
void q_chartview_on_timer_event(void* self, void (*slot)(void*, void*));
void q_chartview_child_event(void* self, void* event);
void q_chartview_qbase_child_event(void* self, void* event);
void q_chartview_on_child_event(void* self, void (*slot)(void*, void*));
void q_chartview_custom_event(void* self, void* event);
void q_chartview_qbase_custom_event(void* self, void* event);
void q_chartview_on_custom_event(void* self, void (*slot)(void*, void*));
void q_chartview_connect_notify(void* self, void* signal);
void q_chartview_qbase_connect_notify(void* self, void* signal);
void q_chartview_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_chartview_disconnect_notify(void* self, void* signal);
void q_chartview_qbase_disconnect_notify(void* self, void* signal);
void q_chartview_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_chartview_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_chartview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_chartview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
QMargins* q_chartview_viewport_margins(void* self);
QMargins* q_chartview_qbase_viewport_margins(void* self);
void q_chartview_on_viewport_margins(void* self, QMargins* (*slot)());
void q_chartview_draw_frame(void* self, void* param1);
void q_chartview_qbase_draw_frame(void* self, void* param1);
void q_chartview_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_chartview_update_micro_focus(void* self);
void q_chartview_qbase_update_micro_focus(void* self);
void q_chartview_on_update_micro_focus(void* self, void (*slot)());
void q_chartview_create(void* self);
void q_chartview_qbase_create(void* self);
void q_chartview_on_create(void* self, void (*slot)());
void q_chartview_destroy(void* self);
void q_chartview_qbase_destroy(void* self);
void q_chartview_on_destroy(void* self, void (*slot)());
bool q_chartview_focus_next_child(void* self);
bool q_chartview_qbase_focus_next_child(void* self);
void q_chartview_on_focus_next_child(void* self, bool (*slot)());
bool q_chartview_focus_previous_child(void* self);
bool q_chartview_qbase_focus_previous_child(void* self);
void q_chartview_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_chartview_sender(void* self);
QObject* q_chartview_qbase_sender(void* self);
void q_chartview_on_sender(void* self, QObject* (*slot)());
int32_t q_chartview_sender_signal_index(void* self);
int32_t q_chartview_qbase_sender_signal_index(void* self);
void q_chartview_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_chartview_receivers(void* self, const char* signal);
int32_t q_chartview_qbase_receivers(void* self, const char* signal);
void q_chartview_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_chartview_is_signal_connected(void* self, void* signal);
bool q_chartview_qbase_is_signal_connected(void* self, void* signal);
void q_chartview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_chartview_delete(void* self);

/// https://doc.qt.io/qt-6/qchartview.html#types

typedef enum {
    QCHARTVIEW_RUBBERBAND_NORUBBERBAND = 0,
    QCHARTVIEW_RUBBERBAND_VERTICALRUBBERBAND = 1,
    QCHARTVIEW_RUBBERBAND_HORIZONTALRUBBERBAND = 2,
    QCHARTVIEW_RUBBERBAND_RECTANGLERUBBERBAND = 3,
    QCHARTVIEW_RUBBERBAND_CLICKTHROUGHRUBBERBAND = 128
} QChartView__RubberBand;

#endif
