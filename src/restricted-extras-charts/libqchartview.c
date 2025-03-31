#include "../libqabstractscrollarea.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqanystringview.hpp"
#include "../libqbackingstore.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbitmap.hpp"
#include "../libqbrush.hpp"
#include "libqchart.hpp"
#include "../libqcursor.hpp"
#include "../libqfont.hpp"
#include "../libqfontinfo.hpp"
#include "../libqfontmetrics.hpp"
#include "../libqframe.hpp"
#include "../libqgraphicseffect.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicsproxywidget.hpp"
#include "../libqgraphicsscene.hpp"
#include "../libqgraphicsview.hpp"
#include "../libqicon.hpp"
#include "../libqkeysequence.hpp"
#include "../libqlayout.hpp"
#include "../libqlocale.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpalette.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqscreen.hpp"
#include "../libqscrollbar.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "../libqstyleoption.hpp"
#include "../libqthread.hpp"
#include "../libqtransform.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqchartview.hpp"
#include "libqchartview.h"

/// https://doc.qt.io/qt-6/qchartview.html

/// q_chartview_new constructs a new QChartView object.
///
/// ``` QWidget* parent ```
QChartView* q_chartview_new(void* parent) {
    return QChartView_new((QWidget*)parent);
}

/// q_chartview_new2 constructs a new QChartView object.
///
///
QChartView* q_chartview_new2() {
    return QChartView_new2();
}

/// q_chartview_new3 constructs a new QChartView object.
///
/// ``` QChart* chart ```
QChartView* q_chartview_new3(void* chart) {
    return QChartView_new3((QChart*)chart);
}

