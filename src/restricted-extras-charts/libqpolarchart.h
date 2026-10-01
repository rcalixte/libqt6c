#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQPOLARCHART_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQPOLARCHART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html)

/// q_polarchart_new constructs a new QPolarChart object.
///
QPolarChart* q_polarchart_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html)

/// q_polarchart_new2 constructs a new QPolarChart object.
///
/// @param parent QGraphicsItem*
///
QPolarChart* q_polarchart_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html)

/// q_polarchart_new3 constructs a new QPolarChart object.
///
/// @param parent QGraphicsItem*
/// @param wFlags flag of enum Qt__WindowType
///
QPolarChart* q_polarchart_new3(void* parent, int32_t wFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPolarChart*
///
const QMetaObject* q_polarchart_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QPolarChart*
/// @param callback const QMetaObject* func(const QPolarChart* self)
///
void q_polarchart_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPolarChart*
///
const QMetaObject* q_polarchart_super_meta_object(const void* self);

/// @param self QPolarChart*
/// @param param1 const char*
///
void* q_polarchart_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPolarChart*
/// @param callback void* func(QPolarChart* self, const char* param1)
///
void q_polarchart_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPolarChart*
/// @param param1 const char*
///
void* q_polarchart_super_metacast(void* self, const char* param1);

/// @param self QPolarChart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_polarchart_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPolarChart*
/// @param callback int32_t func(QPolarChart* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_polarchart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPolarChart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_polarchart_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_polarchart_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#addAxis)
///
/// @param self QPolarChart*
/// @param axis QAbstractAxis*
/// @param polarOrientation enum QPolarChart__PolarOrientation
///
void q_polarchart_add_axis(void* self, void* axis, int32_t polarOrientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_polarchart_axes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axisPolarOrientation)
///
/// @param axis QAbstractAxis*
///
/// @return enum QPolarChart__PolarOrientation
///
int32_t q_polarchart_axis_polar_orientation(void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_polarchart_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_polarchart_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
///
/// @param self const QPolarChart*
/// @param polarOrientation flag of enum QPolarChart__PolarOrientation
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_polarchart_axes1(const void* self, int32_t polarOrientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
///
/// @param self const QPolarChart*
/// @param polarOrientation flag of enum QPolarChart__PolarOrientation
/// @param series QAbstractSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_polarchart_axes2(const void* self, int32_t polarOrientation, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#addSeries)
///
/// @param self QPolarChart*
/// @param series QAbstractSeries*
///
void q_polarchart_add_series(void* self, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeSeries)
///
/// @param self QPolarChart*
/// @param series QAbstractSeries*
///
void q_polarchart_remove_series(void* self, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
///
/// @param self QPolarChart*
///
void q_polarchart_remove_all_series(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#series)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QAbstractSeries*
///
libqt_list q_polarchart_series(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// @param self QPolarChart*
/// @param axis QAbstractAxis*
///
void q_polarchart_set_axis_x(void* self, void* axis);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// @param self QPolarChart*
/// @param axis QAbstractAxis*
///
void q_polarchart_set_axis_y(void* self, void* axis);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// @param self const QPolarChart*
///
QAbstractAxis* q_polarchart_axis_x(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// @param self const QPolarChart*
///
QAbstractAxis* q_polarchart_axis_y(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#removeAxis)
///
/// @param self QPolarChart*
/// @param axis QAbstractAxis*
///
void q_polarchart_remove_axis(void* self, void* axis);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
///
/// @param self QPolarChart*
///
void q_polarchart_create_default_axes(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTheme)
///
/// @param self QPolarChart*
/// @param theme enum QChart__ChartTheme
///
void q_polarchart_set_theme(void* self, int32_t theme);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#theme)
///
/// @param self const QPolarChart*
///
/// @return enum QChart__ChartTheme
///
int32_t q_polarchart_theme(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitle)
///
/// @param self QPolarChart*
/// @param title const char*
///
void q_polarchart_set_title(void* self, const char* title);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPolarChart*
///
const char* q_polarchart_title(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
///
/// @param self QPolarChart*
/// @param font QFont*
///
void q_polarchart_set_title_font(void* self, const void* font);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleFont)
///
/// @param self const QPolarChart*
///
QFont* q_polarchart_title_font(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
///
/// @param self QPolarChart*
/// @param brush QBrush*
///
void q_polarchart_set_title_brush(void* self, const void* brush);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleBrush)
///
/// @param self const QPolarChart*
///
QBrush* q_polarchart_title_brush(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
///
/// @param self QPolarChart*
/// @param brush QBrush*
///
void q_polarchart_set_background_brush(void* self, const void* brush);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
///
/// @param self const QPolarChart*
///
QBrush* q_polarchart_background_brush(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
///
/// @param self QPolarChart*
/// @param pen QPen*
///
void q_polarchart_set_background_pen(void* self, const void* pen);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
///
/// @param self const QPolarChart*
///
QPen* q_polarchart_background_pen(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// @param self QPolarChart*
///
void q_polarchart_set_background_visible(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_background_visible(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// @param self QPolarChart*
///
void q_polarchart_set_drop_shadow_enabled(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_drop_shadow_enabled(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
///
/// @param self QPolarChart*
/// @param diameter double
///
void q_polarchart_set_background_roundness(void* self, double diameter);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
///
/// @param self const QPolarChart*
///
double q_polarchart_background_roundness(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
///
/// @param self QPolarChart*
/// @param options flag of enum QChart__AnimationOption
///
void q_polarchart_set_animation_options(void* self, int32_t options);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationOptions)
///
/// @param self const QPolarChart*
///
/// @return flag of enum QChart__AnimationOption
///
int32_t q_polarchart_animation_options(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
///
/// @param self QPolarChart*
/// @param msecs int
///
void q_polarchart_set_animation_duration(void* self, int msecs);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationDuration)
///
/// @param self const QPolarChart*
///
int32_t q_polarchart_animation_duration(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
///
/// @param self QPolarChart*
/// @param curve QEasingCurve*
///
void q_polarchart_set_animation_easing_curve(void* self, const void* curve);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
///
/// @param self const QPolarChart*
///
QEasingCurve* q_polarchart_animation_easing_curve(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// @param self QPolarChart*
///
void q_polarchart_zoom_in(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomOut)
///
/// @param self QPolarChart*
///
void q_polarchart_zoom_out(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_zoom_in2(void* self, const void* rect);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoom)
///
/// @param self QPolarChart*
/// @param factor double
///
void q_polarchart_zoom(void* self, double factor);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#zoomReset)
///
/// @param self QPolarChart*
///
void q_polarchart_zoom_reset(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isZoomed)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_zoomed(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#scroll)
///
/// @param self QPolarChart*
/// @param dx double
/// @param dy double
///
void q_polarchart_scroll(void* self, double dx, double dy);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#legend)
///
/// @param self const QPolarChart*
///
QLegend* q_polarchart_legend(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setMargins)
///
/// @param self QPolarChart*
/// @param margins QMargins*
///
void q_polarchart_set_margins(void* self, const void* margins);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#margins)
///
/// @param self const QPolarChart*
///
QMargins* q_polarchart_margins(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotArea)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_plot_area(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_set_plot_area(void* self, const void* rect);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
///
/// @param self QPolarChart*
/// @param brush QBrush*
///
void q_polarchart_set_plot_area_background_brush(void* self, const void* brush);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
///
/// @param self const QPolarChart*
///
QBrush* q_polarchart_plot_area_background_brush(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
///
/// @param self QPolarChart*
/// @param pen QPen*
///
void q_polarchart_set_plot_area_background_pen(void* self, const void* pen);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
///
/// @param self const QPolarChart*
///
QPen* q_polarchart_plot_area_background_pen(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// @param self QPolarChart*
///
void q_polarchart_set_plot_area_background_visible(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_plot_area_background_visible(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
///
/// @param self QPolarChart*
/// @param localize bool
///
void q_polarchart_set_localize_numbers(void* self, bool localize);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
///
/// @param self const QPolarChart*
///
bool q_polarchart_localize_numbers(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocale)
///
/// @param self QPolarChart*
/// @param locale QLocale*
///
void q_polarchart_set_locale(void* self, const void* locale);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#locale)
///
/// @param self const QPolarChart*
///
QLocale* q_polarchart_locale(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// @param self QPolarChart*
/// @param position QPointF*
///
QPointF* q_polarchart_map_to_value(void* self, const void* position);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// @param self QPolarChart*
/// @param value QPointF*
///
QPointF* q_polarchart_map_to_position(void* self, const void* value);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#chartType)
///
/// @param self const QPolarChart*
///
/// @return enum QChart__ChartType
///
int32_t q_polarchart_chart_type(const void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// @param self QPolarChart*
/// @param plotArea QRectF*
///
void q_polarchart_plot_area_changed(void* self, const void* plotArea);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QRectF* plotArea)
///
void q_polarchart_on_plot_area_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// @param self QPolarChart*
/// @param axis QAbstractAxis*
/// @param series QAbstractSeries*
///
void q_polarchart_set_axis_x2(void* self, void* axis, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// @param self QPolarChart*
/// @param axis QAbstractAxis*
/// @param series QAbstractSeries*
///
void q_polarchart_set_axis_y2(void* self, void* axis, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// @param self const QPolarChart*
/// @param series QAbstractSeries*
///
QAbstractAxis* q_polarchart_axis_x1(const void* self, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// @param self const QPolarChart*
/// @param series QAbstractSeries*
///
QAbstractAxis* q_polarchart_axis_y1(const void* self, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// @param self QPolarChart*
/// @param visible bool
///
void q_polarchart_set_background_visible1(void* self, bool visible);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_drop_shadow_enabled1(void* self, bool enabled);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// @param self QPolarChart*
/// @param visible bool
///
void q_polarchart_set_plot_area_background_visible1(void* self, bool visible);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// @param self QPolarChart*
/// @param position QPointF*
/// @param series QAbstractSeries*
///
QPointF* q_polarchart_map_to_value2(void* self, const void* position, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// @param self QPolarChart*
/// @param value QPointF*
/// @param series QAbstractSeries*
///
QPointF* q_polarchart_map_to_position2(void* self, const void* value, void* series);

/// Inherited from QGraphicsWidget
///
/// Upcasts to a QGraphicsLayoutItem object
///
/// @param self QPolarChart*
///
QGraphicsLayoutItem* q_polarchart_as_q_graphics_layout_item(void* self);

/// Inherited from QGraphicsWidget
///
/// Downcasts to a QPolarChart object
///
/// @param _qgraphicslayoutitem QGraphicsLayoutItem*
///
QPolarChart* q_polarchart_from_q_graphics_layout_item(void* _qgraphicslayoutitem);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// @param self const QPolarChart*
///
QGraphicsLayout* q_polarchart_layout(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// @param self QPolarChart*
/// @param layout QGraphicsLayout*
///
void q_polarchart_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// @param self QPolarChart*
///
void q_polarchart_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// @param self const QPolarChart*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_polarchart_layout_direction(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// @param self QPolarChart*
/// @param direction enum Qt__LayoutDirection
///
void q_polarchart_set_layout_direction(void* self, int32_t direction);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// @param self QPolarChart*
///
void q_polarchart_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// @param self const QPolarChart*
///
QStyle* q_polarchart_style(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// @param self QPolarChart*
/// @param style QStyle*
///
void q_polarchart_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// @param self const QPolarChart*
///
QFont* q_polarchart_font(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// @param self QPolarChart*
/// @param font QFont*
///
void q_polarchart_set_font(void* self, const void* font);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// @param self const QPolarChart*
///
QPalette* q_polarchart_palette(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// @param self QPolarChart*
/// @param palette QPalette*
///
void q_polarchart_set_palette(void* self, const void* palette);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// @param self const QPolarChart*
///
bool q_polarchart_auto_fill_background(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_resize(void* self, const void* size);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QPolarChart*
/// @param w double
/// @param h double
///
void q_polarchart_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// @param self const QPolarChart*
///
QSizeF* q_polarchart_size(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_polarchart_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_rect(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QPolarChart*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_polarchart_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QPolarChart*
/// @param margins QMarginsF*
///
void q_polarchart_set_contents_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QPolarChart*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_polarchart_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QPolarChart*
/// @param margins QMarginsF*
///
void q_polarchart_set_window_frame_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// @param self const QPolarChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_polarchart_get_window_frame_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// @param self QPolarChart*
///
void q_polarchart_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_window_frame_geometry(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_window_frame_rect(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// @param self const QPolarChart*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_polarchart_window_flags(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// @param self const QPolarChart*
///
/// @return enum Qt__WindowType
///
int32_t q_polarchart_window_type(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// @param self QPolarChart*
/// @param wFlags flag of enum Qt__WindowType
///
void q_polarchart_set_window_flags(void* self, int32_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_active_window(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// @param self QPolarChart*
/// @param title const char*
///
void q_polarchart_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPolarChart*
///
const char* q_polarchart_window_title(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// @param self const QPolarChart*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_polarchart_focus_policy(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// @param self QPolarChart*
/// @param policy enum Qt__FocusPolicy
///
void q_polarchart_set_focus_policy(void* self, int32_t policy);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// @param first QGraphicsWidget*
/// @param second QGraphicsWidget*
///
void q_polarchart_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// @param self const QPolarChart*
///
QGraphicsWidget* q_polarchart_focus_widget(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QPolarChart*
/// @param sequence QKeySequence*
///
int32_t q_polarchart_grab_shortcut(void* self, const void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// @param self QPolarChart*
/// @param id int
///
void q_polarchart_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QPolarChart*
/// @param id int
///
void q_polarchart_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QPolarChart*
/// @param id int
///
void q_polarchart_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// @param self QPolarChart*
/// @param action QAction*
///
void q_polarchart_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// @param self QPolarChart*
/// @param actions libqt_list of QAction*
///
void q_polarchart_add_actions(void* self, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// @param self QPolarChart*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_polarchart_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// @param self QPolarChart*
/// @param before QAction*
/// @param action QAction*
///
void q_polarchart_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// @param self QPolarChart*
/// @param action QAction*
///
void q_polarchart_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QAction*
///
libqt_list q_polarchart_actions(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QPolarChart*
/// @param attribute enum Qt__WidgetAttribute
///
void q_polarchart_set_attribute(void* self, int32_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// @param self const QPolarChart*
/// @param attribute enum Qt__WidgetAttribute
///
bool q_polarchart_test_attribute(const void* self, int32_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_geometry_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// @param self QPolarChart*
///
bool q_polarchart_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QPolarChart*
/// @param sequence QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_polarchart_grab_shortcut2(void* self, const void* sequence, int32_t context);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QPolarChart*
/// @param id int
/// @param enabled bool
///
void q_polarchart_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QPolarChart*
/// @param id int
/// @param enabled bool
///
void q_polarchart_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QPolarChart*
/// @param attribute enum Qt__WidgetAttribute
/// @param on bool
///
void q_polarchart_set_attribute2(void* self, int32_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// Upcasts to a QGraphicsItem object
///
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_as_q_graphics_item(void* self);

/// Inherited from QGraphicsObject
///
/// Downcasts to a QPolarChart object
///
/// @param _qgraphicsitem QGraphicsItem*
///
QPolarChart* q_polarchart_from_q_graphics_item(void* _qgraphicsitem);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QPolarChart*
/// @param type enum Qt__GestureType
///
void q_polarchart_grab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QPolarChart*
/// @param type enum Qt__GestureType
///
void q_polarchart_ungrab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QPolarChart*
///
void q_polarchart_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QPolarChart*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_polarchart_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPolarChart*
///
const char* q_polarchart_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPolarChart*
/// @param name const char*
///
void q_polarchart_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPolarChart*
///
bool q_polarchart_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPolarChart*
/// @param b bool
///
bool q_polarchart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPolarChart*
///
QThread* q_polarchart_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPolarChart*
/// @param thread QThread*
///
bool q_polarchart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPolarChart*
/// @param interval int
///
int32_t q_polarchart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPolarChart*
/// @param time int64_t of nanoseconds
///
int32_t q_polarchart_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPolarChart*
/// @param id int
///
void q_polarchart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPolarChart*
/// @param id enum Qt__TimerId
///
void q_polarchart_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QObject*
///
libqt_list q_polarchart_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPolarChart*
/// @param parent QObject*
///
void q_polarchart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPolarChart*
/// @param filterObj QObject*
///
void q_polarchart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPolarChart*
/// @param obj QObject*
///
void q_polarchart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_polarchart_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_polarchart_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPolarChart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_polarchart_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_polarchart_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_polarchart_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPolarChart*
///
bool q_polarchart_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPolarChart*
/// @param receiver QObject*
///
bool q_polarchart_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_polarchart_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPolarChart*
///
void q_polarchart_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPolarChart*
///
void q_polarchart_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPolarChart*
/// @param name const char*
/// @param value QVariant*
///
bool q_polarchart_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPolarChart*
/// @param name const char*
///
QVariant* q_polarchart_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPolarChart*
///
const char** q_polarchart_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPolarChart*
///
QBindingStorage* q_polarchart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPolarChart*
///
const QBindingStorage* q_polarchart_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPolarChart*
///
void q_polarchart_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPolarChart*
///
QObject* q_polarchart_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPolarChart*
/// @param classname const char*
///
bool q_polarchart_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPolarChart*
///
void q_polarchart_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPolarChart*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_polarchart_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPolarChart*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_polarchart_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_polarchart_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_polarchart_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPolarChart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_polarchart_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPolarChart*
/// @param signal const char*
///
bool q_polarchart_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPolarChart*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_polarchart_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPolarChart*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_polarchart_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPolarChart*
/// @param receiver QObject*
/// @param member const char*
///
bool q_polarchart_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPolarChart*
/// @param param1 QObject*
///
void q_polarchart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QObject* param1)
///
void q_polarchart_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self const QPolarChart*
///
QGraphicsScene* q_polarchart_scene(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_parent_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_top_level_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self const QPolarChart*
///
QGraphicsObject* q_polarchart_parent_object(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self const QPolarChart*
///
QGraphicsWidget* q_polarchart_parent_widget(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self const QPolarChart*
///
QGraphicsWidget* q_polarchart_top_level_widget(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self const QPolarChart*
///
QGraphicsWidget* q_polarchart_window(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_panel(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QPolarChart*
/// @param parent QGraphicsItem*
///
void q_polarchart_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_polarchart_child_items(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_widget(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_window(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_panel(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QPolarChart*
///
QGraphicsObject* q_polarchart_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self const QPolarChart*
///
const QGraphicsObject* q_polarchart_to_graphics_object2(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self const QPolarChart*
///
QGraphicsItemGroup* q_polarchart_group(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QPolarChart*
/// @param group QGraphicsItemGroup*
///
void q_polarchart_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self const QPolarChart*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
///
int32_t q_polarchart_flags(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QPolarChart*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
///
void q_polarchart_set_flag(void* self, int32_t flag);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QPolarChart*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
///
void q_polarchart_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self const QPolarChart*
///
/// @return enum QGraphicsItem__CacheMode
///
int32_t q_polarchart_cache_mode(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QPolarChart*
/// @param mode enum QGraphicsItem__CacheMode
///
void q_polarchart_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self const QPolarChart*
///
/// @return enum QGraphicsItem__PanelModality
///
int32_t q_polarchart_panel_modality(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QPolarChart*
/// @param panelModality enum QGraphicsItem__PanelModality
///
void q_polarchart_set_panel_modality(void* self, int32_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_blocked_by_modal_panel(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPolarChart*
///
const char* q_polarchart_tool_tip(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QPolarChart*
/// @param toolTip const char*
///
void q_polarchart_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self const QPolarChart*
///
QCursor* q_polarchart_cursor(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QPolarChart*
/// @param cursor QCursor*
///
void q_polarchart_set_cursor(void* self, const void* cursor);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self const QPolarChart*
///
bool q_polarchart_has_cursor(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QPolarChart*
///
void q_polarchart_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_visible(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self const QPolarChart*
/// @param parent QGraphicsItem*
///
bool q_polarchart_is_visible_to(const void* self, const void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QPolarChart*
/// @param visible bool
///
void q_polarchart_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QPolarChart*
///
void q_polarchart_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QPolarChart*
///
void q_polarchart_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_enabled(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_selected(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QPolarChart*
/// @param selected bool
///
void q_polarchart_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self const QPolarChart*
///
bool q_polarchart_accept_drops(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QPolarChart*
/// @param on bool
///
void q_polarchart_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self const QPolarChart*
///
double q_polarchart_opacity(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self const QPolarChart*
///
double q_polarchart_effective_opacity(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QPolarChart*
/// @param opacity double
///
void q_polarchart_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self const QPolarChart*
///
QGraphicsEffect* q_polarchart_graphics_effect(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QPolarChart*
/// @param effect QGraphicsEffect*
///
void q_polarchart_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self const QPolarChart*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_polarchart_accepted_mouse_buttons(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QPolarChart*
/// @param buttons flag of enum Qt__MouseButton
///
void q_polarchart_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self const QPolarChart*
///
bool q_polarchart_accept_hover_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self const QPolarChart*
///
bool q_polarchart_accept_touch_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self const QPolarChart*
///
bool q_polarchart_filters_child_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self const QPolarChart*
///
bool q_polarchart_handles_child_events(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QPolarChart*
/// @param enabled bool
///
void q_polarchart_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_active(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QPolarChart*
/// @param active bool
///
void q_polarchart_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self const QPolarChart*
///
bool q_polarchart_has_focus(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QPolarChart*
///
void q_polarchart_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QPolarChart*
///
void q_polarchart_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_focus_proxy(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
///
void q_polarchart_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_focus_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_focus_scope_item(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QPolarChart*
///
void q_polarchart_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QPolarChart*
///
void q_polarchart_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QPolarChart*
///
void q_polarchart_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QPolarChart*
///
void q_polarchart_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self const QPolarChart*
///
QPointF* q_polarchart_pos(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self const QPolarChart*
///
double q_polarchart_x(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QPolarChart*
/// @param x double
///
void q_polarchart_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self const QPolarChart*
///
double q_polarchart_y(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QPolarChart*
/// @param y double
///
void q_polarchart_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self const QPolarChart*
///
QPointF* q_polarchart_scene_pos(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QPolarChart*
/// @param pos QPointF*
///
void q_polarchart_set_pos(void* self, const void* pos);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
///
void q_polarchart_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QPolarChart*
/// @param dx double
/// @param dy double
///
void q_polarchart_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
///
void q_polarchart_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_polarchart_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self const QPolarChart*
///
QTransform* q_polarchart_transform(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self const QPolarChart*
///
QTransform* q_polarchart_scene_transform(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self const QPolarChart*
/// @param viewportTransform QTransform*
///
QTransform* q_polarchart_device_transform(const void* self, const void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self const QPolarChart*
/// @param other QGraphicsItem*
///
QTransform* q_polarchart_item_transform(const void* self, const void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QPolarChart*
/// @param matrix QTransform*
///
void q_polarchart_set_transform(void* self, const void* matrix);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QPolarChart*
///
void q_polarchart_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QPolarChart*
/// @param angle double
///
void q_polarchart_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self const QPolarChart*
///
double q_polarchart_rotation(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QPolarChart*
/// @param scale double
///
void q_polarchart_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self const QPolarChart*
///
double q_polarchart_scale(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QGraphicsTransform*
///
libqt_list q_polarchart_transformations(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QPolarChart*
/// @param transformations libqt_list of QGraphicsTransform*
///
void q_polarchart_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self const QPolarChart*
///
QPointF* q_polarchart_transform_origin_point(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QPolarChart*
/// @param origin QPointF*
///
void q_polarchart_set_transform_origin_point(void* self, const void* origin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QPolarChart*
/// @param ax double
/// @param ay double
///
void q_polarchart_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self const QPolarChart*
///
double q_polarchart_z_value(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QPolarChart*
/// @param z double
///
void q_polarchart_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QPolarChart*
/// @param sibling QGraphicsItem*
///
void q_polarchart_stack_before(void* self, const void* sibling);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_children_bounding_rect(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_scene_bounding_rect(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_clipped(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self const QPolarChart*
///
QPainterPath* q_polarchart_clip_path(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self const QPolarChart*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_polarchart_colliding_items(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_obscured(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
bool q_polarchart_is_obscured2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self const QPolarChart*
/// @param itemToDeviceTransform QTransform*
///
QRegion* q_polarchart_bounding_region(const void* self, const void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self const QPolarChart*
///
double q_polarchart_bounding_region_granularity(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QPolarChart*
/// @param granularity double
///
void q_polarchart_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QPolarChart*
///
void q_polarchart_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
void q_polarchart_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_polarchart_map_to_item(const void* self, const void* item, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_to_parent(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_to_scene(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QPolygonF* q_polarchart_map_to_item2(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QPolygonF* q_polarchart_map_to_parent2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QPolygonF* q_polarchart_map_to_scene2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_to_item(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_to_parent(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_to_scene(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_polarchart_map_to_item3(const void* self, const void* item, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QPolarChart*
/// @param polygon QPolygonF*
///
QPolygonF* q_polarchart_map_to_parent3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QPolarChart*
/// @param polygon QPolygonF*
///
QPolygonF* q_polarchart_map_to_scene3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_to_item4(const void* self, const void* item, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_to_parent4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_to_scene4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_polarchart_map_from_item(const void* self, const void* item, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_from_parent(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_from_scene(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QPolygonF* q_polarchart_map_from_item2(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QPolygonF* q_polarchart_map_from_parent2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QPolygonF* q_polarchart_map_from_scene2(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_from_item(const void* self, const void* item, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_from_parent(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_from_scene(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param polygon QPolygonF*
///
QPolygonF* q_polarchart_map_from_item3(const void* self, const void* item, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QPolarChart*
/// @param polygon QPolygonF*
///
QPolygonF* q_polarchart_map_from_parent3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QPolarChart*
/// @param polygon QPolygonF*
///
QPolygonF* q_polarchart_map_from_scene3(const void* self, const void* polygon);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_from_item4(const void* self, const void* item, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_from_parent4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_from_scene4(const void* self, const void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_to_item5(const void* self, const void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_to_parent5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_to_scene5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_polarchart_map_to_item6(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_polarchart_map_to_parent6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_polarchart_map_to_scene6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_to_item2(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_to_parent2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_to_scene2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_from_item5(const void* self, const void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_from_parent5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_from_scene5(const void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_polarchart_map_from_item6(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_polarchart_map_from_parent6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QPolygonF* q_polarchart_map_from_scene6(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_from_item2(const void* self, const void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_from_parent2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self const QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_from_scene2(const void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self const QPolarChart*
/// @param child QGraphicsItem*
///
bool q_polarchart_is_ancestor_of(const void* self, const void* child);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self const QPolarChart*
/// @param other QGraphicsItem*
///
QGraphicsItem* q_polarchart_common_ancestor_item(const void* self, const void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_under_mouse(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self const QPolarChart*
/// @param key int
///
QVariant* q_polarchart_data(const void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QPolarChart*
/// @param key int
/// @param value QVariant*
///
void q_polarchart_set_data(void* self, int key, const void* value);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self const QPolarChart*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_polarchart_input_method_hints(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QPolarChart*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_polarchart_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QPolarChart*
/// @param filterItem QGraphicsItem*
///
void q_polarchart_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QPolarChart*
/// @param filterItem QGraphicsItem*
///
void q_polarchart_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QPolarChart*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
///
void q_polarchart_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QPolarChart*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
///
void q_polarchart_set_cache_mode2(void* self, int32_t mode, const void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self const QPolarChart*
/// @param blockingPanel QGraphicsItem**
///
bool q_polarchart_is_blocked_by_modal_panel1(const void* self, void** blockingPanel);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QPolarChart*
/// @param focusReason enum Qt__FocusReason
///
void q_polarchart_set_focus1(void* self, int32_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_ensure_visible1(void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param rect QRectF*
/// @param xmargin int
///
void q_polarchart_ensure_visible22(void* self, const void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_polarchart_ensure_visible3(void* self, const void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
///
void q_polarchart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
///
void q_polarchart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self const QPolarChart*
/// @param other QGraphicsItem*
/// @param ok bool*
///
QTransform* q_polarchart_item_transform2(const void* self, const void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QPolarChart*
/// @param matrix QTransform*
/// @param combine bool
///
void q_polarchart_set_transform2(void* self, const void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self const QPolarChart*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_polarchart_colliding_items1(const void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self const QPolarChart*
/// @param rect QRectF*
///
bool q_polarchart_is_obscured1(const void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_update1(void* self, const void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QPolarChart*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
///
void q_polarchart_scroll3(void* self, double dx, double dy, const void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QPolarChart*
/// @param policy QSizePolicy*
///
void q_polarchart_set_size_policy(void* self, const void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QPolarChart*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_polarchart_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self const QPolarChart*
///
QSizePolicy* q_polarchart_size_policy(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_set_minimum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QPolarChart*
/// @param w double
/// @param h double
///
void q_polarchart_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self const QPolarChart*
///
QSizeF* q_polarchart_minimum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QPolarChart*
/// @param width double
///
void q_polarchart_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self const QPolarChart*
///
double q_polarchart_minimum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QPolarChart*
/// @param height double
///
void q_polarchart_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self const QPolarChart*
///
double q_polarchart_minimum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_set_preferred_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QPolarChart*
/// @param w double
/// @param h double
///
void q_polarchart_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self const QPolarChart*
///
QSizeF* q_polarchart_preferred_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QPolarChart*
/// @param width double
///
void q_polarchart_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self const QPolarChart*
///
double q_polarchart_preferred_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QPolarChart*
/// @param height double
///
void q_polarchart_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self const QPolarChart*
///
double q_polarchart_preferred_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_set_maximum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QPolarChart*
/// @param w double
/// @param h double
///
void q_polarchart_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self const QPolarChart*
///
QSizeF* q_polarchart_maximum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QPolarChart*
/// @param width double
///
void q_polarchart_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self const QPolarChart*
///
double q_polarchart_maximum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QPolarChart*
/// @param height double
///
void q_polarchart_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self const QPolarChart*
///
double q_polarchart_maximum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_geometry(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_contents_rect(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QPolarChart*
/// @param which enum Qt__SizeHint
///
QSizeF* q_polarchart_effective_size_hint(const void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self const QPolarChart*
///
QGraphicsLayoutItem* q_polarchart_parent_layout_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QPolarChart*
/// @param parent QGraphicsLayoutItem*
///
void q_polarchart_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self const QPolarChart*
///
QGraphicsItem* q_polarchart_graphics_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self const QPolarChart*
///
bool q_polarchart_owned_by_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QPolarChart*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_polarchart_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QPolarChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_polarchart_effective_size_hint2(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_set_geometry(void* self, const void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_super_set_geometry(void* self, const void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QRectF* rect)
///
void q_polarchart_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_polarchart_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_polarchart_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback void func(QPolarChart* self, double* left, double* top, double* right, double* bottom)
///
void q_polarchart_on_get_contents_margins(const void* self, void (*callback)(const void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
int32_t q_polarchart_type(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
int32_t q_polarchart_super_type(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback int32_t func(QPolarChart* self)
///
void q_polarchart_on_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_polarchart_paint(void* self, void* painter, const void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_polarchart_super_paint(void* self, void* painter, const void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_polarchart_on_paint(void* self, void (*callback)(void*, void*, const void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_polarchart_paint_window_frame(void* self, void* painter, const void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_polarchart_super_paint_window_frame(void* self, void* painter, const void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_polarchart_on_paint_window_frame(void* self, void (*callback)(void*, void*, const void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_bounding_rect(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
QRectF* q_polarchart_super_bounding_rect(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QRectF* func(QPolarChart* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_bounding_rect(const void* self, QRectF* (*callback)(const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
QPainterPath* q_polarchart_shape(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
QPainterPath* q_polarchart_super_shape(const void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QPainterPath* func(QPolarChart* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_shape(const void* self, QPainterPath* (*callback)(const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param option QStyleOption*
///
void q_polarchart_init_style_option(const void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param option QStyleOption*
///
void q_polarchart_super_init_style_option(const void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback void func(QPolarChart* self, QStyleOption* option)
///
void q_polarchart_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_polarchart_size_hint(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_polarchart_super_size_hint(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QSizeF* func(QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_size_hint(const void* self, QSizeF* (*callback)(const void*, int32_t, const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_super_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_update_geometry(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_polarchart_item_change(void* self, int32_t change, const void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_polarchart_super_item_change(void* self, int32_t change, const void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param propertyName const char*
/// @param value QVariant*
///
QVariant* q_polarchart_property_change(void* self, const char* propertyName, const void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param propertyName const char*
/// @param value QVariant*
///
QVariant* q_polarchart_super_property_change(void* self, const char* propertyName, const void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, const char* propertyName, QVariant* value)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_property_change(void* self, QVariant* (*callback)(void*, const char*, const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
bool q_polarchart_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
bool q_polarchart_super_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_scene_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param e QEvent*
///
bool q_polarchart_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param e QEvent*
///
bool q_polarchart_super_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QEvent* e)
///
void q_polarchart_on_window_frame_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_polarchart_window_frame_section_at(const void* self, const void* pos);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_polarchart_super_window_frame_section_at(const void* self, const void* pos);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback int32_t func(QPolarChart* self, QPointF* pos)
///
void q_polarchart_on_window_frame_section_at(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
bool q_polarchart_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
bool q_polarchart_super_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_super_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QCloseEvent*
///
void q_polarchart_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QCloseEvent*
///
void q_polarchart_super_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QCloseEvent* event)
///
void q_polarchart_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QFocusEvent*
///
void q_polarchart_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QFocusEvent*
///
void q_polarchart_super_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QFocusEvent* event)
///
void q_polarchart_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param next bool
///
bool q_polarchart_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param next bool
///
bool q_polarchart_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, bool next)
///
void q_polarchart_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QFocusEvent*
///
void q_polarchart_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QFocusEvent*
///
void q_polarchart_super_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QFocusEvent* event)
///
void q_polarchart_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QHideEvent*
///
void q_polarchart_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QHideEvent*
///
void q_polarchart_super_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QHideEvent* event)
///
void q_polarchart_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMoveEvent*
///
void q_polarchart_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMoveEvent*
///
void q_polarchart_super_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneMoveEvent* event)
///
void q_polarchart_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_super_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_polish_event(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneResizeEvent*
///
void q_polarchart_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneResizeEvent*
///
void q_polarchart_super_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneResizeEvent* event)
///
void q_polarchart_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QShowEvent*
///
void q_polarchart_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QShowEvent*
///
void q_polarchart_super_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QShowEvent* event)
///
void q_polarchart_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_polarchart_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_polarchart_super_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneHoverEvent* event)
///
void q_polarchart_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_polarchart_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_polarchart_super_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneHoverEvent* event)
///
void q_polarchart_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_super_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_grab_mouse_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_super_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_super_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_grab_keyboard_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_super_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_polarchart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_polarchart_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QObject* watched, QEvent* event)
///
void q_polarchart_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QTimerEvent*
///
void q_polarchart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QTimerEvent*
///
void q_polarchart_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QTimerEvent* event)
///
void q_polarchart_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QChildEvent*
///
void q_polarchart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QChildEvent*
///
void q_polarchart_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QChildEvent* event)
///
void q_polarchart_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QEvent*
///
void q_polarchart_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QEvent* event)
///
void q_polarchart_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QMetaMethod* signal)
///
void q_polarchart_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QMetaMethod* signal)
///
void q_polarchart_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param phase int
///
void q_polarchart_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param phase int
///
void q_polarchart_super_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, int phase)
///
void q_polarchart_on_advance(void* self, void (*callback)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param point QPointF*
///
bool q_polarchart_contains(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param point QPointF*
///
bool q_polarchart_super_contains(const void* self, const void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self, QPointF* point)
///
void q_polarchart_on_contains(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_collides_with_item(const void* self, const void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_super_collides_with_item(const void* self, const void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode)
///
void q_polarchart_on_collides_with_item(const void* self, bool (*callback)(const void*, const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_collides_with_path(const void* self, const void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_super_collides_with_path(const void* self, const void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode)
///
void q_polarchart_on_collides_with_path(const void* self, bool (*callback)(const void*, const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
///
bool q_polarchart_is_obscured_by(const void* self, const void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param item QGraphicsItem*
///
bool q_polarchart_super_is_obscured_by(const void* self, const void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self, QGraphicsItem* item)
///
void q_polarchart_on_is_obscured_by(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
QPainterPath* q_polarchart_opaque_area(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
QPainterPath* q_polarchart_super_opaque_area(const void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QPainterPath* func(QPolarChart* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_opaque_area(const void* self, QPainterPath* (*callback)(const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_polarchart_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_polarchart_super_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QGraphicsItem* watched, QEvent* event)
///
void q_polarchart_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_polarchart_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_polarchart_super_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneContextMenuEvent* event)
///
void q_polarchart_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_super_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_polarchart_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_super_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_polarchart_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_super_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_polarchart_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_polarchart_super_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_polarchart_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_polarchart_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_polarchart_super_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneHoverEvent* event)
///
void q_polarchart_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QKeyEvent*
///
void q_polarchart_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QKeyEvent*
///
void q_polarchart_super_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QKeyEvent* event)
///
void q_polarchart_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QKeyEvent*
///
void q_polarchart_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QKeyEvent*
///
void q_polarchart_super_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QKeyEvent* event)
///
void q_polarchart_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_super_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneMouseEvent* event)
///
void q_polarchart_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_super_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneMouseEvent* event)
///
void q_polarchart_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_super_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneMouseEvent* event)
///
void q_polarchart_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_polarchart_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneMouseEvent* event)
///
void q_polarchart_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneWheelEvent*
///
void q_polarchart_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QGraphicsSceneWheelEvent*
///
void q_polarchart_super_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsSceneWheelEvent* event)
///
void q_polarchart_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param event QInputMethodEvent*
///
void q_polarchart_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param event QInputMethodEvent*
///
void q_polarchart_super_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QInputMethodEvent* event)
///
void q_polarchart_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_polarchart_input_method_query(const void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_polarchart_super_input_method_query(const void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param extension enum QGraphicsItem__Extension
///
bool q_polarchart_supports_extension(const void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param extension enum QGraphicsItem__Extension
///
bool q_polarchart_super_supports_extension(const void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self, enum QGraphicsItem__Extension extension)
///
void q_polarchart_on_supports_extension(const void* self, bool (*callback)(const void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_polarchart_set_extension(void* self, int32_t extension, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_polarchart_super_set_extension(void* self, int32_t extension, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, enum QGraphicsItem__Extension extension, QVariant* variant)
///
void q_polarchart_on_set_extension(void* self, void (*callback)(void*, int32_t, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param variant QVariant*
///
QVariant* q_polarchart_extension(const void* self, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param variant QVariant*
///
QVariant* q_polarchart_super_extension(const void* self, const void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, QVariant* variant)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_polarchart_on_extension(const void* self, QVariant* (*callback)(const void*, const void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
bool q_polarchart_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
bool q_polarchart_super_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self)
///
void q_polarchart_on_is_empty(const void* self, bool (*callback)(const void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_super_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
QObject* q_polarchart_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
QObject* q_polarchart_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback QObject* func(QPolarChart* self)
///
void q_polarchart_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
///
int32_t q_polarchart_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
///
int32_t q_polarchart_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback int32_t func(QPolarChart* self)
///
void q_polarchart_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param signal const char*
///
int32_t q_polarchart_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param signal const char*
///
int32_t q_polarchart_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback int32_t func(QPolarChart* self, const char* signal)
///
void q_polarchart_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPolarChart*
/// @param signal QMetaMethod*
///
bool q_polarchart_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param signal QMetaMethod*
///
bool q_polarchart_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPolarChart*
/// @param callback bool func(QPolarChart* self, QMetaMethod* signal)
///
void q_polarchart_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_super_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_add_to_index(void* self, void (*callback)(void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_super_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_remove_from_index(void* self, void (*callback)(void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
void q_polarchart_super_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self)
///
void q_polarchart_on_prepare_geometry_change(void* self, void (*callback)(void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
///
void q_polarchart_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
///
void q_polarchart_super_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QGraphicsItem* item)
///
void q_polarchart_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param ownedByLayout bool
///
void q_polarchart_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param ownedByLayout bool
///
void q_polarchart_super_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, bool ownedByLayout)
///
void q_polarchart_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, const char* objectName)
///
void q_polarchart_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#dtor.QPolarChart)
///
/// Delete this object from C++ memory.
///
/// @param self QPolarChart*
///
void q_polarchart_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#public-types)

typedef enum {
    QPOLARCHART_POLARORIENTATION_POLARORIENTATIONRADIAL = 1,
    QPOLARCHART_POLARORIENTATION_POLARORIENTATIONANGULAR = 2
} QPolarChart__PolarOrientation;

#endif
