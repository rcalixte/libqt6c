#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHART_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qchart-qtcharts.html

/// q_chart_new constructs a new QChart object.
///
///
QChart* q_chart_new();

/// q_chart_new2 constructs a new QChart object.
///
/// ``` QGraphicsItem* parent ```
QChart* q_chart_new2(void* parent);

/// q_chart_new3 constructs a new QChart object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QChart* q_chart_new3(void* parent, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QChart* self ```
const QMetaObject* q_chart_meta_object(void* self);

/// ``` QChart* self, const char* param1 ```
void* q_chart_metacast(void* self, const char* param1);

/// ``` QChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chart_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QChart* self, int32_t (*slot)(QChart*, enum QMetaObject__Call, int, void*) ```
void q_chart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chart_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_chart_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#addSeries)
///
/// ``` QChart* self, QAbstractSeries* series ```
void q_chart_add_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeSeries)
///
/// ``` QChart* self, QAbstractSeries* series ```
void q_chart_remove_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeAllSeries)
///
/// ``` QChart* self ```
void q_chart_remove_all_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#series)
///
/// ``` QChart* self ```
libqt_list /* of QAbstractSeries* */ q_chart_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisX)
///
/// ``` QChart* self, QAbstractAxis* axis ```
void q_chart_set_axis_x(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisY)
///
/// ``` QChart* self, QAbstractAxis* axis ```
void q_chart_set_axis_y(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisX)
///
/// ``` QChart* self ```
QAbstractAxis* q_chart_axis_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisY)
///
/// ``` QChart* self ```
QAbstractAxis* q_chart_axis_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#addAxis)
///
/// ``` QChart* self, QAbstractAxis* axis, int alignment ```
void q_chart_add_axis(void* self, void* axis, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeAxis)
///
/// ``` QChart* self, QAbstractAxis* axis ```
void q_chart_remove_axis(void* self, void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
///
/// ``` QChart* self ```
libqt_list /* of QAbstractAxis* */ q_chart_axes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#createDefaultAxes)
///
/// ``` QChart* self ```
void q_chart_create_default_axes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTheme)
///
/// ``` QChart* self, enum QChart__ChartTheme theme ```
void q_chart_set_theme(void* self, int64_t theme);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#theme)
///
/// ``` QChart* self ```
int64_t q_chart_theme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitle)
///
/// ``` QChart* self, const char* title ```
void q_chart_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#title)
///
/// ``` QChart* self ```
const char* q_chart_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitleFont)
///
/// ``` QChart* self, QFont* font ```
void q_chart_set_title_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#titleFont)
///
/// ``` QChart* self ```
QFont* q_chart_title_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitleBrush)
///
/// ``` QChart* self, QBrush* brush ```
void q_chart_set_title_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#titleBrush)
///
/// ``` QChart* self ```
QBrush* q_chart_title_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundBrush)
///
/// ``` QChart* self, QBrush* brush ```
void q_chart_set_background_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundBrush)
///
/// ``` QChart* self ```
QBrush* q_chart_background_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundPen)
///
/// ``` QChart* self, QPen* pen ```
void q_chart_set_background_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundPen)
///
/// ``` QChart* self ```
QPen* q_chart_background_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundVisible)
///
/// ``` QChart* self ```
void q_chart_set_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#isBackgroundVisible)
///
/// ``` QChart* self ```
bool q_chart_is_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setDropShadowEnabled)
///
/// ``` QChart* self ```
void q_chart_set_drop_shadow_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#isDropShadowEnabled)
///
/// ``` QChart* self ```
bool q_chart_is_drop_shadow_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundRoundness)
///
/// ``` QChart* self, double diameter ```
void q_chart_set_background_roundness(void* self, double diameter);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundRoundness)
///
/// ``` QChart* self ```
double q_chart_background_roundness(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationOptions)
///
/// ``` QChart* self, int options ```
void q_chart_set_animation_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationOptions)
///
/// ``` QChart* self ```
int64_t q_chart_animation_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationDuration)
///
/// ``` QChart* self, int msecs ```
void q_chart_set_animation_duration(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationDuration)
///
/// ``` QChart* self ```
int32_t q_chart_animation_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationEasingCurve)
///
/// ``` QChart* self, QEasingCurve* curve ```
void q_chart_set_animation_easing_curve(void* self, void* curve);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationEasingCurve)
///
/// ``` QChart* self ```
QEasingCurve* q_chart_animation_easing_curve(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomIn)
///
/// ``` QChart* self ```
void q_chart_zoom_in(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomOut)
///
/// ``` QChart* self ```
void q_chart_zoom_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomIn)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_zoom_in_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoom)
///
/// ``` QChart* self, double factor ```
void q_chart_zoom(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomReset)
///
/// ``` QChart* self ```
void q_chart_zoom_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#isZoomed)
///
/// ``` QChart* self ```
bool q_chart_is_zoomed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#scroll)
///
/// ``` QChart* self, double dx, double dy ```
void q_chart_scroll(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#legend)
///
/// ``` QChart* self ```
QLegend* q_chart_legend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setMargins)
///
/// ``` QChart* self, QMargins* margins ```
void q_chart_set_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#margins)
///
/// ``` QChart* self ```
QMargins* q_chart_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotArea)
///
/// ``` QChart* self ```
QRectF* q_chart_plot_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotArea)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_set_plot_area(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundBrush)
///
/// ``` QChart* self, QBrush* brush ```
void q_chart_set_plot_area_background_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaBackgroundBrush)
///
/// ``` QChart* self ```
QBrush* q_chart_plot_area_background_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundPen)
///
/// ``` QChart* self, QPen* pen ```
void q_chart_set_plot_area_background_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaBackgroundPen)
///
/// ``` QChart* self ```
QPen* q_chart_plot_area_background_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundVisible)
///
/// ``` QChart* self ```
void q_chart_set_plot_area_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#isPlotAreaBackgroundVisible)
///
/// ``` QChart* self ```
bool q_chart_is_plot_area_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setLocalizeNumbers)
///
/// ``` QChart* self, bool localize ```
void q_chart_set_localize_numbers(void* self, bool localize);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#localizeNumbers)
///
/// ``` QChart* self ```
bool q_chart_localize_numbers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setLocale)
///
/// ``` QChart* self, QLocale* locale ```
void q_chart_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#locale)
///
/// ``` QChart* self ```
QLocale* q_chart_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToValue)
///
/// ``` QChart* self, QPointF* position ```
QPointF* q_chart_map_to_value(void* self, void* position);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToPosition)
///
/// ``` QChart* self, QPointF* value ```
QPointF* q_chart_map_to_position(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#chartType)
///
/// ``` QChart* self ```
int64_t q_chart_chart_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaChanged)
///
/// ``` QChart* self, QRectF* plotArea ```
void q_chart_plot_area_changed(void* self, void* plotArea);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaChanged)
///
/// ``` QChart* self, void (*slot)(QChart*, QRectF*) ```
void q_chart_on_plot_area_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_chart_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_chart_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisX)
///
/// ``` QChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_chart_set_axis_x2(void* self, void* axis, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisY)
///
/// ``` QChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_chart_set_axis_y2(void* self, void* axis, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisX)
///
/// ``` QChart* self, QAbstractSeries* series ```
QAbstractAxis* q_chart_axis_x1(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisY)
///
/// ``` QChart* self, QAbstractSeries* series ```
QAbstractAxis* q_chart_axis_y1(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
///
/// ``` QChart* self, int orientation ```
libqt_list /* of QAbstractAxis* */ q_chart_axes1(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
///
/// ``` QChart* self, int orientation, QAbstractSeries* series ```
libqt_list /* of QAbstractAxis* */ q_chart_axes2(void* self, int64_t orientation, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundVisible)
///
/// ``` QChart* self, bool visible ```
void q_chart_set_background_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setDropShadowEnabled)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_drop_shadow_enabled1(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundVisible)
///
/// ``` QChart* self, bool visible ```
void q_chart_set_plot_area_background_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToValue)
///
/// ``` QChart* self, QPointF* position, QAbstractSeries* series ```
QPointF* q_chart_map_to_value2(void* self, void* position, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToPosition)
///
/// ``` QChart* self, QPointF* value, QAbstractSeries* series ```
QPointF* q_chart_map_to_position2(void* self, void* value, void* series);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QChart* self ```
QGraphicsLayout* q_chart_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QChart* self, QGraphicsLayout* layout ```
void q_chart_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QChart* self ```
void q_chart_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QChart* self ```
int64_t q_chart_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QChart* self, enum Qt__LayoutDirection direction ```
void q_chart_set_layout_direction(void* self, int64_t direction);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QChart* self ```
void q_chart_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QChart* self ```
QStyle* q_chart_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QChart* self, QStyle* style ```
void q_chart_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QChart* self ```
QFont* q_chart_font(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QChart* self, QFont* font ```
void q_chart_set_font(void* self, void* font);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QChart* self ```
QPalette* q_chart_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QChart* self, QPalette* palette ```
void q_chart_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QChart* self ```
bool q_chart_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QChart* self ```
QSizeF* q_chart_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QChart* self, double x, double y, double w, double h ```
void q_chart_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QChart* self ```
QRectF* q_chart_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QChart* self, double left, double top, double right, double bottom ```
void q_chart_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QChart* self, QMarginsF* margins ```
void q_chart_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QChart* self, double left, double top, double right, double bottom ```
void q_chart_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QChart* self, QMarginsF* margins ```
void q_chart_set_window_frame_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QChart* self, double* left, double* top, double* right, double* bottom ```
void q_chart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QChart* self ```
void q_chart_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QChart* self ```
QRectF* q_chart_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QChart* self ```
QRectF* q_chart_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QChart* self ```
int64_t q_chart_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QChart* self ```
int64_t q_chart_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QChart* self, int wFlags ```
void q_chart_set_window_flags(void* self, int64_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QChart* self ```
bool q_chart_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QChart* self, const char* title ```
void q_chart_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QChart* self ```
const char* q_chart_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QChart* self ```
int64_t q_chart_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QChart* self, enum Qt__FocusPolicy policy ```
void q_chart_set_focus_policy(void* self, int64_t policy);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_chart_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QChart* self, QKeySequence* sequence ```
int32_t q_chart_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QChart* self, int id ```
void q_chart_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QChart* self, int id ```
void q_chart_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QChart* self, int id ```
void q_chart_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QChart* self, QAction* action ```
void q_chart_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QChart* self, libqt_list /* of QAction* */ actions ```
void q_chart_add_actions(void* self, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QChart* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_chart_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QChart* self, QAction* before, QAction* action ```
void q_chart_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QChart* self, QAction* action ```
void q_chart_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QChart* self ```
libqt_list /* of QAction* */ q_chart_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QChart* self, enum Qt__WidgetAttribute attribute ```
void q_chart_set_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QChart* self, enum Qt__WidgetAttribute attribute ```
bool q_chart_test_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QChart* self ```
void q_chart_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsWidget*) ```
void q_chart_on_geometry_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QChart* self ```
void q_chart_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsWidget*) ```
void q_chart_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QChart* self ```
bool q_chart_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QChart* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_chart_grab_shortcut2(void* self, void* sequence, int64_t context);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QChart* self, int id, bool enabled ```
void q_chart_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QChart* self, int id, bool enabled ```
void q_chart_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QChart* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_chart_set_attribute2(void* self, int64_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QChart* self, enum Qt__GestureType typeVal ```
void q_chart_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QChart* self, enum Qt__GestureType typeVal ```
void q_chart_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QChart* self ```
void q_chart_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QChart* self ```
void q_chart_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QChart* self ```
void q_chart_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QChart* self ```
void q_chart_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QChart* self ```
void q_chart_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QChart* self ```
void q_chart_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QChart* self ```
void q_chart_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QChart* self ```
void q_chart_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QChart* self ```
void q_chart_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QChart* self ```
void q_chart_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QChart* self ```
void q_chart_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QChart* self ```
void q_chart_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QChart* self, enum Qt__GestureType typeVal, int flags ```
void q_chart_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QChart* self ```
const char* q_chart_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QChart* self, char* name ```
void q_chart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QChart* self ```
bool q_chart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QChart* self ```
bool q_chart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QChart* self ```
bool q_chart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QChart* self ```
bool q_chart_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QChart* self, bool b ```
bool q_chart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QChart* self ```
QThread* q_chart_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChart* self, QThread* thread ```
bool q_chart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChart* self, int interval ```
int32_t q_chart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChart* self, int id ```
void q_chart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChart* self, enum Qt__TimerId id ```
void q_chart_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QChart* self ```
libqt_list /* of QObject* */ q_chart_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QChart* self, QObject* parent ```
void q_chart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QChart* self, QObject* filterObj ```
void q_chart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QChart* self, QObject* obj ```
void q_chart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_chart_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChart* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_chart_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_chart_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_chart_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QChart* self ```
void q_chart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QChart* self ```
void q_chart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QChart* self, const char* name, QVariant* value ```
bool q_chart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QChart* self, const char* name ```
QVariant* q_chart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QChart* self ```
const char** q_chart_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChart* self ```
QBindingStorage* q_chart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChart* self ```
const QBindingStorage* q_chart_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChart* self ```
void q_chart_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChart* self, void (*slot)(QObject*) ```
void q_chart_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QChart* self ```
QObject* q_chart_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QChart* self, const char* classname ```
bool q_chart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QChart* self ```
void q_chart_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChart* self, QThread* thread, Disambiguated_t* param2 ```
bool q_chart_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChart* self, int interval, enum Qt__TimerType timerType ```
int32_t q_chart_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChart* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChart* self, QObject* param1 ```
void q_chart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChart* self, void (*slot)(QObject*, QObject*) ```
void q_chart_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QChart* self ```
QGraphicsScene* q_chart_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QChart* self ```
QGraphicsObject* q_chart_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QChart* self, QGraphicsItem* parent ```
void q_chart_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QChart* self ```
libqt_list /* of QGraphicsItem* */ q_chart_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QChart* self ```
bool q_chart_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QChart* self ```
bool q_chart_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QChart* self ```
bool q_chart_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QChart* self ```
QGraphicsObject* q_chart_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QChart* self ```
const QGraphicsObject* q_chart_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QChart* self ```
QGraphicsItemGroup* q_chart_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QChart* self, QGraphicsItemGroup* group ```
void q_chart_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QChart* self ```
int64_t q_chart_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_chart_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QChart* self, int flags ```
void q_chart_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QChart* self ```
int64_t q_chart_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QChart* self, enum QGraphicsItem__CacheMode mode ```
void q_chart_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QChart* self ```
int64_t q_chart_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QChart* self, enum QGraphicsItem__PanelModality panelModality ```
void q_chart_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QChart* self ```
bool q_chart_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QChart* self ```
const char* q_chart_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QChart* self, const char* toolTip ```
void q_chart_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QChart* self ```
QCursor* q_chart_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QChart* self, QCursor* cursor ```
void q_chart_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QChart* self ```
bool q_chart_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QChart* self ```
void q_chart_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QChart* self ```
bool q_chart_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QChart* self, QGraphicsItem* parent ```
bool q_chart_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QChart* self, bool visible ```
void q_chart_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QChart* self ```
void q_chart_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QChart* self ```
void q_chart_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QChart* self ```
bool q_chart_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QChart* self ```
bool q_chart_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QChart* self, bool selected ```
void q_chart_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QChart* self ```
bool q_chart_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QChart* self, bool on ```
void q_chart_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QChart* self ```
double q_chart_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QChart* self ```
double q_chart_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QChart* self, double opacity ```
void q_chart_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QChart* self ```
QGraphicsEffect* q_chart_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QChart* self, QGraphicsEffect* effect ```
void q_chart_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QChart* self ```
int64_t q_chart_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QChart* self, int buttons ```
void q_chart_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QChart* self ```
bool q_chart_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QChart* self ```
bool q_chart_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QChart* self ```
bool q_chart_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QChart* self ```
bool q_chart_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QChart* self ```
bool q_chart_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QChart* self, bool active ```
void q_chart_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QChart* self ```
bool q_chart_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QChart* self ```
void q_chart_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QChart* self ```
void q_chart_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QChart* self, QGraphicsItem* item ```
void q_chart_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QChart* self ```
void q_chart_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QChart* self ```
void q_chart_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QChart* self ```
void q_chart_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QChart* self ```
void q_chart_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QChart* self ```
QPointF* q_chart_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QChart* self ```
double q_chart_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QChart* self, double x ```
void q_chart_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QChart* self ```
double q_chart_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QChart* self, double y ```
void q_chart_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QChart* self ```
QPointF* q_chart_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QChart* self, QPointF* pos ```
void q_chart_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QChart* self, double x, double y ```
void q_chart_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QChart* self, double dx, double dy ```
void q_chart_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self ```
void q_chart_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, double x, double y, double w, double h ```
void q_chart_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QChart* self ```
QTransform* q_chart_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QChart* self ```
QTransform* q_chart_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QChart* self, QTransform* viewportTransform ```
QTransform* q_chart_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QChart* self, QGraphicsItem* other ```
QTransform* q_chart_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QChart* self, QTransform* matrix ```
void q_chart_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QChart* self ```
void q_chart_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QChart* self, double angle ```
void q_chart_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QChart* self ```
double q_chart_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QChart* self, double scale ```
void q_chart_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QChart* self ```
double q_chart_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QChart* self ```
libqt_list /* of QGraphicsTransform* */ q_chart_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QChart* self, libqt_list /* of QGraphicsTransform* */ transformations ```
void q_chart_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QChart* self ```
QPointF* q_chart_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QChart* self, QPointF* origin ```
void q_chart_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QChart* self, double ax, double ay ```
void q_chart_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QChart* self ```
double q_chart_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QChart* self, double z ```
void q_chart_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QChart* self, QGraphicsItem* sibling ```
void q_chart_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QChart* self ```
QRectF* q_chart_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QChart* self ```
QRectF* q_chart_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QChart* self ```
bool q_chart_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QChart* self ```
QPainterPath* q_chart_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QChart* self ```
libqt_list /* of QGraphicsItem* */ q_chart_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QChart* self ```
bool q_chart_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QChart* self, double x, double y, double w, double h ```
bool q_chart_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QChart* self, QTransform* itemToDeviceTransform ```
QRegion* q_chart_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QChart* self ```
double q_chart_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QChart* self, double granularity ```
void q_chart_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QChart* self ```
void q_chart_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QChart* self, double x, double y, double width, double height ```
void q_chart_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_chart_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_chart_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_chart_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_chart_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_chart_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_chart_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_chart_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_chart_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QChart* self, QGraphicsItem* child ```
bool q_chart_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QChart* self, QGraphicsItem* other ```
QGraphicsItem* q_chart_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QChart* self ```
bool q_chart_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QChart* self, int key ```
QVariant* q_chart_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QChart* self, int key, QVariant* value ```
void q_chart_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QChart* self ```
int64_t q_chart_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QChart* self, int hints ```
void q_chart_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QChart* self, QGraphicsItem* filterItem ```
void q_chart_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QChart* self, QGraphicsItem* filterItem ```
void q_chart_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_chart_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QChart* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_chart_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QChart* self, enum Qt__FocusReason focusReason ```
void q_chart_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, QRectF* rect, int xmargin ```
void q_chart_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, QRectF* rect, int xmargin, int ymargin ```
void q_chart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, double x, double y, double w, double h, int xmargin ```
void q_chart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_chart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QChart* self, QGraphicsItem* other, bool* ok ```
QTransform* q_chart_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QChart* self, QTransform* matrix, bool combine ```
void q_chart_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QChart* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chart_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QChart* self, QRectF* rect ```
bool q_chart_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QChart* self, double dx, double dy, QRectF* rect ```
void q_chart_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QChart* self, QSizePolicy* policy ```
void q_chart_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_chart_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QChart* self ```
QSizePolicy* q_chart_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QChart* self ```
QSizeF* q_chart_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QChart* self, double width ```
void q_chart_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QChart* self ```
double q_chart_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QChart* self, double height ```
void q_chart_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QChart* self ```
double q_chart_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QChart* self ```
QSizeF* q_chart_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QChart* self, double width ```
void q_chart_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QChart* self ```
double q_chart_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QChart* self, double height ```
void q_chart_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QChart* self ```
double q_chart_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QChart* self ```
QSizeF* q_chart_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QChart* self, double width ```
void q_chart_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QChart* self ```
double q_chart_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QChart* self, double height ```
void q_chart_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QChart* self ```
double q_chart_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QChart* self ```
QRectF* q_chart_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QChart* self ```
QRectF* q_chart_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QChart* self, enum Qt__SizeHint which ```
QSizeF* q_chart_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QChart* self ```
QGraphicsLayoutItem* q_chart_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QChart* self, QGraphicsLayoutItem* parent ```
void q_chart_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QChart* self ```
bool q_chart_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QChart* self ```
bool q_chart_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_chart_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_chart_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_qbase_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QRectF*) ```
void q_chart_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, double* left, double* top, double* right, double* bottom ```
void q_chart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, double* left, double* top, double* right, double* bottom ```
void q_chart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, double*, double*, double*, double*) ```
void q_chart_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_qbase_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int32_t (*slot)() ```
void q_chart_on_type(void* self, int32_t (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_qbase_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_chart_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_chart_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QRectF* q_chart_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QRectF* q_chart_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QRectF* (*slot)() ```
void q_chart_on_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_qbase_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QPainterPath* (*slot)() ```
void q_chart_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QStyleOption* option ```
void q_chart_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QStyleOption* option ```
void q_chart_qbase_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QStyleOption*) ```
void q_chart_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_chart_size_hint(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_chart_qbase_size_hint(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QSizeF* (*slot)(QChart*, enum Qt__SizeHint, QSizeF*) ```
void q_chart_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_update_geometry(void* self, void (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_chart_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_chart_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_chart_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, const char* propertyName, QVariant* value ```
QVariant* q_chart_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, const char* propertyName, QVariant* value ```
QVariant* q_chart_qbase_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, const char*, QVariant*) ```
void q_chart_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QEvent*) ```
void q_chart_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* e ```
bool q_chart_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* e ```
bool q_chart_qbase_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QEvent*) ```
void q_chart_on_window_frame_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPointF* pos ```
int64_t q_chart_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPointF* pos ```
int64_t q_chart_qbase_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int64_t (*slot)(QChart*, QPointF*) ```
void q_chart_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_qbase_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QEvent*) ```
void q_chart_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QCloseEvent* event ```
void q_chart_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QCloseEvent* event ```
void q_chart_qbase_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QCloseEvent*) ```
void q_chart_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QFocusEvent*) ```
void q_chart_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, bool next ```
bool q_chart_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, bool next ```
bool q_chart_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, bool) ```
void q_chart_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QFocusEvent*) ```
void q_chart_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QHideEvent* event ```
void q_chart_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QHideEvent* event ```
void q_chart_qbase_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QHideEvent*) ```
void q_chart_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMoveEvent* event ```
void q_chart_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMoveEvent* event ```
void q_chart_qbase_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMoveEvent*) ```
void q_chart_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_polish_event(void* self, void (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneResizeEvent* event ```
void q_chart_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneResizeEvent* event ```
void q_chart_qbase_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneResizeEvent*) ```
void q_chart_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QShowEvent* event ```
void q_chart_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QShowEvent* event ```
void q_chart_qbase_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QShowEvent*) ```
void q_chart_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneHoverEvent*) ```
void q_chart_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneHoverEvent*) ```
void q_chart_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_grab_mouse_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_grab_keyboard_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QObject* watched, QEvent* event ```
bool q_chart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QObject* watched, QEvent* event ```
bool q_chart_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QObject*, QEvent*) ```
void q_chart_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QTimerEvent* event ```
void q_chart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QTimerEvent* event ```
void q_chart_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QTimerEvent*) ```
void q_chart_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QChildEvent* event ```
void q_chart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QChildEvent* event ```
void q_chart_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QChildEvent*) ```
void q_chart_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QMetaMethod*) ```
void q_chart_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QMetaMethod*) ```
void q_chart_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, int phase ```
void q_chart_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, int phase ```
void q_chart_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, int) ```
void q_chart_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPointF* point ```
bool q_chart_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPointF* point ```
bool q_chart_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QPointF*) ```
void q_chart_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_chart_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_chart_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_chart_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_chart_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_chart_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_chart_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
bool q_chart_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
bool q_chart_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QGraphicsItem*) ```
void q_chart_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QPainterPath* (*slot)() ```
void q_chart_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_chart_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_chart_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QGraphicsItem*, QEvent*) ```
void q_chart_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_chart_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_chart_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneContextMenuEvent*) ```
void q_chart_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneHoverEvent*) ```
void q_chart_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QKeyEvent*) ```
void q_chart_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QKeyEvent*) ```
void q_chart_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneWheelEvent* event ```
void q_chart_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneWheelEvent* event ```
void q_chart_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneWheelEvent*) ```
void q_chart_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QInputMethodEvent* event ```
void q_chart_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QInputMethodEvent* event ```
void q_chart_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QInputMethodEvent*) ```
void q_chart_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_chart_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_chart_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, enum Qt__InputMethodQuery) ```
void q_chart_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension ```
bool q_chart_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension ```
bool q_chart_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, enum QGraphicsItem__Extension) ```
void q_chart_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_chart_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_chart_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, enum QGraphicsItem__Extension, QVariant*) ```
void q_chart_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QVariant* variant ```
QVariant* q_chart_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QVariant* variant ```
QVariant* q_chart_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, QVariant*) ```
void q_chart_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
bool q_chart_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
bool q_chart_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)() ```
void q_chart_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QObject* q_chart_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QObject* q_chart_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QObject* (*slot)() ```
void q_chart_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int32_t (*slot)() ```
void q_chart_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, const char* signal ```
int32_t q_chart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, const char* signal ```
int32_t q_chart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int32_t (*slot)(QChart*, const char*) ```
void q_chart_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
bool q_chart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
bool q_chart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QMetaMethod*) ```
void q_chart_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_prepare_geometry_change(void* self, void (*slot)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
void q_chart_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
void q_chart_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsItem*) ```
void q_chart_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, bool ownedByLayout ```
void q_chart_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, bool ownedByLayout ```
void q_chart_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, bool) ```
void q_chart_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QChart* self, void (*slot)(QObject*, const char*) ```
void q_chart_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchart-qtcharts.html#dtor.QChart)
///
/// Delete this object from C++ memory.
///
/// ``` QChart* self ```
void q_chart_delete(void* self);

