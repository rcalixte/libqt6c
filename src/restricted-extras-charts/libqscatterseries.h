#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSCATTERSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSCATTERSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqimage.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqxyseries.h"

/// https://doc.qt.io/qt-6/qscatterseries.html

/// q_scatterseries_new constructs a new QScatterSeries object.
///
///
QScatterSeries* q_scatterseries_new();

/// q_scatterseries_new2 constructs a new QScatterSeries object.
///
/// ``` QObject* parent ```
QScatterSeries* q_scatterseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScatterSeries* self ```
QMetaObject* q_scatterseries_meta_object(void* self);

/// ``` QScatterSeries* self, const char* param1 ```
void* q_scatterseries_metacast(void* self, const char* param1);

/// ``` QScatterSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scatterseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, int32_t (*slot)(QScatterSeries*, enum QMetaObject__Call, int, void*) ```
void q_scatterseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QScatterSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scatterseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scatterseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#type)
///
/// ``` QScatterSeries* self ```
int64_t q_scatterseries_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, int64_t (*slot)() ```
void q_scatterseries_on_type(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QScatterSeries* self ```
int64_t q_scatterseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setPen)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_set_pen(void* self, void* pen);

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QPen*) ```
void q_scatterseries_on_set_pen(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_qbase_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setBrush)
///
/// ``` QScatterSeries* self, QBrush* brush ```
void q_scatterseries_set_brush(void* self, void* brush);

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QBrush*) ```
void q_scatterseries_on_set_brush(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QScatterSeries* self, QBrush* brush ```
void q_scatterseries_qbase_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#brush)
///
/// ``` QScatterSeries* self ```
QBrush* q_scatterseries_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_color(void* self, void* color);

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QColor*) ```
void q_scatterseries_on_set_color(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_qbase_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#color)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_color(void* self);

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, QColor* (*slot)() ```
void q_scatterseries_on_color(void* self, QColor* (*slot)());

