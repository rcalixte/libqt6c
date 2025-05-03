#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPOLARCHART_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPOLARCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractseries.h"
#include "../libqaction.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqcursor.h"
#include "../libqeasingcurve.h"
#include "../libqfont.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsitem.h"
#include "../libqgraphicslayout.h"
#include "../libqgraphicslayoutitem.h"
#include "../libqgraphicsscene.h"
#include "../libqgraphicstransform.h"
#include "../libqgraphicswidget.h"
#include "../libqkeysequence.h"
#include "libqlegend.h"
#include "../libqlocale.h"
#include "../libqmargins.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpainter.h"
#include "../libqpainterpath.h"
#include "../libqpalette.h"
#include "../libqpen.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqsize.h"
#include "../libqsizepolicy.h"
#include <string.h>
#include "../libqstyle.h"
#include "../libqstyleoption.h"
#include "../libqthread.h"
#include "../libqtransform.h"
#include "../libqvariant.h"
#include "../libqwidget.h"

/// https://doc.qt.io/qt-6/qpolarchart.html

/// q_polarchart_new constructs a new QPolarChart object.
///
///
QPolarChart* q_polarchart_new();

/// q_polarchart_new2 constructs a new QPolarChart object.
///
/// ``` QGraphicsItem* parent ```
QPolarChart* q_polarchart_new2(void* parent);

/// q_polarchart_new3 constructs a new QPolarChart object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QPolarChart* q_polarchart_new3(void* parent, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPolarChart* self ```
QMetaObject* q_polarchart_meta_object(void* self);

/// ``` QPolarChart* self, const char* param1 ```
void* q_polarchart_metacast(void* self, const char* param1);

