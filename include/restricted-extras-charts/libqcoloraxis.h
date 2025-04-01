#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCOLORAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
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

/// https://doc.qt.io/qt-6/qcoloraxis.html

/// q_coloraxis_new constructs a new QColorAxis object.
///
///
QColorAxis* q_coloraxis_new();

/// q_coloraxis_new2 constructs a new QColorAxis object.
///
/// ``` QObject* parent ```
QColorAxis* q_coloraxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QColorAxis* self ```
QMetaObject* q_coloraxis_meta_object(void* self);

/// ``` QColorAxis* self, const char* param1 ```
void* q_coloraxis_metacast(void* self, const char* param1);

/// ``` QColorAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coloraxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QColorAxis* self, int32_t (*slot)(QColorAxis*, enum QMetaObject__Call, int, void*) ```
void q_coloraxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QColorAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coloraxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_coloraxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#type)
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QColorAxis* self, int64_t (*slot)() ```
void q_coloraxis_on_type(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setMin)
///
/// ``` QColorAxis* self, double min ```
void q_coloraxis_set_min(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#min)
///
/// ``` QColorAxis* self ```
double q_coloraxis_min(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setMax)
///
/// ``` QColorAxis* self, double max ```
void q_coloraxis_set_max(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#max)
///
/// ``` QColorAxis* self ```
double q_coloraxis_max(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setRange)
///
/// ``` QColorAxis* self, double min, double max ```
void q_coloraxis_set_range(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setTickCount)
///
/// ``` QColorAxis* self, int count ```
void q_coloraxis_set_tick_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#tickCount)
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_tick_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setSize)
///
/// ``` QColorAxis* self, double size ```
void q_coloraxis_set_size(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#size)
///
/// ``` QColorAxis* self ```
double q_coloraxis_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setGradient)
///
/// ``` QColorAxis* self, QLinearGradient* gradient ```
void q_coloraxis_set_gradient(void* self, void* gradient);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#gradient)
///
/// ``` QColorAxis* self ```
QLinearGradient* q_coloraxis_gradient(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setAutoRange)
///
/// ``` QColorAxis* self, bool autoRange ```
void q_coloraxis_set_auto_range(void* self, bool autoRange);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#autoRange)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_auto_range(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#minChanged)
///
/// ``` QColorAxis* self, double min ```
void q_coloraxis_min_changed(void* self, double min);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double) ```
void q_coloraxis_on_min_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#maxChanged)
///
/// ``` QColorAxis* self, double max ```
void q_coloraxis_max_changed(void* self, double max);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double) ```
void q_coloraxis_on_max_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#rangeChanged)
///
/// ``` QColorAxis* self, double min, double max ```
void q_coloraxis_range_changed(void* self, double min, double max);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double, double) ```
void q_coloraxis_on_range_changed(void* self, void (*slot)(void*, double, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#tickCountChanged)
///
/// ``` QColorAxis* self, int tickCount ```
void q_coloraxis_tick_count_changed(void* self, int tickCount);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, int) ```
void q_coloraxis_on_tick_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#gradientChanged)
///
/// ``` QColorAxis* self, QLinearGradient* gradient ```
void q_coloraxis_gradient_changed(void* self, void* gradient);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QLinearGradient*) ```
void q_coloraxis_on_gradient_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#sizeChanged)
///
/// ``` QColorAxis* self, double size ```
void q_coloraxis_size_changed(void* self, double size);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double) ```
void q_coloraxis_on_size_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#autoRangeChanged)
///
/// ``` QColorAxis* self, bool autoRange ```
void q_coloraxis_auto_range_changed(void* self, bool autoRange);

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, bool) ```
void q_coloraxis_on_auto_range_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_coloraxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_coloraxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QColorAxis* self ```
void q_coloraxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QColorAxis* self ```
void q_coloraxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QColorAxis* self ```
QBrush* q_coloraxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QColorAxis* self, QFont* font ```
void q_coloraxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QColorAxis* self ```
QFont* q_coloraxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QColorAxis* self, int angle ```
void q_coloraxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QColorAxis* self ```
QBrush* q_coloraxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QColorAxis* self, QFont* font ```
void q_coloraxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QColorAxis* self ```
QFont* q_coloraxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QColorAxis* self, const char* title ```
void q_coloraxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QColorAxis* self ```
const char* q_coloraxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QColorAxis* self ```
QBrush* q_coloraxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_coloraxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QColorAxis* self, QFont* pen ```
void q_coloraxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_coloraxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QColorAxis* self, int angle ```
void q_coloraxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_coloraxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QColorAxis* self, const char* title ```
void q_coloraxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_coloraxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_coloraxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QColorAxis* self, QFont* font ```
void q_coloraxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_coloraxis_on_title_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_coloraxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QColorAxis* self, bool reverse ```
void q_coloraxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_reverse_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QColorAxis* self, bool editable ```
void q_coloraxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QColorAxis* self, bool labelsTruncated ```
void q_coloraxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QColorAxis* self, bool truncateLabels ```
void q_coloraxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QColorAxis* self, bool reverse ```
void q_coloraxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QColorAxis* self, bool editable ```
void q_coloraxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QColorAxis* self, bool truncateLabels ```
void q_coloraxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QColorAxis* self ```
const char* q_coloraxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QColorAxis* self, const char* name ```
void q_coloraxis_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QColorAxis* self, bool b ```
bool q_coloraxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QColorAxis* self ```
QThread* q_coloraxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QColorAxis* self, QThread* thread ```
void q_coloraxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColorAxis* self, int interval ```
int32_t q_coloraxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QColorAxis* self, int id ```
void q_coloraxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QColorAxis* self ```
libqt_list /* of QObject* */ q_coloraxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QColorAxis* self, QObject* parent ```
void q_coloraxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QColorAxis* self, QObject* filterObj ```
void q_coloraxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QColorAxis* self, QObject* obj ```
void q_coloraxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_coloraxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColorAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_coloraxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_coloraxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_coloraxis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QColorAxis* self ```
void q_coloraxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QColorAxis* self ```
void q_coloraxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QColorAxis* self, const char* name, QVariant* value ```
bool q_coloraxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QColorAxis* self, const char* name ```
QVariant* q_coloraxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QColorAxis* self ```
const char** q_coloraxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QColorAxis* self ```
QBindingStorage* q_coloraxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QColorAxis* self ```
QBindingStorage* q_coloraxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColorAxis* self ```
void q_coloraxis_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QColorAxis* self, void (*slot)(QObject*) ```
void q_coloraxis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QColorAxis* self ```
QObject* q_coloraxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QColorAxis* self, const char* classname ```
bool q_coloraxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QColorAxis* self ```
void q_coloraxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColorAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_coloraxis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coloraxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColorAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coloraxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColorAxis* self, QObject* param1 ```
void q_coloraxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QColorAxis* self, void (*slot)(QObject*, QObject*) ```
void q_coloraxis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
bool q_coloraxis_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
bool q_coloraxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, bool (*slot)(QColorAxis*, QEvent*) ```
void q_coloraxis_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QObject* watched, QEvent* event ```
bool q_coloraxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QObject* watched, QEvent* event ```
bool q_coloraxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, bool (*slot)(QColorAxis*, QObject*, QEvent*) ```
void q_coloraxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QTimerEvent* event ```
void q_coloraxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QTimerEvent* event ```
void q_coloraxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QTimerEvent*) ```
void q_coloraxis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QChildEvent* event ```
void q_coloraxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QChildEvent* event ```
void q_coloraxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QChildEvent*) ```
void q_coloraxis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
void q_coloraxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
void q_coloraxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QEvent*) ```
void q_coloraxis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QMetaMethod*) ```
void q_coloraxis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QMetaMethod*) ```
void q_coloraxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self ```
QObject* q_coloraxis_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self ```
QObject* q_coloraxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, QObject* (*slot)() ```
void q_coloraxis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, int32_t (*slot)() ```
void q_coloraxis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, const char* signal ```
int32_t q_coloraxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, const char* signal ```
int32_t q_coloraxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, int32_t (*slot)(QColorAxis*, const char*) ```
void q_coloraxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
bool q_coloraxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
bool q_coloraxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, bool (*slot)(QColorAxis*, QMetaMethod*) ```
void q_coloraxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QColorAxis* self ```
void q_coloraxis_delete(void* self);

#endif
