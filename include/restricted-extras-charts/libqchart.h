#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCHART_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCHART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html)

/// q_chart_new constructs a new QChart object.
///
QChart* q_chart_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html)

/// q_chart_new2 constructs a new QChart object.
///
/// @param parent QGraphicsItem*
///
QChart* q_chart_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html)

/// q_chart_new3 constructs a new QChart object.
///
/// @param parent QGraphicsItem*
/// @param wFlags flag of enum Qt__WindowType
///
QChart* q_chart_new3(void* parent, int32_t wFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QChart*
///
const QMetaObject* q_chart_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QChart*
/// @param callback const QMetaObject* func()
///
void q_chart_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QChart*
///
const QMetaObject* q_chart_qbase_meta_object(void* self);

/// @param self QChart*
/// @param param1 const char*
///
void* q_chart_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QChart*
/// @param callback void* func(QChart* self, const char* param1)
///
void q_chart_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QChart*
/// @param param1 const char*
///
void* q_chart_qbase_metacast(void* self, const char* param1);

/// @param self QChart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_chart_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QChart*
/// @param callback int32_t func(QChart* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_chart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QChart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_chart_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_chart_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#addSeries)
///
/// @param self QChart*
/// @param series QAbstractSeries*
///
void q_chart_add_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeSeries)
///
/// @param self QChart*
/// @param series QAbstractSeries*
///
void q_chart_remove_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeAllSeries)
///
/// @param self QChart*
///
void q_chart_remove_all_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#series)
///
/// @param self QChart*
///
/// @return libqt_list of QAbstractSeries*
///
libqt_list q_chart_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisX)
///
/// @param self QChart*
/// @param axis QAbstractAxis*
///
void q_chart_set_axis_x(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisY)
///
/// @param self QChart*
/// @param axis QAbstractAxis*
///
void q_chart_set_axis_y(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisX)
///
/// @param self QChart*
///
QAbstractAxis* q_chart_axis_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisY)
///
/// @param self QChart*
///
QAbstractAxis* q_chart_axis_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#addAxis)
///
/// @param self QChart*
/// @param axis QAbstractAxis*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_chart_add_axis(void* self, void* axis, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#removeAxis)
///
/// @param self QChart*
/// @param axis QAbstractAxis*
///
void q_chart_remove_axis(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
///
/// @param self QChart*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_chart_axes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#createDefaultAxes)
///
/// @param self QChart*
///
void q_chart_create_default_axes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTheme)
///
/// @param self QChart*
/// @param theme enum QChart__ChartTheme
///
void q_chart_set_theme(void* self, int32_t theme);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#theme)
///
/// @param self QChart*
///
/// @return enum QChart__ChartTheme
///
int32_t q_chart_theme(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitle)
///
/// @param self QChart*
/// @param title const char*
///
void q_chart_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QChart*
///
const char* q_chart_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitleFont)
///
/// @param self QChart*
/// @param font QFont*
///
void q_chart_set_title_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#titleFont)
///
/// @param self QChart*
///
QFont* q_chart_title_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setTitleBrush)
///
/// @param self QChart*
/// @param brush QBrush*
///
void q_chart_set_title_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#titleBrush)
///
/// @param self QChart*
///
QBrush* q_chart_title_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundBrush)
///
/// @param self QChart*
/// @param brush QBrush*
///
void q_chart_set_background_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundBrush)
///
/// @param self QChart*
///
QBrush* q_chart_background_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundPen)
///
/// @param self QChart*
/// @param pen QPen*
///
void q_chart_set_background_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundPen)
///
/// @param self QChart*
///
QPen* q_chart_background_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundVisible)
///
/// @param self QChart*
///
void q_chart_set_background_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isBackgroundVisible)
///
/// @param self QChart*
///
bool q_chart_is_background_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setDropShadowEnabled)
///
/// @param self QChart*
///
void q_chart_set_drop_shadow_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isDropShadowEnabled)
///
/// @param self QChart*
///
bool q_chart_is_drop_shadow_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundRoundness)
///
/// @param self QChart*
/// @param diameter double
///
void q_chart_set_background_roundness(void* self, double diameter);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#backgroundRoundness)
///
/// @param self QChart*
///
double q_chart_background_roundness(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationOptions)
///
/// @param self QChart*
/// @param options flag of enum QChart__AnimationOption
///
void q_chart_set_animation_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationOptions)
///
/// @param self QChart*
///
/// @return flag of enum QChart__AnimationOption
///
int32_t q_chart_animation_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationDuration)
///
/// @param self QChart*
/// @param msecs int
///
void q_chart_set_animation_duration(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationDuration)
///
/// @param self QChart*
///
int32_t q_chart_animation_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAnimationEasingCurve)
///
/// @param self QChart*
/// @param curve QEasingCurve*
///
void q_chart_set_animation_easing_curve(void* self, void* curve);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#animationEasingCurve)
///
/// @param self QChart*
///
QEasingCurve* q_chart_animation_easing_curve(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomIn)
///
/// @param self QChart*
///
void q_chart_zoom_in(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomOut)
///
/// @param self QChart*
///
void q_chart_zoom_out(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomIn)
///
/// @param self QChart*
/// @param rect QRectF*
///
void q_chart_zoom_in2(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoom)
///
/// @param self QChart*
/// @param factor double
///
void q_chart_zoom(void* self, double factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#zoomReset)
///
/// @param self QChart*
///
void q_chart_zoom_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isZoomed)
///
/// @param self QChart*
///
bool q_chart_is_zoomed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#scroll)
///
/// @param self QChart*
/// @param dx double
/// @param dy double
///
void q_chart_scroll(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#legend)
///
/// @param self QChart*
///
QLegend* q_chart_legend(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setMargins)
///
/// @param self QChart*
/// @param margins QMargins*
///
void q_chart_set_margins(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#margins)
///
/// @param self QChart*
///
QMargins* q_chart_margins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotArea)
///
/// @param self QChart*
///
QRectF* q_chart_plot_area(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotArea)
///
/// @param self QChart*
/// @param rect QRectF*
///
void q_chart_set_plot_area(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundBrush)
///
/// @param self QChart*
/// @param brush QBrush*
///
void q_chart_set_plot_area_background_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaBackgroundBrush)
///
/// @param self QChart*
///
QBrush* q_chart_plot_area_background_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundPen)
///
/// @param self QChart*
/// @param pen QPen*
///
void q_chart_set_plot_area_background_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaBackgroundPen)
///
/// @param self QChart*
///
QPen* q_chart_plot_area_background_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundVisible)
///
/// @param self QChart*
///
void q_chart_set_plot_area_background_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#isPlotAreaBackgroundVisible)
///
/// @param self QChart*
///
bool q_chart_is_plot_area_background_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setLocalizeNumbers)
///
/// @param self QChart*
/// @param localize bool
///
void q_chart_set_localize_numbers(void* self, bool localize);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#localizeNumbers)
///
/// @param self QChart*
///
bool q_chart_localize_numbers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setLocale)
///
/// @param self QChart*
/// @param locale QLocale*
///
void q_chart_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#locale)
///
/// @param self QChart*
///
QLocale* q_chart_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToValue)
///
/// @param self QChart*
/// @param position QPointF*
///
QPointF* q_chart_map_to_value(void* self, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToPosition)
///
/// @param self QChart*
/// @param value QPointF*
///
QPointF* q_chart_map_to_position(void* self, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#chartType)
///
/// @param self QChart*
///
/// @return enum QChart__ChartType
///
int32_t q_chart_chart_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaChanged)
///
/// @param self QChart*
/// @param plotArea QRectF*
///
void q_chart_plot_area_changed(void* self, void* plotArea);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#plotAreaChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self, QRectF* plotArea)
///
void q_chart_on_plot_area_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_chart_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_chart_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisX)
///
/// @param self QChart*
/// @param axis QAbstractAxis*
/// @param series QAbstractSeries*
///
void q_chart_set_axis_x2(void* self, void* axis, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setAxisY)
///
/// @param self QChart*
/// @param axis QAbstractAxis*
/// @param series QAbstractSeries*
///
void q_chart_set_axis_y2(void* self, void* axis, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisX)
///
/// @param self QChart*
/// @param series QAbstractSeries*
///
QAbstractAxis* q_chart_axis_x1(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axisY)
///
/// @param self QChart*
/// @param series QAbstractSeries*
///
QAbstractAxis* q_chart_axis_y1(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
///
/// @param self QChart*
/// @param orientation flag of enum Qt__Orientation
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_chart_axes1(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#axes)
///
/// @param self QChart*
/// @param orientation flag of enum Qt__Orientation
/// @param series QAbstractSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_chart_axes2(void* self, int32_t orientation, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setBackgroundVisible)
///
/// @param self QChart*
/// @param visible bool
///
void q_chart_set_background_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setDropShadowEnabled)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_drop_shadow_enabled1(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#setPlotAreaBackgroundVisible)
///
/// @param self QChart*
/// @param visible bool
///
void q_chart_set_plot_area_background_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToValue)
///
/// @param self QChart*
/// @param position QPointF*
/// @param series QAbstractSeries*
///
QPointF* q_chart_map_to_value2(void* self, void* position, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#mapToPosition)
///
/// @param self QChart*
/// @param value QPointF*
/// @param series QAbstractSeries*
///
QPointF* q_chart_map_to_position2(void* self, void* value, void* series);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// @param self QChart*
///
QGraphicsLayout* q_chart_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// @param self QChart*
/// @param layout QGraphicsLayout*
///
void q_chart_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// @param self QChart*
///
void q_chart_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// @param self QChart*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_chart_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// @param self QChart*
/// @param direction enum Qt__LayoutDirection
///
void q_chart_set_layout_direction(void* self, int32_t direction);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// @param self QChart*
///
void q_chart_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// @param self QChart*
///
QStyle* q_chart_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// @param self QChart*
/// @param style QStyle*
///
void q_chart_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// @param self QChart*
///
QFont* q_chart_font(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// @param self QChart*
/// @param font QFont*
///
void q_chart_set_font(void* self, void* font);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// @param self QChart*
///
QPalette* q_chart_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// @param self QChart*
/// @param palette QPalette*
///
void q_chart_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// @param self QChart*
///
bool q_chart_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QChart*
/// @param size QSizeF*
///
void q_chart_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QChart*
/// @param w double
/// @param h double
///
void q_chart_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// @param self QChart*
///
QSizeF* q_chart_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_chart_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// @param self QChart*
///
QRectF* q_chart_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QChart*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_chart_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QChart*
/// @param margins QMarginsF*
///
void q_chart_set_contents_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QChart*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_chart_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QChart*
/// @param margins QMarginsF*
///
void q_chart_set_window_frame_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// @param self QChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_chart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// @param self QChart*
///
void q_chart_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// @param self QChart*
///
QRectF* q_chart_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// @param self QChart*
///
QRectF* q_chart_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// @param self QChart*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_chart_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// @param self QChart*
///
/// @return enum Qt__WindowType
///
int32_t q_chart_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// @param self QChart*
/// @param wFlags flag of enum Qt__WindowType
///
void q_chart_set_window_flags(void* self, int32_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// @param self QChart*
///
bool q_chart_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// @param self QChart*
/// @param title const char*
///
void q_chart_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QChart*
///
const char* q_chart_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// @param self QChart*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_chart_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// @param self QChart*
/// @param policy enum Qt__FocusPolicy
///
void q_chart_set_focus_policy(void* self, int32_t policy);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// @param first QGraphicsWidget*
/// @param second QGraphicsWidget*
///
void q_chart_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// @param self QChart*
///
QGraphicsWidget* q_chart_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QChart*
/// @param sequence QKeySequence*
///
int32_t q_chart_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// @param self QChart*
/// @param id int
///
void q_chart_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QChart*
/// @param id int
///
void q_chart_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QChart*
/// @param id int
///
void q_chart_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// @param self QChart*
/// @param action QAction*
///
void q_chart_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// @param self QChart*
/// @param actions libqt_list of QAction*
///
void q_chart_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// @param self QChart*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_chart_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// @param self QChart*
/// @param before QAction*
/// @param action QAction*
///
void q_chart_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// @param self QChart*
/// @param action QAction*
///
void q_chart_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// @param self QChart*
///
/// @return libqt_list of QAction*
///
libqt_list q_chart_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QChart*
/// @param attribute enum Qt__WidgetAttribute
///
void q_chart_set_attribute(void* self, int32_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// @param self QChart*
/// @param attribute enum Qt__WidgetAttribute
///
bool q_chart_test_attribute(void* self, int32_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QChart*
///
void q_chart_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_geometry_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QChart*
///
void q_chart_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// @param self QChart*
///
bool q_chart_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QChart*
/// @param sequence QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_chart_grab_shortcut2(void* self, void* sequence, int32_t context);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QChart*
/// @param id int
/// @param enabled bool
///
void q_chart_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QChart*
/// @param id int
/// @param enabled bool
///
void q_chart_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QChart*
/// @param attribute enum Qt__WidgetAttribute
/// @param on bool
///
void q_chart_set_attribute2(void* self, int32_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QChart*
/// @param type enum Qt__GestureType
///
void q_chart_grab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QChart*
/// @param type enum Qt__GestureType
///
void q_chart_ungrab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QChart*
///
void q_chart_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QChart*
///
void q_chart_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QChart*
///
void q_chart_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QChart*
///
void q_chart_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QChart*
///
void q_chart_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QChart*
///
void q_chart_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QChart*
///
void q_chart_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QChart*
///
void q_chart_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QChart*
///
void q_chart_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QChart*
///
void q_chart_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QChart*
///
void q_chart_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QChart*
///
void q_chart_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QChart*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_chart_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QChart*
///
const char* q_chart_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QChart*
/// @param name char*
///
void q_chart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QChart*
///
bool q_chart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QChart*
///
bool q_chart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QChart*
///
bool q_chart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QChart*
///
bool q_chart_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QChart*
/// @param b bool
///
bool q_chart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QChart*
///
QThread* q_chart_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QChart*
/// @param thread QThread*
///
bool q_chart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChart*
/// @param interval int
///
int32_t q_chart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChart*
/// @param time int64_t of nanoseconds
///
int32_t q_chart_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChart*
/// @param id int
///
void q_chart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChart*
/// @param id enum Qt__TimerId
///
void q_chart_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QChart*
///
/// @return libqt_list of QObject*
///
libqt_list q_chart_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QChart*
/// @param parent QObject*
///
void q_chart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QChart*
/// @param filterObj QObject*
///
void q_chart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QChart*
/// @param obj QObject*
///
void q_chart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_chart_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_chart_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_chart_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_chart_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_chart_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChart*
///
bool q_chart_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChart*
/// @param receiver QObject*
///
bool q_chart_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_chart_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QChart*
///
void q_chart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QChart*
///
void q_chart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QChart*
/// @param name const char*
/// @param value QVariant*
///
bool q_chart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QChart*
/// @param name const char*
///
QVariant* q_chart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QChart*
///
const char** q_chart_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChart*
///
QBindingStorage* q_chart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChart*
///
const QBindingStorage* q_chart_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChart*
///
void q_chart_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChart*
/// @param callback void func(QChart* self)
///
void q_chart_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QChart*
///
QObject* q_chart_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QChart*
/// @param classname const char*
///
bool q_chart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QChart*
///
void q_chart_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChart*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_chart_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChart*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_chart_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_chart_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_chart_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_chart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChart*
/// @param signal const char*
///
bool q_chart_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChart*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_chart_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChart*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_chart_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChart*
/// @param receiver QObject*
/// @param member const char*
///
bool q_chart_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChart*
/// @param param1 QObject*
///
void q_chart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChart*
/// @param callback void func(QChart* self, QObject* param1)
///
void q_chart_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self QChart*
///
QGraphicsScene* q_chart_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self QChart*
///
QGraphicsObject* q_chart_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self QChart*
///
QGraphicsWidget* q_chart_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self QChart*
///
QGraphicsWidget* q_chart_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self QChart*
///
QGraphicsWidget* q_chart_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QChart*
/// @param parent QGraphicsItem*
///
void q_chart_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self QChart*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_chart_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self QChart*
///
bool q_chart_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self QChart*
///
bool q_chart_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self QChart*
///
bool q_chart_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QChart*
///
QGraphicsObject* q_chart_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QChart*
///
const QGraphicsObject* q_chart_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self QChart*
///
QGraphicsItemGroup* q_chart_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QChart*
/// @param group QGraphicsItemGroup*
///
void q_chart_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self QChart*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
///
int32_t q_chart_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QChart*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
///
void q_chart_set_flag(void* self, int32_t flag);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QChart*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
///
void q_chart_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self QChart*
///
/// @return enum QGraphicsItem__CacheMode
///
int32_t q_chart_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QChart*
/// @param mode enum QGraphicsItem__CacheMode
///
void q_chart_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self QChart*
///
/// @return enum QGraphicsItem__PanelModality
///
int32_t q_chart_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QChart*
/// @param panelModality enum QGraphicsItem__PanelModality
///
void q_chart_set_panel_modality(void* self, int32_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self QChart*
///
bool q_chart_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QChart*
///
const char* q_chart_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QChart*
/// @param toolTip const char*
///
void q_chart_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self QChart*
///
QCursor* q_chart_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QChart*
/// @param cursor QCursor*
///
void q_chart_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self QChart*
///
bool q_chart_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QChart*
///
void q_chart_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self QChart*
///
bool q_chart_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self QChart*
/// @param parent QGraphicsItem*
///
bool q_chart_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QChart*
/// @param visible bool
///
void q_chart_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QChart*
///
void q_chart_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QChart*
///
void q_chart_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self QChart*
///
bool q_chart_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self QChart*
///
bool q_chart_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QChart*
/// @param selected bool
///
void q_chart_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self QChart*
///
bool q_chart_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QChart*
/// @param on bool
///
void q_chart_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self QChart*
///
double q_chart_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self QChart*
///
double q_chart_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QChart*
/// @param opacity double
///
void q_chart_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self QChart*
///
QGraphicsEffect* q_chart_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QChart*
/// @param effect QGraphicsEffect*
///
void q_chart_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self QChart*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_chart_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QChart*
/// @param buttons flag of enum Qt__MouseButton
///
void q_chart_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self QChart*
///
bool q_chart_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self QChart*
///
bool q_chart_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self QChart*
///
bool q_chart_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self QChart*
///
bool q_chart_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QChart*
/// @param enabled bool
///
void q_chart_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self QChart*
///
bool q_chart_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QChart*
/// @param active bool
///
void q_chart_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self QChart*
///
bool q_chart_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QChart*
///
void q_chart_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QChart*
///
void q_chart_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QChart*
/// @param item QGraphicsItem*
///
void q_chart_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QChart*
///
void q_chart_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QChart*
///
void q_chart_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QChart*
///
void q_chart_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QChart*
///
void q_chart_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self QChart*
///
QPointF* q_chart_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self QChart*
///
double q_chart_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QChart*
/// @param x double
///
void q_chart_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self QChart*
///
double q_chart_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QChart*
/// @param y double
///
void q_chart_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self QChart*
///
QPointF* q_chart_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QChart*
/// @param pos QPointF*
///
void q_chart_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QChart*
/// @param x double
/// @param y double
///
void q_chart_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QChart*
/// @param dx double
/// @param dy double
///
void q_chart_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
///
void q_chart_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_chart_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self QChart*
///
QTransform* q_chart_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self QChart*
///
QTransform* q_chart_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self QChart*
/// @param viewportTransform QTransform*
///
QTransform* q_chart_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QChart*
/// @param other QGraphicsItem*
///
QTransform* q_chart_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QChart*
/// @param matrix QTransform*
///
void q_chart_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QChart*
///
void q_chart_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QChart*
/// @param angle double
///
void q_chart_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self QChart*
///
double q_chart_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QChart*
/// @param scale double
///
void q_chart_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self QChart*
///
double q_chart_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self QChart*
///
/// @return libqt_list of QGraphicsTransform*
///
libqt_list q_chart_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QChart*
/// @param transformations libqt_list of QGraphicsTransform*
///
void q_chart_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self QChart*
///
QPointF* q_chart_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QChart*
/// @param origin QPointF*
///
void q_chart_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QChart*
/// @param ax double
/// @param ay double
///
void q_chart_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self QChart*
///
double q_chart_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QChart*
/// @param z double
///
void q_chart_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QChart*
/// @param sibling QGraphicsItem*
///
void q_chart_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self QChart*
///
QRectF* q_chart_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self QChart*
///
QRectF* q_chart_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self QChart*
///
bool q_chart_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self QChart*
///
QPainterPath* q_chart_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QChart*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_chart_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QChart*
///
bool q_chart_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
bool q_chart_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self QChart*
/// @param itemToDeviceTransform QTransform*
///
QRegion* q_chart_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self QChart*
///
double q_chart_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QChart*
/// @param granularity double
///
void q_chart_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QChart*
///
void q_chart_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
void q_chart_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_chart_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QChart*
/// @param point QPointF*
///
QPointF* q_chart_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QChart*
/// @param point QPointF*
///
QPointF* q_chart_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_chart_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QChart*
/// @param rect QRectF*
///
QRectF* q_chart_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QChart*
/// @param rect QRectF*
///
QRectF* q_chart_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_chart_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QChart*
/// @param path QPainterPath*
///
QPainterPath* q_chart_map_to_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QChart*
/// @param path QPainterPath*
///
QPainterPath* q_chart_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_chart_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QChart*
/// @param point QPointF*
///
QPointF* q_chart_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QChart*
/// @param point QPointF*
///
QPointF* q_chart_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_chart_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QChart*
/// @param rect QRectF*
///
QRectF* q_chart_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QChart*
/// @param rect QRectF*
///
QRectF* q_chart_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_chart_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QChart*
/// @param path QPainterPath*
///
QPainterPath* q_chart_map_from_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QChart*
/// @param path QPainterPath*
///
QPainterPath* q_chart_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_chart_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QChart*
/// @param x double
/// @param y double
///
QPointF* q_chart_map_to_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QChart*
/// @param x double
/// @param y double
///
QPointF* q_chart_map_to_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_chart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_chart_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_chart_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_chart_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QChart*
/// @param x double
/// @param y double
///
QPointF* q_chart_map_from_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QChart*
/// @param x double
/// @param y double
///
QPointF* q_chart_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QChart*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_chart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_chart_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_chart_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self QChart*
/// @param child QGraphicsItem*
///
bool q_chart_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self QChart*
/// @param other QGraphicsItem*
///
QGraphicsItem* q_chart_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self QChart*
///
bool q_chart_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self QChart*
/// @param key int
///
QVariant* q_chart_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QChart*
/// @param key int
/// @param value QVariant*
///
void q_chart_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self QChart*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_chart_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QChart*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_chart_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QChart*
/// @param filterItem QGraphicsItem*
///
void q_chart_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QChart*
/// @param filterItem QGraphicsItem*
///
void q_chart_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QChart*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
///
void q_chart_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QChart*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
///
void q_chart_set_cache_mode2(void* self, int32_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QChart*
/// @param focusReason enum Qt__FocusReason
///
void q_chart_set_focus1(void* self, int32_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
/// @param rect QRectF*
///
void q_chart_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
/// @param rect QRectF*
/// @param xmargin int
///
void q_chart_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_chart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
///
void q_chart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QChart*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
///
void q_chart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QChart*
/// @param other QGraphicsItem*
/// @param ok bool*
///
QTransform* q_chart_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QChart*
/// @param matrix QTransform*
/// @param combine bool
///
void q_chart_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QChart*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_chart_colliding_items1(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QChart*
/// @param rect QRectF*
///
bool q_chart_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QChart*
/// @param rect QRectF*
///
void q_chart_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QChart*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
///
void q_chart_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QChart*
/// @param policy QSizePolicy*
///
void q_chart_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QChart*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_chart_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QChart*
///
QSizePolicy* q_chart_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QChart*
/// @param size QSizeF*
///
void q_chart_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QChart*
/// @param w double
/// @param h double
///
void q_chart_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QChart*
///
QSizeF* q_chart_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QChart*
/// @param width double
///
void q_chart_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QChart*
///
double q_chart_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QChart*
/// @param height double
///
void q_chart_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QChart*
///
double q_chart_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QChart*
/// @param size QSizeF*
///
void q_chart_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QChart*
/// @param w double
/// @param h double
///
void q_chart_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QChart*
///
QSizeF* q_chart_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QChart*
/// @param width double
///
void q_chart_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QChart*
///
double q_chart_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QChart*
/// @param height double
///
void q_chart_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QChart*
///
double q_chart_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QChart*
/// @param size QSizeF*
///
void q_chart_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QChart*
/// @param w double
/// @param h double
///
void q_chart_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QChart*
///
QSizeF* q_chart_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QChart*
/// @param width double
///
void q_chart_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QChart*
///
double q_chart_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QChart*
/// @param height double
///
void q_chart_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QChart*
///
double q_chart_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QChart*
///
QRectF* q_chart_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QChart*
///
QRectF* q_chart_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QChart*
/// @param which enum Qt__SizeHint
///
QSizeF* q_chart_effective_size_hint(void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QChart*
///
QGraphicsLayoutItem* q_chart_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QChart*
/// @param parent QGraphicsLayoutItem*
///
void q_chart_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QChart*
///
bool q_chart_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QChart*
///
QGraphicsItem* q_chart_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QChart*
///
bool q_chart_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QChart*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_chart_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_chart_effective_size_hint2(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param rect QRectF*
///
void q_chart_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param rect QRectF*
///
void q_chart_qbase_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QRectF* rect)
///
void q_chart_on_set_geometry(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_chart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_chart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, double* left, double* top, double* right, double* bottom)
///
void q_chart_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
int32_t q_chart_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
int32_t q_chart_qbase_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback int32_t func()
///
void q_chart_on_type(void* self, int32_t (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_chart_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_chart_qbase_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_chart_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_chart_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_chart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_chart_on_paint_window_frame(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
QRectF* q_chart_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
QRectF* q_chart_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QRectF* func()
///
void q_chart_on_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
QPainterPath* q_chart_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
QPainterPath* q_chart_qbase_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QPainterPath* func()
///
void q_chart_on_shape(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param option QStyleOption*
///
void q_chart_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param option QStyleOption*
///
void q_chart_qbase_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QStyleOption* option)
///
void q_chart_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_chart_size_hint(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_chart_qbase_size_hint(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QSizeF* func(QChart* self, enum Qt__SizeHint which, QSizeF* constraint)
///
void q_chart_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
void q_chart_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
void q_chart_qbase_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func()
///
void q_chart_on_update_geometry(void* self, void (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_chart_item_change(void* self, int32_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_chart_qbase_item_change(void* self, int32_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QVariant* func(QChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value)
///
void q_chart_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param propertyName const char*
/// @param value QVariant*
///
QVariant* q_chart_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param propertyName const char*
/// @param value QVariant*
///
QVariant* q_chart_qbase_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QVariant* func(QChart* self, const char* propertyName, QVariant* value)
///
void q_chart_on_property_change(void* self, QVariant* (*callback)(void*, const char*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
bool q_chart_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
bool q_chart_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QEvent* event)
///
void q_chart_on_scene_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param e QEvent*
///
bool q_chart_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param e QEvent*
///
bool q_chart_qbase_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QEvent* e)
///
void q_chart_on_window_frame_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_chart_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_chart_qbase_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback int32_t func(QChart* self, QPointF* pos)
///
void q_chart_on_window_frame_section_at(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
bool q_chart_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
bool q_chart_qbase_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QEvent* event)
///
void q_chart_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_qbase_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QEvent* event)
///
void q_chart_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QCloseEvent*
///
void q_chart_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QCloseEvent*
///
void q_chart_qbase_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QCloseEvent* event)
///
void q_chart_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QFocusEvent*
///
void q_chart_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QFocusEvent*
///
void q_chart_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QFocusEvent* event)
///
void q_chart_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param next bool
///
bool q_chart_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param next bool
///
bool q_chart_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, bool next)
///
void q_chart_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QFocusEvent*
///
void q_chart_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QFocusEvent*
///
void q_chart_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QFocusEvent* event)
///
void q_chart_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QHideEvent*
///
void q_chart_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QHideEvent*
///
void q_chart_qbase_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QHideEvent* event)
///
void q_chart_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMoveEvent*
///
void q_chart_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMoveEvent*
///
void q_chart_qbase_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneMoveEvent* event)
///
void q_chart_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
void q_chart_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
void q_chart_qbase_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func()
///
void q_chart_on_polish_event(void* self, void (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneResizeEvent*
///
void q_chart_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneResizeEvent*
///
void q_chart_qbase_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneResizeEvent* event)
///
void q_chart_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QShowEvent*
///
void q_chart_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QShowEvent*
///
void q_chart_qbase_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QShowEvent* event)
///
void q_chart_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_chart_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_chart_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneHoverEvent* event)
///
void q_chart_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_chart_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_chart_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneHoverEvent* event)
///
void q_chart_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_qbase_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QEvent* event)
///
void q_chart_on_grab_mouse_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_qbase_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QEvent* event)
///
void q_chart_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_qbase_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QEvent* event)
///
void q_chart_on_grab_keyboard_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_qbase_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QEvent* event)
///
void q_chart_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_chart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_chart_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QObject* watched, QEvent* event)
///
void q_chart_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QTimerEvent*
///
void q_chart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QTimerEvent*
///
void q_chart_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QTimerEvent* event)
///
void q_chart_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QChildEvent*
///
void q_chart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QChildEvent*
///
void q_chart_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QChildEvent* event)
///
void q_chart_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QEvent*
///
void q_chart_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QEvent* event)
///
void q_chart_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param signal QMetaMethod*
///
void q_chart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param signal QMetaMethod*
///
void q_chart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QMetaMethod* signal)
///
void q_chart_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param signal QMetaMethod*
///
void q_chart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param signal QMetaMethod*
///
void q_chart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QMetaMethod* signal)
///
void q_chart_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param phase int
///
void q_chart_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param phase int
///
void q_chart_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, int phase)
///
void q_chart_on_advance(void* self, void (*callback)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param point QPointF*
///
bool q_chart_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param point QPointF*
///
bool q_chart_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QPointF* point)
///
void q_chart_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_chart_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_chart_qbase_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode)
///
void q_chart_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_chart_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_chart_qbase_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode)
///
void q_chart_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param item QGraphicsItem*
///
bool q_chart_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param item QGraphicsItem*
///
bool q_chart_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QGraphicsItem* item)
///
void q_chart_on_is_obscured_by(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
QPainterPath* q_chart_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
QPainterPath* q_chart_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QPainterPath* func()
///
void q_chart_on_opaque_area(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_chart_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_chart_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QGraphicsItem* watched, QEvent* event)
///
void q_chart_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_chart_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_chart_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneContextMenuEvent* event)
///
void q_chart_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_chart_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_chart_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_chart_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_chart_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneDragDropEvent* event)
///
void q_chart_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_chart_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneHoverEvent*
///
void q_chart_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneHoverEvent* event)
///
void q_chart_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QKeyEvent*
///
void q_chart_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QKeyEvent*
///
void q_chart_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QKeyEvent* event)
///
void q_chart_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QKeyEvent*
///
void q_chart_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QKeyEvent*
///
void q_chart_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QKeyEvent* event)
///
void q_chart_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneMouseEvent* event)
///
void q_chart_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneMouseEvent* event)
///
void q_chart_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneMouseEvent* event)
///
void q_chart_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneMouseEvent*
///
void q_chart_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneMouseEvent* event)
///
void q_chart_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneWheelEvent*
///
void q_chart_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QGraphicsSceneWheelEvent*
///
void q_chart_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsSceneWheelEvent* event)
///
void q_chart_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param event QInputMethodEvent*
///
void q_chart_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param event QInputMethodEvent*
///
void q_chart_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QInputMethodEvent* event)
///
void q_chart_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_chart_input_method_query(void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_chart_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QVariant* func(QChart* self, enum Qt__InputMethodQuery query)
///
void q_chart_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param extension enum QGraphicsItem__Extension
///
bool q_chart_supports_extension(void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param extension enum QGraphicsItem__Extension
///
bool q_chart_qbase_supports_extension(void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, enum QGraphicsItem__Extension extension)
///
void q_chart_on_supports_extension(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_chart_set_extension(void* self, int32_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_chart_qbase_set_extension(void* self, int32_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, enum QGraphicsItem__Extension extension, QVariant* variant)
///
void q_chart_on_set_extension(void* self, void (*callback)(void*, int32_t, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param variant QVariant*
///
QVariant* q_chart_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param variant QVariant*
///
QVariant* q_chart_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QVariant* func(QChart* self, QVariant* variant)
///
void q_chart_on_extension(void* self, QVariant* (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
bool q_chart_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
bool q_chart_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func()
///
void q_chart_on_is_empty(void* self, bool (*callback)());

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
void q_chart_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
void q_chart_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func()
///
void q_chart_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
QObject* q_chart_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
QObject* q_chart_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback QObject* func()
///
void q_chart_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
int32_t q_chart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
int32_t q_chart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback int32_t func()
///
void q_chart_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param signal const char*
///
int32_t q_chart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param signal const char*
///
int32_t q_chart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback int32_t func(QChart* self, const char* signal)
///
void q_chart_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param signal QMetaMethod*
///
bool q_chart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param signal QMetaMethod*
///
bool q_chart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback bool func(QChart* self, QMetaMethod* signal)
///
void q_chart_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
void q_chart_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
void q_chart_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func()
///
void q_chart_on_add_to_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
void q_chart_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
void q_chart_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func()
///
void q_chart_on_remove_from_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
///
void q_chart_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
///
void q_chart_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func()
///
void q_chart_on_prepare_geometry_change(void* self, void (*callback)());

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param item QGraphicsItem*
///
void q_chart_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param item QGraphicsItem*
///
void q_chart_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, QGraphicsItem* item)
///
void q_chart_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChart*
/// @param ownedByLayout bool
///
void q_chart_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChart*
/// @param ownedByLayout bool
///
void q_chart_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChart*
/// @param callback void func(QChart* self, bool ownedByLayout)
///
void q_chart_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QChart*
/// @param callback void func(QChart* self, const char* objectName)
///
void q_chart_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#dtor.QChart)
///
/// Delete this object from C++ memory.
///
/// @param self QChart*
///
void q_chart_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#public-types)

typedef enum {
    QCHART_CHARTTYPE_CHARTTYPEUNDEFINED = 0,
    QCHART_CHARTTYPE_CHARTTYPECARTESIAN = 1,
    QCHART_CHARTTYPE_CHARTTYPEPOLAR = 2
} QChart__ChartType;

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qchart-qtcharts.html#public-types)

typedef enum {
    QCHART_ANIMATIONOPTION_NOANIMATION = 0,
    QCHART_ANIMATIONOPTION_GRIDAXISANIMATIONS = 1,
    QCHART_ANIMATIONOPTION_SERIESANIMATIONS = 2,
    QCHART_ANIMATIONOPTION_ALLANIMATIONS = 3
} QChart__AnimationOption;

#endif