/// ``` QPolarChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_polarchart_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPolarChart* self, int32_t (*slot)(QPolarChart*, enum QMetaObject__Call, int, void*) ```
void q_polarchart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPolarChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_polarchart_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_polarchart_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#addAxis)
///
/// ``` QPolarChart* self, QAbstractAxis* axis, enum QPolarChart__PolarOrientation polarOrientation ```
void q_polarchart_add_axis(void* self, void* axis, int64_t polarOrientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
///
/// ``` QPolarChart* self ```
libqt_list /* of QAbstractAxis* */ q_polarchart_axes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axisPolarOrientation)
///
/// ``` QAbstractAxis* axis ```
int64_t q_polarchart_axis_polar_orientation(void* axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_polarchart_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_polarchart_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
///
/// ``` QPolarChart* self, int polarOrientation ```
libqt_list /* of QAbstractAxis* */ q_polarchart_axes1(void* self, int64_t polarOrientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
///
/// ``` QPolarChart* self, int polarOrientation, QAbstractSeries* series ```
libqt_list /* of QAbstractAxis* */ q_polarchart_axes2(void* self, int64_t polarOrientation, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#addSeries)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
void q_polarchart_add_series(void* self, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeSeries)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
void q_polarchart_remove_series(void* self, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
///
/// ``` QPolarChart* self ```
void q_polarchart_remove_all_series(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#series)
///
/// ``` QPolarChart* self ```
libqt_list /* of QAbstractSeries* */ q_polarchart_series(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// ``` QPolarChart* self, QAbstractAxis* axis ```
void q_polarchart_set_axis_x(void* self, void* axis);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// ``` QPolarChart* self, QAbstractAxis* axis ```
void q_polarchart_set_axis_y(void* self, void* axis);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// ``` QPolarChart* self ```
QAbstractAxis* q_polarchart_axis_x(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// ``` QPolarChart* self ```
QAbstractAxis* q_polarchart_axis_y(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAxis)
///
/// ``` QPolarChart* self, QAbstractAxis* axis ```
void q_polarchart_remove_axis(void* self, void* axis);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
///
/// ``` QPolarChart* self ```
void q_polarchart_create_default_axes(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTheme)
///
/// ``` QPolarChart* self, enum QChart__ChartTheme theme ```
void q_polarchart_set_theme(void* self, int64_t theme);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#theme)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_theme(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitle)
///
/// ``` QPolarChart* self, const char* title ```
void q_polarchart_set_title(void* self, const char* title);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#title)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_title(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
///
/// ``` QPolarChart* self, QFont* font ```
void q_polarchart_set_title_font(void* self, void* font);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleFont)
///
/// ``` QPolarChart* self ```
QFont* q_polarchart_title_font(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
///
/// ``` QPolarChart* self, QBrush* brush ```
void q_polarchart_set_title_brush(void* self, void* brush);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleBrush)
///
/// ``` QPolarChart* self ```
QBrush* q_polarchart_title_brush(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
///
/// ``` QPolarChart* self, QBrush* brush ```
void q_polarchart_set_background_brush(void* self, void* brush);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
///
/// ``` QPolarChart* self ```
QBrush* q_polarchart_background_brush(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
///
/// ``` QPolarChart* self, QPen* pen ```
void q_polarchart_set_background_pen(void* self, void* pen);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
///
/// ``` QPolarChart* self ```
QPen* q_polarchart_background_pen(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_background_visible(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_background_visible(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_drop_shadow_enabled(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_drop_shadow_enabled(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
///
/// ``` QPolarChart* self, double diameter ```
void q_polarchart_set_background_roundness(void* self, double diameter);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
///
/// ``` QPolarChart* self ```
double q_polarchart_background_roundness(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
///
/// ``` QPolarChart* self, int options ```
void q_polarchart_set_animation_options(void* self, int64_t options);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationOptions)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_animation_options(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
///
/// ``` QPolarChart* self, int msecs ```
void q_polarchart_set_animation_duration(void* self, int msecs);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationDuration)
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_animation_duration(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
///
/// ``` QPolarChart* self, QEasingCurve* curve ```
void q_polarchart_set_animation_easing_curve(void* self, void* curve);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
///
/// ``` QPolarChart* self ```
QEasingCurve* q_polarchart_animation_easing_curve(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// ``` QPolarChart* self ```
void q_polarchart_zoom_in(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomOut)
///
/// ``` QPolarChart* self ```
void q_polarchart_zoom_out(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_zoom_in_with_rect(void* self, void* rect);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoom)
///
/// ``` QPolarChart* self, double factor ```
void q_polarchart_zoom(void* self, double factor);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomReset)
///
/// ``` QPolarChart* self ```
void q_polarchart_zoom_reset(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isZoomed)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_zoomed(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#scroll)
///
/// ``` QPolarChart* self, double dx, double dy ```
void q_polarchart_scroll(void* self, double dx, double dy);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#legend)
///
/// ``` QPolarChart* self ```
QLegend* q_polarchart_legend(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setMargins)
///
/// ``` QPolarChart* self, QMargins* margins ```
void q_polarchart_set_margins(void* self, void* margins);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#margins)
///
/// ``` QPolarChart* self ```
QMargins* q_polarchart_margins(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotArea)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_plot_area(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_set_plot_area(void* self, void* rect);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
///
/// ``` QPolarChart* self, QBrush* brush ```
void q_polarchart_set_plot_area_background_brush(void* self, void* brush);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
///
/// ``` QPolarChart* self ```
QBrush* q_polarchart_plot_area_background_brush(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
///
/// ``` QPolarChart* self, QPen* pen ```
void q_polarchart_set_plot_area_background_pen(void* self, void* pen);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
///
/// ``` QPolarChart* self ```
QPen* q_polarchart_plot_area_background_pen(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_plot_area_background_visible(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_plot_area_background_visible(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
///
/// ``` QPolarChart* self, bool localize ```
void q_polarchart_set_localize_numbers(void* self, bool localize);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
///
/// ``` QPolarChart* self ```
bool q_polarchart_localize_numbers(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocale)
///
/// ``` QPolarChart* self, QLocale* locale ```
void q_polarchart_set_locale(void* self, void* locale);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#locale)
///
/// ``` QPolarChart* self ```
QLocale* q_polarchart_locale(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// ``` QPolarChart* self, QPointF* position ```
QPointF* q_polarchart_map_to_value(void* self, void* position);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// ``` QPolarChart* self, QPointF* value ```
QPointF* q_polarchart_map_to_position(void* self, void* value);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#chartType)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_chart_type(void* self);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// ``` QPolarChart* self, QRectF* plotArea ```
void q_polarchart_plot_area_changed(void* self, void* plotArea);

/// Inherited from QChart
///
/// ``` QPolarChart* self, void (*slot)(QChart*, QRectF*) ```
void q_polarchart_on_plot_area_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// ``` QPolarChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_polarchart_set_axis_x2(void* self, void* axis, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// ``` QPolarChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_polarchart_set_axis_y2(void* self, void* axis, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
QAbstractAxis* q_polarchart_axis_x1(void* self, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
QAbstractAxis* q_polarchart_axis_y1(void* self, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// ``` QPolarChart* self, bool visible ```
void q_polarchart_set_background_visible1(void* self, bool visible);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_drop_shadow_enabled1(void* self, bool enabled);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// ``` QPolarChart* self, bool visible ```
void q_polarchart_set_plot_area_background_visible1(void* self, bool visible);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// ``` QPolarChart* self, QPointF* position, QAbstractSeries* series ```
QPointF* q_polarchart_map_to_value2(void* self, void* position, void* series);

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// ``` QPolarChart* self, QPointF* value, QAbstractSeries* series ```
QPointF* q_polarchart_map_to_position2(void* self, void* value, void* series);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QPolarChart* self ```
QGraphicsLayout* q_polarchart_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QPolarChart* self, QGraphicsLayout* layout ```
void q_polarchart_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QPolarChart* self ```
void q_polarchart_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QPolarChart* self, enum Qt__LayoutDirection direction ```
void q_polarchart_set_layout_direction(void* self, int64_t direction);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QPolarChart* self ```
void q_polarchart_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QPolarChart* self ```
QStyle* q_polarchart_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QPolarChart* self, QStyle* style ```
void q_polarchart_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QPolarChart* self ```
QFont* q_polarchart_font(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QPolarChart* self, QFont* font ```
void q_polarchart_set_font(void* self, void* font);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QPolarChart* self ```
QPalette* q_polarchart_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QPolarChart* self, QPalette* palette ```
void q_polarchart_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QPolarChart* self ```
bool q_polarchart_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
void q_polarchart_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QPolarChart* self, double left, double top, double right, double bottom ```
void q_polarchart_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QPolarChart* self, QMarginsF* margins ```
void q_polarchart_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QPolarChart* self, double left, double top, double right, double bottom ```
void q_polarchart_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QPolarChart* self, QMarginsF* margins ```
void q_polarchart_set_window_frame_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QPolarChart* self, double* left, double* top, double* right, double* bottom ```
void q_polarchart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QPolarChart* self ```
void q_polarchart_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QPolarChart* self, int wFlags ```
void q_polarchart_set_window_flags(void* self, int64_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QPolarChart* self, const char* title ```
void q_polarchart_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QPolarChart* self, enum Qt__FocusPolicy policy ```
void q_polarchart_set_focus_policy(void* self, int64_t policy);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_polarchart_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QPolarChart* self, QKeySequence* sequence ```
int32_t q_polarchart_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QPolarChart* self, QAction* action ```
void q_polarchart_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QPolarChart* self, QAction* actions[] ```
void q_polarchart_add_actions(void* self, void* actions[]);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QPolarChart* self, QAction* before, QAction* actions[] ```
void q_polarchart_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QPolarChart* self, QAction* before, QAction* action ```
void q_polarchart_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QPolarChart* self, QAction* action ```
void q_polarchart_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QPolarChart* self ```
libqt_list /* of QAction* */ q_polarchart_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QPolarChart* self, enum Qt__WidgetAttribute attribute ```
void q_polarchart_set_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QPolarChart* self, enum Qt__WidgetAttribute attribute ```
bool q_polarchart_test_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsWidget*) ```
void q_polarchart_on_geometry_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsWidget*) ```
void q_polarchart_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QPolarChart* self ```
bool q_polarchart_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QPolarChart* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_polarchart_grab_shortcut2(void* self, void* sequence, int64_t context);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QPolarChart* self, int id, bool enabled ```
void q_polarchart_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QPolarChart* self, int id, bool enabled ```
void q_polarchart_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QPolarChart* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_polarchart_set_attribute2(void* self, int64_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QPolarChart* self, enum Qt__GestureType typeVal ```
void q_polarchart_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QPolarChart* self, enum Qt__GestureType typeVal ```
void q_polarchart_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QPolarChart* self, enum Qt__GestureType typeVal, int flags ```
void q_polarchart_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPolarChart* self, char* name ```
void q_polarchart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPolarChart* self ```
bool q_polarchart_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPolarChart* self, bool b ```
bool q_polarchart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPolarChart* self ```
QThread* q_polarchart_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPolarChart* self, QThread* thread ```
void q_polarchart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPolarChart* self, int interval ```
int32_t q_polarchart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPolarChart* self ```
libqt_list /* of QObject* */ q_polarchart_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPolarChart* self, QObject* parent ```
void q_polarchart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPolarChart* self, QObject* filterObj ```
void q_polarchart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPolarChart* self, QObject* obj ```
void q_polarchart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_polarchart_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPolarChart* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_polarchart_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_polarchart_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_polarchart_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPolarChart* self ```
void q_polarchart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPolarChart* self ```
void q_polarchart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPolarChart* self, const char* name, QVariant* value ```
bool q_polarchart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPolarChart* self, const char* name ```
QVariant* q_polarchart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPolarChart* self ```
const char** q_polarchart_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPolarChart* self ```
QBindingStorage* q_polarchart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPolarChart* self ```
QBindingStorage* q_polarchart_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPolarChart* self ```
void q_polarchart_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QPolarChart* self, void (*slot)(QObject*) ```
void q_polarchart_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPolarChart* self ```
QObject* q_polarchart_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPolarChart* self, const char* classname ```
bool q_polarchart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPolarChart* self ```
void q_polarchart_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPolarChart* self, int interval, enum Qt__TimerType timerType ```
int32_t q_polarchart_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_polarchart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPolarChart* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_polarchart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPolarChart* self, QObject* param1 ```
void q_polarchart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QPolarChart* self, void (*slot)(QObject*, QObject*) ```
void q_polarchart_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QPolarChart* self ```
QGraphicsScene* q_polarchart_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QPolarChart* self ```
QGraphicsObject* q_polarchart_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QPolarChart* self, QGraphicsItem* parent ```
void q_polarchart_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QPolarChart* self ```
libqt_list /* of QGraphicsItem* */ q_polarchart_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QPolarChart* self ```
QGraphicsObject* q_polarchart_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QPolarChart* self ```
QGraphicsObject* q_polarchart_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QPolarChart* self ```
QGraphicsItemGroup* q_polarchart_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QPolarChart* self, QGraphicsItemGroup* group ```
void q_polarchart_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_polarchart_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QPolarChart* self, int flags ```
void q_polarchart_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QPolarChart* self, enum QGraphicsItem__CacheMode mode ```
void q_polarchart_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QPolarChart* self, enum QGraphicsItem__PanelModality panelModality ```
void q_polarchart_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QPolarChart* self, const char* toolTip ```
void q_polarchart_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QPolarChart* self ```
QCursor* q_polarchart_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QPolarChart* self, QCursor* cursor ```
void q_polarchart_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QPolarChart* self ```
bool q_polarchart_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QPolarChart* self ```
void q_polarchart_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QPolarChart* self, QGraphicsItem* parent ```
bool q_polarchart_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QPolarChart* self, bool visible ```
void q_polarchart_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QPolarChart* self ```
void q_polarchart_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QPolarChart* self ```
void q_polarchart_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QPolarChart* self, bool selected ```
void q_polarchart_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QPolarChart* self ```
bool q_polarchart_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QPolarChart* self, bool on ```
void q_polarchart_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QPolarChart* self ```
double q_polarchart_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QPolarChart* self ```
double q_polarchart_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QPolarChart* self, double opacity ```
void q_polarchart_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QPolarChart* self ```
QGraphicsEffect* q_polarchart_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QPolarChart* self, QGraphicsEffect* effect ```
void q_polarchart_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QPolarChart* self, int buttons ```
void q_polarchart_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QPolarChart* self, bool active ```
void q_polarchart_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QPolarChart* self ```
bool q_polarchart_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QPolarChart* self ```
void q_polarchart_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
void q_polarchart_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QPolarChart* self ```
void q_polarchart_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QPolarChart* self ```
void q_polarchart_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QPolarChart* self ```
void q_polarchart_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QPolarChart* self ```
void q_polarchart_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QPolarChart* self ```
QPointF* q_polarchart_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QPolarChart* self ```
double q_polarchart_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QPolarChart* self, double x ```
void q_polarchart_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QPolarChart* self ```
double q_polarchart_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QPolarChart* self, double y ```
void q_polarchart_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QPolarChart* self ```
QPointF* q_polarchart_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QPolarChart* self, QPointF* pos ```
void q_polarchart_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QPolarChart* self, double x, double y ```
void q_polarchart_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QPolarChart* self, double dx, double dy ```
void q_polarchart_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self ```
void q_polarchart_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
void q_polarchart_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QPolarChart* self ```
QTransform* q_polarchart_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QPolarChart* self ```
QTransform* q_polarchart_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QPolarChart* self, QTransform* viewportTransform ```
QTransform* q_polarchart_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QPolarChart* self, QGraphicsItem* other ```
QTransform* q_polarchart_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QPolarChart* self, QTransform* matrix ```
void q_polarchart_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QPolarChart* self ```
void q_polarchart_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QPolarChart* self, double angle ```
void q_polarchart_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QPolarChart* self ```
double q_polarchart_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QPolarChart* self, double scale ```
void q_polarchart_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QPolarChart* self ```
double q_polarchart_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QPolarChart* self ```
libqt_list /* of QGraphicsTransform* */ q_polarchart_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QPolarChart* self, QGraphicsTransform* transformations[] ```
void q_polarchart_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QPolarChart* self ```
QPointF* q_polarchart_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QPolarChart* self, QPointF* origin ```
void q_polarchart_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QPolarChart* self, double ax, double ay ```
void q_polarchart_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QPolarChart* self ```
double q_polarchart_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QPolarChart* self, double z ```
void q_polarchart_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QPolarChart* self, QGraphicsItem* sibling ```
void q_polarchart_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QPolarChart* self ```
libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
bool q_polarchart_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QPolarChart* self, QTransform* itemToDeviceTransform ```
QRegion* q_polarchart_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QPolarChart* self ```
double q_polarchart_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QPolarChart* self, double granularity ```
void q_polarchart_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QPolarChart* self ```
void q_polarchart_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QPolarChart* self, double x, double y, double width, double height ```
void q_polarchart_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_polarchart_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_polarchart_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_polarchart_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_polarchart_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_polarchart_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_polarchart_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_polarchart_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_polarchart_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QPolarChart* self, QGraphicsItem* child ```
bool q_polarchart_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QPolarChart* self, QGraphicsItem* other ```
QGraphicsItem* q_polarchart_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QPolarChart* self, int key ```
QVariant* q_polarchart_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QPolarChart* self, int key, QVariant* value ```
void q_polarchart_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QPolarChart* self, int hints ```
void q_polarchart_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QPolarChart* self, QGraphicsItem* filterItem ```
void q_polarchart_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QPolarChart* self, QGraphicsItem* filterItem ```
void q_polarchart_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_polarchart_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QPolarChart* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_polarchart_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QPolarChart* self, enum Qt__FocusReason focusReason ```
void q_polarchart_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, QRectF* rect, int xmargin ```
void q_polarchart_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, QRectF* rect, int xmargin, int ymargin ```
void q_polarchart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, double x, double y, double w, double h, int xmargin ```
void q_polarchart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_polarchart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QPolarChart* self, QGraphicsItem* other, bool* ok ```
QTransform* q_polarchart_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QPolarChart* self, QTransform* matrix, bool combine ```
void q_polarchart_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QPolarChart* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QPolarChart* self, QRectF* rect ```
bool q_polarchart_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QPolarChart* self, double dx, double dy, QRectF* rect ```
void q_polarchart_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QPolarChart* self, QSizePolicy* policy ```
void q_polarchart_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QPolarChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_polarchart_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QPolarChart* self ```
QSizePolicy* q_polarchart_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QPolarChart* self, double width ```
void q_polarchart_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QPolarChart* self ```
double q_polarchart_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QPolarChart* self, double height ```
void q_polarchart_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QPolarChart* self ```
double q_polarchart_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QPolarChart* self, double width ```
void q_polarchart_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QPolarChart* self ```
double q_polarchart_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QPolarChart* self, double height ```
void q_polarchart_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QPolarChart* self ```
double q_polarchart_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QPolarChart* self, double width ```
void q_polarchart_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QPolarChart* self ```
double q_polarchart_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QPolarChart* self, double height ```
void q_polarchart_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QPolarChart* self ```
double q_polarchart_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QPolarChart* self, enum Qt__SizeHint which ```
QSizeF* q_polarchart_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QPolarChart* self ```
QGraphicsLayoutItem* q_polarchart_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QPolarChart* self, QGraphicsLayoutItem* parent ```
void q_polarchart_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QPolarChart* self ```
bool q_polarchart_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QPolarChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_polarchart_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_polarchart_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_qbase_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QRectF*) ```
void q_polarchart_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, double* left, double* top, double* right, double* bottom ```
void q_polarchart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, double* left, double* top, double* right, double* bottom ```
void q_polarchart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, double*, double*, double*, double*) ```
void q_polarchart_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_type(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_qbase_type(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int32_t (*slot)() ```
void q_polarchart_on_type(void* self, int32_t (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_qbase_paint(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_polarchart_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_polarchart_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QRectF* (*slot)() ```
void q_polarchart_on_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_qbase_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* (*slot)() ```
void q_polarchart_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QStyleOption* option ```
void q_polarchart_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QStyleOption* option ```
void q_polarchart_qbase_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QStyleOption*) ```
void q_polarchart_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_polarchart_size_hint(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_polarchart_qbase_size_hint(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QSizeF* (*slot)(QPolarChart*, enum Qt__SizeHint, QSizeF*) ```
void q_polarchart_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_update_geometry(void* self, void (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_polarchart_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_polarchart_qbase_item_change(void* self, int64_t change, void* value);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_polarchart_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, const char* propertyName, QVariant* value ```
QVariant* q_polarchart_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, const char* propertyName, QVariant* value ```
QVariant* q_polarchart_qbase_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, const char*, QVariant*) ```
void q_polarchart_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* e ```
bool q_polarchart_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* e ```
bool q_polarchart_qbase_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_window_frame_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPointF* pos ```
int64_t q_polarchart_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPointF* pos ```
int64_t q_polarchart_qbase_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int64_t (*slot)(QPolarChart*, QPointF*) ```
void q_polarchart_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_qbase_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QCloseEvent* event ```
void q_polarchart_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QCloseEvent* event ```
void q_polarchart_qbase_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QCloseEvent*) ```
void q_polarchart_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_qbase_focus_in_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QFocusEvent*) ```
void q_polarchart_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, bool next ```
bool q_polarchart_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, bool next ```
bool q_polarchart_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, bool) ```
void q_polarchart_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_qbase_focus_out_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QFocusEvent*) ```
void q_polarchart_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QHideEvent* event ```
void q_polarchart_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QHideEvent* event ```
void q_polarchart_qbase_hide_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QHideEvent*) ```
void q_polarchart_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMoveEvent* event ```
void q_polarchart_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMoveEvent* event ```
void q_polarchart_qbase_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMoveEvent*) ```
void q_polarchart_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_polish_event(void* self, void (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneResizeEvent* event ```
void q_polarchart_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneResizeEvent* event ```
void q_polarchart_qbase_resize_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneResizeEvent*) ```
void q_polarchart_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QShowEvent* event ```
void q_polarchart_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QShowEvent* event ```
void q_polarchart_qbase_show_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QShowEvent*) ```
void q_polarchart_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_qbase_hover_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneHoverEvent*) ```
void q_polarchart_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_qbase_hover_leave_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneHoverEvent*) ```
void q_polarchart_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_grab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_grab_mouse_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_ungrab_mouse_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_grab_keyboard_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QObject* watched, QEvent* event ```
bool q_polarchart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QObject* watched, QEvent* event ```
bool q_polarchart_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QObject*, QEvent*) ```
void q_polarchart_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QTimerEvent* event ```
void q_polarchart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QTimerEvent* event ```
void q_polarchart_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QTimerEvent*) ```
void q_polarchart_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QChildEvent* event ```
void q_polarchart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QChildEvent* event ```
void q_polarchart_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QChildEvent*) ```
void q_polarchart_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QMetaMethod*) ```
void q_polarchart_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QMetaMethod*) ```
void q_polarchart_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, int phase ```
void q_polarchart_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, int phase ```
void q_polarchart_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, int) ```
void q_polarchart_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPointF* point ```
bool q_polarchart_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPointF* point ```
bool q_polarchart_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QPointF*) ```
void q_polarchart_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_polarchart_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_polarchart_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
bool q_polarchart_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
bool q_polarchart_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QGraphicsItem*) ```
void q_polarchart_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* (*slot)() ```
void q_polarchart_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_polarchart_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_polarchart_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QGraphicsItem*, QEvent*) ```
void q_polarchart_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_polarchart_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_polarchart_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneContextMenuEvent*) ```
void q_polarchart_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneHoverEvent*) ```
void q_polarchart_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QKeyEvent*) ```
void q_polarchart_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QKeyEvent*) ```
void q_polarchart_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneWheelEvent* event ```
void q_polarchart_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneWheelEvent* event ```
void q_polarchart_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneWheelEvent*) ```
void q_polarchart_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QInputMethodEvent* event ```
void q_polarchart_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QInputMethodEvent* event ```
void q_polarchart_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QInputMethodEvent*) ```
void q_polarchart_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_polarchart_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_polarchart_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, enum Qt__InputMethodQuery) ```
void q_polarchart_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension ```
bool q_polarchart_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension ```
bool q_polarchart_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, enum QGraphicsItem__Extension) ```
void q_polarchart_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_polarchart_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_polarchart_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, enum QGraphicsItem__Extension, QVariant*) ```
void q_polarchart_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QVariant* variant ```
QVariant* q_polarchart_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* variant ```
QVariant* q_polarchart_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, QVariant*) ```
void q_polarchart_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
bool q_polarchart_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)() ```
void q_polarchart_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QObject* q_polarchart_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QObject* q_polarchart_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QObject* (*slot)() ```
void q_polarchart_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int32_t (*slot)() ```
void q_polarchart_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, const char* signal ```
int32_t q_polarchart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, const char* signal ```
int32_t q_polarchart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int32_t (*slot)(QPolarChart*, const char*) ```
void q_polarchart_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
bool q_polarchart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
bool q_polarchart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QMetaMethod*) ```
void q_polarchart_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_prepare_geometry_change(void* self, void (*slot)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
void q_polarchart_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
void q_polarchart_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsItem*) ```
void q_polarchart_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, bool ownedByLayout ```
void q_polarchart_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, bool ownedByLayout ```
void q_polarchart_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, bool) ```
void q_polarchart_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// Delete this object from C++ memory.
///
/// ``` QPolarChart* self ```
void q_polarchart_delete(void* self);

/// https://doc.qt.io/qt-6/qpolarchart.html#types

typedef enum {
    QPOLARCHART_POLARORIENTATION_POLARORIENTATIONRADIAL = 1,
    QPOLARCHART_POLARORIENTATION_POLARORIENTATIONANGULAR = 2
} QPolarChart__PolarOrientation;

#endif
