#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVALUEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html

/// q_valueaxis_new constructs a new QValueAxis object.
///
///
QValueAxis* q_valueaxis_new();

/// q_valueaxis_new2 constructs a new QValueAxis object.
///
/// ``` QObject* parent ```
QValueAxis* q_valueaxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QValueAxis* self ```
const QMetaObject* q_valueaxis_meta_object(void* self);

/// ``` QValueAxis* self, const char* param1 ```
void* q_valueaxis_metacast(void* self, const char* param1);

/// ``` QValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_valueaxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QValueAxis* self, int32_t (*slot)(QValueAxis*, enum QMetaObject__Call, int, void*) ```
void q_valueaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_valueaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_valueaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#type)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QValueAxis* self, int64_t (*slot)() ```
void q_valueaxis_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setMin)
///
/// ``` QValueAxis* self, double min ```
void q_valueaxis_set_min(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#min)
///
/// ``` QValueAxis* self ```
double q_valueaxis_min(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setMax)
///
/// ``` QValueAxis* self, double max ```
void q_valueaxis_set_max(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#max)
///
/// ``` QValueAxis* self ```
double q_valueaxis_max(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setRange)
///
/// ``` QValueAxis* self, double min, double max ```
void q_valueaxis_set_range(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickCount)
///
/// ``` QValueAxis* self, int count ```
void q_valueaxis_set_tick_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickCount)
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setMinorTickCount)
///
/// ``` QValueAxis* self, int count ```
void q_valueaxis_set_minor_tick_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minorTickCount)
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_minor_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickAnchor)
///
/// ``` QValueAxis* self, double anchor ```
void q_valueaxis_set_tick_anchor(void* self, double anchor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickAnchor)
///
/// ``` QValueAxis* self ```
double q_valueaxis_tick_anchor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickInterval)
///
/// ``` QValueAxis* self, double insterval ```
void q_valueaxis_set_tick_interval(void* self, double insterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickInterval)
///
/// ``` QValueAxis* self ```
double q_valueaxis_tick_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setTickType)
///
/// ``` QValueAxis* self, enum QValueAxis__TickType typeVal ```
void q_valueaxis_set_tick_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickType)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_tick_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#setLabelFormat)
///
/// ``` QValueAxis* self, const char* format ```
void q_valueaxis_set_label_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#labelFormat)
///
/// ``` QValueAxis* self ```
const char* q_valueaxis_label_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#applyNiceNumbers)
///
/// ``` QValueAxis* self ```
void q_valueaxis_apply_nice_numbers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minChanged)
///
/// ``` QValueAxis* self, double min ```
void q_valueaxis_min_changed(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_min_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#maxChanged)
///
/// ``` QValueAxis* self, double max ```
void q_valueaxis_max_changed(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#maxChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_max_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#rangeChanged)
///
/// ``` QValueAxis* self, double min, double max ```
void q_valueaxis_range_changed(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#rangeChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double, double) ```
void q_valueaxis_on_range_changed(void* self, void (*slot)(void*, double, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickCountChanged)
///
/// ``` QValueAxis* self, int tickCount ```
void q_valueaxis_tick_count_changed(void* self, int tickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickCountChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, int) ```
void q_valueaxis_on_tick_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// ``` QValueAxis* self, int tickCount ```
void q_valueaxis_minor_tick_count_changed(void* self, int tickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, int) ```
void q_valueaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#labelFormatChanged)
///
/// ``` QValueAxis* self, const char* format ```
void q_valueaxis_label_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#labelFormatChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, const char*) ```
void q_valueaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickIntervalChanged)
///
/// ``` QValueAxis* self, double interval ```
void q_valueaxis_tick_interval_changed(void* self, double interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickIntervalChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_tick_interval_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickAnchorChanged)
///
/// ``` QValueAxis* self, double anchor ```
void q_valueaxis_tick_anchor_changed(void* self, double anchor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickAnchorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_tick_anchor_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickTypeChanged)
///
/// ``` QValueAxis* self, enum QValueAxis__TickType typeVal ```
void q_valueaxis_tick_type_changed(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#tickTypeChanged)
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, enum QValueAxis__TickType) ```
void q_valueaxis_on_tick_type_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_valueaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_valueaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QValueAxis* self ```
void q_valueaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QValueAxis* self ```
void q_valueaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QValueAxis* self ```
QBrush* q_valueaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QValueAxis* self, QFont* font ```
void q_valueaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QValueAxis* self ```
QFont* q_valueaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QValueAxis* self, int angle ```
void q_valueaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QValueAxis* self ```
QBrush* q_valueaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QValueAxis* self, QFont* font ```
void q_valueaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QValueAxis* self ```
QFont* q_valueaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QValueAxis* self, const char* title ```
void q_valueaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QValueAxis* self ```
const char* q_valueaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QValueAxis* self ```
QBrush* q_valueaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_valueaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QValueAxis* self, QFont* pen ```
void q_valueaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_valueaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QValueAxis* self, int angle ```
void q_valueaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_valueaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QValueAxis* self, const char* title ```
void q_valueaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_valueaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_valueaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QValueAxis* self, QFont* font ```
void q_valueaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_valueaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_valueaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QValueAxis* self, bool reverse ```
void q_valueaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QValueAxis* self, bool editable ```
void q_valueaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QValueAxis* self, bool labelsTruncated ```
void q_valueaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QValueAxis* self, bool truncateLabels ```
void q_valueaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QValueAxis* self, bool reverse ```
void q_valueaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QValueAxis* self, bool editable ```
void q_valueaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QValueAxis* self, bool truncateLabels ```
void q_valueaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QValueAxis* self ```
const char* q_valueaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QValueAxis* self, char* name ```
void q_valueaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QValueAxis* self, bool b ```
bool q_valueaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QValueAxis* self ```
QThread* q_valueaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QValueAxis* self, QThread* thread ```
void q_valueaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QValueAxis* self, int interval ```
int32_t q_valueaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QValueAxis* self, int id ```
void q_valueaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QValueAxis* self ```
libqt_list /* of QObject* */ q_valueaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QValueAxis* self, QObject* parent ```
void q_valueaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QValueAxis* self, QObject* filterObj ```
void q_valueaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QValueAxis* self, QObject* obj ```
void q_valueaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_valueaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QValueAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_valueaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_valueaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_valueaxis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QValueAxis* self ```
void q_valueaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QValueAxis* self ```
void q_valueaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QValueAxis* self, const char* name, QVariant* value ```
bool q_valueaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QValueAxis* self, const char* name ```
QVariant* q_valueaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QValueAxis* self ```
const char** q_valueaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QValueAxis* self ```
QBindingStorage* q_valueaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QValueAxis* self ```
const QBindingStorage* q_valueaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValueAxis* self ```
void q_valueaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValueAxis* self, void (*slot)(QObject*) ```
void q_valueaxis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QValueAxis* self ```
QObject* q_valueaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QValueAxis* self, const char* classname ```
bool q_valueaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QValueAxis* self ```
void q_valueaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QValueAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_valueaxis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_valueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QValueAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_valueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValueAxis* self, QObject* param1 ```
void q_valueaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValueAxis* self, void (*slot)(QObject*, QObject*) ```
void q_valueaxis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
bool q_valueaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
bool q_valueaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, bool (*slot)(QValueAxis*, QEvent*) ```
void q_valueaxis_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QObject* watched, QEvent* event ```
bool q_valueaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QObject* watched, QEvent* event ```
bool q_valueaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, bool (*slot)(QValueAxis*, QObject*, QEvent*) ```
void q_valueaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QTimerEvent* event ```
void q_valueaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QTimerEvent* event ```
void q_valueaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QTimerEvent*) ```
void q_valueaxis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QChildEvent* event ```
void q_valueaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QChildEvent* event ```
void q_valueaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QChildEvent*) ```
void q_valueaxis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
void q_valueaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
void q_valueaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QEvent*) ```
void q_valueaxis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QMetaMethod*) ```
void q_valueaxis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QMetaMethod*) ```
void q_valueaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self ```
QObject* q_valueaxis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self ```
QObject* q_valueaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, QObject* (*slot)() ```
void q_valueaxis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, int32_t (*slot)() ```
void q_valueaxis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, const char* signal ```
int32_t q_valueaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, const char* signal ```
int32_t q_valueaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, int32_t (*slot)(QValueAxis*, const char*) ```
void q_valueaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
bool q_valueaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
bool q_valueaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, bool (*slot)(QValueAxis*, QMetaMethod*) ```
void q_valueaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QValueAxis* self, void (*slot)(QObject*, const char*) ```
void q_valueaxis_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#dtor.QValueAxis)
///
/// Delete this object from C++ memory.
///
/// ``` QValueAxis* self ```
void q_valueaxis_delete(void* self);

/// https://doc.qt.io/qt-6/qvalueaxis-qtcharts.html#types

typedef enum {
    QVALUEAXIS_TICKTYPE_TICKSDYNAMIC = 0,
    QVALUEAXIS_TICKTYPE_TICKSFIXED = 1
} QValueAxis__TickType;

#endif
