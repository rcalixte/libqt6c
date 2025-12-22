#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQLINESERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html)

/// q_lineseries_new constructs a new QLineSeries object.
///
QLineSeries* q_lineseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html)

/// q_lineseries_new2 constructs a new QLineSeries object.
///
/// @param parent QObject*
///
QLineSeries* q_lineseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLineSeries*
///
const QMetaObject* q_lineseries_meta_object(void* self);

/// @param self QLineSeries*
/// @param param1 const char*
///
void* q_lineseries_metacast(void* self, const char* param1);

/// @param self QLineSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_lineseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLineSeries*
/// @param callback int32_t func(QLineSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_lineseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLineSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_lineseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_lineseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
///
/// @param self QLineSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_lineseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QLineSeries*
/// @param callback int32_t func()
///
void q_lineseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QLineSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_lineseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_lineseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_lineseries_tr3(const char* s, const char* c, int n);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QLineSeries*
/// @param x double
/// @param y double
///
void q_lineseries_append(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
void q_lineseries_append2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QLineSeries*
/// @param points libqt_list /* of QPointF* */
///
void q_lineseries_append3(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QLineSeries*
/// @param oldX double
/// @param oldY double
/// @param newX double
/// @param newY double
///
void q_lineseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QLineSeries*
/// @param oldPoint QPointF*
/// @param newPoint QPointF*
///
void q_lineseries_replace2(void* self, void* oldPoint, void* newPoint);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QLineSeries*
/// @param index int
/// @param newX double
/// @param newY double
///
void q_lineseries_replace3(void* self, int index, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QLineSeries*
/// @param index int
/// @param newPoint QPointF*
///
void q_lineseries_replace4(void* self, int index, void* newPoint);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QLineSeries*
/// @param x double
/// @param y double
///
void q_lineseries_remove(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
void q_lineseries_remove2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_remove3(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// @param self QLineSeries*
/// @param index int
/// @param count int
///
void q_lineseries_remove_points(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// @param self QLineSeries*
/// @param index int
/// @param point QPointF*
///
void q_lineseries_insert(void* self, int index, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// @param self QLineSeries*
///
void q_lineseries_clear(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// @param self QLineSeries*
///
int32_t q_lineseries_count(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// @param self QLineSeries*
///
libqt_list /* of QPointF* */ q_lineseries_points(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// @param self QLineSeries*
///
libqt_list /* of QPointF* */ q_lineseries_points_vector(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// @param self QLineSeries*
/// @param index int
///
const QPointF* q_lineseries_at(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
QXYSeries* q_lineseries_operator_shift_left(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// @param self QLineSeries*
/// @param points libqt_list /* of QPointF* */
///
QXYSeries* q_lineseries_operator_shift_left2(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// @param self QLineSeries*
///
QPen* q_lineseries_pen(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#brush)
///
/// @param self QLineSeries*
///
QBrush* q_lineseries_brush(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_set_selected_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// @param self QLineSeries*
///
QColor* q_lineseries_selected_color(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// @param self QLineSeries*
///
void q_lineseries_set_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// @param self QLineSeries*
///
bool q_lineseries_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// @param self QLineSeries*
/// @param format const char*
///
void q_lineseries_set_point_labels_format(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLineSeries*
///
const char* q_lineseries_point_labels_format(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// @param self QLineSeries*
///
void q_lineseries_set_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// @param self QLineSeries*
///
bool q_lineseries_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// @param self QLineSeries*
/// @param font QFont*
///
void q_lineseries_set_point_labels_font(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// @param self QLineSeries*
///
QFont* q_lineseries_point_labels_font(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_set_point_labels_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// @param self QLineSeries*
///
QColor* q_lineseries_point_labels_color(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// @param self QLineSeries*
///
void q_lineseries_set_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// @param self QLineSeries*
///
bool q_lineseries_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QLineSeries*
/// @param points libqt_list /* of QPointF* */
///
void q_lineseries_replace5(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// @param self QLineSeries*
/// @param index int
///
bool q_lineseries_is_point_selected(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_select_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_deselect_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// @param self QLineSeries*
/// @param index int
/// @param selected bool
///
void q_lineseries_set_point_selected(void* self, int index, bool selected);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// @param self QLineSeries*
///
void q_lineseries_select_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// @param self QLineSeries*
///
void q_lineseries_deselect_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// @param self QLineSeries*
/// @param indexes libqt_list /* of int */
///
void q_lineseries_select_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// @param self QLineSeries*
/// @param indexes libqt_list /* of int */
///
void q_lineseries_deselect_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// @param self QLineSeries*
/// @param indexes libqt_list /* of int */
///
void q_lineseries_toggle_selection(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// @param self QLineSeries*
///
libqt_list /* of int */ q_lineseries_selected_points(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// @param self QLineSeries*
/// @param lightMarker QImage*
///
void q_lineseries_set_light_marker(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// @param self QLineSeries*
///
const QImage* q_lineseries_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// @param self QLineSeries*
/// @param selectedLightMarker QImage*
///
void q_lineseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// @param self QLineSeries*
///
const QImage* q_lineseries_selected_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
///
/// @param self QLineSeries*
/// @param size double
///
void q_lineseries_set_marker_size(void* self, double size);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
///
/// @param self QLineSeries*
///
double q_lineseries_marker_size(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// @param self QLineSeries*
///
void q_lineseries_set_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// @param self QLineSeries*
///
bool q_lineseries_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// @param self QLineSeries*
/// @param ok bool*
///
libqt_pair /* tuple of double and double */ q_lineseries_best_fit_line_equation(void* self, bool* ok);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// @param self QLineSeries*
/// @param pen QPen*
///
void q_lineseries_set_best_fit_line_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// @param self QLineSeries*
///
QPen* q_lineseries_best_fit_line_pen(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_set_best_fit_line_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// @param self QLineSeries*
///
QColor* q_lineseries_best_fit_line_color(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_clear_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// @param self QLineSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
///
void q_lineseries_clear_point_configuration2(void* self, int index, int32_t key);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// @param self QLineSeries*
///
void q_lineseries_clear_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// @param self QLineSeries*
/// @param key enum QXYSeries__PointConfiguration
///
void q_lineseries_clear_points_configuration2(void* self, int32_t key);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// @param self QLineSeries*
/// @param index int
/// @param configuration libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */
///
void q_lineseries_set_point_configuration(void* self, int index, libqt_map /* of int32_t to QVariant* */ configuration);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// @param self QLineSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
/// @param value QVariant*
///
void q_lineseries_set_point_configuration2(void* self, int index, int32_t key, void* value);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// @param self QLineSeries*
/// @param pointsConfiguration libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */
///
void q_lineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ pointsConfiguration);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// @param self QLineSeries*
/// @param index int
///
libqt_map /* of int32_t to QVariant* */ q_lineseries_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// @param self QLineSeries*
///
libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ q_lineseries_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// @param self QLineSeries*
/// @param sourceData libqt_list /* of double */
/// @param minSize double
/// @param maxSize double
///
void q_lineseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// @param self QLineSeries*
/// @param sourceData libqt_list /* of double */
///
void q_lineseries_color_by(void* self, libqt_list sourceData);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
void q_lineseries_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPointF* point)
///
void q_lineseries_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// @param self QLineSeries*
/// @param point QPointF*
/// @param state bool
///
void q_lineseries_hovered(void* self, void* point, bool state);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPointF* point, bool state)
///
void q_lineseries_on_hovered(void* self, void (*callback)(void*, void*, bool));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
void q_lineseries_pressed(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPointF* point)
///
void q_lineseries_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
void q_lineseries_released(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPointF* point)
///
void q_lineseries_on_released(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// @param self QLineSeries*
/// @param point QPointF*
///
void q_lineseries_double_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPointF* point)
///
void q_lineseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_point_replaced(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, int index)
///
void q_lineseries_on_point_replaced(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_point_removed(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, int index)
///
void q_lineseries_on_point_removed(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// @param self QLineSeries*
/// @param index int
///
void q_lineseries_point_added(void* self, int index);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, int index)
///
void q_lineseries_on_point_added(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QColor* color)
///
void q_lineseries_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_selected_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QColor* color)
///
void q_lineseries_on_selected_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// @param self QLineSeries*
///
void q_lineseries_points_replaced(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_points_replaced(void* self, void (*callback)(void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// @param self QLineSeries*
/// @param format const char*
///
void q_lineseries_point_labels_format_changed(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, const char* format)
///
void q_lineseries_on_point_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// @param self QLineSeries*
/// @param visible bool
///
void q_lineseries_point_labels_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, bool visible)
///
void q_lineseries_on_point_labels_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// @param self QLineSeries*
/// @param font QFont*
///
void q_lineseries_point_labels_font_changed(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QFont* font)
///
void q_lineseries_on_point_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_point_labels_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QColor* color)
///
void q_lineseries_on_point_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// @param self QLineSeries*
/// @param clipping bool
///
void q_lineseries_point_labels_clipping_changed(void* self, bool clipping);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, bool clipping)
///
void q_lineseries_on_point_labels_clipping_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// @param self QLineSeries*
/// @param index int
/// @param count int
///
void q_lineseries_points_removed(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, int index, int count)
///
void q_lineseries_on_points_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// @param self QLineSeries*
/// @param pen QPen*
///
void q_lineseries_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPen* pen)
///
void q_lineseries_on_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// @param self QLineSeries*
///
void q_lineseries_selected_points_changed(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_selected_points_changed(void* self, void (*callback)(void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// @param self QLineSeries*
/// @param lightMarker QImage*
///
void q_lineseries_light_marker_changed(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QImage* lightMarker)
///
void q_lineseries_on_light_marker_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// @param self QLineSeries*
/// @param selectedLightMarker QImage*
///
void q_lineseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QImage* selectedLightMarker)
///
void q_lineseries_on_selected_light_marker_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// @param self QLineSeries*
/// @param visible bool
///
void q_lineseries_best_fit_line_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, bool visible)
///
void q_lineseries_on_best_fit_line_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// @param self QLineSeries*
/// @param pen QPen*
///
void q_lineseries_best_fit_line_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPen* pen)
///
void q_lineseries_on_best_fit_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_best_fit_line_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QColor* color)
///
void q_lineseries_on_best_fit_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// @param self QLineSeries*
/// @param configuration libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */
///
void q_lineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ configuration);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */)
///
void q_lineseries_on_points_configuration_changed(void* self, void (*callback)(void*, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// @param self QLineSeries*
/// @param size double
///
void q_lineseries_marker_size_changed(void* self, double size);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, double size)
///
void q_lineseries_on_marker_size_changed(void* self, void (*callback)(void*, double));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// @param self QLineSeries*
/// @param visible bool
///
void q_lineseries_set_points_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// @param self QLineSeries*
/// @param visible bool
///
void q_lineseries_set_point_labels_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// @param self QLineSeries*
/// @param enabled bool
///
void q_lineseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// @param self QLineSeries*
/// @param visible bool
///
void q_lineseries_set_best_fit_line_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// @param self QLineSeries*
/// @param sourceData libqt_list /* of double */
/// @param gradient QLinearGradient*
///
void q_lineseries_color_by2(void* self, libqt_list sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QLineSeries*
/// @param name const char*
///
void q_lineseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLineSeries*
///
const char* q_lineseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QLineSeries*
///
void q_lineseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QLineSeries*
///
bool q_lineseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QLineSeries*
///
double q_lineseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QLineSeries*
/// @param opacity double
///
void q_lineseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QLineSeries*
///
void q_lineseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QLineSeries*
///
bool q_lineseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QLineSeries*
///
QChart* q_lineseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QLineSeries*
/// @param axis QAbstractAxis*
///
bool q_lineseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QLineSeries*
/// @param axis QAbstractAxis*
///
bool q_lineseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QLineSeries*
///
libqt_list /* of QAbstractAxis* */ q_lineseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QLineSeries*
///
void q_lineseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QLineSeries*
///
void q_lineseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QLineSeries*
///
void q_lineseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QLineSeries*
///
void q_lineseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QLineSeries*
///
void q_lineseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QLineSeries*
///
void q_lineseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QLineSeries*
/// @param visible bool
///
void q_lineseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QLineSeries*
/// @param enable bool
///
void q_lineseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLineSeries*
///
const char* q_lineseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLineSeries*
/// @param name char*
///
void q_lineseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLineSeries*
///
bool q_lineseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLineSeries*
///
bool q_lineseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLineSeries*
///
bool q_lineseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLineSeries*
///
bool q_lineseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLineSeries*
/// @param b bool
///
bool q_lineseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLineSeries*
///
QThread* q_lineseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLineSeries*
/// @param thread QThread*
///
bool q_lineseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineSeries*
/// @param interval int
///
int32_t q_lineseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLineSeries*
/// @param id int
///
void q_lineseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLineSeries*
/// @param id enum Qt__TimerId
///
void q_lineseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLineSeries*
///
libqt_list /* of QObject* */ q_lineseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLineSeries*
/// @param parent QObject*
///
void q_lineseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLineSeries*
/// @param filterObj QObject*
///
void q_lineseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLineSeries*
/// @param obj QObject*
///
void q_lineseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_lineseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLineSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_lineseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_lineseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_lineseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLineSeries*
///
void q_lineseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLineSeries*
///
void q_lineseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLineSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_lineseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLineSeries*
/// @param name const char*
///
QVariant* q_lineseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLineSeries*
///
const char** q_lineseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLineSeries*
///
QBindingStorage* q_lineseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLineSeries*
///
const QBindingStorage* q_lineseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineSeries*
///
void q_lineseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self)
///
void q_lineseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLineSeries*
///
QObject* q_lineseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLineSeries*
/// @param classname const char*
///
bool q_lineseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLineSeries*
///
void q_lineseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLineSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_lineseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_lineseries_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_lineseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLineSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_lineseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineSeries*
/// @param param1 QObject*
///
void q_lineseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QObject* param1)
///
void q_lineseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param pen QPen*
///
void q_lineseries_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param pen QPen*
///
void q_lineseries_qbase_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QPen* pen)
///
void q_lineseries_on_set_pen(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param brush QBrush*
///
void q_lineseries_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param brush QBrush*
///
void q_lineseries_qbase_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QBrush* brush)
///
void q_lineseries_on_set_brush(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param color QColor*
///
void q_lineseries_qbase_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QColor* color)
///
void q_lineseries_on_set_color(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
///
QColor* q_lineseries_color(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
///
QColor* q_lineseries_qbase_color(void* self);

/// Inherited from QXYSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback QColor* func()
///
void q_lineseries_on_color(void* self, QColor* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param event QEvent*
///
bool q_lineseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param event QEvent*
///
bool q_lineseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback bool func(QLineSeries* self, QEvent* event)
///
void q_lineseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_lineseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_lineseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback bool func(QLineSeries* self, QObject* watched, QEvent* event)
///
void q_lineseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param event QTimerEvent*
///
void q_lineseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param event QTimerEvent*
///
void q_lineseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QTimerEvent* event)
///
void q_lineseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param event QChildEvent*
///
void q_lineseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param event QChildEvent*
///
void q_lineseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QChildEvent* event)
///
void q_lineseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param event QEvent*
///
void q_lineseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param event QEvent*
///
void q_lineseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QEvent* event)
///
void q_lineseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param signal QMetaMethod*
///
void q_lineseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param signal QMetaMethod*
///
void q_lineseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QMetaMethod* signal)
///
void q_lineseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param signal QMetaMethod*
///
void q_lineseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param signal QMetaMethod*
///
void q_lineseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, QMetaMethod* signal)
///
void q_lineseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
///
QObject* q_lineseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
///
QObject* q_lineseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback QObject* func()
///
void q_lineseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
///
int32_t q_lineseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
///
int32_t q_lineseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback int32_t func()
///
void q_lineseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param signal const char*
///
int32_t q_lineseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param signal const char*
///
int32_t q_lineseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback int32_t func(QLineSeries* self, const char* signal)
///
void q_lineseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineSeries*
/// @param signal QMetaMethod*
///
bool q_lineseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineSeries*
/// @param signal QMetaMethod*
///
bool q_lineseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineSeries*
/// @param callback bool func(QLineSeries* self, QMetaMethod* signal)
///
void q_lineseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLineSeries*
/// @param callback void func(QLineSeries* self, const char* objectName)
///
void q_lineseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#dtor.QLineSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QLineSeries*
///
void q_lineseries_delete(void* self);

#endif
