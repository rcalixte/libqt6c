#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCOLORAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html

/// q_coloraxis_new constructs a new QColorAxis object.
///
QColorAxis* q_coloraxis_new();

/// q_coloraxis_new2 constructs a new QColorAxis object.
///
/// @param parent QObject*
QColorAxis* q_coloraxis_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QColorAxis*
const QMetaObject* q_coloraxis_meta_object(void* self);

/// @param self QColorAxis*
/// @param param1 const char*
void* q_coloraxis_metacast(void* self, const char* param1);

/// @param self QColorAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_coloraxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QColorAxis*
/// @param callback int32_t func(QColorAxis* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_coloraxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QColorAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_coloraxis_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_coloraxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#type)
///
/// @param self QColorAxis*
///
/// @return enum QAbstractAxis__AxisType
int32_t q_coloraxis_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QColorAxis*
/// @param callback int32_t func()
void q_coloraxis_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QColorAxis*
///
/// @return enum QAbstractAxis__AxisType
int32_t q_coloraxis_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setMin)
///
/// @param self QColorAxis*
/// @param min double
void q_coloraxis_set_min(void* self, double min);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#min)
///
/// @param self QColorAxis*
double q_coloraxis_min(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setMax)
///
/// @param self QColorAxis*
/// @param max double
void q_coloraxis_set_max(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#max)
///
/// @param self QColorAxis*
double q_coloraxis_max(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setRange)
///
/// @param self QColorAxis*
/// @param min double
/// @param max double
void q_coloraxis_set_range(void* self, double min, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setTickCount)
///
/// @param self QColorAxis*
/// @param count int
void q_coloraxis_set_tick_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#tickCount)
///
/// @param self QColorAxis*
int32_t q_coloraxis_tick_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setSize)
///
/// @param self QColorAxis*
/// @param size double
void q_coloraxis_set_size(void* self, double size);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#size)
///
/// @param self QColorAxis*
double q_coloraxis_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setGradient)
///
/// @param self QColorAxis*
/// @param gradient QLinearGradient*
void q_coloraxis_set_gradient(void* self, void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#gradient)
///
/// @param self QColorAxis*
QLinearGradient* q_coloraxis_gradient(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#setAutoRange)
///
/// @param self QColorAxis*
/// @param autoRange bool
void q_coloraxis_set_auto_range(void* self, bool autoRange);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#autoRange)
///
/// @param self QColorAxis*
bool q_coloraxis_auto_range(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#minChanged)
///
/// @param self QColorAxis*
/// @param min double
void q_coloraxis_min_changed(void* self, double min);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#minChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, double min)
void q_coloraxis_on_min_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#maxChanged)
///
/// @param self QColorAxis*
/// @param max double
void q_coloraxis_max_changed(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#maxChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, double max)
void q_coloraxis_on_max_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#rangeChanged)
///
/// @param self QColorAxis*
/// @param min double
/// @param max double
void q_coloraxis_range_changed(void* self, double min, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#rangeChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, double min, double max)
void q_coloraxis_on_range_changed(void* self, void (*callback)(void*, double, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#tickCountChanged)
///
/// @param self QColorAxis*
/// @param tickCount int
void q_coloraxis_tick_count_changed(void* self, int tickCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#tickCountChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, int tickCount)
void q_coloraxis_on_tick_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#gradientChanged)
///
/// @param self QColorAxis*
/// @param gradient QLinearGradient*
void q_coloraxis_gradient_changed(void* self, void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#gradientChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QLinearGradient* gradient)
void q_coloraxis_on_gradient_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#sizeChanged)
///
/// @param self QColorAxis*
/// @param size double
void q_coloraxis_size_changed(void* self, double size);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#sizeChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, double size)
void q_coloraxis_on_size_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#autoRangeChanged)
///
/// @param self QColorAxis*
/// @param autoRange bool
void q_coloraxis_auto_range_changed(void* self, bool autoRange);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#autoRangeChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool autoRange)
void q_coloraxis_on_auto_range_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_coloraxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_coloraxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// @param self QColorAxis*
void q_coloraxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// @param self QColorAxis*
void q_coloraxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// @param self QColorAxis*
QPen* q_coloraxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// @param self QColorAxis*
QColor* q_coloraxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// @param self QColorAxis*
QPen* q_coloraxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// @param self QColorAxis*
QPen* q_coloraxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// @param self QColorAxis*
QColor* q_coloraxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// @param self QColorAxis*
QColor* q_coloraxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// @param self QColorAxis*
/// @param brush QBrush*
void q_coloraxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// @param self QColorAxis*
QBrush* q_coloraxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// @param self QColorAxis*
/// @param font QFont*
void q_coloraxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// @param self QColorAxis*
QFont* q_coloraxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// @param self QColorAxis*
/// @param angle int
void q_coloraxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// @param self QColorAxis*
int32_t q_coloraxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// @param self QColorAxis*
QColor* q_coloraxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// @param self QColorAxis*
/// @param brush QBrush*
void q_coloraxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// @param self QColorAxis*
QBrush* q_coloraxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// @param self QColorAxis*
/// @param font QFont*
void q_coloraxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// @param self QColorAxis*
QFont* q_coloraxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// @param self QColorAxis*
/// @param title const char*
void q_coloraxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QColorAxis*
const char* q_coloraxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// @param self QColorAxis*
bool q_coloraxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QColorAxis*
void q_coloraxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// @param self QColorAxis*
QPen* q_coloraxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// @param self QColorAxis*
/// @param brush QBrush*
void q_coloraxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// @param self QColorAxis*
QBrush* q_coloraxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// @param self QColorAxis*
QColor* q_coloraxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// @param self QColorAxis*
QColor* q_coloraxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// @param self QColorAxis*
///
/// @return enum Qt__Orientation
int32_t q_coloraxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// @param self QColorAxis*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t q_coloraxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QColorAxis*
void q_coloraxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// @param self QColorAxis*
bool q_coloraxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QColorAxis*
void q_coloraxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// @param self QColorAxis*
bool q_coloraxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// @param self QColorAxis*
bool q_coloraxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QColorAxis*
void q_coloraxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// @param self QColorAxis*
bool q_coloraxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QPen* pen)
void q_coloraxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QColorAxis*
/// @param brush QBrush*
void q_coloraxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QBrush* brush)
void q_coloraxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QColorAxis*
/// @param pen QFont*
void q_coloraxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QFont* pen)
void q_coloraxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QColorAxis*
/// @param angle int
void q_coloraxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, int angle)
void q_coloraxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QPen* pen)
void q_coloraxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QPen* pen)
void q_coloraxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QColor* color)
void q_coloraxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QColor* color)
void q_coloraxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QColor* color)
void q_coloraxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QColor* color)
void q_coloraxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QColorAxis*
/// @param title const char*
void q_coloraxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, const char* title)
void q_coloraxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QColorAxis*
/// @param brush QBrush*
void q_coloraxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QBrush* brush)
void q_coloraxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QColorAxis*
/// @param font QFont*
void q_coloraxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QFont* font)
void q_coloraxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool visible)
void q_coloraxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QColor* color)
void q_coloraxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QColorAxis*
/// @param color QColor*
void q_coloraxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QColor* color)
void q_coloraxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QColorAxis*
/// @param pen QPen*
void q_coloraxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QPen* pen)
void q_coloraxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QColorAxis*
/// @param brush QBrush*
void q_coloraxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QBrush* brush)
void q_coloraxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QColorAxis*
/// @param reverse bool
void q_coloraxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool reverse)
void q_coloraxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QColorAxis*
/// @param editable bool
void q_coloraxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool editable)
void q_coloraxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QColorAxis*
/// @param labelsTruncated bool
void q_coloraxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool labelsTruncated)
void q_coloraxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QColorAxis*
/// @param truncateLabels bool
void q_coloraxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, bool truncateLabels)
void q_coloraxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QColorAxis*
/// @param visible bool
void q_coloraxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QColorAxis*
/// @param reverse bool
void q_coloraxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QColorAxis*
/// @param editable bool
void q_coloraxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QColorAxis*
/// @param truncateLabels bool
void q_coloraxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QColorAxis*
const char* q_coloraxis_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QColorAxis*
/// @param name char*
void q_coloraxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QColorAxis*
bool q_coloraxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QColorAxis*
bool q_coloraxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QColorAxis*
bool q_coloraxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QColorAxis*
bool q_coloraxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QColorAxis*
/// @param b bool
bool q_coloraxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QColorAxis*
QThread* q_coloraxis_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QColorAxis*
/// @param thread QThread*
bool q_coloraxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QColorAxis*
/// @param interval int
int32_t q_coloraxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QColorAxis*
/// @param id int
void q_coloraxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QColorAxis*
/// @param id enum Qt__TimerId
void q_coloraxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QColorAxis*
libqt_list /* of QObject* */ q_coloraxis_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QColorAxis*
/// @param parent QObject*
void q_coloraxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QColorAxis*
/// @param filterObj QObject*
void q_coloraxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QColorAxis*
/// @param obj QObject*
void q_coloraxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_coloraxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QColorAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_coloraxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_coloraxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_coloraxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QColorAxis*
void q_coloraxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QColorAxis*
void q_coloraxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QColorAxis*
/// @param name const char*
/// @param value QVariant*
bool q_coloraxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QColorAxis*
/// @param name const char*
QVariant* q_coloraxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QColorAxis*
const char** q_coloraxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QColorAxis*
QBindingStorage* q_coloraxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QColorAxis*
const QBindingStorage* q_coloraxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QColorAxis*
void q_coloraxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self)
void q_coloraxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QColorAxis*
QObject* q_coloraxis_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QColorAxis*
/// @param classname const char*
bool q_coloraxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QColorAxis*
void q_coloraxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QColorAxis*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_coloraxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QColorAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_coloraxis_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_coloraxis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QColorAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_coloraxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QColorAxis*
/// @param param1 QObject*
void q_coloraxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QObject* param1)
void q_coloraxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param event QEvent*
bool q_coloraxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param event QEvent*
bool q_coloraxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback bool func(QColorAxis* self, QEvent* event)
void q_coloraxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param watched QObject*
/// @param event QEvent*
bool q_coloraxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param watched QObject*
/// @param event QEvent*
bool q_coloraxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback bool func(QColorAxis* self, QObject* watched, QEvent* event)
void q_coloraxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param event QTimerEvent*
void q_coloraxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param event QTimerEvent*
void q_coloraxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QTimerEvent* event)
void q_coloraxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param event QChildEvent*
void q_coloraxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param event QChildEvent*
void q_coloraxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QChildEvent* event)
void q_coloraxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param event QEvent*
void q_coloraxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param event QEvent*
void q_coloraxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QEvent* event)
void q_coloraxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param signal QMetaMethod*
void q_coloraxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param signal QMetaMethod*
void q_coloraxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QMetaMethod* signal)
void q_coloraxis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param signal QMetaMethod*
void q_coloraxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param signal QMetaMethod*
void q_coloraxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, QMetaMethod* signal)
void q_coloraxis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
QObject* q_coloraxis_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
QObject* q_coloraxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback QObject* func()
void q_coloraxis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
int32_t q_coloraxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
int32_t q_coloraxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback int32_t func()
void q_coloraxis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param signal const char*
int32_t q_coloraxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param signal const char*
int32_t q_coloraxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback int32_t func(QColorAxis* self, const char* signal)
void q_coloraxis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QColorAxis*
/// @param signal QMetaMethod*
bool q_coloraxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QColorAxis*
/// @param signal QMetaMethod*
bool q_coloraxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QColorAxis*
/// @param callback bool func(QColorAxis* self, QMetaMethod* signal)
void q_coloraxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QColorAxis*
/// @param callback void func(QColorAxis* self, const char* objectName)
void q_coloraxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcoloraxis-qtcharts.html#dtor.QColorAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QColorAxis*
void q_coloraxis_delete(void* self);

#endif
