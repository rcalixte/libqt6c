#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqaction.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqcursor.hpp"
#include "../libqeasingcurve.hpp"
#include "../libqfont.hpp"
#include "../libqgraphicseffect.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicslayout.hpp"
#include "../libqgraphicslayoutitem.hpp"
#include "../libqgraphicsscene.hpp"
#include "../libqgraphicstransform.hpp"
#include "../libqgraphicswidget.hpp"
#include "../libqkeysequence.hpp"
#include "libqlegend.hpp"
#include "../libqlocale.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpalette.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "../libqstyleoption.hpp"
#include "../libqthread.hpp"
#include "../libqtransform.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqcoreevent.hpp"
#include "libqpolarchart.hpp"
#include "libqpolarchart.h"

/// https://doc.qt.io/qt-6/qpolarchart.html

/// q_polarchart_new constructs a new QPolarChart object.
///
///
QPolarChart* q_polarchart_new() {
    return QPolarChart_new();
}

/// q_polarchart_new2 constructs a new QPolarChart object.
///
/// ``` QGraphicsItem* parent ```
QPolarChart* q_polarchart_new2(void* parent) {
    return QPolarChart_new2((QGraphicsItem*)parent);
}

/// q_polarchart_new3 constructs a new QPolarChart object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QPolarChart* q_polarchart_new3(void* parent, int64_t wFlags) {
    return QPolarChart_new3((QGraphicsItem*)parent, wFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPolarChart* self ```
QMetaObject* q_polarchart_meta_object(void* self) {
    return QPolarChart_MetaObject((QPolarChart*)self);
}

/// ``` QPolarChart* self, const char* param1 ```
void* q_polarchart_metacast(void* self, const char* param1) {
    return QPolarChart_Metacast((QPolarChart*)self, param1);
}

/// ``` QPolarChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_polarchart_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPolarChart_Metacall((QPolarChart*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPolarChart* self, int32_t (*slot)(QPolarChart*, enum QMetaObject__Call, int, void*) ```
void q_polarchart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPolarChart_OnMetacall((QPolarChart*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPolarChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_polarchart_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPolarChart_QBaseMetacall((QPolarChart*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_polarchart_tr(const char* s) {
    libqt_string _str = QPolarChart_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#addAxis)
///
/// ``` QPolarChart* self, QAbstractAxis* axis, enum QPolarChart__PolarOrientation polarOrientation ```
void q_polarchart_add_axis(void* self, void* axis, int64_t polarOrientation) {
    QPolarChart_AddAxis((QPolarChart*)self, (QAbstractAxis*)axis, polarOrientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
///
/// ``` QPolarChart* self ```
libqt_list /* of QAbstractAxis* */ q_polarchart_axes(void* self) {
    libqt_list _arr = QPolarChart_Axes((QPolarChart*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axisPolarOrientation)
///
/// ``` QAbstractAxis* axis ```
int64_t q_polarchart_axis_polar_orientation(void* axis) {
    return QPolarChart_AxisPolarOrientation((QAbstractAxis*)axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_polarchart_tr2(const char* s, const char* c) {
    libqt_string _str = QPolarChart_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_polarchart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPolarChart_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
///
/// ``` QPolarChart* self, int polarOrientation ```
libqt_list /* of QAbstractAxis* */ q_polarchart_axes1(void* self, int64_t polarOrientation) {
    libqt_list _arr = QPolarChart_Axes1((QPolarChart*)self, polarOrientation);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpolarchart.html#axes)
///
/// ``` QPolarChart* self, int polarOrientation, QAbstractSeries* series ```
libqt_list /* of QAbstractAxis* */ q_polarchart_axes2(void* self, int64_t polarOrientation, void* series) {
    libqt_list _arr = QPolarChart_Axes2((QPolarChart*)self, polarOrientation, (QAbstractSeries*)series);
    return _arr;
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#addSeries)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
void q_polarchart_add_series(void* self, void* series) {
    QChart_AddSeries((QChart*)self, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeSeries)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
void q_polarchart_remove_series(void* self, void* series) {
    QChart_RemoveSeries((QChart*)self, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
///
/// ``` QPolarChart* self ```
void q_polarchart_remove_all_series(void* self) {
    QChart_RemoveAllSeries((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#series)
///
/// ``` QPolarChart* self ```
libqt_list /* of QAbstractSeries* */ q_polarchart_series(void* self) {
    libqt_list _arr = QChart_Series((QChart*)self);
    return _arr;
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// ``` QPolarChart* self, QAbstractAxis* axis ```
void q_polarchart_set_axis_x(void* self, void* axis) {
    QChart_SetAxisX((QChart*)self, (QAbstractAxis*)axis);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// ``` QPolarChart* self, QAbstractAxis* axis ```
void q_polarchart_set_axis_y(void* self, void* axis) {
    QChart_SetAxisY((QChart*)self, (QAbstractAxis*)axis);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// ``` QPolarChart* self ```
QAbstractAxis* q_polarchart_axis_x(void* self) {
    return QChart_AxisX((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// ``` QPolarChart* self ```
QAbstractAxis* q_polarchart_axis_y(void* self) {
    return QChart_AxisY((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAxis)
///
/// ``` QPolarChart* self, QAbstractAxis* axis ```
void q_polarchart_remove_axis(void* self, void* axis) {
    QChart_RemoveAxis((QChart*)self, (QAbstractAxis*)axis);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
///
/// ``` QPolarChart* self ```
void q_polarchart_create_default_axes(void* self) {
    QChart_CreateDefaultAxes((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTheme)
///
/// ``` QPolarChart* self, enum QChart__ChartTheme theme ```
void q_polarchart_set_theme(void* self, int64_t theme) {
    QChart_SetTheme((QChart*)self, theme);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#theme)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_theme(void* self) {
    return QChart_Theme((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitle)
///
/// ``` QPolarChart* self, const char* title ```
void q_polarchart_set_title(void* self, const char* title) {
    QChart_SetTitle((QChart*)self, qstring(title));
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#title)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_title(void* self) {
    libqt_string _str = QChart_Title((QChart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
///
/// ``` QPolarChart* self, QFont* font ```
void q_polarchart_set_title_font(void* self, void* font) {
    QChart_SetTitleFont((QChart*)self, (QFont*)font);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleFont)
///
/// ``` QPolarChart* self ```
QFont* q_polarchart_title_font(void* self) {
    return QChart_TitleFont((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
///
/// ``` QPolarChart* self, QBrush* brush ```
void q_polarchart_set_title_brush(void* self, void* brush) {
    QChart_SetTitleBrush((QChart*)self, (QBrush*)brush);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleBrush)
///
/// ``` QPolarChart* self ```
QBrush* q_polarchart_title_brush(void* self) {
    return QChart_TitleBrush((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
///
/// ``` QPolarChart* self, QBrush* brush ```
void q_polarchart_set_background_brush(void* self, void* brush) {
    QChart_SetBackgroundBrush((QChart*)self, (QBrush*)brush);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
///
/// ``` QPolarChart* self ```
QBrush* q_polarchart_background_brush(void* self) {
    return QChart_BackgroundBrush((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
///
/// ``` QPolarChart* self, QPen* pen ```
void q_polarchart_set_background_pen(void* self, void* pen) {
    QChart_SetBackgroundPen((QChart*)self, (QPen*)pen);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
///
/// ``` QPolarChart* self ```
QPen* q_polarchart_background_pen(void* self) {
    return QChart_BackgroundPen((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_background_visible(void* self) {
    QChart_SetBackgroundVisible((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_background_visible(void* self) {
    return QChart_IsBackgroundVisible((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_drop_shadow_enabled(void* self) {
    QChart_SetDropShadowEnabled((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_drop_shadow_enabled(void* self) {
    return QChart_IsDropShadowEnabled((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
///
/// ``` QPolarChart* self, double diameter ```
void q_polarchart_set_background_roundness(void* self, double diameter) {
    QChart_SetBackgroundRoundness((QChart*)self, diameter);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
///
/// ``` QPolarChart* self ```
double q_polarchart_background_roundness(void* self) {
    return QChart_BackgroundRoundness((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
///
/// ``` QPolarChart* self, int options ```
void q_polarchart_set_animation_options(void* self, int64_t options) {
    QChart_SetAnimationOptions((QChart*)self, options);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationOptions)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_animation_options(void* self) {
    return QChart_AnimationOptions((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
///
/// ``` QPolarChart* self, int msecs ```
void q_polarchart_set_animation_duration(void* self, int msecs) {
    QChart_SetAnimationDuration((QChart*)self, msecs);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationDuration)
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_animation_duration(void* self) {
    return QChart_AnimationDuration((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
///
/// ``` QPolarChart* self, QEasingCurve* curve ```
void q_polarchart_set_animation_easing_curve(void* self, void* curve) {
    QChart_SetAnimationEasingCurve((QChart*)self, (QEasingCurve*)curve);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
///
/// ``` QPolarChart* self ```
QEasingCurve* q_polarchart_animation_easing_curve(void* self) {
    return QChart_AnimationEasingCurve((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// ``` QPolarChart* self ```
void q_polarchart_zoom_in(void* self) {
    QChart_ZoomIn((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomOut)
///
/// ``` QPolarChart* self ```
void q_polarchart_zoom_out(void* self) {
    QChart_ZoomOut((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_zoom_in_with_rect(void* self, void* rect) {
    QChart_ZoomInWithRect((QChart*)self, (QRectF*)rect);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoom)
///
/// ``` QPolarChart* self, double factor ```
void q_polarchart_zoom(void* self, double factor) {
    QChart_Zoom((QChart*)self, factor);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomReset)
///
/// ``` QPolarChart* self ```
void q_polarchart_zoom_reset(void* self) {
    QChart_ZoomReset((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isZoomed)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_zoomed(void* self) {
    return QChart_IsZoomed((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#scroll)
///
/// ``` QPolarChart* self, double dx, double dy ```
void q_polarchart_scroll(void* self, double dx, double dy) {
    QChart_Scroll((QChart*)self, dx, dy);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#legend)
///
/// ``` QPolarChart* self ```
QLegend* q_polarchart_legend(void* self) {
    return QChart_Legend((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setMargins)
///
/// ``` QPolarChart* self, QMargins* margins ```
void q_polarchart_set_margins(void* self, void* margins) {
    QChart_SetMargins((QChart*)self, (QMargins*)margins);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#margins)
///
/// ``` QPolarChart* self ```
QMargins* q_polarchart_margins(void* self) {
    return QChart_Margins((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotArea)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_plot_area(void* self) {
    return QChart_PlotArea((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_set_plot_area(void* self, void* rect) {
    QChart_SetPlotArea((QChart*)self, (QRectF*)rect);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
///
/// ``` QPolarChart* self, QBrush* brush ```
void q_polarchart_set_plot_area_background_brush(void* self, void* brush) {
    QChart_SetPlotAreaBackgroundBrush((QChart*)self, (QBrush*)brush);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
///
/// ``` QPolarChart* self ```
QBrush* q_polarchart_plot_area_background_brush(void* self) {
    return QChart_PlotAreaBackgroundBrush((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
///
/// ``` QPolarChart* self, QPen* pen ```
void q_polarchart_set_plot_area_background_pen(void* self, void* pen) {
    QChart_SetPlotAreaBackgroundPen((QChart*)self, (QPen*)pen);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
///
/// ``` QPolarChart* self ```
QPen* q_polarchart_plot_area_background_pen(void* self) {
    return QChart_PlotAreaBackgroundPen((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_plot_area_background_visible(void* self) {
    QChart_SetPlotAreaBackgroundVisible((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_plot_area_background_visible(void* self) {
    return QChart_IsPlotAreaBackgroundVisible((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
///
/// ``` QPolarChart* self, bool localize ```
void q_polarchart_set_localize_numbers(void* self, bool localize) {
    QChart_SetLocalizeNumbers((QChart*)self, localize);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
///
/// ``` QPolarChart* self ```
bool q_polarchart_localize_numbers(void* self) {
    return QChart_LocalizeNumbers((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocale)
///
/// ``` QPolarChart* self, QLocale* locale ```
void q_polarchart_set_locale(void* self, void* locale) {
    QChart_SetLocale((QChart*)self, (QLocale*)locale);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#locale)
///
/// ``` QPolarChart* self ```
QLocale* q_polarchart_locale(void* self) {
    return QChart_Locale((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// ``` QPolarChart* self, QPointF* position ```
QPointF* q_polarchart_map_to_value(void* self, void* position) {
    return QChart_MapToValue((QChart*)self, (QPointF*)position);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// ``` QPolarChart* self, QPointF* value ```
QPointF* q_polarchart_map_to_position(void* self, void* value) {
    return QChart_MapToPosition((QChart*)self, (QPointF*)value);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#chartType)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_chart_type(void* self) {
    return QChart_ChartType((QChart*)self);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// ``` QPolarChart* self, QRectF* plotArea ```
void q_polarchart_plot_area_changed(void* self, void* plotArea) {
    QChart_PlotAreaChanged((QChart*)self, (QRectF*)plotArea);
}

/// Inherited from QChart
///
/// ``` QPolarChart* self, void (*slot)(QChart*, QRectF*) ```
void q_polarchart_on_plot_area_changed(void* self, void (*slot)(void*, void*)) {
    QChart_Connect_PlotAreaChanged((QChart*)self, (intptr_t)slot);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// ``` QPolarChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_polarchart_set_axis_x2(void* self, void* axis, void* series) {
    QChart_SetAxisX2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// ``` QPolarChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_polarchart_set_axis_y2(void* self, void* axis, void* series) {
    QChart_SetAxisY2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
QAbstractAxis* q_polarchart_axis_x1(void* self, void* series) {
    return QChart_AxisX1((QChart*)self, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// ``` QPolarChart* self, QAbstractSeries* series ```
QAbstractAxis* q_polarchart_axis_y1(void* self, void* series) {
    return QChart_AxisY1((QChart*)self, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// ``` QPolarChart* self, bool visible ```
void q_polarchart_set_background_visible1(void* self, bool visible) {
    QChart_SetBackgroundVisible1((QChart*)self, visible);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_drop_shadow_enabled1(void* self, bool enabled) {
    QChart_SetDropShadowEnabled1((QChart*)self, enabled);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// ``` QPolarChart* self, bool visible ```
void q_polarchart_set_plot_area_background_visible1(void* self, bool visible) {
    QChart_SetPlotAreaBackgroundVisible1((QChart*)self, visible);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// ``` QPolarChart* self, QPointF* position, QAbstractSeries* series ```
QPointF* q_polarchart_map_to_value2(void* self, void* position, void* series) {
    return QChart_MapToValue2((QChart*)self, (QPointF*)position, (QAbstractSeries*)series);
}

/// Inherited from QChart
///
/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// ``` QPolarChart* self, QPointF* value, QAbstractSeries* series ```
QPointF* q_polarchart_map_to_position2(void* self, void* value, void* series) {
    return QChart_MapToPosition2((QChart*)self, (QPointF*)value, (QAbstractSeries*)series);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QPolarChart* self ```
QGraphicsLayout* q_polarchart_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QPolarChart* self, QGraphicsLayout* layout ```
void q_polarchart_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QPolarChart* self ```
void q_polarchart_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QPolarChart* self, enum Qt__LayoutDirection direction ```
void q_polarchart_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QPolarChart* self ```
void q_polarchart_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QPolarChart* self ```
QStyle* q_polarchart_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QPolarChart* self, QStyle* style ```
void q_polarchart_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QPolarChart* self ```
QFont* q_polarchart_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QPolarChart* self, QFont* font ```
void q_polarchart_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QPolarChart* self ```
QPalette* q_polarchart_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QPolarChart* self, QPalette* palette ```
void q_polarchart_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QPolarChart* self ```
bool q_polarchart_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
void q_polarchart_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QPolarChart* self, double left, double top, double right, double bottom ```
void q_polarchart_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QPolarChart* self, QMarginsF* margins ```
void q_polarchart_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QPolarChart* self, double left, double top, double right, double bottom ```
void q_polarchart_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QPolarChart* self, QMarginsF* margins ```
void q_polarchart_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QPolarChart* self, double* left, double* top, double* right, double* bottom ```
void q_polarchart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QPolarChart* self ```
void q_polarchart_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QPolarChart* self, int wFlags ```
void q_polarchart_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QPolarChart* self, const char* title ```
void q_polarchart_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QPolarChart* self, enum Qt__FocusPolicy policy ```
void q_polarchart_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_polarchart_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QPolarChart* self, QKeySequence* sequence ```
int32_t q_polarchart_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QPolarChart* self, QAction* action ```
void q_polarchart_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QPolarChart* self, QAction* actions[] ```
void q_polarchart_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions_list);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QPolarChart* self, QAction* before, QAction* actions[] ```
void q_polarchart_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QPolarChart* self, QAction* before, QAction* action ```
void q_polarchart_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QPolarChart* self, QAction* action ```
void q_polarchart_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QPolarChart* self ```
libqt_list /* of QAction* */ q_polarchart_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QPolarChart* self, enum Qt__WidgetAttribute attribute ```
void q_polarchart_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QPolarChart* self, enum Qt__WidgetAttribute attribute ```
bool q_polarchart_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsWidget*) ```
void q_polarchart_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsWidget*) ```
void q_polarchart_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QPolarChart* self ```
bool q_polarchart_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QPolarChart* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_polarchart_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QPolarChart* self, int id, bool enabled ```
void q_polarchart_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QPolarChart* self, int id, bool enabled ```
void q_polarchart_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QPolarChart* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_polarchart_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QPolarChart* self, enum Qt__GestureType typeVal ```
void q_polarchart_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QPolarChart* self, enum Qt__GestureType typeVal ```
void q_polarchart_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QPolarChart* self ```
void q_polarchart_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QPolarChart* self, void (*slot)(QGraphicsObject*) ```
void q_polarchart_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QPolarChart* self, enum Qt__GestureType typeVal, int flags ```
void q_polarchart_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPolarChart* self, const char* name ```
void q_polarchart_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPolarChart* self ```
bool q_polarchart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPolarChart* self, bool b ```
bool q_polarchart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPolarChart* self ```
QThread* q_polarchart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPolarChart* self, QThread* thread ```
void q_polarchart_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPolarChart* self, int interval ```
int32_t q_polarchart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPolarChart* self, int id ```
void q_polarchart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPolarChart* self ```
libqt_list /* of QObject* */ q_polarchart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPolarChart* self, QObject* parent ```
void q_polarchart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPolarChart* self, QObject* filterObj ```
void q_polarchart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPolarChart* self, QObject* obj ```
void q_polarchart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_polarchart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPolarChart* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_polarchart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_polarchart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_polarchart_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPolarChart* self ```
void q_polarchart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPolarChart* self ```
void q_polarchart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPolarChart* self, const char* name, QVariant* value ```
bool q_polarchart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPolarChart* self, const char* name ```
QVariant* q_polarchart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPolarChart* self ```
const char** q_polarchart_dynamic_property_names(void* self) {
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
/// ``` QPolarChart* self ```
QBindingStorage* q_polarchart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPolarChart* self ```
QBindingStorage* q_polarchart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPolarChart* self ```
void q_polarchart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPolarChart* self, void (*slot)(QObject*) ```
void q_polarchart_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPolarChart* self ```
QObject* q_polarchart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPolarChart* self, const char* classname ```
bool q_polarchart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPolarChart* self ```
void q_polarchart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPolarChart* self, int interval, enum Qt__TimerType timerType ```
int32_t q_polarchart_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_polarchart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPolarChart* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_polarchart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPolarChart* self, QObject* param1 ```
void q_polarchart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPolarChart* self, void (*slot)(QObject*, QObject*) ```
void q_polarchart_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QPolarChart* self ```
QGraphicsScene* q_polarchart_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QPolarChart* self ```
QGraphicsObject* q_polarchart_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QPolarChart* self ```
QGraphicsWidget* q_polarchart_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QPolarChart* self, QGraphicsItem* parent ```
void q_polarchart_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QPolarChart* self ```
libqt_list /* of QGraphicsItem* */ q_polarchart_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QPolarChart* self ```
QGraphicsObject* q_polarchart_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QPolarChart* self ```
QGraphicsObject* q_polarchart_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QPolarChart* self ```
QGraphicsItemGroup* q_polarchart_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QPolarChart* self, QGraphicsItemGroup* group ```
void q_polarchart_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_polarchart_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QPolarChart* self, int flags ```
void q_polarchart_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QPolarChart* self, enum QGraphicsItem__CacheMode mode ```
void q_polarchart_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QPolarChart* self, enum QGraphicsItem__PanelModality panelModality ```
void q_polarchart_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QPolarChart* self ```
const char* q_polarchart_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QPolarChart* self, const char* toolTip ```
void q_polarchart_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QPolarChart* self ```
QCursor* q_polarchart_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QPolarChart* self, QCursor* cursor ```
void q_polarchart_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QPolarChart* self ```
bool q_polarchart_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QPolarChart* self ```
void q_polarchart_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QPolarChart* self, QGraphicsItem* parent ```
bool q_polarchart_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QPolarChart* self, bool visible ```
void q_polarchart_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QPolarChart* self ```
void q_polarchart_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QPolarChart* self ```
void q_polarchart_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QPolarChart* self, bool selected ```
void q_polarchart_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QPolarChart* self ```
bool q_polarchart_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QPolarChart* self, bool on ```
void q_polarchart_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QPolarChart* self ```
double q_polarchart_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QPolarChart* self ```
double q_polarchart_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QPolarChart* self, double opacity ```
void q_polarchart_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QPolarChart* self ```
QGraphicsEffect* q_polarchart_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QPolarChart* self, QGraphicsEffect* effect ```
void q_polarchart_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QPolarChart* self, int buttons ```
void q_polarchart_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QPolarChart* self ```
bool q_polarchart_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QPolarChart* self, bool enabled ```
void q_polarchart_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QPolarChart* self, bool active ```
void q_polarchart_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QPolarChart* self ```
bool q_polarchart_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QPolarChart* self ```
void q_polarchart_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QPolarChart* self ```
void q_polarchart_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
void q_polarchart_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QPolarChart* self ```
void q_polarchart_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QPolarChart* self ```
void q_polarchart_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QPolarChart* self ```
void q_polarchart_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QPolarChart* self ```
void q_polarchart_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QPolarChart* self ```
QPointF* q_polarchart_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QPolarChart* self ```
double q_polarchart_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QPolarChart* self, double x ```
void q_polarchart_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QPolarChart* self ```
double q_polarchart_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QPolarChart* self, double y ```
void q_polarchart_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QPolarChart* self ```
QPointF* q_polarchart_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QPolarChart* self, QPointF* pos ```
void q_polarchart_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QPolarChart* self, double x, double y ```
void q_polarchart_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QPolarChart* self, double dx, double dy ```
void q_polarchart_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self ```
void q_polarchart_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
void q_polarchart_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QPolarChart* self ```
QTransform* q_polarchart_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QPolarChart* self ```
QTransform* q_polarchart_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QPolarChart* self, QTransform* viewportTransform ```
QTransform* q_polarchart_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QPolarChart* self, QGraphicsItem* other ```
QTransform* q_polarchart_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QPolarChart* self, QTransform* matrix ```
void q_polarchart_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QPolarChart* self ```
void q_polarchart_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QPolarChart* self, double angle ```
void q_polarchart_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QPolarChart* self ```
double q_polarchart_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QPolarChart* self, double scale ```
void q_polarchart_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QPolarChart* self ```
double q_polarchart_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QPolarChart* self ```
libqt_list /* of QGraphicsTransform* */ q_polarchart_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QPolarChart* self, QGraphicsTransform* transformations[] ```
void q_polarchart_set_transformations(void* self, void* transformations[]) {
    QGraphicsTransform** transformations_arr = (QGraphicsTransform**)transformations;
    size_t transformations_len = 0;
    while (transformations_arr[transformations_len] != NULL) {
        transformations_len++;
    }
    libqt_list transformations_list = {
        .len = transformations_len,
        .data = {(QGraphicsTransform*)transformations},
    };
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations_list);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QPolarChart* self ```
QPointF* q_polarchart_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QPolarChart* self, QPointF* origin ```
void q_polarchart_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QPolarChart* self, double ax, double ay ```
void q_polarchart_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QPolarChart* self ```
double q_polarchart_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QPolarChart* self, double z ```
void q_polarchart_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QPolarChart* self, QGraphicsItem* sibling ```
void q_polarchart_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QPolarChart* self ```
libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
bool q_polarchart_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QPolarChart* self, QTransform* itemToDeviceTransform ```
QRegion* q_polarchart_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QPolarChart* self ```
double q_polarchart_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QPolarChart* self, double granularity ```
void q_polarchart_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QPolarChart* self ```
void q_polarchart_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QPolarChart* self, double x, double y, double width, double height ```
void q_polarchart_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_polarchart_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_polarchart_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_polarchart_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_polarchart_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QPolarChart* self, QPointF* point ```
QPointF* q_polarchart_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_polarchart_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QPolarChart* self, QRectF* rect ```
QRectF* q_polarchart_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_polarchart_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QPolarChart* self, QPainterPath* path ```
QPainterPath* q_polarchart_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_polarchart_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_polarchart_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QPolarChart* self, double x, double y ```
QPointF* q_polarchart_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QPolarChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QPolarChart* self, double x, double y, double w, double h ```
QRectF* q_polarchart_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QPolarChart* self, QGraphicsItem* child ```
bool q_polarchart_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QPolarChart* self, QGraphicsItem* other ```
QGraphicsItem* q_polarchart_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QPolarChart* self, int key ```
QVariant* q_polarchart_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QPolarChart* self, int key, QVariant* value ```
void q_polarchart_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QPolarChart* self ```
int64_t q_polarchart_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QPolarChart* self, int hints ```
void q_polarchart_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QPolarChart* self, QGraphicsItem* filterItem ```
void q_polarchart_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QPolarChart* self, QGraphicsItem* filterItem ```
void q_polarchart_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_polarchart_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QPolarChart* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_polarchart_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QPolarChart* self, enum Qt__FocusReason focusReason ```
void q_polarchart_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, QRectF* rect, int xmargin ```
void q_polarchart_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, QRectF* rect, int xmargin, int ymargin ```
void q_polarchart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, double x, double y, double w, double h, int xmargin ```
void q_polarchart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QPolarChart* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_polarchart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QPolarChart* self, QGraphicsItem* other, bool* ok ```
QTransform* q_polarchart_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QPolarChart* self, QTransform* matrix, bool combine ```
void q_polarchart_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QPolarChart* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_polarchart_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QPolarChart* self, QRectF* rect ```
bool q_polarchart_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QPolarChart* self, double dx, double dy, QRectF* rect ```
void q_polarchart_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QPolarChart* self, QSizePolicy* policy ```
void q_polarchart_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QPolarChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_polarchart_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QPolarChart* self ```
QSizePolicy* q_polarchart_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QPolarChart* self, double width ```
void q_polarchart_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QPolarChart* self ```
double q_polarchart_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QPolarChart* self, double height ```
void q_polarchart_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QPolarChart* self ```
double q_polarchart_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QPolarChart* self, double width ```
void q_polarchart_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QPolarChart* self ```
double q_polarchart_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QPolarChart* self, double height ```
void q_polarchart_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QPolarChart* self ```
double q_polarchart_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QPolarChart* self, QSizeF* size ```
void q_polarchart_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QPolarChart* self, double w, double h ```
void q_polarchart_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QPolarChart* self ```
QSizeF* q_polarchart_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QPolarChart* self, double width ```
void q_polarchart_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QPolarChart* self ```
double q_polarchart_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QPolarChart* self, double height ```
void q_polarchart_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QPolarChart* self ```
double q_polarchart_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QPolarChart* self, enum Qt__SizeHint which ```
QSizeF* q_polarchart_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QPolarChart* self ```
QGraphicsLayoutItem* q_polarchart_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QPolarChart* self, QGraphicsLayoutItem* parent ```
void q_polarchart_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QPolarChart* self ```
QGraphicsItem* q_polarchart_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QPolarChart* self ```
bool q_polarchart_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QPolarChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_polarchart_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_polarchart_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_set_geometry(void* self, void* rect) {
    QPolarChart_SetGeometry((QPolarChart*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QRectF* rect ```
void q_polarchart_qbase_set_geometry(void* self, void* rect) {
    QPolarChart_QBaseSetGeometry((QPolarChart*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QRectF*) ```
void q_polarchart_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnSetGeometry((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, double* left, double* top, double* right, double* bottom ```
void q_polarchart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QPolarChart_GetContentsMargins((QPolarChart*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, double* left, double* top, double* right, double* bottom ```
void q_polarchart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QPolarChart_QBaseGetContentsMargins((QPolarChart*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, double*, double*, double*, double*) ```
void q_polarchart_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QPolarChart_OnGetContentsMargins((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_type(void* self) {
    return QPolarChart_Type((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_qbase_type(void* self) {
    return QPolarChart_QBaseType((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int32_t (*slot)() ```
void q_polarchart_on_type(void* self, int32_t (*slot)()) {
    QPolarChart_OnType((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_paint(void* self, void* painter, void* option, void* widget) {
    QPolarChart_Paint((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QPolarChart_QBasePaint((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_polarchart_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QPolarChart_OnPaint((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QPolarChart_PaintWindowFrame((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_polarchart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QPolarChart_QBasePaintWindowFrame((QPolarChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_polarchart_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QPolarChart_OnPaintWindowFrame((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_bounding_rect(void* self) {
    return QPolarChart_BoundingRect((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QRectF* q_polarchart_qbase_bounding_rect(void* self) {
    return QPolarChart_QBaseBoundingRect((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QRectF* (*slot)() ```
void q_polarchart_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QPolarChart_OnBoundingRect((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_shape(void* self) {
    return QPolarChart_Shape((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_qbase_shape(void* self) {
    return QPolarChart_QBaseShape((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* (*slot)() ```
void q_polarchart_on_shape(void* self, QPainterPath* (*slot)()) {
    QPolarChart_OnShape((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QStyleOption* option ```
void q_polarchart_init_style_option(void* self, void* option) {
    QPolarChart_InitStyleOption((QPolarChart*)self, (QStyleOption*)option);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QStyleOption* option ```
void q_polarchart_qbase_init_style_option(void* self, void* option) {
    QPolarChart_QBaseInitStyleOption((QPolarChart*)self, (QStyleOption*)option);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QStyleOption*) ```
void q_polarchart_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnInitStyleOption((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_polarchart_size_hint(void* self, int64_t which, void* constraint) {
    return QPolarChart_SizeHint((QPolarChart*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_polarchart_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QPolarChart_QBaseSizeHint((QPolarChart*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QSizeF* (*slot)(QPolarChart*, enum Qt__SizeHint, QSizeF*) ```
void q_polarchart_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QPolarChart_OnSizeHint((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_update_geometry(void* self) {
    QPolarChart_UpdateGeometry((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_update_geometry(void* self) {
    QPolarChart_QBaseUpdateGeometry((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_update_geometry(void* self, void (*slot)()) {
    QPolarChart_OnUpdateGeometry((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_polarchart_item_change(void* self, int64_t change, void* value) {
    return QPolarChart_ItemChange((QPolarChart*)self, change, (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_polarchart_qbase_item_change(void* self, int64_t change, void* value) {
    return QPolarChart_QBaseItemChange((QPolarChart*)self, change, (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_polarchart_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QPolarChart_OnItemChange((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, const char* propertyName, QVariant* value ```
QVariant* q_polarchart_property_change(void* self, const char* propertyName, void* value) {
    return QPolarChart_PropertyChange((QPolarChart*)self, qstring(propertyName), (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, const char* propertyName, QVariant* value ```
QVariant* q_polarchart_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QPolarChart_QBasePropertyChange((QPolarChart*)self, qstring(propertyName), (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, const char*, QVariant*) ```
void q_polarchart_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QPolarChart_OnPropertyChange((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_scene_event(void* self, void* event) {
    return QPolarChart_SceneEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_qbase_scene_event(void* self, void* event) {
    return QPolarChart_QBaseSceneEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnSceneEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* e ```
bool q_polarchart_window_frame_event(void* self, void* e) {
    return QPolarChart_WindowFrameEvent((QPolarChart*)self, (QEvent*)e);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* e ```
bool q_polarchart_qbase_window_frame_event(void* self, void* e) {
    return QPolarChart_QBaseWindowFrameEvent((QPolarChart*)self, (QEvent*)e);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnWindowFrameEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPointF* pos ```
int64_t q_polarchart_window_frame_section_at(void* self, void* pos) {
    return QPolarChart_WindowFrameSectionAt((QPolarChart*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPointF* pos ```
int64_t q_polarchart_qbase_window_frame_section_at(void* self, void* pos) {
    return QPolarChart_QBaseWindowFrameSectionAt((QPolarChart*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int64_t (*slot)(QPolarChart*, QPointF*) ```
void q_polarchart_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QPolarChart_OnWindowFrameSectionAt((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_event(void* self, void* event) {
    return QPolarChart_Event((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
bool q_polarchart_qbase_event(void* self, void* event) {
    return QPolarChart_QBaseEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_event(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_change_event(void* self, void* event) {
    QPolarChart_ChangeEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_change_event(void* self, void* event) {
    QPolarChart_QBaseChangeEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnChangeEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QCloseEvent* event ```
void q_polarchart_close_event(void* self, void* event) {
    QPolarChart_CloseEvent((QPolarChart*)self, (QCloseEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QCloseEvent* event ```
void q_polarchart_qbase_close_event(void* self, void* event) {
    QPolarChart_QBaseCloseEvent((QPolarChart*)self, (QCloseEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QCloseEvent*) ```
void q_polarchart_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnCloseEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_focus_in_event(void* self, void* event) {
    QPolarChart_FocusInEvent((QPolarChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_qbase_focus_in_event(void* self, void* event) {
    QPolarChart_QBaseFocusInEvent((QPolarChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QFocusEvent*) ```
void q_polarchart_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnFocusInEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, bool next ```
bool q_polarchart_focus_next_prev_child(void* self, bool next) {
    return QPolarChart_FocusNextPrevChild((QPolarChart*)self, next);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, bool next ```
bool q_polarchart_qbase_focus_next_prev_child(void* self, bool next) {
    return QPolarChart_QBaseFocusNextPrevChild((QPolarChart*)self, next);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, bool) ```
void q_polarchart_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPolarChart_OnFocusNextPrevChild((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_focus_out_event(void* self, void* event) {
    QPolarChart_FocusOutEvent((QPolarChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QFocusEvent* event ```
void q_polarchart_qbase_focus_out_event(void* self, void* event) {
    QPolarChart_QBaseFocusOutEvent((QPolarChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QFocusEvent*) ```
void q_polarchart_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnFocusOutEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QHideEvent* event ```
void q_polarchart_hide_event(void* self, void* event) {
    QPolarChart_HideEvent((QPolarChart*)self, (QHideEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QHideEvent* event ```
void q_polarchart_qbase_hide_event(void* self, void* event) {
    QPolarChart_QBaseHideEvent((QPolarChart*)self, (QHideEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QHideEvent*) ```
void q_polarchart_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHideEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMoveEvent* event ```
void q_polarchart_move_event(void* self, void* event) {
    QPolarChart_MoveEvent((QPolarChart*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMoveEvent* event ```
void q_polarchart_qbase_move_event(void* self, void* event) {
    QPolarChart_QBaseMoveEvent((QPolarChart*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMoveEvent*) ```
void q_polarchart_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_polish_event(void* self) {
    QPolarChart_PolishEvent((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_polish_event(void* self) {
    QPolarChart_QBasePolishEvent((QPolarChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_polish_event(void* self, void (*slot)()) {
    QPolarChart_OnPolishEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneResizeEvent* event ```
void q_polarchart_resize_event(void* self, void* event) {
    QPolarChart_ResizeEvent((QPolarChart*)self, (QGraphicsSceneResizeEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneResizeEvent* event ```
void q_polarchart_qbase_resize_event(void* self, void* event) {
    QPolarChart_QBaseResizeEvent((QPolarChart*)self, (QGraphicsSceneResizeEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneResizeEvent*) ```
void q_polarchart_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnResizeEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QShowEvent* event ```
void q_polarchart_show_event(void* self, void* event) {
    QPolarChart_ShowEvent((QPolarChart*)self, (QShowEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QShowEvent* event ```
void q_polarchart_qbase_show_event(void* self, void* event) {
    QPolarChart_QBaseShowEvent((QPolarChart*)self, (QShowEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QShowEvent*) ```
void q_polarchart_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnShowEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_hover_move_event(void* self, void* event) {
    QPolarChart_HoverMoveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_qbase_hover_move_event(void* self, void* event) {
    QPolarChart_QBaseHoverMoveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneHoverEvent*) ```
void q_polarchart_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHoverMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_hover_leave_event(void* self, void* event) {
    QPolarChart_HoverLeaveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_qbase_hover_leave_event(void* self, void* event) {
    QPolarChart_QBaseHoverLeaveEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneHoverEvent*) ```
void q_polarchart_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHoverLeaveEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_grab_mouse_event(void* self, void* event) {
    QPolarChart_GrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_grab_mouse_event(void* self, void* event) {
    QPolarChart_QBaseGrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnGrabMouseEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_ungrab_mouse_event(void* self, void* event) {
    QPolarChart_UngrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_ungrab_mouse_event(void* self, void* event) {
    QPolarChart_QBaseUngrabMouseEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnUngrabMouseEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_grab_keyboard_event(void* self, void* event) {
    QPolarChart_GrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_grab_keyboard_event(void* self, void* event) {
    QPolarChart_QBaseGrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnGrabKeyboardEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_ungrab_keyboard_event(void* self, void* event) {
    QPolarChart_UngrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_ungrab_keyboard_event(void* self, void* event) {
    QPolarChart_QBaseUngrabKeyboardEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnUngrabKeyboardEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QObject* watched, QEvent* event ```
bool q_polarchart_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_EventFilter((QPolarChart*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QObject* watched, QEvent* event ```
bool q_polarchart_qbase_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_QBaseEventFilter((QPolarChart*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QObject*, QEvent*) ```
void q_polarchart_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPolarChart_OnEventFilter((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QTimerEvent* event ```
void q_polarchart_timer_event(void* self, void* event) {
    QPolarChart_TimerEvent((QPolarChart*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QTimerEvent* event ```
void q_polarchart_qbase_timer_event(void* self, void* event) {
    QPolarChart_QBaseTimerEvent((QPolarChart*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QTimerEvent*) ```
void q_polarchart_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnTimerEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QChildEvent* event ```
void q_polarchart_child_event(void* self, void* event) {
    QPolarChart_ChildEvent((QPolarChart*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QChildEvent* event ```
void q_polarchart_qbase_child_event(void* self, void* event) {
    QPolarChart_QBaseChildEvent((QPolarChart*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QChildEvent*) ```
void q_polarchart_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnChildEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_custom_event(void* self, void* event) {
    QPolarChart_CustomEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QEvent* event ```
void q_polarchart_qbase_custom_event(void* self, void* event) {
    QPolarChart_QBaseCustomEvent((QPolarChart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QEvent*) ```
void q_polarchart_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnCustomEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_connect_notify(void* self, void* signal) {
    QPolarChart_ConnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_qbase_connect_notify(void* self, void* signal) {
    QPolarChart_QBaseConnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QMetaMethod*) ```
void q_polarchart_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnConnectNotify((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_disconnect_notify(void* self, void* signal) {
    QPolarChart_DisconnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
void q_polarchart_qbase_disconnect_notify(void* self, void* signal) {
    QPolarChart_QBaseDisconnectNotify((QPolarChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QMetaMethod*) ```
void q_polarchart_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDisconnectNotify((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, int phase ```
void q_polarchart_advance(void* self, int phase) {
    QPolarChart_Advance((QPolarChart*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, int phase ```
void q_polarchart_qbase_advance(void* self, int phase) {
    QPolarChart_QBaseAdvance((QPolarChart*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, int) ```
void q_polarchart_on_advance(void* self, void (*slot)(void*, int)) {
    QPolarChart_OnAdvance((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPointF* point ```
bool q_polarchart_contains(void* self, void* point) {
    return QPolarChart_Contains((QPolarChart*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPointF* point ```
bool q_polarchart_qbase_contains(void* self, void* point) {
    return QPolarChart_QBaseContains((QPolarChart*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QPointF*) ```
void q_polarchart_on_contains(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnContains((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_collides_with_item(void* self, void* other, int64_t mode) {
    return QPolarChart_CollidesWithItem((QPolarChart*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QPolarChart_QBaseCollidesWithItem((QPolarChart*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_polarchart_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPolarChart_OnCollidesWithItem((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_collides_with_path(void* self, void* path, int64_t mode) {
    return QPolarChart_CollidesWithPath((QPolarChart*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_polarchart_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QPolarChart_QBaseCollidesWithPath((QPolarChart*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_polarchart_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPolarChart_OnCollidesWithPath((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
bool q_polarchart_is_obscured_by(void* self, void* item) {
    return QPolarChart_IsObscuredBy((QPolarChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
bool q_polarchart_qbase_is_obscured_by(void* self, void* item) {
    return QPolarChart_QBaseIsObscuredBy((QPolarChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QGraphicsItem*) ```
void q_polarchart_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnIsObscuredBy((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_opaque_area(void* self) {
    return QPolarChart_OpaqueArea((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QPainterPath* q_polarchart_qbase_opaque_area(void* self) {
    return QPolarChart_QBaseOpaqueArea((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QPainterPath* (*slot)() ```
void q_polarchart_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QPolarChart_OnOpaqueArea((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_polarchart_scene_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_SceneEventFilter((QPolarChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_polarchart_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QPolarChart_QBaseSceneEventFilter((QPolarChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QGraphicsItem*, QEvent*) ```
void q_polarchart_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPolarChart_OnSceneEventFilter((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_polarchart_context_menu_event(void* self, void* event) {
    QPolarChart_ContextMenuEvent((QPolarChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_polarchart_qbase_context_menu_event(void* self, void* event) {
    QPolarChart_QBaseContextMenuEvent((QPolarChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneContextMenuEvent*) ```
void q_polarchart_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnContextMenuEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drag_enter_event(void* self, void* event) {
    QPolarChart_DragEnterEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drag_enter_event(void* self, void* event) {
    QPolarChart_QBaseDragEnterEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDragEnterEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drag_leave_event(void* self, void* event) {
    QPolarChart_DragLeaveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drag_leave_event(void* self, void* event) {
    QPolarChart_QBaseDragLeaveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDragLeaveEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drag_move_event(void* self, void* event) {
    QPolarChart_DragMoveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drag_move_event(void* self, void* event) {
    QPolarChart_QBaseDragMoveEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDragMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_drop_event(void* self, void* event) {
    QPolarChart_DropEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneDragDropEvent* event ```
void q_polarchart_qbase_drop_event(void* self, void* event) {
    QPolarChart_QBaseDropEvent((QPolarChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneDragDropEvent*) ```
void q_polarchart_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnDropEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_hover_enter_event(void* self, void* event) {
    QPolarChart_HoverEnterEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneHoverEvent* event ```
void q_polarchart_qbase_hover_enter_event(void* self, void* event) {
    QPolarChart_QBaseHoverEnterEvent((QPolarChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneHoverEvent*) ```
void q_polarchart_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnHoverEnterEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_key_press_event(void* self, void* event) {
    QPolarChart_KeyPressEvent((QPolarChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_qbase_key_press_event(void* self, void* event) {
    QPolarChart_QBaseKeyPressEvent((QPolarChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QKeyEvent*) ```
void q_polarchart_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnKeyPressEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_key_release_event(void* self, void* event) {
    QPolarChart_KeyReleaseEvent((QPolarChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QKeyEvent* event ```
void q_polarchart_qbase_key_release_event(void* self, void* event) {
    QPolarChart_QBaseKeyReleaseEvent((QPolarChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QKeyEvent*) ```
void q_polarchart_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnKeyReleaseEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_press_event(void* self, void* event) {
    QPolarChart_MousePressEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_press_event(void* self, void* event) {
    QPolarChart_QBaseMousePressEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMousePressEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_move_event(void* self, void* event) {
    QPolarChart_MouseMoveEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_move_event(void* self, void* event) {
    QPolarChart_QBaseMouseMoveEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMouseMoveEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_release_event(void* self, void* event) {
    QPolarChart_MouseReleaseEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_release_event(void* self, void* event) {
    QPolarChart_QBaseMouseReleaseEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMouseReleaseEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_mouse_double_click_event(void* self, void* event) {
    QPolarChart_MouseDoubleClickEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneMouseEvent* event ```
void q_polarchart_qbase_mouse_double_click_event(void* self, void* event) {
    QPolarChart_QBaseMouseDoubleClickEvent((QPolarChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneMouseEvent*) ```
void q_polarchart_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnMouseDoubleClickEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneWheelEvent* event ```
void q_polarchart_wheel_event(void* self, void* event) {
    QPolarChart_WheelEvent((QPolarChart*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsSceneWheelEvent* event ```
void q_polarchart_qbase_wheel_event(void* self, void* event) {
    QPolarChart_QBaseWheelEvent((QPolarChart*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsSceneWheelEvent*) ```
void q_polarchart_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnWheelEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QInputMethodEvent* event ```
void q_polarchart_input_method_event(void* self, void* event) {
    QPolarChart_InputMethodEvent((QPolarChart*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QInputMethodEvent* event ```
void q_polarchart_qbase_input_method_event(void* self, void* event) {
    QPolarChart_QBaseInputMethodEvent((QPolarChart*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QInputMethodEvent*) ```
void q_polarchart_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnInputMethodEvent((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_polarchart_input_method_query(void* self, int64_t query) {
    return QPolarChart_InputMethodQuery((QPolarChart*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_polarchart_qbase_input_method_query(void* self, int64_t query) {
    return QPolarChart_QBaseInputMethodQuery((QPolarChart*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, enum Qt__InputMethodQuery) ```
void q_polarchart_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPolarChart_OnInputMethodQuery((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension ```
bool q_polarchart_supports_extension(void* self, int64_t extension) {
    return QPolarChart_SupportsExtension((QPolarChart*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension ```
bool q_polarchart_qbase_supports_extension(void* self, int64_t extension) {
    return QPolarChart_QBaseSupportsExtension((QPolarChart*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, enum QGraphicsItem__Extension) ```
void q_polarchart_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QPolarChart_OnSupportsExtension((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_polarchart_set_extension(void* self, int64_t extension, void* variant) {
    QPolarChart_SetExtension((QPolarChart*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_polarchart_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QPolarChart_QBaseSetExtension((QPolarChart*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, enum QGraphicsItem__Extension, QVariant*) ```
void q_polarchart_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QPolarChart_OnSetExtension((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QVariant* variant ```
QVariant* q_polarchart_extension(void* self, void* variant) {
    return QPolarChart_Extension((QPolarChart*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* variant ```
QVariant* q_polarchart_qbase_extension(void* self, void* variant) {
    return QPolarChart_QBaseExtension((QPolarChart*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QVariant* (*slot)(QPolarChart*, QVariant*) ```
void q_polarchart_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QPolarChart_OnExtension((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
bool q_polarchart_is_empty(void* self) {
    return QPolarChart_IsEmpty((QPolarChart*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
bool q_polarchart_qbase_is_empty(void* self) {
    return QPolarChart_QBaseIsEmpty((QPolarChart*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)() ```
void q_polarchart_on_is_empty(void* self, bool (*slot)()) {
    QPolarChart_OnIsEmpty((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_update_micro_focus(void* self) {
    QPolarChart_UpdateMicroFocus((QPolarChart*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_update_micro_focus(void* self) {
    QPolarChart_QBaseUpdateMicroFocus((QPolarChart*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_update_micro_focus(void* self, void (*slot)()) {
    QPolarChart_OnUpdateMicroFocus((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
QObject* q_polarchart_sender(void* self) {
    return QPolarChart_Sender((QPolarChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
QObject* q_polarchart_qbase_sender(void* self) {
    return QPolarChart_QBaseSender((QPolarChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, QObject* (*slot)() ```
void q_polarchart_on_sender(void* self, QObject* (*slot)()) {
    QPolarChart_OnSender((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_sender_signal_index(void* self) {
    return QPolarChart_SenderSignalIndex((QPolarChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
int32_t q_polarchart_qbase_sender_signal_index(void* self) {
    return QPolarChart_QBaseSenderSignalIndex((QPolarChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int32_t (*slot)() ```
void q_polarchart_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPolarChart_OnSenderSignalIndex((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, const char* signal ```
int32_t q_polarchart_receivers(void* self, const char* signal) {
    return QPolarChart_Receivers((QPolarChart*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, const char* signal ```
int32_t q_polarchart_qbase_receivers(void* self, const char* signal) {
    return QPolarChart_QBaseReceivers((QPolarChart*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, int32_t (*slot)(QPolarChart*, const char*) ```
void q_polarchart_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPolarChart_OnReceivers((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
bool q_polarchart_is_signal_connected(void* self, void* signal) {
    return QPolarChart_IsSignalConnected((QPolarChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QMetaMethod* signal ```
bool q_polarchart_qbase_is_signal_connected(void* self, void* signal) {
    return QPolarChart_QBaseIsSignalConnected((QPolarChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, bool (*slot)(QPolarChart*, QMetaMethod*) ```
void q_polarchart_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPolarChart_OnIsSignalConnected((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_add_to_index(void* self) {
    QPolarChart_AddToIndex((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_add_to_index(void* self) {
    QPolarChart_QBaseAddToIndex((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_add_to_index(void* self, void (*slot)()) {
    QPolarChart_OnAddToIndex((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_remove_from_index(void* self) {
    QPolarChart_RemoveFromIndex((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_remove_from_index(void* self) {
    QPolarChart_QBaseRemoveFromIndex((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_remove_from_index(void* self, void (*slot)()) {
    QPolarChart_OnRemoveFromIndex((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_prepare_geometry_change(void* self) {
    QPolarChart_PrepareGeometryChange((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self ```
void q_polarchart_qbase_prepare_geometry_change(void* self) {
    QPolarChart_QBasePrepareGeometryChange((QPolarChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)() ```
void q_polarchart_on_prepare_geometry_change(void* self, void (*slot)()) {
    QPolarChart_OnPrepareGeometryChange((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
void q_polarchart_set_graphics_item(void* self, void* item) {
    QPolarChart_SetGraphicsItem((QPolarChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, QGraphicsItem* item ```
void q_polarchart_qbase_set_graphics_item(void* self, void* item) {
    QPolarChart_QBaseSetGraphicsItem((QPolarChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, QGraphicsItem*) ```
void q_polarchart_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QPolarChart_OnSetGraphicsItem((QPolarChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPolarChart* self, bool ownedByLayout ```
void q_polarchart_set_owned_by_layout(void* self, bool ownedByLayout) {
    QPolarChart_SetOwnedByLayout((QPolarChart*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPolarChart* self, bool ownedByLayout ```
void q_polarchart_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QPolarChart_QBaseSetOwnedByLayout((QPolarChart*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPolarChart* self, void (*slot)(QPolarChart*, bool) ```
void q_polarchart_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QPolarChart_OnSetOwnedByLayout((QPolarChart*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPolarChart* self ```
void q_polarchart_delete(void* self) {
    QPolarChart_Delete((QPolarChart*)(self));
}