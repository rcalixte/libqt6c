#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQABSTRACTAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQABSTRACTAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractAxis*
///
const QMetaObject* q_abstractaxis_meta_object(void* self);

/// @param self QAbstractAxis*
/// @param param1 const char*
///
void* q_abstractaxis_metacast(void* self, const char* param1);

/// @param self QAbstractAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractaxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractaxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#type)
///
/// @param self QAbstractAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_abstractaxis_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#show)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_show(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#hide)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_hide(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isLineVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePen)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_set_line_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePen)
///
/// @param self QAbstractAxis*
///
QPen* q_abstractaxis_line_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLinePenColor)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_set_line_pen_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenColor)
///
/// @param self QAbstractAxis*
///
QColor* q_abstractaxis_line_pen_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isGridLineVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_grid_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_grid_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLinePen)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_set_grid_line_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePen)
///
/// @param self QAbstractAxis*
///
QPen* q_abstractaxis_grid_line_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isMinorGridLineVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_minor_grid_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_minor_grid_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLinePen)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_set_minor_grid_line_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePen)
///
/// @param self QAbstractAxis*
///
QPen* q_abstractaxis_minor_grid_line_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineColor)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_set_grid_line_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColor)
///
/// @param self QAbstractAxis*
///
QColor* q_abstractaxis_grid_line_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineColor)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_set_minor_grid_line_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColor)
///
/// @param self QAbstractAxis*
///
QColor* q_abstractaxis_minor_grid_line_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsBrush)
///
/// @param self QAbstractAxis*
/// @param brush QBrush*
///
void q_abstractaxis_set_labels_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrush)
///
/// @param self QAbstractAxis*
///
QBrush* q_abstractaxis_labels_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsFont)
///
/// @param self QAbstractAxis*
/// @param font QFont*
///
void q_abstractaxis_set_labels_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFont)
///
/// @param self QAbstractAxis*
///
QFont* q_abstractaxis_labels_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsAngle)
///
/// @param self QAbstractAxis*
/// @param angle int
///
void q_abstractaxis_set_labels_angle(void* self, int angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngle)
///
/// @param self QAbstractAxis*
///
int32_t q_abstractaxis_labels_angle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsColor)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_set_labels_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColor)
///
/// @param self QAbstractAxis*
///
QColor* q_abstractaxis_labels_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isTitleVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_title_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_title_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleBrush)
///
/// @param self QAbstractAxis*
/// @param brush QBrush*
///
void q_abstractaxis_set_title_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrush)
///
/// @param self QAbstractAxis*
///
QBrush* q_abstractaxis_title_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleFont)
///
/// @param self QAbstractAxis*
/// @param font QFont*
///
void q_abstractaxis_set_title_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFont)
///
/// @param self QAbstractAxis*
///
QFont* q_abstractaxis_title_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleText)
///
/// @param self QAbstractAxis*
/// @param title const char*
///
void q_abstractaxis_set_title_text(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractAxis*
///
const char* q_abstractaxis_title_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisible)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_shades_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_shades_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesPen)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_set_shades_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPen)
///
/// @param self QAbstractAxis*
///
QPen* q_abstractaxis_shades_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBrush)
///
/// @param self QAbstractAxis*
/// @param brush QBrush*
///
void q_abstractaxis_set_shades_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrush)
///
/// @param self QAbstractAxis*
///
QBrush* q_abstractaxis_shades_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesColor)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_set_shades_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColor)
///
/// @param self QAbstractAxis*
///
QColor* q_abstractaxis_shades_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesBorderColor)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_set_shades_border_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColor)
///
/// @param self QAbstractAxis*
///
QColor* q_abstractaxis_shades_border_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#orientation)
///
/// @param self QAbstractAxis*
///
/// @return enum Qt__Orientation
///
int32_t q_abstractaxis_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#alignment)
///
/// @param self QAbstractAxis*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_abstractaxis_alignment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMin)
///
/// @param self QAbstractAxis*
/// @param min QVariant*
///
void q_abstractaxis_set_min(void* self, void* min);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMax)
///
/// @param self QAbstractAxis*
/// @param max QVariant*
///
void q_abstractaxis_set_max(void* self, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setRange)
///
/// @param self QAbstractAxis*
/// @param min QVariant*
/// @param max QVariant*
///
void q_abstractaxis_set_range(void* self, void* min, void* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_reverse(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#isReverse)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_reverse(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_labels_editable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditable)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_labels_editable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncated)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_labels_truncated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_set_truncate_labels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabels)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_truncate_labels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#visibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_line_pen_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#linePenChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QPen* pen)
///
void q_abstractaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_line_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#lineVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_labels_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
///
/// @param self QAbstractAxis*
/// @param brush QBrush*
///
void q_abstractaxis_labels_brush_changed(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsBrushChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QBrush* brush)
///
void q_abstractaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
///
/// @param self QAbstractAxis*
/// @param pen QFont*
///
void q_abstractaxis_labels_font_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsFontChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QFont* pen)
///
void q_abstractaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
///
/// @param self QAbstractAxis*
/// @param angle int
///
void q_abstractaxis_labels_angle_changed(void* self, int angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsAngleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, int angle)
///
void q_abstractaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_grid_line_pen_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLinePenChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QPen* pen)
///
void q_abstractaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_grid_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_minor_grid_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLinePenChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QPen* pen)
///
void q_abstractaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_grid_line_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#gridLineColorChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QColor* color)
///
void q_abstractaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_minor_grid_line_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#minorGridLineColorChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QColor* color)
///
void q_abstractaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#colorChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QColor* color)
///
void q_abstractaxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_labels_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsColorChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QColor* color)
///
void q_abstractaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
///
/// @param self QAbstractAxis*
/// @param title const char*
///
void q_abstractaxis_title_text_changed(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleTextChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, const char* title)
///
void q_abstractaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
///
/// @param self QAbstractAxis*
/// @param brush QBrush*
///
void q_abstractaxis_title_brush_changed(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleBrushChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QBrush* brush)
///
void q_abstractaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_title_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
///
/// @param self QAbstractAxis*
/// @param font QFont*
///
void q_abstractaxis_title_font_changed(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#titleFontChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QFont* font)
///
void q_abstractaxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_shades_visible_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesVisibleChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool visible)
///
void q_abstractaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_shades_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesColorChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QColor* color)
///
void q_abstractaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
///
/// @param self QAbstractAxis*
/// @param color QColor*
///
void q_abstractaxis_shades_border_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBorderColorChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QColor* color)
///
void q_abstractaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
///
/// @param self QAbstractAxis*
/// @param pen QPen*
///
void q_abstractaxis_shades_pen_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesPenChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QPen* pen)
///
void q_abstractaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
///
/// @param self QAbstractAxis*
/// @param brush QBrush*
///
void q_abstractaxis_shades_brush_changed(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#shadesBrushChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QBrush* brush)
///
void q_abstractaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
///
/// @param self QAbstractAxis*
/// @param reverse bool
///
void q_abstractaxis_reverse_changed(void* self, bool reverse);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#reverseChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool reverse)
///
void q_abstractaxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
///
/// @param self QAbstractAxis*
/// @param editable bool
///
void q_abstractaxis_labels_editable_changed(void* self, bool editable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsEditableChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool editable)
///
void q_abstractaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
///
/// @param self QAbstractAxis*
/// @param labelsTruncated bool
///
void q_abstractaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#labelsTruncatedChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool labelsTruncated)
///
void q_abstractaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
///
/// @param self QAbstractAxis*
/// @param truncateLabels bool
///
void q_abstractaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#truncateLabelsChanged)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, bool truncateLabels)
///
void q_abstractaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractaxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractaxis_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLineVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_line_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setGridLineVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_grid_line_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setMinorGridLineVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_labels_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTitleVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_title_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setShadesVisible)
///
/// @param self QAbstractAxis*
/// @param visible bool
///
void q_abstractaxis_set_shades_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setReverse)
///
/// @param self QAbstractAxis*
/// @param reverse bool
///
void q_abstractaxis_set_reverse1(void* self, bool reverse);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setLabelsEditable)
///
/// @param self QAbstractAxis*
/// @param editable bool
///
void q_abstractaxis_set_labels_editable1(void* self, bool editable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#setTruncateLabels)
///
/// @param self QAbstractAxis*
/// @param truncateLabels bool
///
void q_abstractaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstractAxis*
/// @param event QEvent*
///
bool q_abstractaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstractAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractAxis*
///
const char* q_abstractaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractAxis*
/// @param name char*
///
void q_abstractaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractAxis*
/// @param b bool
///
bool q_abstractaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractAxis*
///
QThread* q_abstractaxis_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractAxis*
/// @param thread QThread*
///
bool q_abstractaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAxis*
/// @param interval int
///
int32_t q_abstractaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAxis*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractaxis_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractAxis*
/// @param id int
///
void q_abstractaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractAxis*
/// @param id enum Qt__TimerId
///
void q_abstractaxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractAxis*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractaxis_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractAxis*
/// @param parent QObject*
///
void q_abstractaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractAxis*
/// @param filterObj QObject*
///
void q_abstractaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractAxis*
/// @param obj QObject*
///
void q_abstractaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractaxis_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractaxis_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractaxis_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractaxis_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractaxis_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAxis*
///
bool q_abstractaxis_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAxis*
/// @param receiver QObject*
///
bool q_abstractaxis_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractaxis_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractAxis*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractAxis*
/// @param name const char*
///
QVariant* q_abstractaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractAxis*
///
const char** q_abstractaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractAxis*
///
QBindingStorage* q_abstractaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractAxis*
///
const QBindingStorage* q_abstractaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self)
///
void q_abstractaxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractAxis*
///
QObject* q_abstractaxis_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractAxis*
/// @param classname const char*
///
bool q_abstractaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractaxis_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAxis*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractaxis_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractaxis_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractaxis_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractaxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAxis*
/// @param signal const char*
///
bool q_abstractaxis_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAxis*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractaxis_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAxis*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractaxis_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAxis*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractaxis_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAxis*
/// @param param1 QObject*
///
void q_abstractaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, QObject* param1)
///
void q_abstractaxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractAxis*
/// @param callback void func(QAbstractAxis* self, const char* objectName)
///
void q_abstractaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#dtor.QAbstractAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractAxis*
///
void q_abstractaxis_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis-qtcharts.html#public-types)

typedef enum {
    QABSTRACTAXIS_AXISTYPE_AXISTYPENOAXIS = 0,
    QABSTRACTAXIS_AXISTYPE_AXISTYPEVALUE = 1,
    QABSTRACTAXIS_AXISTYPE_AXISTYPEBARCATEGORY = 2,
    QABSTRACTAXIS_AXISTYPE_AXISTYPECATEGORY = 4,
    QABSTRACTAXIS_AXISTYPE_AXISTYPEDATETIME = 8,
    QABSTRACTAXIS_AXISTYPE_AXISTYPELOGVALUE = 16,
    QABSTRACTAXIS_AXISTYPE_AXISTYPECOLOR = 32
} QAbstractAxis__AxisType;

#endif
