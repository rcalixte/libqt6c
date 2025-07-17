#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQXYSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQXYSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qxyseries-qtcharts.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QXYSeries* self ```
const QMetaObject* q_xyseries_meta_object(void* self);

/// ``` QXYSeries* self, const char* param1 ```
void* q_xyseries_metacast(void* self, const char* param1);

/// ``` QXYSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_xyseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_xyseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
///
/// ``` QXYSeries* self, double x, double y ```
void q_xyseries_append(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
///
/// ``` QXYSeries* self, QPointF* point ```
void q_xyseries_append2(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#append)
///
/// ``` QXYSeries* self, libqt_list /* of QPointF* */ points ```
void q_xyseries_append3(void* self, libqt_list points);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// ``` QXYSeries* self, double oldX, double oldY, double newX, double newY ```
void q_xyseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// ``` QXYSeries* self, QPointF* oldPoint, QPointF* newPoint ```
void q_xyseries_replace2(void* self, void* oldPoint, void* newPoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// ``` QXYSeries* self, int index, double newX, double newY ```
void q_xyseries_replace3(void* self, int index, double newX, double newY);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// ``` QXYSeries* self, int index, QPointF* newPoint ```
void q_xyseries_replace4(void* self, int index, void* newPoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
///
/// ``` QXYSeries* self, double x, double y ```
void q_xyseries_remove(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
///
/// ``` QXYSeries* self, QPointF* point ```
void q_xyseries_remove2(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#remove)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_remove3(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#removePoints)
///
/// ``` QXYSeries* self, int index, int count ```
void q_xyseries_remove_points(void* self, int index, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#insert)
///
/// ``` QXYSeries* self, int index, QPointF* point ```
void q_xyseries_insert(void* self, int index, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clear)
///
/// ``` QXYSeries* self ```
void q_xyseries_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#count)
///
/// ``` QXYSeries* self ```
int32_t q_xyseries_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#points)
///
/// ``` QXYSeries* self ```
libqt_list /* of QPointF* */ q_xyseries_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVector)
///
/// ``` QXYSeries* self ```
libqt_list /* of QPointF* */ q_xyseries_points_vector(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#at)
///
/// ``` QXYSeries* self, int index ```
const QPointF* q_xyseries_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
///
/// ``` QXYSeries* self, QPointF* point ```
QXYSeries* q_xyseries_operator_shift_left(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#operator-lt-lt)
///
/// ``` QXYSeries* self, libqt_list /* of QPointF* */ points ```
QXYSeries* q_xyseries_operator_shift_left2(void* self, libqt_list points);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPen)
///
/// ``` QXYSeries* self, QPen* pen ```
void q_xyseries_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pen)
///
/// ``` QXYSeries* self ```
QPen* q_xyseries_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBrush)
///
/// ``` QXYSeries* self, QBrush* brush ```
void q_xyseries_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#brush)
///
/// ``` QXYSeries* self ```
QBrush* q_xyseries_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setColor)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#color)
///
/// ``` QXYSeries* self ```
QColor* q_xyseries_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedColor)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_set_selected_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColor)
///
/// ``` QXYSeries* self ```
QColor* q_xyseries_selected_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
///
/// ``` QXYSeries* self ```
void q_xyseries_set_points_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsVisible)
///
/// ``` QXYSeries* self ```
bool q_xyseries_points_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFormat)
///
/// ``` QXYSeries* self, const char* format ```
void q_xyseries_set_point_labels_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormat)
///
/// ``` QXYSeries* self ```
const char* q_xyseries_point_labels_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
///
/// ``` QXYSeries* self ```
void q_xyseries_set_point_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisible)
///
/// ``` QXYSeries* self ```
bool q_xyseries_point_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsFont)
///
/// ``` QXYSeries* self, QFont* font ```
void q_xyseries_set_point_labels_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFont)
///
/// ``` QXYSeries* self ```
QFont* q_xyseries_point_labels_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsColor)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_set_point_labels_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColor)
///
/// ``` QXYSeries* self ```
QColor* q_xyseries_point_labels_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
///
/// ``` QXYSeries* self ```
void q_xyseries_set_point_labels_clipping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClipping)
///
/// ``` QXYSeries* self ```
bool q_xyseries_point_labels_clipping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#replace)
///
/// ``` QXYSeries* self, libqt_list /* of QPointF* */ points ```
void q_xyseries_replace5(void* self, libqt_list points);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#isPointSelected)
///
/// ``` QXYSeries* self, int index ```
bool q_xyseries_is_point_selected(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoint)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_select_point(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoint)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_deselect_point(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointSelected)
///
/// ``` QXYSeries* self, int index, bool selected ```
void q_xyseries_set_point_selected(void* self, int index, bool selected);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectAllPoints)
///
/// ``` QXYSeries* self ```
void q_xyseries_select_all_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectAllPoints)
///
/// ``` QXYSeries* self ```
void q_xyseries_deselect_all_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectPoints)
///
/// ``` QXYSeries* self, libqt_list /* of int */ indexes ```
void q_xyseries_select_points(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#deselectPoints)
///
/// ``` QXYSeries* self, libqt_list /* of int */ indexes ```
void q_xyseries_deselect_points(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#toggleSelection)
///
/// ``` QXYSeries* self, libqt_list /* of int */ indexes ```
void q_xyseries_toggle_selection(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPoints)
///
/// ``` QXYSeries* self ```
libqt_list /* of int */ q_xyseries_selected_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setLightMarker)
///
/// ``` QXYSeries* self, QImage* lightMarker ```
void q_xyseries_set_light_marker(void* self, void* lightMarker);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarker)
///
/// ``` QXYSeries* self ```
const QImage* q_xyseries_light_marker(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setSelectedLightMarker)
///
/// ``` QXYSeries* self, QImage* selectedLightMarker ```
void q_xyseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarker)
///
/// ``` QXYSeries* self ```
const QImage* q_xyseries_selected_light_marker(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setMarkerSize)
///
/// ``` QXYSeries* self, double size ```
void q_xyseries_set_marker_size(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSize)
///
/// ``` QXYSeries* self ```
double q_xyseries_marker_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
///
/// ``` QXYSeries* self ```
void q_xyseries_set_best_fit_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisible)
///
/// ``` QXYSeries* self ```
bool q_xyseries_best_fit_line_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineEquation)
///
/// ``` QXYSeries* self, bool* ok ```
libqt_pair /* tuple of double and double */ q_xyseries_best_fit_line_equation(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLinePen)
///
/// ``` QXYSeries* self, QPen* pen ```
void q_xyseries_set_best_fit_line_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePen)
///
/// ``` QXYSeries* self ```
QPen* q_xyseries_best_fit_line_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineColor)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_set_best_fit_line_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColor)
///
/// ``` QXYSeries* self ```
QColor* q_xyseries_best_fit_line_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_clear_point_configuration(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointConfiguration)
///
/// ``` QXYSeries* self, int index, enum QXYSeries__PointConfiguration key ```
void q_xyseries_clear_point_configuration2(void* self, int index, int64_t key);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
///
/// ``` QXYSeries* self ```
void q_xyseries_clear_points_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clearPointsConfiguration)
///
/// ``` QXYSeries* self, enum QXYSeries__PointConfiguration key ```
void q_xyseries_clear_points_configuration2(void* self, int64_t key);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
///
/// ``` QXYSeries* self, int index, libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */ configuration ```
void q_xyseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointConfiguration)
///
/// ``` QXYSeries* self, int index, enum QXYSeries__PointConfiguration key, QVariant* value ```
void q_xyseries_set_point_configuration2(void* self, int index, int64_t key, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsConfiguration)
///
/// ``` QXYSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ pointsConfiguration ```
void q_xyseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointConfiguration)
///
/// ``` QXYSeries* self, int index ```
libqt_map /* of int64_t to QVariant* */ q_xyseries_point_configuration(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfiguration)
///
/// ``` QXYSeries* self ```
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_xyseries_points_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#sizeBy)
///
/// ``` QXYSeries* self, libqt_list /* of double */ sourceData, double minSize, double maxSize ```
void q_xyseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
///
/// ``` QXYSeries* self, libqt_list /* of double */ sourceData ```
void q_xyseries_color_by(void* self, libqt_list sourceData);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
///
/// ``` QXYSeries* self, QPointF* point ```
void q_xyseries_clicked(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#clicked)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_xyseries_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
///
/// ``` QXYSeries* self, QPointF* point, bool state ```
void q_xyseries_hovered(void* self, void* point, bool state);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#hovered)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPointF*, bool) ```
void q_xyseries_on_hovered(void* self, void (*slot)(void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
///
/// ``` QXYSeries* self, QPointF* point ```
void q_xyseries_pressed(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pressed)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_xyseries_on_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
///
/// ``` QXYSeries* self, QPointF* point ```
void q_xyseries_released(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#released)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_xyseries_on_released(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
///
/// ``` QXYSeries* self, QPointF* point ```
void q_xyseries_double_clicked(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#doubleClicked)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_xyseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_point_replaced(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointReplaced)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, int) ```
void q_xyseries_on_point_replaced(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_point_removed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointRemoved)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, int) ```
void q_xyseries_on_point_removed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
///
/// ``` QXYSeries* self, int index ```
void q_xyseries_point_added(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointAdded)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, int) ```
void q_xyseries_on_point_added(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_xyseries_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_selected_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedColorChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_xyseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
///
/// ``` QXYSeries* self ```
void q_xyseries_points_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsReplaced)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*) ```
void q_xyseries_on_points_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
///
/// ``` QXYSeries* self, const char* format ```
void q_xyseries_point_labels_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFormatChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, const char*) ```
void q_xyseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// ``` QXYSeries* self, bool visible ```
void q_xyseries_point_labels_visibility_changed(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_xyseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
///
/// ``` QXYSeries* self, QFont* font ```
void q_xyseries_point_labels_font_changed(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsFontChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QFont*) ```
void q_xyseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_point_labels_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsColorChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_xyseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
///
/// ``` QXYSeries* self, bool clipping ```
void q_xyseries_point_labels_clipping_changed(void* self, bool clipping);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointLabelsClippingChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_xyseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
///
/// ``` QXYSeries* self, int index, int count ```
void q_xyseries_points_removed(void* self, int index, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsRemoved)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, int, int) ```
void q_xyseries_on_points_removed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
///
/// ``` QXYSeries* self, QPen* pen ```
void q_xyseries_pen_changed(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#penChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_xyseries_on_pen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
///
/// ``` QXYSeries* self ```
void q_xyseries_selected_points_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedPointsChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*) ```
void q_xyseries_on_selected_points_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
///
/// ``` QXYSeries* self, QImage* lightMarker ```
void q_xyseries_light_marker_changed(void* self, void* lightMarker);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#lightMarkerChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_xyseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
///
/// ``` QXYSeries* self, QImage* selectedLightMarker ```
void q_xyseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#selectedLightMarkerChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_xyseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
///
/// ``` QXYSeries* self, bool visible ```
void q_xyseries_best_fit_line_visibility_changed(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineVisibilityChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_xyseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
///
/// ``` QXYSeries* self, QPen* pen ```
void q_xyseries_best_fit_line_pen_changed(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLinePenChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_xyseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
///
/// ``` QXYSeries* self, QColor* color ```
void q_xyseries_best_fit_line_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#bestFitLineColorChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_xyseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
///
/// ``` QXYSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ configuration ```
void q_xyseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#pointsConfigurationChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */) ```
void q_xyseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
///
/// ``` QXYSeries* self, double size ```
void q_xyseries_marker_size_changed(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#markerSizeChanged)
///
/// ``` QXYSeries* self, void (*slot)(QXYSeries*, double) ```
void q_xyseries_on_marker_size_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_xyseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_xyseries_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointsVisible)
///
/// ``` QXYSeries* self, bool visible ```
void q_xyseries_set_points_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsVisible)
///
/// ``` QXYSeries* self, bool visible ```
void q_xyseries_set_point_labels_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setPointLabelsClipping)
///
/// ``` QXYSeries* self, bool enabled ```
void q_xyseries_set_point_labels_clipping1(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#setBestFitLineVisible)
///
/// ``` QXYSeries* self, bool visible ```
void q_xyseries_set_best_fit_line_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#colorBy)
///
/// ``` QXYSeries* self, libqt_list /* of double */ sourceData, QLinearGradient* gradient ```
void q_xyseries_color_by2(void* self, libqt_list sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#type)
///
/// ``` QXYSeries* self ```
int64_t q_xyseries_type(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QXYSeries* self, const char* name ```
void q_xyseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QXYSeries* self ```
const char* q_xyseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QXYSeries* self ```
void q_xyseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QXYSeries* self ```
bool q_xyseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QXYSeries* self ```
double q_xyseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QXYSeries* self, double opacity ```
void q_xyseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QXYSeries* self ```
void q_xyseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QXYSeries* self ```
bool q_xyseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QXYSeries* self ```
QChart* q_xyseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QXYSeries* self, QAbstractAxis* axis ```
bool q_xyseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QXYSeries* self, QAbstractAxis* axis ```
bool q_xyseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QXYSeries* self ```
libqt_list /* of QAbstractAxis* */ q_xyseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QXYSeries* self ```
void q_xyseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QXYSeries* self ```
void q_xyseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QXYSeries* self ```
void q_xyseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QXYSeries* self, void (*slot)(QAbstractSeries*) ```
void q_xyseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QXYSeries* self ```
void q_xyseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QXYSeries* self, void (*slot)(QAbstractSeries*) ```
void q_xyseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QXYSeries* self ```
void q_xyseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QXYSeries* self, void (*slot)(QAbstractSeries*) ```
void q_xyseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QXYSeries* self ```
void q_xyseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QXYSeries* self, void (*slot)(QAbstractSeries*) ```
void q_xyseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QXYSeries* self, bool visible ```
void q_xyseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QXYSeries* self, bool enable ```
void q_xyseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QXYSeries* self, QEvent* event ```
bool q_xyseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QXYSeries* self, QObject* watched, QEvent* event ```
bool q_xyseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QXYSeries* self ```
const char* q_xyseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QXYSeries* self, char* name ```
void q_xyseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QXYSeries* self ```
bool q_xyseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QXYSeries* self ```
bool q_xyseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QXYSeries* self ```
bool q_xyseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QXYSeries* self ```
bool q_xyseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QXYSeries* self, bool b ```
bool q_xyseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QXYSeries* self ```
QThread* q_xyseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QXYSeries* self, QThread* thread ```
bool q_xyseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QXYSeries* self, int interval ```
int32_t q_xyseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QXYSeries* self, int id ```
void q_xyseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QXYSeries* self, enum Qt__TimerId id ```
void q_xyseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QXYSeries* self ```
libqt_list /* of QObject* */ q_xyseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QXYSeries* self, QObject* parent ```
void q_xyseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QXYSeries* self, QObject* filterObj ```
void q_xyseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QXYSeries* self, QObject* obj ```
void q_xyseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_xyseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QXYSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_xyseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_xyseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_xyseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QXYSeries* self ```
void q_xyseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QXYSeries* self ```
void q_xyseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QXYSeries* self, const char* name, QVariant* value ```
bool q_xyseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QXYSeries* self, const char* name ```
QVariant* q_xyseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QXYSeries* self ```
const char** q_xyseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QXYSeries* self ```
QBindingStorage* q_xyseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QXYSeries* self ```
const QBindingStorage* q_xyseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QXYSeries* self ```
void q_xyseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QXYSeries* self, void (*slot)(QObject*) ```
void q_xyseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QXYSeries* self ```
QObject* q_xyseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QXYSeries* self, const char* classname ```
bool q_xyseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QXYSeries* self ```
void q_xyseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QXYSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_xyseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QXYSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_xyseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_xyseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QXYSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_xyseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QXYSeries* self, QObject* param1 ```
void q_xyseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QXYSeries* self, void (*slot)(QObject*, QObject*) ```
void q_xyseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QXYSeries* self, void (*slot)(QObject*, const char*) ```
void q_xyseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries-qtcharts.html#dtor.QXYSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QXYSeries* self ```
void q_xyseries_delete(void* self);

/// https://doc.qt.io/qt-6/qxyseries-qtcharts.html#types

typedef enum {
    QXYSERIES_POINTCONFIGURATION_COLOR = 0,
    QXYSERIES_POINTCONFIGURATION_SIZE = 1,
    QXYSERIES_POINTCONFIGURATION_VISIBILITY = 2,
    QXYSERIES_POINTCONFIGURATION_LABELVISIBILITY = 3,
    QXYSERIES_POINTCONFIGURATION_LABELFORMAT = 4
} QXYSeries__PointConfiguration;

#endif
