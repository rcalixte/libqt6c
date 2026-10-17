#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DGRAPH_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DGRAPH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstract3DGraph*
///
const QMetaObject* q_abstract3dgraph_meta_object(const void* self);

/// @param self QAbstract3DGraph*
/// @param param1 const char*
///
void* q_abstract3dgraph_metacast(void* self, const char* param1);

/// @param self QAbstract3DGraph*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstract3dgraph_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstract3dgraph_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#addInputHandler)
///
/// @param self QAbstract3DGraph*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_abstract3dgraph_add_input_handler(void* self, void* inputHandler);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#releaseInputHandler)
///
/// @param self QAbstract3DGraph*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_abstract3dgraph_release_input_handler(void* self, void* inputHandler);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setActiveInputHandler)
///
/// @param self QAbstract3DGraph*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_abstract3dgraph_set_active_input_handler(void* self, void* inputHandler);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeInputHandler)
///
/// @param self const QAbstract3DGraph*
///
QAbstract3DInputHandler* q_abstract3dgraph_active_input_handler(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#inputHandlers)
///
/// @param self const QAbstract3DGraph*
///
/// @return libqt_list of QAbstract3DInputHandler*
///
libqt_list q_abstract3dgraph_input_handlers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#addTheme)
///
/// @param self QAbstract3DGraph*
/// @param theme Q3DTheme*
///
void q_abstract3dgraph_add_theme(void* self, void* theme);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#releaseTheme)
///
/// @param self QAbstract3DGraph*
/// @param theme Q3DTheme*
///
void q_abstract3dgraph_release_theme(void* self, void* theme);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setActiveTheme)
///
/// @param self QAbstract3DGraph*
/// @param theme Q3DTheme*
///
void q_abstract3dgraph_set_active_theme(void* self, void* theme);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeTheme)
///
/// @param self const QAbstract3DGraph*
///
Q3DTheme* q_abstract3dgraph_active_theme(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#themes)
///
/// @param self const QAbstract3DGraph*
///
/// @return libqt_list of Q3DTheme*
///
libqt_list q_abstract3dgraph_themes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setSelectionMode)
///
/// @param self QAbstract3DGraph*
/// @param mode flag of enum QAbstract3DGraph__SelectionFlag
///
void q_abstract3dgraph_set_selection_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectionMode)
///
/// @param self const QAbstract3DGraph*
///
/// @return flag of enum QAbstract3DGraph__SelectionFlag
///
int32_t q_abstract3dgraph_selection_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setShadowQuality)
///
/// @param self QAbstract3DGraph*
/// @param quality enum QAbstract3DGraph__ShadowQuality
///
void q_abstract3dgraph_set_shadow_quality(void* self, int32_t quality);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowQuality)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum QAbstract3DGraph__ShadowQuality
///
int32_t q_abstract3dgraph_shadow_quality(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowsSupported)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_shadows_supported(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#scene)
///
/// @param self const QAbstract3DGraph*
///
Q3DScene* q_abstract3dgraph_scene(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#clearSelection)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_clear_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#hasSeries)
///
/// @param self const QAbstract3DGraph*
/// @param series QAbstract3DSeries*
///
bool q_abstract3dgraph_has_series(const void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#addCustomItem)
///
/// @param self QAbstract3DGraph*
/// @param item QCustom3DItem*
///
int32_t q_abstract3dgraph_add_custom_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#removeCustomItems)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_remove_custom_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#removeCustomItem)
///
/// @param self QAbstract3DGraph*
/// @param item QCustom3DItem*
///
void q_abstract3dgraph_remove_custom_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#removeCustomItemAt)
///
/// @param self QAbstract3DGraph*
/// @param position QVector3D*
///
void q_abstract3dgraph_remove_custom_item_at(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#releaseCustomItem)
///
/// @param self QAbstract3DGraph*
/// @param item QCustom3DItem*
///
void q_abstract3dgraph_release_custom_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#customItems)
///
/// @param self const QAbstract3DGraph*
///
/// @return libqt_list of QCustom3DItem*
///
libqt_list q_abstract3dgraph_custom_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedLabelIndex)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_selected_label_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedAxis)
///
/// @param self const QAbstract3DGraph*
///
QAbstract3DAxis* q_abstract3dgraph_selected_axis(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedCustomItemIndex)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_selected_custom_item_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedCustomItem)
///
/// @param self const QAbstract3DGraph*
///
QCustom3DItem* q_abstract3dgraph_selected_custom_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#renderToImage)
///
/// @param self QAbstract3DGraph*
///
QImage* q_abstract3dgraph_render_to_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setMeasureFps)
///
/// @param self QAbstract3DGraph*
/// @param enable bool
///
void q_abstract3dgraph_set_measure_fps(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#measureFps)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_measure_fps(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#currentFps)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_current_fps(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setOrthoProjection)
///
/// @param self QAbstract3DGraph*
/// @param enable bool
///
void q_abstract3dgraph_set_ortho_projection(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#isOrthoProjection)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_ortho_projection(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedElement)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum QAbstract3DGraph__ElementType
///
int32_t q_abstract3dgraph_selected_element(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setAspectRatio)
///
/// @param self QAbstract3DGraph*
/// @param ratio double
///
void q_abstract3dgraph_set_aspect_ratio(void* self, double ratio);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#aspectRatio)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_aspect_ratio(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setOptimizationHints)
///
/// @param self QAbstract3DGraph*
/// @param hints flag of enum QAbstract3DGraph__OptimizationHint
///
void q_abstract3dgraph_set_optimization_hints(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#optimizationHints)
///
/// @param self const QAbstract3DGraph*
///
/// @return flag of enum QAbstract3DGraph__OptimizationHint
///
int32_t q_abstract3dgraph_optimization_hints(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setPolar)
///
/// @param self QAbstract3DGraph*
/// @param enable bool
///
void q_abstract3dgraph_set_polar(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#isPolar)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_polar(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setRadialLabelOffset)
///
/// @param self QAbstract3DGraph*
/// @param offset float
///
void q_abstract3dgraph_set_radial_label_offset(void* self, float offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#radialLabelOffset)
///
/// @param self const QAbstract3DGraph*
///
float q_abstract3dgraph_radial_label_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setHorizontalAspectRatio)
///
/// @param self QAbstract3DGraph*
/// @param ratio double
///
void q_abstract3dgraph_set_horizontal_aspect_ratio(void* self, double ratio);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#horizontalAspectRatio)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_horizontal_aspect_ratio(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setReflection)
///
/// @param self QAbstract3DGraph*
/// @param enable bool
///
void q_abstract3dgraph_set_reflection(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#isReflection)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_reflection(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setReflectivity)
///
/// @param self QAbstract3DGraph*
/// @param reflectivity double
///
void q_abstract3dgraph_set_reflectivity(void* self, double reflectivity);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectivity)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_reflectivity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setLocale)
///
/// @param self QAbstract3DGraph*
/// @param locale QLocale*
///
void q_abstract3dgraph_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#locale)
///
/// @param self const QAbstract3DGraph*
///
QLocale* q_abstract3dgraph_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#queriedGraphPosition)
///
/// @param self const QAbstract3DGraph*
///
QVector3D* q_abstract3dgraph_queried_graph_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setMargin)
///
/// @param self QAbstract3DGraph*
/// @param margin double
///
void q_abstract3dgraph_set_margin(void* self, double margin);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#margin)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_margin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#hasContext)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_has_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeInputHandlerChanged)
///
/// @param self QAbstract3DGraph*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_abstract3dgraph_active_input_handler_changed(void* self, void* inputHandler);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeInputHandlerChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler)
///
void q_abstract3dgraph_on_active_input_handler_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeThemeChanged)
///
/// @param self QAbstract3DGraph*
/// @param theme Q3DTheme*
///
void q_abstract3dgraph_active_theme_changed(void* self, void* theme);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeThemeChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, Q3DTheme* theme)
///
void q_abstract3dgraph_on_active_theme_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectionModeChanged)
///
/// @param self QAbstract3DGraph*
/// @param mode flag of enum QAbstract3DGraph__SelectionFlag
///
void q_abstract3dgraph_selection_mode_changed(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectionModeChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, flag of enum QAbstract3DGraph__SelectionFlag mode)
///
void q_abstract3dgraph_on_selection_mode_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowQualityChanged)
///
/// @param self QAbstract3DGraph*
/// @param quality enum QAbstract3DGraph__ShadowQuality
///
void q_abstract3dgraph_shadow_quality_changed(void* self, int32_t quality);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowQualityChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, enum QAbstract3DGraph__ShadowQuality quality)
///
void q_abstract3dgraph_on_shadow_quality_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedElementChanged)
///
/// @param self QAbstract3DGraph*
/// @param type enum QAbstract3DGraph__ElementType
///
void q_abstract3dgraph_selected_element_changed(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedElementChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, enum QAbstract3DGraph__ElementType type)
///
void q_abstract3dgraph_on_selected_element_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#measureFpsChanged)
///
/// @param self QAbstract3DGraph*
/// @param enabled bool
///
void q_abstract3dgraph_measure_fps_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#measureFpsChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, bool enabled)
///
void q_abstract3dgraph_on_measure_fps_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#currentFpsChanged)
///
/// @param self QAbstract3DGraph*
/// @param fps double
///
void q_abstract3dgraph_current_fps_changed(void* self, double fps);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#currentFpsChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, double fps)
///
void q_abstract3dgraph_on_current_fps_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#orthoProjectionChanged)
///
/// @param self QAbstract3DGraph*
/// @param enabled bool
///
void q_abstract3dgraph_ortho_projection_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#orthoProjectionChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, bool enabled)
///
void q_abstract3dgraph_on_ortho_projection_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#aspectRatioChanged)
///
/// @param self QAbstract3DGraph*
/// @param ratio double
///
void q_abstract3dgraph_aspect_ratio_changed(void* self, double ratio);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#aspectRatioChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, double ratio)
///
void q_abstract3dgraph_on_aspect_ratio_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#optimizationHintsChanged)
///
/// @param self QAbstract3DGraph*
/// @param hints flag of enum QAbstract3DGraph__OptimizationHint
///
void q_abstract3dgraph_optimization_hints_changed(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#optimizationHintsChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, flag of enum QAbstract3DGraph__OptimizationHint hints)
///
void q_abstract3dgraph_on_optimization_hints_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#polarChanged)
///
/// @param self QAbstract3DGraph*
/// @param enabled bool
///
void q_abstract3dgraph_polar_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#polarChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, bool enabled)
///
void q_abstract3dgraph_on_polar_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#radialLabelOffsetChanged)
///
/// @param self QAbstract3DGraph*
/// @param offset float
///
void q_abstract3dgraph_radial_label_offset_changed(void* self, float offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#radialLabelOffsetChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, float offset)
///
void q_abstract3dgraph_on_radial_label_offset_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#horizontalAspectRatioChanged)
///
/// @param self QAbstract3DGraph*
/// @param ratio double
///
void q_abstract3dgraph_horizontal_aspect_ratio_changed(void* self, double ratio);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#horizontalAspectRatioChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, double ratio)
///
void q_abstract3dgraph_on_horizontal_aspect_ratio_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectionChanged)
///
/// @param self QAbstract3DGraph*
/// @param enabled bool
///
void q_abstract3dgraph_reflection_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectionChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, bool enabled)
///
void q_abstract3dgraph_on_reflection_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectivityChanged)
///
/// @param self QAbstract3DGraph*
/// @param reflectivity double
///
void q_abstract3dgraph_reflectivity_changed(void* self, double reflectivity);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectivityChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, double reflectivity)
///
void q_abstract3dgraph_on_reflectivity_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#localeChanged)
///
/// @param self QAbstract3DGraph*
/// @param locale QLocale*
///
void q_abstract3dgraph_locale_changed(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#localeChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QLocale* locale)
///
void q_abstract3dgraph_on_locale_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#queriedGraphPositionChanged)
///
/// @param self QAbstract3DGraph*
/// @param data QVector3D*
///
void q_abstract3dgraph_queried_graph_position_changed(void* self, const void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#queriedGraphPositionChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QVector3D* data)
///
void q_abstract3dgraph_on_queried_graph_position_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#marginChanged)
///
/// @param self QAbstract3DGraph*
/// @param margin double
///
void q_abstract3dgraph_margin_changed(void* self, double margin);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#marginChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, double margin)
///
void q_abstract3dgraph_on_margin_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstract3dgraph_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstract3dgraph_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#renderToImage)
///
/// @param self QAbstract3DGraph*
/// @param msaaSamples int
///
QImage* q_abstract3dgraph_render_to_image1(void* self, int msaaSamples);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#renderToImage)
///
/// @param self QAbstract3DGraph*
/// @param msaaSamples int
/// @param imageSize QSize*
///
QImage* q_abstract3dgraph_render_to_image2(void* self, int msaaSamples, const void* imageSize);

/// Inherited from QWindow
///
/// Upcasts to a QSurface object
///
/// @param self const QAbstract3DGraph*
///
QSurface* q_abstract3dgraph_as_q_surface(const void* self);

/// Inherited from QWindow
///
/// Downcasts to a QAbstract3DGraph object
///
/// @param _qsurface QSurface*
///
QAbstract3DGraph* q_abstract3dgraph_from_q_surface(const void* _qsurface);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self QAbstract3DGraph*
/// @param surfaceType enum QSurface__SurfaceType
///
void q_abstract3dgraph_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_abstract3dgraph_surface_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_visible(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum QWindow__Visibility
///
int32_t q_abstract3dgraph_visibility(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self QAbstract3DGraph*
/// @param v enum QWindow__Visibility
///
void q_abstract3dgraph_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_create(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self const QAbstract3DGraph*
///
uintptr_t q_abstract3dgraph_win_id(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self const QAbstract3DGraph*
///
QWindow* q_abstract3dgraph_parent(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self QAbstract3DGraph*
/// @param parent QWindow*
///
void q_abstract3dgraph_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_top_level(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_modal(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum Qt__WindowModality
///
int32_t q_abstract3dgraph_modality(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self QAbstract3DGraph*
/// @param modality enum Qt__WindowModality
///
void q_abstract3dgraph_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self QAbstract3DGraph*
/// @param format QSurfaceFormat*
///
void q_abstract3dgraph_set_format(void* self, const void* format);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// @param self const QAbstract3DGraph*
///
QSurfaceFormat* q_abstract3dgraph_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self const QAbstract3DGraph*
///
QSurfaceFormat* q_abstract3dgraph_requested_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self QAbstract3DGraph*
/// @param flags flag of enum Qt__WindowType
///
void q_abstract3dgraph_set_flags(void* self, int32_t flags);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self const QAbstract3DGraph*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_abstract3dgraph_flags(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QAbstract3DGraph*
/// @param param1 enum Qt__WindowType
///
void q_abstract3dgraph_set_flag(void* self, int32_t param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum Qt__WindowType
///
int32_t q_abstract3dgraph_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DGraph*
///
const char* q_abstract3dgraph_title(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self QAbstract3DGraph*
/// @param level double
///
void q_abstract3dgraph_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_opacity(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self QAbstract3DGraph*
/// @param region QRegion*
///
void q_abstract3dgraph_set_mask(void* self, const void* region);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self const QAbstract3DGraph*
///
QRegion* q_abstract3dgraph_mask(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_active(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self QAbstract3DGraph*
/// @param orientation enum Qt__ScreenOrientation
///
void q_abstract3dgraph_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_abstract3dgraph_content_orientation(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self const QAbstract3DGraph*
///
double q_abstract3dgraph_device_pixel_ratio(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum Qt__WindowState
///
int32_t q_abstract3dgraph_window_state(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self const QAbstract3DGraph*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_abstract3dgraph_window_states(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self QAbstract3DGraph*
/// @param state enum Qt__WindowState
///
void q_abstract3dgraph_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self QAbstract3DGraph*
/// @param states flag of enum Qt__WindowState
///
void q_abstract3dgraph_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self QAbstract3DGraph*
/// @param parent QWindow*
///
void q_abstract3dgraph_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self const QAbstract3DGraph*
///
QWindow* q_abstract3dgraph_transient_parent(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self const QAbstract3DGraph*
/// @param child QWindow*
///
bool q_abstract3dgraph_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_exposed(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_minimum_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_minimum_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_maximum_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_maximum_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self const QAbstract3DGraph*
///
QSize* q_abstract3dgraph_minimum_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self const QAbstract3DGraph*
///
QSize* q_abstract3dgraph_maximum_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self const QAbstract3DGraph*
///
QSize* q_abstract3dgraph_base_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self const QAbstract3DGraph*
///
QSize* q_abstract3dgraph_size_increment(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self QAbstract3DGraph*
/// @param size QSize*
///
void q_abstract3dgraph_set_minimum_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self QAbstract3DGraph*
/// @param size QSize*
///
void q_abstract3dgraph_set_maximum_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self QAbstract3DGraph*
/// @param size QSize*
///
void q_abstract3dgraph_set_base_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self QAbstract3DGraph*
/// @param size QSize*
///
void q_abstract3dgraph_set_size_increment(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self const QAbstract3DGraph*
///
QRect* q_abstract3dgraph_geometry(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self const QAbstract3DGraph*
///
QMargins* q_abstract3dgraph_frame_margins(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self const QAbstract3DGraph*
///
QRect* q_abstract3dgraph_frame_geometry(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self const QAbstract3DGraph*
///
QPoint* q_abstract3dgraph_frame_position(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self QAbstract3DGraph*
/// @param point QPoint*
///
void q_abstract3dgraph_set_frame_position(void* self, const void* point);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_x(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self const QAbstract3DGraph*
///
int32_t q_abstract3dgraph_y(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// @param self const QAbstract3DGraph*
///
QSize* q_abstract3dgraph_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self const QAbstract3DGraph*
///
QPoint* q_abstract3dgraph_position(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QAbstract3DGraph*
/// @param pt QPoint*
///
void q_abstract3dgraph_set_position(void* self, const void* pt);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self QAbstract3DGraph*
/// @param posx int
/// @param posy int
///
void q_abstract3dgraph_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QAbstract3DGraph*
/// @param newSize QSize*
///
void q_abstract3dgraph_resize(void* self, const void* newSize);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self QAbstract3DGraph*
/// @param w int
/// @param h int
///
void q_abstract3dgraph_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self QAbstract3DGraph*
/// @param filePath const char*
///
void q_abstract3dgraph_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DGraph*
///
const char* q_abstract3dgraph_file_path(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self QAbstract3DGraph*
/// @param icon QIcon*
///
void q_abstract3dgraph_set_icon(void* self, const void* icon);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self const QAbstract3DGraph*
///
QIcon* q_abstract3dgraph_icon(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_destroy(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self QAbstract3DGraph*
/// @param grab bool
///
bool q_abstract3dgraph_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self QAbstract3DGraph*
/// @param grab bool
///
bool q_abstract3dgraph_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self const QAbstract3DGraph*
///
QScreen* q_abstract3dgraph_screen(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self QAbstract3DGraph*
/// @param screen QScreen*
///
void q_abstract3dgraph_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// @param self const QAbstract3DGraph*
///
QAccessibleInterface* q_abstract3dgraph_accessible_root(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// @param self const QAbstract3DGraph*
///
QObject* q_abstract3dgraph_focus_object(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self const QAbstract3DGraph*
/// @param pos QPointF*
///
QPointF* q_abstract3dgraph_map_to_global(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self const QAbstract3DGraph*
/// @param pos QPointF*
///
QPointF* q_abstract3dgraph_map_from_global(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self const QAbstract3DGraph*
/// @param pos QPoint*
///
QPoint* q_abstract3dgraph_map_to_global2(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self const QAbstract3DGraph*
/// @param pos QPoint*
///
QPoint* q_abstract3dgraph_map_from_global2(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self const QAbstract3DGraph*
///
QCursor* q_abstract3dgraph_cursor(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self QAbstract3DGraph*
/// @param cursor QCursor*
///
void q_abstract3dgraph_set_cursor(void* self, const void* cursor);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
///
QWindow* q_abstract3dgraph_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_request_activate(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self QAbstract3DGraph*
/// @param visible bool
///
void q_abstract3dgraph_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_show(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_hide(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_show_normal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self QAbstract3DGraph*
///
bool q_abstract3dgraph_close(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_raise(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_lower(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self QAbstract3DGraph*
/// @param edges flag of enum Qt__Edge
///
bool q_abstract3dgraph_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self QAbstract3DGraph*
///
bool q_abstract3dgraph_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self QAbstract3DGraph*
/// @param title const char*
///
void q_abstract3dgraph_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QAbstract3DGraph*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
///
void q_abstract3dgraph_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self QAbstract3DGraph*
/// @param rect QRect*
///
void q_abstract3dgraph_set_geometry2(void* self, const void* rect);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self QAbstract3DGraph*
/// @param w int
///
void q_abstract3dgraph_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self QAbstract3DGraph*
/// @param h int
///
void q_abstract3dgraph_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self QAbstract3DGraph*
/// @param w int
///
void q_abstract3dgraph_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self QAbstract3DGraph*
/// @param h int
///
void q_abstract3dgraph_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self QAbstract3DGraph*
/// @param msec int
///
void q_abstract3dgraph_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_request_update(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QAbstract3DGraph*
/// @param screen QScreen*
///
void q_abstract3dgraph_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QScreen* screen)
///
void q_abstract3dgraph_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QAbstract3DGraph*
/// @param modality enum Qt__WindowModality
///
void q_abstract3dgraph_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, enum Qt__WindowModality modality)
///
void q_abstract3dgraph_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QAbstract3DGraph*
/// @param windowState enum Qt__WindowState
///
void q_abstract3dgraph_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, enum Qt__WindowState windowState)
///
void q_abstract3dgraph_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QAbstract3DGraph*
/// @param title const char*
///
void q_abstract3dgraph_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, const char* title)
///
void q_abstract3dgraph_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg int
///
void q_abstract3dgraph_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, int arg)
///
void q_abstract3dgraph_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QAbstract3DGraph*
/// @param arg bool
///
void q_abstract3dgraph_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, bool arg)
///
void q_abstract3dgraph_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QAbstract3DGraph*
/// @param visibility enum QWindow__Visibility
///
void q_abstract3dgraph_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, enum QWindow__Visibility visibility)
///
void q_abstract3dgraph_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_active_changed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self)
///
void q_abstract3dgraph_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QAbstract3DGraph*
/// @param orientation enum Qt__ScreenOrientation
///
void q_abstract3dgraph_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, enum Qt__ScreenOrientation orientation)
///
void q_abstract3dgraph_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QAbstract3DGraph*
/// @param object QObject*
///
void q_abstract3dgraph_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QObject* object)
///
void q_abstract3dgraph_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QAbstract3DGraph*
/// @param opacity double
///
void q_abstract3dgraph_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, double opacity)
///
void q_abstract3dgraph_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QAbstract3DGraph*
/// @param transientParent QWindow*
///
void q_abstract3dgraph_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QWindow* transientParent)
///
void q_abstract3dgraph_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self const QAbstract3DGraph*
/// @param mode enum QWindow__AncestorMode
///
QWindow* q_abstract3dgraph_parent1(const void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self QAbstract3DGraph*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_abstract3dgraph_set_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self const QAbstract3DGraph*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
///
bool q_abstract3dgraph_is_ancestor_of2(const void* self, const void* child, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstract3DGraph*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstract3dgraph_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DGraph*
///
const char* q_abstract3dgraph_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstract3DGraph*
/// @param name const char*
///
void q_abstract3dgraph_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstract3DGraph*
/// @param b bool
///
bool q_abstract3dgraph_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstract3DGraph*
///
QThread* q_abstract3dgraph_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstract3DGraph*
/// @param thread QThread*
///
bool q_abstract3dgraph_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DGraph*
/// @param interval int
///
int32_t q_abstract3dgraph_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DGraph*
/// @param time int64_t of nanoseconds
///
int32_t q_abstract3dgraph_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DGraph*
/// @param id int
///
void q_abstract3dgraph_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DGraph*
/// @param id enum Qt__TimerId
///
void q_abstract3dgraph_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstract3DGraph*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstract3dgraph_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstract3DGraph*
/// @param filterObj QObject*
///
void q_abstract3dgraph_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstract3DGraph*
/// @param obj QObject*
///
void q_abstract3dgraph_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3dgraph_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstract3dgraph_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DGraph*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3dgraph_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dgraph_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstract3dgraph_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DGraph*
/// @param receiver QObject*
///
bool q_abstract3dgraph_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstract3dgraph_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstract3DGraph*
///
void q_abstract3dgraph_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstract3DGraph*
///
void q_abstract3dgraph_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstract3DGraph*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstract3dgraph_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstract3DGraph*
/// @param name const char*
///
QVariant* q_abstract3dgraph_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstract3DGraph*
///
const char** q_abstract3dgraph_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstract3DGraph*
///
QBindingStorage* q_abstract3dgraph_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstract3DGraph*
///
const QBindingStorage* q_abstract3dgraph_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self)
///
void q_abstract3dgraph_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstract3DGraph*
/// @param classname const char*
///
bool q_abstract3dgraph_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DGraph*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3dgraph_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DGraph*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3dgraph_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstract3dgraph_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstract3dgraph_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DGraph*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstract3dgraph_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DGraph*
/// @param signal const char*
///
bool q_abstract3dgraph_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DGraph*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstract3dgraph_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DGraph*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dgraph_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DGraph*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dgraph_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DGraph*
/// @param param1 QObject*
///
void q_abstract3dgraph_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, QObject* param1)
///
void q_abstract3dgraph_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self const QAbstract3DGraph*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_abstract3dgraph_surface_class(const void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self const QAbstract3DGraph*
///
bool q_abstract3dgraph_supports_open_g_l(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstract3DGraph*
/// @param callback void func(QAbstract3DGraph* self, const char* objectName)
///
void q_abstract3dgraph_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#dtor.QAbstract3DGraph)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstract3DGraph*
///
void q_abstract3dgraph_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONNONE = 0,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONITEM = 1,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONROW = 2,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONITEMANDROW = 3,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONCOLUMN = 4,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONITEMANDCOLUMN = 5,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONROWANDCOLUMN = 6,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONITEMROWANDCOLUMN = 7,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONSLICE = 8,
    QABSTRACT3DGRAPH_SELECTIONFLAG_SELECTIONMULTISERIES = 16
} QAbstract3DGraph__SelectionFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYNONE = 0,
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYLOW = 1,
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYMEDIUM = 2,
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYHIGH = 3,
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYSOFTLOW = 4,
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYSOFTMEDIUM = 5,
    QABSTRACT3DGRAPH_SHADOWQUALITY_SHADOWQUALITYSOFTHIGH = 6
} QAbstract3DGraph__ShadowQuality;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DGRAPH_ELEMENTTYPE_ELEMENTNONE = 0,
    QABSTRACT3DGRAPH_ELEMENTTYPE_ELEMENTSERIES = 1,
    QABSTRACT3DGRAPH_ELEMENTTYPE_ELEMENTAXISXLABEL = 2,
    QABSTRACT3DGRAPH_ELEMENTTYPE_ELEMENTAXISYLABEL = 3,
    QABSTRACT3DGRAPH_ELEMENTTYPE_ELEMENTAXISZLABEL = 4,
    QABSTRACT3DGRAPH_ELEMENTTYPE_ELEMENTCUSTOMITEM = 5
} QAbstract3DGraph__ElementType;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DGRAPH_OPTIMIZATIONHINT_OPTIMIZATIONDEFAULT = 0,
    QABSTRACT3DGRAPH_OPTIMIZATIONHINT_OPTIMIZATIONSTATIC = 1
} QAbstract3DGraph__OptimizationHint;

#endif
