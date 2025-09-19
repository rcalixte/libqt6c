#include "libqabstractseries.hpp"
#include "../libqbrush.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "libqxyseries.hpp"
#include "libqscatterseries.hpp"
#include "libqscatterseries.h"

QScatterSeries* q_scatterseries_new() {
    return QScatterSeries_new();
}

QScatterSeries* q_scatterseries_new2(void* parent) {
    return QScatterSeries_new2((QObject*)parent);
}

const QMetaObject* q_scatterseries_meta_object(void* self) {
    return QScatterSeries_MetaObject((QScatterSeries*)self);
}

void* q_scatterseries_metacast(void* self, const char* param1) {
    return QScatterSeries_Metacast((QScatterSeries*)self, param1);
}

int32_t q_scatterseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScatterSeries_Metacall((QScatterSeries*)self, param1, param2, param3);
}

void q_scatterseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QScatterSeries_OnMetacall((QScatterSeries*)self, (intptr_t)callback);
}

int32_t q_scatterseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScatterSeries_QBaseMetacall((QScatterSeries*)self, param1, param2, param3);
}

const char* q_scatterseries_tr(const char* s) {
    libqt_string _str = QScatterSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_scatterseries_type(void* self) {
    return QScatterSeries_Type((QScatterSeries*)self);
}

void q_scatterseries_on_type(void* self, int32_t (*callback)()) {
    QScatterSeries_OnType((QScatterSeries*)self, (intptr_t)callback);
}

int32_t q_scatterseries_qbase_type(void* self) {
    return QScatterSeries_QBaseType((QScatterSeries*)self);
}

void q_scatterseries_set_pen(void* self, void* pen) {
    QScatterSeries_SetPen((QScatterSeries*)self, (QPen*)pen);
}

void q_scatterseries_on_set_pen(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnSetPen((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_qbase_set_pen(void* self, void* pen) {
    QScatterSeries_QBaseSetPen((QScatterSeries*)self, (QPen*)pen);
}

void q_scatterseries_set_brush(void* self, void* brush) {
    QScatterSeries_SetBrush((QScatterSeries*)self, (QBrush*)brush);
}

void q_scatterseries_on_set_brush(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnSetBrush((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_qbase_set_brush(void* self, void* brush) {
    QScatterSeries_QBaseSetBrush((QScatterSeries*)self, (QBrush*)brush);
}

QBrush* q_scatterseries_brush(void* self) {
    return QScatterSeries_Brush((QScatterSeries*)self);
}

void q_scatterseries_set_color(void* self, void* color) {
    QScatterSeries_SetColor((QScatterSeries*)self, (QColor*)color);
}

void q_scatterseries_on_set_color(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnSetColor((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_qbase_set_color(void* self, void* color) {
    QScatterSeries_QBaseSetColor((QScatterSeries*)self, (QColor*)color);
}

QColor* q_scatterseries_color(void* self) {
    return QScatterSeries_Color((QScatterSeries*)self);
}

void q_scatterseries_on_color(void* self, QColor* (*callback)()) {
    QScatterSeries_OnColor((QScatterSeries*)self, (intptr_t)callback);
}

QColor* q_scatterseries_qbase_color(void* self) {
    return QScatterSeries_QBaseColor((QScatterSeries*)self);
}

void q_scatterseries_set_border_color(void* self, void* color) {
    QScatterSeries_SetBorderColor((QScatterSeries*)self, (QColor*)color);
}

QColor* q_scatterseries_border_color(void* self) {
    return QScatterSeries_BorderColor((QScatterSeries*)self);
}

int32_t q_scatterseries_marker_shape(void* self) {
    return QScatterSeries_MarkerShape((QScatterSeries*)self);
}

void q_scatterseries_set_marker_shape(void* self, int32_t shape) {
    QScatterSeries_SetMarkerShape((QScatterSeries*)self, shape);
}

double q_scatterseries_marker_size(void* self) {
    return QScatterSeries_MarkerSize((QScatterSeries*)self);
}

void q_scatterseries_set_marker_size(void* self, double size) {
    QScatterSeries_SetMarkerSize((QScatterSeries*)self, size);
}

void q_scatterseries_color_changed(void* self, void* color) {
    QScatterSeries_ColorChanged((QScatterSeries*)self, (QColor*)color);
}

void q_scatterseries_on_color_changed(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_Connect_ColorChanged((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_border_color_changed(void* self, void* color) {
    QScatterSeries_BorderColorChanged((QScatterSeries*)self, (QColor*)color);
}

void q_scatterseries_on_border_color_changed(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_Connect_BorderColorChanged((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_marker_shape_changed(void* self, int32_t shape) {
    QScatterSeries_MarkerShapeChanged((QScatterSeries*)self, shape);
}

void q_scatterseries_on_marker_shape_changed(void* self, void (*callback)(void*, int32_t)) {
    QScatterSeries_Connect_MarkerShapeChanged((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_marker_size_changed(void* self, double size) {
    QScatterSeries_MarkerSizeChanged((QScatterSeries*)self, size);
}

void q_scatterseries_on_marker_size_changed(void* self, void (*callback)(void*, double)) {
    QScatterSeries_Connect_MarkerSizeChanged((QScatterSeries*)self, (intptr_t)callback);
}

const char* q_scatterseries_tr2(const char* s, const char* c) {
    libqt_string _str = QScatterSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scatterseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScatterSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatterseries_append(void* self, double x, double y) {
    QXYSeries_Append((QXYSeries*)self, x, y);
}

void q_scatterseries_append2(void* self, void* point) {
    QXYSeries_Append2((QXYSeries*)self, (QPointF*)point);
}

void q_scatterseries_append3(void* self, libqt_list points) {
    QXYSeries_Append3((QXYSeries*)self, points);
}

void q_scatterseries_replace(void* self, double oldX, double oldY, double newX, double newY) {
    QXYSeries_Replace((QXYSeries*)self, oldX, oldY, newX, newY);
}

void q_scatterseries_replace2(void* self, void* oldPoint, void* newPoint) {
    QXYSeries_Replace2((QXYSeries*)self, (QPointF*)oldPoint, (QPointF*)newPoint);
}

void q_scatterseries_replace3(void* self, int index, double newX, double newY) {
    QXYSeries_Replace3((QXYSeries*)self, index, newX, newY);
}

void q_scatterseries_replace4(void* self, int index, void* newPoint) {
    QXYSeries_Replace4((QXYSeries*)self, index, (QPointF*)newPoint);
}

void q_scatterseries_remove(void* self, double x, double y) {
    QXYSeries_Remove((QXYSeries*)self, x, y);
}

void q_scatterseries_remove2(void* self, void* point) {
    QXYSeries_Remove2((QXYSeries*)self, (QPointF*)point);
}

void q_scatterseries_remove3(void* self, int index) {
    QXYSeries_Remove3((QXYSeries*)self, index);
}

void q_scatterseries_remove_points(void* self, int index, int count) {
    QXYSeries_RemovePoints((QXYSeries*)self, index, count);
}

void q_scatterseries_insert(void* self, int index, void* point) {
    QXYSeries_Insert((QXYSeries*)self, index, (QPointF*)point);
}

void q_scatterseries_clear(void* self) {
    QXYSeries_Clear((QXYSeries*)self);
}

int32_t q_scatterseries_count(void* self) {
    return QXYSeries_Count((QXYSeries*)self);
}

libqt_list /* of QPointF* */ q_scatterseries_points(void* self) {
    libqt_list _arr = QXYSeries_Points((QXYSeries*)self);
    return _arr;
}

libqt_list /* of QPointF* */ q_scatterseries_points_vector(void* self) {
    libqt_list _arr = QXYSeries_PointsVector((QXYSeries*)self);
    return _arr;
}

const QPointF* q_scatterseries_at(void* self, int index) {
    return QXYSeries_At((QXYSeries*)self, index);
}

QXYSeries* q_scatterseries_operator_shift_left(void* self, void* point) {
    return QXYSeries_OperatorShiftLeft((QXYSeries*)self, (QPointF*)point);
}

QXYSeries* q_scatterseries_operator_shift_left2(void* self, libqt_list points) {
    return QXYSeries_OperatorShiftLeft2((QXYSeries*)self, points);
}

QPen* q_scatterseries_pen(void* self) {
    return QXYSeries_Pen((QXYSeries*)self);
}

void q_scatterseries_set_selected_color(void* self, void* color) {
    QXYSeries_SetSelectedColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_scatterseries_selected_color(void* self) {
    return QXYSeries_SelectedColor((QXYSeries*)self);
}

void q_scatterseries_set_points_visible(void* self) {
    QXYSeries_SetPointsVisible((QXYSeries*)self);
}

bool q_scatterseries_points_visible(void* self) {
    return QXYSeries_PointsVisible((QXYSeries*)self);
}

void q_scatterseries_set_point_labels_format(void* self, const char* format) {
    QXYSeries_SetPointLabelsFormat((QXYSeries*)self, qstring(format));
}

const char* q_scatterseries_point_labels_format(void* self) {
    libqt_string _str = QXYSeries_PointLabelsFormat((QXYSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatterseries_set_point_labels_visible(void* self) {
    QXYSeries_SetPointLabelsVisible((QXYSeries*)self);
}

bool q_scatterseries_point_labels_visible(void* self) {
    return QXYSeries_PointLabelsVisible((QXYSeries*)self);
}

void q_scatterseries_set_point_labels_font(void* self, void* font) {
    QXYSeries_SetPointLabelsFont((QXYSeries*)self, (QFont*)font);
}

QFont* q_scatterseries_point_labels_font(void* self) {
    return QXYSeries_PointLabelsFont((QXYSeries*)self);
}

void q_scatterseries_set_point_labels_color(void* self, void* color) {
    QXYSeries_SetPointLabelsColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_scatterseries_point_labels_color(void* self) {
    return QXYSeries_PointLabelsColor((QXYSeries*)self);
}

void q_scatterseries_set_point_labels_clipping(void* self) {
    QXYSeries_SetPointLabelsClipping((QXYSeries*)self);
}

bool q_scatterseries_point_labels_clipping(void* self) {
    return QXYSeries_PointLabelsClipping((QXYSeries*)self);
}

void q_scatterseries_replace5(void* self, libqt_list points) {
    QXYSeries_Replace5((QXYSeries*)self, points);
}

bool q_scatterseries_is_point_selected(void* self, int index) {
    return QXYSeries_IsPointSelected((QXYSeries*)self, index);
}

void q_scatterseries_select_point(void* self, int index) {
    QXYSeries_SelectPoint((QXYSeries*)self, index);
}

void q_scatterseries_deselect_point(void* self, int index) {
    QXYSeries_DeselectPoint((QXYSeries*)self, index);
}

void q_scatterseries_set_point_selected(void* self, int index, bool selected) {
    QXYSeries_SetPointSelected((QXYSeries*)self, index, selected);
}

void q_scatterseries_select_all_points(void* self) {
    QXYSeries_SelectAllPoints((QXYSeries*)self);
}

void q_scatterseries_deselect_all_points(void* self) {
    QXYSeries_DeselectAllPoints((QXYSeries*)self);
}

void q_scatterseries_select_points(void* self, libqt_list indexes) {
    QXYSeries_SelectPoints((QXYSeries*)self, indexes);
}

void q_scatterseries_deselect_points(void* self, libqt_list indexes) {
    QXYSeries_DeselectPoints((QXYSeries*)self, indexes);
}

void q_scatterseries_toggle_selection(void* self, libqt_list indexes) {
    QXYSeries_ToggleSelection((QXYSeries*)self, indexes);
}

libqt_list /* of int */ q_scatterseries_selected_points(void* self) {
    libqt_list _arr = QXYSeries_SelectedPoints((QXYSeries*)self);
    return _arr;
}

void q_scatterseries_set_light_marker(void* self, void* lightMarker) {
    QXYSeries_SetLightMarker((QXYSeries*)self, (QImage*)lightMarker);
}

const QImage* q_scatterseries_light_marker(void* self) {
    return QXYSeries_LightMarker((QXYSeries*)self);
}

void q_scatterseries_set_selected_light_marker(void* self, void* selectedLightMarker) {
    QXYSeries_SetSelectedLightMarker((QXYSeries*)self, (QImage*)selectedLightMarker);
}

const QImage* q_scatterseries_selected_light_marker(void* self) {
    return QXYSeries_SelectedLightMarker((QXYSeries*)self);
}

void q_scatterseries_set_best_fit_line_visible(void* self) {
    QXYSeries_SetBestFitLineVisible((QXYSeries*)self);
}

bool q_scatterseries_best_fit_line_visible(void* self) {
    return QXYSeries_BestFitLineVisible((QXYSeries*)self);
}

libqt_pair /* tuple of double and double */ q_scatterseries_best_fit_line_equation(void* self, bool* ok) {
    return QXYSeries_BestFitLineEquation((QXYSeries*)self, (bool*)ok);
}

void q_scatterseries_set_best_fit_line_pen(void* self, void* pen) {
    QXYSeries_SetBestFitLinePen((QXYSeries*)self, (QPen*)pen);
}

QPen* q_scatterseries_best_fit_line_pen(void* self) {
    return QXYSeries_BestFitLinePen((QXYSeries*)self);
}

void q_scatterseries_set_best_fit_line_color(void* self, void* color) {
    QXYSeries_SetBestFitLineColor((QXYSeries*)self, (QColor*)color);
}

QColor* q_scatterseries_best_fit_line_color(void* self) {
    return QXYSeries_BestFitLineColor((QXYSeries*)self);
}

void q_scatterseries_clear_point_configuration(void* self, int index) {
    QXYSeries_ClearPointConfiguration((QXYSeries*)self, index);
}

void q_scatterseries_clear_point_configuration2(void* self, int index, int32_t key) {
    QXYSeries_ClearPointConfiguration2((QXYSeries*)self, index, key);
}

void q_scatterseries_clear_points_configuration(void* self) {
    QXYSeries_ClearPointsConfiguration((QXYSeries*)self);
}

void q_scatterseries_clear_points_configuration2(void* self, int32_t key) {
    QXYSeries_ClearPointsConfiguration2((QXYSeries*)self, key);
}

void q_scatterseries_set_point_configuration(void* self, int index, libqt_map /* of int32_t to QVariant* */ configuration) {
    QXYSeries_SetPointConfiguration((QXYSeries*)self, index, configuration);
}

void q_scatterseries_set_point_configuration2(void* self, int index, int32_t key, void* value) {
    QXYSeries_SetPointConfiguration2((QXYSeries*)self, index, key, (QVariant*)value);
}

void q_scatterseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ pointsConfiguration) {
    QXYSeries_SetPointsConfiguration((QXYSeries*)self, pointsConfiguration);
}

libqt_map /* of int32_t to QVariant* */ q_scatterseries_point_configuration(void* self, int index) {
    return QXYSeries_PointConfiguration((QXYSeries*)self, index);
}

libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ q_scatterseries_points_configuration(void* self) {
    return QXYSeries_PointsConfiguration((QXYSeries*)self);
}

void q_scatterseries_size_by(void* self, libqt_list sourceData, double minSize, double maxSize) {
    QXYSeries_SizeBy((QXYSeries*)self, sourceData, minSize, maxSize);
}

void q_scatterseries_color_by(void* self, libqt_list sourceData) {
    QXYSeries_ColorBy((QXYSeries*)self, sourceData);
}

void q_scatterseries_clicked(void* self, void* point) {
    QXYSeries_Clicked((QXYSeries*)self, (QPointF*)point);
}

void q_scatterseries_on_clicked(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_Clicked((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_hovered(void* self, void* point, bool state) {
    QXYSeries_Hovered((QXYSeries*)self, (QPointF*)point, state);
}

void q_scatterseries_on_hovered(void* self, void (*callback)(void*, void*, bool)) {
    QXYSeries_Connect_Hovered((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_pressed(void* self, void* point) {
    QXYSeries_Pressed((QXYSeries*)self, (QPointF*)point);
}

void q_scatterseries_on_pressed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_Pressed((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_released(void* self, void* point) {
    QXYSeries_Released((QXYSeries*)self, (QPointF*)point);
}

void q_scatterseries_on_released(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_Released((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_double_clicked(void* self, void* point) {
    QXYSeries_DoubleClicked((QXYSeries*)self, (QPointF*)point);
}

void q_scatterseries_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_DoubleClicked((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_replaced(void* self, int index) {
    QXYSeries_PointReplaced((QXYSeries*)self, index);
}

void q_scatterseries_on_point_replaced(void* self, void (*callback)(void*, int)) {
    QXYSeries_Connect_PointReplaced((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_removed(void* self, int index) {
    QXYSeries_PointRemoved((QXYSeries*)self, index);
}

void q_scatterseries_on_point_removed(void* self, void (*callback)(void*, int)) {
    QXYSeries_Connect_PointRemoved((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_added(void* self, int index) {
    QXYSeries_PointAdded((QXYSeries*)self, index);
}

void q_scatterseries_on_point_added(void* self, void (*callback)(void*, int)) {
    QXYSeries_Connect_PointAdded((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_selected_color_changed(void* self, void* color) {
    QXYSeries_SelectedColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_scatterseries_on_selected_color_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_SelectedColorChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_points_replaced(void* self) {
    QXYSeries_PointsReplaced((QXYSeries*)self);
}

void q_scatterseries_on_points_replaced(void* self, void (*callback)(void*)) {
    QXYSeries_Connect_PointsReplaced((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_labels_format_changed(void* self, const char* format) {
    QXYSeries_PointLabelsFormatChanged((QXYSeries*)self, qstring(format));
}

void q_scatterseries_on_point_labels_format_changed(void* self, void (*callback)(void*, const char*)) {
    QXYSeries_Connect_PointLabelsFormatChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_labels_visibility_changed(void* self, bool visible) {
    QXYSeries_PointLabelsVisibilityChanged((QXYSeries*)self, visible);
}

void q_scatterseries_on_point_labels_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QXYSeries_Connect_PointLabelsVisibilityChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_labels_font_changed(void* self, void* font) {
    QXYSeries_PointLabelsFontChanged((QXYSeries*)self, (QFont*)font);
}

void q_scatterseries_on_point_labels_font_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_PointLabelsFontChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_labels_color_changed(void* self, void* color) {
    QXYSeries_PointLabelsColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_scatterseries_on_point_labels_color_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_PointLabelsColorChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_point_labels_clipping_changed(void* self, bool clipping) {
    QXYSeries_PointLabelsClippingChanged((QXYSeries*)self, clipping);
}

void q_scatterseries_on_point_labels_clipping_changed(void* self, void (*callback)(void*, bool)) {
    QXYSeries_Connect_PointLabelsClippingChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_points_removed(void* self, int index, int count) {
    QXYSeries_PointsRemoved((QXYSeries*)self, index, count);
}

void q_scatterseries_on_points_removed(void* self, void (*callback)(void*, int, int)) {
    QXYSeries_Connect_PointsRemoved((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_pen_changed(void* self, void* pen) {
    QXYSeries_PenChanged((QXYSeries*)self, (QPen*)pen);
}

void q_scatterseries_on_pen_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_PenChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_selected_points_changed(void* self) {
    QXYSeries_SelectedPointsChanged((QXYSeries*)self);
}

void q_scatterseries_on_selected_points_changed(void* self, void (*callback)(void*)) {
    QXYSeries_Connect_SelectedPointsChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_light_marker_changed(void* self, void* lightMarker) {
    QXYSeries_LightMarkerChanged((QXYSeries*)self, (QImage*)lightMarker);
}

void q_scatterseries_on_light_marker_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_LightMarkerChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_selected_light_marker_changed(void* self, void* selectedLightMarker) {
    QXYSeries_SelectedLightMarkerChanged((QXYSeries*)self, (QImage*)selectedLightMarker);
}

void q_scatterseries_on_selected_light_marker_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_SelectedLightMarkerChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_best_fit_line_visibility_changed(void* self, bool visible) {
    QXYSeries_BestFitLineVisibilityChanged((QXYSeries*)self, visible);
}

void q_scatterseries_on_best_fit_line_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QXYSeries_Connect_BestFitLineVisibilityChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_best_fit_line_pen_changed(void* self, void* pen) {
    QXYSeries_BestFitLinePenChanged((QXYSeries*)self, (QPen*)pen);
}

void q_scatterseries_on_best_fit_line_pen_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_BestFitLinePenChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_best_fit_line_color_changed(void* self, void* color) {
    QXYSeries_BestFitLineColorChanged((QXYSeries*)self, (QColor*)color);
}

void q_scatterseries_on_best_fit_line_color_changed(void* self, void (*callback)(void*, void*)) {
    QXYSeries_Connect_BestFitLineColorChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */ configuration) {
    QXYSeries_PointsConfigurationChanged((QXYSeries*)self, configuration);
}

void q_scatterseries_on_points_configuration_changed(void* self, void (*callback)(void*, libqt_map /* of int to libqt_map  of int32_t to QVariant*  */)) {
    QXYSeries_Connect_PointsConfigurationChanged((QXYSeries*)self, (intptr_t)callback);
}

void q_scatterseries_set_points_visible1(void* self, bool visible) {
    QXYSeries_SetPointsVisible1((QXYSeries*)self, visible);
}

void q_scatterseries_set_point_labels_visible1(void* self, bool visible) {
    QXYSeries_SetPointLabelsVisible1((QXYSeries*)self, visible);
}

void q_scatterseries_set_point_labels_clipping1(void* self, bool enabled) {
    QXYSeries_SetPointLabelsClipping1((QXYSeries*)self, enabled);
}

void q_scatterseries_set_best_fit_line_visible1(void* self, bool visible) {
    QXYSeries_SetBestFitLineVisible1((QXYSeries*)self, visible);
}

void q_scatterseries_color_by2(void* self, libqt_list sourceData, void* gradient) {
    QXYSeries_ColorBy2((QXYSeries*)self, sourceData, (QLinearGradient*)gradient);
}

void q_scatterseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_scatterseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatterseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_scatterseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_scatterseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_scatterseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_scatterseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_scatterseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_scatterseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_scatterseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_scatterseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_scatterseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_scatterseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_scatterseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_scatterseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_scatterseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_scatterseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_scatterseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_scatterseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_scatterseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_scatterseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_scatterseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_scatterseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_scatterseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_scatterseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scatterseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scatterseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scatterseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scatterseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scatterseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scatterseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scatterseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scatterseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scatterseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scatterseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scatterseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scatterseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scatterseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scatterseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scatterseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scatterseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scatterseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scatterseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scatterseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scatterseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scatterseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scatterseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scatterseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scatterseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scatterseries_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scatterseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scatterseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scatterseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scatterseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scatterseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scatterseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scatterseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scatterseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scatterseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scatterseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scatterseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scatterseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scatterseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_scatterseries_event(void* self, void* event) {
    return QScatterSeries_Event((QScatterSeries*)self, (QEvent*)event);
}

bool q_scatterseries_qbase_event(void* self, void* event) {
    return QScatterSeries_QBaseEvent((QScatterSeries*)self, (QEvent*)event);
}

void q_scatterseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QScatterSeries_OnEvent((QScatterSeries*)self, (intptr_t)callback);
}

bool q_scatterseries_event_filter(void* self, void* watched, void* event) {
    return QScatterSeries_EventFilter((QScatterSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scatterseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QScatterSeries_QBaseEventFilter((QScatterSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_scatterseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QScatterSeries_OnEventFilter((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_timer_event(void* self, void* event) {
    QScatterSeries_TimerEvent((QScatterSeries*)self, (QTimerEvent*)event);
}

void q_scatterseries_qbase_timer_event(void* self, void* event) {
    QScatterSeries_QBaseTimerEvent((QScatterSeries*)self, (QTimerEvent*)event);
}

void q_scatterseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnTimerEvent((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_child_event(void* self, void* event) {
    QScatterSeries_ChildEvent((QScatterSeries*)self, (QChildEvent*)event);
}

void q_scatterseries_qbase_child_event(void* self, void* event) {
    QScatterSeries_QBaseChildEvent((QScatterSeries*)self, (QChildEvent*)event);
}

void q_scatterseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnChildEvent((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_custom_event(void* self, void* event) {
    QScatterSeries_CustomEvent((QScatterSeries*)self, (QEvent*)event);
}

void q_scatterseries_qbase_custom_event(void* self, void* event) {
    QScatterSeries_QBaseCustomEvent((QScatterSeries*)self, (QEvent*)event);
}

void q_scatterseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnCustomEvent((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_connect_notify(void* self, void* signal) {
    QScatterSeries_ConnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

void q_scatterseries_qbase_connect_notify(void* self, void* signal) {
    QScatterSeries_QBaseConnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

void q_scatterseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnConnectNotify((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_disconnect_notify(void* self, void* signal) {
    QScatterSeries_DisconnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

void q_scatterseries_qbase_disconnect_notify(void* self, void* signal) {
    QScatterSeries_QBaseDisconnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

void q_scatterseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QScatterSeries_OnDisconnectNotify((QScatterSeries*)self, (intptr_t)callback);
}

QObject* q_scatterseries_sender(void* self) {
    return QScatterSeries_Sender((QScatterSeries*)self);
}

QObject* q_scatterseries_qbase_sender(void* self) {
    return QScatterSeries_QBaseSender((QScatterSeries*)self);
}

void q_scatterseries_on_sender(void* self, QObject* (*callback)()) {
    QScatterSeries_OnSender((QScatterSeries*)self, (intptr_t)callback);
}

int32_t q_scatterseries_sender_signal_index(void* self) {
    return QScatterSeries_SenderSignalIndex((QScatterSeries*)self);
}

int32_t q_scatterseries_qbase_sender_signal_index(void* self) {
    return QScatterSeries_QBaseSenderSignalIndex((QScatterSeries*)self);
}

void q_scatterseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QScatterSeries_OnSenderSignalIndex((QScatterSeries*)self, (intptr_t)callback);
}

int32_t q_scatterseries_receivers(void* self, const char* signal) {
    return QScatterSeries_Receivers((QScatterSeries*)self, signal);
}

int32_t q_scatterseries_qbase_receivers(void* self, const char* signal) {
    return QScatterSeries_QBaseReceivers((QScatterSeries*)self, signal);
}

void q_scatterseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QScatterSeries_OnReceivers((QScatterSeries*)self, (intptr_t)callback);
}

bool q_scatterseries_is_signal_connected(void* self, void* signal) {
    return QScatterSeries_IsSignalConnected((QScatterSeries*)self, (QMetaMethod*)signal);
}

bool q_scatterseries_qbase_is_signal_connected(void* self, void* signal) {
    return QScatterSeries_QBaseIsSignalConnected((QScatterSeries*)self, (QMetaMethod*)signal);
}

void q_scatterseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QScatterSeries_OnIsSignalConnected((QScatterSeries*)self, (intptr_t)callback);
}

void q_scatterseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scatterseries_delete(void* self) {
    QScatterSeries_Delete((QScatterSeries*)(self));
}