/// q_chartview_new4 constructs a new QChartView object.
///
/// ``` QChart* chart, QWidget* parent ```
QChartView* q_chartview_new4(void* chart, void* parent) {
    return QChartView_new4((QChart*)chart, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QChartView* self ```
QMetaObject* q_chartview_meta_object(void* self) {
    return QChartView_MetaObject((QChartView*)self);
}

/// ``` QChartView* self, const char* param1 ```
void* q_chartview_metacast(void* self, const char* param1) {
    return QChartView_Metacast((QChartView*)self, param1);
}

/// ``` QChartView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chartview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QChartView_Metacall((QChartView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, enum QMetaObject__Call, int, void*) ```
void q_chartview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QChartView_OnMetacall((QChartView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChartView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chartview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QChartView_QBaseMetacall((QChartView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_chartview_tr(const char* s) {
    libqt_string _str = QChartView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#setRubberBand)
///
/// ``` QChartView* self, int* rubberBands ```
void q_chartview_set_rubber_band(void* self, int64_t* rubberBands) {
    QChartView_SetRubberBand((QChartView*)self, rubberBands);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#rubberBand)
///
/// ``` QChartView* self ```
int64_t q_chartview_rubber_band(void* self) {
    return QChartView_RubberBand((QChartView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#chart)
///
/// ``` QChartView* self ```
QChart* q_chartview_chart(void* self) {
    return QChartView_Chart((QChartView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#setChart)
///
/// ``` QChartView* self, QChart* chart ```
void q_chartview_set_chart(void* self, void* chart) {
    QChartView_SetChart((QChartView*)self, (QChart*)chart);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#resizeEvent)
///
/// ``` QChartView* self, QResizeEvent* event ```
void q_chartview_resize_event(void* self, void* event) {
    QChartView_ResizeEvent((QChartView*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QResizeEvent*) ```
void q_chartview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnResizeEvent((QChartView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChartView* self, QResizeEvent* event ```
void q_chartview_qbase_resize_event(void* self, void* event) {
    QChartView_QBaseResizeEvent((QChartView*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#mousePressEvent)
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_press_event(void* self, void* event) {
    QChartView_MousePressEvent((QChartView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnMousePressEvent((QChartView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_press_event(void* self, void* event) {
    QChartView_QBaseMousePressEvent((QChartView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#mouseMoveEvent)
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_move_event(void* self, void* event) {
    QChartView_MouseMoveEvent((QChartView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnMouseMoveEvent((QChartView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_move_event(void* self, void* event) {
    QChartView_QBaseMouseMoveEvent((QChartView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchartview.html#mouseReleaseEvent)
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_release_event(void* self, void* event) {
    QChartView_MouseReleaseEvent((QChartView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnMouseReleaseEvent((QChartView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_release_event(void* self, void* event) {
    QChartView_QBaseMouseReleaseEvent((QChartView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_chartview_tr2(const char* s, const char* c) {
    libqt_string _str = QChartView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_chartview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QChartView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
///
/// ``` QChartView* self ```
int64_t q_chartview_render_hints(void* self) {
    return QGraphicsView_RenderHints((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QChartView* self, enum QPainter__RenderHint hint ```
void q_chartview_set_render_hint(void* self, int64_t hint) {
    QGraphicsView_SetRenderHint((QGraphicsView*)self, hint);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
///
/// ``` QChartView* self, int hints ```
void q_chartview_set_render_hints(void* self, int64_t hints) {
    QGraphicsView_SetRenderHints((QGraphicsView*)self, hints);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
///
/// ``` QChartView* self ```
int64_t q_chartview_alignment(void* self) {
    return QGraphicsView_Alignment((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
///
/// ``` QChartView* self, int alignment ```
void q_chartview_set_alignment(void* self, int64_t alignment) {
    QGraphicsView_SetAlignment((QGraphicsView*)self, alignment);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
///
/// ``` QChartView* self ```
int64_t q_chartview_transformation_anchor(void* self) {
    return QGraphicsView_TransformationAnchor((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
///
/// ``` QChartView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_chartview_set_transformation_anchor(void* self, int64_t anchor) {
    QGraphicsView_SetTransformationAnchor((QGraphicsView*)self, anchor);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
///
/// ``` QChartView* self ```
int64_t q_chartview_resize_anchor(void* self) {
    return QGraphicsView_ResizeAnchor((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
///
/// ``` QChartView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_chartview_set_resize_anchor(void* self, int64_t anchor) {
    QGraphicsView_SetResizeAnchor((QGraphicsView*)self, anchor);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_viewport_update_mode(void* self) {
    return QGraphicsView_ViewportUpdateMode((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
///
/// ``` QChartView* self, enum QGraphicsView__ViewportUpdateMode mode ```
void q_chartview_set_viewport_update_mode(void* self, int64_t mode) {
    QGraphicsView_SetViewportUpdateMode((QGraphicsView*)self, mode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
///
/// ``` QChartView* self ```
int64_t q_chartview_optimization_flags(void* self) {
    return QGraphicsView_OptimizationFlags((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QChartView* self, enum QGraphicsView__OptimizationFlag flag ```
void q_chartview_set_optimization_flag(void* self, int64_t flag) {
    QGraphicsView_SetOptimizationFlag((QGraphicsView*)self, flag);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
///
/// ``` QChartView* self, int flags ```
void q_chartview_set_optimization_flags(void* self, int64_t flags) {
    QGraphicsView_SetOptimizationFlags((QGraphicsView*)self, flags);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_drag_mode(void* self) {
    return QGraphicsView_DragMode((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
///
/// ``` QChartView* self, enum QGraphicsView__DragMode mode ```
void q_chartview_set_drag_mode(void* self, int64_t mode) {
    QGraphicsView_SetDragMode((QGraphicsView*)self, mode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_rubber_band_selection_mode(void* self) {
    return QGraphicsView_RubberBandSelectionMode((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
///
/// ``` QChartView* self, enum Qt__ItemSelectionMode mode ```
void q_chartview_set_rubber_band_selection_mode(void* self, int64_t mode) {
    QGraphicsView_SetRubberBandSelectionMode((QGraphicsView*)self, mode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_rubber_band_rect(void* self) {
    return QGraphicsView_RubberBandRect((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
///
/// ``` QChartView* self ```
int64_t q_chartview_cache_mode(void* self) {
    return QGraphicsView_CacheMode((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
///
/// ``` QChartView* self, int mode ```
void q_chartview_set_cache_mode(void* self, int64_t mode) {
    QGraphicsView_SetCacheMode((QGraphicsView*)self, mode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
///
/// ``` QChartView* self ```
void q_chartview_reset_cached_content(void* self) {
    QGraphicsView_ResetCachedContent((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
///
/// ``` QChartView* self ```
bool q_chartview_is_interactive(void* self) {
    return QGraphicsView_IsInteractive((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
///
/// ``` QChartView* self, bool allowed ```
void q_chartview_set_interactive(void* self, bool allowed) {
    QGraphicsView_SetInteractive((QGraphicsView*)self, allowed);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
///
/// ``` QChartView* self ```
QGraphicsScene* q_chartview_scene(void* self) {
    return QGraphicsView_Scene((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
///
/// ``` QChartView* self, QGraphicsScene* scene ```
void q_chartview_set_scene(void* self, void* scene) {
    QGraphicsView_SetScene((QGraphicsView*)self, (QGraphicsScene*)scene);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
///
/// ``` QChartView* self ```
QRectF* q_chartview_scene_rect(void* self) {
    return QGraphicsView_SceneRect((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_set_scene_rect(void* self, void* rect) {
    QGraphicsView_SetSceneRect((QGraphicsView*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QChartView* self, double x, double y, double w, double h ```
void q_chartview_set_scene_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsView_SetSceneRect2((QGraphicsView*)self, x, y, w, h);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
///
/// ``` QChartView* self ```
QTransform* q_chartview_transform(void* self) {
    return QGraphicsView_Transform((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
///
/// ``` QChartView* self ```
QTransform* q_chartview_viewport_transform(void* self) {
    return QGraphicsView_ViewportTransform((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
///
/// ``` QChartView* self ```
bool q_chartview_is_transformed(void* self) {
    return QGraphicsView_IsTransformed((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QChartView* self, QTransform* matrix ```
void q_chartview_set_transform(void* self, void* matrix) {
    QGraphicsView_SetTransform((QGraphicsView*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
///
/// ``` QChartView* self ```
void q_chartview_reset_transform(void* self) {
    QGraphicsView_ResetTransform((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
///
/// ``` QChartView* self, double angle ```
void q_chartview_rotate(void* self, double angle) {
    QGraphicsView_Rotate((QGraphicsView*)self, angle);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
///
/// ``` QChartView* self, double sx, double sy ```
void q_chartview_scale(void* self, double sx, double sy) {
    QGraphicsView_Scale((QGraphicsView*)self, sx, sy);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
///
/// ``` QChartView* self, double sh, double sv ```
void q_chartview_shear(void* self, double sh, double sv) {
    QGraphicsView_Shear((QGraphicsView*)self, sh, sv);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
///
/// ``` QChartView* self, double dx, double dy ```
void q_chartview_translate(void* self, double dx, double dy) {
    QGraphicsView_Translate((QGraphicsView*)self, dx, dy);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QChartView* self, QPointF* pos ```
void q_chartview_center_on(void* self, void* pos) {
    QGraphicsView_CenterOn((QGraphicsView*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QChartView* self, double x, double y ```
void q_chartview_center_on2(void* self, double x, double y) {
    QGraphicsView_CenterOn2((QGraphicsView*)self, x, y);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QChartView* self, QGraphicsItem* item ```
void q_chartview_center_on_with_item(void* self, void* item) {
    QGraphicsView_CenterOnWithItem((QGraphicsView*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_ensure_visible(void* self, void* rect) {
    QGraphicsView_EnsureVisible((QGraphicsView*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, double x, double y, double w, double h ```
void q_chartview_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsView_EnsureVisible2((QGraphicsView*)self, x, y, w, h);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QGraphicsItem* item ```
void q_chartview_ensure_visible_with_item(void* self, void* item) {
    QGraphicsView_EnsureVisibleWithItem((QGraphicsView*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_fit_in_view(void* self, void* rect) {
    QGraphicsView_FitInView((QGraphicsView*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, double x, double y, double w, double h ```
void q_chartview_fit_in_view2(void* self, double x, double y, double w, double h) {
    QGraphicsView_FitInView2((QGraphicsView*)self, x, y, w, h);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QGraphicsItem* item ```
void q_chartview_fit_in_view_with_item(void* self, void* item) {
    QGraphicsView_FitInViewWithItem((QGraphicsView*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_render(void* self, void* painter) {
    QGraphicsView_Render((QGraphicsView*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self ```
libqt_list /* of QGraphicsItem* */ q_chartview_items(void* self) {
    libqt_list _arr = QGraphicsView_Items((QGraphicsView*)self);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QPoint* pos ```
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_pos(void* self, void* pos) {
    libqt_list _arr = QGraphicsView_ItemsWithPos((QGraphicsView*)self, (QPoint*)pos);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, int x, int y ```
libqt_list /* of QGraphicsItem* */ q_chartview_items2(void* self, int x, int y) {
    libqt_list _arr = QGraphicsView_Items2((QGraphicsView*)self, x, y);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QRect* rect ```
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_rect(void* self, void* rect) {
    libqt_list _arr = QGraphicsView_ItemsWithRect((QGraphicsView*)self, (QRect*)rect);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
libqt_list /* of QGraphicsItem* */ q_chartview_items3(void* self, int x, int y, int w, int h) {
    libqt_list _arr = QGraphicsView_Items3((QGraphicsView*)self, x, y, w, h);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QPainterPath* path ```
libqt_list /* of QGraphicsItem* */ q_chartview_items_with_path(void* self, void* path) {
    libqt_list _arr = QGraphicsView_ItemsWithPath((QGraphicsView*)self, (QPainterPath*)path);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QChartView* self, QPoint* pos ```
QGraphicsItem* q_chartview_item_at(void* self, void* pos) {
    return QGraphicsView_ItemAt((QGraphicsView*)self, (QPoint*)pos);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QChartView* self, int x, int y ```
QGraphicsItem* q_chartview_item_at2(void* self, int x, int y) {
    return QGraphicsView_ItemAt2((QGraphicsView*)self, x, y);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QChartView* self, QPoint* point ```
QPointF* q_chartview_map_to_scene(void* self, void* point) {
    return QGraphicsView_MapToScene((QGraphicsView*)self, (QPoint*)point);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QChartView* self, QPainterPath* path ```
QPainterPath* q_chartview_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsView_MapToSceneWithPath((QGraphicsView*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QChartView* self, QPointF* point ```
QPoint* q_chartview_map_from_scene(void* self, void* point) {
    return QGraphicsView_MapFromScene((QGraphicsView*)self, (QPointF*)point);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QChartView* self, QPainterPath* path ```
QPainterPath* q_chartview_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsView_MapFromSceneWithPath((QGraphicsView*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QChartView* self, int x, int y ```
QPointF* q_chartview_map_to_scene2(void* self, int x, int y) {
    return QGraphicsView_MapToScene2((QGraphicsView*)self, x, y);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QChartView* self, double x, double y ```
QPoint* q_chartview_map_from_scene2(void* self, double x, double y) {
    return QGraphicsView_MapFromScene2((QGraphicsView*)self, x, y);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
///
/// ``` QChartView* self ```
QBrush* q_chartview_background_brush(void* self) {
    return QGraphicsView_BackgroundBrush((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
///
/// ``` QChartView* self, QBrush* brush ```
void q_chartview_set_background_brush(void* self, void* brush) {
    QGraphicsView_SetBackgroundBrush((QGraphicsView*)self, (QBrush*)brush);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
///
/// ``` QChartView* self ```
QBrush* q_chartview_foreground_brush(void* self) {
    return QGraphicsView_ForegroundBrush((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
///
/// ``` QChartView* self, QBrush* brush ```
void q_chartview_set_foreground_brush(void* self, void* brush) {
    QGraphicsView_SetForegroundBrush((QGraphicsView*)self, (QBrush*)brush);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
///
/// ``` QChartView* self, QRectF* rects[] ```
void q_chartview_update_scene(void* self, void* rects[]) {
    QRectF** rects_arr = (QRectF**)rects;
    size_t rects_len = 0;
    while (rects_arr[rects_len] != NULL) {
        rects_len++;
    }
    libqt_list rects_list = {
        .len = rects_len,
        .data = {(QRectF*)rects},
    };
    QGraphicsView_UpdateScene((QGraphicsView*)self, rects_list);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QChartView* self ```
void q_chartview_invalidate_scene(void* self) {
    QGraphicsView_InvalidateScene((QGraphicsView*)self);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_update_scene_rect(void* self, void* rect) {
    QGraphicsView_UpdateSceneRect((QGraphicsView*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// ``` QChartView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint ```
void q_chartview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint) {
    QGraphicsView_RubberBandChanged((QGraphicsView*)self, (QRect*)viewportRect, (QPointF*)fromScenePoint, (QPointF*)toScenePoint);
}

/// Inherited from QGraphicsView
///
/// ``` QChartView* self, void (*slot)(QGraphicsView*, QRect*, QPointF*, QPointF*) ```
void q_chartview_on_rubber_band_changed(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsView_Connect_RubberBandChanged((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QChartView* self, enum QPainter__RenderHint hint, bool enabled ```
void q_chartview_set_render_hint2(void* self, int64_t hint, bool enabled) {
    QGraphicsView_SetRenderHint2((QGraphicsView*)self, hint, enabled);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QChartView* self, enum QGraphicsView__OptimizationFlag flag, bool enabled ```
void q_chartview_set_optimization_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsView_SetOptimizationFlag2((QGraphicsView*)self, flag, enabled);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QChartView* self, QTransform* matrix, bool combine ```
void q_chartview_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsView_SetTransform2((QGraphicsView*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QRectF* rect, int xmargin ```
void q_chartview_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsView_EnsureVisible22((QGraphicsView*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QRectF* rect, int xmargin, int ymargin ```
void q_chartview_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible3((QGraphicsView*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, double x, double y, double w, double h, int xmargin ```
void q_chartview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsView_EnsureVisible5((QGraphicsView*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_chartview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible6((QGraphicsView*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QGraphicsItem* item, int xmargin ```
void q_chartview_ensure_visible23(void* self, void* item, int xmargin) {
    QGraphicsView_EnsureVisible23((QGraphicsView*)self, (QGraphicsItem*)item, xmargin);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QChartView* self, QGraphicsItem* item, int xmargin, int ymargin ```
void q_chartview_ensure_visible32(void* self, void* item, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible32((QGraphicsView*)self, (QGraphicsItem*)item, xmargin, ymargin);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QRectF* rect, enum Qt__AspectRatioMode aspectRadioMode ```
void q_chartview_fit_in_view22(void* self, void* rect, int64_t aspectRadioMode) {
    QGraphicsView_FitInView22((QGraphicsView*)self, (QRectF*)rect, aspectRadioMode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, double x, double y, double w, double h, enum Qt__AspectRatioMode aspectRadioMode ```
void q_chartview_fit_in_view5(void* self, double x, double y, double w, double h, int64_t aspectRadioMode) {
    QGraphicsView_FitInView5((QGraphicsView*)self, x, y, w, h, aspectRadioMode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QChartView* self, QGraphicsItem* item, enum Qt__AspectRatioMode aspectRadioMode ```
void q_chartview_fit_in_view23(void* self, void* item, int64_t aspectRadioMode) {
    QGraphicsView_FitInView23((QGraphicsView*)self, (QGraphicsItem*)item, aspectRadioMode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter, QRectF* target ```
void q_chartview_render2(void* self, void* painter, void* target) {
    QGraphicsView_Render2((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter, QRectF* target, QRect* source ```
void q_chartview_render3(void* self, void* painter, void* target, void* source) {
    QGraphicsView_Render3((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target, (QRect*)source);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QChartView* self, QPainter* painter, QRectF* target, QRect* source, enum Qt__AspectRatioMode aspectRatioMode ```
void q_chartview_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode) {
    QGraphicsView_Render4((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target, (QRect*)source, aspectRatioMode);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QRect* rect, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chartview_items22(void* self, void* rect, int64_t mode) {
    libqt_list _arr = QGraphicsView_Items22((QGraphicsView*)self, (QRect*)rect, mode);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, int x, int y, int w, int h, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chartview_items5(void* self, int x, int y, int w, int h, int64_t mode) {
    libqt_list _arr = QGraphicsView_Items5((QGraphicsView*)self, x, y, w, h, mode);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QChartView* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chartview_items24(void* self, void* path, int64_t mode) {
    libqt_list _arr = QGraphicsView_Items24((QGraphicsView*)self, (QPainterPath*)path, mode);
    return _arr;
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QChartView* self, QRectF* rect ```
void q_chartview_invalidate_scene1(void* self, void* rect) {
    QGraphicsView_InvalidateScene1((QGraphicsView*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QChartView* self, QRectF* rect, int layers ```
void q_chartview_invalidate_scene2(void* self, void* rect, int64_t layers) {
    QGraphicsView_InvalidateScene2((QGraphicsView*)self, (QRectF*)rect, layers);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QChartView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_chartview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QChartView* self ```
QScrollBar* q_chartview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QChartView* self, QScrollBar* scrollbar ```
void q_chartview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QChartView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_chartview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QChartView* self ```
QScrollBar* q_chartview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QChartView* self, QScrollBar* scrollbar ```
void q_chartview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QChartView* self, QWidget* widget, int alignment ```
void q_chartview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QChartView* self, int alignment ```
libqt_list /* of QWidget* */ q_chartview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QChartView* self ```
QWidget* q_chartview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QChartView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_chartview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QChartView* self ```
int32_t q_chartview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QChartView* self, int frameStyle ```
void q_chartview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QChartView* self ```
int64_t q_chartview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QChartView* self, enum QFrame__Shape frameShape ```
void q_chartview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QChartView* self ```
int64_t q_chartview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QChartView* self, enum QFrame__Shadow frameShadow ```
void q_chartview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QChartView* self, int lineWidth ```
void q_chartview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QChartView* self, int midLineWidth ```
void q_chartview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QChartView* self, QRect* frameRect ```
void q_chartview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QChartView* self ```
uintptr_t q_chartview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QChartView* self ```
void q_chartview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QChartView* self ```
uintptr_t q_chartview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QChartView* self ```
uintptr_t q_chartview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QChartView* self ```
QStyle* q_chartview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QChartView* self, QStyle* style ```
void q_chartview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QChartView* self ```
bool q_chartview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QChartView* self ```
bool q_chartview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QChartView* self ```
bool q_chartview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QChartView* self, enum Qt__WindowModality windowModality ```
void q_chartview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QChartView* self ```
bool q_chartview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QChartView* self, QWidget* param1 ```
bool q_chartview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QChartView* self, bool enabled ```
void q_chartview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QChartView* self, bool disabled ```
void q_chartview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QChartView* self, bool windowModified ```
void q_chartview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QChartView* self ```
QRect* q_chartview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QChartView* self ```
QRect* q_chartview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QChartView* self ```
QRect* q_chartview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QChartView* self ```
int32_t q_chartview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QChartView* self ```
int32_t q_chartview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QChartView* self ```
QPoint* q_chartview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QChartView* self ```
QSize* q_chartview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QChartView* self ```
int32_t q_chartview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QChartView* self ```
int32_t q_chartview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QChartView* self ```
QRect* q_chartview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QChartView* self ```
QRegion* q_chartview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QChartView* self ```
int32_t q_chartview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QChartView* self ```
int32_t q_chartview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QChartView* self ```
int32_t q_chartview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QChartView* self, QSize* minimumSize ```
void q_chartview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QChartView* self, int minw, int minh ```
void q_chartview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QChartView* self, QSize* maximumSize ```
void q_chartview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QChartView* self, int maxw, int maxh ```
void q_chartview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QChartView* self, int minw ```
void q_chartview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QChartView* self, int minh ```
void q_chartview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QChartView* self, int maxw ```
void q_chartview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QChartView* self, int maxh ```
void q_chartview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QChartView* self ```
QSize* q_chartview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QChartView* self, QSize* sizeIncrement ```
void q_chartview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QChartView* self, int w, int h ```
void q_chartview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QChartView* self ```
QSize* q_chartview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QChartView* self, QSize* baseSize ```
void q_chartview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QChartView* self, int basew, int baseh ```
void q_chartview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QChartView* self, QSize* fixedSize ```
void q_chartview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QChartView* self, int w, int h ```
void q_chartview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QChartView* self, int w ```
void q_chartview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QChartView* self, int h ```
void q_chartview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QChartView* self, QPointF* param1 ```
QPointF* q_chartview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QChartView* self, QPoint* param1 ```
QPoint* q_chartview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QChartView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_chartview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QChartView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_chartview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QChartView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_chartview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QChartView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_chartview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QChartView* self ```
QWidget* q_chartview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QChartView* self ```
QPalette* q_chartview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QChartView* self, QPalette* palette ```
void q_chartview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QChartView* self, enum QPalette__ColorRole backgroundRole ```
void q_chartview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QChartView* self ```
int64_t q_chartview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QChartView* self, enum QPalette__ColorRole foregroundRole ```
void q_chartview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QChartView* self ```
int64_t q_chartview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QChartView* self ```
QFont* q_chartview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QChartView* self, QFont* font ```
void q_chartview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QChartView* self ```
QFontMetrics* q_chartview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QChartView* self ```
QFontInfo* q_chartview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QChartView* self ```
QCursor* q_chartview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QChartView* self, QCursor* cursor ```
void q_chartview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QChartView* self ```
void q_chartview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QChartView* self, bool enable ```
void q_chartview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QChartView* self ```
bool q_chartview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QChartView* self ```
bool q_chartview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QChartView* self, bool enable ```
void q_chartview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QChartView* self ```
bool q_chartview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QChartView* self, QBitmap* mask ```
void q_chartview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QChartView* self, QRegion* mask ```
void q_chartview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QChartView* self ```
QRegion* q_chartview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QChartView* self ```
void q_chartview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QChartView* self ```
QPixmap* q_chartview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QChartView* self ```
QGraphicsEffect* q_chartview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QChartView* self, QGraphicsEffect* effect ```
void q_chartview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QChartView* self, enum Qt__GestureType typeVal ```
void q_chartview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QChartView* self, enum Qt__GestureType typeVal ```
void q_chartview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QChartView* self, const char* windowTitle ```
void q_chartview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QChartView* self, const char* styleSheet ```
void q_chartview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QChartView* self ```
const char* q_chartview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QChartView* self ```
const char* q_chartview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QChartView* self, QIcon* icon ```
void q_chartview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QChartView* self ```
QIcon* q_chartview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QChartView* self, const char* windowIconText ```
void q_chartview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QChartView* self ```
const char* q_chartview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QChartView* self, const char* windowRole ```
void q_chartview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QChartView* self ```
const char* q_chartview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QChartView* self, const char* filePath ```
void q_chartview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QChartView* self ```
const char* q_chartview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QChartView* self, double level ```
void q_chartview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QChartView* self ```
double q_chartview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QChartView* self ```
bool q_chartview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QChartView* self, const char* toolTip ```
void q_chartview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QChartView* self ```
const char* q_chartview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QChartView* self, int msec ```
void q_chartview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QChartView* self ```
int32_t q_chartview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QChartView* self, const char* statusTip ```
void q_chartview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QChartView* self ```
const char* q_chartview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QChartView* self, const char* whatsThis ```
void q_chartview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QChartView* self ```
const char* q_chartview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QChartView* self ```
const char* q_chartview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QChartView* self, const char* name ```
void q_chartview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QChartView* self ```
const char* q_chartview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QChartView* self, const char* description ```
void q_chartview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QChartView* self, enum Qt__LayoutDirection direction ```
void q_chartview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QChartView* self ```
int64_t q_chartview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QChartView* self ```
void q_chartview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QChartView* self, QLocale* locale ```
void q_chartview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QChartView* self ```
QLocale* q_chartview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QChartView* self ```
void q_chartview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QChartView* self ```
bool q_chartview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QChartView* self ```
bool q_chartview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QChartView* self ```
void q_chartview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QChartView* self ```
bool q_chartview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QChartView* self ```
void q_chartview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QChartView* self ```
void q_chartview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QChartView* self, enum Qt__FocusReason reason ```
void q_chartview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QChartView* self, enum Qt__FocusPolicy policy ```
void q_chartview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QChartView* self ```
bool q_chartview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_chartview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QChartView* self, QWidget* focusProxy ```
void q_chartview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QChartView* self ```
QWidget* q_chartview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QChartView* self ```
int64_t q_chartview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QChartView* self, enum Qt__ContextMenuPolicy policy ```
void q_chartview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QChartView* self ```
void q_chartview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QChartView* self, QCursor* param1 ```
void q_chartview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QChartView* self ```
void q_chartview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QChartView* self ```
void q_chartview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QChartView* self ```
void q_chartview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QChartView* self, QKeySequence* key ```
int32_t q_chartview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QChartView* self, int id ```
void q_chartview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QChartView* self, int id ```
void q_chartview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QChartView* self, int id ```
void q_chartview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_chartview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_chartview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QChartView* self ```
bool q_chartview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QChartView* self, bool enable ```
void q_chartview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QChartView* self ```
QGraphicsProxyWidget* q_chartview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self ```
void q_chartview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self ```
void q_chartview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
void q_chartview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self, QRect* param1 ```
void q_chartview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QChartView* self, QRegion* param1 ```
void q_chartview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
void q_chartview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self, QRect* param1 ```
void q_chartview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QChartView* self, QRegion* param1 ```
void q_chartview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QChartView* self, bool hidden ```
void q_chartview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QChartView* self ```
void q_chartview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QChartView* self ```
void q_chartview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QChartView* self ```
void q_chartview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QChartView* self ```
void q_chartview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QChartView* self ```
void q_chartview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QChartView* self ```
void q_chartview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QChartView* self ```
bool q_chartview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QChartView* self ```
void q_chartview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QChartView* self ```
void q_chartview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QChartView* self, QWidget* param1 ```
void q_chartview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QChartView* self, int x, int y ```
void q_chartview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QChartView* self, QPoint* param1 ```
void q_chartview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QChartView* self, int w, int h ```
void q_chartview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QChartView* self, QSize* param1 ```
void q_chartview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QChartView* self, int x, int y, int w, int h ```
void q_chartview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QChartView* self, QRect* geometry ```
void q_chartview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QChartView* self ```
char* q_chartview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QChartView* self, const char* geometry ```
bool q_chartview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QChartView* self ```
void q_chartview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QChartView* self ```
bool q_chartview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QChartView* self, QWidget* param1 ```
bool q_chartview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QChartView* self ```
bool q_chartview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QChartView* self ```
bool q_chartview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QChartView* self ```
bool q_chartview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QChartView* self ```
bool q_chartview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QChartView* self, int state ```
void q_chartview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QChartView* self, int state ```
void q_chartview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QChartView* self ```
QSizePolicy* q_chartview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QChartView* self, QSizePolicy* sizePolicy ```
void q_chartview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QChartView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_chartview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QChartView* self ```
QRegion* q_chartview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QChartView* self, int left, int top, int right, int bottom ```
void q_chartview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QChartView* self, QMargins* margins ```
void q_chartview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QChartView* self ```
QMargins* q_chartview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QChartView* self ```
QRect* q_chartview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QChartView* self ```
QLayout* q_chartview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QChartView* self, QLayout* layout ```
void q_chartview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QChartView* self ```
void q_chartview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QChartView* self, QWidget* parent ```
void q_chartview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QChartView* self, QWidget* parent, int f ```
void q_chartview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QChartView* self, int dx, int dy ```
void q_chartview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QChartView* self, int dx, int dy, QRect* param3 ```
void q_chartview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QChartView* self ```
QWidget* q_chartview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QChartView* self ```
QWidget* q_chartview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QChartView* self ```
bool q_chartview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QChartView* self, bool on ```
void q_chartview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, QAction* action ```
void q_chartview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QChartView* self, QAction* actions[] ```
void q_chartview_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QChartView* self, QAction* before, QAction* actions[] ```
void q_chartview_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QChartView* self, QAction* before, QAction* action ```
void q_chartview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QChartView* self, QAction* action ```
void q_chartview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QChartView* self ```
libqt_list /* of QAction* */ q_chartview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, const char* text ```
QAction* q_chartview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, QIcon* icon, const char* text ```
QAction* q_chartview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, const char* text, QKeySequence* shortcut ```
QAction* q_chartview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QChartView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_chartview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QChartView* self ```
QWidget* q_chartview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QChartView* self, int typeVal ```
void q_chartview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QChartView* self, enum Qt__WindowType param1 ```
void q_chartview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QChartView* self, int typeVal ```
void q_chartview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QChartView* self ```
int64_t q_chartview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_chartview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QChartView* self, int x, int y ```
QWidget* q_chartview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QChartView* self, QPoint* p ```
QWidget* q_chartview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QChartView* self, enum Qt__WidgetAttribute param1 ```
void q_chartview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QChartView* self, enum Qt__WidgetAttribute param1 ```
bool q_chartview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QChartView* self ```
void q_chartview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QChartView* self, QWidget* child ```
bool q_chartview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QChartView* self ```
bool q_chartview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QChartView* self, bool enabled ```
void q_chartview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QChartView* self ```
QBackingStore* q_chartview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QChartView* self ```
QWindow* q_chartview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QChartView* self ```
QScreen* q_chartview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QChartView* self, QScreen* screen ```
void q_chartview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_chartview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QChartView* self, const char* title ```
void q_chartview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QChartView* self, void (*slot)(QWidget*, const char*) ```
void q_chartview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QChartView* self, QIcon* icon ```
void q_chartview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QChartView* self, void (*slot)(QWidget*, QIcon*) ```
void q_chartview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QChartView* self, const char* iconText ```
void q_chartview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QChartView* self, void (*slot)(QWidget*, const char*) ```
void q_chartview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QChartView* self, QPoint* pos ```
void q_chartview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QChartView* self, void (*slot)(QWidget*, QPoint*) ```
void q_chartview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QChartView* self ```
int64_t q_chartview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QChartView* self, int hints ```
void q_chartview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter, QPoint* targetOffset ```
void q_chartview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_chartview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QChartView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_chartview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QChartView* self, QRect* rectangle ```
QPixmap* q_chartview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QChartView* self, enum Qt__GestureType typeVal, int flags ```
void q_chartview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QChartView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_chartview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QChartView* self, int id, bool enable ```
void q_chartview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QChartView* self, int id, bool enable ```
void q_chartview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QChartView* self, enum Qt__WindowType param1, bool on ```
void q_chartview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QChartView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_chartview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_chartview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_chartview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QChartView* self ```
const char* q_chartview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QChartView* self, const char* name ```
void q_chartview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QChartView* self ```
bool q_chartview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QChartView* self ```
bool q_chartview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QChartView* self ```
bool q_chartview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QChartView* self ```
bool q_chartview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QChartView* self, bool b ```
bool q_chartview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QChartView* self ```
QThread* q_chartview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChartView* self, QThread* thread ```
void q_chartview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChartView* self, int interval ```
int32_t q_chartview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChartView* self, int id ```
void q_chartview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QChartView* self ```
libqt_list /* of QObject* */ q_chartview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QChartView* self, QObject* filterObj ```
void q_chartview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QChartView* self, QObject* obj ```
void q_chartview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_chartview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChartView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_chartview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_chartview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_chartview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QChartView* self ```
void q_chartview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QChartView* self ```
void q_chartview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QChartView* self, const char* name, QVariant* value ```
bool q_chartview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QChartView* self, const char* name ```
QVariant* q_chartview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QChartView* self ```
const char** q_chartview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChartView* self ```
QBindingStorage* q_chartview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChartView* self ```
QBindingStorage* q_chartview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChartView* self ```
void q_chartview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QChartView* self, void (*slot)(QObject*) ```
void q_chartview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QChartView* self ```
QObject* q_chartview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QChartView* self, const char* classname ```
bool q_chartview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QChartView* self ```
void q_chartview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChartView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_chartview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chartview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChartView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chartview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChartView* self, QObject* param1 ```
void q_chartview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QChartView* self, void (*slot)(QObject*, QObject*) ```
void q_chartview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QChartView* self ```
bool q_chartview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QChartView* self ```
int32_t q_chartview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QChartView* self ```
int32_t q_chartview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QChartView* self ```
int32_t q_chartview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QChartView* self ```
int32_t q_chartview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QChartView* self ```
int32_t q_chartview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QChartView* self ```
int32_t q_chartview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QChartView* self ```
double q_chartview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QChartView* self ```
double q_chartview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QChartView* self ```
int32_t q_chartview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QChartView* self ```
int32_t q_chartview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_chartview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_size_hint(void* self) {
    return QChartView_SizeHint((QChartView*)self);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_qbase_size_hint(void* self) {
    return QChartView_QBaseSizeHint((QChartView*)self);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QSize* (*slot)() ```
void q_chartview_on_size_hint(void* self, QSize* (*slot)()) {
    QChartView_OnSizeHint((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, enum Qt__InputMethodQuery query ```
QVariant* q_chartview_input_method_query(void* self, int64_t query) {
    return QChartView_InputMethodQuery((QChartView*)self, query);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, enum Qt__InputMethodQuery query ```
QVariant* q_chartview_qbase_input_method_query(void* self, int64_t query) {
    return QChartView_QBaseInputMethodQuery((QChartView*)self, query);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QVariant* (*slot)(QChartView*, enum Qt__InputMethodQuery) ```
void q_chartview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QChartView_OnInputMethodQuery((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_setup_viewport(void* self, void* widget) {
    QChartView_SetupViewport((QChartView*)self, (QWidget*)widget);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QWidget* widget ```
void q_chartview_qbase_setup_viewport(void* self, void* widget) {
    QChartView_QBaseSetupViewport((QChartView*)self, (QWidget*)widget);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QWidget*) ```
void q_chartview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QChartView_OnSetupViewport((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_event(void* self, void* event) {
    return QChartView_Event((QChartView*)self, (QEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_qbase_event(void* self, void* event) {
    return QChartView_QBaseEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_event(void* self, bool (*slot)(void*, void*)) {
    QChartView_OnEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_viewport_event(void* self, void* event) {
    return QChartView_ViewportEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
bool q_chartview_qbase_viewport_event(void* self, void* event) {
    return QChartView_QBaseViewportEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QChartView_OnViewportEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QContextMenuEvent* event ```
void q_chartview_context_menu_event(void* self, void* event) {
    QChartView_ContextMenuEvent((QChartView*)self, (QContextMenuEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QContextMenuEvent* event ```
void q_chartview_qbase_context_menu_event(void* self, void* event) {
    QChartView_QBaseContextMenuEvent((QChartView*)self, (QContextMenuEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QContextMenuEvent*) ```
void q_chartview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnContextMenuEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDragEnterEvent* event ```
void q_chartview_drag_enter_event(void* self, void* event) {
    QChartView_DragEnterEvent((QChartView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDragEnterEvent* event ```
void q_chartview_qbase_drag_enter_event(void* self, void* event) {
    QChartView_QBaseDragEnterEvent((QChartView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDragEnterEvent*) ```
void q_chartview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnDragEnterEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDragLeaveEvent* event ```
void q_chartview_drag_leave_event(void* self, void* event) {
    QChartView_DragLeaveEvent((QChartView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDragLeaveEvent* event ```
void q_chartview_qbase_drag_leave_event(void* self, void* event) {
    QChartView_QBaseDragLeaveEvent((QChartView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDragLeaveEvent*) ```
void q_chartview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnDragLeaveEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDragMoveEvent* event ```
void q_chartview_drag_move_event(void* self, void* event) {
    QChartView_DragMoveEvent((QChartView*)self, (QDragMoveEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDragMoveEvent* event ```
void q_chartview_qbase_drag_move_event(void* self, void* event) {
    QChartView_QBaseDragMoveEvent((QChartView*)self, (QDragMoveEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDragMoveEvent*) ```
void q_chartview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnDragMoveEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QDropEvent* event ```
void q_chartview_drop_event(void* self, void* event) {
    QChartView_DropEvent((QChartView*)self, (QDropEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QDropEvent* event ```
void q_chartview_qbase_drop_event(void* self, void* event) {
    QChartView_QBaseDropEvent((QChartView*)self, (QDropEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QDropEvent*) ```
void q_chartview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnDropEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_focus_in_event(void* self, void* event) {
    QChartView_FocusInEvent((QChartView*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_qbase_focus_in_event(void* self, void* event) {
    QChartView_QBaseFocusInEvent((QChartView*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QFocusEvent*) ```
void q_chartview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnFocusInEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, bool next ```
bool q_chartview_focus_next_prev_child(void* self, bool next) {
    return QChartView_FocusNextPrevChild((QChartView*)self, next);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, bool next ```
bool q_chartview_qbase_focus_next_prev_child(void* self, bool next) {
    return QChartView_QBaseFocusNextPrevChild((QChartView*)self, next);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, bool) ```
void q_chartview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QChartView_OnFocusNextPrevChild((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_focus_out_event(void* self, void* event) {
    QChartView_FocusOutEvent((QChartView*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QFocusEvent* event ```
void q_chartview_qbase_focus_out_event(void* self, void* event) {
    QChartView_QBaseFocusOutEvent((QChartView*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QFocusEvent*) ```
void q_chartview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnFocusOutEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_key_press_event(void* self, void* event) {
    QChartView_KeyPressEvent((QChartView*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_qbase_key_press_event(void* self, void* event) {
    QChartView_QBaseKeyPressEvent((QChartView*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QKeyEvent*) ```
void q_chartview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnKeyPressEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_key_release_event(void* self, void* event) {
    QChartView_KeyReleaseEvent((QChartView*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QKeyEvent* event ```
void q_chartview_qbase_key_release_event(void* self, void* event) {
    QChartView_QBaseKeyReleaseEvent((QChartView*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QKeyEvent*) ```
void q_chartview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnKeyReleaseEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_mouse_double_click_event(void* self, void* event) {
    QChartView_MouseDoubleClickEvent((QChartView*)self, (QMouseEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMouseEvent* event ```
void q_chartview_qbase_mouse_double_click_event(void* self, void* event) {
    QChartView_QBaseMouseDoubleClickEvent((QChartView*)self, (QMouseEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMouseEvent*) ```
void q_chartview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnMouseDoubleClickEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QWheelEvent* event ```
void q_chartview_wheel_event(void* self, void* event) {
    QChartView_WheelEvent((QChartView*)self, (QWheelEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QWheelEvent* event ```
void q_chartview_qbase_wheel_event(void* self, void* event) {
    QChartView_QBaseWheelEvent((QChartView*)self, (QWheelEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QWheelEvent*) ```
void q_chartview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnWheelEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPaintEvent* event ```
void q_chartview_paint_event(void* self, void* event) {
    QChartView_PaintEvent((QChartView*)self, (QPaintEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPaintEvent* event ```
void q_chartview_qbase_paint_event(void* self, void* event) {
    QChartView_QBasePaintEvent((QChartView*)self, (QPaintEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPaintEvent*) ```
void q_chartview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnPaintEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, int dx, int dy ```
void q_chartview_scroll_contents_by(void* self, int dx, int dy) {
    QChartView_ScrollContentsBy((QChartView*)self, dx, dy);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, int dx, int dy ```
void q_chartview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QChartView_QBaseScrollContentsBy((QChartView*)self, dx, dy);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, int, int) ```
void q_chartview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QChartView_OnScrollContentsBy((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QShowEvent* event ```
void q_chartview_show_event(void* self, void* event) {
    QChartView_ShowEvent((QChartView*)self, (QShowEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QShowEvent* event ```
void q_chartview_qbase_show_event(void* self, void* event) {
    QChartView_QBaseShowEvent((QChartView*)self, (QShowEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QShowEvent*) ```
void q_chartview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnShowEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QInputMethodEvent* event ```
void q_chartview_input_method_event(void* self, void* event) {
    QChartView_InputMethodEvent((QChartView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QInputMethodEvent* event ```
void q_chartview_qbase_input_method_event(void* self, void* event) {
    QChartView_QBaseInputMethodEvent((QChartView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QInputMethodEvent*) ```
void q_chartview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnInputMethodEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_draw_background(void* self, void* painter, void* rect) {
    QChartView_DrawBackground((QChartView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_qbase_draw_background(void* self, void* painter, void* rect) {
    QChartView_QBaseDrawBackground((QChartView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*, QRectF*) ```
void q_chartview_on_draw_background(void* self, void (*slot)(void*, void*, void*)) {
    QChartView_OnDrawBackground((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_draw_foreground(void* self, void* painter, void* rect) {
    QChartView_DrawForeground((QChartView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* painter, QRectF* rect ```
void q_chartview_qbase_draw_foreground(void* self, void* painter, void* rect) {
    QChartView_QBaseDrawForeground((QChartView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Inherited from QGraphicsView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*, QRectF*) ```
void q_chartview_on_draw_foreground(void* self, void (*slot)(void*, void*, void*)) {
    QChartView_OnDrawForeground((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_minimum_size_hint(void* self) {
    return QChartView_MinimumSizeHint((QChartView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_qbase_minimum_size_hint(void* self) {
    return QChartView_QBaseMinimumSizeHint((QChartView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QSize* (*slot)() ```
void q_chartview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QChartView_OnMinimumSizeHint((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QObject* param1, QEvent* param2 ```
bool q_chartview_event_filter(void* self, void* param1, void* param2) {
    return QChartView_EventFilter((QChartView*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QObject* param1, QEvent* param2 ```
bool q_chartview_qbase_event_filter(void* self, void* param1, void* param2) {
    return QChartView_QBaseEventFilter((QChartView*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QObject*, QEvent*) ```
void q_chartview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QChartView_OnEventFilter((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_viewport_size_hint(void* self) {
    return QChartView_ViewportSizeHint((QChartView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QSize* q_chartview_qbase_viewport_size_hint(void* self) {
    return QChartView_QBaseViewportSizeHint((QChartView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QSize* (*slot)() ```
void q_chartview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QChartView_OnViewportSizeHint((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* param1 ```
void q_chartview_change_event(void* self, void* param1) {
    QChartView_ChangeEvent((QChartView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* param1 ```
void q_chartview_qbase_change_event(void* self, void* param1) {
    QChartView_QBaseChangeEvent((QChartView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnChangeEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QStyleOptionFrame* option ```
void q_chartview_init_style_option(void* self, void* option) {
    QChartView_InitStyleOption((QChartView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QStyleOptionFrame* option ```
void q_chartview_qbase_init_style_option(void* self, void* option) {
    QChartView_QBaseInitStyleOption((QChartView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QStyleOptionFrame*) ```
void q_chartview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QChartView_OnInitStyleOption((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_dev_type(void* self) {
    return QChartView_DevType((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_qbase_dev_type(void* self) {
    return QChartView_QBaseDevType((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)() ```
void q_chartview_on_dev_type(void* self, int32_t (*slot)()) {
    QChartView_OnDevType((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, bool visible ```
void q_chartview_set_visible(void* self, bool visible) {
    QChartView_SetVisible((QChartView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, bool visible ```
void q_chartview_qbase_set_visible(void* self, bool visible) {
    QChartView_QBaseSetVisible((QChartView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, bool) ```
void q_chartview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QChartView_OnSetVisible((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, int param1 ```
int32_t q_chartview_height_for_width(void* self, int param1) {
    return QChartView_HeightForWidth((QChartView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, int param1 ```
int32_t q_chartview_qbase_height_for_width(void* self, int param1) {
    return QChartView_QBaseHeightForWidth((QChartView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, int) ```
void q_chartview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QChartView_OnHeightForWidth((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_has_height_for_width(void* self) {
    return QChartView_HasHeightForWidth((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_qbase_has_height_for_width(void* self) {
    return QChartView_QBaseHasHeightForWidth((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)() ```
void q_chartview_on_has_height_for_width(void* self, bool (*slot)()) {
    QChartView_OnHasHeightForWidth((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QPaintEngine* q_chartview_paint_engine(void* self) {
    return QChartView_PaintEngine((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QPaintEngine* q_chartview_qbase_paint_engine(void* self) {
    return QChartView_QBasePaintEngine((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QPaintEngine* (*slot)() ```
void q_chartview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QChartView_OnPaintEngine((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEnterEvent* event ```
void q_chartview_enter_event(void* self, void* event) {
    QChartView_EnterEvent((QChartView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEnterEvent* event ```
void q_chartview_qbase_enter_event(void* self, void* event) {
    QChartView_QBaseEnterEvent((QChartView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEnterEvent*) ```
void q_chartview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnEnterEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_leave_event(void* self, void* event) {
    QChartView_LeaveEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_qbase_leave_event(void* self, void* event) {
    QChartView_QBaseLeaveEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnLeaveEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMoveEvent* event ```
void q_chartview_move_event(void* self, void* event) {
    QChartView_MoveEvent((QChartView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMoveEvent* event ```
void q_chartview_qbase_move_event(void* self, void* event) {
    QChartView_QBaseMoveEvent((QChartView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMoveEvent*) ```
void q_chartview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnMoveEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QCloseEvent* event ```
void q_chartview_close_event(void* self, void* event) {
    QChartView_CloseEvent((QChartView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QCloseEvent* event ```
void q_chartview_qbase_close_event(void* self, void* event) {
    QChartView_QBaseCloseEvent((QChartView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QCloseEvent*) ```
void q_chartview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnCloseEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QTabletEvent* event ```
void q_chartview_tablet_event(void* self, void* event) {
    QChartView_TabletEvent((QChartView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QTabletEvent* event ```
void q_chartview_qbase_tablet_event(void* self, void* event) {
    QChartView_QBaseTabletEvent((QChartView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QTabletEvent*) ```
void q_chartview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnTabletEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QActionEvent* event ```
void q_chartview_action_event(void* self, void* event) {
    QChartView_ActionEvent((QChartView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QActionEvent* event ```
void q_chartview_qbase_action_event(void* self, void* event) {
    QChartView_QBaseActionEvent((QChartView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QActionEvent*) ```
void q_chartview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnActionEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QHideEvent* event ```
void q_chartview_hide_event(void* self, void* event) {
    QChartView_HideEvent((QChartView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QHideEvent* event ```
void q_chartview_qbase_hide_event(void* self, void* event) {
    QChartView_QBaseHideEvent((QChartView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QHideEvent*) ```
void q_chartview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnHideEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, const char* eventType, void* message, intptr_t* result ```
bool q_chartview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QChartView_NativeEvent((QChartView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, const char* eventType, void* message, intptr_t* result ```
bool q_chartview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QChartView_QBaseNativeEvent((QChartView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, const char*, void*, intptr_t*) ```
void q_chartview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QChartView_OnNativeEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_chartview_metric(void* self, int64_t param1) {
    return QChartView_Metric((QChartView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_chartview_qbase_metric(void* self, int64_t param1) {
    return QChartView_QBaseMetric((QChartView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_chartview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QChartView_OnMetric((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_init_painter(void* self, void* painter) {
    QChartView_InitPainter((QChartView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* painter ```
void q_chartview_qbase_init_painter(void* self, void* painter) {
    QChartView_QBaseInitPainter((QChartView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*) ```
void q_chartview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QChartView_OnInitPainter((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPoint* offset ```
QPaintDevice* q_chartview_redirected(void* self, void* offset) {
    return QChartView_Redirected((QChartView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPoint* offset ```
QPaintDevice* q_chartview_qbase_redirected(void* self, void* offset) {
    return QChartView_QBaseRedirected((QChartView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QPaintDevice* (*slot)(QChartView*, QPoint*) ```
void q_chartview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QChartView_OnRedirected((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QPainter* q_chartview_shared_painter(void* self) {
    return QChartView_SharedPainter((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QPainter* q_chartview_qbase_shared_painter(void* self) {
    return QChartView_QBaseSharedPainter((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QPainter* (*slot)() ```
void q_chartview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QChartView_OnSharedPainter((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QTimerEvent* event ```
void q_chartview_timer_event(void* self, void* event) {
    QChartView_TimerEvent((QChartView*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QTimerEvent* event ```
void q_chartview_qbase_timer_event(void* self, void* event) {
    QChartView_QBaseTimerEvent((QChartView*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QTimerEvent*) ```
void q_chartview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnTimerEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QChildEvent* event ```
void q_chartview_child_event(void* self, void* event) {
    QChartView_ChildEvent((QChartView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QChildEvent* event ```
void q_chartview_qbase_child_event(void* self, void* event) {
    QChartView_QBaseChildEvent((QChartView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QChildEvent*) ```
void q_chartview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnChildEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_custom_event(void* self, void* event) {
    QChartView_CustomEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QEvent* event ```
void q_chartview_qbase_custom_event(void* self, void* event) {
    QChartView_QBaseCustomEvent((QChartView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QEvent*) ```
void q_chartview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QChartView_OnCustomEvent((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_connect_notify(void* self, void* signal) {
    QChartView_ConnectNotify((QChartView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_qbase_connect_notify(void* self, void* signal) {
    QChartView_QBaseConnectNotify((QChartView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMetaMethod*) ```
void q_chartview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QChartView_OnConnectNotify((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_disconnect_notify(void* self, void* signal) {
    QChartView_DisconnectNotify((QChartView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
void q_chartview_qbase_disconnect_notify(void* self, void* signal) {
    QChartView_QBaseDisconnectNotify((QChartView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QMetaMethod*) ```
void q_chartview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QChartView_OnDisconnectNotify((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, int left, int top, int right, int bottom ```
void q_chartview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QChartView_SetViewportMargins((QChartView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, int left, int top, int right, int bottom ```
void q_chartview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QChartView_QBaseSetViewportMargins((QChartView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, int, int, int, int) ```
void q_chartview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QChartView_OnSetViewportMargins((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QMargins* q_chartview_viewport_margins(void* self) {
    return QChartView_ViewportMargins((QChartView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QMargins* q_chartview_qbase_viewport_margins(void* self) {
    return QChartView_QBaseViewportMargins((QChartView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QMargins* (*slot)() ```
void q_chartview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QChartView_OnViewportMargins((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QPainter* param1 ```
void q_chartview_draw_frame(void* self, void* param1) {
    QChartView_DrawFrame((QChartView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QPainter* param1 ```
void q_chartview_qbase_draw_frame(void* self, void* param1) {
    QChartView_QBaseDrawFrame((QChartView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)(QChartView*, QPainter*) ```
void q_chartview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QChartView_OnDrawFrame((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_update_micro_focus(void* self) {
    QChartView_UpdateMicroFocus((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_qbase_update_micro_focus(void* self) {
    QChartView_QBaseUpdateMicroFocus((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)() ```
void q_chartview_on_update_micro_focus(void* self, void (*slot)()) {
    QChartView_OnUpdateMicroFocus((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_create(void* self) {
    QChartView_Create((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_qbase_create(void* self) {
    QChartView_QBaseCreate((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)() ```
void q_chartview_on_create(void* self, void (*slot)()) {
    QChartView_OnCreate((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_destroy(void* self) {
    QChartView_Destroy((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
void q_chartview_qbase_destroy(void* self) {
    QChartView_QBaseDestroy((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, void (*slot)() ```
void q_chartview_on_destroy(void* self, void (*slot)()) {
    QChartView_OnDestroy((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_focus_next_child(void* self) {
    return QChartView_FocusNextChild((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_qbase_focus_next_child(void* self) {
    return QChartView_QBaseFocusNextChild((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)() ```
void q_chartview_on_focus_next_child(void* self, bool (*slot)()) {
    QChartView_OnFocusNextChild((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_focus_previous_child(void* self) {
    return QChartView_FocusPreviousChild((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
bool q_chartview_qbase_focus_previous_child(void* self) {
    return QChartView_QBaseFocusPreviousChild((QChartView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)() ```
void q_chartview_on_focus_previous_child(void* self, bool (*slot)()) {
    QChartView_OnFocusPreviousChild((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
QObject* q_chartview_sender(void* self) {
    return QChartView_Sender((QChartView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
QObject* q_chartview_qbase_sender(void* self) {
    return QChartView_QBaseSender((QChartView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, QObject* (*slot)() ```
void q_chartview_on_sender(void* self, QObject* (*slot)()) {
    QChartView_OnSender((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_sender_signal_index(void* self) {
    return QChartView_SenderSignalIndex((QChartView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self ```
int32_t q_chartview_qbase_sender_signal_index(void* self) {
    return QChartView_QBaseSenderSignalIndex((QChartView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)() ```
void q_chartview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QChartView_OnSenderSignalIndex((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, const char* signal ```
int32_t q_chartview_receivers(void* self, const char* signal) {
    return QChartView_Receivers((QChartView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, const char* signal ```
int32_t q_chartview_qbase_receivers(void* self, const char* signal) {
    return QChartView_QBaseReceivers((QChartView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, int32_t (*slot)(QChartView*, const char*) ```
void q_chartview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QChartView_OnReceivers((QChartView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
bool q_chartview_is_signal_connected(void* self, void* signal) {
    return QChartView_IsSignalConnected((QChartView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChartView* self, QMetaMethod* signal ```
bool q_chartview_qbase_is_signal_connected(void* self, void* signal) {
    return QChartView_QBaseIsSignalConnected((QChartView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChartView* self, bool (*slot)(QChartView*, QMetaMethod*) ```
void q_chartview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QChartView_OnIsSignalConnected((QChartView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QChartView* self ```
void q_chartview_delete(void* self) {
    QChartView_Delete((QChartView*)(self));
}