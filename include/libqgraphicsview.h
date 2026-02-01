#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSVIEW_H
#define SRC_QT6C_LIBQGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html)

/// q_graphicsview_new constructs a new QGraphicsView object.
///
/// @param parent QWidget*
///
QGraphicsView* q_graphicsview_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html)

/// q_graphicsview_new2 constructs a new QGraphicsView object.
///
QGraphicsView* q_graphicsview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html)

/// q_graphicsview_new3 constructs a new QGraphicsView object.
///
/// @param scene QGraphicsScene*
///
QGraphicsView* q_graphicsview_new3(void* scene);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html)

/// q_graphicsview_new4 constructs a new QGraphicsView object.
///
/// @param scene QGraphicsScene*
/// @param parent QWidget*
///
QGraphicsView* q_graphicsview_new4(void* scene, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsView*
///
const QMetaObject* q_graphicsview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback const QMetaObject* func()
///
void q_graphicsview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
///
const QMetaObject* q_graphicsview_qbase_meta_object(void* self);

/// @param self QGraphicsView*
/// @param param1 const char*
///
void* q_graphicsview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void* func(QGraphicsView* self, const char* param1)
///
void q_graphicsview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param param1 const char*
///
void* q_graphicsview_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback int32_t func(QGraphicsView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback QSize* func()
///
void q_graphicsview_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
///
/// @param self QGraphicsView*
///
/// @return flag of enum QPainter__RenderHint
///
int32_t q_graphicsview_render_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// @param self QGraphicsView*
/// @param hint enum QPainter__RenderHint
///
void q_graphicsview_set_render_hint(void* self, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
///
/// @param self QGraphicsView*
/// @param hints flag of enum QPainter__RenderHint
///
void q_graphicsview_set_render_hints(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
///
/// @param self QGraphicsView*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_graphicsview_alignment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
///
/// @param self QGraphicsView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsview_set_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
///
/// @param self QGraphicsView*
///
/// @return enum QGraphicsView__ViewportAnchor
///
int32_t q_graphicsview_transformation_anchor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
///
/// @param self QGraphicsView*
/// @param anchor enum QGraphicsView__ViewportAnchor
///
void q_graphicsview_set_transformation_anchor(void* self, int32_t anchor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
///
/// @param self QGraphicsView*
///
/// @return enum QGraphicsView__ViewportAnchor
///
int32_t q_graphicsview_resize_anchor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
///
/// @param self QGraphicsView*
/// @param anchor enum QGraphicsView__ViewportAnchor
///
void q_graphicsview_set_resize_anchor(void* self, int32_t anchor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
///
/// @param self QGraphicsView*
///
/// @return enum QGraphicsView__ViewportUpdateMode
///
int32_t q_graphicsview_viewport_update_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
///
/// @param self QGraphicsView*
/// @param mode enum QGraphicsView__ViewportUpdateMode
///
void q_graphicsview_set_viewport_update_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
///
/// @param self QGraphicsView*
///
/// @return flag of enum QGraphicsView__OptimizationFlag
///
int32_t q_graphicsview_optimization_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// @param self QGraphicsView*
/// @param flag enum QGraphicsView__OptimizationFlag
///
void q_graphicsview_set_optimization_flag(void* self, int32_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
///
/// @param self QGraphicsView*
/// @param flags flag of enum QGraphicsView__OptimizationFlag
///
void q_graphicsview_set_optimization_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
///
/// @param self QGraphicsView*
///
/// @return enum QGraphicsView__DragMode
///
int32_t q_graphicsview_drag_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
///
/// @param self QGraphicsView*
/// @param mode enum QGraphicsView__DragMode
///
void q_graphicsview_set_drag_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__ItemSelectionMode
///
int32_t q_graphicsview_rubber_band_selection_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
///
/// @param self QGraphicsView*
/// @param mode enum Qt__ItemSelectionMode
///
void q_graphicsview_set_rubber_band_selection_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_rubber_band_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
///
/// @param self QGraphicsView*
///
/// @return flag of enum QGraphicsView__CacheModeFlag
///
int32_t q_graphicsview_cache_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
///
/// @param self QGraphicsView*
/// @param mode flag of enum QGraphicsView__CacheModeFlag
///
void q_graphicsview_set_cache_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
///
/// @param self QGraphicsView*
///
void q_graphicsview_reset_cached_content(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_interactive(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
///
/// @param self QGraphicsView*
/// @param allowed bool
///
void q_graphicsview_set_interactive(void* self, bool allowed);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
///
/// @param self QGraphicsView*
///
QGraphicsScene* q_graphicsview_scene(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
///
/// @param self QGraphicsView*
/// @param scene QGraphicsScene*
///
void q_graphicsview_set_scene(void* self, void* scene);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
///
/// @param self QGraphicsView*
///
QRectF* q_graphicsview_scene_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
///
void q_graphicsview_set_scene_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsview_set_scene_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
///
/// @param self QGraphicsView*
///
QTransform* q_graphicsview_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
///
/// @param self QGraphicsView*
///
QTransform* q_graphicsview_viewport_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_transformed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// @param self QGraphicsView*
/// @param matrix QTransform*
///
void q_graphicsview_set_transform(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
///
/// @param self QGraphicsView*
///
void q_graphicsview_reset_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
///
/// @param self QGraphicsView*
/// @param angle double
///
void q_graphicsview_rotate(void* self, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
///
/// @param self QGraphicsView*
/// @param sx double
/// @param sy double
///
void q_graphicsview_scale(void* self, double sx, double sy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
///
/// @param self QGraphicsView*
/// @param sh double
/// @param sv double
///
void q_graphicsview_shear(void* self, double sh, double sv);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
///
/// @param self QGraphicsView*
/// @param dx double
/// @param dy double
///
void q_graphicsview_translate(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// @param self QGraphicsView*
/// @param pos QPointF*
///
void q_graphicsview_center_on(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
///
void q_graphicsview_center_on2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// @param self QGraphicsView*
/// @param item QGraphicsItem*
///
void q_graphicsview_center_on3(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
///
void q_graphicsview_ensure_visible(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsview_ensure_visible2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param item QGraphicsItem*
///
void q_graphicsview_ensure_visible3(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
///
void q_graphicsview_fit_in_view(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicsview_fit_in_view2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QGraphicsView*
/// @param item QGraphicsItem*
///
void q_graphicsview_fit_in_view3(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
///
void q_graphicsview_render(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param pos QPoint*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items2(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items3(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param rect QRect*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items4(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items5(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param path QPainterPath*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items7(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// @param self QGraphicsView*
/// @param pos QPoint*
///
QGraphicsItem* q_graphicsview_item_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
///
QGraphicsItem* q_graphicsview_item_at2(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// @param self QGraphicsView*
/// @param point QPoint*
///
QPointF* q_graphicsview_map_to_scene(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// @param self QGraphicsView*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsview_map_to_scene4(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// @param self QGraphicsView*
/// @param point QPointF*
///
QPoint* q_graphicsview_map_from_scene(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// @param self QGraphicsView*
/// @param path QPainterPath*
///
QPainterPath* q_graphicsview_map_from_scene4(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
///
QPointF* q_graphicsview_map_to_scene5(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
///
QPoint* q_graphicsview_map_from_scene5(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// @param self QGraphicsView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsview_input_method_query(void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback QVariant* func(QGraphicsView* self, enum Qt__InputMethodQuery query)
///
void q_graphicsview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicsview_qbase_input_method_query(void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
///
/// @param self QGraphicsView*
///
QBrush* q_graphicsview_background_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
///
/// @param self QGraphicsView*
/// @param brush QBrush*
///
void q_graphicsview_set_background_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
///
/// @param self QGraphicsView*
///
QBrush* q_graphicsview_foreground_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
///
/// @param self QGraphicsView*
/// @param brush QBrush*
///
void q_graphicsview_set_foreground_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
///
/// @param self QGraphicsView*
/// @param rects libqt_list of QRectF*
///
void q_graphicsview_update_scene(void* self, libqt_list /* of QRectF* */ rects);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// @param self QGraphicsView*
///
void q_graphicsview_invalidate_scene(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
///
void q_graphicsview_update_scene_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// @param self QGraphicsView*
/// @param viewportRect QRect*
/// @param fromScenePoint QPointF*
/// @param toScenePoint QPointF*
///
void q_graphicsview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint)
///
void q_graphicsview_on_rubber_band_changed(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// @param self QGraphicsView*
/// @param widget QWidget*
///
void q_graphicsview_setup_viewport(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QWidget* widget)
///
void q_graphicsview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param widget QWidget*
///
void q_graphicsview_qbase_setup_viewport(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
bool q_graphicsview_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback bool func(QGraphicsView* self, QEvent* event)
///
void q_graphicsview_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
bool q_graphicsview_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
bool q_graphicsview_viewport_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback bool func(QGraphicsView* self, QEvent* event)
///
void q_graphicsview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
bool q_graphicsview_qbase_viewport_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// @param self QGraphicsView*
/// @param event QContextMenuEvent*
///
void q_graphicsview_context_menu_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QContextMenuEvent* event)
///
void q_graphicsview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QContextMenuEvent*
///
void q_graphicsview_qbase_context_menu_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// @param self QGraphicsView*
/// @param event QDragEnterEvent*
///
void q_graphicsview_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QDragEnterEvent* event)
///
void q_graphicsview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QDragEnterEvent*
///
void q_graphicsview_qbase_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// @param self QGraphicsView*
/// @param event QDragLeaveEvent*
///
void q_graphicsview_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QDragLeaveEvent* event)
///
void q_graphicsview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QDragLeaveEvent*
///
void q_graphicsview_qbase_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// @param self QGraphicsView*
/// @param event QDragMoveEvent*
///
void q_graphicsview_drag_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QDragMoveEvent* event)
///
void q_graphicsview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QDragMoveEvent*
///
void q_graphicsview_qbase_drag_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// @param self QGraphicsView*
/// @param event QDropEvent*
///
void q_graphicsview_drop_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QDropEvent* event)
///
void q_graphicsview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QDropEvent*
///
void q_graphicsview_qbase_drop_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// @param self QGraphicsView*
/// @param event QFocusEvent*
///
void q_graphicsview_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QFocusEvent* event)
///
void q_graphicsview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QFocusEvent*
///
void q_graphicsview_qbase_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// @param self QGraphicsView*
/// @param next bool
///
bool q_graphicsview_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback bool func(QGraphicsView* self, bool next)
///
void q_graphicsview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param next bool
///
bool q_graphicsview_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// @param self QGraphicsView*
/// @param event QFocusEvent*
///
void q_graphicsview_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QFocusEvent* event)
///
void q_graphicsview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QFocusEvent*
///
void q_graphicsview_qbase_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// @param self QGraphicsView*
/// @param event QKeyEvent*
///
void q_graphicsview_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QKeyEvent* event)
///
void q_graphicsview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QKeyEvent*
///
void q_graphicsview_qbase_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// @param self QGraphicsView*
/// @param event QKeyEvent*
///
void q_graphicsview_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QKeyEvent* event)
///
void q_graphicsview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QKeyEvent*
///
void q_graphicsview_qbase_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMouseEvent* event)
///
void q_graphicsview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_qbase_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMouseEvent* event)
///
void q_graphicsview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMouseEvent* event)
///
void q_graphicsview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_qbase_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMouseEvent* event)
///
void q_graphicsview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QMouseEvent*
///
void q_graphicsview_qbase_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// @param self QGraphicsView*
/// @param event QWheelEvent*
///
void q_graphicsview_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QWheelEvent* event)
///
void q_graphicsview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QWheelEvent*
///
void q_graphicsview_qbase_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// @param self QGraphicsView*
/// @param event QPaintEvent*
///
void q_graphicsview_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QPaintEvent* event)
///
void q_graphicsview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QPaintEvent*
///
void q_graphicsview_qbase_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// @param self QGraphicsView*
/// @param event QResizeEvent*
///
void q_graphicsview_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QResizeEvent* event)
///
void q_graphicsview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QResizeEvent*
///
void q_graphicsview_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// @param self QGraphicsView*
/// @param dx int
/// @param dy int
///
void q_graphicsview_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, int dx, int dy)
///
void q_graphicsview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param dx int
/// @param dy int
///
void q_graphicsview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// @param self QGraphicsView*
/// @param event QShowEvent*
///
void q_graphicsview_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QShowEvent* event)
///
void q_graphicsview_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QShowEvent*
///
void q_graphicsview_qbase_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// @param self QGraphicsView*
/// @param event QInputMethodEvent*
///
void q_graphicsview_input_method_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QInputMethodEvent* event)
///
void q_graphicsview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param event QInputMethodEvent*
///
void q_graphicsview_qbase_input_method_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsview_draw_background(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QPainter* painter, QRectF* rect)
///
void q_graphicsview_on_draw_background(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsview_qbase_draw_background(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsview_draw_foreground(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QPainter* painter, QRectF* rect)
///
void q_graphicsview_on_draw_foreground(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Base class method implementation
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_graphicsview_qbase_draw_foreground(void* self, void* painter, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsview_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// @param self QGraphicsView*
/// @param hint enum QPainter__RenderHint
/// @param enabled bool
///
void q_graphicsview_set_render_hint2(void* self, int32_t hint, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// @param self QGraphicsView*
/// @param flag enum QGraphicsView__OptimizationFlag
/// @param enabled bool
///
void q_graphicsview_set_optimization_flag2(void* self, int32_t flag, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// @param self QGraphicsView*
/// @param matrix QTransform*
/// @param combine bool
///
void q_graphicsview_set_transform2(void* self, void* matrix, bool combine);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
/// @param xmargin int
///
void q_graphicsview_ensure_visible22(void* self, void* rect, int xmargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_graphicsview_ensure_visible32(void* self, void* rect, int xmargin, int ymargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
///
void q_graphicsview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
///
void q_graphicsview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param item QGraphicsItem*
/// @param xmargin int
///
void q_graphicsview_ensure_visible23(void* self, void* item, int xmargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QGraphicsView*
/// @param item QGraphicsItem*
/// @param xmargin int
/// @param ymargin int
///
void q_graphicsview_ensure_visible33(void* self, void* item, int xmargin, int ymargin);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
/// @param aspectRadioMode enum Qt__AspectRatioMode
///
void q_graphicsview_fit_in_view22(void* self, void* rect, int32_t aspectRadioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QGraphicsView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param aspectRadioMode enum Qt__AspectRatioMode
///
void q_graphicsview_fit_in_view5(void* self, double x, double y, double w, double h, int32_t aspectRadioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QGraphicsView*
/// @param item QGraphicsItem*
/// @param aspectRadioMode enum Qt__AspectRatioMode
///
void q_graphicsview_fit_in_view23(void* self, void* item, int32_t aspectRadioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param target QRectF*
///
void q_graphicsview_render2(void* self, void* painter, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRect*
///
void q_graphicsview_render3(void* self, void* painter, void* target, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRect*
/// @param aspectRatioMode enum Qt__AspectRatioMode
///
void q_graphicsview_render4(void* self, void* painter, void* target, void* source, int32_t aspectRatioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param rect QRect*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items22(void* self, void* rect, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items52(void* self, int x, int y, int w, int h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QGraphicsView*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicsview_items24(void* self, void* path, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
///
void q_graphicsview_invalidate_scene1(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// @param self QGraphicsView*
/// @param rect QRectF*
/// @param layers flag of enum QGraphicsScene__SceneLayer
///
void q_graphicsview_invalidate_scene2(void* self, void* rect, int32_t layers);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_graphicsview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QGraphicsView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_graphicsview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QGraphicsView*
///
QScrollBar* q_graphicsview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QGraphicsView*
/// @param scrollbar QScrollBar*
///
void q_graphicsview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_graphicsview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QGraphicsView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_graphicsview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QGraphicsView*
///
QScrollBar* q_graphicsview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QGraphicsView*
/// @param scrollbar QScrollBar*
///
void q_graphicsview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QGraphicsView*
/// @param widget QWidget*
///
void q_graphicsview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QGraphicsView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QGraphicsView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_graphicsview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QGraphicsView*
/// @param widget QWidget*
///
void q_graphicsview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QGraphicsView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_graphicsview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QGraphicsView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_graphicsview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QGraphicsView*
/// @param frameStyle int
///
void q_graphicsview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QGraphicsView*
///
/// @return enum QFrame__Shape
///
int32_t q_graphicsview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QGraphicsView*
/// @param frameShape enum QFrame__Shape
///
void q_graphicsview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QGraphicsView*
///
/// @return enum QFrame__Shadow
///
int32_t q_graphicsview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QGraphicsView*
/// @param frameShadow enum QFrame__Shadow
///
void q_graphicsview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QGraphicsView*
/// @param lineWidth int
///
void q_graphicsview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QGraphicsView*
/// @param midLineWidth int
///
void q_graphicsview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QGraphicsView*
/// @param frameRect QRect*
///
void q_graphicsview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QGraphicsView*
///
uintptr_t q_graphicsview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QGraphicsView*
///
void q_graphicsview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QGraphicsView*
///
uintptr_t q_graphicsview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QGraphicsView*
///
uintptr_t q_graphicsview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QGraphicsView*
///
QStyle* q_graphicsview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QGraphicsView*
/// @param style QStyle*
///
void q_graphicsview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__WindowModality
///
int32_t q_graphicsview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QGraphicsView*
/// @param windowModality enum Qt__WindowModality
///
void q_graphicsview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
///
bool q_graphicsview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QGraphicsView*
/// @param enabled bool
///
void q_graphicsview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QGraphicsView*
/// @param disabled bool
///
void q_graphicsview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QGraphicsView*
/// @param windowModified bool
///
void q_graphicsview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QGraphicsView*
///
const QRect* q_graphicsview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QGraphicsView*
///
QPoint* q_graphicsview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QGraphicsView*
///
QRegion* q_graphicsview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QGraphicsView*
/// @param minimumSize QSize*
///
void q_graphicsview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QGraphicsView*
/// @param minw int
/// @param minh int
///
void q_graphicsview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QGraphicsView*
/// @param maximumSize QSize*
///
void q_graphicsview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QGraphicsView*
/// @param maxw int
/// @param maxh int
///
void q_graphicsview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QGraphicsView*
/// @param minw int
///
void q_graphicsview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QGraphicsView*
/// @param minh int
///
void q_graphicsview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QGraphicsView*
/// @param maxw int
///
void q_graphicsview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QGraphicsView*
/// @param maxh int
///
void q_graphicsview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QGraphicsView*
/// @param sizeIncrement QSize*
///
void q_graphicsview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QGraphicsView*
/// @param w int
/// @param h int
///
void q_graphicsview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QGraphicsView*
/// @param baseSize QSize*
///
void q_graphicsview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QGraphicsView*
/// @param basew int
/// @param baseh int
///
void q_graphicsview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QGraphicsView*
/// @param fixedSize QSize*
///
void q_graphicsview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QGraphicsView*
/// @param w int
/// @param h int
///
void q_graphicsview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QGraphicsView*
/// @param w int
///
void q_graphicsview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QGraphicsView*
/// @param h int
///
void q_graphicsview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QGraphicsView*
/// @param param1 QPointF*
///
QPointF* q_graphicsview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QGraphicsView*
/// @param param1 QPoint*
///
QPoint* q_graphicsview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QGraphicsView*
/// @param param1 QPointF*
///
QPointF* q_graphicsview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QGraphicsView*
/// @param param1 QPoint*
///
QPoint* q_graphicsview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QGraphicsView*
/// @param param1 QPointF*
///
QPointF* q_graphicsview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QGraphicsView*
/// @param param1 QPoint*
///
QPoint* q_graphicsview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QGraphicsView*
/// @param param1 QPointF*
///
QPointF* q_graphicsview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QGraphicsView*
/// @param param1 QPoint*
///
QPoint* q_graphicsview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_graphicsview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_graphicsview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_graphicsview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_graphicsview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QGraphicsView*
///
const QPalette* q_graphicsview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QGraphicsView*
/// @param palette QPalette*
///
void q_graphicsview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QGraphicsView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_graphicsview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QGraphicsView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_graphicsview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QGraphicsView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_graphicsview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QGraphicsView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_graphicsview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QGraphicsView*
///
const QFont* q_graphicsview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QGraphicsView*
/// @param font QFont*
///
void q_graphicsview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QGraphicsView*
///
QFontMetrics* q_graphicsview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QGraphicsView*
///
QFontInfo* q_graphicsview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QGraphicsView*
///
QCursor* q_graphicsview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QGraphicsView*
/// @param cursor QCursor*
///
void q_graphicsview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QGraphicsView*
///
void q_graphicsview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QGraphicsView*
/// @param enable bool
///
void q_graphicsview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QGraphicsView*
/// @param enable bool
///
void q_graphicsview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QGraphicsView*
/// @param mask QBitmap*
///
void q_graphicsview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QGraphicsView*
/// @param mask QRegion*
///
void q_graphicsview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QGraphicsView*
///
QRegion* q_graphicsview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QGraphicsView*
///
void q_graphicsview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QGraphicsView*
///
QPixmap* q_graphicsview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QGraphicsView*
///
QGraphicsEffect* q_graphicsview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QGraphicsView*
/// @param effect QGraphicsEffect*
///
void q_graphicsview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QGraphicsView*
/// @param type enum Qt__GestureType
///
void q_graphicsview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QGraphicsView*
/// @param type enum Qt__GestureType
///
void q_graphicsview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QGraphicsView*
/// @param windowTitle const char*
///
void q_graphicsview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QGraphicsView*
/// @param styleSheet const char*
///
void q_graphicsview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QGraphicsView*
/// @param icon QIcon*
///
void q_graphicsview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QGraphicsView*
///
QIcon* q_graphicsview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QGraphicsView*
/// @param windowIconText const char*
///
void q_graphicsview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QGraphicsView*
/// @param windowRole const char*
///
void q_graphicsview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QGraphicsView*
/// @param filePath const char*
///
void q_graphicsview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QGraphicsView*
/// @param level double
///
void q_graphicsview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QGraphicsView*
///
double q_graphicsview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QGraphicsView*
/// @param toolTip const char*
///
void q_graphicsview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QGraphicsView*
/// @param msec int
///
void q_graphicsview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QGraphicsView*
/// @param statusTip const char*
///
void q_graphicsview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QGraphicsView*
/// @param whatsThis const char*
///
void q_graphicsview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QGraphicsView*
/// @param name const char*
///
void q_graphicsview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QGraphicsView*
/// @param description const char*
///
void q_graphicsview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QGraphicsView*
/// @param direction enum Qt__LayoutDirection
///
void q_graphicsview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_graphicsview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QGraphicsView*
///
void q_graphicsview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QGraphicsView*
/// @param locale QLocale*
///
void q_graphicsview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QGraphicsView*
///
QLocale* q_graphicsview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QGraphicsView*
///
void q_graphicsview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QGraphicsView*
///
void q_graphicsview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QGraphicsView*
///
void q_graphicsview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QGraphicsView*
///
void q_graphicsview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QGraphicsView*
/// @param reason enum Qt__FocusReason
///
void q_graphicsview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_graphicsview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QGraphicsView*
/// @param policy enum Qt__FocusPolicy
///
void q_graphicsview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_graphicsview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QGraphicsView*
/// @param focusProxy QWidget*
///
void q_graphicsview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_graphicsview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QGraphicsView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_graphicsview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QGraphicsView*
///
void q_graphicsview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QGraphicsView*
/// @param param1 QCursor*
///
void q_graphicsview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QGraphicsView*
///
void q_graphicsview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QGraphicsView*
///
void q_graphicsview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QGraphicsView*
///
void q_graphicsview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QGraphicsView*
/// @param key QKeySequence*
///
int32_t q_graphicsview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QGraphicsView*
/// @param id int
///
void q_graphicsview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QGraphicsView*
/// @param id int
///
void q_graphicsview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QGraphicsView*
/// @param id int
///
void q_graphicsview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_graphicsview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_graphicsview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QGraphicsView*
/// @param enable bool
///
void q_graphicsview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QGraphicsView*
///
QGraphicsProxyWidget* q_graphicsview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGraphicsView*
///
void q_graphicsview_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGraphicsView*
///
void q_graphicsview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_graphicsview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGraphicsView*
/// @param param1 QRect*
///
void q_graphicsview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QGraphicsView*
/// @param param1 QRegion*
///
void q_graphicsview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_graphicsview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGraphicsView*
/// @param param1 QRect*
///
void q_graphicsview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QGraphicsView*
/// @param param1 QRegion*
///
void q_graphicsview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QGraphicsView*
/// @param hidden bool
///
void q_graphicsview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QGraphicsView*
///
void q_graphicsview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QGraphicsView*
///
void q_graphicsview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QGraphicsView*
///
void q_graphicsview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QGraphicsView*
///
void q_graphicsview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QGraphicsView*
///
void q_graphicsview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QGraphicsView*
///
void q_graphicsview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QGraphicsView*
///
void q_graphicsview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QGraphicsView*
///
void q_graphicsview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
///
void q_graphicsview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
///
void q_graphicsview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QGraphicsView*
/// @param param1 QPoint*
///
void q_graphicsview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QGraphicsView*
/// @param w int
/// @param h int
///
void q_graphicsview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QGraphicsView*
/// @param param1 QSize*
///
void q_graphicsview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_graphicsview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QGraphicsView*
/// @param geometry QRect*
///
void q_graphicsview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsView*
///
char* q_graphicsview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QGraphicsView*
/// @param geometry const char*
///
bool q_graphicsview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QGraphicsView*
///
void q_graphicsview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QGraphicsView*
/// @param param1 QWidget*
///
bool q_graphicsview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QGraphicsView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_graphicsview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QGraphicsView*
/// @param state flag of enum Qt__WindowState
///
void q_graphicsview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QGraphicsView*
/// @param state flag of enum Qt__WindowState
///
void q_graphicsview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QGraphicsView*
///
QSizePolicy* q_graphicsview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QGraphicsView*
/// @param sizePolicy QSizePolicy*
///
void q_graphicsview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QGraphicsView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_graphicsview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QGraphicsView*
///
QRegion* q_graphicsview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QGraphicsView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_graphicsview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QGraphicsView*
/// @param margins QMargins*
///
void q_graphicsview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QGraphicsView*
///
QMargins* q_graphicsview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QGraphicsView*
///
QRect* q_graphicsview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QGraphicsView*
///
QLayout* q_graphicsview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QGraphicsView*
/// @param layout QLayout*
///
void q_graphicsview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QGraphicsView*
///
void q_graphicsview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QGraphicsView*
/// @param parent QWidget*
///
void q_graphicsview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QGraphicsView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_graphicsview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QGraphicsView*
/// @param dx int
/// @param dy int
///
void q_graphicsview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QGraphicsView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_graphicsview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QGraphicsView*
/// @param on bool
///
void q_graphicsview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGraphicsView*
/// @param action QAction*
///
void q_graphicsview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QGraphicsView*
/// @param actions libqt_list of QAction*
///
void q_graphicsview_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QGraphicsView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_graphicsview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QGraphicsView*
/// @param before QAction*
/// @param action QAction*
///
void q_graphicsview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QGraphicsView*
/// @param action QAction*
///
void q_graphicsview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QGraphicsView*
///
/// @return libqt_list of QAction*
///
libqt_list q_graphicsview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGraphicsView*
/// @param text const char*
///
QAction* q_graphicsview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGraphicsView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_graphicsview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGraphicsView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_graphicsview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QGraphicsView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_graphicsview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QGraphicsView*
///
QWidget* q_graphicsview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QGraphicsView*
/// @param type flag of enum Qt__WindowType
///
void q_graphicsview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QGraphicsView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_graphicsview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QGraphicsView*
/// @param param1 enum Qt__WindowType
///
void q_graphicsview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QGraphicsView*
/// @param type flag of enum Qt__WindowType
///
void q_graphicsview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QGraphicsView*
///
/// @return enum Qt__WindowType
///
int32_t q_graphicsview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_graphicsview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QGraphicsView*
/// @param x int
/// @param y int
///
QWidget* q_graphicsview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QGraphicsView*
/// @param p QPoint*
///
QWidget* q_graphicsview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QGraphicsView*
/// @param p QPointF*
///
QWidget* q_graphicsview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QGraphicsView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_graphicsview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QGraphicsView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_graphicsview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QGraphicsView*
///
void q_graphicsview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QGraphicsView*
/// @param child QWidget*
///
bool q_graphicsview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QGraphicsView*
/// @param enabled bool
///
void q_graphicsview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QGraphicsView*
///
QBackingStore* q_graphicsview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QGraphicsView*
///
QWindow* q_graphicsview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QGraphicsView*
///
QScreen* q_graphicsview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QGraphicsView*
/// @param screen QScreen*
///
void q_graphicsview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_graphicsview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QGraphicsView*
/// @param title const char*
///
void q_graphicsview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, const char* title)
///
void q_graphicsview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QGraphicsView*
/// @param icon QIcon*
///
void q_graphicsview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QIcon* icon)
///
void q_graphicsview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QGraphicsView*
/// @param iconText const char*
///
void q_graphicsview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, const char* iconText)
///
void q_graphicsview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QGraphicsView*
/// @param pos QPoint*
///
void q_graphicsview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QPoint* pos)
///
void q_graphicsview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QGraphicsView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_graphicsview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QGraphicsView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_graphicsview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGraphicsView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_graphicsview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_graphicsview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_graphicsview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QGraphicsView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_graphicsview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QGraphicsView*
/// @param rectangle QRect*
///
QPixmap* q_graphicsview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QGraphicsView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_graphicsview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QGraphicsView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_graphicsview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QGraphicsView*
/// @param id int
/// @param enable bool
///
void q_graphicsview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QGraphicsView*
/// @param id int
/// @param enable bool
///
void q_graphicsview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QGraphicsView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_graphicsview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QGraphicsView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_graphicsview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_graphicsview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_graphicsview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsView*
///
const char* q_graphicsview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsView*
/// @param name char*
///
void q_graphicsview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsView*
/// @param b bool
///
bool q_graphicsview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsView*
///
QThread* q_graphicsview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsView*
/// @param thread QThread*
///
bool q_graphicsview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsView*
/// @param interval int
///
int32_t q_graphicsview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsView*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsView*
/// @param id int
///
void q_graphicsview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsView*
/// @param id enum Qt__TimerId
///
void q_graphicsview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsView*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsView*
/// @param filterObj QObject*
///
void q_graphicsview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsView*
/// @param obj QObject*
///
void q_graphicsview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsview_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsview_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsview_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsview_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsview_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGraphicsView*
/// @param receiver QObject*
///
bool q_graphicsview_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsview_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsView*
///
void q_graphicsview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsView*
///
void q_graphicsview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsView*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsView*
/// @param name const char*
///
QVariant* q_graphicsview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsView*
///
const char** q_graphicsview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsView*
///
QBindingStorage* q_graphicsview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsView*
///
const QBindingStorage* q_graphicsview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsView*
///
void q_graphicsview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self)
///
void q_graphicsview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsView*
///
QObject* q_graphicsview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsView*
/// @param classname const char*
///
bool q_graphicsview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsView*
///
void q_graphicsview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicsview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGraphicsView*
/// @param signal const char*
///
bool q_graphicsview_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGraphicsView*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicsview_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGraphicsView*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsview_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGraphicsView*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsview_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsView*
/// @param param1 QObject*
///
void q_graphicsview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QObject* param1)
///
void q_graphicsview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QGraphicsView*
///
bool q_graphicsview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QGraphicsView*
///
double q_graphicsview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QGraphicsView*
///
double q_graphicsview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_graphicsview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_graphicsview_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QSize* func()
///
void q_graphicsview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_graphicsview_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_graphicsview_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback bool func(QGraphicsView* self, QObject* param1, QEvent* param2)
///
void q_graphicsview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
QSize* q_graphicsview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QSize* func()
///
void q_graphicsview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 QEvent*
///
void q_graphicsview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 QEvent*
///
void q_graphicsview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QEvent* param1)
///
void q_graphicsview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param option QStyleOptionFrame*
///
void q_graphicsview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param option QStyleOptionFrame*
///
void q_graphicsview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QStyleOptionFrame* option)
///
void q_graphicsview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback int32_t func()
///
void q_graphicsview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param visible bool
///
void q_graphicsview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param visible bool
///
void q_graphicsview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, bool visible)
///
void q_graphicsview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 int
///
int32_t q_graphicsview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 int
///
int32_t q_graphicsview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback int32_t func(QGraphicsView* self, int param1)
///
void q_graphicsview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
bool q_graphicsview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
bool q_graphicsview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback bool func()
///
void q_graphicsview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
QPaintEngine* q_graphicsview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
QPaintEngine* q_graphicsview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QPaintEngine* func()
///
void q_graphicsview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QEnterEvent*
///
void q_graphicsview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QEnterEvent*
///
void q_graphicsview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QEnterEvent* event)
///
void q_graphicsview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
void q_graphicsview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
void q_graphicsview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QEvent* event)
///
void q_graphicsview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QMoveEvent*
///
void q_graphicsview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QMoveEvent*
///
void q_graphicsview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMoveEvent* event)
///
void q_graphicsview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QCloseEvent*
///
void q_graphicsview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QCloseEvent*
///
void q_graphicsview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QCloseEvent* event)
///
void q_graphicsview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QTabletEvent*
///
void q_graphicsview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QTabletEvent*
///
void q_graphicsview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QTabletEvent* event)
///
void q_graphicsview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QActionEvent*
///
void q_graphicsview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QActionEvent*
///
void q_graphicsview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QActionEvent* event)
///
void q_graphicsview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QHideEvent*
///
void q_graphicsview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QHideEvent*
///
void q_graphicsview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QHideEvent* event)
///
void q_graphicsview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_graphicsview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_graphicsview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback bool func(QGraphicsView* self, const char* eventType, void* message, intptr_t* result)
///
void q_graphicsview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_graphicsview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_graphicsview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback int32_t func(QGraphicsView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_graphicsview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param painter QPainter*
///
void q_graphicsview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param painter QPainter*
///
void q_graphicsview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QPainter* painter)
///
void q_graphicsview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param offset QPoint*
///
QPaintDevice* q_graphicsview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param offset QPoint*
///
QPaintDevice* q_graphicsview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QPaintDevice* func(QGraphicsView* self, QPoint* offset)
///
void q_graphicsview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
QPainter* q_graphicsview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
QPainter* q_graphicsview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QPainter* func()
///
void q_graphicsview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QTimerEvent*
///
void q_graphicsview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QTimerEvent*
///
void q_graphicsview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QTimerEvent* event)
///
void q_graphicsview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QChildEvent*
///
void q_graphicsview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QChildEvent*
///
void q_graphicsview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QChildEvent* event)
///
void q_graphicsview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
void q_graphicsview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param event QEvent*
///
void q_graphicsview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QEvent* event)
///
void q_graphicsview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal QMetaMethod*
///
void q_graphicsview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal QMetaMethod*
///
void q_graphicsview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMetaMethod* signal)
///
void q_graphicsview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal QMetaMethod*
///
void q_graphicsview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal QMetaMethod*
///
void q_graphicsview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QMetaMethod* signal)
///
void q_graphicsview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_graphicsview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_graphicsview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, int left, int top, int right, int bottom)
///
void q_graphicsview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
QMargins* q_graphicsview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
QMargins* q_graphicsview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QMargins* func()
///
void q_graphicsview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 QPainter*
///
void q_graphicsview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param param1 QPainter*
///
void q_graphicsview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, QPainter* param1)
///
void q_graphicsview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
void q_graphicsview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
void q_graphicsview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func()
///
void q_graphicsview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
void q_graphicsview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
void q_graphicsview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func()
///
void q_graphicsview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
void q_graphicsview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
void q_graphicsview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback void func()
///
void q_graphicsview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
bool q_graphicsview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
bool q_graphicsview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback bool func()
///
void q_graphicsview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
bool q_graphicsview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
bool q_graphicsview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback bool func()
///
void q_graphicsview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
QObject* q_graphicsview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
QObject* q_graphicsview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback QObject* func()
///
void q_graphicsview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
///
int32_t q_graphicsview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback int32_t func()
///
void q_graphicsview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal const char*
///
int32_t q_graphicsview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal const char*
///
int32_t q_graphicsview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback int32_t func(QGraphicsView* self, const char* signal)
///
void q_graphicsview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal QMetaMethod*
///
bool q_graphicsview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param signal QMetaMethod*
///
bool q_graphicsview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback bool func(QGraphicsView* self, QMetaMethod* signal)
///
void q_graphicsview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_graphicsview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_graphicsview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsView*
/// @param callback double func(QGraphicsView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_graphicsview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsView*
/// @param callback void func(QGraphicsView* self, const char* objectName)
///
void q_graphicsview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dtor.QGraphicsView)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsView*
///
void q_graphicsview_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#public-types)

typedef enum {
    QGRAPHICSVIEW_VIEWPORTANCHOR_NOANCHOR = 0,
    QGRAPHICSVIEW_VIEWPORTANCHOR_ANCHORVIEWCENTER = 1,
    QGRAPHICSVIEW_VIEWPORTANCHOR_ANCHORUNDERMOUSE = 2
} QGraphicsView__ViewportAnchor;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#public-types)

typedef enum {
    QGRAPHICSVIEW_CACHEMODEFLAG_CACHENONE = 0,
    QGRAPHICSVIEW_CACHEMODEFLAG_CACHEBACKGROUND = 1
} QGraphicsView__CacheModeFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#public-types)

typedef enum {
    QGRAPHICSVIEW_DRAGMODE_NODRAG = 0,
    QGRAPHICSVIEW_DRAGMODE_SCROLLHANDDRAG = 1,
    QGRAPHICSVIEW_DRAGMODE_RUBBERBANDDRAG = 2
} QGraphicsView__DragMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#public-types)

typedef enum {
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_FULLVIEWPORTUPDATE = 0,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_MINIMALVIEWPORTUPDATE = 1,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_SMARTVIEWPORTUPDATE = 2,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_NOVIEWPORTUPDATE = 3,
    QGRAPHICSVIEW_VIEWPORTUPDATEMODE_BOUNDINGRECTVIEWPORTUPDATE = 4
} QGraphicsView__ViewportUpdateMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#public-types)

typedef enum {
    QGRAPHICSVIEW_OPTIMIZATIONFLAG_DONTSAVEPAINTERSTATE = 1,
    QGRAPHICSVIEW_OPTIMIZATIONFLAG_DONTADJUSTFORANTIALIASING = 2,
    QGRAPHICSVIEW_OPTIMIZATIONFLAG_INDIRECTPAINTING = 4
} QGraphicsView__OptimizationFlag;

#endif
