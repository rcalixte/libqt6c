#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCHARTVIEW_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qchartview-qtcharts.html

/// q_chartview_new constructs a new QChartView object.
///
/// @param parent QWidget*
QChartView* q_chartview_new(void* parent);

/// q_chartview_new2 constructs a new QChartView object.
///
QChartView* q_chartview_new2();

/// q_chartview_new3 constructs a new QChartView object.
///
/// @param chart QChart*
QChartView* q_chartview_new3(void* chart);

/// q_chartview_new4 constructs a new QChartView object.
///
/// @param chart QChart*
/// @param parent QWidget*
QChartView* q_chartview_new4(void* chart, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QChartView*
const QMetaObject* q_chartview_meta_object(void* self);

/// @param self QChartView*
/// @param param1 const char*
void* q_chartview_metacast(void* self, const char* param1);

/// @param self QChartView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_chartview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QChartView*
/// @param callback int32_t func(QChartView* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_chartview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QChartView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_chartview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_chartview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#setRubberBand)
///
/// @param self QChartView*
/// @param rubberBands flag of enum QChartView__RubberBand
void q_chartview_set_rubber_band(void* self, const int32_t* rubberBands);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#rubberBand)
///
/// @param self QChartView*
///
/// @return flag of enum QChartView__RubberBand
int32_t q_chartview_rubber_band(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#chart)
///
/// @param self QChartView*
QChart* q_chartview_chart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#setChart)
///
/// @param self QChartView*
/// @param chart QChart*
void q_chartview_set_chart(void* self, void* chart);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
///
/// @param self QChartView*
/// @param event QResizeEvent*
void q_chartview_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QResizeEvent* event)
void q_chartview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QChartView*
/// @param event QResizeEvent*
void q_chartview_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMouseEvent* event)
void q_chartview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMouseEvent* event)
void q_chartview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_qbase_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMouseEvent* event)
void q_chartview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_qbase_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_chartview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_chartview_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
///
/// @param self QChartView*
///
/// @return flag of enum QPainter__RenderHint
int32_t q_chartview_render_hints(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// @param self QChartView*
/// @param hint enum QPainter__RenderHint
void q_chartview_set_render_hint(void* self, int32_t hint);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
///
/// @param self QChartView*
/// @param hints flag of enum QPainter__RenderHint
void q_chartview_set_render_hints(void* self, int32_t hints);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
///
/// @param self QChartView*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t q_chartview_alignment(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
///
/// @param self QChartView*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_chartview_set_alignment(void* self, int32_t alignment);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
///
/// @param self QChartView*
///
/// @return enum QGraphicsView__ViewportAnchor
int32_t q_chartview_transformation_anchor(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
///
/// @param self QChartView*
/// @param anchor enum QGraphicsView__ViewportAnchor
void q_chartview_set_transformation_anchor(void* self, int32_t anchor);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
///
/// @param self QChartView*
///
/// @return enum QGraphicsView__ViewportAnchor
int32_t q_chartview_resize_anchor(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
///
/// @param self QChartView*
/// @param anchor enum QGraphicsView__ViewportAnchor
void q_chartview_set_resize_anchor(void* self, int32_t anchor);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
///
/// @param self QChartView*
///
/// @return enum QGraphicsView__ViewportUpdateMode
int32_t q_chartview_viewport_update_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
///
/// @param self QChartView*
/// @param mode enum QGraphicsView__ViewportUpdateMode
void q_chartview_set_viewport_update_mode(void* self, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
///
/// @param self QChartView*
///
/// @return flag of enum QGraphicsView__OptimizationFlag
int32_t q_chartview_optimization_flags(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// @param self QChartView*
/// @param flag enum QGraphicsView__OptimizationFlag
void q_chartview_set_optimization_flag(void* self, int32_t flag);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
///
/// @param self QChartView*
/// @param flags flag of enum QGraphicsView__OptimizationFlag
void q_chartview_set_optimization_flags(void* self, int32_t flags);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
///
/// @param self QChartView*
///
/// @return enum QGraphicsView__DragMode
int32_t q_chartview_drag_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
///
/// @param self QChartView*
/// @param mode enum QGraphicsView__DragMode
void q_chartview_set_drag_mode(void* self, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
///
/// @param self QChartView*
///
/// @return enum Qt__ItemSelectionMode
int32_t q_chartview_rubber_band_selection_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
///
/// @param self QChartView*
/// @param mode enum Qt__ItemSelectionMode
void q_chartview_set_rubber_band_selection_mode(void* self, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
///
/// @param self QChartView*
QRect* q_chartview_rubber_band_rect(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
///
/// @param self QChartView*
///
/// @return flag of enum QGraphicsView__CacheModeFlag
int32_t q_chartview_cache_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
///
/// @param self QChartView*
/// @param mode flag of enum QGraphicsView__CacheModeFlag
void q_chartview_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
///
/// @param self QChartView*
void q_chartview_reset_cached_content(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
///
/// @param self QChartView*
bool q_chartview_is_interactive(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
///
/// @param self QChartView*
/// @param allowed bool
void q_chartview_set_interactive(void* self, bool allowed);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
///
/// @param self QChartView*
QGraphicsScene* q_chartview_scene(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
///
/// @param self QChartView*
/// @param scene QGraphicsScene*
void q_chartview_set_scene(void* self, void* scene);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
///
/// @param self QChartView*
QRectF* q_chartview_scene_rect(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// @param self QChartView*
/// @param rect QRectF*
void q_chartview_set_scene_rect(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// @param self QChartView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_chartview_set_scene_rect2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
///
/// @param self QChartView*
QTransform* q_chartview_transform(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
///
/// @param self QChartView*
QTransform* q_chartview_viewport_transform(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
///
/// @param self QChartView*
bool q_chartview_is_transformed(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// @param self QChartView*
/// @param matrix QTransform*
void q_chartview_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
///
/// @param self QChartView*
void q_chartview_reset_transform(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
///
/// @param self QChartView*
/// @param angle double
void q_chartview_rotate(void* self, double angle);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
///
/// @param self QChartView*
/// @param sx double
/// @param sy double
void q_chartview_scale(void* self, double sx, double sy);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
///
/// @param self QChartView*
/// @param sh double
/// @param sv double
void q_chartview_shear(void* self, double sh, double sv);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
///
/// @param self QChartView*
/// @param dx double
/// @param dy double
void q_chartview_translate(void* self, double dx, double dy);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// @param self QChartView*
/// @param pos QPointF*
void q_chartview_center_on(void* self, void* pos);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// @param self QChartView*
/// @param x double
/// @param y double
void q_chartview_center_on2(void* self, double x, double y);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// @param self QChartView*
/// @param item QGraphicsItem*
void q_chartview_center_on3(void* self, void* item);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param rect QRectF*
void q_chartview_ensure_visible(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_chartview_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param item QGraphicsItem*
void q_chartview_ensure_visible3(void* self, void* item);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QChartView*
/// @param rect QRectF*
void q_chartview_fit_in_view(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QChartView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_chartview_fit_in_view2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QChartView*
/// @param item QGraphicsItem*
void q_chartview_fit_in_view3(void* self, void* item);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
void q_chartview_render(void* self, void* painter);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
libqt_list /* of QGraphicsItem* */ q_chartview_items(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param pos QPoint*
libqt_list /* of QGraphicsItem* */ q_chartview_items2(void* self, void* pos);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param x int
/// @param y int
libqt_list /* of QGraphicsItem* */ q_chartview_items3(void* self, int x, int y);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param rect QRect*
libqt_list /* of QGraphicsItem* */ q_chartview_items4(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
libqt_list /* of QGraphicsItem* */ q_chartview_items5(void* self, int x, int y, int w, int h);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param path QPainterPath*
libqt_list /* of QGraphicsItem* */ q_chartview_items7(void* self, void* path);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// @param self QChartView*
/// @param pos QPoint*
QGraphicsItem* q_chartview_item_at(void* self, void* pos);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// @param self QChartView*
/// @param x int
/// @param y int
QGraphicsItem* q_chartview_item_at2(void* self, int x, int y);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// @param self QChartView*
/// @param point QPoint*
QPointF* q_chartview_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// @param self QChartView*
/// @param path QPainterPath*
QPainterPath* q_chartview_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// @param self QChartView*
/// @param point QPointF*
QPoint* q_chartview_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// @param self QChartView*
/// @param path QPainterPath*
QPainterPath* q_chartview_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// @param self QChartView*
/// @param x int
/// @param y int
QPointF* q_chartview_map_to_scene5(void* self, int x, int y);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// @param self QChartView*
/// @param x double
/// @param y double
QPoint* q_chartview_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
///
/// @param self QChartView*
QBrush* q_chartview_background_brush(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
///
/// @param self QChartView*
/// @param brush QBrush*
void q_chartview_set_background_brush(void* self, void* brush);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
///
/// @param self QChartView*
QBrush* q_chartview_foreground_brush(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
///
/// @param self QChartView*
/// @param brush QBrush*
void q_chartview_set_foreground_brush(void* self, void* brush);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
///
/// @param self QChartView*
/// @param rects libqt_list /* of QRectF* */
void q_chartview_update_scene(void* self, libqt_list rects);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// @param self QChartView*
void q_chartview_invalidate_scene(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
///
/// @param self QChartView*
/// @param rect QRectF*
void q_chartview_update_scene_rect(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// @param self QChartView*
/// @param viewportRect QRect*
/// @param fromScenePoint QPointF*
/// @param toScenePoint QPointF*
void q_chartview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint)
void q_chartview_on_rubber_band_changed(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// @param self QChartView*
/// @param hint enum QPainter__RenderHint
/// @param enabled bool
void q_chartview_set_render_hint2(void* self, int32_t hint, bool enabled);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// @param self QChartView*
/// @param flag enum QGraphicsView__OptimizationFlag
/// @param enabled bool
void q_chartview_set_optimization_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// @param self QChartView*
/// @param matrix QTransform*
/// @param combine bool
void q_chartview_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param rect QRectF*
/// @param xmargin int
void q_chartview_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
void q_chartview_ensure_visible32(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
void q_chartview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
void q_chartview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param item QGraphicsItem*
/// @param xmargin int
void q_chartview_ensure_visible23(void* self, void* item, int xmargin);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// @param self QChartView*
/// @param item QGraphicsItem*
/// @param xmargin int
/// @param ymargin int
void q_chartview_ensure_visible33(void* self, void* item, int xmargin, int ymargin);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QChartView*
/// @param rect QRectF*
/// @param aspectRadioMode enum Qt__AspectRatioMode
void q_chartview_fit_in_view22(void* self, void* rect, int32_t aspectRadioMode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QChartView*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param aspectRadioMode enum Qt__AspectRatioMode
void q_chartview_fit_in_view5(void* self, double x, double y, double w, double h, int32_t aspectRadioMode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// @param self QChartView*
/// @param item QGraphicsItem*
/// @param aspectRadioMode enum Qt__AspectRatioMode
void q_chartview_fit_in_view23(void* self, void* item, int32_t aspectRadioMode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param target QRectF*
void q_chartview_render2(void* self, void* painter, void* target);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRect*
void q_chartview_render3(void* self, void* painter, void* target, void* source);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRect*
/// @param aspectRatioMode enum Qt__AspectRatioMode
void q_chartview_render4(void* self, void* painter, void* target, void* source, int32_t aspectRatioMode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param rect QRect*
/// @param mode enum Qt__ItemSelectionMode
libqt_list /* of QGraphicsItem* */ q_chartview_items22(void* self, void* rect, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param mode enum Qt__ItemSelectionMode
libqt_list /* of QGraphicsItem* */ q_chartview_items52(void* self, int x, int y, int w, int h, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// @param self QChartView*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
libqt_list /* of QGraphicsItem* */ q_chartview_items24(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// @param self QChartView*
/// @param rect QRectF*
void q_chartview_invalidate_scene1(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// @param self QChartView*
/// @param rect QRectF*
/// @param layers flag of enum QGraphicsScene__SceneLayer
void q_chartview_invalidate_scene2(void* self, void* rect, int32_t layers);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QChartView*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_chartview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QChartView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_chartview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QChartView*
QScrollBar* q_chartview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QChartView*
/// @param scrollbar QScrollBar*
void q_chartview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QChartView*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_chartview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QChartView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_chartview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QChartView*
QScrollBar* q_chartview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QChartView*
/// @param scrollbar QScrollBar*
void q_chartview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QChartView*
QWidget* q_chartview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QChartView*
/// @param widget QWidget*
void q_chartview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QChartView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_chartview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QChartView*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ q_chartview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QChartView*
QWidget* q_chartview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QChartView*
/// @param widget QWidget*
void q_chartview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QChartView*
QSize* q_chartview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QChartView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t q_chartview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QChartView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void q_chartview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QChartView*
int32_t q_chartview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QChartView*
/// @param frameStyle int
void q_chartview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QChartView*
int32_t q_chartview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QChartView*
///
/// @return enum QFrame__Shape
int32_t q_chartview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QChartView*
/// @param frameShape enum QFrame__Shape
void q_chartview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QChartView*
///
/// @return enum QFrame__Shadow
int32_t q_chartview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QChartView*
/// @param frameShadow enum QFrame__Shadow
void q_chartview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QChartView*
int32_t q_chartview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QChartView*
/// @param lineWidth int
void q_chartview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QChartView*
int32_t q_chartview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QChartView*
/// @param midLineWidth int
void q_chartview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QChartView*
QRect* q_chartview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QChartView*
/// @param frameRect QRect*
void q_chartview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QChartView*
uintptr_t q_chartview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QChartView*
void q_chartview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QChartView*
uintptr_t q_chartview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QChartView*
uintptr_t q_chartview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QChartView*
QStyle* q_chartview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QChartView*
/// @param style QStyle*
void q_chartview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QChartView*
bool q_chartview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QChartView*
bool q_chartview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QChartView*
bool q_chartview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QChartView*
///
/// @return enum Qt__WindowModality
int32_t q_chartview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QChartView*
/// @param windowModality enum Qt__WindowModality
void q_chartview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QChartView*
bool q_chartview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QChartView*
/// @param param1 QWidget*
bool q_chartview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QChartView*
/// @param enabled bool
void q_chartview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QChartView*
/// @param disabled bool
void q_chartview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QChartView*
/// @param windowModified bool
void q_chartview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QChartView*
QRect* q_chartview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QChartView*
const QRect* q_chartview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QChartView*
QRect* q_chartview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QChartView*
int32_t q_chartview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QChartView*
int32_t q_chartview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QChartView*
QPoint* q_chartview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QChartView*
QSize* q_chartview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QChartView*
QSize* q_chartview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QChartView*
int32_t q_chartview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QChartView*
int32_t q_chartview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QChartView*
QRect* q_chartview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QChartView*
QRect* q_chartview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QChartView*
QRegion* q_chartview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QChartView*
QSize* q_chartview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QChartView*
QSize* q_chartview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QChartView*
int32_t q_chartview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QChartView*
int32_t q_chartview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QChartView*
int32_t q_chartview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QChartView*
int32_t q_chartview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QChartView*
/// @param minimumSize QSize*
void q_chartview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QChartView*
/// @param minw int
/// @param minh int
void q_chartview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QChartView*
/// @param maximumSize QSize*
void q_chartview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QChartView*
/// @param maxw int
/// @param maxh int
void q_chartview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QChartView*
/// @param minw int
void q_chartview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QChartView*
/// @param minh int
void q_chartview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QChartView*
/// @param maxw int
void q_chartview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QChartView*
/// @param maxh int
void q_chartview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QChartView*
QSize* q_chartview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QChartView*
/// @param sizeIncrement QSize*
void q_chartview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QChartView*
/// @param w int
/// @param h int
void q_chartview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QChartView*
QSize* q_chartview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QChartView*
/// @param baseSize QSize*
void q_chartview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QChartView*
/// @param basew int
/// @param baseh int
void q_chartview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QChartView*
/// @param fixedSize QSize*
void q_chartview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QChartView*
/// @param w int
/// @param h int
void q_chartview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QChartView*
/// @param w int
void q_chartview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QChartView*
/// @param h int
void q_chartview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QChartView*
/// @param param1 QPointF*
QPointF* q_chartview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QChartView*
/// @param param1 QPoint*
QPoint* q_chartview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QChartView*
/// @param param1 QPointF*
QPointF* q_chartview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QChartView*
/// @param param1 QPoint*
QPoint* q_chartview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QChartView*
/// @param param1 QPointF*
QPointF* q_chartview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QChartView*
/// @param param1 QPoint*
QPoint* q_chartview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QChartView*
/// @param param1 QPointF*
QPointF* q_chartview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QChartView*
/// @param param1 QPoint*
QPoint* q_chartview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QChartView*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_chartview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QChartView*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_chartview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QChartView*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_chartview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QChartView*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_chartview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QChartView*
QWidget* q_chartview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QChartView*
QWidget* q_chartview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QChartView*
QWidget* q_chartview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QChartView*
const QPalette* q_chartview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QChartView*
/// @param palette QPalette*
void q_chartview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QChartView*
/// @param backgroundRole enum QPalette__ColorRole
void q_chartview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QChartView*
///
/// @return enum QPalette__ColorRole
int32_t q_chartview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QChartView*
/// @param foregroundRole enum QPalette__ColorRole
void q_chartview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QChartView*
///
/// @return enum QPalette__ColorRole
int32_t q_chartview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QChartView*
const QFont* q_chartview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QChartView*
/// @param font QFont*
void q_chartview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QChartView*
QFontMetrics* q_chartview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QChartView*
QFontInfo* q_chartview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QChartView*
QCursor* q_chartview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QChartView*
/// @param cursor QCursor*
void q_chartview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QChartView*
void q_chartview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QChartView*
/// @param enable bool
void q_chartview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QChartView*
bool q_chartview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QChartView*
bool q_chartview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QChartView*
/// @param enable bool
void q_chartview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QChartView*
bool q_chartview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QChartView*
/// @param mask QBitmap*
void q_chartview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QChartView*
/// @param mask QRegion*
void q_chartview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QChartView*
QRegion* q_chartview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QChartView*
void q_chartview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QChartView*
QPixmap* q_chartview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QChartView*
QGraphicsEffect* q_chartview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QChartView*
/// @param effect QGraphicsEffect*
void q_chartview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QChartView*
/// @param type enum Qt__GestureType
void q_chartview_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QChartView*
/// @param type enum Qt__GestureType
void q_chartview_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QChartView*
/// @param windowTitle const char*
void q_chartview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QChartView*
/// @param styleSheet const char*
void q_chartview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QChartView*
/// @param icon QIcon*
void q_chartview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QChartView*
QIcon* q_chartview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QChartView*
/// @param windowIconText const char*
void q_chartview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QChartView*
/// @param windowRole const char*
void q_chartview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QChartView*
/// @param filePath const char*
void q_chartview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QChartView*
/// @param level double
void q_chartview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QChartView*
double q_chartview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QChartView*
bool q_chartview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QChartView*
/// @param toolTip const char*
void q_chartview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QChartView*
/// @param msec int
void q_chartview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QChartView*
int32_t q_chartview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QChartView*
/// @param statusTip const char*
void q_chartview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QChartView*
/// @param whatsThis const char*
void q_chartview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QChartView*
/// @param name const char*
void q_chartview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QChartView*
/// @param description const char*
void q_chartview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QChartView*
/// @param direction enum Qt__LayoutDirection
void q_chartview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QChartView*
///
/// @return enum Qt__LayoutDirection
int32_t q_chartview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QChartView*
void q_chartview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QChartView*
/// @param locale QLocale*
void q_chartview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QChartView*
QLocale* q_chartview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QChartView*
void q_chartview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QChartView*
bool q_chartview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QChartView*
bool q_chartview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QChartView*
void q_chartview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QChartView*
bool q_chartview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QChartView*
void q_chartview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QChartView*
void q_chartview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QChartView*
/// @param reason enum Qt__FocusReason
void q_chartview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QChartView*
///
/// @return enum Qt__FocusPolicy
int32_t q_chartview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QChartView*
/// @param policy enum Qt__FocusPolicy
void q_chartview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QChartView*
bool q_chartview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_chartview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QChartView*
/// @param focusProxy QWidget*
void q_chartview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QChartView*
QWidget* q_chartview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QChartView*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_chartview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QChartView*
/// @param policy enum Qt__ContextMenuPolicy
void q_chartview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QChartView*
void q_chartview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QChartView*
/// @param param1 QCursor*
void q_chartview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QChartView*
void q_chartview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QChartView*
void q_chartview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QChartView*
void q_chartview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QChartView*
/// @param key QKeySequence*
int32_t q_chartview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QChartView*
/// @param id int
void q_chartview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QChartView*
/// @param id int
void q_chartview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QChartView*
/// @param id int
void q_chartview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_chartview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_chartview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QChartView*
bool q_chartview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QChartView*
/// @param enable bool
void q_chartview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QChartView*
QGraphicsProxyWidget* q_chartview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QChartView*
void q_chartview_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QChartView*
void q_chartview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QChartView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_chartview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QChartView*
/// @param param1 QRect*
void q_chartview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QChartView*
/// @param param1 QRegion*
void q_chartview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QChartView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_chartview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QChartView*
/// @param param1 QRect*
void q_chartview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QChartView*
/// @param param1 QRegion*
void q_chartview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QChartView*
/// @param hidden bool
void q_chartview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QChartView*
void q_chartview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QChartView*
void q_chartview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QChartView*
void q_chartview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QChartView*
void q_chartview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QChartView*
void q_chartview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QChartView*
void q_chartview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QChartView*
bool q_chartview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QChartView*
void q_chartview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QChartView*
void q_chartview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QChartView*
/// @param param1 QWidget*
void q_chartview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QChartView*
/// @param x int
/// @param y int
void q_chartview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QChartView*
/// @param param1 QPoint*
void q_chartview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QChartView*
/// @param w int
/// @param h int
void q_chartview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QChartView*
/// @param param1 QSize*
void q_chartview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QChartView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_chartview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QChartView*
/// @param geometry QRect*
void q_chartview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
char* q_chartview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QChartView*
/// @param geometry const char*
bool q_chartview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QChartView*
void q_chartview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QChartView*
bool q_chartview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QChartView*
/// @param param1 QWidget*
bool q_chartview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QChartView*
bool q_chartview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QChartView*
bool q_chartview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QChartView*
bool q_chartview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QChartView*
bool q_chartview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QChartView*
///
/// @return flag of enum Qt__WindowState
int32_t q_chartview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QChartView*
/// @param state flag of enum Qt__WindowState
void q_chartview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QChartView*
/// @param state flag of enum Qt__WindowState
void q_chartview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QChartView*
QSizePolicy* q_chartview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QChartView*
/// @param sizePolicy QSizePolicy*
void q_chartview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QChartView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_chartview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QChartView*
QRegion* q_chartview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QChartView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_chartview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QChartView*
/// @param margins QMargins*
void q_chartview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QChartView*
QMargins* q_chartview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QChartView*
QRect* q_chartview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QChartView*
QLayout* q_chartview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QChartView*
/// @param layout QLayout*
void q_chartview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QChartView*
void q_chartview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QChartView*
/// @param parent QWidget*
void q_chartview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QChartView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_chartview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QChartView*
/// @param dx int
/// @param dy int
void q_chartview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QChartView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_chartview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QChartView*
QWidget* q_chartview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QChartView*
QWidget* q_chartview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QChartView*
QWidget* q_chartview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QChartView*
bool q_chartview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QChartView*
/// @param on bool
void q_chartview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QChartView*
/// @param action QAction*
void q_chartview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QChartView*
/// @param actions libqt_list /* of QAction* */
void q_chartview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QChartView*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_chartview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QChartView*
/// @param before QAction*
/// @param action QAction*
void q_chartview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QChartView*
/// @param action QAction*
void q_chartview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QChartView*
libqt_list /* of QAction* */ q_chartview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QChartView*
/// @param text const char*
QAction* q_chartview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QChartView*
/// @param icon QIcon*
/// @param text const char*
QAction* q_chartview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QChartView*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_chartview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QChartView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_chartview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QChartView*
QWidget* q_chartview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QChartView*
/// @param type flag of enum Qt__WindowType
void q_chartview_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QChartView*
///
/// @return flag of enum Qt__WindowType
int64_t q_chartview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QChartView*
/// @param param1 enum Qt__WindowType
void q_chartview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QChartView*
/// @param type flag of enum Qt__WindowType
void q_chartview_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QChartView*
///
/// @return enum Qt__WindowType
int64_t q_chartview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_chartview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QChartView*
/// @param x int
/// @param y int
QWidget* q_chartview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QChartView*
/// @param p QPoint*
QWidget* q_chartview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QChartView*
/// @param p QPointF*
QWidget* q_chartview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QChartView*
/// @param param1 enum Qt__WidgetAttribute
void q_chartview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QChartView*
/// @param param1 enum Qt__WidgetAttribute
bool q_chartview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QChartView*
void q_chartview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QChartView*
/// @param child QWidget*
bool q_chartview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QChartView*
bool q_chartview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QChartView*
/// @param enabled bool
void q_chartview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QChartView*
QBackingStore* q_chartview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QChartView*
QWindow* q_chartview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QChartView*
QScreen* q_chartview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QChartView*
/// @param screen QScreen*
void q_chartview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_chartview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QChartView*
/// @param title const char*
void q_chartview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, const char* title)
void q_chartview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QChartView*
/// @param icon QIcon*
void q_chartview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QIcon* icon)
void q_chartview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QChartView*
/// @param iconText const char*
void q_chartview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, const char* iconText)
void q_chartview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QChartView*
/// @param pos QPoint*
void q_chartview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QPoint* pos)
void q_chartview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QChartView*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_chartview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QChartView*
/// @param hints flag of enum Qt__InputMethodHint
void q_chartview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QChartView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_chartview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_chartview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_chartview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_chartview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QChartView*
/// @param rectangle QRect*
QPixmap* q_chartview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QChartView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_chartview_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QChartView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_chartview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QChartView*
/// @param id int
/// @param enable bool
void q_chartview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QChartView*
/// @param id int
/// @param enable bool
void q_chartview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QChartView*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_chartview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QChartView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_chartview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_chartview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_chartview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char* q_chartview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QChartView*
/// @param name char*
void q_chartview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QChartView*
bool q_chartview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QChartView*
bool q_chartview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QChartView*
bool q_chartview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QChartView*
bool q_chartview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QChartView*
/// @param b bool
bool q_chartview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QChartView*
QThread* q_chartview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QChartView*
/// @param thread QThread*
bool q_chartview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChartView*
/// @param interval int
int32_t q_chartview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChartView*
/// @param id int
void q_chartview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChartView*
/// @param id enum Qt__TimerId
void q_chartview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QChartView*
libqt_list /* of QObject* */ q_chartview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QChartView*
/// @param filterObj QObject*
void q_chartview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QChartView*
/// @param obj QObject*
void q_chartview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_chartview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChartView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_chartview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_chartview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_chartview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QChartView*
void q_chartview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QChartView*
void q_chartview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QChartView*
/// @param name const char*
/// @param value QVariant*
bool q_chartview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QChartView*
/// @param name const char*
QVariant* q_chartview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChartView*
const char** q_chartview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChartView*
QBindingStorage* q_chartview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChartView*
const QBindingStorage* q_chartview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChartView*
void q_chartview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self)
void q_chartview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QChartView*
QObject* q_chartview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QChartView*
/// @param classname const char*
bool q_chartview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QChartView*
void q_chartview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QChartView*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_chartview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChartView*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_chartview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_chartview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChartView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_chartview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChartView*
/// @param param1 QObject*
void q_chartview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QObject* param1)
void q_chartview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QChartView*
bool q_chartview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QChartView*
int32_t q_chartview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QChartView*
int32_t q_chartview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QChartView*
int32_t q_chartview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QChartView*
int32_t q_chartview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QChartView*
int32_t q_chartview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QChartView*
int32_t q_chartview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QChartView*
double q_chartview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QChartView*
double q_chartview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QChartView*
int32_t q_chartview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QChartView*
int32_t q_chartview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_chartview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_chartview_encode_metric_f(int32_t metric, double value);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QSize* q_chartview_size_hint(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QSize* q_chartview_qbase_size_hint(void* self);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QSize* func()
void q_chartview_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param query enum Qt__InputMethodQuery
QVariant* q_chartview_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param query enum Qt__InputMethodQuery
QVariant* q_chartview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QVariant* func(QChartView* self, enum Qt__InputMethodQuery query)
void q_chartview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param widget QWidget*
void q_chartview_setup_viewport(void* self, void* widget);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param widget QWidget*
void q_chartview_qbase_setup_viewport(void* self, void* widget);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QWidget* widget)
void q_chartview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
bool q_chartview_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
bool q_chartview_qbase_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func(QChartView* self, QEvent* event)
void q_chartview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
bool q_chartview_viewport_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
bool q_chartview_qbase_viewport_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func(QChartView* self, QEvent* event)
void q_chartview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QContextMenuEvent*
void q_chartview_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QContextMenuEvent*
void q_chartview_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QContextMenuEvent* event)
void q_chartview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QDragEnterEvent*
void q_chartview_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QDragEnterEvent*
void q_chartview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QDragEnterEvent* event)
void q_chartview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QDragLeaveEvent*
void q_chartview_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QDragLeaveEvent*
void q_chartview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QDragLeaveEvent* event)
void q_chartview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QDragMoveEvent*
void q_chartview_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QDragMoveEvent*
void q_chartview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QDragMoveEvent* event)
void q_chartview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QDropEvent*
void q_chartview_drop_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QDropEvent*
void q_chartview_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QDropEvent* event)
void q_chartview_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QFocusEvent*
void q_chartview_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QFocusEvent*
void q_chartview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QFocusEvent* event)
void q_chartview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param next bool
bool q_chartview_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param next bool
bool q_chartview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func(QChartView* self, bool next)
void q_chartview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QFocusEvent*
void q_chartview_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QFocusEvent*
void q_chartview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QFocusEvent* event)
void q_chartview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QKeyEvent*
void q_chartview_key_press_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QKeyEvent*
void q_chartview_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QKeyEvent* event)
void q_chartview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QKeyEvent*
void q_chartview_key_release_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QKeyEvent*
void q_chartview_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QKeyEvent* event)
void q_chartview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QMouseEvent*
void q_chartview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMouseEvent* event)
void q_chartview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QWheelEvent*
void q_chartview_wheel_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QWheelEvent*
void q_chartview_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QWheelEvent* event)
void q_chartview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QPaintEvent*
void q_chartview_paint_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QPaintEvent*
void q_chartview_qbase_paint_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QPaintEvent* event)
void q_chartview_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param dx int
/// @param dy int
void q_chartview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param dx int
/// @param dy int
void q_chartview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, int dx, int dy)
void q_chartview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QShowEvent*
void q_chartview_show_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QShowEvent*
void q_chartview_qbase_show_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QShowEvent* event)
void q_chartview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QInputMethodEvent*
void q_chartview_input_method_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QInputMethodEvent*
void q_chartview_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QInputMethodEvent* event)
void q_chartview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param rect QRectF*
void q_chartview_draw_background(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param rect QRectF*
void q_chartview_qbase_draw_background(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QPainter* painter, QRectF* rect)
void q_chartview_on_draw_background(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param rect QRectF*
void q_chartview_draw_foreground(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param painter QPainter*
/// @param rect QRectF*
void q_chartview_qbase_draw_foreground(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QPainter* painter, QRectF* rect)
void q_chartview_on_draw_foreground(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QSize* q_chartview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QSize* q_chartview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QSize* func()
void q_chartview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_chartview_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_chartview_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func(QChartView* self, QObject* param1, QEvent* param2)
void q_chartview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QSize* q_chartview_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QSize* q_chartview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QSize* func()
void q_chartview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param param1 QEvent*
void q_chartview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param param1 QEvent*
void q_chartview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QEvent* param1)
void q_chartview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param option QStyleOptionFrame*
void q_chartview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param option QStyleOptionFrame*
void q_chartview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QStyleOptionFrame* option)
void q_chartview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
int32_t q_chartview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
int32_t q_chartview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback int32_t func()
void q_chartview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param visible bool
void q_chartview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param visible bool
void q_chartview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, bool visible)
void q_chartview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param param1 int
int32_t q_chartview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param param1 int
int32_t q_chartview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback int32_t func(QChartView* self, int param1)
void q_chartview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
bool q_chartview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
bool q_chartview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func()
void q_chartview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QPaintEngine* q_chartview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QPaintEngine* q_chartview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QPaintEngine* func()
void q_chartview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QEnterEvent*
void q_chartview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QEnterEvent*
void q_chartview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QEnterEvent* event)
void q_chartview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
void q_chartview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
void q_chartview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QEvent* event)
void q_chartview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QMoveEvent*
void q_chartview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QMoveEvent*
void q_chartview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMoveEvent* event)
void q_chartview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QCloseEvent*
void q_chartview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QCloseEvent*
void q_chartview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QCloseEvent* event)
void q_chartview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QTabletEvent*
void q_chartview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QTabletEvent*
void q_chartview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QTabletEvent* event)
void q_chartview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QActionEvent*
void q_chartview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QActionEvent*
void q_chartview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QActionEvent* event)
void q_chartview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QHideEvent*
void q_chartview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QHideEvent*
void q_chartview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QHideEvent* event)
void q_chartview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_chartview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_chartview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func(QChartView* self, const char* eventType, void* message, intptr_t* result)
void q_chartview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_chartview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_chartview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback int32_t func(QChartView* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_chartview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param painter QPainter*
void q_chartview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param painter QPainter*
void q_chartview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QPainter* painter)
void q_chartview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param offset QPoint*
QPaintDevice* q_chartview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param offset QPoint*
QPaintDevice* q_chartview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QPaintDevice* func(QChartView* self, QPoint* offset)
void q_chartview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QPainter* q_chartview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QPainter* q_chartview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QPainter* func()
void q_chartview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QTimerEvent*
void q_chartview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QTimerEvent*
void q_chartview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QTimerEvent* event)
void q_chartview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QChildEvent*
void q_chartview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QChildEvent*
void q_chartview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QChildEvent* event)
void q_chartview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
void q_chartview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param event QEvent*
void q_chartview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QEvent* event)
void q_chartview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param signal QMetaMethod*
void q_chartview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param signal QMetaMethod*
void q_chartview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMetaMethod* signal)
void q_chartview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param signal QMetaMethod*
void q_chartview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param signal QMetaMethod*
void q_chartview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QMetaMethod* signal)
void q_chartview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_chartview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_chartview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, int left, int top, int right, int bottom)
void q_chartview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QMargins* q_chartview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QMargins* q_chartview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QMargins* func()
void q_chartview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param param1 QPainter*
void q_chartview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param param1 QPainter*
void q_chartview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, QPainter* param1)
void q_chartview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
void q_chartview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
void q_chartview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func()
void q_chartview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
void q_chartview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
void q_chartview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func()
void q_chartview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
void q_chartview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
void q_chartview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback void func()
void q_chartview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
bool q_chartview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
bool q_chartview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func()
void q_chartview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
bool q_chartview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
bool q_chartview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func()
void q_chartview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
QObject* q_chartview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
QObject* q_chartview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback QObject* func()
void q_chartview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
int32_t q_chartview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
int32_t q_chartview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback int32_t func()
void q_chartview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param signal const char*
int32_t q_chartview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param signal const char*
int32_t q_chartview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback int32_t func(QChartView* self, const char* signal)
void q_chartview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param signal QMetaMethod*
bool q_chartview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param signal QMetaMethod*
bool q_chartview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback bool func(QChartView* self, QMetaMethod* signal)
void q_chartview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChartView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_chartview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChartView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_chartview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChartView*
/// @param callback double func(QChartView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_chartview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QChartView*
/// @param callback void func(QChartView* self, const char* objectName)
void q_chartview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchartview-qtcharts.html#dtor.QChartView)
///
/// Delete this object from C++ memory.
///
/// @param self QChartView*
void q_chartview_delete(void* self);

/// https://doc.qt.io/qt-6/qchartview-qtcharts.html#types

typedef enum {
    QCHARTVIEW_RUBBERBAND_NORUBBERBAND = 0,
    QCHARTVIEW_RUBBERBAND_VERTICALRUBBERBAND = 1,
    QCHARTVIEW_RUBBERBAND_HORIZONTALRUBBERBAND = 2,
    QCHARTVIEW_RUBBERBAND_RECTANGLERUBBERBAND = 3,
    QCHARTVIEW_RUBBERBAND_CLICKTHROUGHRUBBERBAND = 128
} QChartView__RubberBand;

#endif
