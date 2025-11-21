#pragma once
#ifndef SRC_EXTRAS_KPLOTTING_QT6C_LIBKPLOTAXIS_H
#define SRC_EXTRAS_KPLOTTING_QT6C_LIBKPLOTAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kplotaxis.html

/// k_plotaxis_new constructs a new KPlotAxis object.
///
KPlotAxis* k_plotaxis_new();

/// k_plotaxis_new2 constructs a new KPlotAxis object.
///
/// @param label const char*
KPlotAxis* k_plotaxis_new2(const char* label);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#isVisible)
///
/// @param self KPlotAxis*
bool k_plotaxis_is_visible(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setVisible)
///
/// @param self KPlotAxis*
/// @param visible bool
void k_plotaxis_set_visible(void* self, bool visible);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#areTickLabelsShown)
///
/// @param self KPlotAxis*
bool k_plotaxis_are_tick_labels_shown(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelsShown)
///
/// @param self KPlotAxis*
/// @param b bool
void k_plotaxis_set_tick_labels_shown(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setLabel)
///
/// @param self KPlotAxis*
/// @param label const char*
void k_plotaxis_set_label(void* self, const char* label);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPlotAxis*
const char* k_plotaxis_label(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabel)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPlotAxis*
/// @param value double
const char* k_plotaxis_tick_label(void* self, double value);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
///
/// @param self KPlotAxis*
void k_plotaxis_set_tick_label_format(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabelWidth)
///
/// @param self KPlotAxis*
int32_t k_plotaxis_tick_label_width(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabelFormat)
///
/// @param self KPlotAxis*
char k_plotaxis_tick_label_format(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#tickLabelPrecision)
///
/// @param self KPlotAxis*
int32_t k_plotaxis_tick_label_precision(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickMarks)
///
/// @param self KPlotAxis*
/// @param x0 double
/// @param length double
void k_plotaxis_set_tick_marks(void* self, double x0, double length);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#majorTickMarks)
///
/// @param self KPlotAxis*
libqt_list /* of double */ k_plotaxis_major_tick_marks(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#minorTickMarks)
///
/// @param self KPlotAxis*
libqt_list /* of double */ k_plotaxis_minor_tick_marks(void* self);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
///
/// @param self KPlotAxis*
/// @param format char
void k_plotaxis_set_tick_label_format1(void* self, char format);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
///
/// @param self KPlotAxis*
/// @param format char
/// @param fieldWidth int
void k_plotaxis_set_tick_label_format2(void* self, char format, int fieldWidth);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#setTickLabelFormat)
///
/// @param self KPlotAxis*
/// @param format char
/// @param fieldWidth int
/// @param precision int
void k_plotaxis_set_tick_label_format3(void* self, char format, int fieldWidth, int precision);

/// [Qt documentation](https://api.kde.org/kplotaxis.html#dtor.KPlotAxis)
///
/// Delete this object from C++ memory.
///
/// @param self KPlotAxis*
void k_plotaxis_delete(void* self);

#endif
