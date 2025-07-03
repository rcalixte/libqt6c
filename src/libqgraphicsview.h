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
#include "libqevent.h"
#include "libqbrush.h"
#include "libqframe.h"
#include "libqgraphicsitem.h"
#include "libqgraphicsscene.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicsview.html

/// q_graphicsview_new constructs a new QGraphicsView object.
///
/// ``` QWidget* parent ```
QGraphicsView* q_graphicsview_new(void* parent);

/// q_graphicsview_new2 constructs a new QGraphicsView object.
///
///
QGraphicsView* q_graphicsview_new2();

/// q_graphicsview_new3 constructs a new QGraphicsView object.
///
/// ``` QGraphicsScene* scene ```
QGraphicsView* q_graphicsview_new3(void* scene);

/// q_graphicsview_new4 constructs a new QGraphicsView object.
///
/// ``` QGraphicsScene* scene, QWidget* parent ```
QGraphicsView* q_graphicsview_new4(void* scene, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsView* self ```
const QMetaObject* q_graphicsview_meta_object(void* self);

/// ``` QGraphicsView* self, const char* param1 ```
void* q_graphicsview_metacast(void* self, const char* param1);

/// ``` QGraphicsView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, enum QMetaObject__Call, int, void*) ```
void q_graphicsview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, QSize* (*slot)() ```
void q_graphicsview_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_render_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QGraphicsView* self, enum QPainter__RenderHint hint ```
void q_graphicsview_set_render_hint(void* self, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
///
/// ``` QGraphicsView* self, int hints ```
void q_graphicsview_set_render_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
///
/// ``` QGraphicsView* self, int alignment ```
void q_graphicsview_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_transformation_anchor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
///
/// ``` QGraphicsView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_graphicsview_set_transformation_anchor(void* self, int64_t anchor);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_resize_anchor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
///
/// ``` QGraphicsView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_graphicsview_set_resize_anchor(void* self, int64_t anchor);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_viewport_update_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
///
/// ``` QGraphicsView* self, enum QGraphicsView__ViewportUpdateMode mode ```
void q_graphicsview_set_viewport_update_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_optimization_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QGraphicsView* self, enum QGraphicsView__OptimizationFlag flag ```
void q_graphicsview_set_optimization_flag(void* self, int64_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
///
/// ``` QGraphicsView* self, int flags ```
void q_graphicsview_set_optimization_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_drag_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
///
/// ``` QGraphicsView* self, enum QGraphicsView__DragMode mode ```
void q_graphicsview_set_drag_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_rubber_band_selection_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
///
/// ``` QGraphicsView* self, enum Qt__ItemSelectionMode mode ```
void q_graphicsview_set_rubber_band_selection_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_rubber_band_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_cache_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
///
/// ``` QGraphicsView* self, int mode ```
void q_graphicsview_set_cache_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_reset_cached_content(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_interactive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
///
/// ``` QGraphicsView* self, bool allowed ```
void q_graphicsview_set_interactive(void* self, bool allowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
///
/// ``` QGraphicsView* self ```
QGraphicsScene* q_graphicsview_scene(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
///
/// ``` QGraphicsView* self, QGraphicsScene* scene ```
void q_graphicsview_set_scene(void* self, void* scene);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
///
/// ``` QGraphicsView* self ```
QRectF* q_graphicsview_scene_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_set_scene_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h ```
void q_graphicsview_set_scene_rect2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
///
/// ``` QGraphicsView* self ```
QTransform* q_graphicsview_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
///
/// ``` QGraphicsView* self ```
QTransform* q_graphicsview_viewport_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_transformed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QGraphicsView* self, QTransform* matrix ```
void q_graphicsview_set_transform(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_reset_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
///
/// ``` QGraphicsView* self, double angle ```
void q_graphicsview_rotate(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
///
/// ``` QGraphicsView* self, double sx, double sy ```
void q_graphicsview_scale(void* self, double sx, double sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
///
/// ``` QGraphicsView* self, double sh, double sv ```
void q_graphicsview_shear(void* self, double sh, double sv);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
///
/// ``` QGraphicsView* self, double dx, double dy ```
void q_graphicsview_translate(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QGraphicsView* self, QPointF* pos ```
void q_graphicsview_center_on(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QGraphicsView* self, double x, double y ```
void q_graphicsview_center_on2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QGraphicsView* self, QGraphicsItem* item ```
void q_graphicsview_center_on_with_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_ensure_visible(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h ```
void q_graphicsview_ensure_visible2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QGraphicsItem* item ```
void q_graphicsview_ensure_visible_with_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_fit_in_view(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h ```
void q_graphicsview_fit_in_view2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QGraphicsItem* item ```
void q_graphicsview_fit_in_view_with_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_render(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QPoint* pos ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, int x, int y ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QRect* rect ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items3(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QPainterPath* path ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QGraphicsView* self, QPoint* pos ```
QGraphicsItem* q_graphicsview_item_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QGraphicsView* self, int x, int y ```
QGraphicsItem* q_graphicsview_item_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QGraphicsView* self, QPoint* point ```
QPointF* q_graphicsview_map_to_scene(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QGraphicsView* self, QPainterPath* path ```
QPainterPath* q_graphicsview_map_to_scene_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QGraphicsView* self, QPointF* point ```
QPoint* q_graphicsview_map_from_scene(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QGraphicsView* self, QPainterPath* path ```
QPainterPath* q_graphicsview_map_from_scene_with_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QGraphicsView* self, int x, int y ```
QPointF* q_graphicsview_map_to_scene2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QGraphicsView* self, double x, double y ```
QPoint* q_graphicsview_map_from_scene2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// ``` QGraphicsView* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsview_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, QVariant* (*slot)(QGraphicsView*, enum Qt__InputMethodQuery) ```
void q_graphicsview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsview_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
///
/// ``` QGraphicsView* self ```
QBrush* q_graphicsview_background_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
///
/// ``` QGraphicsView* self, QBrush* brush ```
void q_graphicsview_set_background_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
///
/// ``` QGraphicsView* self ```
QBrush* q_graphicsview_foreground_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
///
/// ``` QGraphicsView* self, QBrush* brush ```
void q_graphicsview_set_foreground_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
///
/// ``` QGraphicsView* self, libqt_list /* of QRectF* */ rects ```
void q_graphicsview_update_scene(void* self, libqt_list rects);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_invalidate_scene(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_update_scene_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// ``` QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint ```
void q_graphicsview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QRect*, QPointF*, QPointF*) ```
void q_graphicsview_on_rubber_band_changed(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_setup_viewport(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QWidget*) ```
void q_graphicsview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_qbase_setup_viewport(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_qbase_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// ``` QGraphicsView* self, QContextMenuEvent* event ```
void q_graphicsview_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QContextMenuEvent*) ```
void q_graphicsview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QContextMenuEvent* event ```
void q_graphicsview_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// ``` QGraphicsView* self, QDragEnterEvent* event ```
void q_graphicsview_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDragEnterEvent*) ```
void q_graphicsview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QDragEnterEvent* event ```
void q_graphicsview_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// ``` QGraphicsView* self, QDragLeaveEvent* event ```
void q_graphicsview_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDragLeaveEvent*) ```
void q_graphicsview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QDragLeaveEvent* event ```
void q_graphicsview_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// ``` QGraphicsView* self, QDragMoveEvent* event ```
void q_graphicsview_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDragMoveEvent*) ```
void q_graphicsview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QDragMoveEvent* event ```
void q_graphicsview_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// ``` QGraphicsView* self, QDropEvent* event ```
void q_graphicsview_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDropEvent*) ```
void q_graphicsview_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QDropEvent* event ```
void q_graphicsview_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QFocusEvent*) ```
void q_graphicsview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// ``` QGraphicsView* self, bool next ```
bool q_graphicsview_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, bool) ```
void q_graphicsview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, bool next ```
bool q_graphicsview_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QFocusEvent*) ```
void q_graphicsview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QKeyEvent*) ```
void q_graphicsview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QKeyEvent*) ```
void q_graphicsview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// ``` QGraphicsView* self, QWheelEvent* event ```
void q_graphicsview_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QWheelEvent*) ```
void q_graphicsview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QWheelEvent* event ```
void q_graphicsview_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// ``` QGraphicsView* self, QPaintEvent* event ```
void q_graphicsview_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPaintEvent*) ```
void q_graphicsview_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QPaintEvent* event ```
void q_graphicsview_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// ``` QGraphicsView* self, QResizeEvent* event ```
void q_graphicsview_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QResizeEvent*) ```
void q_graphicsview_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QResizeEvent* event ```
void q_graphicsview_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// ``` QGraphicsView* self, int dx, int dy ```
void q_graphicsview_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, int, int) ```
void q_graphicsview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, int dx, int dy ```
void q_graphicsview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// ``` QGraphicsView* self, QShowEvent* event ```
void q_graphicsview_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QShowEvent*) ```
void q_graphicsview_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QShowEvent* event ```
void q_graphicsview_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// ``` QGraphicsView* self, QInputMethodEvent* event ```
void q_graphicsview_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QInputMethodEvent*) ```
void q_graphicsview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QInputMethodEvent* event ```
void q_graphicsview_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_draw_background(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*, QRectF*) ```
void q_graphicsview_on_draw_background(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_qbase_draw_background(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_draw_foreground(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*, QRectF*) ```
void q_graphicsview_on_draw_foreground(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Base class method implementation
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_qbase_draw_foreground(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsview_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QGraphicsView* self, enum QPainter__RenderHint hint, bool enabled ```
void q_graphicsview_set_render_hint2(void* self, int64_t hint, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QGraphicsView* self, enum QGraphicsView__OptimizationFlag flag, bool enabled ```
void q_graphicsview_set_optimization_flag2(void* self, int64_t flag, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QGraphicsView* self, QTransform* matrix, bool combine ```
void q_graphicsview_set_transform2(void* self, void* matrix, bool combine);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QRectF* rect, int xmargin ```
void q_graphicsview_ensure_visible22(void* self, void* rect, int xmargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsview_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QGraphicsItem* item, int xmargin ```
void q_graphicsview_ensure_visible23(void* self, void* item, int xmargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin ```
void q_graphicsview_ensure_visible32(void* self, void* item, int xmargin, int ymargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QRectF* rect, enum Qt__AspectRatioMode aspectRadioMode ```
void q_graphicsview_fit_in_view22(void* self, void* rect, int64_t aspectRadioMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h, enum Qt__AspectRatioMode aspectRadioMode ```
void q_graphicsview_fit_in_view5(void* self, double x, double y, double w, double h, int64_t aspectRadioMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QGraphicsItem* item, enum Qt__AspectRatioMode aspectRadioMode ```
void q_graphicsview_fit_in_view23(void* self, void* item, int64_t aspectRadioMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* target ```
void q_graphicsview_render2(void* self, void* painter, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source ```
void q_graphicsview_render3(void* self, void* painter, void* target, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, enum Qt__AspectRatioMode aspectRatioMode ```
void q_graphicsview_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QRect* rect, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items22(void* self, void* rect, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items5(void* self, int x, int y, int w, int h, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items24(void* self, void* path, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_invalidate_scene1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QGraphicsView* self, QRectF* rect, int layers ```
void q_graphicsview_invalidate_scene2(void* self, void* rect, int64_t layers);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QGraphicsView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_graphicsview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QGraphicsView* self ```
QScrollBar* q_graphicsview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QGraphicsView* self, QScrollBar* scrollbar ```
void q_graphicsview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QGraphicsView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_graphicsview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QGraphicsView* self ```
QScrollBar* q_graphicsview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QGraphicsView* self, QScrollBar* scrollbar ```
void q_graphicsview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QGraphicsView* self, QWidget* widget, int alignment ```
void q_graphicsview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QGraphicsView* self, int alignment ```
libqt_list /* of QWidget* */ q_graphicsview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QGraphicsView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_graphicsview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QGraphicsView* self, int frameStyle ```
void q_graphicsview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QGraphicsView* self, enum QFrame__Shape frameShape ```
void q_graphicsview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QGraphicsView* self, enum QFrame__Shadow frameShadow ```
void q_graphicsview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QGraphicsView* self, int lineWidth ```
void q_graphicsview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QGraphicsView* self, int midLineWidth ```
void q_graphicsview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QGraphicsView* self, QRect* frameRect ```
void q_graphicsview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QGraphicsView* self ```
uintptr_t q_graphicsview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QGraphicsView* self ```
uintptr_t q_graphicsview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QGraphicsView* self ```
uintptr_t q_graphicsview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QGraphicsView* self ```
QStyle* q_graphicsview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QGraphicsView* self, QStyle* style ```
void q_graphicsview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QGraphicsView* self, enum Qt__WindowModality windowModality ```
void q_graphicsview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QGraphicsView* self, QWidget* param1 ```
bool q_graphicsview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QGraphicsView* self, bool enabled ```
void q_graphicsview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QGraphicsView* self, bool disabled ```
void q_graphicsview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QGraphicsView* self, bool windowModified ```
void q_graphicsview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QGraphicsView* self ```
const QRect* q_graphicsview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QGraphicsView* self ```
QPoint* q_graphicsview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QGraphicsView* self ```
QRegion* q_graphicsview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGraphicsView* self, QSize* minimumSize ```
void q_graphicsview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGraphicsView* self, int minw, int minh ```
void q_graphicsview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGraphicsView* self, QSize* maximumSize ```
void q_graphicsview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGraphicsView* self, int maxw, int maxh ```
void q_graphicsview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QGraphicsView* self, int minw ```
void q_graphicsview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QGraphicsView* self, int minh ```
void q_graphicsview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QGraphicsView* self, int maxw ```
void q_graphicsview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QGraphicsView* self, int maxh ```
void q_graphicsview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGraphicsView* self, QSize* sizeIncrement ```
void q_graphicsview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGraphicsView* self, int w, int h ```
void q_graphicsview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGraphicsView* self, QSize* baseSize ```
void q_graphicsview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGraphicsView* self, int basew, int baseh ```
void q_graphicsview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGraphicsView* self, QSize* fixedSize ```
void q_graphicsview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGraphicsView* self, int w, int h ```
void q_graphicsview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QGraphicsView* self, int w ```
void q_graphicsview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QGraphicsView* self, int h ```
void q_graphicsview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGraphicsView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_graphicsview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGraphicsView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_graphicsview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGraphicsView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_graphicsview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGraphicsView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_graphicsview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QGraphicsView* self ```
const QPalette* q_graphicsview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QGraphicsView* self, QPalette* palette ```
void q_graphicsview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QGraphicsView* self, enum QPalette__ColorRole backgroundRole ```
void q_graphicsview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QGraphicsView* self, enum QPalette__ColorRole foregroundRole ```
void q_graphicsview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QGraphicsView* self ```
const QFont* q_graphicsview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QGraphicsView* self, QFont* font ```
void q_graphicsview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QGraphicsView* self ```
QFontMetrics* q_graphicsview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QGraphicsView* self ```
QFontInfo* q_graphicsview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QGraphicsView* self ```
QCursor* q_graphicsview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QGraphicsView* self, QCursor* cursor ```
void q_graphicsview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QGraphicsView* self, bool enable ```
void q_graphicsview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QGraphicsView* self, bool enable ```
void q_graphicsview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGraphicsView* self, QBitmap* mask ```
void q_graphicsview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGraphicsView* self, QRegion* mask ```
void q_graphicsview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QGraphicsView* self ```
QRegion* q_graphicsview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGraphicsView* self ```
QPixmap* q_graphicsview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QGraphicsView* self ```
QGraphicsEffect* q_graphicsview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QGraphicsView* self, QGraphicsEffect* effect ```
void q_graphicsview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGraphicsView* self, enum Qt__GestureType typeVal ```
void q_graphicsview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QGraphicsView* self, enum Qt__GestureType typeVal ```
void q_graphicsview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QGraphicsView* self, const char* windowTitle ```
void q_graphicsview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QGraphicsView* self, const char* styleSheet ```
void q_graphicsview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QGraphicsView* self, QIcon* icon ```
void q_graphicsview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QGraphicsView* self ```
QIcon* q_graphicsview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QGraphicsView* self, const char* windowIconText ```
void q_graphicsview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QGraphicsView* self, const char* windowRole ```
void q_graphicsview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QGraphicsView* self, const char* filePath ```
void q_graphicsview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QGraphicsView* self, double level ```
void q_graphicsview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QGraphicsView* self ```
double q_graphicsview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QGraphicsView* self, const char* toolTip ```
void q_graphicsview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QGraphicsView* self, int msec ```
void q_graphicsview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QGraphicsView* self, const char* statusTip ```
void q_graphicsview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QGraphicsView* self, const char* whatsThis ```
void q_graphicsview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QGraphicsView* self, const char* name ```
void q_graphicsview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QGraphicsView* self, const char* description ```
void q_graphicsview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QGraphicsView* self, enum Qt__LayoutDirection direction ```
void q_graphicsview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QGraphicsView* self, QLocale* locale ```
void q_graphicsview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QGraphicsView* self ```
QLocale* q_graphicsview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGraphicsView* self, enum Qt__FocusReason reason ```
void q_graphicsview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QGraphicsView* self, enum Qt__FocusPolicy policy ```
void q_graphicsview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_graphicsview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QGraphicsView* self, QWidget* focusProxy ```
void q_graphicsview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QGraphicsView* self, enum Qt__ContextMenuPolicy policy ```
void q_graphicsview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGraphicsView* self, QCursor* param1 ```
void q_graphicsview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGraphicsView* self, QKeySequence* key ```
int32_t q_graphicsview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_graphicsview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_graphicsview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QGraphicsView* self, bool enable ```
void q_graphicsview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QGraphicsView* self ```
QGraphicsProxyWidget* q_graphicsview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
void q_graphicsview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self, QRect* param1 ```
void q_graphicsview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self, QRegion* param1 ```
void q_graphicsview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
void q_graphicsview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self, QRect* param1 ```
void q_graphicsview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self, QRegion* param1 ```
void q_graphicsview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QGraphicsView* self, bool hidden ```
void q_graphicsview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QGraphicsView* self, QWidget* param1 ```
void q_graphicsview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGraphicsView* self, int x, int y ```
void q_graphicsview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
void q_graphicsview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGraphicsView* self, int w, int h ```
void q_graphicsview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGraphicsView* self, QSize* param1 ```
void q_graphicsview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
void q_graphicsview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGraphicsView* self, QRect* geometry ```
void q_graphicsview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QGraphicsView* self ```
char* q_graphicsview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QGraphicsView* self, const char* geometry ```
bool q_graphicsview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QGraphicsView* self, QWidget* param1 ```
bool q_graphicsview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QGraphicsView* self, int state ```
void q_graphicsview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QGraphicsView* self, int state ```
void q_graphicsview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QGraphicsView* self ```
QSizePolicy* q_graphicsview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGraphicsView* self, QSizePolicy* sizePolicy ```
void q_graphicsview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGraphicsView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_graphicsview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QGraphicsView* self ```
QRegion* q_graphicsview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGraphicsView* self, int left, int top, int right, int bottom ```
void q_graphicsview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGraphicsView* self, QMargins* margins ```
void q_graphicsview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QGraphicsView* self ```
QMargins* q_graphicsview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QGraphicsView* self ```
QLayout* q_graphicsview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QGraphicsView* self, QLayout* layout ```
void q_graphicsview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGraphicsView* self, QWidget* parent ```
void q_graphicsview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGraphicsView* self, QWidget* parent, int f ```
void q_graphicsview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGraphicsView* self, int dx, int dy ```
void q_graphicsview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGraphicsView* self, int dx, int dy, QRect* param3 ```
void q_graphicsview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QGraphicsView* self, bool on ```
void q_graphicsview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, QAction* action ```
void q_graphicsview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QGraphicsView* self, libqt_list /* of QAction* */ actions ```
void q_graphicsview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QGraphicsView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_graphicsview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QGraphicsView* self, QAction* before, QAction* action ```
void q_graphicsview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QGraphicsView* self, QAction* action ```
void q_graphicsview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QGraphicsView* self ```
libqt_list /* of QAction* */ q_graphicsview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, const char* text ```
QAction* q_graphicsview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, QIcon* icon, const char* text ```
QAction* q_graphicsview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, const char* text, QKeySequence* shortcut ```
QAction* q_graphicsview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_graphicsview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QGraphicsView* self, int typeVal ```
void q_graphicsview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGraphicsView* self, enum Qt__WindowType param1 ```
void q_graphicsview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QGraphicsView* self, int typeVal ```
void q_graphicsview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_graphicsview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGraphicsView* self, int x, int y ```
QWidget* q_graphicsview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGraphicsView* self, QPoint* p ```
QWidget* q_graphicsview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGraphicsView* self, enum Qt__WidgetAttribute param1 ```
void q_graphicsview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QGraphicsView* self, enum Qt__WidgetAttribute param1 ```
bool q_graphicsview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QGraphicsView* self, QWidget* child ```
bool q_graphicsview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QGraphicsView* self, bool enabled ```
void q_graphicsview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QGraphicsView* self ```
QBackingStore* q_graphicsview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QGraphicsView* self ```
QWindow* q_graphicsview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QGraphicsView* self ```
QScreen* q_graphicsview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QGraphicsView* self, QScreen* screen ```
void q_graphicsview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_graphicsview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QGraphicsView* self, const char* title ```
void q_graphicsview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, const char*) ```
void q_graphicsview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QGraphicsView* self, QIcon* icon ```
void q_graphicsview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, QIcon*) ```
void q_graphicsview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QGraphicsView* self, const char* iconText ```
void q_graphicsview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, const char*) ```
void q_graphicsview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QGraphicsView* self, QPoint* pos ```
void q_graphicsview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, QPoint*) ```
void q_graphicsview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QGraphicsView* self, int hints ```
void q_graphicsview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QPoint* targetOffset ```
void q_graphicsview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_graphicsview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_graphicsview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGraphicsView* self, QRect* rectangle ```
QPixmap* q_graphicsview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGraphicsView* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGraphicsView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_graphicsview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGraphicsView* self, int id, bool enable ```
void q_graphicsview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsView* self, int id, bool enable ```
void q_graphicsview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGraphicsView* self, enum Qt__WindowType param1, bool on ```
void q_graphicsview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGraphicsView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_graphicsview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_graphicsview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_graphicsview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsView* self, char* name ```
void q_graphicsview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsView* self, bool b ```
bool q_graphicsview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsView* self ```
QThread* q_graphicsview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsView* self, QThread* thread ```
void q_graphicsview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsView* self, int interval ```
int32_t q_graphicsview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsView* self ```
libqt_list /* of QObject* */ q_graphicsview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsView* self, QObject* filterObj ```
void q_graphicsview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsView* self, QObject* obj ```
void q_graphicsview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsView* self, const char* name, QVariant* value ```
bool q_graphicsview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsView* self, const char* name ```
QVariant* q_graphicsview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsView* self ```
const char** q_graphicsview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsView* self ```
QBindingStorage* q_graphicsview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsView* self ```
const QBindingStorage* q_graphicsview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsView* self, void (*slot)(QObject*) ```
void q_graphicsview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsView* self ```
QObject* q_graphicsview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsView* self, const char* classname ```
bool q_graphicsview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsView* self, QObject* param1 ```
void q_graphicsview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsView* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QGraphicsView* self ```
double q_graphicsview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QGraphicsView* self ```
double q_graphicsview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_graphicsview_device_pixel_ratio_f_scale();

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QSize* (*slot)() ```
void q_graphicsview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QObject* param1, QEvent* param2 ```
bool q_graphicsview_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QObject* param1, QEvent* param2 ```
bool q_graphicsview_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QObject*, QEvent*) ```
void q_graphicsview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QSize* (*slot)() ```
void q_graphicsview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* param1 ```
void q_graphicsview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* param1 ```
void q_graphicsview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QStyleOptionFrame* option ```
void q_graphicsview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QStyleOptionFrame* option ```
void q_graphicsview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QStyleOptionFrame*) ```
void q_graphicsview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)() ```
void q_graphicsview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, bool visible ```
void q_graphicsview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, bool visible ```
void q_graphicsview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, bool) ```
void q_graphicsview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, int param1 ```
int32_t q_graphicsview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, int param1 ```
int32_t q_graphicsview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, int) ```
void q_graphicsview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)() ```
void q_graphicsview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QPaintEngine* q_graphicsview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QPaintEngine* q_graphicsview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QPaintEngine* (*slot)() ```
void q_graphicsview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEnterEvent* event ```
void q_graphicsview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEnterEvent* event ```
void q_graphicsview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEnterEvent*) ```
void q_graphicsview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMoveEvent* event ```
void q_graphicsview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMoveEvent* event ```
void q_graphicsview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMoveEvent*) ```
void q_graphicsview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QCloseEvent* event ```
void q_graphicsview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QCloseEvent* event ```
void q_graphicsview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QCloseEvent*) ```
void q_graphicsview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QTabletEvent* event ```
void q_graphicsview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QTabletEvent* event ```
void q_graphicsview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QTabletEvent*) ```
void q_graphicsview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QActionEvent* event ```
void q_graphicsview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QActionEvent* event ```
void q_graphicsview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QActionEvent*) ```
void q_graphicsview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QHideEvent* event ```
void q_graphicsview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QHideEvent* event ```
void q_graphicsview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QHideEvent*) ```
void q_graphicsview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, const char* eventType, void* message, intptr_t* result ```
bool q_graphicsview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, const char* eventType, void* message, intptr_t* result ```
bool q_graphicsview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, const char*, void*, intptr_t*) ```
void q_graphicsview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_graphicsview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_graphicsview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_graphicsview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*) ```
void q_graphicsview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QPoint* offset ```
QPaintDevice* q_graphicsview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QPoint* offset ```
QPaintDevice* q_graphicsview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QPaintDevice* (*slot)(QGraphicsView*, QPoint*) ```
void q_graphicsview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QPainter* q_graphicsview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QPainter* q_graphicsview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* (*slot)() ```
void q_graphicsview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QTimerEvent* event ```
void q_graphicsview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QTimerEvent* event ```
void q_graphicsview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QTimerEvent*) ```
void q_graphicsview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QChildEvent* event ```
void q_graphicsview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QChildEvent* event ```
void q_graphicsview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QChildEvent*) ```
void q_graphicsview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMetaMethod*) ```
void q_graphicsview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMetaMethod*) ```
void q_graphicsview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, int left, int top, int right, int bottom ```
void q_graphicsview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, int left, int top, int right, int bottom ```
void q_graphicsview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, int, int, int, int) ```
void q_graphicsview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QMargins* q_graphicsview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QMargins* q_graphicsview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QMargins* (*slot)() ```
void q_graphicsview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* param1 ```
void q_graphicsview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* param1 ```
void q_graphicsview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*) ```
void q_graphicsview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)() ```
void q_graphicsview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)() ```
void q_graphicsview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)() ```
void q_graphicsview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)() ```
void q_graphicsview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)() ```
void q_graphicsview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QObject* q_graphicsview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QObject* q_graphicsview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QObject* (*slot)() ```
void q_graphicsview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)() ```
void q_graphicsview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, const char* signal ```
int32_t q_graphicsview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, const char* signal ```
int32_t q_graphicsview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, const char*) ```
void q_graphicsview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
bool q_graphicsview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
bool q_graphicsview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QMetaMethod*) ```
void q_graphicsview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsView* self, void (*slot)(QObject*, const char*) ```
void q_graphicsview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dtor.QGraphicsView)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsView* self ```
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
