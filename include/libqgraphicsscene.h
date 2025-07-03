#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSSCENE_H
#define SRCQT6C_LIBQGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicsscene.html

/// q_graphicsscene_new constructs a new QGraphicsScene object.
///
///
QGraphicsScene* q_graphicsscene_new();

/// q_graphicsscene_new2 constructs a new QGraphicsScene object.
///
/// ``` QRectF* sceneRect ```
QGraphicsScene* q_graphicsscene_new2(void* sceneRect);

/// q_graphicsscene_new3 constructs a new QGraphicsScene object.
///
/// ``` double x, double y, double width, double height ```
QGraphicsScene* q_graphicsscene_new3(double x, double y, double width, double height);

/// q_graphicsscene_new4 constructs a new QGraphicsScene object.
///
/// ``` QObject* parent ```
QGraphicsScene* q_graphicsscene_new4(void* parent);

/// q_graphicsscene_new5 constructs a new QGraphicsScene object.
///
/// ``` QRectF* sceneRect, QObject* parent ```
QGraphicsScene* q_graphicsscene_new5(void* sceneRect, void* parent);

/// q_graphicsscene_new6 constructs a new QGraphicsScene object.
///
/// ``` double x, double y, double width, double height, QObject* parent ```
QGraphicsScene* q_graphicsscene_new6(double x, double y, double width, double height, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsScene* self ```
const QMetaObject* q_graphicsscene_meta_object(void* self);

/// ``` QGraphicsScene* self, const char* param1 ```
void* q_graphicsscene_metacast(void* self, const char* param1);

/// ``` QGraphicsScene* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscene_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, int32_t (*slot)(QGraphicsScene*, enum QMetaObject__Call, int, void*) ```
void q_graphicsscene_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsScene* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscene_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsscene_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
///
/// ``` QGraphicsScene* self ```
QRectF* q_graphicsscene_scene_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
///
/// ``` QGraphicsScene* self ```
double q_graphicsscene_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
///
/// ``` QGraphicsScene* self ```
double q_graphicsscene_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_set_scene_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
void q_graphicsscene_set_scene_rect2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter ```
void q_graphicsscene_render(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
///
/// ``` QGraphicsScene* self ```
int64_t q_graphicsscene_item_index_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
///
/// ``` QGraphicsScene* self, enum QGraphicsScene__ItemIndexMethod method ```
void q_graphicsscene_set_item_index_method(void* self, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
///
/// ``` QGraphicsScene* self ```
int32_t q_graphicsscene_bsp_tree_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
///
/// ``` QGraphicsScene* self, int depth ```
void q_graphicsscene_set_bsp_tree_depth(void* self, int depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
///
/// ``` QGraphicsScene* self ```
QRectF* q_graphicsscene_items_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items2(void* self, double x, double y, double w, double h, int64_t mode, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// ``` QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform ```
QGraphicsItem* q_graphicsscene_item_at(void* self, void* pos, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// ``` QGraphicsScene* self, double x, double y, QTransform* deviceTransform ```
QGraphicsItem* q_graphicsscene_item_at2(void* self, double x, double y, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_selected_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
///
/// ``` QGraphicsScene* self ```
QPainterPath* q_graphicsscene_selection_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform ```
void q_graphicsscene_set_selection_area(void* self, void* path, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path ```
void q_graphicsscene_set_selection_area_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
///
/// ``` QGraphicsScene* self, libqt_list /* of QGraphicsItem* */ items ```
QGraphicsItemGroup* q_graphicsscene_create_item_group(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
///
/// ``` QGraphicsScene* self, QGraphicsItemGroup* group ```
void q_graphicsscene_destroy_item_group(void* self, void* group);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, QLineF* line ```
QGraphicsLineItem* q_graphicsscene_add_line(void* self, void* line);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// ``` QGraphicsScene* self, QPainterPath* path ```
QGraphicsPathItem* q_graphicsscene_add_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
///
/// ``` QGraphicsScene* self, QPixmap* pixmap ```
QGraphicsPixmapItem* q_graphicsscene_add_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
QGraphicsRectItem* q_graphicsscene_add_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// ``` QGraphicsScene* self, const char* text ```
QGraphicsTextItem* q_graphicsscene_add_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// ``` QGraphicsScene* self, const char* text ```
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
///
/// ``` QGraphicsScene* self, QWidget* widget ```
QGraphicsProxyWidget* q_graphicsscene_add_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, double x1, double y1, double x2, double y2 ```
QGraphicsLineItem* q_graphicsscene_add_line2(void* self, double x1, double y1, double x2, double y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
QGraphicsRectItem* q_graphicsscene_add_rect2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_remove_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
///
/// ``` QGraphicsScene* self ```
QGraphicsItem* q_graphicsscene_focus_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_set_focus_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_has_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_set_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_clear_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
///
/// ``` QGraphicsScene* self, bool enabled ```
void q_graphicsscene_set_sticky_focus(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_sticky_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
///
/// ``` QGraphicsScene* self ```
QGraphicsItem* q_graphicsscene_mouse_grabber_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
///
/// ``` QGraphicsScene* self ```
QBrush* q_graphicsscene_background_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
///
/// ``` QGraphicsScene* self, QBrush* brush ```
void q_graphicsscene_set_background_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
///
/// ``` QGraphicsScene* self ```
QBrush* q_graphicsscene_foreground_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
///
/// ``` QGraphicsScene* self, QBrush* brush ```
void q_graphicsscene_set_foreground_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// ``` QGraphicsScene* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsscene_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, QVariant* (*slot)(QGraphicsScene*, enum Qt__InputMethodQuery) ```
void q_graphicsscene_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsscene_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QGraphicsView* */ q_graphicsscene_views(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
void q_graphicsscene_update(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
void q_graphicsscene_invalidate(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
///
/// ``` QGraphicsScene* self ```
QStyle* q_graphicsscene_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
///
/// ``` QGraphicsScene* self, QStyle* style ```
void q_graphicsscene_set_style(void* self, void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
///
/// ``` QGraphicsScene* self ```
QFont* q_graphicsscene_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
///
/// ``` QGraphicsScene* self, QFont* font ```
void q_graphicsscene_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
///
/// ``` QGraphicsScene* self ```
QPalette* q_graphicsscene_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
///
/// ``` QGraphicsScene* self, QPalette* palette ```
void q_graphicsscene_set_palette(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
///
/// ``` QGraphicsScene* self ```
QGraphicsItem* q_graphicsscene_active_panel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_set_active_panel(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
///
/// ``` QGraphicsScene* self ```
QGraphicsWidget* q_graphicsscene_active_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
///
/// ``` QGraphicsScene* self, QGraphicsWidget* widget ```
void q_graphicsscene_set_active_window(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item, QEvent* event ```
bool q_graphicsscene_send_event(void* self, void* item, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
///
/// ``` QGraphicsScene* self ```
double q_graphicsscene_minimum_render_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
///
/// ``` QGraphicsScene* self, double minSize ```
void q_graphicsscene_set_minimum_render_size(void* self, double minSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_focus_on_touch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
///
/// ``` QGraphicsScene* self, bool enabled ```
void q_graphicsscene_set_focus_on_touch(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_update2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_invalidate2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_advance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_clear_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// ``` QGraphicsScene* self, QEvent* event ```
bool q_graphicsscene_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, QEvent*) ```
void q_graphicsscene_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QEvent* event ```
bool q_graphicsscene_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// ``` QGraphicsScene* self, QObject* watched, QEvent* event ```
bool q_graphicsscene_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, QObject*, QEvent*) ```
void q_graphicsscene_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QObject* watched, QEvent* event ```
bool q_graphicsscene_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsscene_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsscene_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsscene_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QFocusEvent*) ```
void q_graphicsscene_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QFocusEvent*) ```
void q_graphicsscene_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneHelpEvent* event ```
void q_graphicsscene_help_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneHelpEvent*) ```
void q_graphicsscene_on_help_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneHelpEvent* event ```
void q_graphicsscene_qbase_help_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QKeyEvent*) ```
void q_graphicsscene_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QKeyEvent*) ```
void q_graphicsscene_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsscene_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneWheelEvent*) ```
void q_graphicsscene_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsscene_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// ``` QGraphicsScene* self, QInputMethodEvent* event ```
void q_graphicsscene_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QInputMethodEvent*) ```
void q_graphicsscene_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QInputMethodEvent* event ```
void q_graphicsscene_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_draw_background(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QPainter*, QRectF*) ```
void q_graphicsscene_on_draw_background(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_qbase_draw_background(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_draw_foreground(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QPainter*, QRectF*) ```
void q_graphicsscene_on_draw_foreground(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_qbase_draw_foreground(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// ``` QGraphicsScene* self, bool next ```
bool q_graphicsscene_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, bool) ```
void q_graphicsscene_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QGraphicsScene* self, bool next ```
bool q_graphicsscene_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// ``` QGraphicsScene* self, libqt_list /* of QRectF* */ region ```
void q_graphicsscene_changed(void* self, libqt_list region);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, libqt_list /* of QRectF* */ region ) ```
void q_graphicsscene_on_changed(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_scene_rect_changed(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QRectF*) ```
void q_graphicsscene_on_scene_rect_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*) ```
void q_graphicsscene_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
///
/// ``` QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, enum Qt__FocusReason reason ```
void q_graphicsscene_focus_item_changed(void* self, void* newFocus, void* oldFocus, int64_t reason);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, enum Qt__FocusReason) ```
void q_graphicsscene_on_focus_item_changed(void* self, void (*slot)(void*, void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsscene_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsscene_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* target ```
void q_graphicsscene_render2(void* self, void* painter, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source ```
void q_graphicsscene_render3(void* self, void* painter, void* target, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, enum Qt__AspectRatioMode aspectRatioMode ```
void q_graphicsscene_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items1(void* self, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items22(void* self, void* pos, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items3(void* self, void* pos, int64_t mode, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items4(void* self, void* pos, int64_t mode, int64_t order, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items23(void* self, void* rect, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items32(void* self, void* rect, int64_t mode, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items42(void* self, void* rect, int64_t mode, int64_t order, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items25(void* self, void* path, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items34(void* self, void* path, int64_t mode, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items44(void* self, void* path, int64_t mode, int64_t order, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items7(void* self, double x, double y, double w, double h, int64_t mode, int64_t order, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items2(void* self, void* item, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionOperation selectionOperation ```
void q_graphicsscene_set_selection_area2(void* self, void* path, int64_t selectionOperation);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionOperation selectionOperation, enum Qt__ItemSelectionMode mode ```
void q_graphicsscene_set_selection_area3(void* self, void* path, int64_t selectionOperation, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionOperation selectionOperation, enum Qt__ItemSelectionMode mode, QTransform* deviceTransform ```
void q_graphicsscene_set_selection_area4(void* self, void* path, int64_t selectionOperation, int64_t mode, void* deviceTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse22(void* self, void* rect, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse3(void* self, void* rect, void* pen, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, QLineF* line, QPen* pen ```
QGraphicsLineItem* q_graphicsscene_add_line22(void* self, void* line, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// ``` QGraphicsScene* self, QPainterPath* path, QPen* pen ```
QGraphicsPathItem* q_graphicsscene_add_path2(void* self, void* path, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// ``` QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush ```
QGraphicsPathItem* q_graphicsscene_add_path3(void* self, void* path, void* pen, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen ```
QGraphicsRectItem* q_graphicsscene_add_rect22(void* self, void* rect, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush ```
QGraphicsRectItem* q_graphicsscene_add_rect3(void* self, void* rect, void* pen, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// ``` QGraphicsScene* self, const char* text, QFont* font ```
QGraphicsTextItem* q_graphicsscene_add_text2(void* self, const char* text, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// ``` QGraphicsScene* self, const char* text, QFont* font ```
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text2(void* self, const char* text, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
///
/// ``` QGraphicsScene* self, QWidget* widget, int wFlags ```
QGraphicsProxyWidget* q_graphicsscene_add_widget2(void* self, void* widget, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse5(void* self, double x, double y, double w, double h, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse6(void* self, double x, double y, double w, double h, void* pen, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen ```
QGraphicsLineItem* q_graphicsscene_add_line5(void* self, double x1, double y1, double x2, double y2, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen ```
QGraphicsRectItem* q_graphicsscene_add_rect5(void* self, double x, double y, double w, double h, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush ```
QGraphicsRectItem* q_graphicsscene_add_rect6(void* self, double x, double y, double w, double h, void* pen, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item, enum Qt__FocusReason focusReason ```
void q_graphicsscene_set_focus_item2(void* self, void* item, int64_t focusReason);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
///
/// ``` QGraphicsScene* self, enum Qt__FocusReason focusReason ```
void q_graphicsscene_set_focus1(void* self, int64_t focusReason);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, int layers ```
void q_graphicsscene_invalidate5(void* self, double x, double y, double w, double h, int64_t layers);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_update1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_invalidate1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, QRectF* rect, int layers ```
void q_graphicsscene_invalidate22(void* self, void* rect, int64_t layers);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsScene* self ```
const char* q_graphicsscene_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsScene* self, char* name ```
void q_graphicsscene_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsScene* self, bool b ```
bool q_graphicsscene_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsScene* self ```
QThread* q_graphicsscene_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsScene* self, QThread* thread ```
void q_graphicsscene_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScene* self, int interval ```
int32_t q_graphicsscene_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsScene* self, int id ```
void q_graphicsscene_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QObject* */ q_graphicsscene_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsScene* self, QObject* parent ```
void q_graphicsscene_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsScene* self, QObject* filterObj ```
void q_graphicsscene_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsScene* self, QObject* obj ```
void q_graphicsscene_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsscene_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScene* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsscene_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsscene_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsscene_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsScene* self, const char* name, QVariant* value ```
bool q_graphicsscene_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsScene* self, const char* name ```
QVariant* q_graphicsscene_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsScene* self ```
const char** q_graphicsscene_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsScene* self ```
QBindingStorage* q_graphicsscene_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsScene* self ```
const QBindingStorage* q_graphicsscene_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScene* self, void (*slot)(QObject*) ```
void q_graphicsscene_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsScene* self ```
QObject* q_graphicsscene_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsScene* self, const char* classname ```
bool q_graphicsscene_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScene* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsscene_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscene_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScene* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscene_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScene* self, QObject* param1 ```
void q_graphicsscene_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScene* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsscene_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QTimerEvent* event ```
void q_graphicsscene_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QTimerEvent* event ```
void q_graphicsscene_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QTimerEvent*) ```
void q_graphicsscene_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QChildEvent* event ```
void q_graphicsscene_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QChildEvent* event ```
void q_graphicsscene_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QChildEvent*) ```
void q_graphicsscene_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QEvent* event ```
void q_graphicsscene_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QEvent* event ```
void q_graphicsscene_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QEvent*) ```
void q_graphicsscene_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QMetaMethod*) ```
void q_graphicsscene_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QMetaMethod*) ```
void q_graphicsscene_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self ```
QObject* q_graphicsscene_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self ```
QObject* q_graphicsscene_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, QObject* (*slot)() ```
void q_graphicsscene_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self ```
int32_t q_graphicsscene_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self ```
int32_t q_graphicsscene_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, int32_t (*slot)() ```
void q_graphicsscene_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, const char* signal ```
int32_t q_graphicsscene_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, const char* signal ```
int32_t q_graphicsscene_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, int32_t (*slot)(QGraphicsScene*, const char*) ```
void q_graphicsscene_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
bool q_graphicsscene_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
bool q_graphicsscene_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, QMetaMethod*) ```
void q_graphicsscene_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsScene* self, void (*slot)(QObject*, const char*) ```
void q_graphicsscene_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dtor.QGraphicsScene)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsScene* self ```
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
