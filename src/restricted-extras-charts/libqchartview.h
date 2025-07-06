#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHARTVIEW_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qchartview-qtcharts.html

/// q_chartview_new constructs a new QChartView object.
///
/// ``` QWidget* parent ```
QChartView* q_chartview_new(void* parent);

/// q_chartview_new2 constructs a new QChartView object.
///
///
QChartView* q_chartview_new2();

/// q_chartview_new3 constructs a new QChartView object.
///
/// ``` QChart* chart ```
QChartView* q_chartview_new3(void* chart);

/// q_chartview_new4 constructs a new QChartView object.
///
/// ``` QChart* chart, QWidget* parent ```
QChartView* q_chartview_new4(void* chart, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QChartView* self ```
const QMetaObject* q_chartview_meta_object(void* self);

/// ``` QChartView* self, const char* param1 ```
void* q_chartview_metacast(void* self, const char* param1);

/// ``` QChartView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chartview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, enum QMetaObject__Call, int, void*) ```
void q_chartview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QChartView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chartview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_chartview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#setRubberBand)
///
/// ``` QChartView* self, int* rubberBands ```
void q_chartview_set_rubber_band(void* self, int64_t* rubberBands);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#rubberBand)
///
/// ``` QChartView* self ```
int64_t q_chartview_rubber_band(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#chart)
///
/// ``` QChartView* self ```
QChart* q_chartview_chart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#setChart)
///
/// ``` QChartView* self, QChart* chart ```
void q_chartview_set_chart(void* self, void* chart);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
///
/// ``` QChartView* self, QResizeEvent* event ```
void q_chartview_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QResizeEvent*) ```
void q_chartview_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QChartView* self, QResizeEvent* event ```
void q_chartview_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_chartview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_chartview_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
///
/// ``` QChartView* self ```
int64_t q_chartview_render_hints(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QChartView* self, enum QPainter__RenderHint hint ```
void q_chartview_set_render_hint(void* self, int64_t hint);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
///
/// ``` QChartView* self, int hints ```
void q_chartview_set_render_hints(void* self, int64_t hints);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
///
/// ``` QChartView* self ```
int64_t q_chartview_alignment(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
///
/// ``` QChartView* self, int alignment ```
void q_chartview_set_alignment(void* self, int64_t alignment);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
///
/// ``` QChartView* self ```
int64_t q_chartview_transformation_anchor(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
///
/// ``` QChartView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_chartview_set_transformation_anchor(void* self, int64_t anchor);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
///
/// ``` QChartView* self ```
int64_t q_chartview_resize_anchor(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
///
/// ``` QChartView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_chartview_set_resize_anchor(void* self, int64_t anchor);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_viewport_update_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
///
/// ``` QChartView* self, enum QGraphicsView__ViewportUpdateMode mode ```
void q_chartview_set_viewport_update_mode(void* self, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
///
/// ``` QChartView* self ```
int64_t q_chartview_optimization_flags(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QChartView* self, enum QGraphicsView__OptimizationFlag flag ```
void q_chartview_set_optimization_flag(void* self, int64_t flag);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
///
/// ``` QChartView* self, int flags ```
void q_chartview_set_optimization_flags(void* self, int64_t flags);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_drag_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
///
/// ``` QChartView* self, enum QGraphicsView__DragMode mode ```
void q_chartview_set_drag_mode(void* self, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_rubber_band_selection_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
///
/// ``` QChartView* self, enum Qt__ItemSelectionMode mode ```
void q_chartview_set_rubber_band_selection_mode(void* self, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_rubber_band_rect(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_cache_mode(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
///
/// ``` QChartView* self, int mode ```
void q_chartview_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
///
/// ``` QChartView* self ```
void q_chartview_reset_cached_content(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
///
/// ``` QChartView* self ```
bool q_chartview_is_interactive(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
///
/// ``` QChartView* self, bool allowed ```
void q_chartview_set_interactive(void* self, bool allowed);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
///
/// ``` QChartView* self ```
QGraphicsScene* q_chartview_scene(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
///
/// ``` QChartView* self, QGraphicsScene* scene ```
void q_chartview_set_scene(void* self, void* scene);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
///
/// ``` QChartView* self ```
QRectF* q_chartview_scene_rect(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_set_scene_rect(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QChartView* self, double x, double y, double w, double h ```
void q_chartview_set_scene_rect2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
///
/// ``` QChartView* self ```
QTransform* q_chartview_transform(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
///
/// ``` QChartView* self ```
QTransform* q_chartview_viewport_transform(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
///
/// ``` QChartView* self ```
bool q_chartview_is_transformed(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QChartView* self, QTransform* matrix ```
void q_chartview_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
///
/// ``` QChartView* self ```
void q_chartview_reset_transform(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
///
/// ``` QChartView* self, double angle ```
void q_chartview_rotate(void* self, double angle);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
///
/// ``` QChartView* self, double sx, double sy ```
void q_chartview_scale(void* self, double sx, double sy);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
///
/// ``` QChartView* self, double sh, double sv ```
void q_chartview_shear(void* self, double sh, double sv);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
///
/// ``` QChartView* self, double dx, double dy ```
void q_chartview_translate(void* self, double dx, double dy);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QChartView* self, QPointF* pos ```
void q_chartview_center_on(void* self, void* pos);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QChartView* self, double x, double y ```
void q_chartview_center_on2(void* self, double x, double y);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QChartView* self, QGraphicsItem* item ```
void q_chartview_center_on_with_item(void* self, void* item);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_ensure_visible(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, double x, double y, double w, double h ```
void q_chartview_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QGraphicsItem* item ```
void q_chartview_ensure_visible_with_item(void* self, void* item);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_fit_in_view(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, double x, double y, double w, double h ```
void q_chartview_fit_in_view2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QGraphicsItem* item ```
void q_chartview_fit_in_view_with_item(void* self, void* item);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_render(void* self, void* painter);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self ```
libqt_list /* of QGraphicsItem* */ q_chartview_items(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QPoint* pos ```
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_pos(void* self, void* pos);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, int x, int y ```
libqt_list /* of QGraphicsItem* */ q_chartview_items2(void* self, int x, int y);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QRect* rect ```
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_rect(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
libqt_list /* of QGraphicsItem* */ q_chartview_items3(void* self, int x, int y, int w, int h);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QPainterPath* path ```
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_path(void* self, void* path);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QChartView* self, QPoint* pos ```
QGraphicsItem* q_chartview_item_at(void* self, void* pos);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QChartView* self, int x, int y ```
QGraphicsItem* q_chartview_item_at2(void* self, int x, int y);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QChartView* self, QPoint* point ```
QPointF* q_chartview_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QChartView* self, QPainterPath* path ```
QPainterPath* q_chartview_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QChartView* self, QPointF* point ```
QPoint* q_chartview_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QChartView* self, QPainterPath* path ```
QPainterPath* q_chartview_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QChartView* self, int x, int y ```
QPointF* q_chartview_map_to_scene2(void* self, int x, int y);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QChartView* self, double x, double y ```
QPoint* q_chartview_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
///
/// ``` QChartView* self ```
QBrush* q_chartview_background_brush(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
///
/// ``` QChartView* self, QBrush* brush ```
void q_chartview_set_background_brush(void* self, void* brush);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
///
/// ``` QChartView* self ```
QBrush* q_chartview_foreground_brush(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
///
/// ``` QChartView* self, QBrush* brush ```
void q_chartview_set_foreground_brush(void* self, void* brush);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
///
/// ``` QChartView* self, libqt_list /* of QRectF* */ rects ```
void q_chartview_update_scene(void* self, libqt_list rects);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QChartView* self ```
void q_chartview_invalidate_scene(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_update_scene_rect(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// ``` QChartView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint ```
void q_chartview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// ``` QChartView* self, void (*slot)(QGraphicsView*, QRect*, QPointF*, QPointF*) ```
void q_chartview_on_rubber_band_changed(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QChartView* self, enum QPainter__RenderHint hint, bool enabled ```
void q_chartview_set_render_hint2(void* self, int64_t hint, bool enabled);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QChartView* self, enum QGraphicsView__OptimizationFlag flag, bool enabled ```
void q_chartview_set_optimization_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QChartView* self, QTransform* matrix, bool combine ```
void q_chartview_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QRectF* rect, int xmargin ```
void q_chartview_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QRectF* rect, int xmargin, int ymargin ```
void q_chartview_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, double x, double y, double w, double h, int xmargin ```
void q_chartview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_chartview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QGraphicsItem* item, int xmargin ```
void q_chartview_ensure_visible23(void* self, void* item, int xmargin);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QGraphicsItem* item, int xmargin, int ymargin ```
void q_chartview_ensure_visible32(void* self, void* item, int xmargin, int ymargin);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QRectF* rect, enum Qt__AspectRatioMode aspectRadioMode ```
void q_chartview_fit_in_view22(void* self, void* rect, int64_t aspectRadioMode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, double x, double y, double w, double h, enum Qt__AspectRatioMode aspectRadioMode ```
void q_chartview_fit_in_view5(void* self, double x, double y, double w, double h, int64_t aspectRadioMode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QGraphicsItem* item, enum Qt__AspectRatioMode aspectRadioMode ```
void q_chartview_fit_in_view23(void* self, void* item, int64_t aspectRadioMode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter, QRectF* target ```
void q_chartview_render2(void* self, void* painter, void* target);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter, QRectF* target, QRect* source ```
void q_chartview_render3(void* self, void* painter, void* target, void* source);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter, QRectF* target, QRect* source, enum Qt__AspectRatioMode aspectRatioMode ```
void q_chartview_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QRect* rect, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chartview_items22(void* self, void* rect, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, int x, int y, int w, int h, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chartview_items5(void* self, int x, int y, int w, int h, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chartview_items24(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_invalidate_scene1(void* self, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QChartView* self, QRectF* rect, int layers ```
void q_chartview_invalidate_scene2(void* self, void* rect, int64_t layers);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QChartView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_chartview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QChartView* self ```
QScrollBar* q_chartview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QChartView* self, QScrollBar* scrollbar ```
void q_chartview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QChartView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_chartview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QChartView* self ```
QScrollBar* q_chartview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QChartView* self, QScrollBar* scrollbar ```
void q_chartview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QChartView* self, QWidget* widget, int alignment ```
void q_chartview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QChartView* self, int alignment ```
libqt_list /* of QWidget* */ q_chartview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QChartView* self ```
QWidget* q_chartview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QChartView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_chartview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QChartView* self ```
int32_t q_chartview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QChartView* self, int frameStyle ```
void q_chartview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QChartView* self ```
int64_t q_chartview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QChartView* self, enum QFrame__Shape frameShape ```
void q_chartview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QChartView* self ```
int64_t q_chartview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QChartView* self, enum QFrame__Shadow frameShadow ```
void q_chartview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QChartView* self, int lineWidth ```
void q_chartview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QChartView* self, int midLineWidth ```
void q_chartview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QChartView* self, QRect* frameRect ```
void q_chartview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QChartView* self ```
uintptr_t q_chartview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QChartView* self ```
void q_chartview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QChartView* self ```
uintptr_t q_chartview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QChartView* self ```
uintptr_t q_chartview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QChartView* self ```
QStyle* q_chartview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QChartView* self, QStyle* style ```
void q_chartview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QChartView* self ```
bool q_chartview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QChartView* self ```
bool q_chartview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QChartView* self ```
bool q_chartview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QChartView* self, enum Qt__WindowModality windowModality ```
void q_chartview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QChartView* self ```
bool q_chartview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QChartView* self, QWidget* param1 ```
bool q_chartview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QChartView* self, bool enabled ```
void q_chartview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QChartView* self, bool disabled ```
void q_chartview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QChartView* self, bool windowModified ```
void q_chartview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QChartView* self ```
QRect* q_chartview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QChartView* self ```
const QRect* q_chartview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QChartView* self ```
QRect* q_chartview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QChartView* self ```
int32_t q_chartview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QChartView* self ```
int32_t q_chartview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QChartView* self ```
QPoint* q_chartview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QChartView* self ```
QSize* q_chartview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QChartView* self ```
int32_t q_chartview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QChartView* self ```
int32_t q_chartview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QChartView* self ```
QRect* q_chartview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QChartView* self ```
QRegion* q_chartview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QChartView* self ```
int32_t q_chartview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QChartView* self ```
int32_t q_chartview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QChartView* self, QSize* minimumSize ```
void q_chartview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QChartView* self, int minw, int minh ```
void q_chartview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QChartView* self, QSize* maximumSize ```
void q_chartview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QChartView* self, int maxw, int maxh ```
void q_chartview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QChartView* self, int minw ```
void q_chartview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QChartView* self, int minh ```
void q_chartview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QChartView* self, int maxw ```
void q_chartview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QChartView* self, int maxh ```
void q_chartview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QChartView* self ```
QSize* q_chartview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QChartView* self, QSize* sizeIncrement ```
void q_chartview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QChartView* self, int w, int h ```
void q_chartview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QChartView* self, QSize* baseSize ```
void q_chartview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QChartView* self, int basew, int baseh ```
void q_chartview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QChartView* self, QSize* fixedSize ```
void q_chartview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QChartView* self, int w, int h ```
void q_chartview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QChartView* self, int w ```
void q_chartview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QChartView* self, int h ```
void q_chartview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QChartView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_chartview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QChartView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_chartview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QChartView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_chartview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QChartView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_chartview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QChartView* self ```
QWidget* q_chartview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QChartView* self ```
const QPalette* q_chartview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QChartView* self, QPalette* palette ```
void q_chartview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QChartView* self, enum QPalette__ColorRole backgroundRole ```
void q_chartview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QChartView* self ```
int64_t q_chartview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QChartView* self, enum QPalette__ColorRole foregroundRole ```
void q_chartview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QChartView* self ```
int64_t q_chartview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QChartView* self ```
const QFont* q_chartview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QChartView* self, QFont* font ```
void q_chartview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QChartView* self ```
QFontMetrics* q_chartview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QChartView* self ```
QFontInfo* q_chartview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QChartView* self ```
QCursor* q_chartview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QChartView* self, QCursor* cursor ```
void q_chartview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QChartView* self ```
void q_chartview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QChartView* self, bool enable ```
void q_chartview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QChartView* self ```
bool q_chartview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QChartView* self ```
bool q_chartview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QChartView* self, bool enable ```
void q_chartview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QChartView* self ```
bool q_chartview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QChartView* self, QBitmap* mask ```
void q_chartview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QChartView* self, QRegion* mask ```
void q_chartview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QChartView* self ```
QRegion* q_chartview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QChartView* self ```
void q_chartview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QChartView* self ```
QPixmap* q_chartview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QChartView* self ```
QGraphicsEffect* q_chartview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QChartView* self, QGraphicsEffect* effect ```
void q_chartview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QChartView* self, enum Qt__GestureType typeVal ```
void q_chartview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QChartView* self, enum Qt__GestureType typeVal ```
void q_chartview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QChartView* self, const char* windowTitle ```
void q_chartview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QChartView* self, const char* styleSheet ```
void q_chartview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QChartView* self ```
const char* q_chartview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QChartView* self ```
const char* q_chartview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QChartView* self, QIcon* icon ```
void q_chartview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QChartView* self ```
QIcon* q_chartview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QChartView* self, const char* windowIconText ```
void q_chartview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QChartView* self ```
const char* q_chartview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QChartView* self, const char* windowRole ```
void q_chartview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QChartView* self ```
const char* q_chartview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QChartView* self, const char* filePath ```
void q_chartview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QChartView* self ```
const char* q_chartview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QChartView* self, double level ```
void q_chartview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QChartView* self ```
double q_chartview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QChartView* self ```
bool q_chartview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QChartView* self, const char* toolTip ```
void q_chartview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QChartView* self ```
const char* q_chartview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QChartView* self, int msec ```
void q_chartview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QChartView* self ```
int32_t q_chartview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QChartView* self, const char* statusTip ```
void q_chartview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QChartView* self ```
const char* q_chartview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QChartView* self, const char* whatsThis ```
void q_chartview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QChartView* self ```
const char* q_chartview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QChartView* self ```
const char* q_chartview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QChartView* self, const char* name ```
void q_chartview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QChartView* self ```
const char* q_chartview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QChartView* self, const char* description ```
void q_chartview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QChartView* self, enum Qt__LayoutDirection direction ```
void q_chartview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QChartView* self ```
int64_t q_chartview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QChartView* self ```
void q_chartview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QChartView* self, QLocale* locale ```
void q_chartview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QChartView* self ```
QLocale* q_chartview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QChartView* self ```
void q_chartview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QChartView* self ```
bool q_chartview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QChartView* self ```
bool q_chartview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QChartView* self ```
void q_chartview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QChartView* self ```
bool q_chartview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QChartView* self ```
void q_chartview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QChartView* self ```
void q_chartview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QChartView* self, enum Qt__FocusReason reason ```
void q_chartview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QChartView* self, enum Qt__FocusPolicy policy ```
void q_chartview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QChartView* self ```
bool q_chartview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_chartview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QChartView* self, QWidget* focusProxy ```
void q_chartview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QChartView* self ```
QWidget* q_chartview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QChartView* self, enum Qt__ContextMenuPolicy policy ```
void q_chartview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QChartView* self ```
void q_chartview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QChartView* self, QCursor* param1 ```
void q_chartview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QChartView* self ```
void q_chartview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QChartView* self ```
void q_chartview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QChartView* self ```
void q_chartview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QChartView* self, QKeySequence* key ```
int32_t q_chartview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QChartView* self, int id ```
void q_chartview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QChartView* self, int id ```
void q_chartview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QChartView* self, int id ```
void q_chartview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_chartview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_chartview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QChartView* self ```
bool q_chartview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QChartView* self, bool enable ```
void q_chartview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QChartView* self ```
QGraphicsProxyWidget* q_chartview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self ```
void q_chartview_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self ```
void q_chartview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
void q_chartview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self, QRect* param1 ```
void q_chartview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self, QRegion* param1 ```
void q_chartview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
void q_chartview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self, QRect* param1 ```
void q_chartview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self, QRegion* param1 ```
void q_chartview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QChartView* self, bool hidden ```
void q_chartview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QChartView* self ```
void q_chartview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QChartView* self ```
void q_chartview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QChartView* self ```
void q_chartview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QChartView* self ```
void q_chartview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QChartView* self ```
void q_chartview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QChartView* self ```
void q_chartview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QChartView* self ```
bool q_chartview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QChartView* self ```
void q_chartview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QChartView* self ```
void q_chartview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QChartView* self, QWidget* param1 ```
void q_chartview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QChartView* self, int x, int y ```
void q_chartview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QChartView* self, QPoint* param1 ```
void q_chartview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QChartView* self, int w, int h ```
void q_chartview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QChartView* self, QSize* param1 ```
void q_chartview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
void q_chartview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QChartView* self, QRect* geometry ```
void q_chartview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QChartView* self ```
char* q_chartview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QChartView* self, const char* geometry ```
bool q_chartview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QChartView* self ```
void q_chartview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QChartView* self ```
bool q_chartview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QChartView* self, QWidget* param1 ```
bool q_chartview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QChartView* self ```
bool q_chartview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QChartView* self ```
bool q_chartview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QChartView* self ```
bool q_chartview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QChartView* self ```
bool q_chartview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QChartView* self, int state ```
void q_chartview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QChartView* self, int state ```
void q_chartview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QChartView* self ```
QSizePolicy* q_chartview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QChartView* self, QSizePolicy* sizePolicy ```
void q_chartview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QChartView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_chartview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QChartView* self ```
QRegion* q_chartview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QChartView* self, int left, int top, int right, int bottom ```
void q_chartview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QChartView* self, QMargins* margins ```
void q_chartview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QChartView* self ```
QMargins* q_chartview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QChartView* self ```
QLayout* q_chartview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QChartView* self, QLayout* layout ```
void q_chartview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QChartView* self ```
void q_chartview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QChartView* self, QWidget* parent ```
void q_chartview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QChartView* self, QWidget* parent, int f ```
void q_chartview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QChartView* self, int dx, int dy ```
void q_chartview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QChartView* self, int dx, int dy, QRect* param3 ```
void q_chartview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QChartView* self ```
QWidget* q_chartview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QChartView* self ```
QWidget* q_chartview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QChartView* self ```
bool q_chartview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QChartView* self, bool on ```
void q_chartview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, QAction* action ```
void q_chartview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QChartView* self, libqt_list /* of QAction* */ actions ```
void q_chartview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QChartView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_chartview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QChartView* self, QAction* before, QAction* action ```
void q_chartview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QChartView* self, QAction* action ```
void q_chartview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QChartView* self ```
libqt_list /* of QAction* */ q_chartview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, const char* text ```
QAction* q_chartview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, QIcon* icon, const char* text ```
QAction* q_chartview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, const char* text, QKeySequence* shortcut ```
QAction* q_chartview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_chartview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QChartView* self, int typeVal ```
void q_chartview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QChartView* self, enum Qt__WindowType param1 ```
void q_chartview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QChartView* self, int typeVal ```
void q_chartview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_chartview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QChartView* self, int x, int y ```
QWidget* q_chartview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QChartView* self, QPoint* p ```
QWidget* q_chartview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QChartView* self, QPointF* p ```
QWidget* q_chartview_child_at_with_q_point_f(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QChartView* self, enum Qt__WidgetAttribute param1 ```
void q_chartview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QChartView* self, enum Qt__WidgetAttribute param1 ```
bool q_chartview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QChartView* self ```
void q_chartview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QChartView* self, QWidget* child ```
bool q_chartview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QChartView* self ```
bool q_chartview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QChartView* self, bool enabled ```
void q_chartview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QChartView* self ```
QBackingStore* q_chartview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QChartView* self ```
QWindow* q_chartview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QChartView* self ```
QScreen* q_chartview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QChartView* self, QScreen* screen ```
void q_chartview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_chartview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QChartView* self, const char* title ```
void q_chartview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QChartView* self, void (*slot)(QWidget*, const char*) ```
void q_chartview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QChartView* self, QIcon* icon ```
void q_chartview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QChartView* self, void (*slot)(QWidget*, QIcon*) ```
void q_chartview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QChartView* self, const char* iconText ```
void q_chartview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QChartView* self, void (*slot)(QWidget*, const char*) ```
void q_chartview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QChartView* self, QPoint* pos ```
void q_chartview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QChartView* self, void (*slot)(QWidget*, QPoint*) ```
void q_chartview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QChartView* self ```
int64_t q_chartview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QChartView* self, int hints ```
void q_chartview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter, QPoint* targetOffset ```
void q_chartview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_chartview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_chartview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QChartView* self, QRect* rectangle ```
QPixmap* q_chartview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QChartView* self, enum Qt__GestureType typeVal, int flags ```
void q_chartview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QChartView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_chartview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QChartView* self, int id, bool enable ```
void q_chartview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QChartView* self, int id, bool enable ```
void q_chartview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QChartView* self, enum Qt__WindowType param1, bool on ```
void q_chartview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QChartView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_chartview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_chartview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_chartview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QChartView* self ```
const char* q_chartview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QChartView* self, char* name ```
void q_chartview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QChartView* self ```
bool q_chartview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QChartView* self ```
bool q_chartview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QChartView* self ```
bool q_chartview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QChartView* self ```
bool q_chartview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QChartView* self, bool b ```
bool q_chartview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QChartView* self ```
QThread* q_chartview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChartView* self, QThread* thread ```
bool q_chartview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChartView* self, int interval ```
int32_t q_chartview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChartView* self, int id ```
void q_chartview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChartView* self, enum Qt__TimerId id ```
void q_chartview_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QChartView* self ```
libqt_list /* of QObject* */ q_chartview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QChartView* self, QObject* filterObj ```
void q_chartview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QChartView* self, QObject* obj ```
void q_chartview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_chartview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChartView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_chartview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_chartview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_chartview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QChartView* self ```
void q_chartview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QChartView* self ```
void q_chartview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QChartView* self, const char* name, QVariant* value ```
bool q_chartview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QChartView* self, const char* name ```
QVariant* q_chartview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QChartView* self ```
const char** q_chartview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChartView* self ```
QBindingStorage* q_chartview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChartView* self ```
const QBindingStorage* q_chartview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChartView* self ```
void q_chartview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChartView* self, void (*slot)(QObject*) ```
void q_chartview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QChartView* self ```
QObject* q_chartview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QChartView* self, const char* classname ```
bool q_chartview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QChartView* self ```
void q_chartview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChartView* self, QThread* thread, Disambiguated_t* param2 ```
bool q_chartview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChartView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_chartview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chartview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChartView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chartview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChartView* self, QObject* param1 ```
void q_chartview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChartView* self, void (*slot)(QObject*, QObject*) ```
void q_chartview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QChartView* self ```
bool q_chartview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QChartView* self ```
int32_t q_chartview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QChartView* self ```
int32_t q_chartview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QChartView* self ```
int32_t q_chartview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QChartView* self ```
int32_t q_chartview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QChartView* self ```
int32_t q_chartview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QChartView* self ```
int32_t q_chartview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QChartView* self ```
double q_chartview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QChartView* self ```
double q_chartview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QChartView* self ```
int32_t q_chartview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QChartView* self ```
int32_t q_chartview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_chartview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_chartview_encode_metric_f(int64_t metric, double value);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_size_hint(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_qbase_size_hint(void* self);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QSize* (*slot)() ```
void q_chartview_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, enum Qt__InputMethodQuery query ```
QVariant* q_chartview_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, enum Qt__InputMethodQuery query ```
QVariant* q_chartview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QVariant* (*slot)(QChartView*, enum Qt__InputMethodQuery) ```
void q_chartview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_setup_viewport(void* self, void* widget);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_qbase_setup_viewport(void* self, void* widget);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QWidget*) ```
void q_chartview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_qbase_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_viewport_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_qbase_viewport_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QContextMenuEvent* event ```
void q_chartview_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QContextMenuEvent* event ```
void q_chartview_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QContextMenuEvent*) ```
void q_chartview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDragEnterEvent* event ```
void q_chartview_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDragEnterEvent* event ```
void q_chartview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDragEnterEvent*) ```
void q_chartview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDragLeaveEvent* event ```
void q_chartview_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDragLeaveEvent* event ```
void q_chartview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDragLeaveEvent*) ```
void q_chartview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDragMoveEvent* event ```
void q_chartview_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDragMoveEvent* event ```
void q_chartview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDragMoveEvent*) ```
void q_chartview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDropEvent* event ```
void q_chartview_drop_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDropEvent* event ```
void q_chartview_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDropEvent*) ```
void q_chartview_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QFocusEvent*) ```
void q_chartview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, bool next ```
bool q_chartview_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, bool next ```
bool q_chartview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, bool) ```
void q_chartview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QFocusEvent*) ```
void q_chartview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_key_press_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QKeyEvent*) ```
void q_chartview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_key_release_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QKeyEvent*) ```
void q_chartview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QWheelEvent* event ```
void q_chartview_wheel_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QWheelEvent* event ```
void q_chartview_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QWheelEvent*) ```
void q_chartview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPaintEvent* event ```
void q_chartview_paint_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPaintEvent* event ```
void q_chartview_qbase_paint_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPaintEvent*) ```
void q_chartview_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, int dx, int dy ```
void q_chartview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, int dx, int dy ```
void q_chartview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, int, int) ```
void q_chartview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QShowEvent* event ```
void q_chartview_show_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QShowEvent* event ```
void q_chartview_qbase_show_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QShowEvent*) ```
void q_chartview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QInputMethodEvent* event ```
void q_chartview_input_method_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QInputMethodEvent* event ```
void q_chartview_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QInputMethodEvent*) ```
void q_chartview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_draw_background(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_qbase_draw_background(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*, QRectF*) ```
void q_chartview_on_draw_background(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_draw_foreground(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_qbase_draw_foreground(void* self, void* painter, void* rect);

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*, QRectF*) ```
void q_chartview_on_draw_foreground(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QSize* (*slot)() ```
void q_chartview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QObject* param1, QEvent* param2 ```
bool q_chartview_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QObject* param1, QEvent* param2 ```
bool q_chartview_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QObject*, QEvent*) ```
void q_chartview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QSize* (*slot)() ```
void q_chartview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* param1 ```
void q_chartview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* param1 ```
void q_chartview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QStyleOptionFrame* option ```
void q_chartview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QStyleOptionFrame* option ```
void q_chartview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QStyleOptionFrame*) ```
void q_chartview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)() ```
void q_chartview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, bool visible ```
void q_chartview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, bool visible ```
void q_chartview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, bool) ```
void q_chartview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, int param1 ```
int32_t q_chartview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, int param1 ```
int32_t q_chartview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, int) ```
void q_chartview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)() ```
void q_chartview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QPaintEngine* q_chartview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QPaintEngine* q_chartview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QPaintEngine* (*slot)() ```
void q_chartview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEnterEvent* event ```
void q_chartview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEnterEvent* event ```
void q_chartview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEnterEvent*) ```
void q_chartview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMoveEvent* event ```
void q_chartview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMoveEvent* event ```
void q_chartview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMoveEvent*) ```
void q_chartview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QCloseEvent* event ```
void q_chartview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QCloseEvent* event ```
void q_chartview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QCloseEvent*) ```
void q_chartview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QTabletEvent* event ```
void q_chartview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QTabletEvent* event ```
void q_chartview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QTabletEvent*) ```
void q_chartview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QActionEvent* event ```
void q_chartview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QActionEvent* event ```
void q_chartview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QActionEvent*) ```
void q_chartview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QHideEvent* event ```
void q_chartview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QHideEvent* event ```
void q_chartview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QHideEvent*) ```
void q_chartview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, const char* eventType, void* message, intptr_t* result ```
bool q_chartview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, const char* eventType, void* message, intptr_t* result ```
bool q_chartview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, const char*, void*, intptr_t*) ```
void q_chartview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_chartview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_chartview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_chartview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*) ```
void q_chartview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPoint* offset ```
QPaintDevice* q_chartview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPoint* offset ```
QPaintDevice* q_chartview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QPaintDevice* (*slot)(QChartView*, QPoint*) ```
void q_chartview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QPainter* q_chartview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QPainter* q_chartview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QPainter* (*slot)() ```
void q_chartview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QTimerEvent* event ```
void q_chartview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QTimerEvent* event ```
void q_chartview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QTimerEvent*) ```
void q_chartview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QChildEvent* event ```
void q_chartview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QChildEvent* event ```
void q_chartview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QChildEvent*) ```
void q_chartview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMetaMethod*) ```
void q_chartview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMetaMethod*) ```
void q_chartview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, int left, int top, int right, int bottom ```
void q_chartview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, int left, int top, int right, int bottom ```
void q_chartview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, int, int, int, int) ```
void q_chartview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QMargins* q_chartview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QMargins* q_chartview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QMargins* (*slot)() ```
void q_chartview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* param1 ```
void q_chartview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* param1 ```
void q_chartview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*) ```
void q_chartview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)() ```
void q_chartview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)() ```
void q_chartview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)() ```
void q_chartview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)() ```
void q_chartview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)() ```
void q_chartview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QObject* q_chartview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QObject* q_chartview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QObject* (*slot)() ```
void q_chartview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)() ```
void q_chartview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, const char* signal ```
int32_t q_chartview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, const char* signal ```
int32_t q_chartview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, const char*) ```
void q_chartview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
bool q_chartview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
bool q_chartview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QMetaMethod*) ```
void q_chartview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_chartview_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_chartview_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, double (*slot)(QChartView*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_chartview_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QChartView* self, void (*slot)(QObject*, const char*) ```
void q_chartview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview-qtcharts.html#dtor.QChartView)
///
/// Delete this object from C++ memory.
///
/// ``` QChartView* self ```
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
