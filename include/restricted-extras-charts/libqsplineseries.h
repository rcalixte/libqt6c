#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSPLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSPLINESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsplineseries-qtcharts.html

/// q_splineseries_new constructs a new QSplineSeries object.
///
///
QSplineSeries* q_splineseries_new();

/// q_splineseries_new2 constructs a new QSplineSeries object.
///
/// ``` QObject* parent ```
QSplineSeries* q_splineseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSplineSeries* self ```
const QMetaObject* q_splineseries_meta_object(void* self);

/// ``` QSplineSeries* self, const char* param1 ```
void* q_splineseries_metacast(void* self, const char* param1);

/// ``` QSplineSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_splineseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSplineSeries* self, int32_t (*slot)(QSplineSeries*, enum QMetaObject__Call, int, void*) ```
void q_splineseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSplineSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_splineseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_splineseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
///
/// ``` QSplineSeries* self ```
int64_t q_splineseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QSplineSeries* self, int64_t (*slot)() ```
void q_splineseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QSplineSeries* self ```
int64_t q_splineseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_splineseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_splineseries_tr3(const char* s, const char* c, int n);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QSplineSeries* self, double x, double y ```
void q_splineseries_append(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QSplineSeries* self, QPointF* point ```
void q_splineseries_append2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QSplineSeries* self, libqt_list /* of QPointF* */ points ```
void q_splineseries_append3(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QSplineSeries* self, double oldX, double oldY, double newX, double newY ```
void q_splineseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QSplineSeries* self, QPointF* oldPoint, QPointF* newPoint ```
void q_splineseries_replace2(void* self, void* oldPoint, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QSplineSeries* self, int index, double newX, double newY ```
void q_splineseries_replace3(void* self, int index, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QSplineSeries* self, int index, QPointF* newPoint ```
void q_splineseries_replace4(void* self, int index, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QSplineSeries* self, double x, double y ```
void q_splineseries_remove(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QSplineSeries* self, QPointF* point ```
void q_splineseries_remove2(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_remove3(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// ``` QSplineSeries* self, int index, int count ```
void q_splineseries_remove_points(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// ``` QSplineSeries* self, int index, QPointF* point ```
void q_splineseries_insert(void* self, int index, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// ``` QSplineSeries* self ```
void q_splineseries_clear(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// ``` QSplineSeries* self ```
int32_t q_splineseries_count(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// ``` QSplineSeries* self ```
libqt_list /* of QPointF* */ q_splineseries_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// ``` QSplineSeries* self ```
libqt_list /* of QPointF* */ q_splineseries_points_vector(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// ``` QSplineSeries* self, int index ```
const QPointF* q_splineseries_at(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// ``` QSplineSeries* self, QPointF* point ```
QXYSeries* q_splineseries_operator_shift_left(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
///
/// ``` QSplineSeries* self, libqt_list /* of QPointF* */ points ```
QXYSeries* q_splineseries_operator_shift_left2(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// ``` QSplineSeries* self ```
QPen* q_splineseries_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#brush)
///
/// ``` QSplineSeries* self ```
QBrush* q_splineseries_brush(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_set_selected_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// ``` QSplineSeries* self ```
QColor* q_splineseries_selected_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QSplineSeries* self ```
void q_splineseries_set_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// ``` QSplineSeries* self, const char* format ```
void q_splineseries_set_point_labels_format(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// ``` QSplineSeries* self ```
const char* q_splineseries_point_labels_format(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QSplineSeries* self ```
void q_splineseries_set_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// ``` QSplineSeries* self, QFont* font ```
void q_splineseries_set_point_labels_font(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// ``` QSplineSeries* self ```
QFont* q_splineseries_point_labels_font(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_set_point_labels_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// ``` QSplineSeries* self ```
QColor* q_splineseries_point_labels_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QSplineSeries* self ```
void q_splineseries_set_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QSplineSeries* self, libqt_list /* of QPointF* */ points ```
void q_splineseries_replace5(void* self, libqt_list points);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// ``` QSplineSeries* self, int index ```
bool q_splineseries_is_point_selected(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_select_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_deselect_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// ``` QSplineSeries* self, int index, bool selected ```
void q_splineseries_set_point_selected(void* self, int index, bool selected);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// ``` QSplineSeries* self ```
void q_splineseries_select_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// ``` QSplineSeries* self ```
void q_splineseries_deselect_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// ``` QSplineSeries* self, libqt_list /* of int */ indexes ```
void q_splineseries_select_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// ``` QSplineSeries* self, libqt_list /* of int */ indexes ```
void q_splineseries_deselect_points(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// ``` QSplineSeries* self, libqt_list /* of int */ indexes ```
void q_splineseries_toggle_selection(void* self, libqt_list indexes);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// ``` QSplineSeries* self ```
libqt_list /* of int */ q_splineseries_selected_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// ``` QSplineSeries* self, QImage* lightMarker ```
void q_splineseries_set_light_marker(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// ``` QSplineSeries* self ```
const QImage* q_splineseries_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// ``` QSplineSeries* self, QImage* selectedLightMarker ```
void q_splineseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// ``` QSplineSeries* self ```
const QImage* q_splineseries_selected_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
///
/// ``` QSplineSeries* self, double size ```
void q_splineseries_set_marker_size(void* self, double size);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
///
/// ``` QSplineSeries* self ```
double q_splineseries_marker_size(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QSplineSeries* self ```
void q_splineseries_set_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// ``` QSplineSeries* self, bool* ok ```
libqt_pair /* tuple of double and double */ q_splineseries_best_fit_line_equation(void* self, bool* ok);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// ``` QSplineSeries* self, QPen* pen ```
void q_splineseries_set_best_fit_line_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// ``` QSplineSeries* self ```
QPen* q_splineseries_best_fit_line_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_set_best_fit_line_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// ``` QSplineSeries* self ```
QColor* q_splineseries_best_fit_line_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_clear_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QSplineSeries* self, int index, enum QXYSeries__PointConfiguration key ```
void q_splineseries_clear_point_configuration2(void* self, int index, int64_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QSplineSeries* self ```
void q_splineseries_clear_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QSplineSeries* self, enum QXYSeries__PointConfiguration key ```
void q_splineseries_clear_points_configuration2(void* self, int64_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QSplineSeries* self, int index, libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */ configuration ```
void q_splineseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QSplineSeries* self, int index, enum QXYSeries__PointConfiguration key, QVariant* value ```
void q_splineseries_set_point_configuration2(void* self, int index, int64_t key, void* value);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// ``` QSplineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ pointsConfiguration ```
void q_splineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// ``` QSplineSeries* self, int index ```
libqt_map /* of int64_t to QVariant* */ q_splineseries_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// ``` QSplineSeries* self ```
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_splineseries_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// ``` QSplineSeries* self, libqt_list /* of double */ sourceData, double minSize, double maxSize ```
void q_splineseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QSplineSeries* self, libqt_list /* of double */ sourceData ```
void q_splineseries_color_by(void* self, libqt_list sourceData);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QSplineSeries* self, QPointF* point ```
void q_splineseries_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPointF*) ```
void q_splineseries_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QSplineSeries* self, QPointF* point, bool state ```
void q_splineseries_hovered(void* self, void* point, bool state);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPointF*, bool) ```
void q_splineseries_on_hovered(void* self, void (*slot)(void*, void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QSplineSeries* self, QPointF* point ```
void q_splineseries_pressed(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPointF*) ```
void q_splineseries_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QSplineSeries* self, QPointF* point ```
void q_splineseries_released(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPointF*) ```
void q_splineseries_on_released(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QSplineSeries* self, QPointF* point ```
void q_splineseries_double_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPointF*) ```
void q_splineseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_point_replaced(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, int) ```
void q_splineseries_on_point_replaced(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_point_removed(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, int) ```
void q_splineseries_on_point_removed(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QSplineSeries* self, int index ```
void q_splineseries_point_added(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, int) ```
void q_splineseries_on_point_added(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QColor*) ```
void q_splineseries_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_selected_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QColor*) ```
void q_splineseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QSplineSeries* self ```
void q_splineseries_points_replaced(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_points_replaced(void* self, void (*slot)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QSplineSeries* self, const char* format ```
void q_splineseries_point_labels_format_changed(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, const char*) ```
void q_splineseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QSplineSeries* self, bool visible ```
void q_splineseries_point_labels_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, bool) ```
void q_splineseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QSplineSeries* self, QFont* font ```
void q_splineseries_point_labels_font_changed(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QFont*) ```
void q_splineseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_point_labels_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QColor*) ```
void q_splineseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QSplineSeries* self, bool clipping ```
void q_splineseries_point_labels_clipping_changed(void* self, bool clipping);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, bool) ```
void q_splineseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QSplineSeries* self, int index, int count ```
void q_splineseries_points_removed(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, int, int) ```
void q_splineseries_on_points_removed(void* self, void (*slot)(void*, int, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QSplineSeries* self, QPen* pen ```
void q_splineseries_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPen*) ```
void q_splineseries_on_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QSplineSeries* self ```
void q_splineseries_selected_points_changed(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_selected_points_changed(void* self, void (*slot)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QSplineSeries* self, QImage* lightMarker ```
void q_splineseries_light_marker_changed(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QImage*) ```
void q_splineseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QSplineSeries* self, QImage* selectedLightMarker ```
void q_splineseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QImage*) ```
void q_splineseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QSplineSeries* self, bool visible ```
void q_splineseries_best_fit_line_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, bool) ```
void q_splineseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QSplineSeries* self, QPen* pen ```
void q_splineseries_best_fit_line_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPen*) ```
void q_splineseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_best_fit_line_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QColor*) ```
void q_splineseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QSplineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ configuration ```
void q_splineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */) ```
void q_splineseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// ``` QSplineSeries* self, double size ```
void q_splineseries_marker_size_changed(void* self, double size);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, double) ```
void q_splineseries_on_marker_size_changed(void* self, void (*slot)(void*, double));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QSplineSeries* self, bool visible ```
void q_splineseries_set_points_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QSplineSeries* self, bool visible ```
void q_splineseries_set_point_labels_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QSplineSeries* self, bool enabled ```
void q_splineseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QSplineSeries* self, bool visible ```
void q_splineseries_set_best_fit_line_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QSplineSeries* self, libqt_list /* of double */ sourceData, QLinearGradient* gradient ```
void q_splineseries_color_by2(void* self, libqt_list sourceData, void* gradient);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QSplineSeries* self, const char* name ```
void q_splineseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QSplineSeries* self ```
const char* q_splineseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QSplineSeries* self ```
void q_splineseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QSplineSeries* self ```
double q_splineseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QSplineSeries* self, double opacity ```
void q_splineseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QSplineSeries* self ```
void q_splineseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QSplineSeries* self ```
QChart* q_splineseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QSplineSeries* self, QAbstractAxis* axis ```
bool q_splineseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QSplineSeries* self, QAbstractAxis* axis ```
bool q_splineseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QSplineSeries* self ```
libqt_list /* of QAbstractAxis* */ q_splineseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QSplineSeries* self ```
void q_splineseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QSplineSeries* self ```
void q_splineseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QSplineSeries* self ```
void q_splineseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QSplineSeries* self ```
void q_splineseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QSplineSeries* self ```
void q_splineseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QSplineSeries* self ```
void q_splineseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QSplineSeries* self, bool visible ```
void q_splineseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QSplineSeries* self, bool enable ```
void q_splineseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSplineSeries* self ```
const char* q_splineseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSplineSeries* self, char* name ```
void q_splineseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSplineSeries* self ```
bool q_splineseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSplineSeries* self, bool b ```
bool q_splineseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSplineSeries* self ```
QThread* q_splineseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSplineSeries* self, QThread* thread ```
bool q_splineseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSplineSeries* self, int interval ```
int32_t q_splineseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSplineSeries* self, int id ```
void q_splineseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSplineSeries* self, enum Qt__TimerId id ```
void q_splineseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSplineSeries* self ```
libqt_list /* of QObject* */ q_splineseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSplineSeries* self, QObject* parent ```
void q_splineseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSplineSeries* self, QObject* filterObj ```
void q_splineseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSplineSeries* self, QObject* obj ```
void q_splineseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_splineseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSplineSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_splineseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_splineseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_splineseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSplineSeries* self ```
void q_splineseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSplineSeries* self ```
void q_splineseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSplineSeries* self, const char* name, QVariant* value ```
bool q_splineseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSplineSeries* self, const char* name ```
QVariant* q_splineseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSplineSeries* self ```
const char** q_splineseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSplineSeries* self ```
QBindingStorage* q_splineseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSplineSeries* self ```
const QBindingStorage* q_splineseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSplineSeries* self ```
void q_splineseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*) ```
void q_splineseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSplineSeries* self ```
QObject* q_splineseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSplineSeries* self, const char* classname ```
bool q_splineseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSplineSeries* self ```
void q_splineseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSplineSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_splineseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSplineSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_splineseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_splineseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSplineSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_splineseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSplineSeries* self, QObject* param1 ```
void q_splineseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QObject*) ```
void q_splineseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QPen* pen ```
void q_splineseries_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QPen* pen ```
void q_splineseries_qbase_set_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QPen*) ```
void q_splineseries_on_set_pen(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QBrush* brush ```
void q_splineseries_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QBrush* brush ```
void q_splineseries_qbase_set_brush(void* self, void* brush);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QBrush*) ```
void q_splineseries_on_set_brush(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QColor* color ```
void q_splineseries_qbase_set_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QColor*) ```
void q_splineseries_on_set_color(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self ```
QColor* q_splineseries_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self ```
QColor* q_splineseries_qbase_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, QColor* (*slot)() ```
void q_splineseries_on_color(void* self, QColor* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QEvent* event ```
bool q_splineseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QEvent* event ```
bool q_splineseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, bool (*slot)(QSplineSeries*, QEvent*) ```
void q_splineseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QObject* watched, QEvent* event ```
bool q_splineseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QObject* watched, QEvent* event ```
bool q_splineseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, bool (*slot)(QSplineSeries*, QObject*, QEvent*) ```
void q_splineseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QTimerEvent* event ```
void q_splineseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QTimerEvent* event ```
void q_splineseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QTimerEvent*) ```
void q_splineseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QChildEvent* event ```
void q_splineseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QChildEvent* event ```
void q_splineseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QChildEvent*) ```
void q_splineseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QEvent* event ```
void q_splineseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QEvent* event ```
void q_splineseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QEvent*) ```
void q_splineseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QMetaMethod* signal ```
void q_splineseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QMetaMethod* signal ```
void q_splineseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QMetaMethod*) ```
void q_splineseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QMetaMethod* signal ```
void q_splineseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QMetaMethod* signal ```
void q_splineseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, QMetaMethod*) ```
void q_splineseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self ```
QObject* q_splineseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self ```
QObject* q_splineseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, QObject* (*slot)() ```
void q_splineseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self ```
int32_t q_splineseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self ```
int32_t q_splineseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, int32_t (*slot)() ```
void q_splineseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, const char* signal ```
int32_t q_splineseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, const char* signal ```
int32_t q_splineseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, int32_t (*slot)(QSplineSeries*, const char*) ```
void q_splineseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplineSeries* self, QMetaMethod* signal ```
bool q_splineseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplineSeries* self, QMetaMethod* signal ```
bool q_splineseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplineSeries* self, bool (*slot)(QSplineSeries*, QMetaMethod*) ```
void q_splineseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSplineSeries* self, void (*slot)(QSplineSeries*, const char*) ```
void q_splineseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#dtor.QSplineSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QSplineSeries* self ```
void q_splineseries_delete(void* self);

#endif
