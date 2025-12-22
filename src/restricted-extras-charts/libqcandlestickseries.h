#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCANDLESTICKSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCANDLESTICKSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html)

/// q_candlestickseries_new constructs a new QCandlestickSeries object.
///
QCandlestickSeries* q_candlestickseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html)

/// q_candlestickseries_new2 constructs a new QCandlestickSeries object.
///
/// @param parent QObject*
///
QCandlestickSeries* q_candlestickseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCandlestickSeries*
///
const QMetaObject* q_candlestickseries_meta_object(void* self);

/// @param self QCandlestickSeries*
/// @param param1 const char*
///
void* q_candlestickseries_metacast(void* self, const char* param1);

/// @param self QCandlestickSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlestickseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCandlestickSeries*
/// @param callback int32_t func(QCandlestickSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_candlestickseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCandlestickSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlestickseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_candlestickseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
bool q_candlestickseries_append(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
bool q_candlestickseries_remove(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
///
/// @param self QCandlestickSeries*
/// @param sets libqt_list /* of QCandlestickSet* */
///
bool q_candlestickseries_append2(void* self, libqt_list sets);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
///
/// @param self QCandlestickSeries*
/// @param sets libqt_list /* of QCandlestickSet* */
///
bool q_candlestickseries_remove2(void* self, libqt_list sets);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#insert)
///
/// @param self QCandlestickSeries*
/// @param index int
/// @param set QCandlestickSet*
///
bool q_candlestickseries_insert(void* self, int index, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#take)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
bool q_candlestickseries_take(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clear)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#sets)
///
/// @param self QCandlestickSeries*
///
libqt_list /* of QCandlestickSet* */ q_candlestickseries_sets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#count)
///
/// @param self QCandlestickSeries*
///
int32_t q_candlestickseries_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
///
/// @param self QCandlestickSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_candlestickseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QCandlestickSeries*
/// @param callback int32_t func()
///
void q_candlestickseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QCandlestickSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_candlestickseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMaximumColumnWidth)
///
/// @param self QCandlestickSeries*
/// @param maximumColumnWidth double
///
void q_candlestickseries_set_maximum_column_width(void* self, double maximumColumnWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidth)
///
/// @param self QCandlestickSeries*
///
double q_candlestickseries_maximum_column_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMinimumColumnWidth)
///
/// @param self QCandlestickSeries*
/// @param minimumColumnWidth double
///
void q_candlestickseries_set_minimum_column_width(void* self, double minimumColumnWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidth)
///
/// @param self QCandlestickSeries*
///
double q_candlestickseries_minimum_column_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyWidth)
///
/// @param self QCandlestickSeries*
/// @param bodyWidth double
///
void q_candlestickseries_set_body_width(void* self, double bodyWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidth)
///
/// @param self QCandlestickSeries*
///
double q_candlestickseries_body_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyOutlineVisible)
///
/// @param self QCandlestickSeries*
/// @param bodyOutlineVisible bool
///
void q_candlestickseries_set_body_outline_visible(void* self, bool bodyOutlineVisible);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisible)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_body_outline_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsWidth)
///
/// @param self QCandlestickSeries*
/// @param capsWidth double
///
void q_candlestickseries_set_caps_width(void* self, double capsWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidth)
///
/// @param self QCandlestickSeries*
///
double q_candlestickseries_caps_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsVisible)
///
/// @param self QCandlestickSeries*
/// @param capsVisible bool
///
void q_candlestickseries_set_caps_visible(void* self, bool capsVisible);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisible)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_caps_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setIncreasingColor)
///
/// @param self QCandlestickSeries*
/// @param increasingColor QColor*
///
void q_candlestickseries_set_increasing_color(void* self, void* increasingColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColor)
///
/// @param self QCandlestickSeries*
///
QColor* q_candlestickseries_increasing_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setDecreasingColor)
///
/// @param self QCandlestickSeries*
/// @param decreasingColor QColor*
///
void q_candlestickseries_set_decreasing_color(void* self, void* decreasingColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColor)
///
/// @param self QCandlestickSeries*
///
QColor* q_candlestickseries_decreasing_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBrush)
///
/// @param self QCandlestickSeries*
/// @param brush QBrush*
///
void q_candlestickseries_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brush)
///
/// @param self QCandlestickSeries*
///
QBrush* q_candlestickseries_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setPen)
///
/// @param self QCandlestickSeries*
/// @param pen QPen*
///
void q_candlestickseries_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pen)
///
/// @param self QCandlestickSeries*
///
QPen* q_candlestickseries_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
void q_candlestickseries_clicked(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QCandlestickSet* set)
///
void q_candlestickseries_on_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
///
/// @param self QCandlestickSeries*
/// @param status bool
/// @param set QCandlestickSet*
///
void q_candlestickseries_hovered(void* self, bool status, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, bool status, QCandlestickSet* set)
///
void q_candlestickseries_on_hovered(void* self, void (*callback)(void*, bool, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
void q_candlestickseries_pressed(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QCandlestickSet* set)
///
void q_candlestickseries_on_pressed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
void q_candlestickseries_released(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QCandlestickSet* set)
///
void q_candlestickseries_on_released(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
///
/// @param self QCandlestickSeries*
/// @param set QCandlestickSet*
///
void q_candlestickseries_double_clicked(void* self, void* set);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QCandlestickSet* set)
///
void q_candlestickseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
///
/// @param self QCandlestickSeries*
/// @param sets libqt_list /* of QCandlestickSet* */
///
void q_candlestickseries_candlestick_sets_added(void* self, libqt_list sets);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QCandlestickSet** sets)
///
void q_candlestickseries_on_candlestick_sets_added(void* self, void (*callback)(void*, QCandlestickSet**));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
///
/// @param self QCandlestickSeries*
/// @param sets libqt_list /* of QCandlestickSet* */
///
void q_candlestickseries_candlestick_sets_removed(void* self, libqt_list sets);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QCandlestickSet** sets)
///
void q_candlestickseries_on_candlestick_sets_removed(void* self, void (*callback)(void*, QCandlestickSet**));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_maximum_column_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_maximum_column_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_minimum_column_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_minimum_column_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_body_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_body_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_body_outline_visibility_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_body_outline_visibility_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_caps_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_caps_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_caps_visibility_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_caps_visibility_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_increasing_color_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_increasing_color_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_decreasing_color_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_decreasing_color_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_pen_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_pen_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_candlestickseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_candlestickseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QCandlestickSeries*
/// @param name const char*
///
void q_candlestickseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCandlestickSeries*
///
const char* q_candlestickseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QCandlestickSeries*
///
double q_candlestickseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QCandlestickSeries*
/// @param opacity double
///
void q_candlestickseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QCandlestickSeries*
///
QChart* q_candlestickseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QCandlestickSeries*
/// @param axis QAbstractAxis*
///
bool q_candlestickseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QCandlestickSeries*
/// @param axis QAbstractAxis*
///
bool q_candlestickseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QCandlestickSeries*
///
libqt_list /* of QAbstractAxis* */ q_candlestickseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QCandlestickSeries*
/// @param visible bool
///
void q_candlestickseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QCandlestickSeries*
/// @param enable bool
///
void q_candlestickseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCandlestickSeries*
///
const char* q_candlestickseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCandlestickSeries*
/// @param name char*
///
void q_candlestickseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCandlestickSeries*
///
bool q_candlestickseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCandlestickSeries*
/// @param b bool
///
bool q_candlestickseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCandlestickSeries*
///
QThread* q_candlestickseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickSeries*
/// @param thread QThread*
///
bool q_candlestickseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickSeries*
/// @param interval int
///
int32_t q_candlestickseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickSeries*
/// @param id int
///
void q_candlestickseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickSeries*
/// @param id enum Qt__TimerId
///
void q_candlestickseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCandlestickSeries*
///
libqt_list /* of QObject* */ q_candlestickseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCandlestickSeries*
/// @param parent QObject*
///
void q_candlestickseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCandlestickSeries*
/// @param filterObj QObject*
///
void q_candlestickseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCandlestickSeries*
/// @param obj QObject*
///
void q_candlestickseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_candlestickseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCandlestickSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_candlestickseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_candlestickseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_candlestickseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCandlestickSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_candlestickseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCandlestickSeries*
/// @param name const char*
///
QVariant* q_candlestickseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCandlestickSeries*
///
const char** q_candlestickseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickSeries*
///
QBindingStorage* q_candlestickseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickSeries*
///
const QBindingStorage* q_candlestickseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self)
///
void q_candlestickseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCandlestickSeries*
///
QObject* q_candlestickseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCandlestickSeries*
/// @param classname const char*
///
bool q_candlestickseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_candlestickseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_candlestickseries_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_candlestickseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCandlestickSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_candlestickseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSeries*
/// @param param1 QObject*
///
void q_candlestickseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QObject* param1)
///
void q_candlestickseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QEvent*
///
bool q_candlestickseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QEvent*
///
bool q_candlestickseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback bool func(QCandlestickSeries* self, QEvent* event)
///
void q_candlestickseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlestickseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlestickseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback bool func(QCandlestickSeries* self, QObject* watched, QEvent* event)
///
void q_candlestickseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QTimerEvent*
///
void q_candlestickseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QTimerEvent*
///
void q_candlestickseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QTimerEvent* event)
///
void q_candlestickseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QChildEvent*
///
void q_candlestickseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QChildEvent*
///
void q_candlestickseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QChildEvent* event)
///
void q_candlestickseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QEvent*
///
void q_candlestickseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param event QEvent*
///
void q_candlestickseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QEvent* event)
///
void q_candlestickseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal QMetaMethod*
///
void q_candlestickseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal QMetaMethod*
///
void q_candlestickseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QMetaMethod* signal)
///
void q_candlestickseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal QMetaMethod*
///
void q_candlestickseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal QMetaMethod*
///
void q_candlestickseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, QMetaMethod* signal)
///
void q_candlestickseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
///
QObject* q_candlestickseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
///
QObject* q_candlestickseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback QObject* func()
///
void q_candlestickseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
///
int32_t q_candlestickseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
///
int32_t q_candlestickseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback int32_t func()
///
void q_candlestickseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal const char*
///
int32_t q_candlestickseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal const char*
///
int32_t q_candlestickseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback int32_t func(QCandlestickSeries* self, const char* signal)
///
void q_candlestickseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal QMetaMethod*
///
bool q_candlestickseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param signal QMetaMethod*
///
bool q_candlestickseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSeries*
/// @param callback bool func(QCandlestickSeries* self, QMetaMethod* signal)
///
void q_candlestickseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCandlestickSeries*
/// @param callback void func(QCandlestickSeries* self, const char* objectName)
///
void q_candlestickseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#dtor.QCandlestickSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QCandlestickSeries*
///
void q_candlestickseries_delete(void* self);

#endif
