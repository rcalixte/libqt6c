#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLOGVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLOGVALUEAXIS_H

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

/// https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html

/// q_logvalueaxis_new constructs a new QLogValueAxis object.
///
///
QLogValueAxis* q_logvalueaxis_new();

/// q_logvalueaxis_new2 constructs a new QLogValueAxis object.
///
/// ``` QObject* parent ```
QLogValueAxis* q_logvalueaxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLogValueAxis* self ```
const QMetaObject* q_logvalueaxis_meta_object(void* self);

/// ``` QLogValueAxis* self, const char* param1 ```
void* q_logvalueaxis_metacast(void* self, const char* param1);

/// ``` QLogValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_logvalueaxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLogValueAxis* self, int32_t (*slot)(QLogValueAxis*, enum QMetaObject__Call, int, void*) ```
void q_logvalueaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLogValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_logvalueaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_logvalueaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QLogValueAxis* self, int64_t (*slot)() ```
void q_logvalueaxis_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMin)
///
/// ``` QLogValueAxis* self, double min ```
void q_logvalueaxis_set_min(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#min)
///
/// ``` QLogValueAxis* self ```
double q_logvalueaxis_min(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMax)
///
/// ``` QLogValueAxis* self, double max ```
void q_logvalueaxis_set_max(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#max)
///
/// ``` QLogValueAxis* self ```
double q_logvalueaxis_max(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setRange)
///
/// ``` QLogValueAxis* self, double min, double max ```
void q_logvalueaxis_set_range(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setLabelFormat)
///
/// ``` QLogValueAxis* self, const char* format ```
void q_logvalueaxis_set_label_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormat)
///
/// ``` QLogValueAxis* self ```
const char* q_logvalueaxis_label_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setBase)
///
/// ``` QLogValueAxis* self, double base ```
void q_logvalueaxis_set_base(void* self, double base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#base)
///
/// ``` QLogValueAxis* self ```
double q_logvalueaxis_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCount)
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#setMinorTickCount)
///
/// ``` QLogValueAxis* self, int minorTickCount ```
void q_logvalueaxis_set_minor_tick_count(void* self, int minorTickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCount)
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_minor_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minChanged)
///
/// ``` QLogValueAxis* self, double min ```
void q_logvalueaxis_min_changed(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double) ```
void q_logvalueaxis_on_min_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#maxChanged)
///
/// ``` QLogValueAxis* self, double max ```
void q_logvalueaxis_max_changed(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#maxChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double) ```
void q_logvalueaxis_on_max_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#rangeChanged)
///
/// ``` QLogValueAxis* self, double min, double max ```
void q_logvalueaxis_range_changed(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#rangeChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double, double) ```
void q_logvalueaxis_on_range_changed(void* self, void (*slot)(void*, double, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormatChanged)
///
/// ``` QLogValueAxis* self, const char* format ```
void q_logvalueaxis_label_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#labelFormatChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, const char*) ```
void q_logvalueaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#baseChanged)
///
/// ``` QLogValueAxis* self, double base ```
void q_logvalueaxis_base_changed(void* self, double base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#baseChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double) ```
void q_logvalueaxis_on_base_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCountChanged)
///
/// ``` QLogValueAxis* self, int tickCount ```
void q_logvalueaxis_tick_count_changed(void* self, int tickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#tickCountChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, int) ```
void q_logvalueaxis_on_tick_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// ``` QLogValueAxis* self, int minorTickCount ```
void q_logvalueaxis_minor_tick_count_changed(void* self, int minorTickCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#minorTickCountChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, int) ```
void q_logvalueaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_logvalueaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_logvalueaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QLogValueAxis* self ```
QBrush* q_logvalueaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QLogValueAxis* self, QFont* font ```
void q_logvalueaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QLogValueAxis* self ```
QFont* q_logvalueaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QLogValueAxis* self, int angle ```
void q_logvalueaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QLogValueAxis* self ```
QBrush* q_logvalueaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QLogValueAxis* self, QFont* font ```
void q_logvalueaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QLogValueAxis* self ```
QFont* q_logvalueaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QLogValueAxis* self, const char* title ```
void q_logvalueaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QLogValueAxis* self ```
const char* q_logvalueaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QLogValueAxis* self ```
QBrush* q_logvalueaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_logvalueaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QLogValueAxis* self, QFont* pen ```
void q_logvalueaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_logvalueaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QLogValueAxis* self, int angle ```
void q_logvalueaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_logvalueaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QLogValueAxis* self, const char* title ```
void q_logvalueaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_logvalueaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_logvalueaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QLogValueAxis* self, QFont* font ```
void q_logvalueaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_logvalueaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_logvalueaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QLogValueAxis* self, bool reverse ```
void q_logvalueaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QLogValueAxis* self, bool editable ```
void q_logvalueaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QLogValueAxis* self, bool labelsTruncated ```
void q_logvalueaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QLogValueAxis* self, bool truncateLabels ```
void q_logvalueaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QLogValueAxis* self, bool reverse ```
void q_logvalueaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QLogValueAxis* self, bool editable ```
void q_logvalueaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QLogValueAxis* self, bool truncateLabels ```
void q_logvalueaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLogValueAxis* self ```
const char* q_logvalueaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLogValueAxis* self, char* name ```
void q_logvalueaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLogValueAxis* self, bool b ```
bool q_logvalueaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLogValueAxis* self ```
QThread* q_logvalueaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLogValueAxis* self, QThread* thread ```
void q_logvalueaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLogValueAxis* self, int interval ```
int32_t q_logvalueaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLogValueAxis* self, int id ```
void q_logvalueaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLogValueAxis* self ```
libqt_list /* of QObject* */ q_logvalueaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLogValueAxis* self, QObject* parent ```
void q_logvalueaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLogValueAxis* self, QObject* filterObj ```
void q_logvalueaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLogValueAxis* self, QObject* obj ```
void q_logvalueaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_logvalueaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLogValueAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_logvalueaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_logvalueaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_logvalueaxis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLogValueAxis* self, const char* name, QVariant* value ```
bool q_logvalueaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLogValueAxis* self, const char* name ```
QVariant* q_logvalueaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLogValueAxis* self ```
const char** q_logvalueaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLogValueAxis* self ```
QBindingStorage* q_logvalueaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLogValueAxis* self ```
const QBindingStorage* q_logvalueaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLogValueAxis* self, void (*slot)(QObject*) ```
void q_logvalueaxis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLogValueAxis* self ```
QObject* q_logvalueaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLogValueAxis* self, const char* classname ```
bool q_logvalueaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLogValueAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_logvalueaxis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_logvalueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLogValueAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_logvalueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLogValueAxis* self, QObject* param1 ```
void q_logvalueaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLogValueAxis* self, void (*slot)(QObject*, QObject*) ```
void q_logvalueaxis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
bool q_logvalueaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
bool q_logvalueaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, bool (*slot)(QLogValueAxis*, QEvent*) ```
void q_logvalueaxis_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QObject* watched, QEvent* event ```
bool q_logvalueaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QObject* watched, QEvent* event ```
bool q_logvalueaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, bool (*slot)(QLogValueAxis*, QObject*, QEvent*) ```
void q_logvalueaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QTimerEvent* event ```
void q_logvalueaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QTimerEvent* event ```
void q_logvalueaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QTimerEvent*) ```
void q_logvalueaxis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QChildEvent* event ```
void q_logvalueaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QChildEvent* event ```
void q_logvalueaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QChildEvent*) ```
void q_logvalueaxis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
void q_logvalueaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
void q_logvalueaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QEvent*) ```
void q_logvalueaxis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QMetaMethod*) ```
void q_logvalueaxis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QMetaMethod*) ```
void q_logvalueaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self ```
QObject* q_logvalueaxis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self ```
QObject* q_logvalueaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, QObject* (*slot)() ```
void q_logvalueaxis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, int32_t (*slot)() ```
void q_logvalueaxis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, const char* signal ```
int32_t q_logvalueaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, const char* signal ```
int32_t q_logvalueaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, int32_t (*slot)(QLogValueAxis*, const char*) ```
void q_logvalueaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
bool q_logvalueaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
bool q_logvalueaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, bool (*slot)(QLogValueAxis*, QMetaMethod*) ```
void q_logvalueaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLogValueAxis* self, void (*slot)(QObject*, const char*) ```
void q_logvalueaxis_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis-qtcharts.html#dtor.QLogValueAxis)
///
/// Delete this object from C++ memory.
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_delete(void* self);

#endif
