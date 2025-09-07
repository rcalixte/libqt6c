#pragma once
#ifndef SRC_EXTRAS_KPLOTTINGQT6C_LIBKPLOTOBJECT_H
#define SRC_EXTRAS_KPLOTTINGQT6C_LIBKPLOTOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kplotobject.html

/// k_plotobject_new constructs a new KPlotObject object.
///
KPlotObject* k_plotobject_new();

/// k_plotobject_new2 constructs a new KPlotObject object.
///
/// @param color QColor*
KPlotObject* k_plotobject_new2(void* color);

/// k_plotobject_new3 constructs a new KPlotObject object.
///
/// @param color QColor*
/// @param otype enum KPlotObject__PlotType
KPlotObject* k_plotobject_new3(void* color, int32_t otype);

/// k_plotobject_new4 constructs a new KPlotObject object.
///
/// @param color QColor*
/// @param otype enum KPlotObject__PlotType
/// @param size double
KPlotObject* k_plotobject_new4(void* color, int32_t otype, double size);

/// k_plotobject_new5 constructs a new KPlotObject object.
///
/// @param color QColor*
/// @param otype enum KPlotObject__PlotType
/// @param size double
/// @param ps enum KPlotObject__PointStyle
KPlotObject* k_plotobject_new5(void* color, int32_t otype, double size, int32_t ps);

/// [Qt documentation](https://api.kde.org/kplotobject.html#plotTypes)
///
/// @param self KPlotObject*
///
/// @return flag of enum KPlotObject__PlotType
int32_t k_plotobject_plot_types(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setShowPoints)
///
/// @param self KPlotObject*
/// @param b bool
void k_plotobject_set_show_points(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setShowLines)
///
/// @param self KPlotObject*
/// @param b bool
void k_plotobject_set_show_lines(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setShowBars)
///
/// @param self KPlotObject*
/// @param b bool
void k_plotobject_set_show_bars(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kplotobject.html#size)
///
/// @param self KPlotObject*
double k_plotobject_size(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setSize)
///
/// @param self KPlotObject*
/// @param s double
void k_plotobject_set_size(void* self, double s);

/// [Qt documentation](https://api.kde.org/kplotobject.html#pointStyle)
///
/// @param self KPlotObject*
///
/// @return enum KPlotObject__PointStyle
int32_t k_plotobject_point_style(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setPointStyle)
///
/// @param self KPlotObject*
/// @param p enum KPlotObject__PointStyle
void k_plotobject_set_point_style(void* self, int32_t p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#pen)
///
/// @param self KPlotObject*
const QPen* k_plotobject_pen(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setPen)
///
/// @param self KPlotObject*
/// @param p QPen*
void k_plotobject_set_pen(void* self, void* p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#linePen)
///
/// @param self KPlotObject*
const QPen* k_plotobject_line_pen(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setLinePen)
///
/// @param self KPlotObject*
/// @param p QPen*
void k_plotobject_set_line_pen(void* self, void* p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#barPen)
///
/// @param self KPlotObject*
const QPen* k_plotobject_bar_pen(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setBarPen)
///
/// @param self KPlotObject*
/// @param p QPen*
void k_plotobject_set_bar_pen(void* self, void* p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#labelPen)
///
/// @param self KPlotObject*
const QPen* k_plotobject_label_pen(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setLabelPen)
///
/// @param self KPlotObject*
/// @param p QPen*
void k_plotobject_set_label_pen(void* self, void* p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#brush)
///
/// @param self KPlotObject*
const QBrush* k_plotobject_brush(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setBrush)
///
/// @param self KPlotObject*
/// @param b QBrush*
void k_plotobject_set_brush(void* self, void* b);

/// [Qt documentation](https://api.kde.org/kplotobject.html#barBrush)
///
/// @param self KPlotObject*
const QBrush* k_plotobject_bar_brush(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#setBarBrush)
///
/// @param self KPlotObject*
/// @param b QBrush*
void k_plotobject_set_bar_brush(void* self, void* b);

/// [Qt documentation](https://api.kde.org/kplotobject.html#points)
///
/// @param self KPlotObject*
libqt_list /* of KPlotPoint* */ k_plotobject_points(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param p QPointF*
void k_plotobject_add_point(void* self, void* p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param p KPlotPoint*
void k_plotobject_add_point2(void* self, void* p);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param x double
/// @param y double
void k_plotobject_add_point3(void* self, double x, double y);

/// [Qt documentation](https://api.kde.org/kplotobject.html#removePoint)
///
/// @param self KPlotObject*
/// @param index int
void k_plotobject_remove_point(void* self, int index);

/// [Qt documentation](https://api.kde.org/kplotobject.html#clearPoints)
///
/// @param self KPlotObject*
void k_plotobject_clear_points(void* self);

/// [Qt documentation](https://api.kde.org/kplotobject.html#draw)
///
/// @param self KPlotObject*
/// @param p QPainter*
/// @param pw KPlotWidget*
void k_plotobject_draw(void* self, void* p, void* pw);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param p QPointF*
/// @param label const char*
void k_plotobject_add_point22(void* self, void* p, const char* label);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param p QPointF*
/// @param label const char*
/// @param barWidth double
void k_plotobject_add_point32(void* self, void* p, const char* label, double barWidth);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param x double
/// @param y double
/// @param label const char*
void k_plotobject_add_point33(void* self, double x, double y, const char* label);

/// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
///
/// @param self KPlotObject*
/// @param x double
/// @param y double
/// @param label const char*
/// @param barWidth double
void k_plotobject_add_point4(void* self, double x, double y, const char* label, double barWidth);

/// [Qt documentation](https://api.kde.org/kplotobject.html#dtor.KPlotObject)
///
/// Delete this object from C++ memory.
///
/// @param self KPlotObject*
void k_plotobject_delete(void* self);

/// https://api.kde.org/kplotobject.html#types

typedef enum {
    KPLOTOBJECT_PLOTTYPE_UNKNOWNTYPE = 0,
    KPLOTOBJECT_PLOTTYPE_POINTS = 1,
    KPLOTOBJECT_PLOTTYPE_LINES = 2,
    KPLOTOBJECT_PLOTTYPE_BARS = 4
} KPlotObject__PlotType;

typedef enum {
    KPLOTOBJECT_POINTSTYLE_NOPOINTS = 0,
    KPLOTOBJECT_POINTSTYLE_CIRCLE = 1,
    KPLOTOBJECT_POINTSTYLE_LETTER = 2,
    KPLOTOBJECT_POINTSTYLE_TRIANGLE = 3,
    KPLOTOBJECT_POINTSTYLE_SQUARE = 4,
    KPLOTOBJECT_POINTSTYLE_PENTAGON = 5,
    KPLOTOBJECT_POINTSTYLE_HEXAGON = 6,
    KPLOTOBJECT_POINTSTYLE_ASTERISK = 7,
    KPLOTOBJECT_POINTSTYLE_STAR = 8,
    KPLOTOBJECT_POINTSTYLE_UNKNOWNPOINT = 9
} KPlotObject__PointStyle;

#endif
