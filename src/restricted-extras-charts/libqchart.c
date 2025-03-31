#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqaction.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
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
#include "libqchart.hpp"
#include "libqchart.h"

/// https://doc.qt.io/qt-6/qchart.html

/// q_chart_new constructs a new QChart object.
///
///
QChart* q_chart_new() {
    return QChart_new();
}

/// q_chart_new2 constructs a new QChart object.
///
/// ``` QGraphicsItem* parent ```
QChart* q_chart_new2(void* parent) {
    return QChart_new2((QGraphicsItem*)parent);
}

/// q_chart_new3 constructs a new QChart object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QChart* q_chart_new3(void* parent, int64_t wFlags) {
    return QChart_new3((QGraphicsItem*)parent, wFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QChart* self ```
QMetaObject* q_chart_meta_object(void* self) {
    return QChart_MetaObject((QChart*)self);
}

/// ``` QChart* self, const char* param1 ```
void* q_chart_metacast(void* self, const char* param1) {
    return QChart_Metacast((QChart*)self, param1);
}

/// ``` QChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chart_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QChart_Metacall((QChart*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QChart* self, int32_t (*slot)(QChart*, enum QMetaObject__Call, int, void*) ```
void q_chart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QChart_OnMetacall((QChart*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chart_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QChart_QBaseMetacall((QChart*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_chart_tr(const char* s) {
    libqt_string _str = QChart_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#addSeries)
///
/// ``` QChart* self, QAbstractSeries* series ```
void q_chart_add_series(void* self, void* series) {
    QChart_AddSeries((QChart*)self, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeSeries)
///
/// ``` QChart* self, QAbstractSeries* series ```
void q_chart_remove_series(void* self, void* series) {
    QChart_RemoveSeries((QChart*)self, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAllSeries)
///
/// ``` QChart* self ```
void q_chart_remove_all_series(void* self) {
    QChart_RemoveAllSeries((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#series)
///
/// ``` QChart* self ```
libqt_list /* of QAbstractSeries* */ q_chart_series(void* self) {
    libqt_list _arr = QChart_Series((QChart*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// ``` QChart* self, QAbstractAxis* axis ```
void q_chart_set_axis_x(void* self, void* axis) {
    QChart_SetAxisX((QChart*)self, (QAbstractAxis*)axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// ``` QChart* self, QAbstractAxis* axis ```
void q_chart_set_axis_y(void* self, void* axis) {
    QChart_SetAxisY((QChart*)self, (QAbstractAxis*)axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// ``` QChart* self ```
QAbstractAxis* q_chart_axis_x(void* self) {
    return QChart_AxisX((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// ``` QChart* self ```
QAbstractAxis* q_chart_axis_y(void* self) {
    return QChart_AxisY((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#addAxis)
///
/// ``` QChart* self, QAbstractAxis* axis, int alignment ```
void q_chart_add_axis(void* self, void* axis, int64_t alignment) {
    QChart_AddAxis((QChart*)self, (QAbstractAxis*)axis, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#removeAxis)
///
/// ``` QChart* self, QAbstractAxis* axis ```
void q_chart_remove_axis(void* self, void* axis) {
    QChart_RemoveAxis((QChart*)self, (QAbstractAxis*)axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axes)
///
/// ``` QChart* self ```
libqt_list /* of QAbstractAxis* */ q_chart_axes(void* self) {
    libqt_list _arr = QChart_Axes((QChart*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#createDefaultAxes)
///
/// ``` QChart* self ```
void q_chart_create_default_axes(void* self) {
    QChart_CreateDefaultAxes((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTheme)
///
/// ``` QChart* self, enum QChart__ChartTheme theme ```
void q_chart_set_theme(void* self, int64_t theme) {
    QChart_SetTheme((QChart*)self, theme);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#theme)
///
/// ``` QChart* self ```
int64_t q_chart_theme(void* self) {
    return QChart_Theme((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitle)
///
/// ``` QChart* self, const char* title ```
void q_chart_set_title(void* self, const char* title) {
    QChart_SetTitle((QChart*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#title)
///
/// ``` QChart* self ```
const char* q_chart_title(void* self) {
    libqt_string _str = QChart_Title((QChart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleFont)
///
/// ``` QChart* self, QFont* font ```
void q_chart_set_title_font(void* self, void* font) {
    QChart_SetTitleFont((QChart*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleFont)
///
/// ``` QChart* self ```
QFont* q_chart_title_font(void* self) {
    return QChart_TitleFont((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setTitleBrush)
///
/// ``` QChart* self, QBrush* brush ```
void q_chart_set_title_brush(void* self, void* brush) {
    QChart_SetTitleBrush((QChart*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#titleBrush)
///
/// ``` QChart* self ```
QBrush* q_chart_title_brush(void* self) {
    return QChart_TitleBrush((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundBrush)
///
/// ``` QChart* self, QBrush* brush ```
void q_chart_set_background_brush(void* self, void* brush) {
    QChart_SetBackgroundBrush((QChart*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundBrush)
///
/// ``` QChart* self ```
QBrush* q_chart_background_brush(void* self) {
    return QChart_BackgroundBrush((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundPen)
///
/// ``` QChart* self, QPen* pen ```
void q_chart_set_background_pen(void* self, void* pen) {
    QChart_SetBackgroundPen((QChart*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundPen)
///
/// ``` QChart* self ```
QPen* q_chart_background_pen(void* self) {
    return QChart_BackgroundPen((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// ``` QChart* self ```
void q_chart_set_background_visible(void* self) {
    QChart_SetBackgroundVisible((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isBackgroundVisible)
///
/// ``` QChart* self ```
bool q_chart_is_background_visible(void* self) {
    return QChart_IsBackgroundVisible((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// ``` QChart* self ```
void q_chart_set_drop_shadow_enabled(void* self) {
    QChart_SetDropShadowEnabled((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isDropShadowEnabled)
///
/// ``` QChart* self ```
bool q_chart_is_drop_shadow_enabled(void* self) {
    return QChart_IsDropShadowEnabled((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundRoundness)
///
/// ``` QChart* self, double diameter ```
void q_chart_set_background_roundness(void* self, double diameter) {
    QChart_SetBackgroundRoundness((QChart*)self, diameter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#backgroundRoundness)
///
/// ``` QChart* self ```
double q_chart_background_roundness(void* self) {
    return QChart_BackgroundRoundness((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationOptions)
///
/// ``` QChart* self, int options ```
void q_chart_set_animation_options(void* self, int64_t options) {
    QChart_SetAnimationOptions((QChart*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationOptions)
///
/// ``` QChart* self ```
int64_t q_chart_animation_options(void* self) {
    return QChart_AnimationOptions((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationDuration)
///
/// ``` QChart* self, int msecs ```
void q_chart_set_animation_duration(void* self, int msecs) {
    QChart_SetAnimationDuration((QChart*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationDuration)
///
/// ``` QChart* self ```
int32_t q_chart_animation_duration(void* self) {
    return QChart_AnimationDuration((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAnimationEasingCurve)
///
/// ``` QChart* self, QEasingCurve* curve ```
void q_chart_set_animation_easing_curve(void* self, void* curve) {
    QChart_SetAnimationEasingCurve((QChart*)self, (QEasingCurve*)curve);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#animationEasingCurve)
///
/// ``` QChart* self ```
QEasingCurve* q_chart_animation_easing_curve(void* self) {
    return QChart_AnimationEasingCurve((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// ``` QChart* self ```
void q_chart_zoom_in(void* self) {
    QChart_ZoomIn((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomOut)
///
/// ``` QChart* self ```
void q_chart_zoom_out(void* self) {
    QChart_ZoomOut((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomIn)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_zoom_in_with_rect(void* self, void* rect) {
    QChart_ZoomInWithRect((QChart*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoom)
///
/// ``` QChart* self, double factor ```
void q_chart_zoom(void* self, double factor) {
    QChart_Zoom((QChart*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#zoomReset)
///
/// ``` QChart* self ```
void q_chart_zoom_reset(void* self) {
    QChart_ZoomReset((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isZoomed)
///
/// ``` QChart* self ```
bool q_chart_is_zoomed(void* self) {
    return QChart_IsZoomed((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#scroll)
///
/// ``` QChart* self, double dx, double dy ```
void q_chart_scroll(void* self, double dx, double dy) {
    QChart_Scroll((QChart*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#legend)
///
/// ``` QChart* self ```
QLegend* q_chart_legend(void* self) {
    return QChart_Legend((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setMargins)
///
/// ``` QChart* self, QMargins* margins ```
void q_chart_set_margins(void* self, void* margins) {
    QChart_SetMargins((QChart*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#margins)
///
/// ``` QChart* self ```
QMargins* q_chart_margins(void* self) {
    return QChart_Margins((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotArea)
///
/// ``` QChart* self ```
QRectF* q_chart_plot_area(void* self) {
    return QChart_PlotArea((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotArea)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_set_plot_area(void* self, void* rect) {
    QChart_SetPlotArea((QChart*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundBrush)
///
/// ``` QChart* self, QBrush* brush ```
void q_chart_set_plot_area_background_brush(void* self, void* brush) {
    QChart_SetPlotAreaBackgroundBrush((QChart*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundBrush)
///
/// ``` QChart* self ```
QBrush* q_chart_plot_area_background_brush(void* self) {
    return QChart_PlotAreaBackgroundBrush((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundPen)
///
/// ``` QChart* self, QPen* pen ```
void q_chart_set_plot_area_background_pen(void* self, void* pen) {
    QChart_SetPlotAreaBackgroundPen((QChart*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaBackgroundPen)
///
/// ``` QChart* self ```
QPen* q_chart_plot_area_background_pen(void* self) {
    return QChart_PlotAreaBackgroundPen((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// ``` QChart* self ```
void q_chart_set_plot_area_background_visible(void* self) {
    QChart_SetPlotAreaBackgroundVisible((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#isPlotAreaBackgroundVisible)
///
/// ``` QChart* self ```
bool q_chart_is_plot_area_background_visible(void* self) {
    return QChart_IsPlotAreaBackgroundVisible((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocalizeNumbers)
///
/// ``` QChart* self, bool localize ```
void q_chart_set_localize_numbers(void* self, bool localize) {
    QChart_SetLocalizeNumbers((QChart*)self, localize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#localizeNumbers)
///
/// ``` QChart* self ```
bool q_chart_localize_numbers(void* self) {
    return QChart_LocalizeNumbers((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setLocale)
///
/// ``` QChart* self, QLocale* locale ```
void q_chart_set_locale(void* self, void* locale) {
    QChart_SetLocale((QChart*)self, (QLocale*)locale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#locale)
///
/// ``` QChart* self ```
QLocale* q_chart_locale(void* self) {
    return QChart_Locale((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// ``` QChart* self, QPointF* position ```
QPointF* q_chart_map_to_value(void* self, void* position) {
    return QChart_MapToValue((QChart*)self, (QPointF*)position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// ``` QChart* self, QPointF* value ```
QPointF* q_chart_map_to_position(void* self, void* value) {
    return QChart_MapToPosition((QChart*)self, (QPointF*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#chartType)
///
/// ``` QChart* self ```
int64_t q_chart_chart_type(void* self) {
    return QChart_ChartType((QChart*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#plotAreaChanged)
///
/// ``` QChart* self, QRectF* plotArea ```
void q_chart_plot_area_changed(void* self, void* plotArea) {
    QChart_PlotAreaChanged((QChart*)self, (QRectF*)plotArea);
}

/// ``` QChart* self, void (*slot)(QChart*, QRectF*) ```
void q_chart_on_plot_area_changed(void* self, void (*slot)(void*, void*)) {
    QChart_Connect_PlotAreaChanged((QChart*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_chart_tr2(const char* s, const char* c) {
    libqt_string _str = QChart_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_chart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QChart_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisX)
///
/// ``` QChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_chart_set_axis_x2(void* self, void* axis, void* series) {
    QChart_SetAxisX2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setAxisY)
///
/// ``` QChart* self, QAbstractAxis* axis, QAbstractSeries* series ```
void q_chart_set_axis_y2(void* self, void* axis, void* series) {
    QChart_SetAxisY2((QChart*)self, (QAbstractAxis*)axis, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisX)
///
/// ``` QChart* self, QAbstractSeries* series ```
QAbstractAxis* q_chart_axis_x1(void* self, void* series) {
    return QChart_AxisX1((QChart*)self, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axisY)
///
/// ``` QChart* self, QAbstractSeries* series ```
QAbstractAxis* q_chart_axis_y1(void* self, void* series) {
    return QChart_AxisY1((QChart*)self, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axes)
///
/// ``` QChart* self, int orientation ```
libqt_list /* of QAbstractAxis* */ q_chart_axes1(void* self, int64_t orientation) {
    libqt_list _arr = QChart_Axes1((QChart*)self, orientation);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#axes)
///
/// ``` QChart* self, int orientation, QAbstractSeries* series ```
libqt_list /* of QAbstractAxis* */ q_chart_axes2(void* self, int64_t orientation, void* series) {
    libqt_list _arr = QChart_Axes2((QChart*)self, orientation, (QAbstractSeries*)series);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setBackgroundVisible)
///
/// ``` QChart* self, bool visible ```
void q_chart_set_background_visible1(void* self, bool visible) {
    QChart_SetBackgroundVisible1((QChart*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setDropShadowEnabled)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_drop_shadow_enabled1(void* self, bool enabled) {
    QChart_SetDropShadowEnabled1((QChart*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#setPlotAreaBackgroundVisible)
///
/// ``` QChart* self, bool visible ```
void q_chart_set_plot_area_background_visible1(void* self, bool visible) {
    QChart_SetPlotAreaBackgroundVisible1((QChart*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToValue)
///
/// ``` QChart* self, QPointF* position, QAbstractSeries* series ```
QPointF* q_chart_map_to_value2(void* self, void* position, void* series) {
    return QChart_MapToValue2((QChart*)self, (QPointF*)position, (QAbstractSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchart.html#mapToPosition)
///
/// ``` QChart* self, QPointF* value, QAbstractSeries* series ```
QPointF* q_chart_map_to_position2(void* self, void* value, void* series) {
    return QChart_MapToPosition2((QChart*)self, (QPointF*)value, (QAbstractSeries*)series);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QChart* self ```
QGraphicsLayout* q_chart_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QChart* self, QGraphicsLayout* layout ```
void q_chart_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QChart* self ```
void q_chart_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QChart* self ```
int64_t q_chart_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QChart* self, enum Qt__LayoutDirection direction ```
void q_chart_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QChart* self ```
void q_chart_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QChart* self ```
QStyle* q_chart_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QChart* self, QStyle* style ```
void q_chart_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QChart* self ```
QFont* q_chart_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QChart* self, QFont* font ```
void q_chart_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QChart* self ```
QPalette* q_chart_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QChart* self, QPalette* palette ```
void q_chart_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QChart* self ```
bool q_chart_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QChart* self ```
QSizeF* q_chart_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QChart* self, double x, double y, double w, double h ```
void q_chart_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QChart* self ```
QRectF* q_chart_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QChart* self, double left, double top, double right, double bottom ```
void q_chart_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QChart* self, QMarginsF* margins ```
void q_chart_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QChart* self, double left, double top, double right, double bottom ```
void q_chart_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QChart* self, QMarginsF* margins ```
void q_chart_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QChart* self, double* left, double* top, double* right, double* bottom ```
void q_chart_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QChart* self ```
void q_chart_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QChart* self ```
QRectF* q_chart_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QChart* self ```
QRectF* q_chart_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QChart* self ```
int64_t q_chart_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QChart* self ```
int64_t q_chart_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QChart* self, int wFlags ```
void q_chart_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QChart* self ```
bool q_chart_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QChart* self, const char* title ```
void q_chart_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QChart* self ```
const char* q_chart_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QChart* self ```
int64_t q_chart_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QChart* self, enum Qt__FocusPolicy policy ```
void q_chart_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_chart_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QChart* self, QKeySequence* sequence ```
int32_t q_chart_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QChart* self, int id ```
void q_chart_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QChart* self, int id ```
void q_chart_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QChart* self, int id ```
void q_chart_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QChart* self, QAction* action ```
void q_chart_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QChart* self, QAction* actions[] ```
void q_chart_add_actions(void* self, void* actions[]) {
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
/// ``` QChart* self, QAction* before, QAction* actions[] ```
void q_chart_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QChart* self, QAction* before, QAction* action ```
void q_chart_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QChart* self, QAction* action ```
void q_chart_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QChart* self ```
libqt_list /* of QAction* */ q_chart_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QChart* self, enum Qt__WidgetAttribute attribute ```
void q_chart_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QChart* self, enum Qt__WidgetAttribute attribute ```
bool q_chart_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QChart* self ```
void q_chart_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// ``` QChart* self, void (*slot)(QGraphicsWidget*) ```
void q_chart_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QChart* self ```
void q_chart_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// ``` QChart* self, void (*slot)(QGraphicsWidget*) ```
void q_chart_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QChart* self ```
bool q_chart_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QChart* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_chart_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QChart* self, int id, bool enabled ```
void q_chart_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QChart* self, int id, bool enabled ```
void q_chart_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QChart* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_chart_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QChart* self, enum Qt__GestureType typeVal ```
void q_chart_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QChart* self, enum Qt__GestureType typeVal ```
void q_chart_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QChart* self ```
void q_chart_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QChart* self ```
void q_chart_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QChart* self ```
void q_chart_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QChart* self ```
void q_chart_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QChart* self ```
void q_chart_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QChart* self ```
void q_chart_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QChart* self ```
void q_chart_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QChart* self ```
void q_chart_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QChart* self ```
void q_chart_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QChart* self ```
void q_chart_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QChart* self ```
void q_chart_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QChart* self ```
void q_chart_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QChart* self, void (*slot)(QGraphicsObject*) ```
void q_chart_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QChart* self, enum Qt__GestureType typeVal, int flags ```
void q_chart_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QChart* self ```
const char* q_chart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QChart* self, const char* name ```
void q_chart_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QChart* self ```
bool q_chart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QChart* self ```
bool q_chart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QChart* self ```
bool q_chart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QChart* self ```
bool q_chart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QChart* self, bool b ```
bool q_chart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QChart* self ```
QThread* q_chart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChart* self, QThread* thread ```
void q_chart_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChart* self, int interval ```
int32_t q_chart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChart* self, int id ```
void q_chart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QChart* self ```
libqt_list /* of QObject* */ q_chart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QChart* self, QObject* parent ```
void q_chart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QChart* self, QObject* filterObj ```
void q_chart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QChart* self, QObject* obj ```
void q_chart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_chart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChart* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_chart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_chart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_chart_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QChart* self ```
void q_chart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QChart* self ```
void q_chart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QChart* self, const char* name, QVariant* value ```
bool q_chart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QChart* self, const char* name ```
QVariant* q_chart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QChart* self ```
const char** q_chart_dynamic_property_names(void* self) {
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
/// ``` QChart* self ```
QBindingStorage* q_chart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChart* self ```
QBindingStorage* q_chart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChart* self ```
void q_chart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QChart* self, void (*slot)(QObject*) ```
void q_chart_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QChart* self ```
QObject* q_chart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QChart* self, const char* classname ```
bool q_chart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QChart* self ```
void q_chart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChart* self, int interval, enum Qt__TimerType timerType ```
int32_t q_chart_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChart* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChart* self, QObject* param1 ```
void q_chart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QChart* self, void (*slot)(QObject*, QObject*) ```
void q_chart_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QChart* self ```
QGraphicsScene* q_chart_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QChart* self ```
QGraphicsObject* q_chart_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QChart* self ```
QGraphicsWidget* q_chart_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QChart* self, QGraphicsItem* parent ```
void q_chart_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QChart* self ```
libqt_list /* of QGraphicsItem* */ q_chart_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QChart* self ```
bool q_chart_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QChart* self ```
bool q_chart_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QChart* self ```
bool q_chart_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QChart* self ```
QGraphicsObject* q_chart_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QChart* self ```
QGraphicsObject* q_chart_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QChart* self ```
QGraphicsItemGroup* q_chart_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QChart* self, QGraphicsItemGroup* group ```
void q_chart_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QChart* self ```
int64_t q_chart_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_chart_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QChart* self, int flags ```
void q_chart_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QChart* self ```
int64_t q_chart_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QChart* self, enum QGraphicsItem__CacheMode mode ```
void q_chart_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QChart* self ```
int64_t q_chart_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QChart* self, enum QGraphicsItem__PanelModality panelModality ```
void q_chart_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QChart* self ```
bool q_chart_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QChart* self ```
const char* q_chart_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QChart* self, const char* toolTip ```
void q_chart_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QChart* self ```
QCursor* q_chart_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QChart* self, QCursor* cursor ```
void q_chart_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QChart* self ```
bool q_chart_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QChart* self ```
void q_chart_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QChart* self ```
bool q_chart_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QChart* self, QGraphicsItem* parent ```
bool q_chart_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QChart* self, bool visible ```
void q_chart_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QChart* self ```
void q_chart_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QChart* self ```
void q_chart_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QChart* self ```
bool q_chart_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QChart* self ```
bool q_chart_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QChart* self, bool selected ```
void q_chart_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QChart* self ```
bool q_chart_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QChart* self, bool on ```
void q_chart_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QChart* self ```
double q_chart_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QChart* self ```
double q_chart_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QChart* self, double opacity ```
void q_chart_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QChart* self ```
QGraphicsEffect* q_chart_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QChart* self, QGraphicsEffect* effect ```
void q_chart_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QChart* self ```
int64_t q_chart_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QChart* self, int buttons ```
void q_chart_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QChart* self ```
bool q_chart_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QChart* self ```
bool q_chart_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QChart* self ```
bool q_chart_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QChart* self ```
bool q_chart_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QChart* self, bool enabled ```
void q_chart_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QChart* self ```
bool q_chart_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QChart* self, bool active ```
void q_chart_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QChart* self ```
bool q_chart_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QChart* self ```
void q_chart_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QChart* self ```
void q_chart_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QChart* self, QGraphicsItem* item ```
void q_chart_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QChart* self ```
void q_chart_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QChart* self ```
void q_chart_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QChart* self ```
void q_chart_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QChart* self ```
void q_chart_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QChart* self ```
QPointF* q_chart_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QChart* self ```
double q_chart_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QChart* self, double x ```
void q_chart_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QChart* self ```
double q_chart_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QChart* self, double y ```
void q_chart_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QChart* self ```
QPointF* q_chart_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QChart* self, QPointF* pos ```
void q_chart_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QChart* self, double x, double y ```
void q_chart_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QChart* self, double dx, double dy ```
void q_chart_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self ```
void q_chart_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, double x, double y, double w, double h ```
void q_chart_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QChart* self ```
QTransform* q_chart_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QChart* self ```
QTransform* q_chart_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QChart* self, QTransform* viewportTransform ```
QTransform* q_chart_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QChart* self, QGraphicsItem* other ```
QTransform* q_chart_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QChart* self, QTransform* matrix ```
void q_chart_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QChart* self ```
void q_chart_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QChart* self, double angle ```
void q_chart_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QChart* self ```
double q_chart_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QChart* self, double scale ```
void q_chart_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QChart* self ```
double q_chart_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QChart* self ```
libqt_list /* of QGraphicsTransform* */ q_chart_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QChart* self, QGraphicsTransform* transformations[] ```
void q_chart_set_transformations(void* self, void* transformations[]) {
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
/// ``` QChart* self ```
QPointF* q_chart_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QChart* self, QPointF* origin ```
void q_chart_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QChart* self, double ax, double ay ```
void q_chart_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QChart* self ```
double q_chart_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QChart* self, double z ```
void q_chart_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QChart* self, QGraphicsItem* sibling ```
void q_chart_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QChart* self ```
QRectF* q_chart_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QChart* self ```
QRectF* q_chart_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QChart* self ```
bool q_chart_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QChart* self ```
QPainterPath* q_chart_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QChart* self ```
libqt_list /* of QGraphicsItem* */ q_chart_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QChart* self ```
bool q_chart_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QChart* self, double x, double y, double w, double h ```
bool q_chart_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QChart* self, QTransform* itemToDeviceTransform ```
QRegion* q_chart_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QChart* self ```
double q_chart_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QChart* self, double granularity ```
void q_chart_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QChart* self ```
void q_chart_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QChart* self, double x, double y, double width, double height ```
void q_chart_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_chart_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_chart_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_chart_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_chart_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QChart* self, QPointF* point ```
QPointF* q_chart_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_chart_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QChart* self, QRectF* rect ```
QRectF* q_chart_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_chart_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QChart* self, QPainterPath* path ```
QPainterPath* q_chart_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_chart_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y ```
QPointF* q_chart_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QChart* self, double x, double y ```
QPointF* q_chart_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QChart* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QChart* self, double x, double y, double w, double h ```
QRectF* q_chart_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QChart* self, QGraphicsItem* child ```
bool q_chart_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QChart* self, QGraphicsItem* other ```
QGraphicsItem* q_chart_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QChart* self ```
bool q_chart_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QChart* self, int key ```
QVariant* q_chart_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QChart* self, int key, QVariant* value ```
void q_chart_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QChart* self ```
int64_t q_chart_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QChart* self, int hints ```
void q_chart_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QChart* self, QGraphicsItem* filterItem ```
void q_chart_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QChart* self, QGraphicsItem* filterItem ```
void q_chart_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_chart_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QChart* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_chart_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QChart* self, enum Qt__FocusReason focusReason ```
void q_chart_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, QRectF* rect, int xmargin ```
void q_chart_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, QRectF* rect, int xmargin, int ymargin ```
void q_chart_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, double x, double y, double w, double h, int xmargin ```
void q_chart_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QChart* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_chart_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QChart* self, QGraphicsItem* other, bool* ok ```
QTransform* q_chart_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QChart* self, QTransform* matrix, bool combine ```
void q_chart_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QChart* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_chart_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QChart* self, QRectF* rect ```
bool q_chart_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QChart* self, double dx, double dy, QRectF* rect ```
void q_chart_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QChart* self, QSizePolicy* policy ```
void q_chart_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_chart_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QChart* self ```
QSizePolicy* q_chart_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QChart* self ```
QSizeF* q_chart_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QChart* self, double width ```
void q_chart_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QChart* self ```
double q_chart_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QChart* self, double height ```
void q_chart_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QChart* self ```
double q_chart_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QChart* self ```
QSizeF* q_chart_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QChart* self, double width ```
void q_chart_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QChart* self ```
double q_chart_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QChart* self, double height ```
void q_chart_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QChart* self ```
double q_chart_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QChart* self, QSizeF* size ```
void q_chart_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QChart* self, double w, double h ```
void q_chart_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QChart* self ```
QSizeF* q_chart_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QChart* self, double width ```
void q_chart_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QChart* self ```
double q_chart_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QChart* self, double height ```
void q_chart_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QChart* self ```
double q_chart_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QChart* self ```
QRectF* q_chart_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QChart* self ```
QRectF* q_chart_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QChart* self, enum Qt__SizeHint which ```
QSizeF* q_chart_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QChart* self ```
QGraphicsLayoutItem* q_chart_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QChart* self, QGraphicsLayoutItem* parent ```
void q_chart_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QChart* self ```
bool q_chart_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QChart* self ```
QGraphicsItem* q_chart_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QChart* self ```
bool q_chart_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QChart* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_chart_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_chart_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_set_geometry(void* self, void* rect) {
    QChart_SetGeometry((QChart*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QRectF* rect ```
void q_chart_qbase_set_geometry(void* self, void* rect) {
    QChart_QBaseSetGeometry((QChart*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QRectF*) ```
void q_chart_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QChart_OnSetGeometry((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, double* left, double* top, double* right, double* bottom ```
void q_chart_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QChart_GetContentsMargins((QChart*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, double* left, double* top, double* right, double* bottom ```
void q_chart_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QChart_QBaseGetContentsMargins((QChart*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, double*, double*, double*, double*) ```
void q_chart_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QChart_OnGetContentsMargins((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_type(void* self) {
    return QChart_Type((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_qbase_type(void* self) {
    return QChart_QBaseType((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int32_t (*slot)() ```
void q_chart_on_type(void* self, int32_t (*slot)()) {
    QChart_OnType((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_paint(void* self, void* painter, void* option, void* widget) {
    QChart_Paint((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QChart_QBasePaint((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_chart_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QChart_OnPaint((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QChart_PaintWindowFrame((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_chart_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QChart_QBasePaintWindowFrame((QChart*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_chart_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QChart_OnPaintWindowFrame((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QRectF* q_chart_bounding_rect(void* self) {
    return QChart_BoundingRect((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QRectF* q_chart_qbase_bounding_rect(void* self) {
    return QChart_QBaseBoundingRect((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QRectF* (*slot)() ```
void q_chart_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QChart_OnBoundingRect((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_shape(void* self) {
    return QChart_Shape((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_qbase_shape(void* self) {
    return QChart_QBaseShape((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QPainterPath* (*slot)() ```
void q_chart_on_shape(void* self, QPainterPath* (*slot)()) {
    QChart_OnShape((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QStyleOption* option ```
void q_chart_init_style_option(void* self, void* option) {
    QChart_InitStyleOption((QChart*)self, (QStyleOption*)option);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QStyleOption* option ```
void q_chart_qbase_init_style_option(void* self, void* option) {
    QChart_QBaseInitStyleOption((QChart*)self, (QStyleOption*)option);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QStyleOption*) ```
void q_chart_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QChart_OnInitStyleOption((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_chart_size_hint(void* self, int64_t which, void* constraint) {
    return QChart_SizeHint((QChart*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_chart_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QChart_QBaseSizeHint((QChart*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QSizeF* (*slot)(QChart*, enum Qt__SizeHint, QSizeF*) ```
void q_chart_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QChart_OnSizeHint((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_update_geometry(void* self) {
    QChart_UpdateGeometry((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_update_geometry(void* self) {
    QChart_QBaseUpdateGeometry((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_update_geometry(void* self, void (*slot)()) {
    QChart_OnUpdateGeometry((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_chart_item_change(void* self, int64_t change, void* value) {
    return QChart_ItemChange((QChart*)self, change, (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_chart_qbase_item_change(void* self, int64_t change, void* value) {
    return QChart_QBaseItemChange((QChart*)self, change, (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_chart_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QChart_OnItemChange((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, const char* propertyName, QVariant* value ```
QVariant* q_chart_property_change(void* self, const char* propertyName, void* value) {
    return QChart_PropertyChange((QChart*)self, qstring(propertyName), (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, const char* propertyName, QVariant* value ```
QVariant* q_chart_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QChart_QBasePropertyChange((QChart*)self, qstring(propertyName), (QVariant*)value);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, const char*, QVariant*) ```
void q_chart_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QChart_OnPropertyChange((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_scene_event(void* self, void* event) {
    return QChart_SceneEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_qbase_scene_event(void* self, void* event) {
    return QChart_QBaseSceneEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QEvent*) ```
void q_chart_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QChart_OnSceneEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* e ```
bool q_chart_window_frame_event(void* self, void* e) {
    return QChart_WindowFrameEvent((QChart*)self, (QEvent*)e);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* e ```
bool q_chart_qbase_window_frame_event(void* self, void* e) {
    return QChart_QBaseWindowFrameEvent((QChart*)self, (QEvent*)e);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QEvent*) ```
void q_chart_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QChart_OnWindowFrameEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPointF* pos ```
int64_t q_chart_window_frame_section_at(void* self, void* pos) {
    return QChart_WindowFrameSectionAt((QChart*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPointF* pos ```
int64_t q_chart_qbase_window_frame_section_at(void* self, void* pos) {
    return QChart_QBaseWindowFrameSectionAt((QChart*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int64_t (*slot)(QChart*, QPointF*) ```
void q_chart_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QChart_OnWindowFrameSectionAt((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_event(void* self, void* event) {
    return QChart_Event((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
bool q_chart_qbase_event(void* self, void* event) {
    return QChart_QBaseEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QEvent*) ```
void q_chart_on_event(void* self, bool (*slot)(void*, void*)) {
    QChart_OnEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_change_event(void* self, void* event) {
    QChart_ChangeEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_change_event(void* self, void* event) {
    QChart_QBaseChangeEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_change_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnChangeEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QCloseEvent* event ```
void q_chart_close_event(void* self, void* event) {
    QChart_CloseEvent((QChart*)self, (QCloseEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QCloseEvent* event ```
void q_chart_qbase_close_event(void* self, void* event) {
    QChart_QBaseCloseEvent((QChart*)self, (QCloseEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QCloseEvent*) ```
void q_chart_on_close_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnCloseEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_focus_in_event(void* self, void* event) {
    QChart_FocusInEvent((QChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_qbase_focus_in_event(void* self, void* event) {
    QChart_QBaseFocusInEvent((QChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QFocusEvent*) ```
void q_chart_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnFocusInEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, bool next ```
bool q_chart_focus_next_prev_child(void* self, bool next) {
    return QChart_FocusNextPrevChild((QChart*)self, next);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, bool next ```
bool q_chart_qbase_focus_next_prev_child(void* self, bool next) {
    return QChart_QBaseFocusNextPrevChild((QChart*)self, next);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, bool) ```
void q_chart_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QChart_OnFocusNextPrevChild((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_focus_out_event(void* self, void* event) {
    QChart_FocusOutEvent((QChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QFocusEvent* event ```
void q_chart_qbase_focus_out_event(void* self, void* event) {
    QChart_QBaseFocusOutEvent((QChart*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QFocusEvent*) ```
void q_chart_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnFocusOutEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QHideEvent* event ```
void q_chart_hide_event(void* self, void* event) {
    QChart_HideEvent((QChart*)self, (QHideEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QHideEvent* event ```
void q_chart_qbase_hide_event(void* self, void* event) {
    QChart_QBaseHideEvent((QChart*)self, (QHideEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QHideEvent*) ```
void q_chart_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnHideEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMoveEvent* event ```
void q_chart_move_event(void* self, void* event) {
    QChart_MoveEvent((QChart*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMoveEvent* event ```
void q_chart_qbase_move_event(void* self, void* event) {
    QChart_QBaseMoveEvent((QChart*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMoveEvent*) ```
void q_chart_on_move_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnMoveEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_polish_event(void* self) {
    QChart_PolishEvent((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_polish_event(void* self) {
    QChart_QBasePolishEvent((QChart*)self);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_polish_event(void* self, void (*slot)()) {
    QChart_OnPolishEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneResizeEvent* event ```
void q_chart_resize_event(void* self, void* event) {
    QChart_ResizeEvent((QChart*)self, (QGraphicsSceneResizeEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneResizeEvent* event ```
void q_chart_qbase_resize_event(void* self, void* event) {
    QChart_QBaseResizeEvent((QChart*)self, (QGraphicsSceneResizeEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneResizeEvent*) ```
void q_chart_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnResizeEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QShowEvent* event ```
void q_chart_show_event(void* self, void* event) {
    QChart_ShowEvent((QChart*)self, (QShowEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QShowEvent* event ```
void q_chart_qbase_show_event(void* self, void* event) {
    QChart_QBaseShowEvent((QChart*)self, (QShowEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QShowEvent*) ```
void q_chart_on_show_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnShowEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_hover_move_event(void* self, void* event) {
    QChart_HoverMoveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_qbase_hover_move_event(void* self, void* event) {
    QChart_QBaseHoverMoveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneHoverEvent*) ```
void q_chart_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnHoverMoveEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_hover_leave_event(void* self, void* event) {
    QChart_HoverLeaveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_qbase_hover_leave_event(void* self, void* event) {
    QChart_QBaseHoverLeaveEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneHoverEvent*) ```
void q_chart_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnHoverLeaveEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_grab_mouse_event(void* self, void* event) {
    QChart_GrabMouseEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_grab_mouse_event(void* self, void* event) {
    QChart_QBaseGrabMouseEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnGrabMouseEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_ungrab_mouse_event(void* self, void* event) {
    QChart_UngrabMouseEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_ungrab_mouse_event(void* self, void* event) {
    QChart_QBaseUngrabMouseEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnUngrabMouseEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_grab_keyboard_event(void* self, void* event) {
    QChart_GrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_grab_keyboard_event(void* self, void* event) {
    QChart_QBaseGrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnGrabKeyboardEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_ungrab_keyboard_event(void* self, void* event) {
    QChart_UngrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_ungrab_keyboard_event(void* self, void* event) {
    QChart_QBaseUngrabKeyboardEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnUngrabKeyboardEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QObject* watched, QEvent* event ```
bool q_chart_event_filter(void* self, void* watched, void* event) {
    return QChart_EventFilter((QChart*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QObject* watched, QEvent* event ```
bool q_chart_qbase_event_filter(void* self, void* watched, void* event) {
    return QChart_QBaseEventFilter((QChart*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QObject*, QEvent*) ```
void q_chart_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QChart_OnEventFilter((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QTimerEvent* event ```
void q_chart_timer_event(void* self, void* event) {
    QChart_TimerEvent((QChart*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QTimerEvent* event ```
void q_chart_qbase_timer_event(void* self, void* event) {
    QChart_QBaseTimerEvent((QChart*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QTimerEvent*) ```
void q_chart_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnTimerEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QChildEvent* event ```
void q_chart_child_event(void* self, void* event) {
    QChart_ChildEvent((QChart*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QChildEvent* event ```
void q_chart_qbase_child_event(void* self, void* event) {
    QChart_QBaseChildEvent((QChart*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QChildEvent*) ```
void q_chart_on_child_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnChildEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_custom_event(void* self, void* event) {
    QChart_CustomEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QEvent* event ```
void q_chart_qbase_custom_event(void* self, void* event) {
    QChart_QBaseCustomEvent((QChart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QEvent*) ```
void q_chart_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnCustomEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_connect_notify(void* self, void* signal) {
    QChart_ConnectNotify((QChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_qbase_connect_notify(void* self, void* signal) {
    QChart_QBaseConnectNotify((QChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QMetaMethod*) ```
void q_chart_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QChart_OnConnectNotify((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_disconnect_notify(void* self, void* signal) {
    QChart_DisconnectNotify((QChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
void q_chart_qbase_disconnect_notify(void* self, void* signal) {
    QChart_QBaseDisconnectNotify((QChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QMetaMethod*) ```
void q_chart_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QChart_OnDisconnectNotify((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, int phase ```
void q_chart_advance(void* self, int phase) {
    QChart_Advance((QChart*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, int phase ```
void q_chart_qbase_advance(void* self, int phase) {
    QChart_QBaseAdvance((QChart*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, int) ```
void q_chart_on_advance(void* self, void (*slot)(void*, int)) {
    QChart_OnAdvance((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPointF* point ```
bool q_chart_contains(void* self, void* point) {
    return QChart_Contains((QChart*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPointF* point ```
bool q_chart_qbase_contains(void* self, void* point) {
    return QChart_QBaseContains((QChart*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QPointF*) ```
void q_chart_on_contains(void* self, bool (*slot)(void*, void*)) {
    QChart_OnContains((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_chart_collides_with_item(void* self, void* other, int64_t mode) {
    return QChart_CollidesWithItem((QChart*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_chart_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QChart_QBaseCollidesWithItem((QChart*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_chart_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QChart_OnCollidesWithItem((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_chart_collides_with_path(void* self, void* path, int64_t mode) {
    return QChart_CollidesWithPath((QChart*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_chart_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QChart_QBaseCollidesWithPath((QChart*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_chart_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QChart_OnCollidesWithPath((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
bool q_chart_is_obscured_by(void* self, void* item) {
    return QChart_IsObscuredBy((QChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
bool q_chart_qbase_is_obscured_by(void* self, void* item) {
    return QChart_QBaseIsObscuredBy((QChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QGraphicsItem*) ```
void q_chart_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QChart_OnIsObscuredBy((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_opaque_area(void* self) {
    return QChart_OpaqueArea((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QPainterPath* q_chart_qbase_opaque_area(void* self) {
    return QChart_QBaseOpaqueArea((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QPainterPath* (*slot)() ```
void q_chart_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QChart_OnOpaqueArea((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_chart_scene_event_filter(void* self, void* watched, void* event) {
    return QChart_SceneEventFilter((QChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* watched, QEvent* event ```
bool q_chart_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QChart_QBaseSceneEventFilter((QChart*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QGraphicsItem*, QEvent*) ```
void q_chart_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QChart_OnSceneEventFilter((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_chart_context_menu_event(void* self, void* event) {
    QChart_ContextMenuEvent((QChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneContextMenuEvent* event ```
void q_chart_qbase_context_menu_event(void* self, void* event) {
    QChart_QBaseContextMenuEvent((QChart*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneContextMenuEvent*) ```
void q_chart_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnContextMenuEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drag_enter_event(void* self, void* event) {
    QChart_DragEnterEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drag_enter_event(void* self, void* event) {
    QChart_QBaseDragEnterEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnDragEnterEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drag_leave_event(void* self, void* event) {
    QChart_DragLeaveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drag_leave_event(void* self, void* event) {
    QChart_QBaseDragLeaveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnDragLeaveEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drag_move_event(void* self, void* event) {
    QChart_DragMoveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drag_move_event(void* self, void* event) {
    QChart_QBaseDragMoveEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnDragMoveEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_drop_event(void* self, void* event) {
    QChart_DropEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneDragDropEvent* event ```
void q_chart_qbase_drop_event(void* self, void* event) {
    QChart_QBaseDropEvent((QChart*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneDragDropEvent*) ```
void q_chart_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnDropEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_hover_enter_event(void* self, void* event) {
    QChart_HoverEnterEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneHoverEvent* event ```
void q_chart_qbase_hover_enter_event(void* self, void* event) {
    QChart_QBaseHoverEnterEvent((QChart*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneHoverEvent*) ```
void q_chart_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnHoverEnterEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_key_press_event(void* self, void* event) {
    QChart_KeyPressEvent((QChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_qbase_key_press_event(void* self, void* event) {
    QChart_QBaseKeyPressEvent((QChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QKeyEvent*) ```
void q_chart_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnKeyPressEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_key_release_event(void* self, void* event) {
    QChart_KeyReleaseEvent((QChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QKeyEvent* event ```
void q_chart_qbase_key_release_event(void* self, void* event) {
    QChart_QBaseKeyReleaseEvent((QChart*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QKeyEvent*) ```
void q_chart_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnKeyReleaseEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_press_event(void* self, void* event) {
    QChart_MousePressEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_press_event(void* self, void* event) {
    QChart_QBaseMousePressEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnMousePressEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_move_event(void* self, void* event) {
    QChart_MouseMoveEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_move_event(void* self, void* event) {
    QChart_QBaseMouseMoveEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnMouseMoveEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_release_event(void* self, void* event) {
    QChart_MouseReleaseEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_release_event(void* self, void* event) {
    QChart_QBaseMouseReleaseEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnMouseReleaseEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_mouse_double_click_event(void* self, void* event) {
    QChart_MouseDoubleClickEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneMouseEvent* event ```
void q_chart_qbase_mouse_double_click_event(void* self, void* event) {
    QChart_QBaseMouseDoubleClickEvent((QChart*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneMouseEvent*) ```
void q_chart_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnMouseDoubleClickEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneWheelEvent* event ```
void q_chart_wheel_event(void* self, void* event) {
    QChart_WheelEvent((QChart*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsSceneWheelEvent* event ```
void q_chart_qbase_wheel_event(void* self, void* event) {
    QChart_QBaseWheelEvent((QChart*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsSceneWheelEvent*) ```
void q_chart_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnWheelEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QInputMethodEvent* event ```
void q_chart_input_method_event(void* self, void* event) {
    QChart_InputMethodEvent((QChart*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QInputMethodEvent* event ```
void q_chart_qbase_input_method_event(void* self, void* event) {
    QChart_QBaseInputMethodEvent((QChart*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QInputMethodEvent*) ```
void q_chart_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QChart_OnInputMethodEvent((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_chart_input_method_query(void* self, int64_t query) {
    return QChart_InputMethodQuery((QChart*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum Qt__InputMethodQuery query ```
QVariant* q_chart_qbase_input_method_query(void* self, int64_t query) {
    return QChart_QBaseInputMethodQuery((QChart*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, enum Qt__InputMethodQuery) ```
void q_chart_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QChart_OnInputMethodQuery((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension ```
bool q_chart_supports_extension(void* self, int64_t extension) {
    return QChart_SupportsExtension((QChart*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension ```
bool q_chart_qbase_supports_extension(void* self, int64_t extension) {
    return QChart_QBaseSupportsExtension((QChart*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, enum QGraphicsItem__Extension) ```
void q_chart_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QChart_OnSupportsExtension((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_chart_set_extension(void* self, int64_t extension, void* variant) {
    QChart_SetExtension((QChart*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_chart_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QChart_QBaseSetExtension((QChart*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, enum QGraphicsItem__Extension, QVariant*) ```
void q_chart_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QChart_OnSetExtension((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QVariant* variant ```
QVariant* q_chart_extension(void* self, void* variant) {
    return QChart_Extension((QChart*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QVariant* variant ```
QVariant* q_chart_qbase_extension(void* self, void* variant) {
    return QChart_QBaseExtension((QChart*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QVariant* (*slot)(QChart*, QVariant*) ```
void q_chart_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QChart_OnExtension((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
bool q_chart_is_empty(void* self) {
    return QChart_IsEmpty((QChart*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
bool q_chart_qbase_is_empty(void* self) {
    return QChart_QBaseIsEmpty((QChart*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)() ```
void q_chart_on_is_empty(void* self, bool (*slot)()) {
    QChart_OnIsEmpty((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_update_micro_focus(void* self) {
    QChart_UpdateMicroFocus((QChart*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_update_micro_focus(void* self) {
    QChart_QBaseUpdateMicroFocus((QChart*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_update_micro_focus(void* self, void (*slot)()) {
    QChart_OnUpdateMicroFocus((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
QObject* q_chart_sender(void* self) {
    return QChart_Sender((QChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
QObject* q_chart_qbase_sender(void* self) {
    return QChart_QBaseSender((QChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, QObject* (*slot)() ```
void q_chart_on_sender(void* self, QObject* (*slot)()) {
    QChart_OnSender((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_sender_signal_index(void* self) {
    return QChart_SenderSignalIndex((QChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
int32_t q_chart_qbase_sender_signal_index(void* self) {
    return QChart_QBaseSenderSignalIndex((QChart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int32_t (*slot)() ```
void q_chart_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QChart_OnSenderSignalIndex((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, const char* signal ```
int32_t q_chart_receivers(void* self, const char* signal) {
    return QChart_Receivers((QChart*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, const char* signal ```
int32_t q_chart_qbase_receivers(void* self, const char* signal) {
    return QChart_QBaseReceivers((QChart*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, int32_t (*slot)(QChart*, const char*) ```
void q_chart_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QChart_OnReceivers((QChart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
bool q_chart_is_signal_connected(void* self, void* signal) {
    return QChart_IsSignalConnected((QChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QMetaMethod* signal ```
bool q_chart_qbase_is_signal_connected(void* self, void* signal) {
    return QChart_QBaseIsSignalConnected((QChart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, bool (*slot)(QChart*, QMetaMethod*) ```
void q_chart_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QChart_OnIsSignalConnected((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_add_to_index(void* self) {
    QChart_AddToIndex((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_add_to_index(void* self) {
    QChart_QBaseAddToIndex((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_add_to_index(void* self, void (*slot)()) {
    QChart_OnAddToIndex((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_remove_from_index(void* self) {
    QChart_RemoveFromIndex((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_remove_from_index(void* self) {
    QChart_QBaseRemoveFromIndex((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_remove_from_index(void* self, void (*slot)()) {
    QChart_OnRemoveFromIndex((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self ```
void q_chart_prepare_geometry_change(void* self) {
    QChart_PrepareGeometryChange((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self ```
void q_chart_qbase_prepare_geometry_change(void* self) {
    QChart_QBasePrepareGeometryChange((QChart*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)() ```
void q_chart_on_prepare_geometry_change(void* self, void (*slot)()) {
    QChart_OnPrepareGeometryChange((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
void q_chart_set_graphics_item(void* self, void* item) {
    QChart_SetGraphicsItem((QChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, QGraphicsItem* item ```
void q_chart_qbase_set_graphics_item(void* self, void* item) {
    QChart_QBaseSetGraphicsItem((QChart*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, QGraphicsItem*) ```
void q_chart_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QChart_OnSetGraphicsItem((QChart*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChart* self, bool ownedByLayout ```
void q_chart_set_owned_by_layout(void* self, bool ownedByLayout) {
    QChart_SetOwnedByLayout((QChart*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChart* self, bool ownedByLayout ```
void q_chart_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QChart_QBaseSetOwnedByLayout((QChart*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChart* self, void (*slot)(QChart*, bool) ```
void q_chart_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QChart_OnSetOwnedByLayout((QChart*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QChart* self ```
void q_chart_delete(void* self) {
    QChart_Delete((QChart*)(self));
}