#include "libqabstract3dgraph.hpp"
#include "../libqaccessible.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqsurface.hpp"
#include "libqsurface3dseries.hpp"
#include "../libqsurfaceformat.hpp"
#include "libqvalue3daxis.hpp"
#include "../libqwindow.hpp"
#include "libq3dsurface.hpp"
#include "libq3dsurface.h"

Q3DSurface* q_3dsurface_new() {
    return Q3DSurface_New();
}

Q3DSurface* q_3dsurface_new2(const void* format) {
    return Q3DSurface_New2((QSurfaceFormat*)format);
}

Q3DSurface* q_3dsurface_new3(const void* format, void* parent) {
    return Q3DSurface_New3((QSurfaceFormat*)format, (QWindow*)parent);
}

const QMetaObject* q_3dsurface_meta_object(const void* self) {
    return Q3DSurface_MetaObject((Q3DSurface*)self);
}

void q_3dsurface_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    Q3DSurface_OnMetaObject((Q3DSurface*)self, (intptr_t)callback);
}

const QMetaObject* q_3dsurface_super_meta_object(const void* self) {
    return Q3DSurface_SuperMetaObject((Q3DSurface*)self);
}

void* q_3dsurface_metacast(void* self, const char* param1) {
    return Q3DSurface_Metacast((Q3DSurface*)self, param1);
}

void q_3dsurface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Q3DSurface_OnMetacast((Q3DSurface*)self, (intptr_t)callback);
}

void* q_3dsurface_super_metacast(void* self, const char* param1) {
    return Q3DSurface_SuperMetacast((Q3DSurface*)self, param1);
}

int32_t q_3dsurface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DSurface_Metacall((Q3DSurface*)self, param1, param2, param3);
}

void q_3dsurface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Q3DSurface_OnMetacall((Q3DSurface*)self, (intptr_t)callback);
}

int32_t q_3dsurface_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DSurface_SuperMetacall((Q3DSurface*)self, param1, param2, param3);
}

const char* q_3dsurface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dsurface_add_series(void* self, void* series) {
    Q3DSurface_AddSeries((Q3DSurface*)self, (QSurface3DSeries*)series);
}

void q_3dsurface_remove_series(void* self, void* series) {
    Q3DSurface_RemoveSeries((Q3DSurface*)self, (QSurface3DSeries*)series);
}

libqt_list /* of QSurface3DSeries* */ q_3dsurface_series_list(const void* self) {
    libqt_list _arr = Q3DSurface_SeriesList((Q3DSurface*)self);
    return _arr;
}

void q_3dsurface_set_axis_x(void* self, void* axis) {
    Q3DSurface_SetAxisX((Q3DSurface*)self, (QValue3DAxis*)axis);
}

QValue3DAxis* q_3dsurface_axis_x(const void* self) {
    return Q3DSurface_AxisX((Q3DSurface*)self);
}

void q_3dsurface_set_axis_y(void* self, void* axis) {
    Q3DSurface_SetAxisY((Q3DSurface*)self, (QValue3DAxis*)axis);
}

QValue3DAxis* q_3dsurface_axis_y(const void* self) {
    return Q3DSurface_AxisY((Q3DSurface*)self);
}

void q_3dsurface_set_axis_z(void* self, void* axis) {
    Q3DSurface_SetAxisZ((Q3DSurface*)self, (QValue3DAxis*)axis);
}

QValue3DAxis* q_3dsurface_axis_z(const void* self) {
    return Q3DSurface_AxisZ((Q3DSurface*)self);
}

void q_3dsurface_add_axis(void* self, void* axis) {
    Q3DSurface_AddAxis((Q3DSurface*)self, (QValue3DAxis*)axis);
}

void q_3dsurface_release_axis(void* self, void* axis) {
    Q3DSurface_ReleaseAxis((Q3DSurface*)self, (QValue3DAxis*)axis);
}

libqt_list /* of QValue3DAxis* */ q_3dsurface_axes(const void* self) {
    libqt_list _arr = Q3DSurface_Axes((Q3DSurface*)self);
    return _arr;
}

QSurface3DSeries* q_3dsurface_selected_series(const void* self) {
    return Q3DSurface_SelectedSeries((Q3DSurface*)self);
}

void q_3dsurface_set_flip_horizontal_grid(void* self, bool flip) {
    Q3DSurface_SetFlipHorizontalGrid((Q3DSurface*)self, flip);
}

bool q_3dsurface_flip_horizontal_grid(const void* self) {
    return Q3DSurface_FlipHorizontalGrid((Q3DSurface*)self);
}

void q_3dsurface_axis_x_changed(void* self, void* axis) {
    Q3DSurface_AxisXChanged((Q3DSurface*)self, (QValue3DAxis*)axis);
}

