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
#include "../libqcoreevent.hpp"
#include "libqxyseries.hpp"
#include "libqxyseries.h"

QMetaObject* q_xyseries_meta_object(void* self) {
    return QXYSeries_MetaObject((QXYSeries*)self);
}

void* q_xyseries_metacast(void* self, const char* param1) {
    return QXYSeries_Metacast((QXYSeries*)self, param1);
}

int32_t q_xyseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QXYSeries_Metacall((QXYSeries*)self, param1, param2, param3);
}

const char* q_xyseries_tr(const char* s) {
    libqt_string _str = QXYSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xyseries_append(void* self, double x, double y) {
    QXYSeries_Append((QXYSeries*)self, x, y);
}

void q_xyseries_append_with_point(void* self, void* point) {
    QXYSeries_AppendWithPoint((QXYSeries*)self, (QPointF*)point);
}

void q_xyseries_append_with_points(void* self, void* points[]) {
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

void q_xyseries_replace(void* self, double oldX, double oldY, double newX, double newY) {
    QXYSeries_Replace((QXYSeries*)self, oldX, oldY, newX, newY);
}

void q_xyseries_replace2(void* self, void* oldPoint, void* newPoint) {
    QXYSeries_Replace2((QXYSeries*)self, (QPointF*)oldPoint, (QPointF*)newPoint);
}

void q_xyseries_replace3(void* self, int index, double newX, double newY) {
    QXYSeries_Replace3((QXYSeries*)self, index, newX, newY);
}

void q_xyseries_replace4(void* self, int index, void* newPoint) {
    QXYSeries_Replace4((QXYSeries*)self, index, (QPointF*)newPoint);
}

void q_xyseries_remove(void* self, double x, double y) {
    QXYSeries_Remove((QXYSeries*)self, x, y);
}

void q_xyseries_remove_with_point(void* self, void* point) {
    QXYSeries_RemoveWithPoint((QXYSeries*)self, (QPointF*)point);
}

void q_xyseries_remove_with_index(void* self, int index) {
    QXYSeries_RemoveWithIndex((QXYSeries*)self, index);
}

void q_xyseries_remove_points(void* self, int index, int count) {
    QXYSeries_RemovePoints((QXYSeries*)self, index, count);
}

void q_xyseries_insert(void* self, int index, void* point) {
    QXYSeries_Insert((QXYSeries*)self, index, (QPointF*)point);
}

void q_xyseries_clear(void* self) {
    QXYSeries_Clear((QXYSeries*)self);
}

int32_t q_xyseries_count(void* self) {
    return QXYSeries_Count((QXYSeries*)self);
}

libqt_list /* of QPointF* */ q_xyseries_points(void* self) {
    libqt_list _arr = QXYSeries_Points((QXYSeries*)self);
    return _arr;
}

libqt_list /* of QPointF* */ q_xyseries_points_vector(void* self) {
    libqt_list _arr = QXYSeries_PointsVector((QXYSeries*)self);
    return _arr;
}

QPointF* q_xyseries_at(void* self, int index) {
    return QXYSeries_At((QXYSeries*)self, index);
}

QXYSeries* q_xyseries_operator_shift_left(void* self, void* point) {
    return QXYSeries_OperatorShiftLeft((QXYSeries*)self, (QPointF*)point);
}

QXYSeries* q_xyseries_operator_shift_left_with_points(void* self, void* points[]) {
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

void q_xyseries_set_pen(void* self, void* pen) {
    QXYSeries_SetPen((QXYSeries*)self, (QPen*)pen);
}

QPen* q_xyseries_pen(void* self) {
    return QXYSeries_Pen((QXYSeries*)self);
}

void q_xyseries_set_brush(void* self, void* brush) {
    QXYSeries_SetBrush((QXYSeries*)self, (QBrush*)brush);
}

QBrush* q_xyseries_brush(void* self) {
    return QXYSeries_Brush((QXYSeries*)self);
}

void q_xyseries_set_color(void* self, void* color) {
    QXYSeries_SetColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_xyseries_color(void* self) {
    return QXYSeries_Color((QXYSeries*)self);
}

void q_xyseries_set_selected_color(void* self, void* color) {
    QXYSeries_SetSelectedColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_xyseries_selected_color(void* self) {
    return QXYSeries_SelectedColor((QXYSeries*)self);
}

void q_xyseries_set_points_visible(void* self) {
    QXYSeries_SetPointsVisible((QXYSeries*)self);
}

bool q_xyseries_points_visible(void* self) {
    return QXYSeries_PointsVisible((QXYSeries*)self);
}

void q_xyseries_set_point_labels_format(void* self, const char* format) {
    QXYSeries_SetPointLabelsFormat((QXYSeries*)self, qstring(format));
}

const char* q_xyseries_point_labels_format(void* self) {
    libqt_string _str = QXYSeries_PointLabelsFormat((QXYSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xyseries_set_point_labels_visible(void* self) {
    QXYSeries_SetPointLabelsVisible((QXYSeries*)self);
}

bool q_xyseries_point_labels_visible(void* self) {
    return QXYSeries_PointLabelsVisible((QXYSeries*)self);
}

void q_xyseries_set_point_labels_font(void* self, void* font) {
    QXYSeries_SetPointLabelsFont((QXYSeries*)self, (QFont*)font);
}

QFont* q_xyseries_point_labels_font(void* self) {
    return QXYSeries_PointLabelsFont((QXYSeries*)self);
}

void q_xyseries_set_point_labels_color(void* self, void* color) {
    QXYSeries_SetPointLabelsColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_xyseries_point_labels_color(void* self) {
    return QXYSeries_PointLabelsColor((QXYSeries*)self);
}

void q_xyseries_set_point_labels_clipping(void* self) {
    QXYSeries_SetPointLabelsClipping((QXYSeries*)self);
}

bool q_xyseries_point_labels_clipping(void* self) {
    return QXYSeries_PointLabelsClipping((QXYSeries*)self);
}

void q_xyseries_replace_with_points(void* self, void* points[]) {
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

bool q_xyseries_is_point_selected(void* self, int index) {
    return QXYSeries_IsPointSelected((QXYSeries*)self, index);
}

void q_xyseries_select_point(void* self, int index) {
    QXYSeries_SelectPoint((QXYSeries*)self, index);
}

void q_xyseries_deselect_point(void* self, int index) {
    QXYSeries_DeselectPoint((QXYSeries*)self, index);
}

void q_xyseries_set_point_selected(void* self, int index, bool selected) {
    QXYSeries_SetPointSelected((QXYSeries*)self, index, selected);
}

void q_xyseries_select_all_points(void* self) {
    QXYSeries_SelectAllPoints((QXYSeries*)self);
}

void q_xyseries_deselect_all_points(void* self) {
    QXYSeries_DeselectAllPoints((QXYSeries*)self);
}

void q_xyseries_select_points(void* self, int* indexes[]) {
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

void q_xyseries_deselect_points(void* self, int* indexes[]) {
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

void q_xyseries_toggle_selection(void* self, int* indexes[]) {
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

libqt_list /* of int */ q_xyseries_selected_points(void* self) {
    libqt_list _arr = QXYSeries_SelectedPoints((QXYSeries*)self);
    return _arr;
}

void q_xyseries_set_light_marker(void* self, void* lightMarker) {
    QXYSeries_SetLightMarker((QXYSeries*)self, (QImage*)lightMarker);
}

QImage* q_xyseries_light_marker(void* self) {
    return QXYSeries_LightMarker((QXYSeries*)self);
}

void q_xyseries_set_selected_light_marker(void* self, void* selectedLightMarker) {
    QXYSeries_SetSelectedLightMarker((QXYSeries*)self, (QImage*)selectedLightMarker);
}

QImage* q_xyseries_selected_light_marker(void* self) {
    return QXYSeries_SelectedLightMarker((QXYSeries*)self);
}

void q_xyseries_set_marker_size(void* self, double size) {
    QXYSeries_SetMarkerSize((QXYSeries*)self, size);
}

double q_xyseries_marker_size(void* self) {
    return QXYSeries_MarkerSize((QXYSeries*)self);
}

void q_xyseries_set_best_fit_line_visible(void* self) {
    QXYSeries_SetBestFitLineVisible((QXYSeries*)self);
}

bool q_xyseries_best_fit_line_visible(void* self) {
    return QXYSeries_BestFitLineVisible((QXYSeries*)self);
}

libqt_pair /* tuple of double and double */ q_xyseries_best_fit_line_equation(void* self, bool* ok) {
    return QXYSeries_BestFitLineEquation((QXYSeries*)self, (bool*)ok);
}

void q_xyseries_set_best_fit_line_pen(void* self, void* pen) {
    QXYSeries_SetBestFitLinePen((QXYSeries*)self, (QPen*)pen);
}

QPen* q_xyseries_best_fit_line_pen(void* self) {
    return QXYSeries_BestFitLinePen((QXYSeries*)self);
}

void q_xyseries_set_best_fit_line_color(void* self, void* color) {
    QXYSeries_SetBestFitLineColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_xyseries_best_fit_line_color(void* self) {
    return QXYSeries_BestFitLineColor((QXYSeries*)self);
}

void q_xyseries_clear_point_configuration(void* self, int index) {
    QXYSeries_ClearPointConfiguration((QXYSeries*)self, index);
}

void q_xyseries_clear_point_configuration2(void* self, int index, int64_t key) {
    QXYSeries_ClearPointConfiguration2((QXYSeries*)self, index, key);
}

void q_xyseries_clear_points_configuration(void* self) {
    QXYSeries_ClearPointsConfiguration((QXYSeries*)self);
}

void q_xyseries_clear_points_configuration_with_key(void* self, int64_t key) {
    QXYSeries_ClearPointsConfigurationWithKey((QXYSeries*)self, key);
}

void q_xyseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration) {
    QXYSeries_SetPointConfiguration((QXYSeries*)self, index, configuration);
}

void q_xyseries_set_point_configuration2(void* self, int index, int64_t key, void* value) {
    QXYSeries_SetPointConfiguration2((QXYSeries*)self, index, key, (QVariant*)value);
}

void q_xyseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration) {
    QXYSeries_SetPointsConfiguration((QXYSeries*)self, pointsConfiguration);
}

libqt_map /* of int64_t to QVariant* */ q_xyseries_point_configuration(void* self, int index) {
    return QXYSeries_PointConfiguration((QXYSeries*)self, index);
}

libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_xyseries_points_configuration(void* self) {
    return QXYSeries_PointsConfiguration((QXYSeries*)self);
}

void q_xyseries_size_by(void* self, double* sourceData[], double minSize, double maxSize) {
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

void q_xyseries_color_by(void* self, double* sourceData[]) {
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

void q_xyseries_clicked(void* self, void* point) {
    QXYSeries_Clicked((QXYSeries*)self, (QPointF*)point);
}

void q_xyseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Clicked((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_hovered(void* self, void* point, bool state) {
    QXYSeries_Hovered((QXYSeries*)self, (QPointF*)point, state);
}

void q_xyseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QXYSeries_Connect_Hovered((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_pressed(void* self, void* point) {
    QXYSeries_Pressed((QXYSeries*)self, (QPointF*)point);
}

void q_xyseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Pressed((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_released(void* self, void* point) {
    QXYSeries_Released((QXYSeries*)self, (QPointF*)point);
}

void q_xyseries_on_released(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Released((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_double_clicked(void* self, void* point) {
    QXYSeries_DoubleClicked((QXYSeries*)self, (QPointF*)point);
}

void q_xyseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_DoubleClicked((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_replaced(void* self, int index) {
    QXYSeries_PointReplaced((QXYSeries*)self, index);
}

void q_xyseries_on_point_replaced(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointReplaced((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_removed(void* self, int index) {
    QXYSeries_PointRemoved((QXYSeries*)self, index);
}

void q_xyseries_on_point_removed(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointRemoved((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_added(void* self, int index) {
    QXYSeries_PointAdded((QXYSeries*)self, index);
}

void q_xyseries_on_point_added(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointAdded((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_color_changed(void* self, void* color) {
    QXYSeries_ColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_xyseries_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_ColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_selected_color_changed(void* self, void* color) {
    QXYSeries_SelectedColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_xyseries_on_selected_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_points_replaced(void* self) {
    QXYSeries_PointsReplaced((QXYSeries*)self);
}

void q_xyseries_on_points_replaced(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_PointsReplaced((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_labels_format_changed(void* self, const char* format) {
    QXYSeries_PointLabelsFormatChanged((QXYSeries*)self, qstring(format));
}

void q_xyseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QXYSeries_Connect_PointLabelsFormatChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_labels_visibility_changed(void* self, bool visible) {
    QXYSeries_PointLabelsVisibilityChanged((QXYSeries*)self, visible);
}

void q_xyseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_labels_font_changed(void* self, void* font) {
    QXYSeries_PointLabelsFontChanged((QXYSeries*)self, (QFont*)font);
}

void q_xyseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsFontChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_labels_color_changed(void* self, void* color) {
    QXYSeries_PointLabelsColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_xyseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_point_labels_clipping_changed(void* self, bool clipping) {
    QXYSeries_PointLabelsClippingChanged((QXYSeries*)self, clipping);
}

void q_xyseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsClippingChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_points_removed(void* self, int index, int count) {
    QXYSeries_PointsRemoved((QXYSeries*)self, index, count);
}

void q_xyseries_on_points_removed(void* self, void (*slot)(void*, int, int)) {
    QXYSeries_Connect_PointsRemoved((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_pen_changed(void* self, void* pen) {
    QXYSeries_PenChanged((QXYSeries*)self, (QPen*)pen);
}

void q_xyseries_on_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PenChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_selected_points_changed(void* self) {
    QXYSeries_SelectedPointsChanged((QXYSeries*)self);
}

void q_xyseries_on_selected_points_changed(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_SelectedPointsChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_light_marker_changed(void* self, void* lightMarker) {
    QXYSeries_LightMarkerChanged((QXYSeries*)self, (QImage*)lightMarker);
}

void q_xyseries_on_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_LightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_selected_light_marker_changed(void* self, void* selectedLightMarker) {
    QXYSeries_SelectedLightMarkerChanged((QXYSeries*)self, (QImage*)selectedLightMarker);
}

void q_xyseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedLightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_best_fit_line_visibility_changed(void* self, bool visible) {
    QXYSeries_BestFitLineVisibilityChanged((QXYSeries*)self, visible);
}

void q_xyseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_BestFitLineVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_best_fit_line_pen_changed(void* self, void* pen) {
    QXYSeries_BestFitLinePenChanged((QXYSeries*)self, (QPen*)pen);
}

void q_xyseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLinePenChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_best_fit_line_color_changed(void* self, void* color) {
    QXYSeries_BestFitLineColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_xyseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLineColorChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration) {
    QXYSeries_PointsConfigurationChanged((QXYSeries*)self, configuration);
}

void q_xyseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */)) {
    QXYSeries_Connect_PointsConfigurationChanged((QXYSeries*)self, (intptr_t)slot);
}

void q_xyseries_marker_size_changed(void* self, double size) {
    QXYSeries_MarkerSizeChanged((QXYSeries*)self, size);
}

void q_xyseries_on_marker_size_changed(void* self, void (*slot)(void*, double)) {
    QXYSeries_Connect_MarkerSizeChanged((QXYSeries*)self, (intptr_t)slot);
}

const char* q_xyseries_tr2(const char* s, const char* c) {
    libqt_string _str = QXYSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_xyseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QXYSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xyseries_set_points_visible1(void* self, bool visible) {
    QXYSeries_SetPointsVisible1((QXYSeries*)self, visible);
}

void q_xyseries_set_point_labels_visible1(void* self, bool visible) {
    QXYSeries_SetPointLabelsVisible1((QXYSeries*)self, visible);
}

void q_xyseries_set_point_labels_clipping1(void* self, bool enabled) {
    QXYSeries_SetPointLabelsClipping1((QXYSeries*)self, enabled);
}

void q_xyseries_set_best_fit_line_visible1(void* self, bool visible) {
    QXYSeries_SetBestFitLineVisible1((QXYSeries*)self, visible);
}

void q_xyseries_color_by2(void* self, double* sourceData[], void* gradient) {
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

int64_t q_xyseries_type(void* self) {
    return QAbstractSeries_Type((QAbstractSeries*)self);
}

void q_xyseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_xyseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xyseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_xyseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_xyseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_xyseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_xyseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_xyseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_xyseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_xyseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_xyseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_xyseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_xyseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_xyseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_xyseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_xyseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_xyseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_xyseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_xyseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_xyseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_xyseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_xyseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_xyseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_xyseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

bool q_xyseries_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_xyseries_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_xyseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xyseries_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_xyseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_xyseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_xyseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_xyseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_xyseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_xyseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_xyseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_xyseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_xyseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_xyseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_xyseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_xyseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_xyseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_xyseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_xyseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_xyseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_xyseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_xyseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_xyseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_xyseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_xyseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_xyseries_dynamic_property_names(void* self) {
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

QBindingStorage* q_xyseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_xyseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_xyseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_xyseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_xyseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_xyseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_xyseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_xyseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_xyseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_xyseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_xyseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_xyseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_xyseries_delete(void* self) {
    QXYSeries_Delete((QXYSeries*)(self));
}
