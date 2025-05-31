#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractseries.h"
#include "../libqbrush.h"
#include "libqcandlestickset.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html

/// q_candlestickseries_new constructs a new QCandlestickSeries object.
///
///
QCandlestickSeries* q_candlestickseries_new();

/// q_candlestickseries_new2 constructs a new QCandlestickSeries object.
///
/// ``` QObject* parent ```
QCandlestickSeries* q_candlestickseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickSeries* self ```
const QMetaObject* q_candlestickseries_meta_object(void* self);

/// ``` QCandlestickSeries* self, const char* param1 ```
void* q_candlestickseries_metacast(void* self, const char* param1);

/// ``` QCandlestickSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCandlestickSeries* self, int32_t (*slot)(QCandlestickSeries*, enum QMetaObject__Call, int, void*) ```
void q_candlestickseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCandlestickSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlestickseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
bool q_candlestickseries_append(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
bool q_candlestickseries_remove(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
///
/// ``` QCandlestickSeries* self, libqt_list /* of QCandlestickSet* */ sets ```
bool q_candlestickseries_append_with_sets(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
///
/// ``` QCandlestickSeries* self, libqt_list /* of QCandlestickSet* */ sets ```
bool q_candlestickseries_remove_with_sets(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#insert)
///
/// ``` QCandlestickSeries* self, int index, QCandlestickSet* set ```
bool q_candlestickseries_insert(void* self, int index, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#take)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
bool q_candlestickseries_take(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clear)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#sets)
///
/// ``` QCandlestickSeries* self ```
libqt_list /* of QCandlestickSet* */ q_candlestickseries_sets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#count)
///
/// ``` QCandlestickSeries* self ```
int32_t q_candlestickseries_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
///
/// ``` QCandlestickSeries* self ```
int64_t q_candlestickseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QCandlestickSeries* self, int64_t (*slot)() ```
void q_candlestickseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QCandlestickSeries* self ```
int64_t q_candlestickseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMaximumColumnWidth)
///
/// ``` QCandlestickSeries* self, double maximumColumnWidth ```
void q_candlestickseries_set_maximum_column_width(void* self, double maximumColumnWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_maximum_column_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMinimumColumnWidth)
///
/// ``` QCandlestickSeries* self, double minimumColumnWidth ```
void q_candlestickseries_set_minimum_column_width(void* self, double minimumColumnWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_minimum_column_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyWidth)
///
/// ``` QCandlestickSeries* self, double bodyWidth ```
void q_candlestickseries_set_body_width(void* self, double bodyWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_body_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyOutlineVisible)
///
/// ``` QCandlestickSeries* self, bool bodyOutlineVisible ```
void q_candlestickseries_set_body_outline_visible(void* self, bool bodyOutlineVisible);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisible)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_body_outline_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsWidth)
///
/// ``` QCandlestickSeries* self, double capsWidth ```
void q_candlestickseries_set_caps_width(void* self, double capsWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_caps_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsVisible)
///
/// ``` QCandlestickSeries* self, bool capsVisible ```
void q_candlestickseries_set_caps_visible(void* self, bool capsVisible);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisible)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_caps_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setIncreasingColor)
///
/// ``` QCandlestickSeries* self, QColor* increasingColor ```
void q_candlestickseries_set_increasing_color(void* self, void* increasingColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColor)
///
/// ``` QCandlestickSeries* self ```
QColor* q_candlestickseries_increasing_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setDecreasingColor)
///
/// ``` QCandlestickSeries* self, QColor* decreasingColor ```
void q_candlestickseries_set_decreasing_color(void* self, void* decreasingColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColor)
///
/// ``` QCandlestickSeries* self ```
QColor* q_candlestickseries_decreasing_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBrush)
///
/// ``` QCandlestickSeries* self, QBrush* brush ```
void q_candlestickseries_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brush)
///
/// ``` QCandlestickSeries* self ```
QBrush* q_candlestickseries_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setPen)
///
/// ``` QCandlestickSeries* self, QPen* pen ```
void q_candlestickseries_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pen)
///
/// ``` QCandlestickSeries* self ```
QPen* q_candlestickseries_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_clicked(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
///
/// ``` QCandlestickSeries* self, bool status, QCandlestickSet* set ```
void q_candlestickseries_hovered(void* self, bool status, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, bool, QCandlestickSet*) ```
void q_candlestickseries_on_hovered(void* self, void (*slot)(void*, bool, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_pressed(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_released(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_released(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_double_clicked(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
///
/// ``` QCandlestickSeries* self, libqt_list /* of QCandlestickSet* */ sets ```
void q_candlestickseries_candlestick_sets_added(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, libqt_list /* of QCandlestickSet* */ sets ) ```
void q_candlestickseries_on_candlestick_sets_added(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
///
/// ``` QCandlestickSeries* self, libqt_list /* of QCandlestickSet* */ sets ```
void q_candlestickseries_candlestick_sets_removed(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, libqt_list /* of QCandlestickSet* */ sets ) ```
void q_candlestickseries_on_candlestick_sets_removed(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_maximum_column_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_maximum_column_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_minimum_column_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_minimum_column_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_body_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_body_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_body_outline_visibility_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_body_outline_visibility_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_caps_width_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_caps_width_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_caps_visibility_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_caps_visibility_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_increasing_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_increasing_color_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_decreasing_color_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_decreasing_color_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlestickseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlestickseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QCandlestickSeries* self, const char* name ```
void q_candlestickseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QCandlestickSeries* self ```
const char* q_candlestickseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QCandlestickSeries* self, double opacity ```
void q_candlestickseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QCandlestickSeries* self ```
QChart* q_candlestickseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QCandlestickSeries* self, QAbstractAxis* axis ```
bool q_candlestickseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QCandlestickSeries* self, QAbstractAxis* axis ```
bool q_candlestickseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QCandlestickSeries* self ```
libqt_list /* of QAbstractAxis* */ q_candlestickseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QCandlestickSeries* self, bool visible ```
void q_candlestickseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QCandlestickSeries* self, bool enable ```
void q_candlestickseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickSeries* self ```
const char* q_candlestickseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickSeries* self, char* name ```
void q_candlestickseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickSeries* self, bool b ```
bool q_candlestickseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickSeries* self ```
QThread* q_candlestickseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickSeries* self, QThread* thread ```
void q_candlestickseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSeries* self, int interval ```
int32_t q_candlestickseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickSeries* self, int id ```
void q_candlestickseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickSeries* self ```
const libqt_list /* of QObject* */ q_candlestickseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickSeries* self, QObject* parent ```
void q_candlestickseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickSeries* self, QObject* filterObj ```
void q_candlestickseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickSeries* self, QObject* obj ```
void q_candlestickseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlestickseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlestickseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlestickseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlestickseries_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickSeries* self, const char* name, QVariant* value ```
bool q_candlestickseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickSeries* self, const char* name ```
QVariant* q_candlestickseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickSeries* self ```
const char** q_candlestickseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickSeries* self ```
QBindingStorage* q_candlestickseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickSeries* self ```
const QBindingStorage* q_candlestickseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSeries* self, void (*slot)(QObject*) ```
void q_candlestickseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickSeries* self ```
QObject* q_candlestickseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickSeries* self, const char* classname ```
bool q_candlestickseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlestickseries_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSeries* self, QObject* param1 ```
void q_candlestickseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSeries* self, void (*slot)(QObject*, QObject*) ```
void q_candlestickseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
bool q_candlestickseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
bool q_candlestickseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, bool (*slot)(QCandlestickSeries*, QEvent*) ```
void q_candlestickseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QObject* watched, QEvent* event ```
bool q_candlestickseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QObject* watched, QEvent* event ```
bool q_candlestickseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, bool (*slot)(QCandlestickSeries*, QObject*, QEvent*) ```
void q_candlestickseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QTimerEvent* event ```
void q_candlestickseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QTimerEvent* event ```
void q_candlestickseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QTimerEvent*) ```
void q_candlestickseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QChildEvent* event ```
void q_candlestickseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QChildEvent* event ```
void q_candlestickseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QChildEvent*) ```
void q_candlestickseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
void q_candlestickseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
void q_candlestickseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QEvent*) ```
void q_candlestickseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QMetaMethod*) ```
void q_candlestickseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QMetaMethod*) ```
void q_candlestickseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self ```
QObject* q_candlestickseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self ```
QObject* q_candlestickseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QObject* (*slot)() ```
void q_candlestickseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self ```
int32_t q_candlestickseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self ```
int32_t q_candlestickseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, int32_t (*slot)() ```
void q_candlestickseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, const char* signal ```
int32_t q_candlestickseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, const char* signal ```
int32_t q_candlestickseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, int32_t (*slot)(QCandlestickSeries*, const char*) ```
void q_candlestickseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
bool q_candlestickseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
bool q_candlestickseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, bool (*slot)(QCandlestickSeries*, QMetaMethod*) ```
void q_candlestickseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QCandlestickSeries* self, void (*slot)(QObject*, const char*) ```
void q_candlestickseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#dtor.QCandlestickSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_delete(void* self);

#endif
