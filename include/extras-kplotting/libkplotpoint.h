#pragma once
#ifndef SRC_EXTRAS_KPLOTTING_QT6C_LIBKPLOTPOINT_H
#define SRC_EXTRAS_KPLOTTING_QT6C_LIBKPLOTPOINT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new constructs a new KPlotPoint object.
///
KPlotPoint* k_plotpoint_new();

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new2 constructs a new KPlotPoint object.
///
/// @param x double
/// @param y double
///
KPlotPoint* k_plotpoint_new2(double x, double y);

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new3 constructs a new KPlotPoint object.
///
/// @param p QPointF*
///
KPlotPoint* k_plotpoint_new3(void* p);

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new4 constructs a new KPlotPoint object.
///
/// @param x double
/// @param y double
/// @param label const char*
///
KPlotPoint* k_plotpoint_new4(double x, double y, const char* label);

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new5 constructs a new KPlotPoint object.
///
/// @param x double
/// @param y double
/// @param label const char*
/// @param width double
///
KPlotPoint* k_plotpoint_new5(double x, double y, const char* label, double width);

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new6 constructs a new KPlotPoint object.
///
/// @param p QPointF*
/// @param label const char*
///
KPlotPoint* k_plotpoint_new6(void* p, const char* label);

/// [Upstream resources](https://api.kde.org/kplotpoint.html)

/// k_plotpoint_new7 constructs a new KPlotPoint object.
///
/// @param p QPointF*
/// @param label const char*
/// @param width double
///
KPlotPoint* k_plotpoint_new7(void* p, const char* label, double width);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#position)
///
/// @param self KPlotPoint*
///
QPointF* k_plotpoint_position(void* self);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#setPosition)
///
/// @param self KPlotPoint*
/// @param pos QPointF*
///
void k_plotpoint_set_position(void* self, void* pos);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#x)
///
/// @param self KPlotPoint*
///
double k_plotpoint_x(void* self);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#setX)
///
/// @param self KPlotPoint*
/// @param x double
///
void k_plotpoint_set_x(void* self, double x);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#y)
///
/// @param self KPlotPoint*
///
double k_plotpoint_y(void* self);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#setY)
///
/// @param self KPlotPoint*
/// @param y double
///
void k_plotpoint_set_y(void* self, double y);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#label)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KPlotPoint*
///
const char* k_plotpoint_label(void* self);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#setLabel)
///
/// @param self KPlotPoint*
/// @param label const char*
///
void k_plotpoint_set_label(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#barWidth)
///
/// @param self KPlotPoint*
///
double k_plotpoint_bar_width(void* self);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#setBarWidth)
///
/// @param self KPlotPoint*
/// @param w double
///
void k_plotpoint_set_bar_width(void* self, double w);

/// [Upstream resources](https://api.kde.org/kplotpoint.html#dtor.KPlotPoint)
///
/// Delete this object from C++ memory.
///
/// @param self KPlotPoint*
///
void k_plotpoint_delete(void* self);

#endif
