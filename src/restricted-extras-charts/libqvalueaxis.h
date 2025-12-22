#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html)

/// q_valueaxis_new constructs a new QValueAxis object.
///
QValueAxis* q_valueaxis_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html)

/// q_valueaxis_new2 constructs a new QValueAxis object.
///
/// @param parent QObject*
///
QValueAxis* q_valueaxis_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QValueAxis*
///
const QMetaObject* q_valueaxis_meta_object(void* self);

/// @param self QValueAxis*
/// @param param1 const char*
///
void* q_valueaxis_metacast(void* self, const char* param1);

/// @param self QValueAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_valueaxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QValueAxis*
/// @param callback int32_t func(QValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_valueaxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QValueAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_valueaxis_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_valueaxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#type)
///
/// @param self QValueAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_valueaxis_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QValueAxis*
/// @param callback int32_t func()
///
void q_valueaxis_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QValueAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_valueaxis_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setMin)
///
/// @param self QValueAxis*
/// @param min double
///
void q_valueaxis_set_min(void* self, double min);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#min)
///
/// @param self QValueAxis*
///
double q_valueaxis_min(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setMax)
///
/// @param self QValueAxis*
/// @param max double
///
void q_valueaxis_set_max(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#max)
///
/// @param self QValueAxis*
///
double q_valueaxis_max(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setRange)
///
/// @param self QValueAxis*
/// @param min double
/// @param max double
///
void q_valueaxis_set_range(void* self, double min, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickCount)
///
/// @param self QValueAxis*
/// @param count int
///
void q_valueaxis_set_tick_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickCount)
///
/// @param self QValueAxis*
///
int32_t q_valueaxis_tick_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setMinorTickCount)
///
/// @param self QValueAxis*
/// @param count int
///
void q_valueaxis_set_minor_tick_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minorTickCount)
///
/// @param self QValueAxis*
///
int32_t q_valueaxis_minor_tick_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickAnchor)
///
/// @param self QValueAxis*
/// @param anchor double
///
void q_valueaxis_set_tick_anchor(void* self, double anchor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickAnchor)
///
/// @param self QValueAxis*
///
double q_valueaxis_tick_anchor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickInterval)
///
/// @param self QValueAxis*
/// @param insterval double
///
void q_valueaxis_set_tick_interval(void* self, double insterval);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickInterval)
///
/// @param self QValueAxis*
///
double q_valueaxis_tick_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickType)
///
/// @param self QValueAxis*
/// @param type enum QValueAxis__TickType
///
void q_valueaxis_set_tick_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickType)
///
/// @param self QValueAxis*
///
/// @return enum QValueAxis__TickType
///
int32_t q_valueaxis_tick_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setLabelFormat)
///
/// @param self QValueAxis*
/// @param format const char*
///
void q_valueaxis_set_label_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#labelFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QValueAxis*
///
const char* q_valueaxis_label_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#applyNiceNumbers)
///
/// @param self QValueAxis*
///
void q_valueaxis_apply_nice_numbers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minChanged)
///
/// @param self QValueAxis*
/// @param min double
///
void q_valueaxis_min_changed(void* self, double min);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, double min)
///
void q_valueaxis_on_min_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#maxChanged)
///
/// @param self QValueAxis*
/// @param max double
///
void q_valueaxis_max_changed(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#maxChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, double max)
///
void q_valueaxis_on_max_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#rangeChanged)
///
/// @param self QValueAxis*
/// @param min double
/// @param max double
///
void q_valueaxis_range_changed(void* self, double min, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#rangeChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, double min, double max)
///
void q_valueaxis_on_range_changed(void* self, void (*callback)(void*, double, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickCountChanged)
///
/// @param self QValueAxis*
/// @param tickCount int
///
void q_valueaxis_tick_count_changed(void* self, int tickCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickCountChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, int tickCount)
///
void q_valueaxis_on_tick_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// @param self QValueAxis*
/// @param tickCount int
///
void q_valueaxis_minor_tick_count_changed(void* self, int tickCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, int tickCount)
///
void q_valueaxis_on_minor_tick_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#labelFormatChanged)
///
/// @param self QValueAxis*
/// @param format const char*
///
void q_valueaxis_label_format_changed(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#labelFormatChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, const char* format)
///
void q_valueaxis_on_label_format_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickIntervalChanged)
///
/// @param self QValueAxis*
/// @param interval double
///
void q_valueaxis_tick_interval_changed(void* self, double interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickIntervalChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, double interval)
///
void q_valueaxis_on_tick_interval_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickAnchorChanged)
///
/// @param self QValueAxis*
/// @param anchor double
///
void q_valueaxis_tick_anchor_changed(void* self, double anchor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickAnchorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, double anchor)
///
void q_valueaxis_on_tick_anchor_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickTypeChanged)
///
/// @param self QValueAxis*
/// @param type enum QValueAxis__TickType
///
void q_valueaxis_tick_type_changed(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickTypeChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, enum QValueAxis__TickType type)
///
void q_valueaxis_on_tick_type_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_valueaxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_valueaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// @param self QValueAxis*
///
void q_valueaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// @param self QValueAxis*
///
void q_valueaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// @param self QValueAxis*
///
QPen* q_valueaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// @param self QValueAxis*
///
QColor* q_valueaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// @param self QValueAxis*
///
QPen* q_valueaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// @param self QValueAxis*
///
QPen* q_valueaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// @param self QValueAxis*
///
QColor* q_valueaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// @param self QValueAxis*
///
QColor* q_valueaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// @param self QValueAxis*
/// @param brush QBrush*
///
void q_valueaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// @param self QValueAxis*
///
QBrush* q_valueaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// @param self QValueAxis*
/// @param font QFont*
///
void q_valueaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// @param self QValueAxis*
///
QFont* q_valueaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// @param self QValueAxis*
/// @param angle int
///
void q_valueaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// @param self QValueAxis*
///
int32_t q_valueaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// @param self QValueAxis*
///
QColor* q_valueaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// @param self QValueAxis*
/// @param brush QBrush*
///
void q_valueaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// @param self QValueAxis*
///
QBrush* q_valueaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// @param self QValueAxis*
/// @param font QFont*
///
void q_valueaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// @param self QValueAxis*
///
QFont* q_valueaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// @param self QValueAxis*
/// @param title const char*
///
void q_valueaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QValueAxis*
///
const char* q_valueaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// @param self QValueAxis*
///
bool q_valueaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// @param self QValueAxis*
///
QPen* q_valueaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// @param self QValueAxis*
/// @param brush QBrush*
///
void q_valueaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// @param self QValueAxis*
///
QBrush* q_valueaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// @param self QValueAxis*
///
QColor* q_valueaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// @param self QValueAxis*
///
QColor* q_valueaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// @param self QValueAxis*
///
/// @return enum Qt__Orientation
///
int32_t q_valueaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// @param self QValueAxis*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_valueaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// @param self QValueAxis*
///
bool q_valueaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// @param self QValueAxis*
///
bool q_valueaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QValueAxis*
///
void q_valueaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// @param self QValueAxis*
///
bool q_valueaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QPen* pen)
///
void q_valueaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QValueAxis*
/// @param brush QBrush*
///
void q_valueaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QBrush* brush)
///
void q_valueaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QValueAxis*
/// @param pen QFont*
///
void q_valueaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QFont* pen)
///
void q_valueaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QValueAxis*
/// @param angle int
///
void q_valueaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, int angle)
///
void q_valueaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QPen* pen)
///
void q_valueaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QPen* pen)
///
void q_valueaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QColor* color)
///
void q_valueaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QColor* color)
///
void q_valueaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QColor* color)
///
void q_valueaxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QColor* color)
///
void q_valueaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QValueAxis*
/// @param title const char*
///
void q_valueaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, const char* title)
///
void q_valueaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QValueAxis*
/// @param brush QBrush*
///
void q_valueaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QBrush* brush)
///
void q_valueaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QValueAxis*
/// @param font QFont*
///
void q_valueaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QFont* font)
///
void q_valueaxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool visible)
///
void q_valueaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QColor* color)
///
void q_valueaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QValueAxis*
/// @param color QColor*
///
void q_valueaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QColor* color)
///
void q_valueaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QValueAxis*
/// @param pen QPen*
///
void q_valueaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QPen* pen)
///
void q_valueaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QValueAxis*
/// @param brush QBrush*
///
void q_valueaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QBrush* brush)
///
void q_valueaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QValueAxis*
/// @param reverse bool
///
void q_valueaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool reverse)
///
void q_valueaxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QValueAxis*
/// @param editable bool
///
void q_valueaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool editable)
///
void q_valueaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QValueAxis*
/// @param labelsTruncated bool
///
void q_valueaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool labelsTruncated)
///
void q_valueaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QValueAxis*
/// @param truncateLabels bool
///
void q_valueaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, bool truncateLabels)
///
void q_valueaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QValueAxis*
/// @param visible bool
///
void q_valueaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QValueAxis*
/// @param reverse bool
///
void q_valueaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QValueAxis*
/// @param editable bool
///
void q_valueaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QValueAxis*
/// @param truncateLabels bool
///
void q_valueaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QValueAxis*
///
const char* q_valueaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QValueAxis*
/// @param name char*
///
void q_valueaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QValueAxis*
///
bool q_valueaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QValueAxis*
///
bool q_valueaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QValueAxis*
/// @param b bool
///
bool q_valueaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QValueAxis*
///
QThread* q_valueaxis_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QValueAxis*
/// @param thread QThread*
///
bool q_valueaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValueAxis*
/// @param interval int
///
int32_t q_valueaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValueAxis*
/// @param id int
///
void q_valueaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValueAxis*
/// @param id enum Qt__TimerId
///
void q_valueaxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QValueAxis*
///
libqt_list /* of QObject* */ q_valueaxis_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QValueAxis*
/// @param parent QObject*
///
void q_valueaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QValueAxis*
/// @param filterObj QObject*
///
void q_valueaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QValueAxis*
/// @param obj QObject*
///
void q_valueaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_valueaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QValueAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_valueaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_valueaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_valueaxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QValueAxis*
///
void q_valueaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QValueAxis*
///
void q_valueaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QValueAxis*
/// @param name const char*
/// @param value QVariant*
///
bool q_valueaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QValueAxis*
/// @param name const char*
///
QVariant* q_valueaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QValueAxis*
///
const char** q_valueaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QValueAxis*
///
QBindingStorage* q_valueaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QValueAxis*
///
const QBindingStorage* q_valueaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValueAxis*
///
void q_valueaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self)
///
void q_valueaxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QValueAxis*
///
QObject* q_valueaxis_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QValueAxis*
/// @param classname const char*
///
bool q_valueaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QValueAxis*
///
void q_valueaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QValueAxis*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_valueaxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValueAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_valueaxis_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_valueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QValueAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_valueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValueAxis*
/// @param param1 QObject*
///
void q_valueaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QObject* param1)
///
void q_valueaxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param event QEvent*
///
bool q_valueaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param event QEvent*
///
bool q_valueaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback bool func(QValueAxis* self, QEvent* event)
///
void q_valueaxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_valueaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_valueaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback bool func(QValueAxis* self, QObject* watched, QEvent* event)
///
void q_valueaxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param event QTimerEvent*
///
void q_valueaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param event QTimerEvent*
///
void q_valueaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QTimerEvent* event)
///
void q_valueaxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param event QChildEvent*
///
void q_valueaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param event QChildEvent*
///
void q_valueaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QChildEvent* event)
///
void q_valueaxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param event QEvent*
///
void q_valueaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param event QEvent*
///
void q_valueaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QEvent* event)
///
void q_valueaxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param signal QMetaMethod*
///
void q_valueaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param signal QMetaMethod*
///
void q_valueaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QMetaMethod* signal)
///
void q_valueaxis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param signal QMetaMethod*
///
void q_valueaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param signal QMetaMethod*
///
void q_valueaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, QMetaMethod* signal)
///
void q_valueaxis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
///
QObject* q_valueaxis_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
///
QObject* q_valueaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback QObject* func()
///
void q_valueaxis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
///
int32_t q_valueaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
///
int32_t q_valueaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback int32_t func()
///
void q_valueaxis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param signal const char*
///
int32_t q_valueaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param signal const char*
///
int32_t q_valueaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback int32_t func(QValueAxis* self, const char* signal)
///
void q_valueaxis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValueAxis*
/// @param signal QMetaMethod*
///
bool q_valueaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValueAxis*
/// @param signal QMetaMethod*
///
bool q_valueaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValueAxis*
/// @param callback bool func(QValueAxis* self, QMetaMethod* signal)
///
void q_valueaxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QValueAxis*
/// @param callback void func(QValueAxis* self, const char* objectName)
///
void q_valueaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#dtor.QValueAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QValueAxis*
///
void q_valueaxis_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#public-types)

typedef enum {
    QVALUEAXIS_TICKTYPE_TICKSDYNAMIC = 0,
    QVALUEAXIS_TICKTYPE_TICKSFIXED = 1
} QValueAxis__TickType;

#endif
