#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLOGVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLOGVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html

/// q_logvalueaxis_new constructs a new QLogValueAxis object.
///
QLogValueAxis* q_logvalueaxis_new();

/// q_logvalueaxis_new2 constructs a new QLogValueAxis object.
///
/// @param parent QObject*
QLogValueAxis* q_logvalueaxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLogValueAxis*
const QMetaObject* q_logvalueaxis_meta_object(void* self);

/// @param self QLogValueAxis*
/// @param param1 const char*
void* q_logvalueaxis_metacast(void* self, const char* param1);

/// @param self QLogValueAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_logvalueaxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLogValueAxis*
/// @param callback int32_t func(QLogValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_logvalueaxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLogValueAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_logvalueaxis_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_logvalueaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
///
/// @param self QLogValueAxis*
///
/// @return enum QAbstractAxis__AxisType
int32_t q_logvalueaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QLogValueAxis*
/// @param callback int32_t func()
void q_logvalueaxis_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QLogValueAxis*
///
/// @return enum QAbstractAxis__AxisType
int32_t q_logvalueaxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMin)
///
/// @param self QLogValueAxis*
/// @param min double
void q_logvalueaxis_set_min(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#min)
///
/// @param self QLogValueAxis*
double q_logvalueaxis_min(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMax)
///
/// @param self QLogValueAxis*
/// @param max double
void q_logvalueaxis_set_max(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#max)
///
/// @param self QLogValueAxis*
double q_logvalueaxis_max(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setRange)
///
/// @param self QLogValueAxis*
/// @param min double
/// @param max double
void q_logvalueaxis_set_range(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setLabelFormat)
///
/// @param self QLogValueAxis*
/// @param format const char*
void q_logvalueaxis_set_label_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLogValueAxis*
const char* q_logvalueaxis_label_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setBase)
///
/// @param self QLogValueAxis*
/// @param base double
void q_logvalueaxis_set_base(void* self, double base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#base)
///
/// @param self QLogValueAxis*
double q_logvalueaxis_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCount)
///
/// @param self QLogValueAxis*
int32_t q_logvalueaxis_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMinorTickCount)
///
/// @param self QLogValueAxis*
/// @param minorTickCount int
void q_logvalueaxis_set_minor_tick_count(void* self, int minorTickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCount)
///
/// @param self QLogValueAxis*
int32_t q_logvalueaxis_minor_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minChanged)
///
/// @param self QLogValueAxis*
/// @param min double
void q_logvalueaxis_min_changed(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, double min)
void q_logvalueaxis_on_min_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#maxChanged)
///
/// @param self QLogValueAxis*
/// @param max double
void q_logvalueaxis_max_changed(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#maxChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, double max)
void q_logvalueaxis_on_max_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#rangeChanged)
///
/// @param self QLogValueAxis*
/// @param min double
/// @param max double
void q_logvalueaxis_range_changed(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#rangeChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, double min, double max)
void q_logvalueaxis_on_range_changed(void* self, void (*callback)(void*, double, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormatChanged)
///
/// @param self QLogValueAxis*
/// @param format const char*
void q_logvalueaxis_label_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormatChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, const char* format)
void q_logvalueaxis_on_label_format_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#baseChanged)
///
/// @param self QLogValueAxis*
/// @param base double
void q_logvalueaxis_base_changed(void* self, double base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#baseChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, double base)
void q_logvalueaxis_on_base_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCountChanged)
///
/// @param self QLogValueAxis*
/// @param tickCount int
void q_logvalueaxis_tick_count_changed(void* self, int tickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCountChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, int tickCount)
void q_logvalueaxis_on_tick_count_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// @param self QLogValueAxis*
/// @param minorTickCount int
void q_logvalueaxis_minor_tick_count_changed(void* self, int minorTickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, int minorTickCount)
void q_logvalueaxis_on_minor_tick_count_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_logvalueaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_logvalueaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// @param self QLogValueAxis*
QPen* q_logvalueaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// @param self QLogValueAxis*
QColor* q_logvalueaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// @param self QLogValueAxis*
QPen* q_logvalueaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// @param self QLogValueAxis*
QPen* q_logvalueaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// @param self QLogValueAxis*
QColor* q_logvalueaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// @param self QLogValueAxis*
QColor* q_logvalueaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// @param self QLogValueAxis*
/// @param brush QBrush*
void q_logvalueaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// @param self QLogValueAxis*
QBrush* q_logvalueaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// @param self QLogValueAxis*
/// @param font QFont*
void q_logvalueaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// @param self QLogValueAxis*
QFont* q_logvalueaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// @param self QLogValueAxis*
/// @param angle int
void q_logvalueaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// @param self QLogValueAxis*
int32_t q_logvalueaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// @param self QLogValueAxis*
QColor* q_logvalueaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// @param self QLogValueAxis*
/// @param brush QBrush*
void q_logvalueaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// @param self QLogValueAxis*
QBrush* q_logvalueaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// @param self QLogValueAxis*
/// @param font QFont*
void q_logvalueaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// @param self QLogValueAxis*
QFont* q_logvalueaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// @param self QLogValueAxis*
/// @param title const char*
void q_logvalueaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLogValueAxis*
const char* q_logvalueaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// @param self QLogValueAxis*
QPen* q_logvalueaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// @param self QLogValueAxis*
/// @param brush QBrush*
void q_logvalueaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// @param self QLogValueAxis*
QBrush* q_logvalueaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// @param self QLogValueAxis*
QColor* q_logvalueaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// @param self QLogValueAxis*
QColor* q_logvalueaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// @param self QLogValueAxis*
///
/// @return enum Qt__Orientation
int32_t q_logvalueaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// @param self QLogValueAxis*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t q_logvalueaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QPen* pen)
void q_logvalueaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QLogValueAxis*
/// @param brush QBrush*
void q_logvalueaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QBrush* brush)
void q_logvalueaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QLogValueAxis*
/// @param pen QFont*
void q_logvalueaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QFont* pen)
void q_logvalueaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QLogValueAxis*
/// @param angle int
void q_logvalueaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, int angle)
void q_logvalueaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QPen* pen)
void q_logvalueaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QPen* pen)
void q_logvalueaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QColor* color)
void q_logvalueaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QColor* color)
void q_logvalueaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QColor* color)
void q_logvalueaxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QColor* color)
void q_logvalueaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QLogValueAxis*
/// @param title const char*
void q_logvalueaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, const char* title)
void q_logvalueaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QLogValueAxis*
/// @param brush QBrush*
void q_logvalueaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QBrush* brush)
void q_logvalueaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QLogValueAxis*
/// @param font QFont*
void q_logvalueaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QFont* font)
void q_logvalueaxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool visible)
void q_logvalueaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QColor* color)
void q_logvalueaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QLogValueAxis*
/// @param color QColor*
void q_logvalueaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QColor* color)
void q_logvalueaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QLogValueAxis*
/// @param pen QPen*
void q_logvalueaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QPen* pen)
void q_logvalueaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QLogValueAxis*
/// @param brush QBrush*
void q_logvalueaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QBrush* brush)
void q_logvalueaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QLogValueAxis*
/// @param reverse bool
void q_logvalueaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool reverse)
void q_logvalueaxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QLogValueAxis*
/// @param editable bool
void q_logvalueaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool editable)
void q_logvalueaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QLogValueAxis*
/// @param labelsTruncated bool
void q_logvalueaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool labelsTruncated)
void q_logvalueaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QLogValueAxis*
/// @param truncateLabels bool
void q_logvalueaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, bool truncateLabels)
void q_logvalueaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QLogValueAxis*
/// @param visible bool
void q_logvalueaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QLogValueAxis*
/// @param reverse bool
void q_logvalueaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QLogValueAxis*
/// @param editable bool
void q_logvalueaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QLogValueAxis*
/// @param truncateLabels bool
void q_logvalueaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLogValueAxis*
const char* q_logvalueaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLogValueAxis*
/// @param name char*
void q_logvalueaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLogValueAxis*
bool q_logvalueaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLogValueAxis*
/// @param b bool
bool q_logvalueaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLogValueAxis*
QThread* q_logvalueaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLogValueAxis*
/// @param thread QThread*
bool q_logvalueaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLogValueAxis*
/// @param interval int
int32_t q_logvalueaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLogValueAxis*
/// @param id int
void q_logvalueaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLogValueAxis*
/// @param id enum Qt__TimerId
void q_logvalueaxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLogValueAxis*
libqt_list /* of QObject* */ q_logvalueaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLogValueAxis*
/// @param parent QObject*
void q_logvalueaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLogValueAxis*
/// @param filterObj QObject*
void q_logvalueaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLogValueAxis*
/// @param obj QObject*
void q_logvalueaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_logvalueaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLogValueAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_logvalueaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_logvalueaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_logvalueaxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLogValueAxis*
/// @param name const char*
/// @param value QVariant*
bool q_logvalueaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLogValueAxis*
/// @param name const char*
QVariant* q_logvalueaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLogValueAxis*
const char** q_logvalueaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLogValueAxis*
QBindingStorage* q_logvalueaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLogValueAxis*
const QBindingStorage* q_logvalueaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self)
void q_logvalueaxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLogValueAxis*
QObject* q_logvalueaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLogValueAxis*
/// @param classname const char*
bool q_logvalueaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLogValueAxis*
void q_logvalueaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLogValueAxis*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_logvalueaxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLogValueAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_logvalueaxis_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_logvalueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLogValueAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_logvalueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValueAxis*
/// @param param1 QObject*
void q_logvalueaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QObject* param1)
void q_logvalueaxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QEvent*
bool q_logvalueaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QEvent*
bool q_logvalueaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback bool func(QLogValueAxis* self, QEvent* event)
void q_logvalueaxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param watched QObject*
/// @param event QEvent*
bool q_logvalueaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param watched QObject*
/// @param event QEvent*
bool q_logvalueaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback bool func(QLogValueAxis* self, QObject* watched, QEvent* event)
void q_logvalueaxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QTimerEvent*
void q_logvalueaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QTimerEvent*
void q_logvalueaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QTimerEvent* event)
void q_logvalueaxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QChildEvent*
void q_logvalueaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QChildEvent*
void q_logvalueaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QChildEvent* event)
void q_logvalueaxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QEvent*
void q_logvalueaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param event QEvent*
void q_logvalueaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QEvent* event)
void q_logvalueaxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal QMetaMethod*
void q_logvalueaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal QMetaMethod*
void q_logvalueaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QMetaMethod* signal)
void q_logvalueaxis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal QMetaMethod*
void q_logvalueaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal QMetaMethod*
void q_logvalueaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, QMetaMethod* signal)
void q_logvalueaxis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
QObject* q_logvalueaxis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
QObject* q_logvalueaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback QObject* func()
void q_logvalueaxis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
int32_t q_logvalueaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
int32_t q_logvalueaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback int32_t func()
void q_logvalueaxis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal const char*
int32_t q_logvalueaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal const char*
int32_t q_logvalueaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback int32_t func(QLogValueAxis* self, const char* signal)
void q_logvalueaxis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal QMetaMethod*
bool q_logvalueaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param signal QMetaMethod*
bool q_logvalueaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLogValueAxis*
/// @param callback bool func(QLogValueAxis* self, QMetaMethod* signal)
void q_logvalueaxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLogValueAxis*
/// @param callback void func(QLogValueAxis* self, const char* objectName)
void q_logvalueaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#dtor.QLogValueAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QLogValueAxis*
void q_logvalueaxis_delete(void* self);

#endif
