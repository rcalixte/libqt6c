#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQXYSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQXYSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

struct pair_double_double;

typedef struct pair_double_double pair_double_double;

#ifndef PAIR_DOUBLE_DOUBLE
#define PAIR_DOUBLE_DOUBLE
struct pair_double_double {
    double first;
    double second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QXYSeries*
///
const QMetaObject* q_xyseries_meta_object(void* self);

/// @param self QXYSeries*
/// @param param1 const char*
///
void* q_xyseries_metacast(void* self, const char* param1);

/// @param self QXYSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_xyseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_xyseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
///
/// @param self QXYSeries*
/// @param x double
/// @param y double
///
void q_xyseries_append(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
void q_xyseries_append2(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
///
/// @param self QXYSeries*
/// @param points libqt_list of QPointF*
///
void q_xyseries_append3(void* self, libqt_list /* of QPointF* */ points);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// @param self QXYSeries*
/// @param oldX double
/// @param oldY double
/// @param newX double
/// @param newY double
///
void q_xyseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// @param self QXYSeries*
/// @param oldPoint QPointF*
/// @param newPoint QPointF*
///
void q_xyseries_replace2(void* self, void* oldPoint, void* newPoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// @param self QXYSeries*
/// @param index int
/// @param newX double
/// @param newY double
///
void q_xyseries_replace3(void* self, int index, double newX, double newY);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// @param self QXYSeries*
/// @param index int
/// @param newPoint QPointF*
///
void q_xyseries_replace4(void* self, int index, void* newPoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
///
/// @param self QXYSeries*
/// @param x double
/// @param y double
///
void q_xyseries_remove(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
void q_xyseries_remove2(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_remove3(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#removePoints)
///
/// @param self QXYSeries*
/// @param index int
/// @param count int
///
void q_xyseries_remove_points(void* self, int index, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#insert)
///
/// @param self QXYSeries*
/// @param index int
/// @param point QPointF*
///
void q_xyseries_insert(void* self, int index, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clear)
///
/// @param self QXYSeries*
///
void q_xyseries_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#count)
///
/// @param self QXYSeries*
///
int32_t q_xyseries_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#points)
///
/// @param self QXYSeries*
///
/// @return libqt_list of QPointF*
///
libqt_list q_xyseries_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVector)
///
/// @param self QXYSeries*
///
/// @return libqt_list of QPointF*
///
libqt_list q_xyseries_points_vector(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#at)
///
/// @param self QXYSeries*
/// @param index int
///
const QPointF* q_xyseries_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
QXYSeries* q_xyseries_operator_shift_left(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
///
/// @param self QXYSeries*
/// @param points libqt_list of QPointF*
///
QXYSeries* q_xyseries_operator_shift_left2(void* self, libqt_list /* of QPointF* */ points);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPen)
///
/// @param self QXYSeries*
/// @param pen QPen*
///
void q_xyseries_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pen)
///
/// @param self QXYSeries*
///
QPen* q_xyseries_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBrush)
///
/// @param self QXYSeries*
/// @param brush QBrush*
///
void q_xyseries_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#brush)
///
/// @param self QXYSeries*
///
QBrush* q_xyseries_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setColor)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#color)
///
/// @param self QXYSeries*
///
QColor* q_xyseries_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedColor)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_set_selected_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColor)
///
/// @param self QXYSeries*
///
QColor* q_xyseries_selected_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
///
/// @param self QXYSeries*
///
void q_xyseries_set_points_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVisible)
///
/// @param self QXYSeries*
///
bool q_xyseries_points_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFormat)
///
/// @param self QXYSeries*
/// @param format const char*
///
void q_xyseries_set_point_labels_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXYSeries*
///
const char* q_xyseries_point_labels_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
///
/// @param self QXYSeries*
///
void q_xyseries_set_point_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisible)
///
/// @param self QXYSeries*
///
bool q_xyseries_point_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFont)
///
/// @param self QXYSeries*
/// @param font QFont*
///
void q_xyseries_set_point_labels_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFont)
///
/// @param self QXYSeries*
///
QFont* q_xyseries_point_labels_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsColor)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_set_point_labels_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColor)
///
/// @param self QXYSeries*
///
QColor* q_xyseries_point_labels_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
///
/// @param self QXYSeries*
///
void q_xyseries_set_point_labels_clipping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClipping)
///
/// @param self QXYSeries*
///
bool q_xyseries_point_labels_clipping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// @param self QXYSeries*
/// @param points libqt_list of QPointF*
///
void q_xyseries_replace5(void* self, libqt_list /* of QPointF* */ points);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#isPointSelected)
///
/// @param self QXYSeries*
/// @param index int
///
bool q_xyseries_is_point_selected(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoint)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_select_point(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoint)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_deselect_point(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointSelected)
///
/// @param self QXYSeries*
/// @param index int
/// @param selected bool
///
void q_xyseries_set_point_selected(void* self, int index, bool selected);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectAllPoints)
///
/// @param self QXYSeries*
///
void q_xyseries_select_all_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectAllPoints)
///
/// @param self QXYSeries*
///
void q_xyseries_deselect_all_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoints)
///
/// @param self QXYSeries*
/// @param indexes libqt_list of int
///
void q_xyseries_select_points(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoints)
///
/// @param self QXYSeries*
/// @param indexes libqt_list of int
///
void q_xyseries_deselect_points(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#toggleSelection)
///
/// @param self QXYSeries*
/// @param indexes libqt_list of int
///
void q_xyseries_toggle_selection(void* self, libqt_list /* of int */ indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPoints)
///
/// @param self QXYSeries*
///
/// @return libqt_list of int
///
libqt_list q_xyseries_selected_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setLightMarker)
///
/// @param self QXYSeries*
/// @param lightMarker QImage*
///
void q_xyseries_set_light_marker(void* self, void* lightMarker);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarker)
///
/// @param self QXYSeries*
///
const QImage* q_xyseries_light_marker(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedLightMarker)
///
/// @param self QXYSeries*
/// @param selectedLightMarker QImage*
///
void q_xyseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarker)
///
/// @param self QXYSeries*
///
const QImage* q_xyseries_selected_light_marker(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setMarkerSize)
///
/// @param self QXYSeries*
/// @param size double
///
void q_xyseries_set_marker_size(void* self, double size);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSize)
///
/// @param self QXYSeries*
///
double q_xyseries_marker_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
///
/// @param self QXYSeries*
///
void q_xyseries_set_best_fit_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisible)
///
/// @param self QXYSeries*
///
bool q_xyseries_best_fit_line_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineEquation)
///
/// @param self QXYSeries*
/// @param ok bool*
///
/// @return pair_double_double tuple of double and double
///
pair_double_double q_xyseries_best_fit_line_equation(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLinePen)
///
/// @param self QXYSeries*
/// @param pen QPen*
///
void q_xyseries_set_best_fit_line_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePen)
///
/// @param self QXYSeries*
///
QPen* q_xyseries_best_fit_line_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineColor)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_set_best_fit_line_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColor)
///
/// @param self QXYSeries*
///
QColor* q_xyseries_best_fit_line_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_clear_point_configuration(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
///
/// @param self QXYSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
///
void q_xyseries_clear_point_configuration2(void* self, int index, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
///
/// @param self QXYSeries*
///
void q_xyseries_clear_points_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
///
/// @param self QXYSeries*
/// @param key enum QXYSeries__PointConfiguration
///
void q_xyseries_clear_points_configuration2(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
///
/// @param self QXYSeries*
/// @param index int
/// @param configuration libqt_map of enum QXYSeries__PointConfiguration to QVariant*
///
void q_xyseries_set_point_configuration(void* self, int index, libqt_map configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
///
/// @param self QXYSeries*
/// @param index int
/// @param key enum QXYSeries__PointConfiguration
/// @param value QVariant*
///
void q_xyseries_set_point_configuration2(void* self, int index, int32_t key, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsConfiguration)
///
/// @param self QXYSeries*
/// @param pointsConfiguration libqt_map of int to libqt_map of enum QXYSeries__PointConfiguration to QVariant*
///
void q_xyseries_set_points_configuration(void* self, libqt_map pointsConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointConfiguration)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum QXYSeries__PointConfiguration to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QXYSeries*
/// @param index int
///
/// @return libqt_map of enum QXYSeries__PointConfiguration to QVariant*
///
libqt_map q_xyseries_point_configuration(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfiguration)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to libqt_map of enum QXYSeries__PointConfiguration to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((libqt_map*)map.values)[i].keys);
///     free(((libqt_map*)map.values)[i].values);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QXYSeries*
///
/// @return libqt_map of int to libqt_map of enum QXYSeries__PointConfiguration to QVariant*
///
libqt_map q_xyseries_points_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#sizeBy)
///
/// @param self QXYSeries*
/// @param sourceData libqt_list of double
/// @param minSize double
/// @param maxSize double
///
void q_xyseries_size_by(void* self, libqt_list /* of double */ sourceData, double minSize, double maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
///
/// @param self QXYSeries*
/// @param sourceData libqt_list of double
///
void q_xyseries_color_by(void* self, libqt_list /* of double */ sourceData);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
void q_xyseries_clicked(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPointF* point)
///
void q_xyseries_on_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
///
/// @param self QXYSeries*
/// @param point QPointF*
/// @param state bool
///
void q_xyseries_hovered(void* self, void* point, bool state);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPointF* point, bool state)
///
void q_xyseries_on_hovered(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
void q_xyseries_pressed(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPointF* point)
///
void q_xyseries_on_pressed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
void q_xyseries_released(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPointF* point)
///
void q_xyseries_on_released(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
///
/// @param self QXYSeries*
/// @param point QPointF*
///
void q_xyseries_double_clicked(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPointF* point)
///
void q_xyseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_point_replaced(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, int index)
///
void q_xyseries_on_point_replaced(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_point_removed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, int index)
///
void q_xyseries_on_point_removed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
///
/// @param self QXYSeries*
/// @param index int
///
void q_xyseries_point_added(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, int index)
///
void q_xyseries_on_point_added(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QColor* color)
///
void q_xyseries_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_selected_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QColor* color)
///
void q_xyseries_on_selected_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
///
/// @param self QXYSeries*
///
void q_xyseries_points_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_points_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
///
/// @param self QXYSeries*
/// @param format const char*
///
void q_xyseries_point_labels_format_changed(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, const char* format)
///
void q_xyseries_on_point_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// @param self QXYSeries*
/// @param visible bool
///
void q_xyseries_point_labels_visibility_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, bool visible)
///
void q_xyseries_on_point_labels_visibility_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
///
/// @param self QXYSeries*
/// @param font QFont*
///
void q_xyseries_point_labels_font_changed(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QFont* font)
///
void q_xyseries_on_point_labels_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_point_labels_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QColor* color)
///
void q_xyseries_on_point_labels_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
///
/// @param self QXYSeries*
/// @param clipping bool
///
void q_xyseries_point_labels_clipping_changed(void* self, bool clipping);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, bool clipping)
///
void q_xyseries_on_point_labels_clipping_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
///
/// @param self QXYSeries*
/// @param index int
/// @param count int
///
void q_xyseries_points_removed(void* self, int index, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, int index, int count)
///
void q_xyseries_on_points_removed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
///
/// @param self QXYSeries*
/// @param pen QPen*
///
void q_xyseries_pen_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPen* pen)
///
void q_xyseries_on_pen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
///
/// @param self QXYSeries*
///
void q_xyseries_selected_points_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_selected_points_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
///
/// @param self QXYSeries*
/// @param lightMarker QImage*
///
void q_xyseries_light_marker_changed(void* self, void* lightMarker);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QImage* lightMarker)
///
void q_xyseries_on_light_marker_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
///
/// @param self QXYSeries*
/// @param selectedLightMarker QImage*
///
void q_xyseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QImage* selectedLightMarker)
///
void q_xyseries_on_selected_light_marker_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
///
/// @param self QXYSeries*
/// @param visible bool
///
void q_xyseries_best_fit_line_visibility_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, bool visible)
///
void q_xyseries_on_best_fit_line_visibility_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
///
/// @param self QXYSeries*
/// @param pen QPen*
///
void q_xyseries_best_fit_line_pen_changed(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QPen* pen)
///
void q_xyseries_on_best_fit_line_pen_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
///
/// @param self QXYSeries*
/// @param color QColor*
///
void q_xyseries_best_fit_line_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QColor* color)
///
void q_xyseries_on_best_fit_line_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
///
/// @param self QXYSeries*
/// @param configuration libqt_map of int to libqt_map of enum QXYSeries__PointConfiguration to QVariant*
///
void q_xyseries_points_configuration_changed(void* self, libqt_map configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, libqt_map of int to libqt_map of enum QXYSeries__PointConfiguration to QVariant*)
///
void q_xyseries_on_points_configuration_changed(void* self, void (*callback)(void*, libqt_map));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
///
/// @param self QXYSeries*
/// @param size double
///
void q_xyseries_marker_size_changed(void* self, double size);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, double size)
///
void q_xyseries_on_marker_size_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_xyseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_xyseries_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
///
/// @param self QXYSeries*
/// @param visible bool
///
void q_xyseries_set_points_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
///
/// @param self QXYSeries*
/// @param visible bool
///
void q_xyseries_set_point_labels_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
///
/// @param self QXYSeries*
/// @param enabled bool
///
void q_xyseries_set_point_labels_clipping1(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
///
/// @param self QXYSeries*
/// @param visible bool
///
void q_xyseries_set_best_fit_line_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
///
/// @param self QXYSeries*
/// @param sourceData libqt_list of double
/// @param gradient QLinearGradient*
///
void q_xyseries_color_by2(void* self, libqt_list /* of double */ sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#type)
///
/// @param self QXYSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_xyseries_type(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QXYSeries*
/// @param name const char*
///
void q_xyseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXYSeries*
///
const char* q_xyseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QXYSeries*
///
void q_xyseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QXYSeries*
///
bool q_xyseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QXYSeries*
///
double q_xyseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QXYSeries*
/// @param opacity double
///
void q_xyseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QXYSeries*
///
void q_xyseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QXYSeries*
///
bool q_xyseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QXYSeries*
///
QChart* q_xyseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QXYSeries*
/// @param axis QAbstractAxis*
///
bool q_xyseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QXYSeries*
/// @param axis QAbstractAxis*
///
bool q_xyseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QXYSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_xyseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QXYSeries*
///
void q_xyseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QXYSeries*
///
void q_xyseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QXYSeries*
///
void q_xyseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QXYSeries*
///
void q_xyseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QXYSeries*
///
void q_xyseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QXYSeries*
///
void q_xyseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QXYSeries*
/// @param visible bool
///
void q_xyseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QXYSeries*
/// @param enable bool
///
void q_xyseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QXYSeries*
/// @param event QEvent*
///
bool q_xyseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QXYSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_xyseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QXYSeries*
///
const char* q_xyseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QXYSeries*
/// @param name char*
///
void q_xyseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QXYSeries*
///
bool q_xyseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QXYSeries*
///
bool q_xyseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QXYSeries*
///
bool q_xyseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QXYSeries*
///
bool q_xyseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QXYSeries*
/// @param b bool
///
bool q_xyseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QXYSeries*
///
QThread* q_xyseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QXYSeries*
/// @param thread QThread*
///
bool q_xyseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QXYSeries*
/// @param interval int
///
int32_t q_xyseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QXYSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_xyseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QXYSeries*
/// @param id int
///
void q_xyseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QXYSeries*
/// @param id enum Qt__TimerId
///
void q_xyseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QXYSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_xyseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QXYSeries*
/// @param parent QObject*
///
void q_xyseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QXYSeries*
/// @param filterObj QObject*
///
void q_xyseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QXYSeries*
/// @param obj QObject*
///
void q_xyseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_xyseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QXYSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_xyseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_xyseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_xyseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QXYSeries*
///
void q_xyseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QXYSeries*
///
void q_xyseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QXYSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_xyseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QXYSeries*
/// @param name const char*
///
QVariant* q_xyseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QXYSeries*
///
const char** q_xyseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QXYSeries*
///
QBindingStorage* q_xyseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QXYSeries*
///
const QBindingStorage* q_xyseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QXYSeries*
///
void q_xyseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self)
///
void q_xyseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QXYSeries*
///
QObject* q_xyseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QXYSeries*
/// @param classname const char*
///
bool q_xyseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QXYSeries*
///
void q_xyseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QXYSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_xyseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QXYSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_xyseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QXYSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_xyseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_xyseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QXYSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_xyseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QXYSeries*
/// @param param1 QObject*
///
void q_xyseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, QObject* param1)
///
void q_xyseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QXYSeries*
/// @param callback void func(QXYSeries* self, const char* objectName)
///
void q_xyseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#dtor.QXYSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QXYSeries*
///
void q_xyseries_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#public-types)

typedef enum {
    QXYSERIES_POINTCONFIGURATION_COLOR = 0,
    QXYSERIES_POINTCONFIGURATION_SIZE = 1,
    QXYSERIES_POINTCONFIGURATION_VISIBILITY = 2,
    QXYSERIES_POINTCONFIGURATION_LABELVISIBILITY = 3,
    QXYSERIES_POINTCONFIGURATION_LABELFORMAT = 4
} QXYSeries__PointConfiguration;

#endif
