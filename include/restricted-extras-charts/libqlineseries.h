#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQLINESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qlineseries-qtcharts.html

/// q_lineseries_new constructs a new QLineSeries object.
///
///
QLineSeries* q_lineseries_new();

/// q_lineseries_new2 constructs a new QLineSeries object.
///
/// ``` QObject* parent ```
QLineSeries* q_lineseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLineSeries* self ```
const QMetaObject* q_lineseries_meta_object(void* self);

/// ``` QLineSeries* self, const char* param1 ```
void* q_lineseries_metacast(void* self, const char* param1);

/// ``` QLineSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLineSeries* self, int32_t (*slot)(QLineSeries*, enum QMetaObject__Call, int, void*) ```
void q_lineseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLineSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_lineseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
///
/// ``` QLineSeries* self ```
int64_t q_lineseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QLineSeries* self, int64_t (*slot)() ```
void q_lineseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QLineSeries* self ```
int64_t q_lineseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_lineseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_lineseries_tr3(const char* s, const char* c, int n);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QLineSeries* self, double x, double y ```
void q_lineseries_append(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_append2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QLineSeries* self, libqt_list /* of QPointF* */ points ```
void q_lineseries_append3(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, double oldX, double oldY, double newX, double newY ```
void q_lineseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, QPointF* oldPoint, QPointF* newPoint ```
void q_lineseries_replace2(void* self, void* oldPoint, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, int index, double newX, double newY ```
void q_lineseries_replace3(void* self, int index, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, int index, QPointF* newPoint ```
void q_lineseries_replace4(void* self, int index, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QLineSeries* self, double x, double y ```
void q_lineseries_remove(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_remove2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_remove3(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// ``` QLineSeries* self, int index, int count ```
void q_lineseries_remove_points(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// ``` QLineSeries* self, int index, QPointF* point ```
void q_lineseries_insert(void* self, int index, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// ``` QLineSeries* self ```
void q_lineseries_clear(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// ``` QLineSeries* self ```
int32_t q_lineseries_count(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// ``` QLineSeries* self ```
libqt_list /* of QPointF* */ q_lineseries_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// ``` QLineSeries* self ```
libqt_list /* of QPointF* */ q_lineseries_points_vector(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// ``` QLineSeries* self, int index ```
const QPointF* q_lineseries_at(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// ``` QLineSeries* self, QPointF* point ```
QXYSeries* q_lineseries_operator_shift_left(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// ``` QLineSeries* self, libqt_list /* of QPointF* */ points ```
QXYSeries* q_lineseries_operator_shift_left2(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// ``` QLineSeries* self ```
QPen* q_lineseries_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#brush)
///
/// ``` QLineSeries* self ```
QBrush* q_lineseries_brush(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_selected_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_selected_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// ``` QLineSeries* self, const char* format ```
void q_lineseries_set_point_labels_format(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// ``` QLineSeries* self ```
const char* q_lineseries_point_labels_format(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// ``` QLineSeries* self, QFont* font ```
void q_lineseries_set_point_labels_font(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// ``` QLineSeries* self ```
QFont* q_lineseries_point_labels_font(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_point_labels_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_point_labels_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// ``` QLineSeries* self ```
bool q_lineseries_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, libqt_list /* of QPointF* */ points ```
void q_lineseries_replace5(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// ``` QLineSeries* self, int index ```
bool q_lineseries_is_point_selected(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_select_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_deselect_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// ``` QLineSeries* self, int index, bool selected ```
void q_lineseries_set_point_selected(void* self, int index, bool selected);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// ``` QLineSeries* self ```
void q_lineseries_select_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// ``` QLineSeries* self ```
void q_lineseries_deselect_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// ``` QLineSeries* self, libqt_list /* of int */ indexes ```
void q_lineseries_select_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// ``` QLineSeries* self, libqt_list /* of int */ indexes ```
void q_lineseries_deselect_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// ``` QLineSeries* self, libqt_list /* of int */ indexes ```
void q_lineseries_toggle_selection(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// ``` QLineSeries* self ```
libqt_list /* of int */ q_lineseries_selected_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// ``` QLineSeries* self, QImage* lightMarker ```
void q_lineseries_set_light_marker(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// ``` QLineSeries* self ```
const QImage* q_lineseries_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// ``` QLineSeries* self, QImage* selectedLightMarker ```
void q_lineseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// ``` QLineSeries* self ```
const QImage* q_lineseries_selected_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
///
/// ``` QLineSeries* self, double size ```
void q_lineseries_set_marker_size(void* self, double size);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
///
/// ``` QLineSeries* self ```
double q_lineseries_marker_size(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// ``` QLineSeries* self, bool* ok ```
libqt_pair /* tuple of double and double */ q_lineseries_best_fit_line_equation(void* self, bool* ok);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_set_best_fit_line_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// ``` QLineSeries* self ```
QPen* q_lineseries_best_fit_line_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_best_fit_line_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_best_fit_line_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_clear_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QLineSeries* self, int index, enum QXYSeries__PointConfiguration key ```
void q_lineseries_clear_point_configuration2(void* self, int index, int64_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QLineSeries* self ```
void q_lineseries_clear_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QLineSeries* self, enum QXYSeries__PointConfiguration key ```
void q_lineseries_clear_points_configuration2(void* self, int64_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QLineSeries* self, int index, libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */ configuration ```
void q_lineseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QLineSeries* self, int index, enum QXYSeries__PointConfiguration key, QVariant* value ```
void q_lineseries_set_point_configuration2(void* self, int index, int64_t key, void* value);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// ``` QLineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ pointsConfiguration ```
void q_lineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// ``` QLineSeries* self, int index ```
libqt_map /* of int64_t to QVariant* */ q_lineseries_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// ``` QLineSeries* self ```
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_lineseries_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// ``` QLineSeries* self, libqt_list /* of double */ sourceData, double minSize, double maxSize ```
void q_lineseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QLineSeries* self, libqt_list /* of double */ sourceData ```
void q_lineseries_color_by(void* self, libqt_list sourceData);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPointF*) ```
void q_lineseries_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QLineSeries* self, QPointF* point, bool state ```
void q_lineseries_hovered(void* self, void* point, bool state);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPointF*, bool) ```
void q_lineseries_on_hovered(void* self, void (*slot)(void*, void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_pressed(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPointF*) ```
void q_lineseries_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_released(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPointF*) ```
void q_lineseries_on_released(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_double_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPointF*) ```
void q_lineseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_point_replaced(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, int) ```
void q_lineseries_on_point_replaced(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_point_removed(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, int) ```
void q_lineseries_on_point_removed(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_point_added(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, int) ```
void q_lineseries_on_point_added(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QColor*) ```
void q_lineseries_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_selected_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QColor*) ```
void q_lineseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QLineSeries* self ```
void q_lineseries_points_replaced(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_points_replaced(void* self, void (*slot)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QLineSeries* self, const char* format ```
void q_lineseries_point_labels_format_changed(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, const char*) ```
void q_lineseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_point_labels_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, bool) ```
void q_lineseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QLineSeries* self, QFont* font ```
void q_lineseries_point_labels_font_changed(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QFont*) ```
void q_lineseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_point_labels_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QColor*) ```
void q_lineseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QLineSeries* self, bool clipping ```
void q_lineseries_point_labels_clipping_changed(void* self, bool clipping);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, bool) ```
void q_lineseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QLineSeries* self, int index, int count ```
void q_lineseries_points_removed(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, int, int) ```
void q_lineseries_on_points_removed(void* self, void (*slot)(void*, int, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPen*) ```
void q_lineseries_on_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_selected_points_changed(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_selected_points_changed(void* self, void (*slot)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QLineSeries* self, QImage* lightMarker ```
void q_lineseries_light_marker_changed(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QImage*) ```
void q_lineseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QLineSeries* self, QImage* selectedLightMarker ```
void q_lineseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QImage*) ```
void q_lineseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_best_fit_line_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, bool) ```
void q_lineseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_best_fit_line_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPen*) ```
void q_lineseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_best_fit_line_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QColor*) ```
void q_lineseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QLineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ configuration ```
void q_lineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */) ```
void q_lineseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// ``` QLineSeries* self, double size ```
void q_lineseries_marker_size_changed(void* self, double size);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, double) ```
void q_lineseries_on_marker_size_changed(void* self, void (*slot)(void*, double));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_points_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_point_labels_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QLineSeries* self, bool enabled ```
void q_lineseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_best_fit_line_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QLineSeries* self, libqt_list /* of double */ sourceData, QLinearGradient* gradient ```
void q_lineseries_color_by2(void* self, libqt_list sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QLineSeries* self, const char* name ```
void q_lineseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QLineSeries* self ```
const char* q_lineseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QLineSeries* self ```
double q_lineseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QLineSeries* self, double opacity ```
void q_lineseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QLineSeries* self ```
bool q_lineseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QLineSeries* self ```
QChart* q_lineseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QLineSeries* self, QAbstractAxis* axis ```
bool q_lineseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QLineSeries* self, QAbstractAxis* axis ```
bool q_lineseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QLineSeries* self ```
libqt_list /* of QAbstractAxis* */ q_lineseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QLineSeries* self ```
void q_lineseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QLineSeries* self ```
void q_lineseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QLineSeries* self, bool enable ```
void q_lineseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLineSeries* self ```
const char* q_lineseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLineSeries* self, char* name ```
void q_lineseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLineSeries* self ```
bool q_lineseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLineSeries* self, bool b ```
bool q_lineseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLineSeries* self ```
QThread* q_lineseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLineSeries* self, QThread* thread ```
bool q_lineseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineSeries* self, int interval ```
int32_t q_lineseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLineSeries* self, int id ```
void q_lineseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLineSeries* self, enum Qt__TimerId id ```
void q_lineseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLineSeries* self ```
libqt_list /* of QObject* */ q_lineseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLineSeries* self, QObject* parent ```
void q_lineseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLineSeries* self, QObject* filterObj ```
void q_lineseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLineSeries* self, QObject* obj ```
void q_lineseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_lineseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_lineseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_lineseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_lineseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLineSeries* self ```
void q_lineseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLineSeries* self ```
void q_lineseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLineSeries* self, const char* name, QVariant* value ```
bool q_lineseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLineSeries* self, const char* name ```
QVariant* q_lineseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLineSeries* self ```
const char** q_lineseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineSeries* self ```
QBindingStorage* q_lineseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineSeries* self ```
const QBindingStorage* q_lineseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineSeries* self ```
void q_lineseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*) ```
void q_lineseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLineSeries* self ```
QObject* q_lineseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLineSeries* self, const char* classname ```
bool q_lineseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLineSeries* self ```
void q_lineseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLineSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_lineseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_lineseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineSeries* self, QObject* param1 ```
void q_lineseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QObject*) ```
void q_lineseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_qbase_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPen*) ```
void q_lineseries_on_set_pen(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QBrush* brush ```
void q_lineseries_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QBrush* brush ```
void q_lineseries_qbase_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QBrush*) ```
void q_lineseries_on_set_brush(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_qbase_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QColor*) ```
void q_lineseries_on_set_color(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_qbase_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, QColor* (*slot)() ```
void q_lineseries_on_color(void* self, QColor* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
bool q_lineseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
bool q_lineseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, bool (*slot)(QLineSeries*, QEvent*) ```
void q_lineseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QObject* watched, QEvent* event ```
bool q_lineseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QObject* watched, QEvent* event ```
bool q_lineseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, bool (*slot)(QLineSeries*, QObject*, QEvent*) ```
void q_lineseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QTimerEvent* event ```
void q_lineseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QTimerEvent* event ```
void q_lineseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QTimerEvent*) ```
void q_lineseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QChildEvent* event ```
void q_lineseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QChildEvent* event ```
void q_lineseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QChildEvent*) ```
void q_lineseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
void q_lineseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
void q_lineseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QEvent*) ```
void q_lineseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QMetaMethod*) ```
void q_lineseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QMetaMethod*) ```
void q_lineseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self ```
QObject* q_lineseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self ```
QObject* q_lineseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, QObject* (*slot)() ```
void q_lineseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self ```
int32_t q_lineseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self ```
int32_t q_lineseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, int32_t (*slot)() ```
void q_lineseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, const char* signal ```
int32_t q_lineseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, const char* signal ```
int32_t q_lineseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, int32_t (*slot)(QLineSeries*, const char*) ```
void q_lineseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
bool q_lineseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
bool q_lineseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, bool (*slot)(QLineSeries*, QMetaMethod*) ```
void q_lineseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, const char*) ```
void q_lineseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#dtor.QLineSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QLineSeries* self ```
void q_lineseries_delete(void* self);

#endif
