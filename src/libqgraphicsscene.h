#pragma once
#ifndef LIBQGRAPHICSSCENE_H
#define LIBQGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
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
QGraphicsScene* q_graphicsscene_new2(const void* sceneRect);

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
QGraphicsScene* q_graphicsscene_new5(const void* sceneRect, void* parent);

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
/// @param self const QGraphicsScene*
///
const QMetaObject* q_graphicsscene_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback const QMetaObject* func(const QGraphicsScene* self)
///
void q_graphicsscene_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGraphicsScene*
///
const QMetaObject* q_graphicsscene_super_meta_object(const void* self);

/// @param self QGraphicsScene*
/// @param param1 const char*
///
void* q_graphicsscene_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void* func(QGraphicsScene* self, const char* param1)
///
void q_graphicsscene_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param param1 const char*
///
void* q_graphicsscene_super_metacast(void* self, const char* param1);

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
int32_t q_graphicsscene_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsscene_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
///
/// @param self const QGraphicsScene*
///
QRectF* q_graphicsscene_scene_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
///
/// @param self const QGraphicsScene*
///
double q_graphicsscene_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
///
/// @param self const QGraphicsScene*
///
double q_graphicsscene_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_set_scene_rect(void* self, const void* rect);

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
/// @param self const QGraphicsScene*
///
/// @return enum QGraphicsScene__ItemIndexMethod
///
int32_t q_graphicsscene_item_index_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
///
/// @param self QGraphicsScene*
/// @param method enum QGraphicsScene__ItemIndexMethod
///
void q_graphicsscene_set_item_index_method(void* self, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
///
/// @param self const QGraphicsScene*
///
int32_t q_graphicsscene_bsp_tree_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
///
/// @param self QGraphicsScene*
/// @param depth int
///
void q_graphicsscene_set_bsp_tree_depth(void* self, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
///
/// @param self const QGraphicsScene*
///
QRectF* q_graphicsscene_items_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param pos QPointF*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items2(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param rect QRectF*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items3(const void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param polygon QPolygonF*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items4(const void* self, const void* polygon);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param path QPainterPath*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items5(const void* self, const void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items6(const void* self, double x, double y, double w, double h, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// @param self const QGraphicsScene*
/// @param item QGraphicsItem*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_colliding_items(const void* self, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// @param self const QGraphicsScene*
/// @param pos QPointF*
/// @param deviceTransform QTransform*
///
QGraphicsItem* q_graphicsscene_item_at(const void* self, const void* pos, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// @param self const QGraphicsScene*
/// @param x double
/// @param y double
/// @param deviceTransform QTransform*
///
QGraphicsItem* q_graphicsscene_item_at2(const void* self, double x, double y, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
///
/// @param self const QGraphicsScene*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_selected_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
///
/// @param self const QGraphicsScene*
///
QPainterPath* q_graphicsscene_selection_area(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param deviceTransform QTransform*
///
void q_graphicsscene_set_selection_area(void* self, const void* path, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
///
void q_graphicsscene_set_selection_area2(void* self, const void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
///
/// @param self QGraphicsScene*
/// @param items libqt_list of QGraphicsItem*
///
QGraphicsItemGroup* q_graphicsscene_create_item_group(void* self, libqt_list items);

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
QGraphicsEllipseItem* q_graphicsscene_add_ellipse(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param line QLineF*
///
QGraphicsLineItem* q_graphicsscene_add_line(void* self, const void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
///
QGraphicsPathItem* q_graphicsscene_add_path(void* self, const void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
///
/// @param self QGraphicsScene*
/// @param pixmap QPixmap*
///
QGraphicsPixmapItem* q_graphicsscene_add_pixmap(void* self, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPolygon)
///
/// @param self QGraphicsScene*
/// @param polygon QPolygonF*
///
QGraphicsPolygonItem* q_graphicsscene_add_polygon(void* self, const void* polygon);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
QGraphicsRectItem* q_graphicsscene_add_rect(void* self, const void* rect);

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
/// @param self const QGraphicsScene*
///
QGraphicsItem* q_graphicsscene_focus_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
void q_graphicsscene_set_focus_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_has_focus(const void* self);

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
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_sticky_focus(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
///
/// @param self const QGraphicsScene*
///
QGraphicsItem* q_graphicsscene_mouse_grabber_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
///
/// @param self const QGraphicsScene*
///
QBrush* q_graphicsscene_background_brush(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
///
/// @param self QGraphicsScene*
/// @param brush QBrush*
///
void q_graphicsscene_set_background_brush(void* self, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
///
/// @param self const QGraphicsScene*
///
QBrush* q_graphicsscene_foreground_brush(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
///
/// @param self QGraphicsScene*
/// @param brush QBrush*
///
void q_graphicsscene_set_foreground_brush(void* self, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// @param self const QGraphicsScene*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsscene_input_method_query(const void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback QVariant* func(const QGraphicsScene* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicsscene_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self const QGraphicsScene*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsscene_super_input_method_query(const void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
///
/// @param self const QGraphicsScene*
///
/// @return libqt_list of QGraphicsView*
///
libqt_list q_graphicsscene_views(const void* self);

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
/// @param self const QGraphicsScene*
///
QStyle* q_graphicsscene_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
///
/// @param self QGraphicsScene*
/// @param style QStyle*
///
void q_graphicsscene_set_style(void* self, void* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
///
/// @param self const QGraphicsScene*
///
QFont* q_graphicsscene_font(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
///
/// @param self QGraphicsScene*
/// @param font QFont*
///
void q_graphicsscene_set_font(void* self, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
///
/// @param self const QGraphicsScene*
///
QPalette* q_graphicsscene_palette(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
///
/// @param self QGraphicsScene*
/// @param palette QPalette*
///
void q_graphicsscene_set_palette(void* self, const void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_is_active(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
///
/// @param self const QGraphicsScene*
///
QGraphicsItem* q_graphicsscene_active_panel(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
///
/// @param self QGraphicsScene*
/// @param item QGraphicsItem*
///
void q_graphicsscene_set_active_panel(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
///
/// @param self const QGraphicsScene*
///
QGraphicsWidget* q_graphicsscene_active_window(const void* self);

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
/// @param self const QGraphicsScene*
///
double q_graphicsscene_minimum_render_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
///
/// @param self QGraphicsScene*
/// @param minSize double
///
void q_graphicsscene_set_minimum_render_size(void* self, double minSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_focus_on_touch(const void* self);

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
bool q_graphicsscene_super_event(void* self, void* event);

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
bool q_graphicsscene_super_event_filter(void* self, void* watched, void* event);

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
void q_graphicsscene_super_context_menu_event(void* self, void* event);

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
void q_graphicsscene_super_drag_enter_event(void* self, void* event);

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
void q_graphicsscene_super_drag_move_event(void* self, void* event);

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
void q_graphicsscene_super_drag_leave_event(void* self, void* event);

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
void q_graphicsscene_super_drop_event(void* self, void* event);

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
void q_graphicsscene_super_focus_in_event(void* self, void* event);

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
void q_graphicsscene_super_focus_out_event(void* self, void* event);

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
void q_graphicsscene_super_help_event(void* self, void* event);

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
void q_graphicsscene_super_key_press_event(void* self, void* event);

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
void q_graphicsscene_super_key_release_event(void* self, void* event);

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
void q_graphicsscene_super_mouse_press_event(void* self, void* event);

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
void q_graphicsscene_super_mouse_move_event(void* self, void* event);

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
void q_graphicsscene_super_mouse_release_event(void* self, void* event);

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
void q_graphicsscene_super_mouse_double_click_event(void* self, void* event);

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
void q_graphicsscene_super_wheel_event(void* self, void* event);

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
void q_graphicsscene_super_input_method_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_draw_background(void* self, void* painter, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QPainter* painter, QRectF* rect)
///
void q_graphicsscene_on_draw_background(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_super_draw_background(void* self, void* painter, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_draw_foreground(void* self, void* painter, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QPainter* painter, QRectF* rect)
///
void q_graphicsscene_on_draw_foreground(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsscene_super_draw_foreground(void* self, void* painter, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param numItems int
/// @param items QGraphicsItem**
/// @param options QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicsscene_draw_items(void* self, void* painter, int numItems, void** items, const void* options, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, QStyleOptionGraphicsItem* options, QWidget* widget)
///
void q_graphicsscene_on_draw_items(void* self, void (*callback)(void*, void*, int, void**, const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
///
/// Base class method implementation
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param numItems int
/// @param items QGraphicsItem**
/// @param options QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicsscene_super_draw_items(void* self, void* painter, int numItems, void** items, const void* options, void* widget);

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
bool q_graphicsscene_super_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// @param self QGraphicsScene*
/// @param region libqt_list of QRectF*
///
void q_graphicsscene_changed(void* self, libqt_list region);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, libqt_list of QRectF* region)
///
void q_graphicsscene_on_changed(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_scene_rect_changed(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QRectF* rect)
///
void q_graphicsscene_on_scene_rect_changed(void* self, void (*callback)(void*, const void*));

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
void q_graphicsscene_render2(void* self, void* painter, const void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRectF*
///
void q_graphicsscene_render3(void* self, void* painter, const void* target, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// @param self QGraphicsScene*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRectF*
/// @param aspectRatioMode enum Qt__AspectRatioMode
///
void q_graphicsscene_render4(void* self, void* painter, const void* target, const void* source, int32_t aspectRatioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items1(const void* self, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param pos QPointF*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items22(const void* self, const void* pos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param pos QPointF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items32(const void* self, const void* pos, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param pos QPointF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items42(const void* self, const void* pos, int32_t mode, int32_t order, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param rect QRectF*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items23(const void* self, const void* rect, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param rect QRectF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items33(const void* self, const void* rect, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param rect QRectF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items43(const void* self, const void* rect, int32_t mode, int32_t order, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param polygon QPolygonF*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items24(const void* self, const void* polygon, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param polygon QPolygonF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items34(const void* self, const void* polygon, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param polygon QPolygonF*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items44(const void* self, const void* polygon, int32_t mode, int32_t order, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items25(const void* self, const void* path, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items35(const void* self, const void* path, int32_t mode, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
/// @param order enum Qt__SortOrder
/// @param deviceTransform QTransform*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_items45(const void* self, const void* path, int32_t mode, int32_t order, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// @param self const QGraphicsScene*
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
libqt_list q_graphicsscene_items7(const void* self, double x, double y, double w, double h, int32_t mode, int32_t order, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// @param self const QGraphicsScene*
/// @param item QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsscene_colliding_items2(const void* self, const void* item, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param selectionOperation enum Qt__ItemSelectionOperation
///
void q_graphicsscene_set_selection_area22(void* self, const void* path, int32_t selectionOperation);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param selectionOperation enum Qt__ItemSelectionOperation
/// @param mode enum Qt__ItemSelectionMode
///
void q_graphicsscene_set_selection_area3(void* self, const void* path, int32_t selectionOperation, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param selectionOperation enum Qt__ItemSelectionOperation
/// @param mode enum Qt__ItemSelectionMode
/// @param deviceTransform QTransform*
///
void q_graphicsscene_set_selection_area4(void* self, const void* path, int32_t selectionOperation, int32_t mode, const void* deviceTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse22(void* self, const void* rect, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsEllipseItem* q_graphicsscene_add_ellipse3(void* self, const void* rect, const void* pen, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param line QLineF*
/// @param pen QPen*
///
QGraphicsLineItem* q_graphicsscene_add_line22(void* self, const void* line, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param pen QPen*
///
QGraphicsPathItem* q_graphicsscene_add_path2(void* self, const void* path, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// @param self QGraphicsScene*
/// @param path QPainterPath*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsPathItem* q_graphicsscene_add_path3(void* self, const void* path, const void* pen, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPolygon)
///
/// @param self QGraphicsScene*
/// @param polygon QPolygonF*
/// @param pen QPen*
///
QGraphicsPolygonItem* q_graphicsscene_add_polygon2(void* self, const void* polygon, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPolygon)
///
/// @param self QGraphicsScene*
/// @param polygon QPolygonF*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsPolygonItem* q_graphicsscene_add_polygon3(void* self, const void* polygon, const void* pen, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
///
QGraphicsRectItem* q_graphicsscene_add_rect22(void* self, const void* rect, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param pen QPen*
/// @param brush QBrush*
///
QGraphicsRectItem* q_graphicsscene_add_rect3(void* self, const void* rect, const void* pen, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// @param self QGraphicsScene*
/// @param text const char*
/// @param font QFont*
///
QGraphicsTextItem* q_graphicsscene_add_text2(void* self, const char* text, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// @param self QGraphicsScene*
/// @param text const char*
/// @param font QFont*
///
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text2(void* self, const char* text, const void* font);

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
QGraphicsEllipseItem* q_graphicsscene_add_ellipse5(void* self, double x, double y, double w, double h, const void* pen);

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
QGraphicsEllipseItem* q_graphicsscene_add_ellipse6(void* self, double x, double y, double w, double h, const void* pen, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// @param self QGraphicsScene*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
/// @param pen QPen*
///
QGraphicsLineItem* q_graphicsscene_add_line5(void* self, double x1, double y1, double x2, double y2, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// @param self QGraphicsScene*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param pen QPen*
///
QGraphicsRectItem* q_graphicsscene_add_rect5(void* self, double x, double y, double w, double h, const void* pen);

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
QGraphicsRectItem* q_graphicsscene_add_rect6(void* self, double x, double y, double w, double h, const void* pen, const void* brush);

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
void q_graphicsscene_update1(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
///
void q_graphicsscene_invalidate1(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// @param self QGraphicsScene*
/// @param rect QRectF*
/// @param layers flag of enum QGraphicsScene__SceneLayer
///
void q_graphicsscene_invalidate22(void* self, const void* rect, int32_t layers);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsScene*
///
const char* q_graphicsscene_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsScene*
/// @param name const char*
///
void q_graphicsscene_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_signals_blocked(const void* self);

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
/// @param self const QGraphicsScene*
///
QThread* q_graphicsscene_thread(const void* self);

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
/// @param self const QGraphicsScene*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsscene_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsscene_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsscene_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsScene*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsscene_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsscene_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsscene_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScene*
///
bool q_graphicsscene_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScene*
/// @param receiver QObject*
///
bool q_graphicsscene_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsscene_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGraphicsScene*
///
void q_graphicsscene_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGraphicsScene*
///
void q_graphicsscene_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsScene*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsscene_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGraphicsScene*
/// @param name const char*
///
QVariant* q_graphicsscene_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGraphicsScene*
///
const char** q_graphicsscene_dynamic_property_names(const void* self);

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
/// @param self const QGraphicsScene*
///
const QBindingStorage* q_graphicsscene_binding_storage2(const void* self);

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
/// @param self const QGraphicsScene*
///
QObject* q_graphicsscene_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGraphicsScene*
/// @param classname const char*
///
bool q_graphicsscene_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsScene*
///
void q_graphicsscene_delete_later(void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsscene_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicsscene_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsScene*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsscene_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScene*
/// @param signal const char*
///
bool q_graphicsscene_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScene*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicsscene_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScene*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsscene_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScene*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsscene_disconnect23(const void* self, const void* receiver, const char* member);

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
void q_graphicsscene_super_timer_event(void* self, void* event);

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
void q_graphicsscene_super_child_event(void* self, void* event);

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
void q_graphicsscene_super_custom_event(void* self, void* event);

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
void q_graphicsscene_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QMetaMethod* signal)
///
void q_graphicsscene_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param signal QMetaMethod*
///
void q_graphicsscene_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback void func(QGraphicsScene* self, QMetaMethod* signal)
///
void q_graphicsscene_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScene*
///
QObject* q_graphicsscene_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScene*
///
QObject* q_graphicsscene_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback QObject* func(QGraphicsScene* self)
///
void q_graphicsscene_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScene*
///
int32_t q_graphicsscene_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScene*
///
int32_t q_graphicsscene_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback int32_t func(QGraphicsScene* self)
///
void q_graphicsscene_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScene*
/// @param signal const char*
///
int32_t q_graphicsscene_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScene*
/// @param signal const char*
///
int32_t q_graphicsscene_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback int32_t func(QGraphicsScene* self, const char* signal)
///
void q_graphicsscene_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScene*
/// @param signal QMetaMethod*
///
bool q_graphicsscene_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScene*
/// @param signal QMetaMethod*
///
bool q_graphicsscene_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScene*
/// @param callback bool func(QGraphicsScene* self, QMetaMethod* signal)
///
void q_graphicsscene_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

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
