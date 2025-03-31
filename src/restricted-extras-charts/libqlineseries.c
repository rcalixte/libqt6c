#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqxyseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqlineseries.hpp"
#include "libqlineseries.h"

/// https://doc.qt.io/qt-6/qlineseries.html

/// q_lineseries_new constructs a new QLineSeries object.
///
///
QLineSeries* q_lineseries_new() {
    return QLineSeries_new();
}

/// q_lineseries_new2 constructs a new QLineSeries object.
///
/// ``` QObject* parent ```
QLineSeries* q_lineseries_new2(void* parent) {
    return QLineSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLineSeries* self ```
QMetaObject* q_lineseries_meta_object(void* self) {
    return QLineSeries_MetaObject((QLineSeries*)self);
}

/// ``` QLineSeries* self, const char* param1 ```
void* q_lineseries_metacast(void* self, const char* param1) {
    return QLineSeries_Metacast((QLineSeries*)self, param1);
}

/// ``` QLineSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLineSeries_Metacall((QLineSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QLineSeries* self, int32_t (*slot)(QLineSeries*, enum QMetaObject__Call, int, void*) ```
void q_lineseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLineSeries_OnMetacall((QLineSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLineSeries_QBaseMetacall((QLineSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_lineseries_tr(const char* s) {
    libqt_string _str = QLineSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineseries.html#type)
///
/// ``` QLineSeries* self ```
int64_t q_lineseries_type(void* self) {
    return QLineSeries_Type((QLineSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLineSeries* self, int64_t (*slot)() ```
void q_lineseries_on_type(void* self, int64_t (*slot)()) {
    QLineSeries_OnType((QLineSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineSeries* self ```
int64_t q_lineseries_qbase_type(void* self) {
    return QLineSeries_QBaseType((QLineSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_lineseries_tr2(const char* s, const char* c) {
    libqt_string _str = QLineSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_lineseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLineSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QLineSeries* self, double x, double y ```
void q_lineseries_append(void* self, double x, double y) {
    QXYSeries_Append((QXYSeries*)self, x, y);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_append_with_point(void* self, void* point) {
    QXYSeries_AppendWithPoint((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QLineSeries* self, QPointF* points[] ```
void q_lineseries_append_with_points(void* self, void* points[]) {
    QPointF** points_arr = (QPointF**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QPointF*)points},
    };
    QXYSeries_AppendWithPoints((QXYSeries*)self, points_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, double oldX, double oldY, double newX, double newY ```
void q_lineseries_replace(void* self, double oldX, double oldY, double newX, double newY) {
    QXYSeries_Replace((QXYSeries*)self, oldX, oldY, newX, newY);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, QPointF* oldPoint, QPointF* newPoint ```
void q_lineseries_replace2(void* self, void* oldPoint, void* newPoint) {
    QXYSeries_Replace2((QXYSeries*)self, (QPointF*)oldPoint, (QPointF*)newPoint);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, int index, double newX, double newY ```
void q_lineseries_replace3(void* self, int index, double newX, double newY) {
    QXYSeries_Replace3((QXYSeries*)self, index, newX, newY);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, int index, QPointF* newPoint ```
void q_lineseries_replace4(void* self, int index, void* newPoint) {
    QXYSeries_Replace4((QXYSeries*)self, index, (QPointF*)newPoint);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QLineSeries* self, double x, double y ```
void q_lineseries_remove(void* self, double x, double y) {
    QXYSeries_Remove((QXYSeries*)self, x, y);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_remove_with_point(void* self, void* point) {
    QXYSeries_RemoveWithPoint((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_remove_with_index(void* self, int index) {
    QXYSeries_RemoveWithIndex((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// ``` QLineSeries* self, int index, int count ```
void q_lineseries_remove_points(void* self, int index, int count) {
    QXYSeries_RemovePoints((QXYSeries*)self, index, count);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// ``` QLineSeries* self, int index, QPointF* point ```
void q_lineseries_insert(void* self, int index, void* point) {
    QXYSeries_Insert((QXYSeries*)self, index, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// ``` QLineSeries* self ```
void q_lineseries_clear(void* self) {
    QXYSeries_Clear((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// ``` QLineSeries* self ```
int32_t q_lineseries_count(void* self) {
    return QXYSeries_Count((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// ``` QLineSeries* self ```
libqt_list /* of QPointF* */ q_lineseries_points(void* self) {
    libqt_list _arr = QXYSeries_Points((QXYSeries*)self);
    return _arr;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// ``` QLineSeries* self ```
libqt_list /* of QPointF* */ q_lineseries_points_vector(void* self) {
    libqt_list _arr = QXYSeries_PointsVector((QXYSeries*)self);
    return _arr;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// ``` QLineSeries* self, int index ```
QPointF* q_lineseries_at(void* self, int index) {
    return QXYSeries_At((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
///
/// ``` QLineSeries* self, QPointF* point ```
QXYSeries* q_lineseries_operator_shift_left(void* self, void* point) {
    return QXYSeries_OperatorShiftLeft((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
///
/// ``` QLineSeries* self, QPointF* points[] ```
QXYSeries* q_lineseries_operator_shift_left_with_points(void* self, void* points[]) {
    QPointF** points_arr = (QPointF**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QPointF*)points},
    };
    return QXYSeries_OperatorShiftLeftWithPoints((QXYSeries*)self, points_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// ``` QLineSeries* self ```
QPen* q_lineseries_pen(void* self) {
    return QXYSeries_Pen((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#brush)
///
/// ``` QLineSeries* self ```
QBrush* q_lineseries_brush(void* self) {
    return QXYSeries_Brush((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_selected_color(void* self, void* color) {
    QXYSeries_SetSelectedColor((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_selected_color(void* self) {
    return QXYSeries_SelectedColor((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_points_visible(void* self) {
    QXYSeries_SetPointsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_points_visible(void* self) {
    return QXYSeries_PointsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// ``` QLineSeries* self, const char* format ```
void q_lineseries_set_point_labels_format(void* self, const char* format) {
    QXYSeries_SetPointLabelsFormat((QXYSeries*)self, qstring(format));
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// ``` QLineSeries* self ```
const char* q_lineseries_point_labels_format(void* self) {
    libqt_string _str = QXYSeries_PointLabelsFormat((QXYSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_point_labels_visible(void* self) {
    QXYSeries_SetPointLabelsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_point_labels_visible(void* self) {
    return QXYSeries_PointLabelsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// ``` QLineSeries* self, QFont* font ```
void q_lineseries_set_point_labels_font(void* self, void* font) {
    QXYSeries_SetPointLabelsFont((QXYSeries*)self, (QFont*)font);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// ``` QLineSeries* self ```
QFont* q_lineseries_point_labels_font(void* self) {
    return QXYSeries_PointLabelsFont((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_point_labels_color(void* self, void* color) {
    QXYSeries_SetPointLabelsColor((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_point_labels_color(void* self) {
    return QXYSeries_PointLabelsColor((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_point_labels_clipping(void* self) {
    QXYSeries_SetPointLabelsClipping((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// ``` QLineSeries* self ```
bool q_lineseries_point_labels_clipping(void* self) {
    return QXYSeries_PointLabelsClipping((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QLineSeries* self, QPointF* points[] ```
void q_lineseries_replace_with_points(void* self, void* points[]) {
    QPointF** points_arr = (QPointF**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QPointF*)points},
    };
    QXYSeries_ReplaceWithPoints((QXYSeries*)self, points_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// ``` QLineSeries* self, int index ```
bool q_lineseries_is_point_selected(void* self, int index) {
    return QXYSeries_IsPointSelected((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_select_point(void* self, int index) {
    QXYSeries_SelectPoint((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_deselect_point(void* self, int index) {
    QXYSeries_DeselectPoint((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// ``` QLineSeries* self, int index, bool selected ```
void q_lineseries_set_point_selected(void* self, int index, bool selected) {
    QXYSeries_SetPointSelected((QXYSeries*)self, index, selected);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// ``` QLineSeries* self ```
void q_lineseries_select_all_points(void* self) {
    QXYSeries_SelectAllPoints((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// ``` QLineSeries* self ```
void q_lineseries_deselect_all_points(void* self) {
    QXYSeries_DeselectAllPoints((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// ``` QLineSeries* self, int* indexes[] ```
void q_lineseries_select_points(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QXYSeries_SelectPoints((QXYSeries*)self, indexes_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// ``` QLineSeries* self, int* indexes[] ```
void q_lineseries_deselect_points(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QXYSeries_DeselectPoints((QXYSeries*)self, indexes_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// ``` QLineSeries* self, int* indexes[] ```
void q_lineseries_toggle_selection(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QXYSeries_ToggleSelection((QXYSeries*)self, indexes_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// ``` QLineSeries* self ```
libqt_list /* of int */ q_lineseries_selected_points(void* self) {
    libqt_list _arr = QXYSeries_SelectedPoints((QXYSeries*)self);
    return _arr;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// ``` QLineSeries* self, QImage* lightMarker ```
void q_lineseries_set_light_marker(void* self, void* lightMarker) {
    QXYSeries_SetLightMarker((QXYSeries*)self, (QImage*)lightMarker);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// ``` QLineSeries* self ```
QImage* q_lineseries_light_marker(void* self) {
    return QXYSeries_LightMarker((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// ``` QLineSeries* self, QImage* selectedLightMarker ```
void q_lineseries_set_selected_light_marker(void* self, void* selectedLightMarker) {
    QXYSeries_SetSelectedLightMarker((QXYSeries*)self, (QImage*)selectedLightMarker);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// ``` QLineSeries* self ```
QImage* q_lineseries_selected_light_marker(void* self) {
    return QXYSeries_SelectedLightMarker((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
///
/// ``` QLineSeries* self, double size ```
void q_lineseries_set_marker_size(void* self, double size) {
    QXYSeries_SetMarkerSize((QXYSeries*)self, size);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
///
/// ``` QLineSeries* self ```
double q_lineseries_marker_size(void* self) {
    return QXYSeries_MarkerSize((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_best_fit_line_visible(void* self) {
    QXYSeries_SetBestFitLineVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_best_fit_line_visible(void* self) {
    return QXYSeries_BestFitLineVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// ``` QLineSeries* self, bool* ok ```
libqt_pair /* tuple of double and double */ q_lineseries_best_fit_line_equation(void* self, bool* ok) {
    return QXYSeries_BestFitLineEquation((QXYSeries*)self, (bool*)ok);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_set_best_fit_line_pen(void* self, void* pen) {
    QXYSeries_SetBestFitLinePen((QXYSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// ``` QLineSeries* self ```
QPen* q_lineseries_best_fit_line_pen(void* self) {
    return QXYSeries_BestFitLinePen((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_best_fit_line_color(void* self, void* color) {
    QXYSeries_SetBestFitLineColor((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_best_fit_line_color(void* self) {
    return QXYSeries_BestFitLineColor((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_clear_point_configuration(void* self, int index) {
    QXYSeries_ClearPointConfiguration((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QLineSeries* self, int index, enum QXYSeries__PointConfiguration key ```
void q_lineseries_clear_point_configuration2(void* self, int index, int64_t key) {
    QXYSeries_ClearPointConfiguration2((QXYSeries*)self, index, key);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QLineSeries* self ```
void q_lineseries_clear_points_configuration(void* self) {
    QXYSeries_ClearPointsConfiguration((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QLineSeries* self, enum QXYSeries__PointConfiguration key ```
void q_lineseries_clear_points_configuration_with_key(void* self, int64_t key) {
    QXYSeries_ClearPointsConfigurationWithKey((QXYSeries*)self, key);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QLineSeries* self, int index, libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */ configuration ```
void q_lineseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration) {
    QXYSeries_SetPointConfiguration((QXYSeries*)self, index, configuration);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QLineSeries* self, int index, enum QXYSeries__PointConfiguration key, QVariant* value ```
void q_lineseries_set_point_configuration2(void* self, int index, int64_t key, void* value) {
    QXYSeries_SetPointConfiguration2((QXYSeries*)self, index, key, (QVariant*)value);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// ``` QLineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ pointsConfiguration ```
void q_lineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration) {
    QXYSeries_SetPointsConfiguration((QXYSeries*)self, pointsConfiguration);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// ``` QLineSeries* self, int index ```
libqt_map /* of int64_t to QVariant* */ q_lineseries_point_configuration(void* self, int index) {
    return QXYSeries_PointConfiguration((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// ``` QLineSeries* self ```
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_lineseries_points_configuration(void* self) {
    return QXYSeries_PointsConfiguration((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// ``` QLineSeries* self, double* sourceData[], double minSize, double maxSize ```
void q_lineseries_size_by(void* self, double* sourceData[], double minSize, double maxSize) {
    size_t sourceData_len = 0;
    while (sourceData[sourceData_len] != NULL) {
        sourceData_len++;
    }
    libqt_list sourceData_list = {
        .len = sourceData_len,
        .data = {(double*)sourceData},
    };
    QXYSeries_SizeBy((QXYSeries*)self, sourceData_list, minSize, maxSize);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QLineSeries* self, double* sourceData[] ```
void q_lineseries_color_by(void* self, double* sourceData[]) {
    size_t sourceData_len = 0;
    while (sourceData[sourceData_len] != NULL) {
        sourceData_len++;
    }
    libqt_list sourceData_list = {
        .len = sourceData_len,
        .data = {(double*)sourceData},
    };
    QXYSeries_ColorBy((QXYSeries*)self, sourceData_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_clicked(void* self, void* point) {
    QXYSeries_Clicked((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_lineseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Clicked((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QLineSeries* self, QPointF* point, bool state ```
void q_lineseries_hovered(void* self, void* point, bool state) {
    QXYSeries_Hovered((QXYSeries*)self, (QPointF*)point, state);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPointF*, bool) ```
void q_lineseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QXYSeries_Connect_Hovered((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_pressed(void* self, void* point) {
    QXYSeries_Pressed((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_lineseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Pressed((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_released(void* self, void* point) {
    QXYSeries_Released((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_lineseries_on_released(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Released((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QLineSeries* self, QPointF* point ```
void q_lineseries_double_clicked(void* self, void* point) {
    QXYSeries_DoubleClicked((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_lineseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_DoubleClicked((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_point_replaced(void* self, int index) {
    QXYSeries_PointReplaced((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, int) ```
void q_lineseries_on_point_replaced(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointReplaced((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_point_removed(void* self, int index) {
    QXYSeries_PointRemoved((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, int) ```
void q_lineseries_on_point_removed(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointRemoved((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QLineSeries* self, int index ```
void q_lineseries_point_added(void* self, int index) {
    QXYSeries_PointAdded((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, int) ```
void q_lineseries_on_point_added(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointAdded((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_color_changed(void* self, void* color) {
    QXYSeries_ColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_lineseries_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_ColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_selected_color_changed(void* self, void* color) {
    QXYSeries_SelectedColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_lineseries_on_selected_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QLineSeries* self ```
void q_lineseries_points_replaced(void* self) {
    QXYSeries_PointsReplaced((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*) ```
void q_lineseries_on_points_replaced(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_PointsReplaced((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QLineSeries* self, const char* format ```
void q_lineseries_point_labels_format_changed(void* self, const char* format) {
    QXYSeries_PointLabelsFormatChanged((QXYSeries*)self, qstring(format));
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, const char*) ```
void q_lineseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QXYSeries_Connect_PointLabelsFormatChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_point_labels_visibility_changed(void* self, bool visible) {
    QXYSeries_PointLabelsVisibilityChanged((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_lineseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QLineSeries* self, QFont* font ```
void q_lineseries_point_labels_font_changed(void* self, void* font) {
    QXYSeries_PointLabelsFontChanged((QXYSeries*)self, (QFont*)font);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QFont*) ```
void q_lineseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsFontChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_point_labels_color_changed(void* self, void* color) {
    QXYSeries_PointLabelsColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_lineseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QLineSeries* self, bool clipping ```
void q_lineseries_point_labels_clipping_changed(void* self, bool clipping) {
    QXYSeries_PointLabelsClippingChanged((QXYSeries*)self, clipping);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_lineseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsClippingChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QLineSeries* self, int index, int count ```
void q_lineseries_points_removed(void* self, int index, int count) {
    QXYSeries_PointsRemoved((QXYSeries*)self, index, count);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, int, int) ```
void q_lineseries_on_points_removed(void* self, void (*slot)(void*, int, int)) {
    QXYSeries_Connect_PointsRemoved((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_pen_changed(void* self, void* pen) {
    QXYSeries_PenChanged((QXYSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_lineseries_on_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PenChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_selected_points_changed(void* self) {
    QXYSeries_SelectedPointsChanged((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*) ```
void q_lineseries_on_selected_points_changed(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_SelectedPointsChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QLineSeries* self, QImage* lightMarker ```
void q_lineseries_light_marker_changed(void* self, void* lightMarker) {
    QXYSeries_LightMarkerChanged((QXYSeries*)self, (QImage*)lightMarker);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_lineseries_on_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_LightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QLineSeries* self, QImage* selectedLightMarker ```
void q_lineseries_selected_light_marker_changed(void* self, void* selectedLightMarker) {
    QXYSeries_SelectedLightMarkerChanged((QXYSeries*)self, (QImage*)selectedLightMarker);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_lineseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedLightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_best_fit_line_visibility_changed(void* self, bool visible) {
    QXYSeries_BestFitLineVisibilityChanged((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_lineseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_BestFitLineVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_best_fit_line_pen_changed(void* self, void* pen) {
    QXYSeries_BestFitLinePenChanged((QXYSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_lineseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLinePenChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_best_fit_line_color_changed(void* self, void* color) {
    QXYSeries_BestFitLineColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_lineseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLineColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QLineSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ configuration ```
void q_lineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration) {
    QXYSeries_PointsConfigurationChanged((QXYSeries*)self, configuration);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */) ```
void q_lineseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */)) {
    QXYSeries_Connect_PointsConfigurationChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
///
/// ``` QLineSeries* self, double size ```
void q_lineseries_marker_size_changed(void* self, double size) {
    QXYSeries_MarkerSizeChanged((QXYSeries*)self, size);
}

/// Inherited from QXYSeries
///
/// ``` QLineSeries* self, void (*slot)(QXYSeries*, double) ```
void q_lineseries_on_marker_size_changed(void* self, void (*slot)(void*, double)) {
    QXYSeries_Connect_MarkerSizeChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_points_visible1(void* self, bool visible) {
    QXYSeries_SetPointsVisible1((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_point_labels_visible1(void* self, bool visible) {
    QXYSeries_SetPointLabelsVisible1((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QLineSeries* self, bool enabled ```
void q_lineseries_set_point_labels_clipping1(void* self, bool enabled) {
    QXYSeries_SetPointLabelsClipping1((QXYSeries*)self, enabled);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_best_fit_line_visible1(void* self, bool visible) {
    QXYSeries_SetBestFitLineVisible1((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QLineSeries* self, double* sourceData[], QLinearGradient* gradient ```
void q_lineseries_color_by2(void* self, double* sourceData[], void* gradient) {
    size_t sourceData_len = 0;
    while (sourceData[sourceData_len] != NULL) {
        sourceData_len++;
    }
    libqt_list sourceData_list = {
        .len = sourceData_len,
        .data = {(double*)sourceData},
    };
    QXYSeries_ColorBy2((QXYSeries*)self, sourceData_list, (QLinearGradient*)gradient);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QLineSeries* self, const char* name ```
void q_lineseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QLineSeries* self ```
const char* q_lineseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QLineSeries* self ```
double q_lineseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QLineSeries* self, double opacity ```
void q_lineseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QLineSeries* self ```
void q_lineseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QLineSeries* self ```
bool q_lineseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QLineSeries* self ```
QChart* q_lineseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QLineSeries* self, QAbstractAxis* axis ```
bool q_lineseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QLineSeries* self, QAbstractAxis* axis ```
bool q_lineseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QLineSeries* self ```
libqt_list /* of QAbstractAxis* */ q_lineseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QLineSeries* self ```
void q_lineseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QLineSeries* self ```
void q_lineseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QLineSeries* self, void (*slot)(QAbstractSeries*) ```
void q_lineseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QLineSeries* self, void (*slot)(QAbstractSeries*) ```
void q_lineseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QLineSeries* self, void (*slot)(QAbstractSeries*) ```
void q_lineseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QLineSeries* self ```
void q_lineseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QLineSeries* self, void (*slot)(QAbstractSeries*) ```
void q_lineseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QLineSeries* self, bool visible ```
void q_lineseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QLineSeries* self, bool enable ```
void q_lineseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLineSeries* self ```
const char* q_lineseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLineSeries* self, const char* name ```
void q_lineseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLineSeries* self ```
bool q_lineseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLineSeries* self ```
bool q_lineseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLineSeries* self, bool b ```
bool q_lineseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLineSeries* self ```
QThread* q_lineseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLineSeries* self, QThread* thread ```
void q_lineseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineSeries* self, int interval ```
int32_t q_lineseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLineSeries* self, int id ```
void q_lineseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLineSeries* self ```
libqt_list /* of QObject* */ q_lineseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLineSeries* self, QObject* parent ```
void q_lineseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLineSeries* self, QObject* filterObj ```
void q_lineseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLineSeries* self, QObject* obj ```
void q_lineseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_lineseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_lineseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_lineseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_lineseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLineSeries* self ```
void q_lineseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLineSeries* self ```
void q_lineseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLineSeries* self, const char* name, QVariant* value ```
bool q_lineseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLineSeries* self, const char* name ```
QVariant* q_lineseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLineSeries* self ```
const char** q_lineseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineSeries* self ```
QBindingStorage* q_lineseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineSeries* self ```
QBindingStorage* q_lineseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineSeries* self ```
void q_lineseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QLineSeries* self, void (*slot)(QObject*) ```
void q_lineseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLineSeries* self ```
QObject* q_lineseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLineSeries* self, const char* classname ```
bool q_lineseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLineSeries* self ```
void q_lineseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_lineseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineSeries* self, QObject* param1 ```
void q_lineseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QLineSeries* self, void (*slot)(QObject*, QObject*) ```
void q_lineseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPen)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_set_pen(void* self, void* pen) {
    QLineSeries_SetPen((QLineSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QPen* pen ```
void q_lineseries_qbase_set_pen(void* self, void* pen) {
    QLineSeries_QBaseSetPen((QLineSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QPen*) ```
void q_lineseries_on_set_pen(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnSetPen((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QBrush* brush ```
void q_lineseries_set_brush(void* self, void* brush) {
    QLineSeries_SetBrush((QLineSeries*)self, (QBrush*)brush);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QBrush* brush ```
void q_lineseries_qbase_set_brush(void* self, void* brush) {
    QLineSeries_QBaseSetBrush((QLineSeries*)self, (QBrush*)brush);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QBrush*) ```
void q_lineseries_on_set_brush(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnSetBrush((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_set_color(void* self, void* color) {
    QLineSeries_SetColor((QLineSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QColor* color ```
void q_lineseries_qbase_set_color(void* self, void* color) {
    QLineSeries_QBaseSetColor((QLineSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QColor*) ```
void q_lineseries_on_set_color(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnSetColor((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_color(void* self) {
    return QLineSeries_Color((QLineSeries*)self);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self ```
QColor* q_lineseries_qbase_color(void* self) {
    return QLineSeries_QBaseColor((QLineSeries*)self);
}

/// Inherited from QXYSeries
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, QColor* (*slot)() ```
void q_lineseries_on_color(void* self, QColor* (*slot)()) {
    QLineSeries_OnColor((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
bool q_lineseries_event(void* self, void* event) {
    return QLineSeries_Event((QLineSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
bool q_lineseries_qbase_event(void* self, void* event) {
    return QLineSeries_QBaseEvent((QLineSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, bool (*slot)(QLineSeries*, QEvent*) ```
void q_lineseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QLineSeries_OnEvent((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QObject* watched, QEvent* event ```
bool q_lineseries_event_filter(void* self, void* watched, void* event) {
    return QLineSeries_EventFilter((QLineSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QObject* watched, QEvent* event ```
bool q_lineseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QLineSeries_QBaseEventFilter((QLineSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, bool (*slot)(QLineSeries*, QObject*, QEvent*) ```
void q_lineseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLineSeries_OnEventFilter((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QTimerEvent* event ```
void q_lineseries_timer_event(void* self, void* event) {
    QLineSeries_TimerEvent((QLineSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QTimerEvent* event ```
void q_lineseries_qbase_timer_event(void* self, void* event) {
    QLineSeries_QBaseTimerEvent((QLineSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QTimerEvent*) ```
void q_lineseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnTimerEvent((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QChildEvent* event ```
void q_lineseries_child_event(void* self, void* event) {
    QLineSeries_ChildEvent((QLineSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QChildEvent* event ```
void q_lineseries_qbase_child_event(void* self, void* event) {
    QLineSeries_QBaseChildEvent((QLineSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QChildEvent*) ```
void q_lineseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnChildEvent((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
void q_lineseries_custom_event(void* self, void* event) {
    QLineSeries_CustomEvent((QLineSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QEvent* event ```
void q_lineseries_qbase_custom_event(void* self, void* event) {
    QLineSeries_QBaseCustomEvent((QLineSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QEvent*) ```
void q_lineseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnCustomEvent((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_connect_notify(void* self, void* signal) {
    QLineSeries_ConnectNotify((QLineSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_qbase_connect_notify(void* self, void* signal) {
    QLineSeries_QBaseConnectNotify((QLineSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QMetaMethod*) ```
void q_lineseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnConnectNotify((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_disconnect_notify(void* self, void* signal) {
    QLineSeries_DisconnectNotify((QLineSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
void q_lineseries_qbase_disconnect_notify(void* self, void* signal) {
    QLineSeries_QBaseDisconnectNotify((QLineSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, void (*slot)(QLineSeries*, QMetaMethod*) ```
void q_lineseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLineSeries_OnDisconnectNotify((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self ```
QObject* q_lineseries_sender(void* self) {
    return QLineSeries_Sender((QLineSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self ```
QObject* q_lineseries_qbase_sender(void* self) {
    return QLineSeries_QBaseSender((QLineSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, QObject* (*slot)() ```
void q_lineseries_on_sender(void* self, QObject* (*slot)()) {
    QLineSeries_OnSender((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self ```
int32_t q_lineseries_sender_signal_index(void* self) {
    return QLineSeries_SenderSignalIndex((QLineSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self ```
int32_t q_lineseries_qbase_sender_signal_index(void* self) {
    return QLineSeries_QBaseSenderSignalIndex((QLineSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, int32_t (*slot)() ```
void q_lineseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLineSeries_OnSenderSignalIndex((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, const char* signal ```
int32_t q_lineseries_receivers(void* self, const char* signal) {
    return QLineSeries_Receivers((QLineSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, const char* signal ```
int32_t q_lineseries_qbase_receivers(void* self, const char* signal) {
    return QLineSeries_QBaseReceivers((QLineSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, int32_t (*slot)(QLineSeries*, const char*) ```
void q_lineseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLineSeries_OnReceivers((QLineSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
bool q_lineseries_is_signal_connected(void* self, void* signal) {
    return QLineSeries_IsSignalConnected((QLineSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineSeries* self, QMetaMethod* signal ```
bool q_lineseries_qbase_is_signal_connected(void* self, void* signal) {
    return QLineSeries_QBaseIsSignalConnected((QLineSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineSeries* self, bool (*slot)(QLineSeries*, QMetaMethod*) ```
void q_lineseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLineSeries_OnIsSignalConnected((QLineSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QLineSeries* self ```
void q_lineseries_delete(void* self) {
    QLineSeries_Delete((QLineSeries*)(self));
}