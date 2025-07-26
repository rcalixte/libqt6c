#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQDATETIMEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQDATETIMEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html

/// q_datetimeaxis_new constructs a new QDateTimeAxis object.
///
///
QDateTimeAxis* q_datetimeaxis_new();

/// q_datetimeaxis_new2 constructs a new QDateTimeAxis object.
///
/// ``` QObject* parent ```
QDateTimeAxis* q_datetimeaxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDateTimeAxis* self ```
const QMetaObject* q_datetimeaxis_meta_object(void* self);

/// ``` QDateTimeAxis* self, const char* param1 ```
void* q_datetimeaxis_metacast(void* self, const char* param1);

/// ``` QDateTimeAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datetimeaxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDateTimeAxis* self, int32_t (*slot)(QDateTimeAxis*, enum QMetaObject__Call, int, void*) ```
void q_datetimeaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDateTimeAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datetimeaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_datetimeaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QDateTimeAxis* self, int64_t (*slot)() ```
void q_datetimeaxis_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMin)
///
/// ``` QDateTimeAxis* self, QDateTime* min ```
void q_datetimeaxis_set_min(void* self, void* min);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#min)
///
/// ``` QDateTimeAxis* self ```
QDateTime* q_datetimeaxis_min(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMax)
///
/// ``` QDateTimeAxis* self, QDateTime* max ```
void q_datetimeaxis_set_max(void* self, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#max)
///
/// ``` QDateTimeAxis* self ```
QDateTime* q_datetimeaxis_max(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setRange)
///
/// ``` QDateTimeAxis* self, QDateTime* min, QDateTime* max ```
void q_datetimeaxis_set_range(void* self, void* min, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setFormat)
///
/// ``` QDateTimeAxis* self, const char* format ```
void q_datetimeaxis_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#format)
///
/// ``` QDateTimeAxis* self ```
const char* q_datetimeaxis_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setTickCount)
///
/// ``` QDateTimeAxis* self, int count ```
void q_datetimeaxis_set_tick_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCount)
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
///
/// ``` QDateTimeAxis* self, QDateTime* min ```
void q_datetimeaxis_min_changed(void* self, void* min);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QDateTime*) ```
void q_datetimeaxis_on_min_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
///
/// ``` QDateTimeAxis* self, QDateTime* max ```
void q_datetimeaxis_max_changed(void* self, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QDateTime*) ```
void q_datetimeaxis_on_max_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
///
/// ``` QDateTimeAxis* self, QDateTime* min, QDateTime* max ```
void q_datetimeaxis_range_changed(void* self, void* min, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QDateTime*, QDateTime*) ```
void q_datetimeaxis_on_range_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
///
/// ``` QDateTimeAxis* self, const char* format ```
void q_datetimeaxis_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, const char*) ```
void q_datetimeaxis_on_format_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
///
/// ``` QDateTimeAxis* self, int tick ```
void q_datetimeaxis_tick_count_changed(void* self, int tick);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, int) ```
void q_datetimeaxis_on_tick_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_datetimeaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_datetimeaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QDateTimeAxis* self ```
QBrush* q_datetimeaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QDateTimeAxis* self, QFont* font ```
void q_datetimeaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QDateTimeAxis* self ```
QFont* q_datetimeaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QDateTimeAxis* self, int angle ```
void q_datetimeaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QDateTimeAxis* self ```
QBrush* q_datetimeaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QDateTimeAxis* self, QFont* font ```
void q_datetimeaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QDateTimeAxis* self ```
QFont* q_datetimeaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QDateTimeAxis* self, const char* title ```
void q_datetimeaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QDateTimeAxis* self ```
const char* q_datetimeaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QDateTimeAxis* self ```
QBrush* q_datetimeaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QPen*) ```
void q_datetimeaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QBrush*) ```
void q_datetimeaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QDateTimeAxis* self, QFont* pen ```
void q_datetimeaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QFont*) ```
void q_datetimeaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QDateTimeAxis* self, int angle ```
void q_datetimeaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, int) ```
void q_datetimeaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QPen*) ```
void q_datetimeaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QPen*) ```
void q_datetimeaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QColor*) ```
void q_datetimeaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QColor*) ```
void q_datetimeaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QColor*) ```
void q_datetimeaxis_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QColor*) ```
void q_datetimeaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QDateTimeAxis* self, const char* title ```
void q_datetimeaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, const char*) ```
void q_datetimeaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QBrush*) ```
void q_datetimeaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QDateTimeAxis* self, QFont* font ```
void q_datetimeaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QFont*) ```
void q_datetimeaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QColor*) ```
void q_datetimeaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QColor*) ```
void q_datetimeaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QPen*) ```
void q_datetimeaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QBrush*) ```
void q_datetimeaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QDateTimeAxis* self, bool reverse ```
void q_datetimeaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QDateTimeAxis* self, bool editable ```
void q_datetimeaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QDateTimeAxis* self, bool labelsTruncated ```
void q_datetimeaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QDateTimeAxis* self, bool truncateLabels ```
void q_datetimeaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, bool) ```
void q_datetimeaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QDateTimeAxis* self, bool reverse ```
void q_datetimeaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QDateTimeAxis* self, bool editable ```
void q_datetimeaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QDateTimeAxis* self, bool truncateLabels ```
void q_datetimeaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDateTimeAxis* self ```
const char* q_datetimeaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDateTimeAxis* self, char* name ```
void q_datetimeaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDateTimeAxis* self, bool b ```
bool q_datetimeaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDateTimeAxis* self ```
QThread* q_datetimeaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDateTimeAxis* self, QThread* thread ```
bool q_datetimeaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateTimeAxis* self, int interval ```
int32_t q_datetimeaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDateTimeAxis* self, int id ```
void q_datetimeaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDateTimeAxis* self, enum Qt__TimerId id ```
void q_datetimeaxis_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDateTimeAxis* self ```
libqt_list /* of QObject* */ q_datetimeaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDateTimeAxis* self, QObject* parent ```
void q_datetimeaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDateTimeAxis* self, QObject* filterObj ```
void q_datetimeaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDateTimeAxis* self, QObject* obj ```
void q_datetimeaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_datetimeaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateTimeAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_datetimeaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_datetimeaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_datetimeaxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDateTimeAxis* self, const char* name, QVariant* value ```
bool q_datetimeaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDateTimeAxis* self, const char* name ```
QVariant* q_datetimeaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDateTimeAxis* self ```
const char** q_datetimeaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateTimeAxis* self ```
QBindingStorage* q_datetimeaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateTimeAxis* self ```
const QBindingStorage* q_datetimeaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*) ```
void q_datetimeaxis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDateTimeAxis* self ```
QObject* q_datetimeaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDateTimeAxis* self, const char* classname ```
bool q_datetimeaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDateTimeAxis* self, QThread* thread, Disambiguated_t* param2 ```
bool q_datetimeaxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateTimeAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_datetimeaxis_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datetimeaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateTimeAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datetimeaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeAxis* self, QObject* param1 ```
void q_datetimeaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QObject*) ```
void q_datetimeaxis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
bool q_datetimeaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
bool q_datetimeaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, bool (*slot)(QDateTimeAxis*, QEvent*) ```
void q_datetimeaxis_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QObject* watched, QEvent* event ```
bool q_datetimeaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QObject* watched, QEvent* event ```
bool q_datetimeaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, bool (*slot)(QDateTimeAxis*, QObject*, QEvent*) ```
void q_datetimeaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QTimerEvent* event ```
void q_datetimeaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QTimerEvent* event ```
void q_datetimeaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QTimerEvent*) ```
void q_datetimeaxis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QChildEvent* event ```
void q_datetimeaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QChildEvent* event ```
void q_datetimeaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QChildEvent*) ```
void q_datetimeaxis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
void q_datetimeaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
void q_datetimeaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QEvent*) ```
void q_datetimeaxis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QMetaMethod*) ```
void q_datetimeaxis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QMetaMethod*) ```
void q_datetimeaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self ```
QObject* q_datetimeaxis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self ```
QObject* q_datetimeaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QObject* (*slot)() ```
void q_datetimeaxis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, int32_t (*slot)() ```
void q_datetimeaxis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, const char* signal ```
int32_t q_datetimeaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, const char* signal ```
int32_t q_datetimeaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, int32_t (*slot)(QDateTimeAxis*, const char*) ```
void q_datetimeaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
bool q_datetimeaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
bool q_datetimeaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, bool (*slot)(QDateTimeAxis*, QMetaMethod*) ```
void q_datetimeaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, const char*) ```
void q_datetimeaxis_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#dtor.QDateTimeAxis)
///
/// Delete this object from C++ memory.
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_delete(void* self);

#endif
