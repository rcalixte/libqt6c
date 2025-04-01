#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qabstractaxis.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractAxis* self ```
QMetaObject* q_abstractaxis_meta_object(void* self);

/// ``` QAbstractAxis* self, const char* param1 ```
void* q_abstractaxis_metacast(void* self, const char* param1);

/// ``` QAbstractAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractaxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#type)
///
/// ``` QAbstractAxis* self ```
int64_t q_abstractaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_set_line_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QAbstractAxis* self ```
QPen* q_abstractaxis_line_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_set_line_pen_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QAbstractAxis* self ```
QColor* q_abstractaxis_line_pen_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_grid_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_grid_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_set_grid_line_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QAbstractAxis* self ```
QPen* q_abstractaxis_grid_line_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_minor_grid_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_minor_grid_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_set_minor_grid_line_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QAbstractAxis* self ```
QPen* q_abstractaxis_minor_grid_line_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_set_grid_line_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QAbstractAxis* self ```
QColor* q_abstractaxis_grid_line_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_set_minor_grid_line_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QAbstractAxis* self ```
QColor* q_abstractaxis_minor_grid_line_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QAbstractAxis* self, QBrush* brush ```
void q_abstractaxis_set_labels_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QAbstractAxis* self ```
QBrush* q_abstractaxis_labels_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QAbstractAxis* self, QFont* font ```
void q_abstractaxis_set_labels_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QAbstractAxis* self ```
QFont* q_abstractaxis_labels_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QAbstractAxis* self, int angle ```
void q_abstractaxis_set_labels_angle(void* self, int angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QAbstractAxis* self ```
int32_t q_abstractaxis_labels_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_set_labels_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QAbstractAxis* self ```
QColor* q_abstractaxis_labels_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_title_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_title_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QAbstractAxis* self, QBrush* brush ```
void q_abstractaxis_set_title_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QAbstractAxis* self ```
QBrush* q_abstractaxis_title_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QAbstractAxis* self, QFont* font ```
void q_abstractaxis_set_title_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QAbstractAxis* self ```
QFont* q_abstractaxis_title_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QAbstractAxis* self, const char* title ```
void q_abstractaxis_set_title_text(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QAbstractAxis* self ```
const char* q_abstractaxis_title_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_shades_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_shades_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_set_shades_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QAbstractAxis* self ```
QPen* q_abstractaxis_shades_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QAbstractAxis* self, QBrush* brush ```
void q_abstractaxis_set_shades_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QAbstractAxis* self ```
QBrush* q_abstractaxis_shades_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_set_shades_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QAbstractAxis* self ```
QColor* q_abstractaxis_shades_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_set_shades_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QAbstractAxis* self ```
QColor* q_abstractaxis_shades_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QAbstractAxis* self ```
int64_t q_abstractaxis_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QAbstractAxis* self ```
int64_t q_abstractaxis_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMin)
///
/// ``` QAbstractAxis* self, QVariant* min ```
void q_abstractaxis_set_min(void* self, void* min);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMax)
///
/// ``` QAbstractAxis* self, QVariant* max ```
void q_abstractaxis_set_max(void* self, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setRange)
///
/// ``` QAbstractAxis* self, QVariant* min, QVariant* max ```
void q_abstractaxis_set_range(void* self, void* min, void* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_reverse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_reverse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_labels_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_labels_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_labels_truncated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_set_truncate_labels(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_truncate_labels(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_line_pen_changed(void* self, void* pen);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_abstractaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_line_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_labels_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QAbstractAxis* self, QBrush* brush ```
void q_abstractaxis_labels_brush_changed(void* self, void* brush);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_abstractaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QAbstractAxis* self, QFont* pen ```
void q_abstractaxis_labels_font_changed(void* self, void* pen);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_abstractaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QAbstractAxis* self, int angle ```
void q_abstractaxis_labels_angle_changed(void* self, int angle);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_abstractaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_grid_line_pen_changed(void* self, void* pen);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_abstractaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_grid_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_minor_grid_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_abstractaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_grid_line_color_changed(void* self, void* color);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_abstractaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_minor_grid_line_color_changed(void* self, void* color);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_abstractaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_color_changed(void* self, void* color);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_abstractaxis_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_labels_color_changed(void* self, void* color);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_abstractaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QAbstractAxis* self, const char* title ```
void q_abstractaxis_title_text_changed(void* self, const char* title);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_abstractaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QAbstractAxis* self, QBrush* brush ```
void q_abstractaxis_title_brush_changed(void* self, void* brush);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_abstractaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_title_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QAbstractAxis* self, QFont* font ```
void q_abstractaxis_title_font_changed(void* self, void* font);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_abstractaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_shades_visible_changed(void* self, bool visible);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_shades_color_changed(void* self, void* color);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_abstractaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QAbstractAxis* self, QColor* color ```
void q_abstractaxis_shades_border_color_changed(void* self, void* color);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_abstractaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QAbstractAxis* self, QPen* pen ```
void q_abstractaxis_shades_pen_changed(void* self, void* pen);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_abstractaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QAbstractAxis* self, QBrush* brush ```
void q_abstractaxis_shades_brush_changed(void* self, void* brush);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_abstractaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QAbstractAxis* self, bool reverse ```
void q_abstractaxis_reverse_changed(void* self, bool reverse);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QAbstractAxis* self, bool editable ```
void q_abstractaxis_labels_editable_changed(void* self, bool editable);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QAbstractAxis* self, bool labelsTruncated ```
void q_abstractaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QAbstractAxis* self, bool truncateLabels ```
void q_abstractaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// ``` QAbstractAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_abstractaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractaxis_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_line_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_grid_line_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_labels_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_title_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QAbstractAxis* self, bool visible ```
void q_abstractaxis_set_shades_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QAbstractAxis* self, bool reverse ```
void q_abstractaxis_set_reverse1(void* self, bool reverse);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QAbstractAxis* self, bool editable ```
void q_abstractaxis_set_labels_editable1(void* self, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QAbstractAxis* self, bool truncateLabels ```
void q_abstractaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractAxis* self, QEvent* event ```
bool q_abstractaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractAxis* self, QObject* watched, QEvent* event ```
bool q_abstractaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractAxis* self ```
const char* q_abstractaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractAxis* self, const char* name ```
void q_abstractaxis_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractAxis* self ```
bool q_abstractaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractAxis* self, bool b ```
bool q_abstractaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractAxis* self ```
QThread* q_abstractaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractAxis* self, QThread* thread ```
void q_abstractaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractAxis* self, int interval ```
int32_t q_abstractaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractAxis* self, int id ```
void q_abstractaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractAxis* self ```
libqt_list /* of QObject* */ q_abstractaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractAxis* self, QObject* parent ```
void q_abstractaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractAxis* self, QObject* filterObj ```
void q_abstractaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractAxis* self, QObject* obj ```
void q_abstractaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractaxis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractAxis* self, const char* name, QVariant* value ```
bool q_abstractaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractAxis* self, const char* name ```
QVariant* q_abstractaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractAxis* self ```
const char** q_abstractaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractAxis* self ```
QBindingStorage* q_abstractaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractAxis* self ```
QBindingStorage* q_abstractaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QAbstractAxis* self, void (*slot)(QObject*) ```
void q_abstractaxis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractAxis* self ```
QObject* q_abstractaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractAxis* self, const char* classname ```
bool q_abstractaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractaxis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractAxis* self, QObject* param1 ```
void q_abstractaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QAbstractAxis* self, void (*slot)(QObject*, QObject*) ```
void q_abstractaxis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QAbstractAxis* self ```
void q_abstractaxis_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractaxis.html#types

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