void q_3dsurface_on_axis_x_changed(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_Connect_AxisXChanged((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_axis_y_changed(void* self, void* axis) {
    Q3DSurface_AxisYChanged((Q3DSurface*)self, (QValue3DAxis*)axis);
}

void q_3dsurface_on_axis_y_changed(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_Connect_AxisYChanged((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_axis_z_changed(void* self, void* axis) {
    Q3DSurface_AxisZChanged((Q3DSurface*)self, (QValue3DAxis*)axis);
}

void q_3dsurface_on_axis_z_changed(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_Connect_AxisZChanged((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_selected_series_changed(void* self, void* series) {
    Q3DSurface_SelectedSeriesChanged((Q3DSurface*)self, (QSurface3DSeries*)series);
}

void q_3dsurface_on_selected_series_changed(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_Connect_SelectedSeriesChanged((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_flip_horizontal_grid_changed(void* self, bool flip) {
    Q3DSurface_FlipHorizontalGridChanged((Q3DSurface*)self, flip);
}

void q_3dsurface_on_flip_horizontal_grid_changed(void* self, void (*callback)(void*, bool)) {
    Q3DSurface_Connect_FlipHorizontalGridChanged((Q3DSurface*)self, (intptr_t)callback);
}

const char* q_3dsurface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dsurface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dsurface_add_input_handler(void* self, void* inputHandler) {
    QAbstract3DGraph_AddInputHandler((QAbstract3DGraph*)self, (QAbstract3DInputHandler*)inputHandler);
}

void q_3dsurface_release_input_handler(void* self, void* inputHandler) {
    QAbstract3DGraph_ReleaseInputHandler((QAbstract3DGraph*)self, (QAbstract3DInputHandler*)inputHandler);
}

void q_3dsurface_set_active_input_handler(void* self, void* inputHandler) {
    QAbstract3DGraph_SetActiveInputHandler((QAbstract3DGraph*)self, (QAbstract3DInputHandler*)inputHandler);
}

QAbstract3DInputHandler* q_3dsurface_active_input_handler(const void* self) {
    return QAbstract3DGraph_ActiveInputHandler((QAbstract3DGraph*)self);
}

libqt_list /* of QAbstract3DInputHandler* */ q_3dsurface_input_handlers(const void* self) {
    libqt_list _arr = QAbstract3DGraph_InputHandlers((QAbstract3DGraph*)self);
    return _arr;
}

void q_3dsurface_add_theme(void* self, void* theme) {
    QAbstract3DGraph_AddTheme((QAbstract3DGraph*)self, (Q3DTheme*)theme);
}

void q_3dsurface_release_theme(void* self, void* theme) {
    QAbstract3DGraph_ReleaseTheme((QAbstract3DGraph*)self, (Q3DTheme*)theme);
}

void q_3dsurface_set_active_theme(void* self, void* theme) {
    QAbstract3DGraph_SetActiveTheme((QAbstract3DGraph*)self, (Q3DTheme*)theme);
}

Q3DTheme* q_3dsurface_active_theme(const void* self) {
    return QAbstract3DGraph_ActiveTheme((QAbstract3DGraph*)self);
}

libqt_list /* of Q3DTheme* */ q_3dsurface_themes(const void* self) {
    libqt_list _arr = QAbstract3DGraph_Themes((QAbstract3DGraph*)self);
    return _arr;
}

void q_3dsurface_set_selection_mode(void* self, int32_t mode) {
    QAbstract3DGraph_SetSelectionMode((QAbstract3DGraph*)self, mode);
}

int32_t q_3dsurface_selection_mode(const void* self) {
    return QAbstract3DGraph_SelectionMode((QAbstract3DGraph*)self);
}

void q_3dsurface_set_shadow_quality(void* self, int32_t quality) {
    QAbstract3DGraph_SetShadowQuality((QAbstract3DGraph*)self, quality);
}

int32_t q_3dsurface_shadow_quality(const void* self) {
    return QAbstract3DGraph_ShadowQuality((QAbstract3DGraph*)self);
}

Q3DScene* q_3dsurface_scene(const void* self) {
    return QAbstract3DGraph_Scene((QAbstract3DGraph*)self);
}

void q_3dsurface_clear_selection(void* self) {
    QAbstract3DGraph_ClearSelection((QAbstract3DGraph*)self);
}

bool q_3dsurface_has_series(const void* self, void* series) {
    return QAbstract3DGraph_HasSeries((QAbstract3DGraph*)self, (QAbstract3DSeries*)series);
}

int32_t q_3dsurface_add_custom_item(void* self, void* item) {
    return QAbstract3DGraph_AddCustomItem((QAbstract3DGraph*)self, (QCustom3DItem*)item);
}

void q_3dsurface_remove_custom_items(void* self) {
    QAbstract3DGraph_RemoveCustomItems((QAbstract3DGraph*)self);
}

void q_3dsurface_remove_custom_item(void* self, void* item) {
    QAbstract3DGraph_RemoveCustomItem((QAbstract3DGraph*)self, (QCustom3DItem*)item);
}

void q_3dsurface_remove_custom_item_at(void* self, const void* position) {
    QAbstract3DGraph_RemoveCustomItemAt((QAbstract3DGraph*)self, (QVector3D*)position);
}

void q_3dsurface_release_custom_item(void* self, void* item) {
    QAbstract3DGraph_ReleaseCustomItem((QAbstract3DGraph*)self, (QCustom3DItem*)item);
}

libqt_list /* of QCustom3DItem* */ q_3dsurface_custom_items(const void* self) {
    libqt_list _arr = QAbstract3DGraph_CustomItems((QAbstract3DGraph*)self);
    return _arr;
}

int32_t q_3dsurface_selected_label_index(const void* self) {
    return QAbstract3DGraph_SelectedLabelIndex((QAbstract3DGraph*)self);
}

QAbstract3DAxis* q_3dsurface_selected_axis(const void* self) {
    return QAbstract3DGraph_SelectedAxis((QAbstract3DGraph*)self);
}

int32_t q_3dsurface_selected_custom_item_index(const void* self) {
    return QAbstract3DGraph_SelectedCustomItemIndex((QAbstract3DGraph*)self);
}

QCustom3DItem* q_3dsurface_selected_custom_item(const void* self) {
    return QAbstract3DGraph_SelectedCustomItem((QAbstract3DGraph*)self);
}

QImage* q_3dsurface_render_to_image(void* self) {
    return QAbstract3DGraph_RenderToImage((QAbstract3DGraph*)self);
}

void q_3dsurface_set_measure_fps(void* self, bool enable) {
    QAbstract3DGraph_SetMeasureFps((QAbstract3DGraph*)self, enable);
}

bool q_3dsurface_measure_fps(const void* self) {
    return QAbstract3DGraph_MeasureFps((QAbstract3DGraph*)self);
}

double q_3dsurface_current_fps(const void* self) {
    return QAbstract3DGraph_CurrentFps((QAbstract3DGraph*)self);
}

void q_3dsurface_set_ortho_projection(void* self, bool enable) {
    QAbstract3DGraph_SetOrthoProjection((QAbstract3DGraph*)self, enable);
}

bool q_3dsurface_is_ortho_projection(const void* self) {
    return QAbstract3DGraph_IsOrthoProjection((QAbstract3DGraph*)self);
}

int32_t q_3dsurface_selected_element(const void* self) {
    return QAbstract3DGraph_SelectedElement((QAbstract3DGraph*)self);
}

void q_3dsurface_set_aspect_ratio(void* self, double ratio) {
    QAbstract3DGraph_SetAspectRatio((QAbstract3DGraph*)self, ratio);
}

double q_3dsurface_aspect_ratio(const void* self) {
    return QAbstract3DGraph_AspectRatio((QAbstract3DGraph*)self);
}

void q_3dsurface_set_optimization_hints(void* self, int32_t hints) {
    QAbstract3DGraph_SetOptimizationHints((QAbstract3DGraph*)self, hints);
}

int32_t q_3dsurface_optimization_hints(const void* self) {
    return QAbstract3DGraph_OptimizationHints((QAbstract3DGraph*)self);
}

void q_3dsurface_set_polar(void* self, bool enable) {
    QAbstract3DGraph_SetPolar((QAbstract3DGraph*)self, enable);
}

bool q_3dsurface_is_polar(const void* self) {
    return QAbstract3DGraph_IsPolar((QAbstract3DGraph*)self);
}

void q_3dsurface_set_radial_label_offset(void* self, float offset) {
    QAbstract3DGraph_SetRadialLabelOffset((QAbstract3DGraph*)self, offset);
}

float q_3dsurface_radial_label_offset(const void* self) {
    return QAbstract3DGraph_RadialLabelOffset((QAbstract3DGraph*)self);
}

void q_3dsurface_set_horizontal_aspect_ratio(void* self, double ratio) {
    QAbstract3DGraph_SetHorizontalAspectRatio((QAbstract3DGraph*)self, ratio);
}

double q_3dsurface_horizontal_aspect_ratio(const void* self) {
    return QAbstract3DGraph_HorizontalAspectRatio((QAbstract3DGraph*)self);
}

void q_3dsurface_set_reflection(void* self, bool enable) {
    QAbstract3DGraph_SetReflection((QAbstract3DGraph*)self, enable);
}

bool q_3dsurface_is_reflection(const void* self) {
    return QAbstract3DGraph_IsReflection((QAbstract3DGraph*)self);
}

void q_3dsurface_set_reflectivity(void* self, double reflectivity) {
    QAbstract3DGraph_SetReflectivity((QAbstract3DGraph*)self, reflectivity);
}

double q_3dsurface_reflectivity(const void* self) {
    return QAbstract3DGraph_Reflectivity((QAbstract3DGraph*)self);
}

void q_3dsurface_set_locale(void* self, const void* locale) {
    QAbstract3DGraph_SetLocale((QAbstract3DGraph*)self, (QLocale*)locale);
}

QLocale* q_3dsurface_locale(const void* self) {
    return QAbstract3DGraph_Locale((QAbstract3DGraph*)self);
}

QVector3D* q_3dsurface_queried_graph_position(const void* self) {
    return QAbstract3DGraph_QueriedGraphPosition((QAbstract3DGraph*)self);
}

void q_3dsurface_set_margin(void* self, double margin) {
    QAbstract3DGraph_SetMargin((QAbstract3DGraph*)self, margin);
}

double q_3dsurface_margin(const void* self) {
    return QAbstract3DGraph_Margin((QAbstract3DGraph*)self);
}

bool q_3dsurface_has_context(const void* self) {
    return QAbstract3DGraph_HasContext((QAbstract3DGraph*)self);
}

void q_3dsurface_active_input_handler_changed(void* self, void* inputHandler) {
    QAbstract3DGraph_ActiveInputHandlerChanged((QAbstract3DGraph*)self, (QAbstract3DInputHandler*)inputHandler);
}

void q_3dsurface_on_active_input_handler_changed(void* self, void (*callback)(void*, void*)) {
    QAbstract3DGraph_Connect_ActiveInputHandlerChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_active_theme_changed(void* self, void* theme) {
    QAbstract3DGraph_ActiveThemeChanged((QAbstract3DGraph*)self, (Q3DTheme*)theme);
}

void q_3dsurface_on_active_theme_changed(void* self, void (*callback)(void*, void*)) {
    QAbstract3DGraph_Connect_ActiveThemeChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_selection_mode_changed(void* self, int32_t mode) {
    QAbstract3DGraph_SelectionModeChanged((QAbstract3DGraph*)self, mode);
}

void q_3dsurface_on_selection_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DGraph_Connect_SelectionModeChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_shadow_quality_changed(void* self, int32_t quality) {
    QAbstract3DGraph_ShadowQualityChanged((QAbstract3DGraph*)self, quality);
}

void q_3dsurface_on_shadow_quality_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DGraph_Connect_ShadowQualityChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_selected_element_changed(void* self, int32_t type) {
    QAbstract3DGraph_SelectedElementChanged((QAbstract3DGraph*)self, type);
}

void q_3dsurface_on_selected_element_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DGraph_Connect_SelectedElementChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_measure_fps_changed(void* self, bool enabled) {
    QAbstract3DGraph_MeasureFpsChanged((QAbstract3DGraph*)self, enabled);
}

void q_3dsurface_on_measure_fps_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DGraph_Connect_MeasureFpsChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_current_fps_changed(void* self, double fps) {
    QAbstract3DGraph_CurrentFpsChanged((QAbstract3DGraph*)self, fps);
}

void q_3dsurface_on_current_fps_changed(void* self, void (*callback)(void*, double)) {
    QAbstract3DGraph_Connect_CurrentFpsChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_ortho_projection_changed(void* self, bool enabled) {
    QAbstract3DGraph_OrthoProjectionChanged((QAbstract3DGraph*)self, enabled);
}

void q_3dsurface_on_ortho_projection_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DGraph_Connect_OrthoProjectionChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_aspect_ratio_changed(void* self, double ratio) {
    QAbstract3DGraph_AspectRatioChanged((QAbstract3DGraph*)self, ratio);
}

void q_3dsurface_on_aspect_ratio_changed(void* self, void (*callback)(void*, double)) {
    QAbstract3DGraph_Connect_AspectRatioChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_optimization_hints_changed(void* self, int32_t hints) {
    QAbstract3DGraph_OptimizationHintsChanged((QAbstract3DGraph*)self, hints);
}

void q_3dsurface_on_optimization_hints_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DGraph_Connect_OptimizationHintsChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_polar_changed(void* self, bool enabled) {
    QAbstract3DGraph_PolarChanged((QAbstract3DGraph*)self, enabled);
}

void q_3dsurface_on_polar_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DGraph_Connect_PolarChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_radial_label_offset_changed(void* self, float offset) {
    QAbstract3DGraph_RadialLabelOffsetChanged((QAbstract3DGraph*)self, offset);
}

void q_3dsurface_on_radial_label_offset_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DGraph_Connect_RadialLabelOffsetChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_horizontal_aspect_ratio_changed(void* self, double ratio) {
    QAbstract3DGraph_HorizontalAspectRatioChanged((QAbstract3DGraph*)self, ratio);
}

void q_3dsurface_on_horizontal_aspect_ratio_changed(void* self, void (*callback)(void*, double)) {
    QAbstract3DGraph_Connect_HorizontalAspectRatioChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_reflection_changed(void* self, bool enabled) {
    QAbstract3DGraph_ReflectionChanged((QAbstract3DGraph*)self, enabled);
}

void q_3dsurface_on_reflection_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DGraph_Connect_ReflectionChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_reflectivity_changed(void* self, double reflectivity) {
    QAbstract3DGraph_ReflectivityChanged((QAbstract3DGraph*)self, reflectivity);
}

void q_3dsurface_on_reflectivity_changed(void* self, void (*callback)(void*, double)) {
    QAbstract3DGraph_Connect_ReflectivityChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_locale_changed(void* self, const void* locale) {
    QAbstract3DGraph_LocaleChanged((QAbstract3DGraph*)self, (QLocale*)locale);
}

void q_3dsurface_on_locale_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DGraph_Connect_LocaleChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_queried_graph_position_changed(void* self, const void* data) {
    QAbstract3DGraph_QueriedGraphPositionChanged((QAbstract3DGraph*)self, (QVector3D*)data);
}

void q_3dsurface_on_queried_graph_position_changed(void* self, void (*callback)(void*, const void*)) {
    QAbstract3DGraph_Connect_QueriedGraphPositionChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

void q_3dsurface_margin_changed(void* self, double margin) {
    QAbstract3DGraph_MarginChanged((QAbstract3DGraph*)self, margin);
}

void q_3dsurface_on_margin_changed(void* self, void (*callback)(void*, double)) {
    QAbstract3DGraph_Connect_MarginChanged((QAbstract3DGraph*)self, (intptr_t)callback);
}

QImage* q_3dsurface_render_to_image1(void* self, int msaaSamples) {
    return QAbstract3DGraph_RenderToImage1((QAbstract3DGraph*)self, msaaSamples);
}

QImage* q_3dsurface_render_to_image2(void* self, int msaaSamples, const void* imageSize) {
    return QAbstract3DGraph_RenderToImage2((QAbstract3DGraph*)self, msaaSamples, (QSize*)imageSize);
}

QSurface* q_3dsurface_as_q_surface(const void* self) {
    return QWindow_AsQSurface((QWindow*)self);
}

Q3DSurface* q_3dsurface_from_q_surface(const void* _qsurface) {
    return (Q3DSurface*)QWindow_FromQSurface((QSurface*)_qsurface);
}

void q_3dsurface_set_surface_type(void* self, int32_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

bool q_3dsurface_is_visible(const void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

int32_t q_3dsurface_visibility(const void* self) {
    return QWindow_Visibility((QWindow*)self);
}

void q_3dsurface_set_visibility(void* self, int32_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

void q_3dsurface_create(void* self) {
    QWindow_Create((QWindow*)self);
}

uintptr_t q_3dsurface_win_id(const void* self) {
    return QWindow_WinId((QWindow*)self);
}

QWindow* q_3dsurface_parent(const void* self) {
    return QWindow_Parent((QWindow*)self);
}

void q_3dsurface_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

bool q_3dsurface_is_top_level(const void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

bool q_3dsurface_is_modal(const void* self) {
    return QWindow_IsModal((QWindow*)self);
}

int32_t q_3dsurface_modality(const void* self) {
    return QWindow_Modality((QWindow*)self);
}

void q_3dsurface_set_modality(void* self, int32_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

void q_3dsurface_set_format(void* self, const void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_3dsurface_requested_format(const void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

void q_3dsurface_set_flags(void* self, int32_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

int32_t q_3dsurface_flags(const void* self) {
    return QWindow_Flags((QWindow*)self);
}

void q_3dsurface_set_flag(void* self, int32_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

int32_t q_3dsurface_type(const void* self) {
    return QWindow_Type((QWindow*)self);
}

const char* q_3dsurface_title(const void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dsurface_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

double q_3dsurface_opacity(const void* self) {
    return QWindow_Opacity((QWindow*)self);
}

void q_3dsurface_set_mask(void* self, const void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

QRegion* q_3dsurface_mask(const void* self) {
    return QWindow_Mask((QWindow*)self);
}

bool q_3dsurface_is_active(const void* self) {
    return QWindow_IsActive((QWindow*)self);
}

void q_3dsurface_report_content_orientation_change(void* self, int32_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

int32_t q_3dsurface_content_orientation(const void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

double q_3dsurface_device_pixel_ratio(const void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

int32_t q_3dsurface_window_state(const void* self) {
    return QWindow_WindowState((QWindow*)self);
}

int32_t q_3dsurface_window_states(const void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

void q_3dsurface_set_window_state(void* self, int32_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

void q_3dsurface_set_window_states(void* self, int32_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

void q_3dsurface_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

QWindow* q_3dsurface_transient_parent(const void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

bool q_3dsurface_is_ancestor_of(const void* self, const void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

bool q_3dsurface_is_exposed(const void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

int32_t q_3dsurface_minimum_width(const void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

int32_t q_3dsurface_minimum_height(const void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

int32_t q_3dsurface_maximum_width(const void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

int32_t q_3dsurface_maximum_height(const void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

QSize* q_3dsurface_minimum_size(const void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

QSize* q_3dsurface_maximum_size(const void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

QSize* q_3dsurface_base_size(const void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

QSize* q_3dsurface_size_increment(const void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

void q_3dsurface_set_minimum_size(void* self, const void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

void q_3dsurface_set_maximum_size(void* self, const void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

void q_3dsurface_set_base_size(void* self, const void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

void q_3dsurface_set_size_increment(void* self, const void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

QRect* q_3dsurface_geometry(const void* self) {
    return QWindow_Geometry((QWindow*)self);
}

QMargins* q_3dsurface_frame_margins(const void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

QRect* q_3dsurface_frame_geometry(const void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

QPoint* q_3dsurface_frame_position(const void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

void q_3dsurface_set_frame_position(void* self, const void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

int32_t q_3dsurface_width(const void* self) {
    return QWindow_Width((QWindow*)self);
}

int32_t q_3dsurface_height(const void* self) {
    return QWindow_Height((QWindow*)self);
}

int32_t q_3dsurface_x(const void* self) {
    return QWindow_X((QWindow*)self);
}

int32_t q_3dsurface_y(const void* self) {
    return QWindow_Y((QWindow*)self);
}

QPoint* q_3dsurface_position(const void* self) {
    return QWindow_Position((QWindow*)self);
}

void q_3dsurface_set_position(void* self, const void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

void q_3dsurface_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

void q_3dsurface_resize(void* self, const void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

void q_3dsurface_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

void q_3dsurface_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

const char* q_3dsurface_file_path(const void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dsurface_set_icon(void* self, const void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

QIcon* q_3dsurface_icon(const void* self) {
    return QWindow_Icon((QWindow*)self);
}

void q_3dsurface_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

bool q_3dsurface_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

bool q_3dsurface_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

QScreen* q_3dsurface_screen(const void* self) {
    return QWindow_Screen((QWindow*)self);
}

void q_3dsurface_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

QPointF* q_3dsurface_map_to_global(const void* self, const void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

QPointF* q_3dsurface_map_from_global(const void* self, const void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

QPoint* q_3dsurface_map_to_global2(const void* self, const void* pos) {
    return QWindow_MapToGlobal2((QWindow*)self, (QPoint*)pos);
}

QPoint* q_3dsurface_map_from_global2(const void* self, const void* pos) {
    return QWindow_MapFromGlobal2((QWindow*)self, (QPoint*)pos);
}

QCursor* q_3dsurface_cursor(const void* self) {
    return QWindow_Cursor((QWindow*)self);
}

void q_3dsurface_set_cursor(void* self, const void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

void q_3dsurface_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

QWindow* q_3dsurface_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

void q_3dsurface_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

void q_3dsurface_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

void q_3dsurface_show(void* self) {
    QWindow_Show((QWindow*)self);
}

void q_3dsurface_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

void q_3dsurface_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

void q_3dsurface_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

void q_3dsurface_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

void q_3dsurface_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

bool q_3dsurface_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

void q_3dsurface_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

void q_3dsurface_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

bool q_3dsurface_start_system_resize(void* self, int32_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

bool q_3dsurface_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

void q_3dsurface_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

void q_3dsurface_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

void q_3dsurface_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

void q_3dsurface_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

void q_3dsurface_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

void q_3dsurface_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

void q_3dsurface_set_geometry2(void* self, const void* rect) {
    QWindow_SetGeometry2((QWindow*)self, (QRect*)rect);
}

void q_3dsurface_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

void q_3dsurface_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

void q_3dsurface_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

void q_3dsurface_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

void q_3dsurface_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

void q_3dsurface_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

void q_3dsurface_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

void q_3dsurface_on_screen_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_modality_changed(void* self, int32_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

void q_3dsurface_on_modality_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_window_state_changed(void* self, int32_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

void q_3dsurface_on_window_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

void q_3dsurface_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

void q_3dsurface_on_x_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

void q_3dsurface_on_y_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

void q_3dsurface_on_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

void q_3dsurface_on_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

void q_3dsurface_on_minimum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

void q_3dsurface_on_minimum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

void q_3dsurface_on_maximum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

void q_3dsurface_on_maximum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

void q_3dsurface_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_visibility_changed(void* self, int32_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

void q_3dsurface_on_visibility_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

void q_3dsurface_on_active_changed(void* self, void (*callback)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_content_orientation_changed(void* self, int32_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

void q_3dsurface_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

void q_3dsurface_on_focus_object_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

void q_3dsurface_on_opacity_changed(void* self, void (*callback)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)callback);
}

void q_3dsurface_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

void q_3dsurface_on_transient_parent_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)callback);
}

QWindow* q_3dsurface_parent1(const void* self, int32_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

void q_3dsurface_set_flag2(void* self, int32_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

bool q_3dsurface_is_ancestor_of2(const void* self, const void* child, int32_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

const char* q_3dsurface_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dsurface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_3dsurface_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_3dsurface_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_3dsurface_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_3dsurface_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_3dsurface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_3dsurface_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_3dsurface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_3dsurface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_3dsurface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_3dsurface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_3dsurface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_3dsurface_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_3dsurface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_3dsurface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_3dsurface_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_3dsurface_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_3dsurface_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_3dsurface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_3dsurface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_3dsurface_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_3dsurface_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_3dsurface_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_3dsurface_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_3dsurface_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_3dsurface_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_3dsurface_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_3dsurface_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_3dsurface_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_3dsurface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_3dsurface_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_3dsurface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_3dsurface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_3dsurface_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_3dsurface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_3dsurface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_3dsurface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_3dsurface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_3dsurface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_3dsurface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_3dsurface_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_3dsurface_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_3dsurface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_3dsurface_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_3dsurface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_3dsurface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_3dsurface_surface_class(const void* self) {
    return QSurface_SurfaceClass(q_3dsurface_as_q_surface(self));
}

bool q_3dsurface_supports_open_g_l(const void* self) {
    return QSurface_SupportsOpenGL(q_3dsurface_as_q_surface(self));
}

bool q_3dsurface_shadows_supported(const void* self) {
    return Q3DSurface_ShadowsSupported((Q3DSurface*)self);
}

bool q_3dsurface_super_shadows_supported(const void* self) {
    return Q3DSurface_SuperShadowsSupported((Q3DSurface*)self);
}

void q_3dsurface_on_shadows_supported(void* self, bool (*callback)(const void*)) {
    Q3DSurface_OnShadowsSupported((Q3DSurface*)self, (intptr_t)callback);
}

bool q_3dsurface_event(void* self, void* event) {
    return Q3DSurface_Event((Q3DSurface*)self, (QEvent*)event);
}

bool q_3dsurface_super_event(void* self, void* event) {
    return Q3DSurface_SuperEvent((Q3DSurface*)self, (QEvent*)event);
}

void q_3dsurface_on_event(void* self, bool (*callback)(void*, void*)) {
    Q3DSurface_OnEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_resize_event(void* self, void* event) {
    Q3DSurface_ResizeEvent((Q3DSurface*)self, (QResizeEvent*)event);
}

void q_3dsurface_super_resize_event(void* self, void* event) {
    Q3DSurface_SuperResizeEvent((Q3DSurface*)self, (QResizeEvent*)event);
}

void q_3dsurface_on_resize_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnResizeEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_expose_event(void* self, void* event) {
    Q3DSurface_ExposeEvent((Q3DSurface*)self, (QExposeEvent*)event);
}

void q_3dsurface_super_expose_event(void* self, void* event) {
    Q3DSurface_SuperExposeEvent((Q3DSurface*)self, (QExposeEvent*)event);
}

void q_3dsurface_on_expose_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnExposeEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_mouse_double_click_event(void* self, void* event) {
    Q3DSurface_MouseDoubleClickEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_super_mouse_double_click_event(void* self, void* event) {
    Q3DSurface_SuperMouseDoubleClickEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnMouseDoubleClickEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_touch_event(void* self, void* event) {
    Q3DSurface_TouchEvent((Q3DSurface*)self, (QTouchEvent*)event);
}

void q_3dsurface_super_touch_event(void* self, void* event) {
    Q3DSurface_SuperTouchEvent((Q3DSurface*)self, (QTouchEvent*)event);
}

void q_3dsurface_on_touch_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnTouchEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_mouse_press_event(void* self, void* event) {
    Q3DSurface_MousePressEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_super_mouse_press_event(void* self, void* event) {
    Q3DSurface_SuperMousePressEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnMousePressEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_mouse_release_event(void* self, void* event) {
    Q3DSurface_MouseReleaseEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_super_mouse_release_event(void* self, void* event) {
    Q3DSurface_SuperMouseReleaseEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnMouseReleaseEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_mouse_move_event(void* self, void* event) {
    Q3DSurface_MouseMoveEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_super_mouse_move_event(void* self, void* event) {
    Q3DSurface_SuperMouseMoveEvent((Q3DSurface*)self, (QMouseEvent*)event);
}

void q_3dsurface_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnMouseMoveEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_wheel_event(void* self, void* event) {
    Q3DSurface_WheelEvent((Q3DSurface*)self, (QWheelEvent*)event);
}

void q_3dsurface_super_wheel_event(void* self, void* event) {
    Q3DSurface_SuperWheelEvent((Q3DSurface*)self, (QWheelEvent*)event);
}

void q_3dsurface_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnWheelEvent((Q3DSurface*)self, (intptr_t)callback);
}

int32_t q_3dsurface_surface_type(const void* self) {
    return Q3DSurface_SurfaceType((Q3DSurface*)self);
}

int32_t q_3dsurface_super_surface_type(const void* self) {
    return Q3DSurface_SuperSurfaceType((Q3DSurface*)self);
}

void q_3dsurface_on_surface_type(void* self, int32_t (*callback)(const void*)) {
    Q3DSurface_OnSurfaceType((Q3DSurface*)self, (intptr_t)callback);
}

QSurfaceFormat* q_3dsurface_format(const void* self) {
    return Q3DSurface_Format((Q3DSurface*)self);
}

QSurfaceFormat* q_3dsurface_super_format(const void* self) {
    return Q3DSurface_SuperFormat((Q3DSurface*)self);
}

void q_3dsurface_on_format(void* self, QSurfaceFormat* (*callback)(const void*)) {
    Q3DSurface_OnFormat((Q3DSurface*)self, (intptr_t)callback);
}

QSize* q_3dsurface_size(const void* self) {
    return Q3DSurface_Size((Q3DSurface*)self);
}

QSize* q_3dsurface_super_size(const void* self) {
    return Q3DSurface_SuperSize((Q3DSurface*)self);
}

void q_3dsurface_on_size(void* self, QSize* (*callback)(const void*)) {
    Q3DSurface_OnSize((Q3DSurface*)self, (intptr_t)callback);
}

QAccessibleInterface* q_3dsurface_accessible_root(const void* self) {
    return Q3DSurface_AccessibleRoot((Q3DSurface*)self);
}

QAccessibleInterface* q_3dsurface_super_accessible_root(const void* self) {
    return Q3DSurface_SuperAccessibleRoot((Q3DSurface*)self);
}

void q_3dsurface_on_accessible_root(void* self, QAccessibleInterface* (*callback)(const void*)) {
    Q3DSurface_OnAccessibleRoot((Q3DSurface*)self, (intptr_t)callback);
}

QObject* q_3dsurface_focus_object(const void* self) {
    return Q3DSurface_FocusObject((Q3DSurface*)self);
}

QObject* q_3dsurface_super_focus_object(const void* self) {
    return Q3DSurface_SuperFocusObject((Q3DSurface*)self);
}

void q_3dsurface_on_focus_object(void* self, QObject* (*callback)(const void*)) {
    Q3DSurface_OnFocusObject((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_paint_event(void* self, void* param1) {
    Q3DSurface_PaintEvent((Q3DSurface*)self, (QPaintEvent*)param1);
}

void q_3dsurface_super_paint_event(void* self, void* param1) {
    Q3DSurface_SuperPaintEvent((Q3DSurface*)self, (QPaintEvent*)param1);
}

void q_3dsurface_on_paint_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnPaintEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_move_event(void* self, void* param1) {
    Q3DSurface_MoveEvent((Q3DSurface*)self, (QMoveEvent*)param1);
}

void q_3dsurface_super_move_event(void* self, void* param1) {
    Q3DSurface_SuperMoveEvent((Q3DSurface*)self, (QMoveEvent*)param1);
}

void q_3dsurface_on_move_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnMoveEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_focus_in_event(void* self, void* param1) {
    Q3DSurface_FocusInEvent((Q3DSurface*)self, (QFocusEvent*)param1);
}

void q_3dsurface_super_focus_in_event(void* self, void* param1) {
    Q3DSurface_SuperFocusInEvent((Q3DSurface*)self, (QFocusEvent*)param1);
}

void q_3dsurface_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnFocusInEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_focus_out_event(void* self, void* param1) {
    Q3DSurface_FocusOutEvent((Q3DSurface*)self, (QFocusEvent*)param1);
}

void q_3dsurface_super_focus_out_event(void* self, void* param1) {
    Q3DSurface_SuperFocusOutEvent((Q3DSurface*)self, (QFocusEvent*)param1);
}

void q_3dsurface_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnFocusOutEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_show_event(void* self, void* param1) {
    Q3DSurface_ShowEvent((Q3DSurface*)self, (QShowEvent*)param1);
}

void q_3dsurface_super_show_event(void* self, void* param1) {
    Q3DSurface_SuperShowEvent((Q3DSurface*)self, (QShowEvent*)param1);
}

void q_3dsurface_on_show_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnShowEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_hide_event(void* self, void* param1) {
    Q3DSurface_HideEvent((Q3DSurface*)self, (QHideEvent*)param1);
}

void q_3dsurface_super_hide_event(void* self, void* param1) {
    Q3DSurface_SuperHideEvent((Q3DSurface*)self, (QHideEvent*)param1);
}

void q_3dsurface_on_hide_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnHideEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_close_event(void* self, void* param1) {
    Q3DSurface_CloseEvent((Q3DSurface*)self, (QCloseEvent*)param1);
}

void q_3dsurface_super_close_event(void* self, void* param1) {
    Q3DSurface_SuperCloseEvent((Q3DSurface*)self, (QCloseEvent*)param1);
}

void q_3dsurface_on_close_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnCloseEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_key_press_event(void* self, void* param1) {
    Q3DSurface_KeyPressEvent((Q3DSurface*)self, (QKeyEvent*)param1);
}

void q_3dsurface_super_key_press_event(void* self, void* param1) {
    Q3DSurface_SuperKeyPressEvent((Q3DSurface*)self, (QKeyEvent*)param1);
}

void q_3dsurface_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnKeyPressEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_key_release_event(void* self, void* param1) {
    Q3DSurface_KeyReleaseEvent((Q3DSurface*)self, (QKeyEvent*)param1);
}

void q_3dsurface_super_key_release_event(void* self, void* param1) {
    Q3DSurface_SuperKeyReleaseEvent((Q3DSurface*)self, (QKeyEvent*)param1);
}

void q_3dsurface_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnKeyReleaseEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_tablet_event(void* self, void* param1) {
    Q3DSurface_TabletEvent((Q3DSurface*)self, (QTabletEvent*)param1);
}

void q_3dsurface_super_tablet_event(void* self, void* param1) {
    Q3DSurface_SuperTabletEvent((Q3DSurface*)self, (QTabletEvent*)param1);
}

void q_3dsurface_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnTabletEvent((Q3DSurface*)self, (intptr_t)callback);
}

bool q_3dsurface_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Q3DSurface_NativeEvent((Q3DSurface*)self, qstring(eventType), message, result);
}

bool q_3dsurface_super_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Q3DSurface_SuperNativeEvent((Q3DSurface*)self, qstring(eventType), message, result);
}

void q_3dsurface_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    Q3DSurface_OnNativeEvent((Q3DSurface*)self, (intptr_t)callback);
}

bool q_3dsurface_event_filter(void* self, void* watched, void* event) {
    return Q3DSurface_EventFilter((Q3DSurface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_3dsurface_super_event_filter(void* self, void* watched, void* event) {
    return Q3DSurface_SuperEventFilter((Q3DSurface*)self, (QObject*)watched, (QEvent*)event);
}

void q_3dsurface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Q3DSurface_OnEventFilter((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_timer_event(void* self, void* event) {
    Q3DSurface_TimerEvent((Q3DSurface*)self, (QTimerEvent*)event);
}

void q_3dsurface_super_timer_event(void* self, void* event) {
    Q3DSurface_SuperTimerEvent((Q3DSurface*)self, (QTimerEvent*)event);
}

void q_3dsurface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnTimerEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_child_event(void* self, void* event) {
    Q3DSurface_ChildEvent((Q3DSurface*)self, (QChildEvent*)event);
}

void q_3dsurface_super_child_event(void* self, void* event) {
    Q3DSurface_SuperChildEvent((Q3DSurface*)self, (QChildEvent*)event);
}

void q_3dsurface_on_child_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnChildEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_custom_event(void* self, void* event) {
    Q3DSurface_CustomEvent((Q3DSurface*)self, (QEvent*)event);
}

void q_3dsurface_super_custom_event(void* self, void* event) {
    Q3DSurface_SuperCustomEvent((Q3DSurface*)self, (QEvent*)event);
}

void q_3dsurface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Q3DSurface_OnCustomEvent((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_connect_notify(void* self, const void* signal) {
    Q3DSurface_ConnectNotify((Q3DSurface*)self, (QMetaMethod*)signal);
}

void q_3dsurface_super_connect_notify(void* self, const void* signal) {
    Q3DSurface_SuperConnectNotify((Q3DSurface*)self, (QMetaMethod*)signal);
}

void q_3dsurface_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DSurface_OnConnectNotify((Q3DSurface*)self, (intptr_t)callback);
}

void q_3dsurface_disconnect_notify(void* self, const void* signal) {
    Q3DSurface_DisconnectNotify((Q3DSurface*)self, (QMetaMethod*)signal);
}

void q_3dsurface_super_disconnect_notify(void* self, const void* signal) {
    Q3DSurface_SuperDisconnectNotify((Q3DSurface*)self, (QMetaMethod*)signal);
}

void q_3dsurface_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DSurface_OnDisconnectNotify((Q3DSurface*)self, (intptr_t)callback);
}

void* q_3dsurface_resolve_interface(const void* self, const char* name, int revision) {
    return Q3DSurface_ResolveInterface((Q3DSurface*)self, name, revision);
}

QObject* q_3dsurface_sender(const void* self) {
    return Q3DSurface_Sender((Q3DSurface*)self);
}

int32_t q_3dsurface_sender_signal_index(const void* self) {
    return Q3DSurface_SenderSignalIndex((Q3DSurface*)self);
}

int32_t q_3dsurface_receivers(const void* self, const char* signal) {
    return Q3DSurface_Receivers((Q3DSurface*)self, signal);
}

bool q_3dsurface_is_signal_connected(const void* self, const void* signal) {
    return Q3DSurface_IsSignalConnected((Q3DSurface*)self, (QMetaMethod*)signal);
}

void q_3dsurface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_3dsurface_delete(void* self) {
    Q3DSurface_Delete((Q3DSurface*)(self));
}
