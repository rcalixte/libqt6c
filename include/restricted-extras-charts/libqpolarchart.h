#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQPOLARCHART_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQPOLARCHART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QPolarChart* q_polarchart_new3(void* parent, int64_t wFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPolarChart*
///
const QMetaObject* q_polarchart_meta_object(void* self);

/// @param self QPolarChart*
/// @param param1 const char*
///
void* q_polarchart_metacast(void* self, const char* param1);

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
int32_t q_polarchart_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
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
/// @param self QPolarChart*
///
libqt_list /* of QAbstractAxis* */ q_polarchart_axes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axisPolarOrientation)
///
/// @param axis QAbstractAxis*
///
/// @return enum QPolarChart__PolarOrientation
///
int32_t q_polarchart_axis_polar_orientation(void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_polarchart_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_polarchart_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
///
/// @param self QPolarChart*
/// @param polarOrientation flag of enum QPolarChart__PolarOrientation
///
libqt_list /* of QAbstractAxis* */ q_polarchart_axes1(void* self, int32_t polarOrientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolarchart-qtcharts.html#axes)
///
/// @param self QPolarChart*
/// @param polarOrientation flag of enum QPolarChart__PolarOrientation
/// @param series QAbstractSeries*
///
libqt_list /* of QAbstractAxis* */ q_polarchart_axes2(void* self, int32_t polarOrientation, void* series);

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
/// @param self QPolarChart*
///
libqt_list /* of QAbstractSeries* */ q_polarchart_series(void* self);

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
/// @param self QPolarChart*
///
QAbstractAxis* q_polarchart_axis_x(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// @param self QPolarChart*
///
QAbstractAxis* q_polarchart_axis_y(void* self);

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
/// @param self QPolarChart*
///
/// @return enum QChart__ChartTheme
///
int32_t q_polarchart_theme(void* self);

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
/// Caller is responsible for freeing the returned memory
///
/// @param self QPolarChart*
///
const char* q_polarchart_title(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
///
/// @param self QPolarChart*
/// @param font QFont*
///
void q_polarchart_set_title_font(void* self, void* font);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleFont)
///
/// @param self QPolarChart*
///
QFont* q_polarchart_title_font(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
///
/// @param self QPolarChart*
/// @param brush QBrush*
///
void q_polarchart_set_title_brush(void* self, void* brush);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#titleBrush)
///
/// @param self QPolarChart*
///
QBrush* q_polarchart_title_brush(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
///
/// @param self QPolarChart*
/// @param brush QBrush*
///
void q_polarchart_set_background_brush(void* self, void* brush);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
///
/// @param self QPolarChart*
///
QBrush* q_polarchart_background_brush(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
///
/// @param self QPolarChart*
/// @param pen QPen*
///
void q_polarchart_set_background_pen(void* self, void* pen);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
///
/// @param self QPolarChart*
///
QPen* q_polarchart_background_pen(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_background_visible(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_drop_shadow_enabled(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_background_roundness(void* self);

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
/// @param self QPolarChart*
///
/// @return flag of enum QChart__AnimationOption
///
int32_t q_polarchart_animation_options(void* self);

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
/// @param self QPolarChart*
///
int32_t q_polarchart_animation_duration(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
///
/// @param self QPolarChart*
/// @param curve QEasingCurve*
///
void q_polarchart_set_animation_easing_curve(void* self, void* curve);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
///
/// @param self QPolarChart*
///
QEasingCurve* q_polarchart_animation_easing_curve(void* self);

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
void q_polarchart_zoom_in2(void* self, void* rect);

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
/// @param self QPolarChart*
///
QLegend* q_polarchart_legend(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setMargins)
///
/// @param self QPolarChart*
/// @param margins QMargins*
///
void q_polarchart_set_margins(void* self, void* margins);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#margins)
///
/// @param self QPolarChart*
///
QMargins* q_polarchart_margins(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotArea)
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_plot_area(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_set_plot_area(void* self, void* rect);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
///
/// @param self QPolarChart*
/// @param brush QBrush*
///
void q_polarchart_set_plot_area_background_brush(void* self, void* brush);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
///
/// @param self QPolarChart*
///
QBrush* q_polarchart_plot_area_background_brush(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
///
/// @param self QPolarChart*
/// @param pen QPen*
///
void q_polarchart_set_plot_area_background_pen(void* self, void* pen);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
///
/// @param self QPolarChart*
///
QPen* q_polarchart_plot_area_background_pen(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_plot_area_background_visible(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_localize_numbers(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#setLocale)
///
/// @param self QPolarChart*
/// @param locale QLocale*
///
void q_polarchart_set_locale(void* self, void* locale);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#locale)
///
/// @param self QPolarChart*
///
QLocale* q_polarchart_locale(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// @param self QPolarChart*
/// @param position QPointF*
///
QPointF* q_polarchart_map_to_value(void* self, void* position);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// @param self QPolarChart*
/// @param value QPointF*
///
QPointF* q_polarchart_map_to_position(void* self, void* value);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#chartType)
///
/// @param self QPolarChart*
///
/// @return enum QChart__ChartType
///
int32_t q_polarchart_chart_type(void* self);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// @param self QPolarChart*
/// @param plotArea QRectF*
///
void q_polarchart_plot_area_changed(void* self, void* plotArea);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QRectF* plotArea)
///
void q_polarchart_on_plot_area_changed(void* self, void (*callback)(void*, void*));

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
/// @param self QPolarChart*
/// @param series QAbstractSeries*
///
QAbstractAxis* q_polarchart_axis_x1(void* self, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// @param self QPolarChart*
/// @param series QAbstractSeries*
///
QAbstractAxis* q_polarchart_axis_y1(void* self, void* series);

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
QPointF* q_polarchart_map_to_value2(void* self, void* position, void* series);

/// Inherited from QChart
///
/// [Upstream resources](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// @param self QPolarChart*
/// @param value QPointF*
/// @param series QAbstractSeries*
///
QPointF* q_polarchart_map_to_position2(void* self, void* value, void* series);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// @param self QPolarChart*
///
QGraphicsLayout* q_polarchart_layout(void* self);

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
/// @param self QPolarChart*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_polarchart_layout_direction(void* self);

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
/// @param self QPolarChart*
///
QStyle* q_polarchart_style(void* self);

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
/// @param self QPolarChart*
///
QFont* q_polarchart_font(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// @param self QPolarChart*
/// @param font QFont*
///
void q_polarchart_set_font(void* self, void* font);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// @param self QPolarChart*
///
QPalette* q_polarchart_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// @param self QPolarChart*
/// @param palette QPalette*
///
void q_polarchart_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// @param self QPolarChart*
///
bool q_polarchart_auto_fill_background(void* self);

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
void q_polarchart_resize(void* self, void* size);

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
/// @param self QPolarChart*
///
QSizeF* q_polarchart_size(void* self);

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
/// @param self QPolarChart*
///
QRectF* q_polarchart_rect(void* self);

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
/// @param self QPolarChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_polarchart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

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
/// @param self QPolarChart*
///
QRectF* q_polarchart_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// @param self QPolarChart*
///
/// @return flag of enum Qt__WindowType
///
int64_t q_polarchart_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// @param self QPolarChart*
///
/// @return enum Qt__WindowType
///
int64_t q_polarchart_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// @param self QPolarChart*
/// @param wFlags flag of enum Qt__WindowType
///
void q_polarchart_set_window_flags(void* self, int64_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_active_window(void* self);

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
/// Caller is responsible for freeing the returned memory
///
/// @param self QPolarChart*
///
const char* q_polarchart_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// @param self QPolarChart*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_polarchart_focus_policy(void* self);

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
/// @param self QPolarChart*
///
QGraphicsWidget* q_polarchart_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QPolarChart*
/// @param sequence QKeySequence*
///
int32_t q_polarchart_grab_shortcut(void* self, void* sequence);

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
/// @param actions libqt_list /* of QAction* */
///
void q_polarchart_add_actions(void* self, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// @param self QPolarChart*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
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
/// @param self QPolarChart*
///
libqt_list /* of QAction* */ q_polarchart_actions(void* self);

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
/// @param self QPolarChart*
/// @param attribute enum Qt__WidgetAttribute
///
bool q_polarchart_test_attribute(void* self, int32_t attribute);

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
int32_t q_polarchart_grab_shortcut2(void* self, void* sequence, int32_t context);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QPolarChart*
/// @param type enum Qt__GestureType
///
void q_polarchart_grab_gesture(void* self, int64_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QPolarChart*
/// @param type enum Qt__GestureType
///
void q_polarchart_ungrab_gesture(void* self, int64_t type);

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
void q_polarchart_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPolarChart*
///
const char* q_polarchart_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPolarChart*
/// @param name char*
///
void q_polarchart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPolarChart*
///
bool q_polarchart_signals_blocked(void* self);

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
/// @param self QPolarChart*
///
QThread* q_polarchart_thread(void* self);

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
/// @param self QPolarChart*
///
libqt_list /* of QObject* */ q_polarchart_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_polarchart_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPolarChart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_polarchart_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_polarchart_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_polarchart_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPolarChart*
///
void q_polarchart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPolarChart*
///
void q_polarchart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPolarChart*
/// @param name const char*
/// @param value QVariant*
///
bool q_polarchart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPolarChart*
/// @param name const char*
///
QVariant* q_polarchart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPolarChart*
///
const char** q_polarchart_dynamic_property_names(void* self);

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
/// @param self QPolarChart*
///
const QBindingStorage* q_polarchart_binding_storage2(void* self);

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
/// @param self QPolarChart*
///
QObject* q_polarchart_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPolarChart*
/// @param classname const char*
///
bool q_polarchart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPolarChart*
///
void q_polarchart_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPolarChart*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_polarchart_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_polarchart_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPolarChart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_polarchart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
/// @param self QPolarChart*
///
QGraphicsScene* q_polarchart_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self QPolarChart*
///
QGraphicsObject* q_polarchart_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self QPolarChart*
///
QGraphicsWidget* q_polarchart_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self QPolarChart*
///
QGraphicsWidget* q_polarchart_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self QPolarChart*
///
QGraphicsWidget* q_polarchart_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_panel(void* self);

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
/// @param self QPolarChart*
///
libqt_list /* of QGraphicsItem* */ q_polarchart_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_panel(void* self);

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
/// @param self QPolarChart*
///
const QGraphicsObject* q_polarchart_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self QPolarChart*
///
QGraphicsItemGroup* q_polarchart_group(void* self);

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
/// @param self QPolarChart*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
///
int32_t q_polarchart_flags(void* self);

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
/// @param self QPolarChart*
///
/// @return enum QGraphicsItem__CacheMode
///
int32_t q_polarchart_cache_mode(void* self);

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
/// @param self QPolarChart*
///
/// @return enum QGraphicsItem__PanelModality
///
int32_t q_polarchart_panel_modality(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPolarChart*
///
const char* q_polarchart_tool_tip(void* self);

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
/// @param self QPolarChart*
///
QCursor* q_polarchart_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QPolarChart*
/// @param cursor QCursor*
///
void q_polarchart_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self QPolarChart*
///
bool q_polarchart_has_cursor(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self QPolarChart*
/// @param parent QGraphicsItem*
///
bool q_polarchart_is_visible_to(void* self, void* parent);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_enabled(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_selected(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_accept_drops(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self QPolarChart*
///
double q_polarchart_effective_opacity(void* self);

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
/// @param self QPolarChart*
///
QGraphicsEffect* q_polarchart_graphics_effect(void* self);

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
/// @param self QPolarChart*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_polarchart_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QPolarChart*
/// @param buttons flag of enum Qt__MouseButton
///
void q_polarchart_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self QPolarChart*
///
bool q_polarchart_accept_hover_events(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_accept_touch_events(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_filters_child_events(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_handles_child_events(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_active(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_has_focus(void* self);

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
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_focus_proxy(void* self);

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
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_focus_scope_item(void* self);

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
/// @param self QPolarChart*
///
QPointF* q_polarchart_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self QPolarChart*
///
double q_polarchart_x(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_y(void* self);

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
/// @param self QPolarChart*
///
QPointF* q_polarchart_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QPolarChart*
/// @param pos QPointF*
///
void q_polarchart_set_pos(void* self, void* pos);

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
/// @param self QPolarChart*
///
QTransform* q_polarchart_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self QPolarChart*
///
QTransform* q_polarchart_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self QPolarChart*
/// @param viewportTransform QTransform*
///
QTransform* q_polarchart_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QPolarChart*
/// @param other QGraphicsItem*
///
QTransform* q_polarchart_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QPolarChart*
/// @param matrix QTransform*
///
void q_polarchart_set_transform(void* self, void* matrix);

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
/// @param self QPolarChart*
///
double q_polarchart_rotation(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self QPolarChart*
///
libqt_list /* of QGraphicsTransform* */ q_polarchart_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QPolarChart*
/// @param transformations libqt_list /* of QGraphicsTransform* */
///
void q_polarchart_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self QPolarChart*
///
QPointF* q_polarchart_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QPolarChart*
/// @param origin QPointF*
///
void q_polarchart_set_transform_origin_point(void* self, void* origin);

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
/// @param self QPolarChart*
///
double q_polarchart_z_value(void* self);

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
void q_polarchart_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self QPolarChart*
///
QPainterPath* q_polarchart_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QPolarChart*
///
libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
bool q_polarchart_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self QPolarChart*
/// @param itemToDeviceTransform QTransform*
///
QRegion* q_polarchart_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self QPolarChart*
///
double q_polarchart_bounding_region_granularity(void* self);

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
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_polarchart_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_to_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_polarchart_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QPolarChart*
/// @param point QPointF*
///
QPointF* q_polarchart_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
QRectF* q_polarchart_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_from_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QPolarChart*
/// @param path QPainterPath*
///
QPainterPath* q_polarchart_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_to_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_to_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_from_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
///
QPointF* q_polarchart_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QPolarChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_polarchart_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self QPolarChart*
/// @param child QGraphicsItem*
///
bool q_polarchart_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self QPolarChart*
/// @param other QGraphicsItem*
///
QGraphicsItem* q_polarchart_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self QPolarChart*
///
bool q_polarchart_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self QPolarChart*
/// @param key int
///
QVariant* q_polarchart_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QPolarChart*
/// @param key int
/// @param value QVariant*
///
void q_polarchart_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self QPolarChart*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t q_polarchart_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QPolarChart*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_polarchart_set_input_method_hints(void* self, int64_t hints);

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
void q_polarchart_set_cache_mode2(void* self, int32_t mode, void* cacheSize);

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
void q_polarchart_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param rect QRectF*
/// @param xmargin int
///
void q_polarchart_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QPolarChart*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_polarchart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

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
/// @param self QPolarChart*
/// @param other QGraphicsItem*
/// @param ok bool*
///
QTransform* q_polarchart_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QPolarChart*
/// @param matrix QTransform*
/// @param combine bool
///
void q_polarchart_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QPolarChart*
/// @param mode enum Qt__ItemSelectionMode
///
libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items1(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
bool q_polarchart_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QPolarChart*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
///
void q_polarchart_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QPolarChart*
/// @param policy QSizePolicy*
///
void q_polarchart_set_size_policy(void* self, void* policy);

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
/// @param self QPolarChart*
///
QSizePolicy* q_polarchart_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_set_minimum_size(void* self, void* size);

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
/// @param self QPolarChart*
///
QSizeF* q_polarchart_minimum_size(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_minimum_width(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_set_preferred_size(void* self, void* size);

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
/// @param self QPolarChart*
///
QSizeF* q_polarchart_preferred_size(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_preferred_width(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QPolarChart*
/// @param size QSizeF*
///
void q_polarchart_set_maximum_size(void* self, void* size);

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
/// @param self QPolarChart*
///
QSizeF* q_polarchart_maximum_size(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_maximum_width(void* self);

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
/// @param self QPolarChart*
///
double q_polarchart_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QPolarChart*
/// @param which enum Qt__SizeHint
///
QSizeF* q_polarchart_effective_size_hint(void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QPolarChart*
///
QGraphicsLayoutItem* q_polarchart_parent_layout_item(void* self);

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
/// @param self QPolarChart*
///
bool q_polarchart_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QPolarChart*
///
QGraphicsItem* q_polarchart_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QPolarChart*
///
bool q_polarchart_owned_by_layout(void* self);

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
/// @param self QPolarChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_polarchart_effective_size_hint2(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param rect QRectF*
///
void q_polarchart_qbase_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QRectF* rect)
///
void q_polarchart_on_set_geometry(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_polarchart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_polarchart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, double* left, double* top, double* right, double* bottom)
///
void q_polarchart_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
int32_t q_polarchart_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
int32_t q_polarchart_qbase_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback int32_t func()
///
void q_polarchart_on_type(void* self, int32_t (*callback)());

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
void q_polarchart_paint(void* self, void* painter, void* option, void* widget);

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
void q_polarchart_qbase_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_polarchart_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

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
void q_polarchart_paint_window_frame(void* self, void* painter, void* option, void* widget);

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
void q_polarchart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_polarchart_on_paint_window_frame(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
QRectF* q_polarchart_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QRectF* func()
///
void q_polarchart_on_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
QPainterPath* q_polarchart_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
QPainterPath* q_polarchart_qbase_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QPainterPath* func()
///
void q_polarchart_on_shape(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param option QStyleOption*
///
void q_polarchart_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param option QStyleOption*
///
void q_polarchart_qbase_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QStyleOption* option)
///
void q_polarchart_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_polarchart_size_hint(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_polarchart_qbase_size_hint(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QSizeF* func(QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint)
///
void q_polarchart_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*));

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
void q_polarchart_qbase_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func()
///
void q_polarchart_on_update_geometry(void* self, void (*callback)());

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
QVariant* q_polarchart_item_change(void* self, int32_t change, void* value);

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
QVariant* q_polarchart_qbase_item_change(void* self, int32_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value)
///
void q_polarchart_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*));

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
QVariant* q_polarchart_property_change(void* self, const char* propertyName, void* value);

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
QVariant* q_polarchart_qbase_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, const char* propertyName, QVariant* value)
///
void q_polarchart_on_property_change(void* self, QVariant* (*callback)(void*, const char*, void*));

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
bool q_polarchart_qbase_scene_event(void* self, void* event);

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
bool q_polarchart_qbase_window_frame_event(void* self, void* e);

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
/// @param self QPolarChart*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_polarchart_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_polarchart_qbase_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback int32_t func(QPolarChart* self, QPointF* pos)
///
void q_polarchart_on_window_frame_section_at(void* self, int32_t (*callback)(void*, void*));

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
bool q_polarchart_qbase_event(void* self, void* event);

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
void q_polarchart_qbase_change_event(void* self, void* event);

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
void q_polarchart_qbase_close_event(void* self, void* event);

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
void q_polarchart_qbase_focus_in_event(void* self, void* event);

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
bool q_polarchart_qbase_focus_next_prev_child(void* self, bool next);

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
void q_polarchart_qbase_focus_out_event(void* self, void* event);

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
void q_polarchart_qbase_hide_event(void* self, void* event);

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
void q_polarchart_qbase_move_event(void* self, void* event);

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
void q_polarchart_qbase_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func()
///
void q_polarchart_on_polish_event(void* self, void (*callback)());

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
void q_polarchart_qbase_resize_event(void* self, void* event);

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
void q_polarchart_qbase_show_event(void* self, void* event);

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
void q_polarchart_qbase_hover_move_event(void* self, void* event);

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
void q_polarchart_qbase_hover_leave_event(void* self, void* event);

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
void q_polarchart_qbase_grab_mouse_event(void* self, void* event);

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
void q_polarchart_qbase_ungrab_mouse_event(void* self, void* event);

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
void q_polarchart_qbase_grab_keyboard_event(void* self, void* event);

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
void q_polarchart_qbase_ungrab_keyboard_event(void* self, void* event);

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
bool q_polarchart_qbase_event_filter(void* self, void* watched, void* event);

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
void q_polarchart_qbase_timer_event(void* self, void* event);

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
void q_polarchart_qbase_child_event(void* self, void* event);

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
void q_polarchart_qbase_custom_event(void* self, void* event);

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
void q_polarchart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QMetaMethod* signal)
///
void q_polarchart_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
void q_polarchart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, QMetaMethod* signal)
///
void q_polarchart_on_disconnect_notify(void* self, void (*callback)(void*, void*));

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
void q_polarchart_qbase_advance(void* self, int phase);

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
/// @param self QPolarChart*
/// @param point QPointF*
///
bool q_polarchart_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param point QPointF*
///
bool q_polarchart_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QPointF* point)
///
void q_polarchart_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_qbase_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode)
///
void q_polarchart_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_polarchart_qbase_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode)
///
void q_polarchart_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
///
bool q_polarchart_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param item QGraphicsItem*
///
bool q_polarchart_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QGraphicsItem* item)
///
void q_polarchart_on_is_obscured_by(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
QPainterPath* q_polarchart_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
QPainterPath* q_polarchart_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QPainterPath* func()
///
void q_polarchart_on_opaque_area(void* self, QPainterPath* (*callback)());

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
bool q_polarchart_qbase_scene_event_filter(void* self, void* watched, void* event);

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
void q_polarchart_qbase_context_menu_event(void* self, void* event);

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
void q_polarchart_qbase_drag_enter_event(void* self, void* event);

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
void q_polarchart_qbase_drag_leave_event(void* self, void* event);

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
void q_polarchart_qbase_drag_move_event(void* self, void* event);

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
void q_polarchart_qbase_drop_event(void* self, void* event);

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
void q_polarchart_qbase_hover_enter_event(void* self, void* event);

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
void q_polarchart_qbase_key_press_event(void* self, void* event);

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
void q_polarchart_qbase_key_release_event(void* self, void* event);

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
void q_polarchart_qbase_mouse_press_event(void* self, void* event);

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
void q_polarchart_qbase_mouse_move_event(void* self, void* event);

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
void q_polarchart_qbase_mouse_release_event(void* self, void* event);

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
void q_polarchart_qbase_mouse_double_click_event(void* self, void* event);

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
void q_polarchart_qbase_wheel_event(void* self, void* event);

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
void q_polarchart_qbase_input_method_event(void* self, void* event);

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
/// @param self QPolarChart*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_polarchart_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_polarchart_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, enum Qt__InputMethodQuery query)
///
void q_polarchart_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param extension enum QGraphicsItem__Extension
///
bool q_polarchart_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param extension enum QGraphicsItem__Extension
///
bool q_polarchart_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, enum QGraphicsItem__Extension extension)
///
void q_polarchart_on_supports_extension(void* self, bool (*callback)(void*, int64_t));

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
void q_polarchart_set_extension(void* self, int64_t extension, void* variant);

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
void q_polarchart_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func(QPolarChart* self, enum QGraphicsItem__Extension extension, QVariant* variant)
///
void q_polarchart_on_set_extension(void* self, void (*callback)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param variant QVariant*
///
QVariant* q_polarchart_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param variant QVariant*
///
QVariant* q_polarchart_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QVariant* func(QPolarChart* self, QVariant* variant)
///
void q_polarchart_on_extension(void* self, QVariant* (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
bool q_polarchart_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
bool q_polarchart_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func()
///
void q_polarchart_on_is_empty(void* self, bool (*callback)());

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
void q_polarchart_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func()
///
void q_polarchart_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
QObject* q_polarchart_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
QObject* q_polarchart_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback QObject* func()
///
void q_polarchart_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
///
int32_t q_polarchart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
///
int32_t q_polarchart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback int32_t func()
///
void q_polarchart_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param signal const char*
///
int32_t q_polarchart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param signal const char*
///
int32_t q_polarchart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback int32_t func(QPolarChart* self, const char* signal)
///
void q_polarchart_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
bool q_polarchart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPolarChart*
/// @param signal QMetaMethod*
///
bool q_polarchart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback bool func(QPolarChart* self, QMetaMethod* signal)
///
void q_polarchart_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
void q_polarchart_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func()
///
void q_polarchart_on_add_to_index(void* self, void (*callback)());

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
void q_polarchart_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func()
///
void q_polarchart_on_remove_from_index(void* self, void (*callback)());

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
void q_polarchart_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPolarChart*
/// @param callback void func()
///
void q_polarchart_on_prepare_geometry_change(void* self, void (*callback)());

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
void q_polarchart_qbase_set_graphics_item(void* self, void* item);

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
void q_polarchart_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

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
