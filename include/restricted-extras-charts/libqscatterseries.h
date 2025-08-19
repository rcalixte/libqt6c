#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSCATTERSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSCATTERSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qscatterseries-qtcharts.html

/// q_scatterseries_new constructs a new QScatterSeries object.
///
QScatterSeries* q_scatterseries_new();

/// q_scatterseries_new2 constructs a new QScatterSeries object.
///
/// @param parent QObject*
QScatterSeries* q_scatterseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QScatterSeries*
const QMetaObject* q_scatterseries_meta_object(void* self);

/// @param self QScatterSeries*
/// @param param1 const char*
void* q_scatterseries_metacast(void* self, const char* param1);

/// @param self QScatterSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scatterseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QScatterSeries*
/// @param callback int32_t fn(QScatterSeries*, enum QMetaObject__Call, int, void*)
void q_scatterseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QScatterSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scatterseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_scatterseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#type)
///
/// @param self QScatterSeries*
///
/// @return enum QAbstractSeries__SeriesType
int32_t q_scatterseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QScatterSeries*
/// @param callback int32_t fn()
void q_scatterseries_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QScatterSeries*
///
/// @return enum QAbstractSeries__SeriesType
int32_t q_scatterseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setPen)
///
/// @param self QScatterSeries*
/// @param pen QPen*
void q_scatterseries_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setPen)
///
/// Allows for overriding the related default method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPen*)
void q_scatterseries_on_set_pen(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setPen)
///
/// Base class method implementation
///
/// @param self QScatterSeries*
/// @param pen QPen*
void q_scatterseries_qbase_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBrush)
///
/// @param self QScatterSeries*
/// @param brush QBrush*
void q_scatterseries_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBrush)
///
/// Allows for overriding the related default method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QBrush*)
void q_scatterseries_on_set_brush(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBrush)
///
/// Base class method implementation
///
/// @param self QScatterSeries*
/// @param brush QBrush*
void q_scatterseries_qbase_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#brush)
///
/// @param self QScatterSeries*
QBrush* q_scatterseries_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setColor)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setColor)
///
/// Allows for overriding the related default method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QColor*)
void q_scatterseries_on_set_color(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setColor)
///
/// Base class method implementation
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_qbase_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#color)
///
/// @param self QScatterSeries*
QColor* q_scatterseries_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#color)
///
/// Allows for overriding the related default method
///
/// @param self QScatterSeries*
/// @param callback QColor* fn()
void q_scatterseries_on_color(void* self, QColor* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#color)
///
/// Base class method implementation
///
/// @param self QScatterSeries*
QColor* q_scatterseries_qbase_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBorderColor)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#borderColor)
///
/// @param self QScatterSeries*
QColor* q_scatterseries_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerShape)
///
/// @param self QScatterSeries*
///
/// @return enum QScatterSeries__MarkerShape
int32_t q_scatterseries_marker_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setMarkerShape)
///
/// @param self QScatterSeries*
/// @param shape enum QScatterSeries__MarkerShape
void q_scatterseries_set_marker_shape(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerSize)
///
/// @param self QScatterSeries*
double q_scatterseries_marker_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setMarkerSize)
///
/// @param self QScatterSeries*
/// @param size double
void q_scatterseries_set_marker_size(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#colorChanged)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#colorChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QColor*)
void q_scatterseries_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#borderColorChanged)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_border_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#borderColorChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QColor*)
void q_scatterseries_on_border_color_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerShapeChanged)
///
/// @param self QScatterSeries*
/// @param shape enum QScatterSeries__MarkerShape
void q_scatterseries_marker_shape_changed(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerShapeChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, enum QScatterSeries__MarkerShape)
void q_scatterseries_on_marker_shape_changed(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerSizeChanged)
///
/// @param self QScatterSeries*
/// @param size double
void q_scatterseries_marker_size_changed(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerSizeChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, double)
void q_scatterseries_on_marker_size_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_scatterseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_scatterseries_tr3(const char* s, const char* c, int n);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QScatterSeries*
/// @param x double
/// @param y double
void q_scatterseries_append(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QScatterSeries*
/// @param point QPointF*
void q_scatterseries_append2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// @param self QScatterSeries*
/// @param points libqt_list /* of QPointF* */
void q_scatterseries_append3(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QScatterSeries*
/// @param oldX double
/// @param oldY double
/// @param newX double
/// @param newY double
void q_scatterseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QScatterSeries*
/// @param oldPoint QPointF*
/// @param newPoint QPointF*
void q_scatterseries_replace2(void* self, void* oldPoint, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QScatterSeries*
/// @param index int
/// @param newX double
/// @param newY double
void q_scatterseries_replace3(void* self, int index, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QScatterSeries*
/// @param index int
/// @param newPoint QPointF*
void q_scatterseries_replace4(void* self, int index, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QScatterSeries*
/// @param x double
/// @param y double
void q_scatterseries_remove(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QScatterSeries*
/// @param point QPointF*
void q_scatterseries_remove2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_remove3(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// @param self QScatterSeries*
/// @param index int
/// @param count int
void q_scatterseries_remove_points(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// @param self QScatterSeries*
/// @param index int
/// @param point QPointF*
void q_scatterseries_insert(void* self, int index, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// @param self QScatterSeries*
void q_scatterseries_clear(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// @param self QScatterSeries*
int32_t q_scatterseries_count(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// @param self QScatterSeries*
libqt_list /* of QPointF* */ q_scatterseries_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// @param self QScatterSeries*
libqt_list /* of QPointF* */ q_scatterseries_points_vector(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// @param self QScatterSeries*
/// @param index int
const QPointF* q_scatterseries_at(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// @param self QScatterSeries*
/// @param point QPointF*
QXYSeries* q_scatterseries_operator_shift_left(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// @param self QScatterSeries*
/// @param points libqt_list /* of QPointF* */
QXYSeries* q_scatterseries_operator_shift_left2(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// @param self QScatterSeries*
QPen* q_scatterseries_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_set_selected_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// @param self QScatterSeries*
QColor* q_scatterseries_selected_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// @param self QScatterSeries*
void q_scatterseries_set_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// @param self QScatterSeries*
bool q_scatterseries_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// @param self QScatterSeries*
/// @param format const char*
void q_scatterseries_set_point_labels_format(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QScatterSeries*
const char* q_scatterseries_point_labels_format(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// @param self QScatterSeries*
void q_scatterseries_set_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// @param self QScatterSeries*
bool q_scatterseries_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// @param self QScatterSeries*
/// @param font QFont*
void q_scatterseries_set_point_labels_font(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// @param self QScatterSeries*
QFont* q_scatterseries_point_labels_font(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_set_point_labels_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// @param self QScatterSeries*
QColor* q_scatterseries_point_labels_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// @param self QScatterSeries*
void q_scatterseries_set_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// @param self QScatterSeries*
bool q_scatterseries_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// @param self QScatterSeries*
/// @param points libqt_list /* of QPointF* */
void q_scatterseries_replace5(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// @param self QScatterSeries*
/// @param index int
bool q_scatterseries_is_point_selected(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_select_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_deselect_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// @param self QScatterSeries*
/// @param index int
/// @param selected bool
void q_scatterseries_set_point_selected(void* self, int index, bool selected);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// @param self QScatterSeries*
void q_scatterseries_select_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// @param self QScatterSeries*
void q_scatterseries_deselect_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// @param self QScatterSeries*
/// @param indexes libqt_list /* of int */
void q_scatterseries_select_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// @param self QScatterSeries*
/// @param indexes libqt_list /* of int */
void q_scatterseries_deselect_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// @param self QScatterSeries*
/// @param indexes libqt_list /* of int */
void q_scatterseries_toggle_selection(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// @param self QScatterSeries*
libqt_list /* of int */ q_scatterseries_selected_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// @param self QScatterSeries*
/// @param lightMarker QImage*
void q_scatterseries_set_light_marker(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// @param self QScatterSeries*
const QImage* q_scatterseries_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// @param self QScatterSeries*
/// @param selectedLightMarker QImage*
void q_scatterseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// @param self QScatterSeries*
const QImage* q_scatterseries_selected_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// @param self QScatterSeries*
void q_scatterseries_set_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// @param self QScatterSeries*
bool q_scatterseries_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// @param self QScatterSeries*
/// @param ok bool*
libqt_pair /* tuple of double and double */ q_scatterseries_best_fit_line_equation(void* self, bool* ok);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// @param self QScatterSeries*
/// @param pen QPen*
void q_scatterseries_set_best_fit_line_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// @param self QScatterSeries*
QPen* q_scatterseries_best_fit_line_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_set_best_fit_line_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// @param self QScatterSeries*
QColor* q_scatterseries_best_fit_line_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_clear_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// @param self QScatterSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
void q_scatterseries_clear_point_configuration2(void* self, int index, int32_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// @param self QScatterSeries*
void q_scatterseries_clear_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// @param self QScatterSeries*
/// @param key enum QXYSeries__PointConfiguration
void q_scatterseries_clear_points_configuration2(void* self, int32_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// @param self QScatterSeries*
/// @param index int
/// @param configuration libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */
void q_scatterseries_set_point_configuration(void* self, int index, libqt_map /* of int32_t to QVariant* */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// @param self QScatterSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
/// @param value QVariant*
void q_scatterseries_set_point_configuration2(void* self, int index, int32_t key, void* value);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// @param self QScatterSeries*
/// @param pointsConfiguration libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */
void q_scatterseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ pointsConfiguration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// @param self QScatterSeries*
/// @param index int
libqt_map /* of int32_t to QVariant* */ q_scatterseries_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// @param self QScatterSeries*
libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ q_scatterseries_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// @param self QScatterSeries*
/// @param sourceData libqt_list /* of double */
/// @param minSize double
/// @param maxSize double
void q_scatterseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// @param self QScatterSeries*
/// @param sourceData libqt_list /* of double */
void q_scatterseries_color_by(void* self, libqt_list sourceData);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// @param self QScatterSeries*
/// @param point QPointF*
void q_scatterseries_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPointF*)
void q_scatterseries_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// @param self QScatterSeries*
/// @param point QPointF*
/// @param state bool
void q_scatterseries_hovered(void* self, void* point, bool state);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPointF*, bool)
void q_scatterseries_on_hovered(void* self, void (*callback)(void*, void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// @param self QScatterSeries*
/// @param point QPointF*
void q_scatterseries_pressed(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPointF*)
void q_scatterseries_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// @param self QScatterSeries*
/// @param point QPointF*
void q_scatterseries_released(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPointF*)
void q_scatterseries_on_released(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// @param self QScatterSeries*
/// @param point QPointF*
void q_scatterseries_double_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPointF*)
void q_scatterseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_point_replaced(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, int)
void q_scatterseries_on_point_replaced(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_point_removed(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, int)
void q_scatterseries_on_point_removed(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// @param self QScatterSeries*
/// @param index int
void q_scatterseries_point_added(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, int)
void q_scatterseries_on_point_added(void* self, void (*callback)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_selected_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QColor*)
void q_scatterseries_on_selected_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// @param self QScatterSeries*
void q_scatterseries_points_replaced(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_points_replaced(void* self, void (*callback)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// @param self QScatterSeries*
/// @param format const char*
void q_scatterseries_point_labels_format_changed(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, const char*)
void q_scatterseries_on_point_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// @param self QScatterSeries*
/// @param visible bool
void q_scatterseries_point_labels_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, bool)
void q_scatterseries_on_point_labels_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// @param self QScatterSeries*
/// @param font QFont*
void q_scatterseries_point_labels_font_changed(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QFont*)
void q_scatterseries_on_point_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_point_labels_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QColor*)
void q_scatterseries_on_point_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// @param self QScatterSeries*
/// @param clipping bool
void q_scatterseries_point_labels_clipping_changed(void* self, bool clipping);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, bool)
void q_scatterseries_on_point_labels_clipping_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// @param self QScatterSeries*
/// @param index int
/// @param count int
void q_scatterseries_points_removed(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, int, int)
void q_scatterseries_on_points_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// @param self QScatterSeries*
/// @param pen QPen*
void q_scatterseries_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPen*)
void q_scatterseries_on_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// @param self QScatterSeries*
void q_scatterseries_selected_points_changed(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_selected_points_changed(void* self, void (*callback)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// @param self QScatterSeries*
/// @param lightMarker QImage*
void q_scatterseries_light_marker_changed(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QImage*)
void q_scatterseries_on_light_marker_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// @param self QScatterSeries*
/// @param selectedLightMarker QImage*
void q_scatterseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QImage*)
void q_scatterseries_on_selected_light_marker_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// @param self QScatterSeries*
/// @param visible bool
void q_scatterseries_best_fit_line_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, bool)
void q_scatterseries_on_best_fit_line_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// @param self QScatterSeries*
/// @param pen QPen*
void q_scatterseries_best_fit_line_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QPen*)
void q_scatterseries_on_best_fit_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// @param self QScatterSeries*
/// @param color QColor*
void q_scatterseries_best_fit_line_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QColor*)
void q_scatterseries_on_best_fit_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// @param self QScatterSeries*
/// @param configuration libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */
void q_scatterseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */)
void q_scatterseries_on_points_configuration_changed(void* self, void (*callback)(void*, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// @param self QScatterSeries*
/// @param visible bool
void q_scatterseries_set_points_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// @param self QScatterSeries*
/// @param visible bool
void q_scatterseries_set_point_labels_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// @param self QScatterSeries*
/// @param enabled bool
void q_scatterseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// @param self QScatterSeries*
/// @param visible bool
void q_scatterseries_set_best_fit_line_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// @param self QScatterSeries*
/// @param sourceData libqt_list /* of double */
/// @param gradient QLinearGradient*
void q_scatterseries_color_by2(void* self, libqt_list sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QScatterSeries*
/// @param name const char*
void q_scatterseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QScatterSeries*
const char* q_scatterseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QScatterSeries*
void q_scatterseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QScatterSeries*
bool q_scatterseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QScatterSeries*
double q_scatterseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QScatterSeries*
/// @param opacity double
void q_scatterseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QScatterSeries*
void q_scatterseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QScatterSeries*
bool q_scatterseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QScatterSeries*
QChart* q_scatterseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QScatterSeries*
/// @param axis QAbstractAxis*
bool q_scatterseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QScatterSeries*
/// @param axis QAbstractAxis*
bool q_scatterseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QScatterSeries*
libqt_list /* of QAbstractAxis* */ q_scatterseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QScatterSeries*
void q_scatterseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QScatterSeries*
void q_scatterseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QScatterSeries*
void q_scatterseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QScatterSeries*
void q_scatterseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QScatterSeries*
void q_scatterseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QScatterSeries*
void q_scatterseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QScatterSeries*
/// @param visible bool
void q_scatterseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QScatterSeries*
/// @param enable bool
void q_scatterseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QScatterSeries*
const char* q_scatterseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QScatterSeries*
/// @param name char*
void q_scatterseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QScatterSeries*
bool q_scatterseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QScatterSeries*
bool q_scatterseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QScatterSeries*
bool q_scatterseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QScatterSeries*
bool q_scatterseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QScatterSeries*
/// @param b bool
bool q_scatterseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QScatterSeries*
QThread* q_scatterseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScatterSeries*
/// @param thread QThread*
bool q_scatterseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatterSeries*
/// @param interval int
int32_t q_scatterseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScatterSeries*
/// @param id int
void q_scatterseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScatterSeries*
/// @param id enum Qt__TimerId
void q_scatterseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QScatterSeries*
libqt_list /* of QObject* */ q_scatterseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QScatterSeries*
/// @param parent QObject*
void q_scatterseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QScatterSeries*
/// @param filterObj QObject*
void q_scatterseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QScatterSeries*
/// @param obj QObject*
void q_scatterseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_scatterseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QScatterSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_scatterseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_scatterseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_scatterseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QScatterSeries*
void q_scatterseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QScatterSeries*
void q_scatterseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QScatterSeries*
/// @param name const char*
/// @param value QVariant*
bool q_scatterseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QScatterSeries*
/// @param name const char*
QVariant* q_scatterseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QScatterSeries*
const char** q_scatterseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScatterSeries*
QBindingStorage* q_scatterseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScatterSeries*
const QBindingStorage* q_scatterseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterSeries*
void q_scatterseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*)
void q_scatterseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QScatterSeries*
QObject* q_scatterseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QScatterSeries*
/// @param classname const char*
bool q_scatterseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QScatterSeries*
void q_scatterseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScatterSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_scatterseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatterSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_scatterseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_scatterseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QScatterSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_scatterseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterSeries*
/// @param param1 QObject*
void q_scatterseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QObject*)
void q_scatterseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QEvent*
bool q_scatterseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QEvent*
bool q_scatterseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback bool fn(QScatterSeries*, QEvent*)
void q_scatterseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_scatterseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_scatterseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback bool fn(QScatterSeries*, QObject*, QEvent*)
void q_scatterseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QTimerEvent*
void q_scatterseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QTimerEvent*
void q_scatterseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QTimerEvent*)
void q_scatterseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QChildEvent*
void q_scatterseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QChildEvent*
void q_scatterseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QChildEvent*)
void q_scatterseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QEvent*
void q_scatterseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param event QEvent*
void q_scatterseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QEvent*)
void q_scatterseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal QMetaMethod*
void q_scatterseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal QMetaMethod*
void q_scatterseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QMetaMethod*)
void q_scatterseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal QMetaMethod*
void q_scatterseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal QMetaMethod*
void q_scatterseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, QMetaMethod*)
void q_scatterseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
QObject* q_scatterseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
QObject* q_scatterseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback QObject* fn()
void q_scatterseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
int32_t q_scatterseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
int32_t q_scatterseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback int32_t fn()
void q_scatterseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal const char*
int32_t q_scatterseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal const char*
int32_t q_scatterseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback int32_t fn(QScatterSeries*, const char*)
void q_scatterseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal QMetaMethod*
bool q_scatterseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param signal QMetaMethod*
bool q_scatterseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatterSeries*
/// @param callback bool fn(QScatterSeries*, QMetaMethod*)
void q_scatterseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QScatterSeries*
/// @param callback void fn(QScatterSeries*, const char*)
void q_scatterseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#dtor.QScatterSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QScatterSeries*
void q_scatterseries_delete(void* self);

/// https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#types

typedef enum {
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPECIRCLE = 0,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPERECTANGLE = 1,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPEROTATEDRECTANGLE = 2,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPETRIANGLE = 3,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPESTAR = 4,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPEPENTAGON = 5
} QScatterSeries__MarkerShape;

#endif