/// Base class method implementation
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_qbase_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setBorderColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#borderColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerShape)
///
/// ``` QScatterSeries* self ```
int64_t q_scatterseries_marker_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setMarkerShape)
///
/// ``` QScatterSeries* self, enum QScatterSeries__MarkerShape shape ```
void q_scatterseries_set_marker_shape(void* self, int64_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerSize)
///
/// ``` QScatterSeries* self ```
double q_scatterseries_marker_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setMarkerSize)
///
/// ``` QScatterSeries* self, double size ```
void q_scatterseries_set_marker_size(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#colorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_color_changed(void* self, void* color);

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QColor*) ```
void q_scatterseries_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#borderColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_border_color_changed(void* self, void* color);

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QColor*) ```
void q_scatterseries_on_border_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerShapeChanged)
///
/// ``` QScatterSeries* self, enum QScatterSeries__MarkerShape shape ```
void q_scatterseries_marker_shape_changed(void* self, int64_t shape);

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, enum QScatterSeries__MarkerShape) ```
void q_scatterseries_on_marker_shape_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerSizeChanged)
///
/// ``` QScatterSeries* self, double size ```
void q_scatterseries_marker_size_changed(void* self, double size);

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, double) ```
void q_scatterseries_on_marker_size_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scatterseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scatterseries_tr3(const char* s, const char* c, int n);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QScatterSeries* self, double x, double y ```
void q_scatterseries_append(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_append_with_point(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QScatterSeries* self, QPointF* points[] ```
void q_scatterseries_append_with_points(void* self, void* points[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, double oldX, double oldY, double newX, double newY ```
void q_scatterseries_replace(void* self, double oldX, double oldY, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, QPointF* oldPoint, QPointF* newPoint ```
void q_scatterseries_replace2(void* self, void* oldPoint, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, int index, double newX, double newY ```
void q_scatterseries_replace3(void* self, int index, double newX, double newY);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, int index, QPointF* newPoint ```
void q_scatterseries_replace4(void* self, int index, void* newPoint);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QScatterSeries* self, double x, double y ```
void q_scatterseries_remove(void* self, double x, double y);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_remove_with_point(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_remove_with_index(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// ``` QScatterSeries* self, int index, int count ```
void q_scatterseries_remove_points(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// ``` QScatterSeries* self, int index, QPointF* point ```
void q_scatterseries_insert(void* self, int index, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_clear(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// ``` QScatterSeries* self ```
int32_t q_scatterseries_count(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QPointF* */ q_scatterseries_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QPointF* */ q_scatterseries_points_vector(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// ``` QScatterSeries* self, int index ```
QPointF* q_scatterseries_at(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
///
/// ``` QScatterSeries* self, QPointF* point ```
QXYSeries* q_scatterseries_operator_shift_left(void* self, void* point);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
///
/// ``` QScatterSeries* self, QPointF* points[] ```
QXYSeries* q_scatterseries_operator_shift_left_with_points(void* self, void* points[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// ``` QScatterSeries* self ```
QPen* q_scatterseries_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_selected_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_selected_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_points_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// ``` QScatterSeries* self, const char* format ```
void q_scatterseries_set_point_labels_format(void* self, const char* format);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// ``` QScatterSeries* self ```
const char* q_scatterseries_point_labels_format(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_point_labels_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// ``` QScatterSeries* self, QFont* font ```
void q_scatterseries_set_point_labels_font(void* self, void* font);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// ``` QScatterSeries* self ```
QFont* q_scatterseries_point_labels_font(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_point_labels_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_point_labels_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_point_labels_clipping(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, QPointF* points[] ```
void q_scatterseries_replace_with_points(void* self, void* points[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// ``` QScatterSeries* self, int index ```
bool q_scatterseries_is_point_selected(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_select_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_deselect_point(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// ``` QScatterSeries* self, int index, bool selected ```
void q_scatterseries_set_point_selected(void* self, int index, bool selected);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_select_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_deselect_all_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// ``` QScatterSeries* self, int* indexes[] ```
void q_scatterseries_select_points(void* self, int* indexes[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// ``` QScatterSeries* self, int* indexes[] ```
void q_scatterseries_deselect_points(void* self, int* indexes[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// ``` QScatterSeries* self, int* indexes[] ```
void q_scatterseries_toggle_selection(void* self, int* indexes[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// ``` QScatterSeries* self ```
libqt_list /* of int */ q_scatterseries_selected_points(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// ``` QScatterSeries* self, QImage* lightMarker ```
void q_scatterseries_set_light_marker(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// ``` QScatterSeries* self ```
QImage* q_scatterseries_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// ``` QScatterSeries* self, QImage* selectedLightMarker ```
void q_scatterseries_set_selected_light_marker(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// ``` QScatterSeries* self ```
QImage* q_scatterseries_selected_light_marker(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_best_fit_line_visible(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// ``` QScatterSeries* self, bool* ok ```
libqt_pair /* tuple of double and double */ q_scatterseries_best_fit_line_equation(void* self, bool* ok);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_set_best_fit_line_pen(void* self, void* pen);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// ``` QScatterSeries* self ```
QPen* q_scatterseries_best_fit_line_pen(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_best_fit_line_color(void* self, void* color);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_best_fit_line_color(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_clear_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QScatterSeries* self, int index, enum QXYSeries__PointConfiguration key ```
void q_scatterseries_clear_point_configuration2(void* self, int index, int64_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_clear_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QScatterSeries* self, enum QXYSeries__PointConfiguration key ```
void q_scatterseries_clear_points_configuration_with_key(void* self, int64_t key);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QScatterSeries* self, int index, libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */ configuration ```
void q_scatterseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QScatterSeries* self, int index, enum QXYSeries__PointConfiguration key, QVariant* value ```
void q_scatterseries_set_point_configuration2(void* self, int index, int64_t key, void* value);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// ``` QScatterSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ pointsConfiguration ```
void q_scatterseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// ``` QScatterSeries* self, int index ```
libqt_map /* of int64_t to QVariant* */ q_scatterseries_point_configuration(void* self, int index);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// ``` QScatterSeries* self ```
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_scatterseries_points_configuration(void* self);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// ``` QScatterSeries* self, double* sourceData[], double minSize, double maxSize ```
void q_scatterseries_size_by(void* self, double* sourceData[], double minSize, double maxSize);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QScatterSeries* self, double* sourceData[] ```
void q_scatterseries_color_by(void* self, double* sourceData[]);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QScatterSeries* self, QPointF* point, bool state ```
void q_scatterseries_hovered(void* self, void* point, bool state);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*, bool) ```
void q_scatterseries_on_hovered(void* self, void (*slot)(void*, void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_pressed(void* self, void* point);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_released(void* self, void* point);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_released(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_double_clicked(void* self, void* point);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_point_replaced(void* self, int index);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int) ```
void q_scatterseries_on_point_replaced(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_point_removed(void* self, int index);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int) ```
void q_scatterseries_on_point_removed(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_point_added(void* self, int index);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int) ```
void q_scatterseries_on_point_added(void* self, void (*slot)(void*, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_selected_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_scatterseries_on_selected_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_points_replaced(void* self);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*) ```
void q_scatterseries_on_points_replaced(void* self, void (*slot)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QScatterSeries* self, const char* format ```
void q_scatterseries_point_labels_format_changed(void* self, const char* format);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, const char*) ```
void q_scatterseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_point_labels_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_scatterseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QScatterSeries* self, QFont* font ```
void q_scatterseries_point_labels_font_changed(void* self, void* font);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QFont*) ```
void q_scatterseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_point_labels_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_scatterseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QScatterSeries* self, bool clipping ```
void q_scatterseries_point_labels_clipping_changed(void* self, bool clipping);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_scatterseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QScatterSeries* self, int index, int count ```
void q_scatterseries_points_removed(void* self, int index, int count);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int, int) ```
void q_scatterseries_on_points_removed(void* self, void (*slot)(void*, int, int));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_scatterseries_on_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_selected_points_changed(void* self);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*) ```
void q_scatterseries_on_selected_points_changed(void* self, void (*slot)(void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QScatterSeries* self, QImage* lightMarker ```
void q_scatterseries_light_marker_changed(void* self, void* lightMarker);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_scatterseries_on_light_marker_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QScatterSeries* self, QImage* selectedLightMarker ```
void q_scatterseries_selected_light_marker_changed(void* self, void* selectedLightMarker);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_scatterseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_best_fit_line_visibility_changed(void* self, bool visible);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_scatterseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_best_fit_line_pen_changed(void* self, void* pen);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_scatterseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_best_fit_line_color_changed(void* self, void* color);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_scatterseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QScatterSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ configuration ```
void q_scatterseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration);

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */) ```
void q_scatterseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */));

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_points_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_point_labels_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QScatterSeries* self, bool enabled ```
void q_scatterseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_best_fit_line_visible1(void* self, bool visible);

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QScatterSeries* self, double* sourceData[], QLinearGradient* gradient ```
void q_scatterseries_color_by2(void* self, double* sourceData[], void* gradient);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QScatterSeries* self, const char* name ```
void q_scatterseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QScatterSeries* self ```
const char* q_scatterseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QScatterSeries* self ```
double q_scatterseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QScatterSeries* self, double opacity ```
void q_scatterseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QScatterSeries* self ```
QChart* q_scatterseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QScatterSeries* self, QAbstractAxis* axis ```
bool q_scatterseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QScatterSeries* self, QAbstractAxis* axis ```
bool q_scatterseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QAbstractAxis* */ q_scatterseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QScatterSeries* self, bool enable ```
void q_scatterseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScatterSeries* self ```
const char* q_scatterseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScatterSeries* self, const char* name ```
void q_scatterseries_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScatterSeries* self, bool b ```
bool q_scatterseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScatterSeries* self ```
QThread* q_scatterseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScatterSeries* self, QThread* thread ```
void q_scatterseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScatterSeries* self, int interval ```
int32_t q_scatterseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScatterSeries* self, int id ```
void q_scatterseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QObject* */ q_scatterseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QScatterSeries* self, QObject* parent ```
void q_scatterseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScatterSeries* self, QObject* filterObj ```
void q_scatterseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScatterSeries* self, QObject* obj ```
void q_scatterseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scatterseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScatterSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scatterseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scatterseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scatterseries_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScatterSeries* self, const char* name, QVariant* value ```
bool q_scatterseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScatterSeries* self, const char* name ```
QVariant* q_scatterseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScatterSeries* self ```
const char** q_scatterseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScatterSeries* self ```
QBindingStorage* q_scatterseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScatterSeries* self ```
QBindingStorage* q_scatterseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QScatterSeries* self, void (*slot)(QObject*) ```
void q_scatterseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScatterSeries* self ```
QObject* q_scatterseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScatterSeries* self, const char* classname ```
bool q_scatterseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScatterSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scatterseries_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scatterseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScatterSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scatterseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScatterSeries* self, QObject* param1 ```
void q_scatterseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QScatterSeries* self, void (*slot)(QObject*, QObject*) ```
void q_scatterseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
bool q_scatterseries_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
bool q_scatterseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, bool (*slot)(QScatterSeries*, QEvent*) ```
void q_scatterseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QObject* watched, QEvent* event ```
bool q_scatterseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QObject* watched, QEvent* event ```
bool q_scatterseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, bool (*slot)(QScatterSeries*, QObject*, QEvent*) ```
void q_scatterseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QTimerEvent* event ```
void q_scatterseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QTimerEvent* event ```
void q_scatterseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QTimerEvent*) ```
void q_scatterseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QChildEvent* event ```
void q_scatterseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QChildEvent* event ```
void q_scatterseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QChildEvent*) ```
void q_scatterseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
void q_scatterseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
void q_scatterseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QEvent*) ```
void q_scatterseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QMetaMethod*) ```
void q_scatterseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QMetaMethod*) ```
void q_scatterseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self ```
QObject* q_scatterseries_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self ```
QObject* q_scatterseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, QObject* (*slot)() ```
void q_scatterseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self ```
int32_t q_scatterseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self ```
int32_t q_scatterseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, int32_t (*slot)() ```
void q_scatterseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, const char* signal ```
int32_t q_scatterseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, const char* signal ```
int32_t q_scatterseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, int32_t (*slot)(QScatterSeries*, const char*) ```
void q_scatterseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
bool q_scatterseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
bool q_scatterseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, bool (*slot)(QScatterSeries*, QMetaMethod*) ```
void q_scatterseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QScatterSeries* self ```
void q_scatterseries_delete(void* self);

/// https://doc.qt.io/qt-6/qscatterseries.html#types

typedef enum {
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPECIRCLE = 0,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPERECTANGLE = 1,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPEROTATEDRECTANGLE = 2,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPETRIANGLE = 3,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPESTAR = 4,
    QSCATTERSERIES_MARKERSHAPE_MARKERSHAPEPENTAGON = 5
} QScatterSeries__MarkerShape;

#endif
