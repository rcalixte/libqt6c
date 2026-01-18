#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQDATETIMEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQDATETIMEAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html)

/// q_datetimeaxis_new constructs a new QDateTimeAxis object.
///
QDateTimeAxis* q_datetimeaxis_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html)

/// q_datetimeaxis_new2 constructs a new QDateTimeAxis object.
///
/// @param parent QObject*
///
QDateTimeAxis* q_datetimeaxis_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDateTimeAxis*
///
const QMetaObject* q_datetimeaxis_meta_object(void* self);

/// @param self QDateTimeAxis*
/// @param param1 const char*
///
void* q_datetimeaxis_metacast(void* self, const char* param1);

/// @param self QDateTimeAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_datetimeaxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDateTimeAxis*
/// @param callback int32_t func(QDateTimeAxis* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_datetimeaxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDateTimeAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_datetimeaxis_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_datetimeaxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
///
/// @param self QDateTimeAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_datetimeaxis_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QDateTimeAxis*
/// @param callback int32_t func()
///
void q_datetimeaxis_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QDateTimeAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_datetimeaxis_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMin)
///
/// @param self QDateTimeAxis*
/// @param min QDateTime*
///
void q_datetimeaxis_set_min(void* self, void* min);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#min)
///
/// @param self QDateTimeAxis*
///
QDateTime* q_datetimeaxis_min(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMax)
///
/// @param self QDateTimeAxis*
/// @param max QDateTime*
///
void q_datetimeaxis_set_max(void* self, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#max)
///
/// @param self QDateTimeAxis*
///
QDateTime* q_datetimeaxis_max(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setRange)
///
/// @param self QDateTimeAxis*
/// @param min QDateTime*
/// @param max QDateTime*
///
void q_datetimeaxis_set_range(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setFormat)
///
/// @param self QDateTimeAxis*
/// @param format const char*
///
void q_datetimeaxis_set_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#format)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeAxis*
///
const char* q_datetimeaxis_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setTickCount)
///
/// @param self QDateTimeAxis*
/// @param count int
///
void q_datetimeaxis_set_tick_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCount)
///
/// @param self QDateTimeAxis*
///
int32_t q_datetimeaxis_tick_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
///
/// @param self QDateTimeAxis*
/// @param min QDateTime*
///
void q_datetimeaxis_min_changed(void* self, void* min);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QDateTime* min)
///
void q_datetimeaxis_on_min_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
///
/// @param self QDateTimeAxis*
/// @param max QDateTime*
///
void q_datetimeaxis_max_changed(void* self, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QDateTime* max)
///
void q_datetimeaxis_on_max_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
///
/// @param self QDateTimeAxis*
/// @param min QDateTime*
/// @param max QDateTime*
///
void q_datetimeaxis_range_changed(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QDateTime* min, QDateTime* max)
///
void q_datetimeaxis_on_range_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
///
/// @param self QDateTimeAxis*
/// @param format const char*
///
void q_datetimeaxis_format_changed(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, const char* format)
///
void q_datetimeaxis_on_format_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
///
/// @param self QDateTimeAxis*
/// @param tick int
///
void q_datetimeaxis_tick_count_changed(void* self, int tick);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, int tick)
///
void q_datetimeaxis_on_tick_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_datetimeaxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_datetimeaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// @param self QDateTimeAxis*
///
QPen* q_datetimeaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// @param self QDateTimeAxis*
///
QColor* q_datetimeaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// @param self QDateTimeAxis*
///
QPen* q_datetimeaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// @param self QDateTimeAxis*
///
QPen* q_datetimeaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// @param self QDateTimeAxis*
///
QColor* q_datetimeaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// @param self QDateTimeAxis*
///
QColor* q_datetimeaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// @param self QDateTimeAxis*
/// @param brush QBrush*
///
void q_datetimeaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// @param self QDateTimeAxis*
///
QBrush* q_datetimeaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// @param self QDateTimeAxis*
/// @param font QFont*
///
void q_datetimeaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// @param self QDateTimeAxis*
///
QFont* q_datetimeaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// @param self QDateTimeAxis*
/// @param angle int
///
void q_datetimeaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// @param self QDateTimeAxis*
///
int32_t q_datetimeaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// @param self QDateTimeAxis*
///
QColor* q_datetimeaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// @param self QDateTimeAxis*
/// @param brush QBrush*
///
void q_datetimeaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// @param self QDateTimeAxis*
///
QBrush* q_datetimeaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// @param self QDateTimeAxis*
/// @param font QFont*
///
void q_datetimeaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// @param self QDateTimeAxis*
///
QFont* q_datetimeaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// @param self QDateTimeAxis*
/// @param title const char*
///
void q_datetimeaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeAxis*
///
const char* q_datetimeaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// @param self QDateTimeAxis*
///
QPen* q_datetimeaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// @param self QDateTimeAxis*
/// @param brush QBrush*
///
void q_datetimeaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// @param self QDateTimeAxis*
///
QBrush* q_datetimeaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// @param self QDateTimeAxis*
///
QColor* q_datetimeaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// @param self QDateTimeAxis*
///
QColor* q_datetimeaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// @param self QDateTimeAxis*
///
/// @return enum Qt__Orientation
///
int32_t q_datetimeaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// @param self QDateTimeAxis*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_datetimeaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QPen* pen)
///
void q_datetimeaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QDateTimeAxis*
/// @param brush QBrush*
///
void q_datetimeaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QBrush* brush)
///
void q_datetimeaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QDateTimeAxis*
/// @param pen QFont*
///
void q_datetimeaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QFont* pen)
///
void q_datetimeaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QDateTimeAxis*
/// @param angle int
///
void q_datetimeaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, int angle)
///
void q_datetimeaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QPen* pen)
///
void q_datetimeaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QPen* pen)
///
void q_datetimeaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QColor* color)
///
void q_datetimeaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QColor* color)
///
void q_datetimeaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QColor* color)
///
void q_datetimeaxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QColor* color)
///
void q_datetimeaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QDateTimeAxis*
/// @param title const char*
///
void q_datetimeaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, const char* title)
///
void q_datetimeaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QDateTimeAxis*
/// @param brush QBrush*
///
void q_datetimeaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QBrush* brush)
///
void q_datetimeaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QDateTimeAxis*
/// @param font QFont*
///
void q_datetimeaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QFont* font)
///
void q_datetimeaxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool visible)
///
void q_datetimeaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QColor* color)
///
void q_datetimeaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QDateTimeAxis*
/// @param color QColor*
///
void q_datetimeaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QColor* color)
///
void q_datetimeaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QDateTimeAxis*
/// @param pen QPen*
///
void q_datetimeaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QPen* pen)
///
void q_datetimeaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QDateTimeAxis*
/// @param brush QBrush*
///
void q_datetimeaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QBrush* brush)
///
void q_datetimeaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QDateTimeAxis*
/// @param reverse bool
///
void q_datetimeaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool reverse)
///
void q_datetimeaxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QDateTimeAxis*
/// @param editable bool
///
void q_datetimeaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool editable)
///
void q_datetimeaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QDateTimeAxis*
/// @param labelsTruncated bool
///
void q_datetimeaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool labelsTruncated)
///
void q_datetimeaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QDateTimeAxis*
/// @param truncateLabels bool
///
void q_datetimeaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, bool truncateLabels)
///
void q_datetimeaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QDateTimeAxis*
/// @param visible bool
///
void q_datetimeaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QDateTimeAxis*
/// @param reverse bool
///
void q_datetimeaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QDateTimeAxis*
/// @param editable bool
///
void q_datetimeaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QDateTimeAxis*
/// @param truncateLabels bool
///
void q_datetimeaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDateTimeAxis*
///
const char* q_datetimeaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDateTimeAxis*
/// @param name char*
///
void q_datetimeaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDateTimeAxis*
///
bool q_datetimeaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDateTimeAxis*
/// @param b bool
///
bool q_datetimeaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDateTimeAxis*
///
QThread* q_datetimeaxis_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDateTimeAxis*
/// @param thread QThread*
///
bool q_datetimeaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateTimeAxis*
/// @param interval int
///
int32_t q_datetimeaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDateTimeAxis*
/// @param id int
///
void q_datetimeaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDateTimeAxis*
/// @param id enum Qt__TimerId
///
void q_datetimeaxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDateTimeAxis*
///
/// @return libqt_list of QObject*
///
libqt_list q_datetimeaxis_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDateTimeAxis*
/// @param parent QObject*
///
void q_datetimeaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDateTimeAxis*
/// @param filterObj QObject*
///
void q_datetimeaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDateTimeAxis*
/// @param obj QObject*
///
void q_datetimeaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_datetimeaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDateTimeAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_datetimeaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_datetimeaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_datetimeaxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDateTimeAxis*
/// @param name const char*
/// @param value QVariant*
///
bool q_datetimeaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDateTimeAxis*
/// @param name const char*
///
QVariant* q_datetimeaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDateTimeAxis*
///
const char** q_datetimeaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDateTimeAxis*
///
QBindingStorage* q_datetimeaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDateTimeAxis*
///
const QBindingStorage* q_datetimeaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self)
///
void q_datetimeaxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDateTimeAxis*
///
QObject* q_datetimeaxis_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDateTimeAxis*
/// @param classname const char*
///
bool q_datetimeaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDateTimeAxis*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_datetimeaxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDateTimeAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_datetimeaxis_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_datetimeaxis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDateTimeAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_datetimeaxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeAxis*
/// @param param1 QObject*
///
void q_datetimeaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QObject* param1)
///
void q_datetimeaxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QEvent*
///
bool q_datetimeaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QEvent*
///
bool q_datetimeaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback bool func(QDateTimeAxis* self, QEvent* event)
///
void q_datetimeaxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_datetimeaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_datetimeaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback bool func(QDateTimeAxis* self, QObject* watched, QEvent* event)
///
void q_datetimeaxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QTimerEvent*
///
void q_datetimeaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QTimerEvent*
///
void q_datetimeaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QTimerEvent* event)
///
void q_datetimeaxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QChildEvent*
///
void q_datetimeaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QChildEvent*
///
void q_datetimeaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QChildEvent* event)
///
void q_datetimeaxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QEvent*
///
void q_datetimeaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param event QEvent*
///
void q_datetimeaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QEvent* event)
///
void q_datetimeaxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal QMetaMethod*
///
void q_datetimeaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal QMetaMethod*
///
void q_datetimeaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QMetaMethod* signal)
///
void q_datetimeaxis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal QMetaMethod*
///
void q_datetimeaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal QMetaMethod*
///
void q_datetimeaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, QMetaMethod* signal)
///
void q_datetimeaxis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
///
QObject* q_datetimeaxis_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
///
QObject* q_datetimeaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback QObject* func()
///
void q_datetimeaxis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
///
int32_t q_datetimeaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
///
int32_t q_datetimeaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback int32_t func()
///
void q_datetimeaxis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal const char*
///
int32_t q_datetimeaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal const char*
///
int32_t q_datetimeaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback int32_t func(QDateTimeAxis* self, const char* signal)
///
void q_datetimeaxis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal QMetaMethod*
///
bool q_datetimeaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param signal QMetaMethod*
///
bool q_datetimeaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDateTimeAxis*
/// @param callback bool func(QDateTimeAxis* self, QMetaMethod* signal)
///
void q_datetimeaxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDateTimeAxis*
/// @param callback void func(QDateTimeAxis* self, const char* objectName)
///
void q_datetimeaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#dtor.QDateTimeAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QDateTimeAxis*
///
void q_datetimeaxis_delete(void* self);

#endif
