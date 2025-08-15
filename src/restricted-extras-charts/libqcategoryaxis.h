#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCATEGORYAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCATEGORYAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html

/// q_categoryaxis_new constructs a new QCategoryAxis object.
///
QCategoryAxis* q_categoryaxis_new();

/// q_categoryaxis_new2 constructs a new QCategoryAxis object.
///
/// @param parent QObject*
QCategoryAxis* q_categoryaxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCategoryAxis*
const QMetaObject* q_categoryaxis_meta_object(void* self);

/// @param self QCategoryAxis*
/// @param param1 const char*
void* q_categoryaxis_metacast(void* self, const char* param1);

/// @param self QCategoryAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_categoryaxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCategoryAxis*
/// @param callback int32_t fn(QCategoryAxis*, enum QMetaObject__Call, int, void*)
void q_categoryaxis_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QCategoryAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_categoryaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_categoryaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#type)
///
/// @param self QCategoryAxis*
///
/// @return enum QAbstractAxis__AxisType
int64_t q_categoryaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QCategoryAxis*
/// @param callback int64_t fn()
void q_categoryaxis_on_type(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QCategoryAxis*
///
/// @return enum QAbstractAxis__AxisType
int64_t q_categoryaxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#append)
///
/// @param self QCategoryAxis*
/// @param label const char*
/// @param categoryEndValue double
void q_categoryaxis_append(void* self, const char* label, double categoryEndValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#remove)
///
/// @param self QCategoryAxis*
/// @param label const char*
void q_categoryaxis_remove(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#replaceLabel)
///
/// @param self QCategoryAxis*
/// @param oldLabel const char*
/// @param newLabel const char*
void q_categoryaxis_replace_label(void* self, const char* oldLabel, const char* newLabel);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#startValue)
///
/// @param self QCategoryAxis*
double q_categoryaxis_start_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#setStartValue)
///
/// @param self QCategoryAxis*
/// @param min double
void q_categoryaxis_set_start_value(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#endValue)
///
/// @param self QCategoryAxis*
/// @param categoryLabel const char*
double q_categoryaxis_end_value(void* self, const char* categoryLabel);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesLabels)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCategoryAxis*
const char** q_categoryaxis_categories_labels(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#count)
///
/// @param self QCategoryAxis*
int32_t q_categoryaxis_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPosition)
///
/// @param self QCategoryAxis*
///
/// @return enum QCategoryAxis__AxisLabelsPosition
int64_t q_categoryaxis_labels_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#setLabelsPosition)
///
/// @param self QCategoryAxis*
/// @param position enum QCategoryAxis__AxisLabelsPosition
void q_categoryaxis_set_labels_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesChanged)
///
/// @param self QCategoryAxis*
void q_categoryaxis_categories_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*)
void q_categoryaxis_on_categories_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPositionChanged)
///
/// @param self QCategoryAxis*
/// @param position enum QCategoryAxis__AxisLabelsPosition
void q_categoryaxis_labels_position_changed(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPositionChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, enum QCategoryAxis__AxisLabelsPosition)
void q_categoryaxis_on_labels_position_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_categoryaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_categoryaxis_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#startValue)
///
/// @param self QCategoryAxis*
/// @param categoryLabel const char*
double q_categoryaxis_start_value1(void* self, const char* categoryLabel);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMin)
///
/// @param self QCategoryAxis*
/// @param min double
void q_categoryaxis_set_min(void* self, double min);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#min)
///
/// @param self QCategoryAxis*
double q_categoryaxis_min(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMax)
///
/// @param self QCategoryAxis*
/// @param max double
void q_categoryaxis_set_max(void* self, double max);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#max)
///
/// @param self QCategoryAxis*
double q_categoryaxis_max(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setRange)
///
/// @param self QCategoryAxis*
/// @param min double
/// @param max double
void q_categoryaxis_set_range(void* self, double min, double max);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickCount)
///
/// @param self QCategoryAxis*
/// @param count int
void q_categoryaxis_set_tick_count(void* self, int count);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCount)
///
/// @param self QCategoryAxis*
int32_t q_categoryaxis_tick_count(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMinorTickCount)
///
/// @param self QCategoryAxis*
/// @param count int
void q_categoryaxis_set_minor_tick_count(void* self, int count);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCount)
///
/// @param self QCategoryAxis*
int32_t q_categoryaxis_minor_tick_count(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickAnchor)
///
/// @param self QCategoryAxis*
/// @param anchor double
void q_categoryaxis_set_tick_anchor(void* self, double anchor);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchor)
///
/// @param self QCategoryAxis*
double q_categoryaxis_tick_anchor(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickInterval)
///
/// @param self QCategoryAxis*
/// @param insterval double
void q_categoryaxis_set_tick_interval(void* self, double insterval);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickInterval)
///
/// @param self QCategoryAxis*
double q_categoryaxis_tick_interval(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickType)
///
/// @param self QCategoryAxis*
/// @param typeVal enum QValueAxis__TickType
void q_categoryaxis_set_tick_type(void* self, int64_t typeVal);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickType)
///
/// @param self QCategoryAxis*
///
/// @return enum QValueAxis__TickType
int64_t q_categoryaxis_tick_type(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setLabelFormat)
///
/// @param self QCategoryAxis*
/// @param format const char*
void q_categoryaxis_set_label_format(void* self, const char* format);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCategoryAxis*
const char* q_categoryaxis_label_format(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#applyNiceNumbers)
///
/// @param self QCategoryAxis*
void q_categoryaxis_apply_nice_numbers(void* self);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
///
/// @param self QCategoryAxis*
/// @param min double
void q_categoryaxis_min_changed(void* self, double min);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, double)
void q_categoryaxis_on_min_changed(void* self, void (*callback)(void*, double));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
///
/// @param self QCategoryAxis*
/// @param max double
void q_categoryaxis_max_changed(void* self, double max);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, double)
void q_categoryaxis_on_max_changed(void* self, void (*callback)(void*, double));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
///
/// @param self QCategoryAxis*
/// @param min double
/// @param max double
void q_categoryaxis_range_changed(void* self, double min, double max);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, double, double)
void q_categoryaxis_on_range_changed(void* self, void (*callback)(void*, double, double));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
///
/// @param self QCategoryAxis*
/// @param tickCount int
void q_categoryaxis_tick_count_changed(void* self, int tickCount);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, int)
void q_categoryaxis_on_tick_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
///
/// @param self QCategoryAxis*
/// @param tickCount int
void q_categoryaxis_minor_tick_count_changed(void* self, int tickCount);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, int)
void q_categoryaxis_on_minor_tick_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormatChanged)
///
/// @param self QCategoryAxis*
/// @param format const char*
void q_categoryaxis_label_format_changed(void* self, const char* format);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormatChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, const char*)
void q_categoryaxis_on_label_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickIntervalChanged)
///
/// @param self QCategoryAxis*
/// @param interval double
void q_categoryaxis_tick_interval_changed(void* self, double interval);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickIntervalChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, double)
void q_categoryaxis_on_tick_interval_changed(void* self, void (*callback)(void*, double));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchorChanged)
///
/// @param self QCategoryAxis*
/// @param anchor double
void q_categoryaxis_tick_anchor_changed(void* self, double anchor);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, double)
void q_categoryaxis_on_tick_anchor_changed(void* self, void (*callback)(void*, double));

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickTypeChanged)
///
/// @param self QCategoryAxis*
/// @param typeVal enum QValueAxis__TickType
void q_categoryaxis_tick_type_changed(void* self, int64_t typeVal);

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickTypeChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, enum QValueAxis__TickType)
void q_categoryaxis_on_tick_type_changed(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// @param self QCategoryAxis*
void q_categoryaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// @param self QCategoryAxis*
void q_categoryaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// @param self QCategoryAxis*
QPen* q_categoryaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// @param self QCategoryAxis*
QColor* q_categoryaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// @param self QCategoryAxis*
QPen* q_categoryaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// @param self QCategoryAxis*
QPen* q_categoryaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// @param self QCategoryAxis*
QColor* q_categoryaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// @param self QCategoryAxis*
QColor* q_categoryaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// @param self QCategoryAxis*
/// @param brush QBrush*
void q_categoryaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// @param self QCategoryAxis*
QBrush* q_categoryaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// @param self QCategoryAxis*
/// @param font QFont*
void q_categoryaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// @param self QCategoryAxis*
QFont* q_categoryaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// @param self QCategoryAxis*
/// @param angle int
void q_categoryaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// @param self QCategoryAxis*
int32_t q_categoryaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// @param self QCategoryAxis*
QColor* q_categoryaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// @param self QCategoryAxis*
/// @param brush QBrush*
void q_categoryaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// @param self QCategoryAxis*
QBrush* q_categoryaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// @param self QCategoryAxis*
/// @param font QFont*
void q_categoryaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// @param self QCategoryAxis*
QFont* q_categoryaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// @param self QCategoryAxis*
/// @param title const char*
void q_categoryaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCategoryAxis*
const char* q_categoryaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// @param self QCategoryAxis*
QPen* q_categoryaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// @param self QCategoryAxis*
/// @param brush QBrush*
void q_categoryaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// @param self QCategoryAxis*
QBrush* q_categoryaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// @param self QCategoryAxis*
QColor* q_categoryaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// @param self QCategoryAxis*
QColor* q_categoryaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// @param self QCategoryAxis*
///
/// @return enum Qt__Orientation
int64_t q_categoryaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// @param self QCategoryAxis*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_categoryaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QCategoryAxis*
void q_categoryaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QPen*)
void q_categoryaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QCategoryAxis*
/// @param brush QBrush*
void q_categoryaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QBrush*)
void q_categoryaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QCategoryAxis*
/// @param pen QFont*
void q_categoryaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QFont*)
void q_categoryaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QCategoryAxis*
/// @param angle int
void q_categoryaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, int)
void q_categoryaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QPen*)
void q_categoryaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QPen*)
void q_categoryaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QColor*)
void q_categoryaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QColor*)
void q_categoryaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QColor*)
void q_categoryaxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QColor*)
void q_categoryaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QCategoryAxis*
/// @param title const char*
void q_categoryaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, const char*)
void q_categoryaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QCategoryAxis*
/// @param brush QBrush*
void q_categoryaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QBrush*)
void q_categoryaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QCategoryAxis*
/// @param font QFont*
void q_categoryaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QFont*)
void q_categoryaxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QColor*)
void q_categoryaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QCategoryAxis*
/// @param color QColor*
void q_categoryaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QColor*)
void q_categoryaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QCategoryAxis*
/// @param pen QPen*
void q_categoryaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QPen*)
void q_categoryaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QCategoryAxis*
/// @param brush QBrush*
void q_categoryaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QBrush*)
void q_categoryaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QCategoryAxis*
/// @param reverse bool
void q_categoryaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QCategoryAxis*
/// @param editable bool
void q_categoryaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QCategoryAxis*
/// @param labelsTruncated bool
void q_categoryaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QCategoryAxis*
/// @param truncateLabels bool
void q_categoryaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, bool)
void q_categoryaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QCategoryAxis*
/// @param visible bool
void q_categoryaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QCategoryAxis*
/// @param reverse bool
void q_categoryaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QCategoryAxis*
/// @param editable bool
void q_categoryaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QCategoryAxis*
/// @param truncateLabels bool
void q_categoryaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCategoryAxis*
const char* q_categoryaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCategoryAxis*
/// @param name char*
void q_categoryaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCategoryAxis*
bool q_categoryaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCategoryAxis*
/// @param b bool
bool q_categoryaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCategoryAxis*
QThread* q_categoryaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCategoryAxis*
/// @param thread QThread*
bool q_categoryaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCategoryAxis*
/// @param interval int
int32_t q_categoryaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCategoryAxis*
/// @param id int
void q_categoryaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCategoryAxis*
/// @param id enum Qt__TimerId
void q_categoryaxis_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCategoryAxis*
libqt_list /* of QObject* */ q_categoryaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCategoryAxis*
/// @param parent QObject*
void q_categoryaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCategoryAxis*
/// @param filterObj QObject*
void q_categoryaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCategoryAxis*
/// @param obj QObject*
void q_categoryaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_categoryaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCategoryAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_categoryaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_categoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_categoryaxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCategoryAxis*
void q_categoryaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCategoryAxis*
void q_categoryaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCategoryAxis*
/// @param name const char*
/// @param value QVariant*
bool q_categoryaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCategoryAxis*
/// @param name const char*
QVariant* q_categoryaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCategoryAxis*
const char** q_categoryaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCategoryAxis*
QBindingStorage* q_categoryaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCategoryAxis*
const QBindingStorage* q_categoryaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCategoryAxis*
void q_categoryaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*)
void q_categoryaxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCategoryAxis*
QObject* q_categoryaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCategoryAxis*
/// @param classname const char*
bool q_categoryaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCategoryAxis*
void q_categoryaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCategoryAxis*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_categoryaxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCategoryAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_categoryaxis_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_categoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCategoryAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_categoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCategoryAxis*
/// @param param1 QObject*
void q_categoryaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QObject*)
void q_categoryaxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QEvent*
bool q_categoryaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QEvent*
bool q_categoryaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback bool fn(QCategoryAxis*, QEvent*)
void q_categoryaxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param watched QObject*
/// @param event QEvent*
bool q_categoryaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param watched QObject*
/// @param event QEvent*
bool q_categoryaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback bool fn(QCategoryAxis*, QObject*, QEvent*)
void q_categoryaxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QTimerEvent*
void q_categoryaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QTimerEvent*
void q_categoryaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QTimerEvent*)
void q_categoryaxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QChildEvent*
void q_categoryaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QChildEvent*
void q_categoryaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QChildEvent*)
void q_categoryaxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QEvent*
void q_categoryaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param event QEvent*
void q_categoryaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QEvent*)
void q_categoryaxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal QMetaMethod*
void q_categoryaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal QMetaMethod*
void q_categoryaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QMetaMethod*)
void q_categoryaxis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal QMetaMethod*
void q_categoryaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal QMetaMethod*
void q_categoryaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, QMetaMethod*)
void q_categoryaxis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
QObject* q_categoryaxis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
QObject* q_categoryaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback QObject* fn()
void q_categoryaxis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
int32_t q_categoryaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
int32_t q_categoryaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback int32_t fn()
void q_categoryaxis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal const char*
int32_t q_categoryaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal const char*
int32_t q_categoryaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback int32_t fn(QCategoryAxis*, const char*)
void q_categoryaxis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal QMetaMethod*
bool q_categoryaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param signal QMetaMethod*
bool q_categoryaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCategoryAxis*
/// @param callback bool fn(QCategoryAxis*, QMetaMethod*)
void q_categoryaxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCategoryAxis*
/// @param callback void fn(QCategoryAxis*, const char*)
void q_categoryaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#dtor.QCategoryAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QCategoryAxis*
void q_categoryaxis_delete(void* self);

/// https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#types

typedef enum {
    QCATEGORYAXIS_AXISLABELSPOSITION_AXISLABELSPOSITIONCENTER = 0,
    QCATEGORYAXIS_AXISLABELSPOSITION_AXISLABELSPOSITIONONVALUE = 1
} QCategoryAxis__AxisLabelsPosition;

#endif
