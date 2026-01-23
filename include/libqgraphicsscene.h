#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSSCENE_H
#define SRC_QT6C_LIBQGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)

/// q_graphicsscene_new constructs a new QGraphicsScene object.
///
QGraphicsScene* q_graphicsscene_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)

/// q_graphicsscene_new2 constructs a new QGraphicsScene object.
///
/// @param sceneRect QRectF*
///
QGraphicsScene* q_graphicsscene_new2(void* sceneRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)

/// q_graphicsscene_new3 constructs a new QGraphicsScene object.
///
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QGraphicsScene* q_graphicsscene_new3(double x, double y, double width, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)

/// q_graphicsscene_new4 constructs a new QGraphicsScene object.
///
/// @param parent QObject*
///
QGraphicsScene* q_graphicsscene_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)

/// q_graphicsscene_new5 constructs a new QGraphicsScene object.
///
/// @param sceneRect QRectF*
/// @param parent QObject*
///
QGraphicsScene* q_graphicsscene_new5(void* sceneRect, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)

/// q_graphicsscene_new6 constructs a new QGraphicsScene object.
///
/// @param x double
/// @param y double
/// @param width double
/// @param height double
/// @param parent QObject*
///
QGraphicsScene* q_graphicsscene_new6(double x, double y, double width, double height, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsScene*
///
const QMetaObject* q_graphicsscene_meta_object(void* self);

/// @param self QGraphicsScene*
/// @param param1 const char*
///
void* q_graphicsscene_metacast(void* self, const char* param1);

/// @param self QGraphicsScene*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsscene_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback int32_t func(QGraphicsScene* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsscene_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsscene_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsscene_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
///
/// @param self QGraphicsScene*
///
QRectF* q_graphicsscene_scene_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
///
/// @param self QGraphicsScene*
///
double q_graphicsscene_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
///
/// @param self QGraphicsScene*
///
double q_graphicsscene_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_set_scene_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsscene_set_scene_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
///
void q_graphicsscene_render(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
///
/// @param self QGraphicsScene*
///
/// @return enum QGraphicsScene__ItemIndexMethod
///
int32_t q_graphicsscene_item_index_method(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
///
/// @param self QGraphicsScene*
/// @param method enum QGraphicsScene__ItemIndexMethod
///
void q_graphicsscene_set_item_index_method(void* self, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
///
/// @param self QGraphicsScene*
///
int32_t q_graphicsscene_bsp_tree_depth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
///
/// @param self QGraphicsScene*
/// @param depth int
///
void q_graphicsscene_set_bsp_tree_depth(void* self, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
///
/// @param self QGraphicsScene*
///
QRectF* q_graphicsscene_items_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param pos QPointF*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items2(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items3(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items5(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items6(void* self, double x, double y, double w, double h, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_colliding_items(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// @param self QGraphicsScene*
/// @param pos QPointF*
/// @param deviceTransform QTransform*
///
QGraphicsItem* q_graphicsscene_item_at(void* self, void* pos, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param deviceTransform QTransform*
///
QGraphicsItem* q_graphicsscene_item_at2(void* self, double x, double y, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
///
/// @param self QGraphicsScene*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_selected_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
///
/// @param self QGraphicsScene*
///
QPainterPath* q_graphicsscene_selection_area(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param deviceTransform QTransform*
///
void q_graphicsscene_set_selection_area(void* self, void* path, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
///
void q_graphicsscene_set_selection_area2(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
///
/// @param self QGraphicsScene*
/// @param items libqt_list of QGraphicsItem*
///
QGraphicsItemGroup* q_graphicsscene_create_item_group(void* self, libqt_list /* of QGraphicsItem* */ items);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
///
/// @param self QGraphicsScene*
/// @param group QGraphicsItemGroup*
///
void q_graphicsscene_destroy_item_group(void* self, void* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
void q_graphicsscene_add_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param line QLineF*
///
QGraphicsLineItem* q_graphicsscene_add_line(void* self, void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
///
QGraphicsPathItem* q_graphicsscene_add_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
///
/// @param self QGraphicsScene*
/// @param pixmap QPixmap*
///
QGraphicsPixmapItem* q_graphicsscene_add_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
QGraphicsRectItem* q_graphicsscene_add_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// @param self QGraphicsScene*
/// @param text const char*
///
QGraphicsTextItem* q_graphicsscene_add_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// @param self QGraphicsScene*
/// @param text const char*
///
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
///
/// @param self QGraphicsScene*
/// @param widget QWidget*
///
QGraphicsProxyWidget* q_graphicsscene_add_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
QGraphicsLineItem* q_graphicsscene_add_line2(void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QGraphicsRectItem* q_graphicsscene_add_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
void q_graphicsscene_remove_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
///
/// @param self QGraphicsScene*
///
QGraphicsItem* q_graphicsscene_focus_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
void q_graphicsscene_set_focus_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_has_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_set_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_clear_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
///
/// @param self QGraphicsScene*
/// @param enabled bool
///
void q_graphicsscene_set_sticky_focus(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_sticky_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
///
/// @param self QGraphicsScene*
///
QGraphicsItem* q_graphicsscene_mouse_grabber_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
///
/// @param self QGraphicsScene*
///
QBrush* q_graphicsscene_background_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
///
/// @param self QGraphicsScene*
/// @param brush QBrush*
///
void q_graphicsscene_set_background_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
///
/// @param self QGraphicsScene*
///
QBrush* q_graphicsscene_foreground_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
///
/// @param self QGraphicsScene*
/// @param brush QBrush*
///
void q_graphicsscene_set_foreground_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// @param self QGraphicsScene*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsscene_input_method_query(void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback QVariant* func(QGraphicsScene* self, enum Qt__InputMethodQuery query)
///
void q_graphicsscene_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsscene_qbase_input_method_query(void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
///
/// @param self QGraphicsScene*
///
/// @return libqt_list of QGraphicsView*
///
libqt_list q_graphicsscene_views(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsscene_update(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsscene_invalidate(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
///
/// @param self QGraphicsScene*
///
QStyle* q_graphicsscene_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
///
/// @param self QGraphicsScene*
/// @param style QStyle*
///
void q_graphicsscene_set_style(void* self, void* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
///
/// @param self QGraphicsScene*
///
QFont* q_graphicsscene_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
///
/// @param self QGraphicsScene*
/// @param font QFont*
///
void q_graphicsscene_set_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
///
/// @param self QGraphicsScene*
///
QPalette* q_graphicsscene_palette(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
///
/// @param self QGraphicsScene*
/// @param palette QPalette*
///
void q_graphicsscene_set_palette(void* self, void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
///
/// @param self QGraphicsScene*
///
QGraphicsItem* q_graphicsscene_active_panel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
void q_graphicsscene_set_active_panel(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
///
/// @param self QGraphicsScene*
///
QGraphicsWidget* q_graphicsscene_active_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
///
/// @param self QGraphicsScene*
/// @param widget QGraphicsWidget*
///
void q_graphicsscene_set_active_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
/// @param event QEvent*
///
bool q_graphicsscene_send_event(void* self, void* item, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
///
/// @param self QGraphicsScene*
///
double q_graphicsscene_minimum_render_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
///
/// @param self QGraphicsScene*
/// @param minSize double
///
void q_graphicsscene_set_minimum_render_size(void* self, double minSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_focus_on_touch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
///
/// @param self QGraphicsScene*
/// @param enabled bool
///
void q_graphicsscene_set_focus_on_touch(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_update2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_invalidate2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_advance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_clear_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// @param self QGraphicsScene*
/// @param event QEvent*
///
bool q_graphicsscene_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback bool func(QGraphicsScene* self, QEvent* event)
///
void q_graphicsscene_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QEvent*
///
bool q_graphicsscene_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// @param self QGraphicsScene*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsscene_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback bool func(QGraphicsScene* self, QObject* watched, QEvent* event)
///
void q_graphicsscene_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsscene_qbase_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_graphicsscene_context_menu_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event)
///
void q_graphicsscene_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_graphicsscene_qbase_context_menu_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsscene_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_qbase_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_drag_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsscene_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_qbase_drag_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsscene_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_qbase_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_drop_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicsscene_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicsscene_qbase_drop_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// @param self QGraphicsScene*
/// @param event QFocusEvent*
///
void q_graphicsscene_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QFocusEvent* event)
///
void q_graphicsscene_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QFocusEvent*
///
void q_graphicsscene_qbase_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// @param self QGraphicsScene*
/// @param event QFocusEvent*
///
void q_graphicsscene_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QFocusEvent* event)
///
void q_graphicsscene_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QFocusEvent*
///
void q_graphicsscene_qbase_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneHelpEvent*
///
void q_graphicsscene_help_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneHelpEvent* event)
///
void q_graphicsscene_on_help_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneHelpEvent*
///
void q_graphicsscene_qbase_help_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// @param self QGraphicsScene*
/// @param event QKeyEvent*
///
void q_graphicsscene_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QKeyEvent* event)
///
void q_graphicsscene_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QKeyEvent*
///
void q_graphicsscene_qbase_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// @param self QGraphicsScene*
/// @param event QKeyEvent*
///
void q_graphicsscene_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QKeyEvent* event)
///
void q_graphicsscene_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QKeyEvent*
///
void q_graphicsscene_qbase_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsscene_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsscene_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_qbase_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsscene_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_qbase_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicsscene_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicsscene_qbase_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneWheelEvent*
///
void q_graphicsscene_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsSceneWheelEvent* event)
///
void q_graphicsscene_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QGraphicsSceneWheelEvent*
///
void q_graphicsscene_qbase_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// @param self QGraphicsScene*
/// @param event QInputMethodEvent*
///
void q_graphicsscene_input_method_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QInputMethodEvent* event)
///
void q_graphicsscene_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param event QInputMethodEvent*
///
void q_graphicsscene_qbase_input_method_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_draw_background(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QPainter* painter, QRectF* rect)
///
void q_graphicsscene_on_draw_background(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_qbase_draw_background(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_draw_foreground(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QPainter* painter, QRectF* rect)
///
void q_graphicsscene_on_draw_foreground(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_qbase_draw_foreground(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// @param self QGraphicsScene*
/// @param next bool
///
bool q_graphicsscene_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback bool func(QGraphicsScene* self, bool next)
///
void q_graphicsscene_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param next bool
///
bool q_graphicsscene_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// @param self QGraphicsScene*
/// @param region libqt_list of QRectF*
///
void q_graphicsscene_changed(void* self, libqt_list /* of QRectF* */ region);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QRectF** region)
///
void q_graphicsscene_on_changed(void* self, void (*callback)(void*, QRectF**));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_scene_rect_changed(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QRectF* rect)
///
void q_graphicsscene_on_scene_rect_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self)
///
void q_graphicsscene_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
///
/// @param self QGraphicsScene*
/// @param newFocus QGraphicsItem*
/// @param oldFocus QGraphicsItem*
/// @param reason enum Qt__FocusReason
///
void q_graphicsscene_focus_item_changed(void* self, void* newFocus, void* oldFocus, int32_t reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, enum Qt__FocusReason reason)
///
void q_graphicsscene_on_focus_item_changed(void* self, void (*callback)(void*, void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsscene_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsscene_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param target QRectF*
///
void q_graphicsscene_render2(void* self, void* painter, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRectF*
///
void q_graphicsscene_render3(void* self, void* painter, void* target, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRectF*
/// @param aspectRatioMode enum Qt__AspectRatioMode
///
void q_graphicsscene_render4(void* self, void* painter, void* target, void* source, int32_t aspectRatioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items1(void* self, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param pos QPointF*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items22(void* self, void* pos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param pos QPointF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items32(void* self, void* pos, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param pos QPointF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items42(void* self, void* pos, int32_t mode, int32_t order, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items23(void* self, void* rect, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items33(void* self, void* rect, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items43(void* self, void* rect, int32_t mode, int32_t order, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items25(void* self, void* path, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items35(void* self, void* path, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items45(void* self, void* path, int32_t mode, int32_t order, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items7(void* self, double x, double y, double w, double h, int32_t mode, int32_t order, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_colliding_items2(void* self, void* item, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param selectionOperation enum Qt__ItemSelectionOperation
///
void q_graphicsscene_set_selection_area22(void* self, void* path, int32_t selectionOperation);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param selectionOperation enum Qt__ItemSelectionOperation
/// @param mode enum Qt__ItemSelectionMode
///
void q_graphicsscene_set_selection_area3(void* self, void* path, int32_t selectionOperation, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param selectionOperation enum Qt__ItemSelectionOperation
/// @param mode enum Qt__ItemSelectionMode
/// @param deviceTransform QTransform*
///
void q_graphicsscene_set_selection_area4(void* self, void* path, int32_t selectionOperation, int32_t mode, void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse22(void* self, void* rect, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse3(void* self, void* rect, void* pen, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param line QLineF*
/// @param pen QPen*
///
QGraphicsLineItem* q_graphicsscene_add_line22(void* self, void* line, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param pen QPen*
///
QGraphicsPathItem* q_graphicsscene_add_path2(void* self, void* path, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsPathItem* q_graphicsscene_add_path3(void* self, void* path, void* pen, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
///
QGraphicsRectItem* q_graphicsscene_add_rect22(void* self, void* rect, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsRectItem* q_graphicsscene_add_rect3(void* self, void* rect, void* pen, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// @param self QGraphicsScene*
/// @param text const char*
/// @param font QFont*
///
QGraphicsTextItem* q_graphicsscene_add_text2(void* self, const char* text, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// @param self QGraphicsScene*
/// @param text const char*
/// @param font QFont*
///
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text2(void* self, const char* text, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
///
/// @param self QGraphicsScene*
/// @param widget QWidget*
/// @param wFlags flag of enum Qt__WindowType
///
QGraphicsProxyWidget* q_graphicsscene_add_widget2(void* self, void* widget, int32_t wFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param pen QPen*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse5(void* self, double x, double y, double w, double h, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse6(void* self, double x, double y, double w, double h, void* pen, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
/// @param pen QPen*
///
QGraphicsLineItem* q_graphicsscene_add_line5(void* self, double x1, double y1, double x2, double y2, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param pen QPen*
///
QGraphicsRectItem* q_graphicsscene_add_rect5(void* self, double x, double y, double w, double h, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsRectItem* q_graphicsscene_add_rect6(void* self, double x, double y, double w, double h, void* pen, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
/// @param focusReason enum Qt__FocusReason
///
void q_graphicsscene_set_focus_item2(void* self, void* item, int32_t focusReason);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
///
/// @param self QGraphicsScene*
/// @param focusReason enum Qt__FocusReason
///
void q_graphicsscene_set_focus1(void* self, int32_t focusReason);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param layers flag of enum QGraphicsScene__SceneLayer
///
void q_graphicsscene_invalidate5(void* self, double x, double y, double w, double h, int32_t layers);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_update1(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_invalidate1(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param layers flag of enum QGraphicsScene__SceneLayer
///
void q_graphicsscene_invalidate22(void* self, void* rect, int32_t layers);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsScene*
///
const char* q_graphicsscene_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsScene*
/// @param name char*
///
void q_graphicsscene_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsScene*
///
bool q_graphicsscene_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsScene*
/// @param b bool
///
bool q_graphicsscene_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsScene*
///
QThread* q_graphicsscene_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsScene*
/// @param thread QThread*
///
bool q_graphicsscene_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScene*
/// @param interval int
///
int32_t q_graphicsscene_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScene*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsscene_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsScene*
/// @param id int
///
void q_graphicsscene_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsScene*
/// @param id enum Qt__TimerId
///
void q_graphicsscene_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsScene*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsscene_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsScene*
/// @param parent QObject*
///
void q_graphicsscene_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsScene*
/// @param filterObj QObject*
///
void q_graphicsscene_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsScene*
/// @param obj QObject*
///
void q_graphicsscene_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsscene_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsScene*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsscene_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsscene_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsscene_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsScene*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsscene_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsScene*
/// @param name const char*
///
QVariant* q_graphicsscene_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsScene*
///
const char** q_graphicsscene_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsScene*
///
QBindingStorage* q_graphicsscene_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsScene*
///
const QBindingStorage* q_graphicsscene_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self)
///
void q_graphicsscene_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsScene*
///
QObject* q_graphicsscene_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsScene*
/// @param classname const char*
///
bool q_graphicsscene_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsScene*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_graphicsscene_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScene*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsscene_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScene*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsscene_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsscene_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsScene*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsscene_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScene*
/// @param param1 QObject*
///
void q_graphicsscene_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QObject* param1)
///
void q_graphicsscene_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param event QTimerEvent*
///
void q_graphicsscene_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param event QTimerEvent*
///
void q_graphicsscene_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QTimerEvent* event)
///
void q_graphicsscene_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param event QChildEvent*
///
void q_graphicsscene_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param event QChildEvent*
///
void q_graphicsscene_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QChildEvent* event)
///
void q_graphicsscene_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param event QEvent*
///
void q_graphicsscene_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param event QEvent*
///
void q_graphicsscene_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QEvent* event)
///
void q_graphicsscene_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QMetaMethod* signal)
///
void q_graphicsscene_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QMetaMethod* signal)
///
void q_graphicsscene_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
///
QObject* q_graphicsscene_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
///
QObject* q_graphicsscene_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback QObject* func()
///
void q_graphicsscene_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
///
int32_t q_graphicsscene_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
///
int32_t q_graphicsscene_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback int32_t func()
///
void q_graphicsscene_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal const char*
///
int32_t q_graphicsscene_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal const char*
///
int32_t q_graphicsscene_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback int32_t func(QGraphicsScene* self, const char* signal)
///
void q_graphicsscene_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
bool q_graphicsscene_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
bool q_graphicsscene_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback bool func(QGraphicsScene* self, QMetaMethod* signal)
///
void q_graphicsscene_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, const char* objectName)
///
void q_graphicsscene_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dtor.QGraphicsScene)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#public-types)

typedef enum {
    QGRAPHICSSCENE_ITEMINDEXMETHOD_BSPTREEINDEX = 0,
    QGRAPHICSSCENE_ITEMINDEXMETHOD_NOINDEX = -1
} QGraphicsScene__ItemIndexMethod;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#public-types)

typedef enum {
    QGRAPHICSSCENE_SCENELAYER_ITEMLAYER = 1,
    QGRAPHICSSCENE_SCENELAYER_BACKGROUNDLAYER = 2,
    QGRAPHICSSCENE_SCENELAYER_FOREGROUNDLAYER = 4,
    QGRAPHICSSCENE_SCENELAYER_ALLLAYERS = 65535
} QGraphicsScene__SceneLayer;

#endif
