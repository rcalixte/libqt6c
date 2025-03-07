#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSSCENE_H
#define SRCQT6C_LIBQGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqbrush.h"
#include "libqevent.h"
#include "libqfont.h"
#include "libqgraphicsitem.h"
#include "libqgraphicsproxywidget.h"
#include "libqgraphicsview.h"
#include "libqgraphicswidget.h"
#include "libqline.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpalette.h"
#include "libqpen.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include <string.h>
#include "libqstyle.h"
#include "libqthread.h"
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqwidget.h"

QGraphicsScene* q_graphicsscene_new();
QGraphicsScene* q_graphicsscene_new2(void* sceneRect);
QGraphicsScene* q_graphicsscene_new3(double x, double y, double width, double height);
QGraphicsScene* q_graphicsscene_new4(void* parent);
QGraphicsScene* q_graphicsscene_new5(void* sceneRect, void* parent);
QGraphicsScene* q_graphicsscene_new6(double x, double y, double width, double height, void* parent);
QMetaObject* q_graphicsscene_meta_object(void* self);
void* q_graphicsscene_metacast(void* self, const char* param1);
int32_t q_graphicsscene_metacall(void* self, int64_t param1, int param2, void* param3);
void q_graphicsscene_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_graphicsscene_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_graphicsscene_tr(const char* s);
QRectF* q_graphicsscene_scene_rect(void* self);
double q_graphicsscene_width(void* self);
double q_graphicsscene_height(void* self);
void q_graphicsscene_set_scene_rect(void* self, void* rect);
void q_graphicsscene_set_scene_rect2(void* self, double x, double y, double w, double h);
void q_graphicsscene_render(void* self, void* painter);
int64_t q_graphicsscene_item_index_method(void* self);
void q_graphicsscene_set_item_index_method(void* self, int64_t method);
int32_t q_graphicsscene_bsp_tree_depth(void* self);
void q_graphicsscene_set_bsp_tree_depth(void* self, int depth);
QRectF* q_graphicsscene_items_bounding_rect(void* self);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items(void* self);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_pos(void* self, void* pos);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_rect(void* self, void* rect);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_path(void* self, void* path);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items2(void* self, double x, double y, double w, double h, int64_t mode, int64_t order);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items(void* self, void* item);
QGraphicsItem* q_graphicsscene_item_at(void* self, void* pos, void* deviceTransform);
QGraphicsItem* q_graphicsscene_item_at2(void* self, double x, double y, void* deviceTransform);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_selected_items(void* self);
QPainterPath* q_graphicsscene_selection_area(void* self);
void q_graphicsscene_set_selection_area(void* self, void* path, void* deviceTransform);
void q_graphicsscene_set_selection_area_with_path(void* self, void* path);
QGraphicsItemGroup* q_graphicsscene_create_item_group(void* self, void* items[]);
void q_graphicsscene_destroy_item_group(void* self, void* group);
void q_graphicsscene_add_item(void* self, void* item);
QGraphicsEllipseItem* q_graphicsscene_add_ellipse(void* self, void* rect);
QGraphicsLineItem* q_graphicsscene_add_line(void* self, void* line);
QGraphicsPathItem* q_graphicsscene_add_path(void* self, void* path);
QGraphicsPixmapItem* q_graphicsscene_add_pixmap(void* self, void* pixmap);
QGraphicsRectItem* q_graphicsscene_add_rect(void* self, void* rect);
QGraphicsTextItem* q_graphicsscene_add_text(void* self, const char* text);
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text(void* self, const char* text);
QGraphicsProxyWidget* q_graphicsscene_add_widget(void* self, void* widget);
QGraphicsEllipseItem* q_graphicsscene_add_ellipse2(void* self, double x, double y, double w, double h);
QGraphicsLineItem* q_graphicsscene_add_line2(void* self, double x1, double y1, double x2, double y2);
QGraphicsRectItem* q_graphicsscene_add_rect2(void* self, double x, double y, double w, double h);
void q_graphicsscene_remove_item(void* self, void* item);
QGraphicsItem* q_graphicsscene_focus_item(void* self);
void q_graphicsscene_set_focus_item(void* self, void* item);
bool q_graphicsscene_has_focus(void* self);
void q_graphicsscene_set_focus(void* self);
void q_graphicsscene_clear_focus(void* self);
void q_graphicsscene_set_sticky_focus(void* self, bool enabled);
bool q_graphicsscene_sticky_focus(void* self);
QGraphicsItem* q_graphicsscene_mouse_grabber_item(void* self);
QBrush* q_graphicsscene_background_brush(void* self);
void q_graphicsscene_set_background_brush(void* self, void* brush);
QBrush* q_graphicsscene_foreground_brush(void* self);
void q_graphicsscene_set_foreground_brush(void* self, void* brush);
QVariant* q_graphicsscene_input_method_query(void* self, int64_t query);
void q_graphicsscene_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_graphicsscene_qbase_input_method_query(void* self, int64_t query);
libqt_list /* of QGraphicsView* */ q_graphicsscene_views(void* self);
void q_graphicsscene_update(void* self, double x, double y, double w, double h);
void q_graphicsscene_invalidate(void* self, double x, double y, double w, double h);
QStyle* q_graphicsscene_style(void* self);
void q_graphicsscene_set_style(void* self, void* style);
QFont* q_graphicsscene_font(void* self);
void q_graphicsscene_set_font(void* self, void* font);
QPalette* q_graphicsscene_palette(void* self);
void q_graphicsscene_set_palette(void* self, void* palette);
bool q_graphicsscene_is_active(void* self);
QGraphicsItem* q_graphicsscene_active_panel(void* self);
void q_graphicsscene_set_active_panel(void* self, void* item);
QGraphicsWidget* q_graphicsscene_active_window(void* self);
void q_graphicsscene_set_active_window(void* self, void* widget);
bool q_graphicsscene_send_event(void* self, void* item, void* event);
double q_graphicsscene_minimum_render_size(void* self);
void q_graphicsscene_set_minimum_render_size(void* self, double minSize);
bool q_graphicsscene_focus_on_touch(void* self);
void q_graphicsscene_set_focus_on_touch(void* self, bool enabled);
void q_graphicsscene_update2(void* self);
void q_graphicsscene_invalidate2(void* self);
void q_graphicsscene_advance(void* self);
void q_graphicsscene_clear_selection(void* self);
void q_graphicsscene_clear(void* self);
bool q_graphicsscene_event(void* self, void* event);
void q_graphicsscene_on_event(void* self, bool (*slot)(void*, void*));
bool q_graphicsscene_qbase_event(void* self, void* event);
bool q_graphicsscene_event_filter(void* self, void* watched, void* event);
void q_graphicsscene_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_graphicsscene_qbase_event_filter(void* self, void* watched, void* event);
void q_graphicsscene_context_menu_event(void* self, void* event);
void q_graphicsscene_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_context_menu_event(void* self, void* event);
void q_graphicsscene_drag_enter_event(void* self, void* event);
void q_graphicsscene_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_drag_enter_event(void* self, void* event);
void q_graphicsscene_drag_move_event(void* self, void* event);
void q_graphicsscene_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_drag_move_event(void* self, void* event);
void q_graphicsscene_drag_leave_event(void* self, void* event);
void q_graphicsscene_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_drag_leave_event(void* self, void* event);
void q_graphicsscene_drop_event(void* self, void* event);
void q_graphicsscene_on_drop_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_drop_event(void* self, void* event);
void q_graphicsscene_focus_in_event(void* self, void* event);
void q_graphicsscene_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_focus_in_event(void* self, void* event);
void q_graphicsscene_focus_out_event(void* self, void* event);
void q_graphicsscene_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_focus_out_event(void* self, void* event);
void q_graphicsscene_help_event(void* self, void* event);
void q_graphicsscene_on_help_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_help_event(void* self, void* event);
void q_graphicsscene_key_press_event(void* self, void* event);
void q_graphicsscene_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_key_press_event(void* self, void* event);
void q_graphicsscene_key_release_event(void* self, void* event);
void q_graphicsscene_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_key_release_event(void* self, void* event);
void q_graphicsscene_mouse_press_event(void* self, void* event);
void q_graphicsscene_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_mouse_press_event(void* self, void* event);
void q_graphicsscene_mouse_move_event(void* self, void* event);
void q_graphicsscene_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_mouse_move_event(void* self, void* event);
void q_graphicsscene_mouse_release_event(void* self, void* event);
void q_graphicsscene_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_mouse_release_event(void* self, void* event);
void q_graphicsscene_mouse_double_click_event(void* self, void* event);
void q_graphicsscene_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_mouse_double_click_event(void* self, void* event);
void q_graphicsscene_wheel_event(void* self, void* event);
void q_graphicsscene_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_wheel_event(void* self, void* event);
void q_graphicsscene_input_method_event(void* self, void* event);
void q_graphicsscene_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_qbase_input_method_event(void* self, void* event);
void q_graphicsscene_draw_background(void* self, void* painter, void* rect);
void q_graphicsscene_on_draw_background(void* self, void (*slot)(void*, void*, void*));
void q_graphicsscene_qbase_draw_background(void* self, void* painter, void* rect);
void q_graphicsscene_draw_foreground(void* self, void* painter, void* rect);
void q_graphicsscene_on_draw_foreground(void* self, void (*slot)(void*, void*, void*));
void q_graphicsscene_qbase_draw_foreground(void* self, void* painter, void* rect);
bool q_graphicsscene_focus_next_prev_child(void* self, bool next);
void q_graphicsscene_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_graphicsscene_qbase_focus_next_prev_child(void* self, bool next);
void q_graphicsscene_changed(void* self, void* region[]);
void q_graphicsscene_on_changed(void* self, void (*slot)(void*, void*));
void q_graphicsscene_scene_rect_changed(void* self, void* rect);
void q_graphicsscene_on_scene_rect_changed(void* self, void (*slot)(void*, void*));
void q_graphicsscene_selection_changed(void* self);
void q_graphicsscene_on_selection_changed(void* self, void (*slot)(void*));
void q_graphicsscene_focus_item_changed(void* self, void* newFocus, void* oldFocus, int64_t reason);
void q_graphicsscene_on_focus_item_changed(void* self, void (*slot)(void*, void*, void*, int64_t));
const char* q_graphicsscene_tr2(const char* s, const char* c);
const char* q_graphicsscene_tr3(const char* s, const char* c, int n);
void q_graphicsscene_render2(void* self, void* painter, void* target);
void q_graphicsscene_render3(void* self, void* painter, void* target, void* source);
void q_graphicsscene_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items1(void* self, int64_t order);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items22(void* self, void* pos, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items3(void* self, void* pos, int64_t mode, int64_t order);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items4(void* self, void* pos, int64_t mode, int64_t order, void* deviceTransform);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items23(void* self, void* rect, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items32(void* self, void* rect, int64_t mode, int64_t order);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items42(void* self, void* rect, int64_t mode, int64_t order, void* deviceTransform);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items25(void* self, void* path, int64_t mode);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items34(void* self, void* path, int64_t mode, int64_t order);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items44(void* self, void* path, int64_t mode, int64_t order, void* deviceTransform);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items7(void* self, double x, double y, double w, double h, int64_t mode, int64_t order, void* deviceTransform);
libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items2(void* self, void* item, int64_t mode);
void q_graphicsscene_set_selection_area2(void* self, void* path, int64_t selectionOperation);
void q_graphicsscene_set_selection_area3(void* self, void* path, int64_t selectionOperation, int64_t mode);
void q_graphicsscene_set_selection_area4(void* self, void* path, int64_t selectionOperation, int64_t mode, void* deviceTransform);
QGraphicsEllipseItem* q_graphicsscene_add_ellipse22(void* self, void* rect, void* pen);
QGraphicsEllipseItem* q_graphicsscene_add_ellipse3(void* self, void* rect, void* pen, void* brush);
QGraphicsLineItem* q_graphicsscene_add_line22(void* self, void* line, void* pen);
QGraphicsPathItem* q_graphicsscene_add_path2(void* self, void* path, void* pen);
QGraphicsPathItem* q_graphicsscene_add_path3(void* self, void* path, void* pen, void* brush);
QGraphicsRectItem* q_graphicsscene_add_rect22(void* self, void* rect, void* pen);
QGraphicsRectItem* q_graphicsscene_add_rect3(void* self, void* rect, void* pen, void* brush);
QGraphicsTextItem* q_graphicsscene_add_text2(void* self, const char* text, void* font);
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text2(void* self, const char* text, void* font);
QGraphicsProxyWidget* q_graphicsscene_add_widget2(void* self, void* widget, int64_t wFlags);
QGraphicsEllipseItem* q_graphicsscene_add_ellipse5(void* self, double x, double y, double w, double h, void* pen);
QGraphicsEllipseItem* q_graphicsscene_add_ellipse6(void* self, double x, double y, double w, double h, void* pen, void* brush);
QGraphicsLineItem* q_graphicsscene_add_line5(void* self, double x1, double y1, double x2, double y2, void* pen);
QGraphicsRectItem* q_graphicsscene_add_rect5(void* self, double x, double y, double w, double h, void* pen);
QGraphicsRectItem* q_graphicsscene_add_rect6(void* self, double x, double y, double w, double h, void* pen, void* brush);
void q_graphicsscene_set_focus_item2(void* self, void* item, int64_t focusReason);
void q_graphicsscene_set_focus1(void* self, int64_t focusReason);
void q_graphicsscene_invalidate5(void* self, double x, double y, double w, double h, int64_t layers);
void q_graphicsscene_update1(void* self, void* rect);
void q_graphicsscene_invalidate1(void* self, void* rect);
void q_graphicsscene_invalidate22(void* self, void* rect, int64_t layers);
const char* q_graphicsscene_object_name(void* self);
void q_graphicsscene_set_object_name(void* self, const char* name);
bool q_graphicsscene_is_widget_type(void* self);
bool q_graphicsscene_is_window_type(void* self);
bool q_graphicsscene_is_quick_item_type(void* self);
bool q_graphicsscene_signals_blocked(void* self);
bool q_graphicsscene_block_signals(void* self, bool b);
QThread* q_graphicsscene_thread(void* self);
void q_graphicsscene_move_to_thread(void* self, void* thread);
int32_t q_graphicsscene_start_timer(void* self, int interval);
void q_graphicsscene_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_graphicsscene_children(void* self);
void q_graphicsscene_set_parent(void* self, void* parent);
void q_graphicsscene_install_event_filter(void* self, void* filterObj);
void q_graphicsscene_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_graphicsscene_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_graphicsscene_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_graphicsscene_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_graphicsscene_disconnect_with_q_meta_object_connection(void* param1);
void q_graphicsscene_dump_object_tree(void* self);
void q_graphicsscene_dump_object_info(void* self);
bool q_graphicsscene_set_property(void* self, const char* name, void* value);
QVariant* q_graphicsscene_property(void* self, const char* name);
const char** q_graphicsscene_dynamic_property_names(void* self);
QBindingStorage* q_graphicsscene_binding_storage(void* self);
QBindingStorage* q_graphicsscene_binding_storage2(void* self);
void q_graphicsscene_destroyed(void* self);
void q_graphicsscene_on_destroyed(void* self, void (*slot)(void*));
QObject* q_graphicsscene_parent(void* self);
bool q_graphicsscene_inherits(void* self, const char* classname);
void q_graphicsscene_delete_later(void* self);
int32_t q_graphicsscene_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_graphicsscene_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_graphicsscene_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_graphicsscene_destroyed1(void* self, void* param1);
void q_graphicsscene_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_graphicsscene_timer_event(void* self, void* event);
void q_graphicsscene_qbase_timer_event(void* self, void* event);
void q_graphicsscene_on_timer_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_child_event(void* self, void* event);
void q_graphicsscene_qbase_child_event(void* self, void* event);
void q_graphicsscene_on_child_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_custom_event(void* self, void* event);
void q_graphicsscene_qbase_custom_event(void* self, void* event);
void q_graphicsscene_on_custom_event(void* self, void (*slot)(void*, void*));
void q_graphicsscene_connect_notify(void* self, void* signal);
void q_graphicsscene_qbase_connect_notify(void* self, void* signal);
void q_graphicsscene_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_graphicsscene_disconnect_notify(void* self, void* signal);
void q_graphicsscene_qbase_disconnect_notify(void* self, void* signal);
void q_graphicsscene_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_graphicsscene_sender(void* self);
QObject* q_graphicsscene_qbase_sender(void* self);
void q_graphicsscene_on_sender(void* self, QObject* (*slot)());
int32_t q_graphicsscene_sender_signal_index(void* self);
int32_t q_graphicsscene_qbase_sender_signal_index(void* self);
void q_graphicsscene_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_graphicsscene_receivers(void* self, const char* signal);
int32_t q_graphicsscene_qbase_receivers(void* self, const char* signal);
void q_graphicsscene_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_graphicsscene_is_signal_connected(void* self, void* signal);
bool q_graphicsscene_qbase_is_signal_connected(void* self, void* signal);
void q_graphicsscene_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_graphicsscene_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscene.html#types

typedef enum {
    QGRAPHICSSCENE_ITEMINDEXMETHOD_BSPTREEINDEX = 0,
    QGRAPHICSSCENE_ITEMINDEXMETHOD_NOINDEX = -1
} QGraphicsScene__ItemIndexMethod;

typedef enum {
    QGRAPHICSSCENE_SCENELAYER_ITEMLAYER = 1,
    QGRAPHICSSCENE_SCENELAYER_BACKGROUNDLAYER = 2,
    QGRAPHICSSCENE_SCENELAYER_FOREGROUNDLAYER = 4,
    QGRAPHICSSCENE_SCENELAYER_ALLLAYERS = 65535
} QGraphicsScene__SceneLayer;

#endif
