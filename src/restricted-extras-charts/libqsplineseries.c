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
#include "libqlineseries.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqxyseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqsplineseries.hpp"
#include "libqsplineseries.h"

QSplineSeries* q_splineseries_new() {
    return QSplineSeries_new();
}

QSplineSeries* q_splineseries_new2(void* parent) {
    return QSplineSeries_new2((QObject*)parent);
}

QMetaObject* q_splineseries_meta_object(void* self) {
    return QSplineSeries_MetaObject((QSplineSeries*)self);
}

void* q_splineseries_metacast(void* self, const char* param1) {
    return QSplineSeries_Metacast((QSplineSeries*)self, param1);
}

int32_t q_splineseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplineSeries_Metacall((QSplineSeries*)self, param1, param2, param3);
}

void q_splineseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSplineSeries_OnMetacall((QSplineSeries*)self, (intptr_t)slot);
}

int32_t q_splineseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplineSeries_QBaseMetacall((QSplineSeries*)self, param1, param2, param3);
}

const char* q_splineseries_tr(const char* s) {
    libqt_string _str = QSplineSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_splineseries_type(void* self) {
    return QSplineSeries_Type((QSplineSeries*)self);
}

void q_splineseries_on_type(void* self, int64_t (*slot)()) {
    QSplineSeries_OnType((QSplineSeries*)self, (intptr_t)slot);
}

int64_t q_splineseries_qbase_type(void* self) {
    return QSplineSeries_QBaseType((QSplineSeries*)self);
}

const char* q_splineseries_tr2(const char* s, const char* c) {
    libqt_string _str = QSplineSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_splineseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSplineSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splineseries_append(void* self, double x, double y) {
    QXYSeries_Append((QXYSeries*)self, x, y);
}

void q_splineseries_append_with_point(void* self, void* point) {
    QXYSeries_AppendWithPoint((QXYSeries*)self, (QPointF*)point);
}

void q_splineseries_append_with_points(void* self, void* points[]) {
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

void q_splineseries_replace(void* self, double oldX, double oldY, double newX, double newY) {
    QXYSeries_Replace((QXYSeries*)self, oldX, oldY, newX, newY);
}

void q_splineseries_replace2(void* self, void* oldPoint, void* newPoint) {
    QXYSeries_Replace2((QXYSeries*)self, (QPointF*)oldPoint, (QPointF*)newPoint);
}

void q_splineseries_replace3(void* self, int index, double newX, double newY) {
    QXYSeries_Replace3((QXYSeries*)self, index, newX, newY);
}

void q_splineseries_replace4(void* self, int index, void* newPoint) {
    QXYSeries_Replace4((QXYSeries*)self, index, (QPointF*)newPoint);
}

void q_splineseries_remove(void* self, double x, double y) {
    QXYSeries_Remove((QXYSeries*)self, x, y);
}

void q_splineseries_remove_with_point(void* self, void* point) {
    QXYSeries_RemoveWithPoint((QXYSeries*)self, (QPointF*)point);
}

void q_splineseries_remove_with_index(void* self, int index) {
    QXYSeries_RemoveWithIndex((QXYSeries*)self, index);
}

void q_splineseries_remove_points(void* self, int index, int count) {
    QXYSeries_RemovePoints((QXYSeries*)self, index, count);
}

void q_splineseries_insert(void* self, int index, void* point) {
    QXYSeries_Insert((QXYSeries*)self, index, (QPointF*)point);
}

void q_splineseries_clear(void* self) {
    QXYSeries_Clear((QXYSeries*)self);
}

int32_t q_splineseries_count(void* self) {
    return QXYSeries_Count((QXYSeries*)self);
}

libqt_list /* of QPointF* */ q_splineseries_points(void* self) {
    libqt_list _arr = QXYSeries_Points((QXYSeries*)self);
    return _arr;
}

libqt_list /* of QPointF* */ q_splineseries_points_vector(void* self) {
    libqt_list _arr = QXYSeries_PointsVector((QXYSeries*)self);
    return _arr;
}

QPointF* q_splineseries_at(void* self, int index) {
    return QXYSeries_At((QXYSeries*)self, index);
}

QXYSeries* q_splineseries_operator_shift_left(void* self, void* point) {
    return QXYSeries_OperatorShiftLeft((QXYSeries*)self, (QPointF*)point);
}

QXYSeries* q_splineseries_operator_shift_left_with_points(void* self, void* points[]) {
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

QPen* q_splineseries_pen(void* self) {
    return QXYSeries_Pen((QXYSeries*)self);
}

QBrush* q_splineseries_brush(void* self) {
    return QXYSeries_Brush((QXYSeries*)self);
}

void q_splineseries_set_selected_color(void* self, void* color) {
    QXYSeries_SetSelectedColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_splineseries_selected_color(void* self) {
    return QXYSeries_SelectedColor((QXYSeries*)self);
}

void q_splineseries_set_points_visible(void* self) {
    QXYSeries_SetPointsVisible((QXYSeries*)self);
}

bool q_splineseries_points_visible(void* self) {
    return QXYSeries_PointsVisible((QXYSeries*)self);
}

void q_splineseries_set_point_labels_format(void* self, const char* format) {
    QXYSeries_SetPointLabelsFormat((QXYSeries*)self, qstring(format));
}

const char* q_splineseries_point_labels_format(void* self) {
    libqt_string _str = QXYSeries_PointLabelsFormat((QXYSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splineseries_set_point_labels_visible(void* self) {
    QXYSeries_SetPointLabelsVisible((QXYSeries*)self);
}

bool q_splineseries_point_labels_visible(void* self) {
    return QXYSeries_PointLabelsVisible((QXYSeries*)self);
}

void q_splineseries_set_point_labels_font(void* self, void* font) {
    QXYSeries_SetPointLabelsFont((QXYSeries*)self, (QFont*)font);
}

QFont* q_splineseries_point_labels_font(void* self) {
    return QXYSeries_PointLabelsFont((QXYSeries*)self);
}

void q_splineseries_set_point_labels_color(void* self, void* color) {
    QXYSeries_SetPointLabelsColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_splineseries_point_labels_color(void* self) {
    return QXYSeries_PointLabelsColor((QXYSeries*)self);
}

void q_splineseries_set_point_labels_clipping(void* self) {
    QXYSeries_SetPointLabelsClipping((QXYSeries*)self);
}

bool q_splineseries_point_labels_clipping(void* self) {
    return QXYSeries_PointLabelsClipping((QXYSeries*)self);
}

void q_splineseries_replace_with_points(void* self, void* points[]) {
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

bool q_splineseries_is_point_selected(void* self, int index) {
    return QXYSeries_IsPointSelected((QXYSeries*)self, index);
}

void q_splineseries_select_point(void* self, int index) {
    QXYSeries_SelectPoint((QXYSeries*)self, index);
}

void q_splineseries_deselect_point(void* self, int index) {
    QXYSeries_DeselectPoint((QXYSeries*)self, index);
}

void q_splineseries_set_point_selected(void* self, int index, bool selected) {
    QXYSeries_SetPointSelected((QXYSeries*)self, index, selected);
}

void q_splineseries_select_all_points(void* self) {
    QXYSeries_SelectAllPoints((QXYSeries*)self);
}

void q_splineseries_deselect_all_points(void* self) {
    QXYSeries_DeselectAllPoints((QXYSeries*)self);
}

void q_splineseries_select_points(void* self, int* indexes[]) {
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

void q_splineseries_deselect_points(void* self, int* indexes[]) {
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

void q_splineseries_toggle_selection(void* self, int* indexes[]) {
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

libqt_list /* of int */ q_splineseries_selected_points(void* self) {
    libqt_list _arr = QXYSeries_SelectedPoints((QXYSeries*)self);
    return _arr;
}

void q_splineseries_set_light_marker(void* self, void* lightMarker) {
    QXYSeries_SetLightMarker((QXYSeries*)self, (QImage*)lightMarker);
}

QImage* q_splineseries_light_marker(void* self) {
    return QXYSeries_LightMarker((QXYSeries*)self);
}

void q_splineseries_set_selected_light_marker(void* self, void* selectedLightMarker) {
    QXYSeries_SetSelectedLightMarker((QXYSeries*)self, (QImage*)selectedLightMarker);
}

QImage* q_splineseries_selected_light_marker(void* self) {
    return QXYSeries_SelectedLightMarker((QXYSeries*)self);
}

void q_splineseries_set_marker_size(void* self, double size) {
    QXYSeries_SetMarkerSize((QXYSeries*)self, size);
}

double q_splineseries_marker_size(void* self) {
    return QXYSeries_MarkerSize((QXYSeries*)self);
}

void q_splineseries_set_best_fit_line_visible(void* self) {
    QXYSeries_SetBestFitLineVisible((QXYSeries*)self);
}

bool q_splineseries_best_fit_line_visible(void* self) {
    return QXYSeries_BestFitLineVisible((QXYSeries*)self);
}

libqt_pair /* tuple of double and double */ q_splineseries_best_fit_line_equation(void* self, bool* ok) {
    return QXYSeries_BestFitLineEquation((QXYSeries*)self, (bool*)ok);
}

void q_splineseries_set_best_fit_line_pen(void* self, void* pen) {
    QXYSeries_SetBestFitLinePen((QXYSeries*)self, (QPen*)pen);
}

QPen* q_splineseries_best_fit_line_pen(void* self) {
    return QXYSeries_BestFitLinePen((QXYSeries*)self);
}

void q_splineseries_set_best_fit_line_color(void* self, void* color) {
    QXYSeries_SetBestFitLineColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_splineseries_best_fit_line_color(void* self) {
    return QXYSeries_BestFitLineColor((QXYSeries*)self);
}

void q_splineseries_clear_point_configuration(void* self, int index) {
    QXYSeries_ClearPointConfiguration((QXYSeries*)self, index);
}

void q_splineseries_clear_point_configuration2(void* self, int index, int64_t key) {
    QXYSeries_ClearPointConfiguration2((QXYSeries*)self, index, key);
}

void q_splineseries_clear_points_configuration(void* self) {
    QXYSeries_ClearPointsConfiguration((QXYSeries*)self);
}

void q_splineseries_clear_points_configuration_with_key(void* self, int64_t key) {
    QXYSeries_ClearPointsConfigurationWithKey((QXYSeries*)self, key);
}

void q_splineseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration) {
    QXYSeries_SetPointConfiguration((QXYSeries*)self, index, configuration);
}

void q_splineseries_set_point_configuration2(void* self, int index, int64_t key, void* value) {
    QXYSeries_SetPointConfiguration2((QXYSeries*)self, index, key, (QVariant*)value);
}

void q_splineseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration) {
    QXYSeries_SetPointsConfiguration((QXYSeries*)self, pointsConfiguration);
}

libqt_map /* of int64_t to QVariant* */ q_splineseries_point_configuration(void* self, int index) {
    return QXYSeries_PointConfiguration((QXYSeries*)self, index);
}

libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_splineseries_points_configuration(void* self) {
    return QXYSeries_PointsConfiguration((QXYSeries*)self);
}

void q_splineseries_size_by(void* self, double* sourceData[], double minSize, double maxSize) {
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

void q_splineseries_color_by(void* self, double* sourceData[]) {
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

void q_splineseries_clicked(void* self, void* point) {
    QXYSeries_Clicked((QXYSeries*)self, (QPointF*)point);
}

void q_splineseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Clicked((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_hovered(void* self, void* point, bool state) {
    QXYSeries_Hovered((QXYSeries*)self, (QPointF*)point, state);
}

void q_splineseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QXYSeries_Connect_Hovered((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_pressed(void* self, void* point) {
    QXYSeries_Pressed((QXYSeries*)self, (QPointF*)point);
}

void q_splineseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Pressed((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_released(void* self, void* point) {
    QXYSeries_Released((QXYSeries*)self, (QPointF*)point);
}

void q_splineseries_on_released(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Released((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_double_clicked(void* self, void* point) {
    QXYSeries_DoubleClicked((QXYSeries*)self, (QPointF*)point);
}

void q_splineseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_DoubleClicked((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_replaced(void* self, int index) {
    QXYSeries_PointReplaced((QXYSeries*)self, index);
}

void q_splineseries_on_point_replaced(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointReplaced((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_removed(void* self, int index) {
    QXYSeries_PointRemoved((QXYSeries*)self, index);
}

void q_splineseries_on_point_removed(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointRemoved((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_added(void* self, int index) {
    QXYSeries_PointAdded((QXYSeries*)self, index);
}

void q_splineseries_on_point_added(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointAdded((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_color_changed(void* self, void* color) {
    QXYSeries_ColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_splineseries_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_ColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_selected_color_changed(void* self, void* color) {
    QXYSeries_SelectedColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_splineseries_on_selected_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_points_replaced(void* self) {
    QXYSeries_PointsReplaced((QXYSeries*)self);
}

void q_splineseries_on_points_replaced(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_PointsReplaced((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_labels_format_changed(void* self, const char* format) {
    QXYSeries_PointLabelsFormatChanged((QXYSeries*)self, qstring(format));
}

void q_splineseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QXYSeries_Connect_PointLabelsFormatChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_labels_visibility_changed(void* self, bool visible) {
    QXYSeries_PointLabelsVisibilityChanged((QXYSeries*)self, visible);
}

void q_splineseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_labels_font_changed(void* self, void* font) {
    QXYSeries_PointLabelsFontChanged((QXYSeries*)self, (QFont*)font);
}

void q_splineseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsFontChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_labels_color_changed(void* self, void* color) {
    QXYSeries_PointLabelsColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_splineseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_point_labels_clipping_changed(void* self, bool clipping) {
    QXYSeries_PointLabelsClippingChanged((QXYSeries*)self, clipping);
}

void q_splineseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsClippingChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_points_removed(void* self, int index, int count) {
    QXYSeries_PointsRemoved((QXYSeries*)self, index, count);
}

void q_splineseries_on_points_removed(void* self, void (*slot)(void*, int, int)) {
    QXYSeries_Connect_PointsRemoved((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_pen_changed(void* self, void* pen) {
    QXYSeries_PenChanged((QXYSeries*)self, (QPen*)pen);
}

void q_splineseries_on_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PenChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_selected_points_changed(void* self) {
    QXYSeries_SelectedPointsChanged((QXYSeries*)self);
}

void q_splineseries_on_selected_points_changed(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_SelectedPointsChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_light_marker_changed(void* self, void* lightMarker) {
    QXYSeries_LightMarkerChanged((QXYSeries*)self, (QImage*)lightMarker);
}

void q_splineseries_on_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_LightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_selected_light_marker_changed(void* self, void* selectedLightMarker) {
    QXYSeries_SelectedLightMarkerChanged((QXYSeries*)self, (QImage*)selectedLightMarker);
}

void q_splineseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedLightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_best_fit_line_visibility_changed(void* self, bool visible) {
    QXYSeries_BestFitLineVisibilityChanged((QXYSeries*)self, visible);
}

void q_splineseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_BestFitLineVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_best_fit_line_pen_changed(void* self, void* pen) {
    QXYSeries_BestFitLinePenChanged((QXYSeries*)self, (QPen*)pen);
}

void q_splineseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLinePenChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_best_fit_line_color_changed(void* self, void* color) {
    QXYSeries_BestFitLineColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_splineseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLineColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration) {
    QXYSeries_PointsConfigurationChanged((QXYSeries*)self, configuration);
}

void q_splineseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */)) {
    QXYSeries_Connect_PointsConfigurationChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_marker_size_changed(void* self, double size) {
    QXYSeries_MarkerSizeChanged((QXYSeries*)self, size);
}

void q_splineseries_on_marker_size_changed(void* self, void (*slot)(void*, double)) {
    QXYSeries_Connect_MarkerSizeChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_splineseries_set_points_visible1(void* self, bool visible) {
    QXYSeries_SetPointsVisible1((QXYSeries*)self, visible);
}

void q_splineseries_set_point_labels_visible1(void* self, bool visible) {
    QXYSeries_SetPointLabelsVisible1((QXYSeries*)self, visible);
}

void q_splineseries_set_point_labels_clipping1(void* self, bool enabled) {
    QXYSeries_SetPointLabelsClipping1((QXYSeries*)self, enabled);
}

void q_splineseries_set_best_fit_line_visible1(void* self, bool visible) {
    QXYSeries_SetBestFitLineVisible1((QXYSeries*)self, visible);
}

void q_splineseries_color_by2(void* self, double* sourceData[], void* gradient) {
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

void q_splineseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_splineseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splineseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_splineseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_splineseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_splineseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_splineseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_splineseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_splineseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_splineseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_splineseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_splineseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_splineseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_splineseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_splineseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_splineseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_splineseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_splineseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_splineseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_splineseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_splineseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_splineseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_splineseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_splineseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_splineseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_splineseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_splineseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_splineseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_splineseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_splineseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_splineseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_splineseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_splineseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_splineseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_splineseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_splineseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_splineseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_splineseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_splineseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_splineseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_splineseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_splineseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_splineseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_splineseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_splineseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_splineseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_splineseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_splineseries_dynamic_property_names(void* self) {
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

QBindingStorage* q_splineseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_splineseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_splineseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_splineseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_splineseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_splineseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_splineseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_splineseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_splineseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_splineseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_splineseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_splineseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_splineseries_set_pen(void* self, void* pen) {
    QSplineSeries_SetPen((QSplineSeries*)self, (QPen*)pen);
}

void q_splineseries_qbase_set_pen(void* self, void* pen) {
    QSplineSeries_QBaseSetPen((QSplineSeries*)self, (QPen*)pen);
}

void q_splineseries_on_set_pen(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnSetPen((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_set_brush(void* self, void* brush) {
    QSplineSeries_SetBrush((QSplineSeries*)self, (QBrush*)brush);
}

void q_splineseries_qbase_set_brush(void* self, void* brush) {
    QSplineSeries_QBaseSetBrush((QSplineSeries*)self, (QBrush*)brush);
}

void q_splineseries_on_set_brush(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnSetBrush((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_set_color(void* self, void* color) {
    QSplineSeries_SetColor((QSplineSeries*)self, (QColor*)color);
}

void q_splineseries_qbase_set_color(void* self, void* color) {
    QSplineSeries_QBaseSetColor((QSplineSeries*)self, (QColor*)color);
}

void q_splineseries_on_set_color(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnSetColor((QSplineSeries*)self, (intptr_t)slot);
}

QColor* q_splineseries_color(void* self) {
    return QSplineSeries_Color((QSplineSeries*)self);
}

QColor* q_splineseries_qbase_color(void* self) {
    return QSplineSeries_QBaseColor((QSplineSeries*)self);
}

void q_splineseries_on_color(void* self, QColor* (*slot)()) {
    QSplineSeries_OnColor((QSplineSeries*)self, (intptr_t)slot);
}

bool q_splineseries_event(void* self, void* event) {
    return QSplineSeries_Event((QSplineSeries*)self, (QEvent*)event);
}

bool q_splineseries_qbase_event(void* self, void* event) {
    return QSplineSeries_QBaseEvent((QSplineSeries*)self, (QEvent*)event);
}

void q_splineseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QSplineSeries_OnEvent((QSplineSeries*)self, (intptr_t)slot);
}

bool q_splineseries_event_filter(void* self, void* watched, void* event) {
    return QSplineSeries_EventFilter((QSplineSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_splineseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QSplineSeries_QBaseEventFilter((QSplineSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_splineseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSplineSeries_OnEventFilter((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_timer_event(void* self, void* event) {
    QSplineSeries_TimerEvent((QSplineSeries*)self, (QTimerEvent*)event);
}

void q_splineseries_qbase_timer_event(void* self, void* event) {
    QSplineSeries_QBaseTimerEvent((QSplineSeries*)self, (QTimerEvent*)event);
}

void q_splineseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnTimerEvent((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_child_event(void* self, void* event) {
    QSplineSeries_ChildEvent((QSplineSeries*)self, (QChildEvent*)event);
}

void q_splineseries_qbase_child_event(void* self, void* event) {
    QSplineSeries_QBaseChildEvent((QSplineSeries*)self, (QChildEvent*)event);
}

void q_splineseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnChildEvent((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_custom_event(void* self, void* event) {
    QSplineSeries_CustomEvent((QSplineSeries*)self, (QEvent*)event);
}

void q_splineseries_qbase_custom_event(void* self, void* event) {
    QSplineSeries_QBaseCustomEvent((QSplineSeries*)self, (QEvent*)event);
}

void q_splineseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnCustomEvent((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_connect_notify(void* self, void* signal) {
    QSplineSeries_ConnectNotify((QSplineSeries*)self, (QMetaMethod*)signal);
}

void q_splineseries_qbase_connect_notify(void* self, void* signal) {
    QSplineSeries_QBaseConnectNotify((QSplineSeries*)self, (QMetaMethod*)signal);
}

void q_splineseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnConnectNotify((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_disconnect_notify(void* self, void* signal) {
    QSplineSeries_DisconnectNotify((QSplineSeries*)self, (QMetaMethod*)signal);
}

void q_splineseries_qbase_disconnect_notify(void* self, void* signal) {
    QSplineSeries_QBaseDisconnectNotify((QSplineSeries*)self, (QMetaMethod*)signal);
}

void q_splineseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSplineSeries_OnDisconnectNotify((QSplineSeries*)self, (intptr_t)slot);
}

QObject* q_splineseries_sender(void* self) {
    return QSplineSeries_Sender((QSplineSeries*)self);
}

QObject* q_splineseries_qbase_sender(void* self) {
    return QSplineSeries_QBaseSender((QSplineSeries*)self);
}

void q_splineseries_on_sender(void* self, QObject* (*slot)()) {
    QSplineSeries_OnSender((QSplineSeries*)self, (intptr_t)slot);
}

int32_t q_splineseries_sender_signal_index(void* self) {
    return QSplineSeries_SenderSignalIndex((QSplineSeries*)self);
}

int32_t q_splineseries_qbase_sender_signal_index(void* self) {
    return QSplineSeries_QBaseSenderSignalIndex((QSplineSeries*)self);
}

void q_splineseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSplineSeries_OnSenderSignalIndex((QSplineSeries*)self, (intptr_t)slot);
}

int32_t q_splineseries_receivers(void* self, const char* signal) {
    return QSplineSeries_Receivers((QSplineSeries*)self, signal);
}

int32_t q_splineseries_qbase_receivers(void* self, const char* signal) {
    return QSplineSeries_QBaseReceivers((QSplineSeries*)self, signal);
}

void q_splineseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSplineSeries_OnReceivers((QSplineSeries*)self, (intptr_t)slot);
}

bool q_splineseries_is_signal_connected(void* self, void* signal) {
    return QSplineSeries_IsSignalConnected((QSplineSeries*)self, (QMetaMethod*)signal);
}

bool q_splineseries_qbase_is_signal_connected(void* self, void* signal) {
    return QSplineSeries_QBaseIsSignalConnected((QSplineSeries*)self, (QMetaMethod*)signal);
}

void q_splineseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSplineSeries_OnIsSignalConnected((QSplineSeries*)self, (intptr_t)slot);
}

void q_splineseries_delete(void* self) {
    QSplineSeries_Delete((QSplineSeries*)(self));
}
