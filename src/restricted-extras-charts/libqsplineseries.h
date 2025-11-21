#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQSPLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQSPLINESERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsplineseries-qtcharts.html

/// q_splineseries_new constructs a new QSplineSeries object.
///
QSplineSeries* q_splineseries_new();

/// q_splineseries_new2 constructs a new QSplineSeries object.
///
/// @param parent QObject*
QSplineSeries* q_splineseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSplineSeries*
const QMetaObject* q_splineseries_meta_object(void* self);

/// @param self QSplineSeries*
/// @param param1 const char*
void* q_splineseries_metacast(void* self, const char* param1);

/// @param self QSplineSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_splineseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSplineSeries*
/// @param callback int32_t func(QSplineSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_splineseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSplineSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_splineseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_splineseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
///
/// @param self QSplineSeries*
///
/// @return enum QAbstractSeries__SeriesType
int32_t q_splineseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QSplineSeries*
/// @param callback int32_t func()
void q_splineseries_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QSplineSeries*
///
/// @return enum QAbstractSeries__SeriesType
int32_t q_splineseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_splineseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_splineseries_tr3(const char* s, const char* c, int n);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QSplineSeries*
/// @param x double
/// @param y double
void q_splineseries_append(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QSplineSeries*
/// @param point QPointF*
void q_splineseries_append2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QSplineSeries*
/// @param points libqt_list /* of QPointF* */
void q_splineseries_append3(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QSplineSeries*
/// @param oldX double
/// @param oldY double
/// @param newX double
/// @param newY double
void q_splineseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QSplineSeries*
/// @param oldPoint QPointF*
/// @param newPoint QPointF*
void q_splineseries_replace2(void* self, void* oldPoint, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QSplineSeries*
/// @param index int
/// @param newX double
/// @param newY double
void q_splineseries_replace3(void* self, int index, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QSplineSeries*
/// @param index int
/// @param newPoint QPointF*
void q_splineseries_replace4(void* self, int index, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QSplineSeries*
/// @param x double
/// @param y double
void q_splineseries_remove(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QSplineSeries*
/// @param point QPointF*
void q_splineseries_remove2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_remove3(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// @param self QSplineSeries*
/// @param index int
/// @param count int
void q_splineseries_remove_points(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// @param self QSplineSeries*
/// @param index int
/// @param point QPointF*
void q_splineseries_insert(void* self, int index, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// @param self QSplineSeries*
void q_splineseries_clear(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// @param self QSplineSeries*
int32_t q_splineseries_count(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// @param self QSplineSeries*
libqt_list /* of QPointF* */ q_splineseries_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// @param self QSplineSeries*
libqt_list /* of QPointF* */ q_splineseries_points_vector(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// @param self QSplineSeries*
/// @param index int
const QPointF* q_splineseries_at(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// @param self QSplineSeries*
/// @param point QPointF*
QXYSeries* q_splineseries_operator_shift_left(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// @param self QSplineSeries*
/// @param points libqt_list /* of QPointF* */
QXYSeries* q_splineseries_operator_shift_left2(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// @param self QSplineSeries*
QPen* q_splineseries_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#brush)
///
/// @param self QSplineSeries*
QBrush* q_splineseries_brush(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_set_selected_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// @param self QSplineSeries*
QColor* q_splineseries_selected_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// @param self QSplineSeries*
void q_splineseries_set_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// @param self QSplineSeries*
bool q_splineseries_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// @param self QSplineSeries*
/// @param format const char*
void q_splineseries_set_point_labels_format(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSplineSeries*
const char* q_splineseries_point_labels_format(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// @param self QSplineSeries*
void q_splineseries_set_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// @param self QSplineSeries*
bool q_splineseries_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// @param self QSplineSeries*
/// @param font QFont*
void q_splineseries_set_point_labels_font(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// @param self QSplineSeries*
QFont* q_splineseries_point_labels_font(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_set_point_labels_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// @param self QSplineSeries*
QColor* q_splineseries_point_labels_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// @param self QSplineSeries*
void q_splineseries_set_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// @param self QSplineSeries*
bool q_splineseries_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QSplineSeries*
/// @param points libqt_list /* of QPointF* */
void q_splineseries_replace5(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// @param self QSplineSeries*
/// @param index int
bool q_splineseries_is_point_selected(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_select_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_deselect_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// @param self QSplineSeries*
/// @param index int
/// @param selected bool
void q_splineseries_set_point_selected(void* self, int index, bool selected);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// @param self QSplineSeries*
void q_splineseries_select_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// @param self QSplineSeries*
void q_splineseries_deselect_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// @param self QSplineSeries*
/// @param indexes libqt_list /* of int */
void q_splineseries_select_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// @param self QSplineSeries*
/// @param indexes libqt_list /* of int */
void q_splineseries_deselect_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// @param self QSplineSeries*
/// @param indexes libqt_list /* of int */
void q_splineseries_toggle_selection(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// @param self QSplineSeries*
libqt_list /* of int */ q_splineseries_selected_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// @param self QSplineSeries*
/// @param lightMarker QImage*
void q_splineseries_set_light_marker(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// @param self QSplineSeries*
const QImage* q_splineseries_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// @param self QSplineSeries*
/// @param selectedLightMarker QImage*
void q_splineseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// @param self QSplineSeries*
const QImage* q_splineseries_selected_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
///
/// @param self QSplineSeries*
/// @param size double
void q_splineseries_set_marker_size(void* self, double size);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
///
/// @param self QSplineSeries*
double q_splineseries_marker_size(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// @param self QSplineSeries*
void q_splineseries_set_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// @param self QSplineSeries*
bool q_splineseries_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// @param self QSplineSeries*
/// @param ok bool*
libqt_pair /* tuple of double and double */ q_splineseries_best_fit_line_equation(void* self, bool* ok);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// @param self QSplineSeries*
/// @param pen QPen*
void q_splineseries_set_best_fit_line_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// @param self QSplineSeries*
QPen* q_splineseries_best_fit_line_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_set_best_fit_line_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// @param self QSplineSeries*
QColor* q_splineseries_best_fit_line_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_clear_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// @param self QSplineSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
void q_splineseries_clear_point_configuration2(void* self, int index, int32_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// @param self QSplineSeries*
void q_splineseries_clear_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// @param self QSplineSeries*
/// @param key enum QXYSeries__PointConfiguration
void q_splineseries_clear_points_configuration2(void* self, int32_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// @param self QSplineSeries*
/// @param index int
/// @param configuration libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */
void q_splineseries_set_point_configuration(void* self, int index, libqt_map /* of int32_t to QVariant* */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// @param self QSplineSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
/// @param value QVariant*
void q_splineseries_set_point_configuration2(void* self, int index, int32_t key, void* value);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// @param self QSplineSeries*
/// @param pointsConfiguration libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */
void q_splineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ pointsConfiguration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// @param self QSplineSeries*
/// @param index int
libqt_map /* of int32_t to QVariant* */ q_splineseries_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// @param self QSplineSeries*
libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ q_splineseries_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// @param self QSplineSeries*
/// @param sourceData libqt_list /* of double */
/// @param minSize double
/// @param maxSize double
void q_splineseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// @param self QSplineSeries*
/// @param sourceData libqt_list /* of double */
void q_splineseries_color_by(void* self, libqt_list sourceData);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// @param self QSplineSeries*
/// @param point QPointF*
void q_splineseries_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPointF* point)
void q_splineseries_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// @param self QSplineSeries*
/// @param point QPointF*
/// @param state bool
void q_splineseries_hovered(void* self, void* point, bool state);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPointF* point, bool state)
void q_splineseries_on_hovered(void* self, void (*callback)(void*, void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// @param self QSplineSeries*
/// @param point QPointF*
void q_splineseries_pressed(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPointF* point)
void q_splineseries_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// @param self QSplineSeries*
/// @param point QPointF*
void q_splineseries_released(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPointF* point)
void q_splineseries_on_released(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// @param self QSplineSeries*
/// @param point QPointF*
void q_splineseries_double_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPointF* point)
void q_splineseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_point_replaced(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, int index)
void q_splineseries_on_point_replaced(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_point_removed(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, int index)
void q_splineseries_on_point_removed(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// @param self QSplineSeries*
/// @param index int
void q_splineseries_point_added(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, int index)
void q_splineseries_on_point_added(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QColor* color)
void q_splineseries_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_selected_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QColor* color)
void q_splineseries_on_selected_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// @param self QSplineSeries*
void q_splineseries_points_replaced(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_points_replaced(void* self, void (*callback)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// @param self QSplineSeries*
/// @param format const char*
void q_splineseries_point_labels_format_changed(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, const char* format)
void q_splineseries_on_point_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// @param self QSplineSeries*
/// @param visible bool
void q_splineseries_point_labels_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, bool visible)
void q_splineseries_on_point_labels_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// @param self QSplineSeries*
/// @param font QFont*
void q_splineseries_point_labels_font_changed(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QFont* font)
void q_splineseries_on_point_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_point_labels_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QColor* color)
void q_splineseries_on_point_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// @param self QSplineSeries*
/// @param clipping bool
void q_splineseries_point_labels_clipping_changed(void* self, bool clipping);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, bool clipping)
void q_splineseries_on_point_labels_clipping_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// @param self QSplineSeries*
/// @param index int
/// @param count int
void q_splineseries_points_removed(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, int index, int count)
void q_splineseries_on_points_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// @param self QSplineSeries*
/// @param pen QPen*
void q_splineseries_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPen* pen)
void q_splineseries_on_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// @param self QSplineSeries*
void q_splineseries_selected_points_changed(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_selected_points_changed(void* self, void (*callback)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// @param self QSplineSeries*
/// @param lightMarker QImage*
void q_splineseries_light_marker_changed(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QImage* lightMarker)
void q_splineseries_on_light_marker_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// @param self QSplineSeries*
/// @param selectedLightMarker QImage*
void q_splineseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QImage* selectedLightMarker)
void q_splineseries_on_selected_light_marker_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// @param self QSplineSeries*
/// @param visible bool
void q_splineseries_best_fit_line_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, bool visible)
void q_splineseries_on_best_fit_line_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// @param self QSplineSeries*
/// @param pen QPen*
void q_splineseries_best_fit_line_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPen* pen)
void q_splineseries_on_best_fit_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_best_fit_line_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QColor* color)
void q_splineseries_on_best_fit_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// @param self QSplineSeries*
/// @param configuration libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */
void q_splineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */)
void q_splineseries_on_points_configuration_changed(void* self, void (*callback)(void*, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// @param self QSplineSeries*
/// @param size double
void q_splineseries_marker_size_changed(void* self, double size);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, double size)
void q_splineseries_on_marker_size_changed(void* self, void (*callback)(void*, double));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// @param self QSplineSeries*
/// @param visible bool
void q_splineseries_set_points_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// @param self QSplineSeries*
/// @param visible bool
void q_splineseries_set_point_labels_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// @param self QSplineSeries*
/// @param enabled bool
void q_splineseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// @param self QSplineSeries*
/// @param visible bool
void q_splineseries_set_best_fit_line_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// @param self QSplineSeries*
/// @param sourceData libqt_list /* of double */
/// @param gradient QLinearGradient*
void q_splineseries_color_by2(void* self, libqt_list sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QSplineSeries*
/// @param name const char*
void q_splineseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSplineSeries*
const char* q_splineseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QSplineSeries*
void q_splineseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QSplineSeries*
bool q_splineseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QSplineSeries*
double q_splineseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QSplineSeries*
/// @param opacity double
void q_splineseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QSplineSeries*
void q_splineseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QSplineSeries*
bool q_splineseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QSplineSeries*
QChart* q_splineseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QSplineSeries*
/// @param axis QAbstractAxis*
bool q_splineseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QSplineSeries*
/// @param axis QAbstractAxis*
bool q_splineseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QSplineSeries*
libqt_list /* of QAbstractAxis* */ q_splineseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QSplineSeries*
void q_splineseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QSplineSeries*
void q_splineseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QSplineSeries*
void q_splineseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QSplineSeries*
void q_splineseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QSplineSeries*
void q_splineseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QSplineSeries*
void q_splineseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QSplineSeries*
/// @param visible bool
void q_splineseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QSplineSeries*
/// @param enable bool
void q_splineseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSplineSeries*
const char* q_splineseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSplineSeries*
/// @param name char*
void q_splineseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSplineSeries*
bool q_splineseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSplineSeries*
bool q_splineseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSplineSeries*
bool q_splineseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSplineSeries*
bool q_splineseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSplineSeries*
/// @param b bool
bool q_splineseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSplineSeries*
QThread* q_splineseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSplineSeries*
/// @param thread QThread*
bool q_splineseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplineSeries*
/// @param interval int
int32_t q_splineseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSplineSeries*
/// @param id int
void q_splineseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSplineSeries*
/// @param id enum Qt__TimerId
void q_splineseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSplineSeries*
libqt_list /* of QObject* */ q_splineseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSplineSeries*
/// @param parent QObject*
void q_splineseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSplineSeries*
/// @param filterObj QObject*
void q_splineseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSplineSeries*
/// @param obj QObject*
void q_splineseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_splineseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSplineSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_splineseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_splineseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_splineseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSplineSeries*
void q_splineseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSplineSeries*
void q_splineseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSplineSeries*
/// @param name const char*
/// @param value QVariant*
bool q_splineseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSplineSeries*
/// @param name const char*
QVariant* q_splineseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSplineSeries*
const char** q_splineseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSplineSeries*
QBindingStorage* q_splineseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSplineSeries*
const QBindingStorage* q_splineseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplineSeries*
void q_splineseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self)
void q_splineseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSplineSeries*
QObject* q_splineseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSplineSeries*
/// @param classname const char*
bool q_splineseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSplineSeries*
void q_splineseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSplineSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_splineseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSplineSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_splineseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_splineseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSplineSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_splineseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplineSeries*
/// @param param1 QObject*
void q_splineseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QObject* param1)
void q_splineseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param pen QPen*
void q_splineseries_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param pen QPen*
void q_splineseries_qbase_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QPen* pen)
void q_splineseries_on_set_pen(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param brush QBrush*
void q_splineseries_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param brush QBrush*
void q_splineseries_qbase_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QBrush* brush)
void q_splineseries_on_set_brush(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param color QColor*
void q_splineseries_qbase_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QColor* color)
void q_splineseries_on_set_color(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
QColor* q_splineseries_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
QColor* q_splineseries_qbase_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback QColor* func()
void q_splineseries_on_color(void* self, QColor* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QEvent*
bool q_splineseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QEvent*
bool q_splineseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback bool func(QSplineSeries* self, QEvent* event)
void q_splineseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_splineseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_splineseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback bool func(QSplineSeries* self, QObject* watched, QEvent* event)
void q_splineseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QTimerEvent*
void q_splineseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QTimerEvent*
void q_splineseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QTimerEvent* event)
void q_splineseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QChildEvent*
void q_splineseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QChildEvent*
void q_splineseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QChildEvent* event)
void q_splineseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QEvent*
void q_splineseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param event QEvent*
void q_splineseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QEvent* event)
void q_splineseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal QMetaMethod*
void q_splineseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal QMetaMethod*
void q_splineseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QMetaMethod* signal)
void q_splineseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal QMetaMethod*
void q_splineseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal QMetaMethod*
void q_splineseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, QMetaMethod* signal)
void q_splineseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
QObject* q_splineseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
QObject* q_splineseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback QObject* func()
void q_splineseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
int32_t q_splineseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
int32_t q_splineseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback int32_t func()
void q_splineseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal const char*
int32_t q_splineseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal const char*
int32_t q_splineseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback int32_t func(QSplineSeries* self, const char* signal)
void q_splineseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal QMetaMethod*
bool q_splineseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param signal QMetaMethod*
bool q_splineseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSplineSeries*
/// @param callback bool func(QSplineSeries* self, QMetaMethod* signal)
void q_splineseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSplineSeries*
/// @param callback void func(QSplineSeries* self, const char* objectName)
void q_splineseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#dtor.QSplineSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QSplineSeries*
void q_splineseries_delete(void* self);

#endif