/// https://doc.qt.io/qt-6/qchart-qtcharts.html#types

typedef enum {
    QCHART_CHARTTYPE_CHARTTYPEUNDEFINED = 0,
    QCHART_CHARTTYPE_CHARTTYPECARTESIAN = 1,
    QCHART_CHARTTYPE_CHARTTYPEPOLAR = 2
} QChart__ChartType;

typedef enum {
    QCHART_CHARTTHEME_CHARTTHEMELIGHT = 0,
    QCHART_CHARTTHEME_CHARTTHEMEBLUECERULEAN = 1,
    QCHART_CHARTTHEME_CHARTTHEMEDARK = 2,
    QCHART_CHARTTHEME_CHARTTHEMEBROWNSAND = 3,
    QCHART_CHARTTHEME_CHARTTHEMEBLUENCS = 4,
    QCHART_CHARTTHEME_CHARTTHEMEHIGHCONTRAST = 5,
    QCHART_CHARTTHEME_CHARTTHEMEBLUEICY = 6,
    QCHART_CHARTTHEME_CHARTTHEMEQT = 7
} QChart__ChartTheme;

typedef enum {
    QCHART_ANIMATIONOPTION_NOANIMATION = 0,
    QCHART_ANIMATIONOPTION_GRIDAXISANIMATIONS = 1,
    QCHART_ANIMATIONOPTION_SERIESANIMATIONS = 2,
    QCHART_ANIMATIONOPTION_ALLANIMATIONS = 3
} QChart__AnimationOption;

#endif
