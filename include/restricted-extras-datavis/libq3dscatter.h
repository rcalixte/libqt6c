#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCATTER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCATTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html)

/// q_3dscatter_new constructs a new Q3DScatter object.
///
Q3DScatter* q_3dscatter_new();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html)

/// q_3dscatter_new2 constructs a new Q3DScatter object.
///
/// @param format QSurfaceFormat*
///
Q3DScatter* q_3dscatter_new2(const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html)

/// q_3dscatter_new3 constructs a new Q3DScatter object.
///
/// @param format QSurfaceFormat*
/// @param parent QWindow*
///
Q3DScatter* q_3dscatter_new3(const void* format, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Q3DScatter*
///
const QMetaObject* q_3dscatter_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Q3DScatter*
/// @param callback const QMetaObject* func(const Q3DScatter* self)
///
void q_3dscatter_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Q3DScatter*
///
const QMetaObject* q_3dscatter_super_meta_object(const void* self);

/// @param self Q3DScatter*
/// @param param1 const char*
///
void* q_3dscatter_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Q3DScatter*
/// @param callback void* func(Q3DScatter* self, const char* param1)
///
void q_3dscatter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Q3DScatter*
/// @param param1 const char*
///
void* q_3dscatter_super_metacast(void* self, const char* param1);

/// @param self Q3DScatter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dscatter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Q3DScatter*
/// @param callback int32_t func(Q3DScatter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_3dscatter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Q3DScatter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dscatter_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_3dscatter_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#addSeries)
///
/// @param self Q3DScatter*
/// @param series QScatter3DSeries*
///
void q_3dscatter_add_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#removeSeries)
///
/// @param self Q3DScatter*
/// @param series QScatter3DSeries*
///
void q_3dscatter_remove_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#seriesList)
///
/// @param self const Q3DScatter*
///
/// @return libqt_list of QScatter3DSeries*
///
libqt_list q_3dscatter_series_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#setAxisX)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_set_axis_x(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisX)
///
/// @param self const Q3DScatter*
///
QValue3DAxis* q_3dscatter_axis_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#setAxisY)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_set_axis_y(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisY)
///
/// @param self const Q3DScatter*
///
QValue3DAxis* q_3dscatter_axis_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#setAxisZ)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_set_axis_z(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisZ)
///
/// @param self const Q3DScatter*
///
QValue3DAxis* q_3dscatter_axis_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#addAxis)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_add_axis(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#releaseAxis)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_release_axis(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axes)
///
/// @param self const Q3DScatter*
///
/// @return libqt_list of QValue3DAxis*
///
libqt_list q_3dscatter_axes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#selectedSeries)
///
/// @param self const Q3DScatter*
///
QScatter3DSeries* q_3dscatter_selected_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisXChanged)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_axis_x_changed(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisXChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QValue3DAxis* axis)
///
void q_3dscatter_on_axis_x_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisYChanged)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_axis_y_changed(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisYChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QValue3DAxis* axis)
///
void q_3dscatter_on_axis_y_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisZChanged)
///
/// @param self Q3DScatter*
/// @param axis QValue3DAxis*
///
void q_3dscatter_axis_z_changed(void* self, void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#axisZChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QValue3DAxis* axis)
///
void q_3dscatter_on_axis_z_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#selectedSeriesChanged)
///
/// @param self Q3DScatter*
/// @param series QScatter3DSeries*
///
void q_3dscatter_selected_series_changed(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#selectedSeriesChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QScatter3DSeries* series)
///
void q_3dscatter_on_selected_series_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_3dscatter_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_3dscatter_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#addInputHandler)
///
/// @param self Q3DScatter*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_3dscatter_add_input_handler(void* self, void* inputHandler);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#releaseInputHandler)
///
/// @param self Q3DScatter*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_3dscatter_release_input_handler(void* self, void* inputHandler);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setActiveInputHandler)
///
/// @param self Q3DScatter*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_3dscatter_set_active_input_handler(void* self, void* inputHandler);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeInputHandler)
///
/// @param self const Q3DScatter*
///
QAbstract3DInputHandler* q_3dscatter_active_input_handler(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#inputHandlers)
///
/// @param self const Q3DScatter*
///
/// @return libqt_list of QAbstract3DInputHandler*
///
libqt_list q_3dscatter_input_handlers(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#addTheme)
///
/// @param self Q3DScatter*
/// @param theme Q3DTheme*
///
void q_3dscatter_add_theme(void* self, void* theme);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#releaseTheme)
///
/// @param self Q3DScatter*
/// @param theme Q3DTheme*
///
void q_3dscatter_release_theme(void* self, void* theme);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setActiveTheme)
///
/// @param self Q3DScatter*
/// @param theme Q3DTheme*
///
void q_3dscatter_set_active_theme(void* self, void* theme);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeTheme)
///
/// @param self const Q3DScatter*
///
Q3DTheme* q_3dscatter_active_theme(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#themes)
///
/// @param self const Q3DScatter*
///
/// @return libqt_list of Q3DTheme*
///
libqt_list q_3dscatter_themes(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setSelectionMode)
///
/// @param self Q3DScatter*
/// @param mode flag of enum QAbstract3DGraph__SelectionFlag
///
void q_3dscatter_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectionMode)
///
/// @param self const Q3DScatter*
///
/// @return flag of enum QAbstract3DGraph__SelectionFlag
///
int32_t q_3dscatter_selection_mode(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setShadowQuality)
///
/// @param self Q3DScatter*
/// @param quality enum QAbstract3DGraph__ShadowQuality
///
void q_3dscatter_set_shadow_quality(void* self, int32_t quality);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowQuality)
///
/// @param self const Q3DScatter*
///
/// @return enum QAbstract3DGraph__ShadowQuality
///
int32_t q_3dscatter_shadow_quality(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#scene)
///
/// @param self const Q3DScatter*
///
Q3DScene* q_3dscatter_scene(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#clearSelection)
///
/// @param self Q3DScatter*
///
void q_3dscatter_clear_selection(void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#hasSeries)
///
/// @param self const Q3DScatter*
/// @param series QAbstract3DSeries*
///
bool q_3dscatter_has_series(const void* self, void* series);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#addCustomItem)
///
/// @param self Q3DScatter*
/// @param item QCustom3DItem*
///
int32_t q_3dscatter_add_custom_item(void* self, void* item);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#removeCustomItems)
///
/// @param self Q3DScatter*
///
void q_3dscatter_remove_custom_items(void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#removeCustomItem)
///
/// @param self Q3DScatter*
/// @param item QCustom3DItem*
///
void q_3dscatter_remove_custom_item(void* self, void* item);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#removeCustomItemAt)
///
/// @param self Q3DScatter*
/// @param position QVector3D*
///
void q_3dscatter_remove_custom_item_at(void* self, const void* position);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#releaseCustomItem)
///
/// @param self Q3DScatter*
/// @param item QCustom3DItem*
///
void q_3dscatter_release_custom_item(void* self, void* item);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#customItems)
///
/// @param self const Q3DScatter*
///
/// @return libqt_list of QCustom3DItem*
///
libqt_list q_3dscatter_custom_items(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedLabelIndex)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_selected_label_index(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedAxis)
///
/// @param self const Q3DScatter*
///
QAbstract3DAxis* q_3dscatter_selected_axis(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedCustomItemIndex)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_selected_custom_item_index(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedCustomItem)
///
/// @param self const Q3DScatter*
///
QCustom3DItem* q_3dscatter_selected_custom_item(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#renderToImage)
///
/// @param self Q3DScatter*
///
QImage* q_3dscatter_render_to_image(void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setMeasureFps)
///
/// @param self Q3DScatter*
/// @param enable bool
///
void q_3dscatter_set_measure_fps(void* self, bool enable);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#measureFps)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_measure_fps(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#currentFps)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_current_fps(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setOrthoProjection)
///
/// @param self Q3DScatter*
/// @param enable bool
///
void q_3dscatter_set_ortho_projection(void* self, bool enable);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#isOrthoProjection)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_ortho_projection(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedElement)
///
/// @param self const Q3DScatter*
///
/// @return enum QAbstract3DGraph__ElementType
///
int32_t q_3dscatter_selected_element(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setAspectRatio)
///
/// @param self Q3DScatter*
/// @param ratio double
///
void q_3dscatter_set_aspect_ratio(void* self, double ratio);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#aspectRatio)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_aspect_ratio(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setOptimizationHints)
///
/// @param self Q3DScatter*
/// @param hints flag of enum QAbstract3DGraph__OptimizationHint
///
void q_3dscatter_set_optimization_hints(void* self, int32_t hints);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#optimizationHints)
///
/// @param self const Q3DScatter*
///
/// @return flag of enum QAbstract3DGraph__OptimizationHint
///
int32_t q_3dscatter_optimization_hints(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setPolar)
///
/// @param self Q3DScatter*
/// @param enable bool
///
void q_3dscatter_set_polar(void* self, bool enable);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#isPolar)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_polar(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setRadialLabelOffset)
///
/// @param self Q3DScatter*
/// @param offset float
///
void q_3dscatter_set_radial_label_offset(void* self, float offset);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#radialLabelOffset)
///
/// @param self const Q3DScatter*
///
float q_3dscatter_radial_label_offset(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setHorizontalAspectRatio)
///
/// @param self Q3DScatter*
/// @param ratio double
///
void q_3dscatter_set_horizontal_aspect_ratio(void* self, double ratio);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#horizontalAspectRatio)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_horizontal_aspect_ratio(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setReflection)
///
/// @param self Q3DScatter*
/// @param enable bool
///
void q_3dscatter_set_reflection(void* self, bool enable);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#isReflection)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_reflection(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setReflectivity)
///
/// @param self Q3DScatter*
/// @param reflectivity double
///
void q_3dscatter_set_reflectivity(void* self, double reflectivity);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectivity)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_reflectivity(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setLocale)
///
/// @param self Q3DScatter*
/// @param locale QLocale*
///
void q_3dscatter_set_locale(void* self, const void* locale);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#locale)
///
/// @param self const Q3DScatter*
///
QLocale* q_3dscatter_locale(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#queriedGraphPosition)
///
/// @param self const Q3DScatter*
///
QVector3D* q_3dscatter_queried_graph_position(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#setMargin)
///
/// @param self Q3DScatter*
/// @param margin double
///
void q_3dscatter_set_margin(void* self, double margin);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#margin)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_margin(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#hasContext)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_has_context(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeInputHandlerChanged)
///
/// @param self Q3DScatter*
/// @param inputHandler QAbstract3DInputHandler*
///
void q_3dscatter_active_input_handler_changed(void* self, void* inputHandler);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeInputHandlerChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QAbstract3DInputHandler* inputHandler)
///
void q_3dscatter_on_active_input_handler_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeThemeChanged)
///
/// @param self Q3DScatter*
/// @param theme Q3DTheme*
///
void q_3dscatter_active_theme_changed(void* self, void* theme);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#activeThemeChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, Q3DTheme* theme)
///
void q_3dscatter_on_active_theme_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectionModeChanged)
///
/// @param self Q3DScatter*
/// @param mode flag of enum QAbstract3DGraph__SelectionFlag
///
void q_3dscatter_selection_mode_changed(void* self, int32_t mode);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectionModeChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, flag of enum QAbstract3DGraph__SelectionFlag mode)
///
void q_3dscatter_on_selection_mode_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowQualityChanged)
///
/// @param self Q3DScatter*
/// @param quality enum QAbstract3DGraph__ShadowQuality
///
void q_3dscatter_shadow_quality_changed(void* self, int32_t quality);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowQualityChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, enum QAbstract3DGraph__ShadowQuality quality)
///
void q_3dscatter_on_shadow_quality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedElementChanged)
///
/// @param self Q3DScatter*
/// @param type enum QAbstract3DGraph__ElementType
///
void q_3dscatter_selected_element_changed(void* self, int32_t type);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#selectedElementChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, enum QAbstract3DGraph__ElementType type)
///
void q_3dscatter_on_selected_element_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#measureFpsChanged)
///
/// @param self Q3DScatter*
/// @param enabled bool
///
void q_3dscatter_measure_fps_changed(void* self, bool enabled);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#measureFpsChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, bool enabled)
///
void q_3dscatter_on_measure_fps_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#currentFpsChanged)
///
/// @param self Q3DScatter*
/// @param fps double
///
void q_3dscatter_current_fps_changed(void* self, double fps);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#currentFpsChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, double fps)
///
void q_3dscatter_on_current_fps_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#orthoProjectionChanged)
///
/// @param self Q3DScatter*
/// @param enabled bool
///
void q_3dscatter_ortho_projection_changed(void* self, bool enabled);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#orthoProjectionChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, bool enabled)
///
void q_3dscatter_on_ortho_projection_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#aspectRatioChanged)
///
/// @param self Q3DScatter*
/// @param ratio double
///
void q_3dscatter_aspect_ratio_changed(void* self, double ratio);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#aspectRatioChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, double ratio)
///
void q_3dscatter_on_aspect_ratio_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#optimizationHintsChanged)
///
/// @param self Q3DScatter*
/// @param hints flag of enum QAbstract3DGraph__OptimizationHint
///
void q_3dscatter_optimization_hints_changed(void* self, int32_t hints);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#optimizationHintsChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, flag of enum QAbstract3DGraph__OptimizationHint hints)
///
void q_3dscatter_on_optimization_hints_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#polarChanged)
///
/// @param self Q3DScatter*
/// @param enabled bool
///
void q_3dscatter_polar_changed(void* self, bool enabled);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#polarChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, bool enabled)
///
void q_3dscatter_on_polar_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#radialLabelOffsetChanged)
///
/// @param self Q3DScatter*
/// @param offset float
///
void q_3dscatter_radial_label_offset_changed(void* self, float offset);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#radialLabelOffsetChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, float offset)
///
void q_3dscatter_on_radial_label_offset_changed(void* self, void (*callback)(void*, float));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#horizontalAspectRatioChanged)
///
/// @param self Q3DScatter*
/// @param ratio double
///
void q_3dscatter_horizontal_aspect_ratio_changed(void* self, double ratio);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#horizontalAspectRatioChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, double ratio)
///
void q_3dscatter_on_horizontal_aspect_ratio_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectionChanged)
///
/// @param self Q3DScatter*
/// @param enabled bool
///
void q_3dscatter_reflection_changed(void* self, bool enabled);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectionChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, bool enabled)
///
void q_3dscatter_on_reflection_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectivityChanged)
///
/// @param self Q3DScatter*
/// @param reflectivity double
///
void q_3dscatter_reflectivity_changed(void* self, double reflectivity);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#reflectivityChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, double reflectivity)
///
void q_3dscatter_on_reflectivity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#localeChanged)
///
/// @param self Q3DScatter*
/// @param locale QLocale*
///
void q_3dscatter_locale_changed(void* self, const void* locale);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#localeChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QLocale* locale)
///
void q_3dscatter_on_locale_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#queriedGraphPositionChanged)
///
/// @param self Q3DScatter*
/// @param data QVector3D*
///
void q_3dscatter_queried_graph_position_changed(void* self, const void* data);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#queriedGraphPositionChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QVector3D* data)
///
void q_3dscatter_on_queried_graph_position_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#marginChanged)
///
/// @param self Q3DScatter*
/// @param margin double
///
void q_3dscatter_margin_changed(void* self, double margin);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#marginChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, double margin)
///
void q_3dscatter_on_margin_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#renderToImage)
///
/// @param self Q3DScatter*
/// @param msaaSamples int
///
QImage* q_3dscatter_render_to_image1(void* self, int msaaSamples);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#renderToImage)
///
/// @param self Q3DScatter*
/// @param msaaSamples int
/// @param imageSize QSize*
///
QImage* q_3dscatter_render_to_image2(void* self, int msaaSamples, const void* imageSize);

/// Inherited from QWindow
///
/// Upcasts to a QSurface object
///
/// @param self const Q3DScatter*
///
QSurface* q_3dscatter_as_q_surface(const void* self);

/// Inherited from QWindow
///
/// Downcasts to a Q3DScatter object
///
/// @param _qsurface QSurface*
///
Q3DScatter* q_3dscatter_from_q_surface(const void* _qsurface);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// @param self Q3DScatter*
/// @param surfaceType enum QSurface__SurfaceType
///
void q_3dscatter_set_surface_type(void* self, int32_t surfaceType);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_visible(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// @param self const Q3DScatter*
///
/// @return enum QWindow__Visibility
///
int32_t q_3dscatter_visibility(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// @param self Q3DScatter*
/// @param v enum QWindow__Visibility
///
void q_3dscatter_set_visibility(void* self, int32_t v);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// @param self Q3DScatter*
///
void q_3dscatter_create(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// @param self const Q3DScatter*
///
uintptr_t q_3dscatter_win_id(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self const Q3DScatter*
///
QWindow* q_3dscatter_parent(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// @param self Q3DScatter*
/// @param parent QWindow*
///
void q_3dscatter_set_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_top_level(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_modal(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// @param self const Q3DScatter*
///
/// @return enum Qt__WindowModality
///
int32_t q_3dscatter_modality(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// @param self Q3DScatter*
/// @param modality enum Qt__WindowModality
///
void q_3dscatter_set_modality(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// @param self Q3DScatter*
/// @param format QSurfaceFormat*
///
void q_3dscatter_set_format(void* self, const void* format);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// @param self const Q3DScatter*
///
QSurfaceFormat* q_3dscatter_requested_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// @param self Q3DScatter*
/// @param flags flag of enum Qt__WindowType
///
void q_3dscatter_set_flags(void* self, int32_t flags);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// @param self const Q3DScatter*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_3dscatter_flags(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self Q3DScatter*
/// @param param1 enum Qt__WindowType
///
void q_3dscatter_set_flag(void* self, int32_t param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// @param self const Q3DScatter*
///
/// @return enum Qt__WindowType
///
int32_t q_3dscatter_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DScatter*
///
const char* q_3dscatter_title(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// @param self Q3DScatter*
/// @param level double
///
void q_3dscatter_set_opacity(void* self, double level);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_opacity(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// @param self Q3DScatter*
/// @param region QRegion*
///
void q_3dscatter_set_mask(void* self, const void* region);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// @param self const Q3DScatter*
///
QRegion* q_3dscatter_mask(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_active(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// @param self Q3DScatter*
/// @param orientation enum Qt__ScreenOrientation
///
void q_3dscatter_report_content_orientation_change(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// @param self const Q3DScatter*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_3dscatter_content_orientation(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// @param self const Q3DScatter*
///
double q_3dscatter_device_pixel_ratio(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// @param self const Q3DScatter*
///
/// @return enum Qt__WindowState
///
int32_t q_3dscatter_window_state(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// @param self const Q3DScatter*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_3dscatter_window_states(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// @param self Q3DScatter*
/// @param state enum Qt__WindowState
///
void q_3dscatter_set_window_state(void* self, int32_t state);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// @param self Q3DScatter*
/// @param states flag of enum Qt__WindowState
///
void q_3dscatter_set_window_states(void* self, int32_t states);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// @param self Q3DScatter*
/// @param parent QWindow*
///
void q_3dscatter_set_transient_parent(void* self, void* parent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// @param self const Q3DScatter*
///
QWindow* q_3dscatter_transient_parent(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self const Q3DScatter*
/// @param child QWindow*
///
bool q_3dscatter_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_exposed(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_minimum_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_minimum_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_maximum_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_maximum_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// @param self const Q3DScatter*
///
QSize* q_3dscatter_minimum_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// @param self const Q3DScatter*
///
QSize* q_3dscatter_maximum_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// @param self const Q3DScatter*
///
QSize* q_3dscatter_base_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// @param self const Q3DScatter*
///
QSize* q_3dscatter_size_increment(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// @param self Q3DScatter*
/// @param size QSize*
///
void q_3dscatter_set_minimum_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// @param self Q3DScatter*
/// @param size QSize*
///
void q_3dscatter_set_maximum_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// @param self Q3DScatter*
/// @param size QSize*
///
void q_3dscatter_set_base_size(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// @param self Q3DScatter*
/// @param size QSize*
///
void q_3dscatter_set_size_increment(void* self, const void* size);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// @param self const Q3DScatter*
///
QRect* q_3dscatter_geometry(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// @param self const Q3DScatter*
///
QMargins* q_3dscatter_frame_margins(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// @param self const Q3DScatter*
///
QRect* q_3dscatter_frame_geometry(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// @param self const Q3DScatter*
///
QPoint* q_3dscatter_frame_position(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// @param self Q3DScatter*
/// @param point QPoint*
///
void q_3dscatter_set_frame_position(void* self, const void* point);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_width(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_height(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_x(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_y(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// @param self const Q3DScatter*
///
QPoint* q_3dscatter_position(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self Q3DScatter*
/// @param pt QPoint*
///
void q_3dscatter_set_position(void* self, const void* pt);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// @param self Q3DScatter*
/// @param posx int
/// @param posy int
///
void q_3dscatter_set_position2(void* self, int posx, int posy);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self Q3DScatter*
/// @param newSize QSize*
///
void q_3dscatter_resize(void* self, const void* newSize);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// @param self Q3DScatter*
/// @param w int
/// @param h int
///
void q_3dscatter_resize2(void* self, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// @param self Q3DScatter*
/// @param filePath const char*
///
void q_3dscatter_set_file_path(void* self, const char* filePath);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DScatter*
///
const char* q_3dscatter_file_path(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// @param self Q3DScatter*
/// @param icon QIcon*
///
void q_3dscatter_set_icon(void* self, const void* icon);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// @param self const Q3DScatter*
///
QIcon* q_3dscatter_icon(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// @param self Q3DScatter*
///
void q_3dscatter_destroy(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// @param self Q3DScatter*
/// @param grab bool
///
bool q_3dscatter_set_keyboard_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// @param self Q3DScatter*
/// @param grab bool
///
bool q_3dscatter_set_mouse_grab_enabled(void* self, bool grab);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// @param self const Q3DScatter*
///
QScreen* q_3dscatter_screen(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// @param self Q3DScatter*
/// @param screen QScreen*
///
void q_3dscatter_set_screen(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self const Q3DScatter*
/// @param pos QPointF*
///
QPointF* q_3dscatter_map_to_global(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self const Q3DScatter*
/// @param pos QPointF*
///
QPointF* q_3dscatter_map_from_global(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// @param self const Q3DScatter*
/// @param pos QPoint*
///
QPoint* q_3dscatter_map_to_global2(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// @param self const Q3DScatter*
/// @param pos QPoint*
///
QPoint* q_3dscatter_map_from_global2(const void* self, const void* pos);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// @param self const Q3DScatter*
///
QCursor* q_3dscatter_cursor(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// @param self Q3DScatter*
/// @param cursor QCursor*
///
void q_3dscatter_set_cursor(void* self, const void* cursor);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// @param self Q3DScatter*
///
void q_3dscatter_unset_cursor(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// @param id uintptr_t
///
QWindow* q_3dscatter_from_win_id(uintptr_t id);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// @param self Q3DScatter*
///
void q_3dscatter_request_activate(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// @param self Q3DScatter*
/// @param visible bool
///
void q_3dscatter_set_visible(void* self, bool visible);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// @param self Q3DScatter*
///
void q_3dscatter_show(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// @param self Q3DScatter*
///
void q_3dscatter_hide(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// @param self Q3DScatter*
///
void q_3dscatter_show_minimized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// @param self Q3DScatter*
///
void q_3dscatter_show_maximized(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// @param self Q3DScatter*
///
void q_3dscatter_show_full_screen(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// @param self Q3DScatter*
///
void q_3dscatter_show_normal(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// @param self Q3DScatter*
///
bool q_3dscatter_close(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// @param self Q3DScatter*
///
void q_3dscatter_raise(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// @param self Q3DScatter*
///
void q_3dscatter_lower(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// @param self Q3DScatter*
/// @param edges flag of enum Qt__Edge
///
bool q_3dscatter_start_system_resize(void* self, int32_t edges);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// @param self Q3DScatter*
///
bool q_3dscatter_start_system_move(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// @param self Q3DScatter*
/// @param title const char*
///
void q_3dscatter_set_title(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_set_x(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_set_y(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_set_width(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_set_height(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self Q3DScatter*
/// @param posx int
/// @param posy int
/// @param w int
/// @param h int
///
void q_3dscatter_set_geometry(void* self, int posx, int posy, int w, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// @param self Q3DScatter*
/// @param rect QRect*
///
void q_3dscatter_set_geometry2(void* self, const void* rect);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// @param self Q3DScatter*
/// @param w int
///
void q_3dscatter_set_minimum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// @param self Q3DScatter*
/// @param h int
///
void q_3dscatter_set_minimum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// @param self Q3DScatter*
/// @param w int
///
void q_3dscatter_set_maximum_width(void* self, int w);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// @param self Q3DScatter*
/// @param h int
///
void q_3dscatter_set_maximum_height(void* self, int h);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// @param self Q3DScatter*
/// @param msec int
///
void q_3dscatter_alert(void* self, int msec);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// @param self Q3DScatter*
///
void q_3dscatter_request_update(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self Q3DScatter*
/// @param screen QScreen*
///
void q_3dscatter_screen_changed(void* self, void* screen);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QScreen* screen)
///
void q_3dscatter_on_screen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self Q3DScatter*
/// @param modality enum Qt__WindowModality
///
void q_3dscatter_modality_changed(void* self, int32_t modality);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, enum Qt__WindowModality modality)
///
void q_3dscatter_on_modality_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self Q3DScatter*
/// @param windowState enum Qt__WindowState
///
void q_3dscatter_window_state_changed(void* self, int32_t windowState);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, enum Qt__WindowState windowState)
///
void q_3dscatter_on_window_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self Q3DScatter*
/// @param title const char*
///
void q_3dscatter_window_title_changed(void* self, const char* title);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, const char* title)
///
void q_3dscatter_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_x_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_x_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_y_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_y_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_minimum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_minimum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_minimum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_minimum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_maximum_width_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_maximum_width_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self Q3DScatter*
/// @param arg int
///
void q_3dscatter_maximum_height_changed(void* self, int arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, int arg)
///
void q_3dscatter_on_maximum_height_changed(void* self, void (*callback)(void*, int));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self Q3DScatter*
/// @param arg bool
///
void q_3dscatter_visible_changed(void* self, bool arg);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, bool arg)
///
void q_3dscatter_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self Q3DScatter*
/// @param visibility enum QWindow__Visibility
///
void q_3dscatter_visibility_changed(void* self, int32_t visibility);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, enum QWindow__Visibility visibility)
///
void q_3dscatter_on_visibility_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self Q3DScatter*
///
void q_3dscatter_active_changed(void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self)
///
void q_3dscatter_on_active_changed(void* self, void (*callback)(void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self Q3DScatter*
/// @param orientation enum Qt__ScreenOrientation
///
void q_3dscatter_content_orientation_changed(void* self, int32_t orientation);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, enum Qt__ScreenOrientation orientation)
///
void q_3dscatter_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self Q3DScatter*
/// @param object QObject*
///
void q_3dscatter_focus_object_changed(void* self, void* object);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QObject* object)
///
void q_3dscatter_on_focus_object_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self Q3DScatter*
/// @param opacity double
///
void q_3dscatter_opacity_changed(void* self, double opacity);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, double opacity)
///
void q_3dscatter_on_opacity_changed(void* self, void (*callback)(void*, double));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self Q3DScatter*
/// @param transientParent QWindow*
///
void q_3dscatter_transient_parent_changed(void* self, void* transientParent);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QWindow* transientParent)
///
void q_3dscatter_on_transient_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// @param self const Q3DScatter*
/// @param mode enum QWindow__AncestorMode
///
QWindow* q_3dscatter_parent1(const void* self, int32_t mode);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// @param self Q3DScatter*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_3dscatter_set_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// @param self const Q3DScatter*
/// @param child QWindow*
/// @param mode enum QWindow__AncestorMode
///
bool q_3dscatter_is_ancestor_of2(const void* self, const void* child, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DScatter*
///
const char* q_3dscatter_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Q3DScatter*
/// @param name const char*
///
void q_3dscatter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Q3DScatter*
/// @param b bool
///
bool q_3dscatter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Q3DScatter*
///
QThread* q_3dscatter_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Q3DScatter*
/// @param thread QThread*
///
bool q_3dscatter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScatter*
/// @param interval int
///
int32_t q_3dscatter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScatter*
/// @param time int64_t of nanoseconds
///
int32_t q_3dscatter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DScatter*
/// @param id int
///
void q_3dscatter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DScatter*
/// @param id enum Qt__TimerId
///
void q_3dscatter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Q3DScatter*
///
/// @return libqt_list of QObject*
///
libqt_list q_3dscatter_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Q3DScatter*
/// @param filterObj QObject*
///
void q_3dscatter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Q3DScatter*
/// @param obj QObject*
///
void q_3dscatter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_3dscatter_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_3dscatter_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DScatter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_3dscatter_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dscatter_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_3dscatter_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScatter*
/// @param receiver QObject*
///
bool q_3dscatter_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_3dscatter_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Q3DScatter*
///
void q_3dscatter_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Q3DScatter*
///
void q_3dscatter_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Q3DScatter*
/// @param name const char*
/// @param value QVariant*
///
bool q_3dscatter_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Q3DScatter*
/// @param name const char*
///
QVariant* q_3dscatter_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Q3DScatter*
///
const char** q_3dscatter_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Q3DScatter*
///
QBindingStorage* q_3dscatter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Q3DScatter*
///
const QBindingStorage* q_3dscatter_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScatter*
///
void q_3dscatter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self)
///
void q_3dscatter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Q3DScatter*
/// @param classname const char*
///
bool q_3dscatter_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Q3DScatter*
///
void q_3dscatter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScatter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_3dscatter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DScatter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_3dscatter_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_3dscatter_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_3dscatter_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DScatter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dscatter_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScatter*
/// @param signal const char*
///
bool q_3dscatter_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScatter*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_3dscatter_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScatter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dscatter_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DScatter*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dscatter_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScatter*
/// @param param1 QObject*
///
void q_3dscatter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QObject* param1)
///
void q_3dscatter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self const Q3DScatter*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_3dscatter_surface_class(const void* self);

/// Inherited from QSurface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_supports_open_g_l(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowsSupported)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_shadows_supported(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowsSupported)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
bool q_3dscatter_super_shadows_supported(const void* self);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#shadowsSupported)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback bool func(Q3DScatter* self)
///
void q_3dscatter_on_shadows_supported(void* self, bool (*callback)(const void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QEvent*
///
bool q_3dscatter_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QEvent*
///
bool q_3dscatter_super_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback bool func(Q3DScatter* self, QEvent* event)
///
void q_3dscatter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QResizeEvent*
///
void q_3dscatter_resize_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QResizeEvent*
///
void q_3dscatter_super_resize_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QResizeEvent* event)
///
void q_3dscatter_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#exposeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QExposeEvent*
///
void q_3dscatter_expose_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#exposeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QExposeEvent*
///
void q_3dscatter_super_expose_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#exposeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QExposeEvent* event)
///
void q_3dscatter_on_expose_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMouseEvent* event)
///
void q_3dscatter_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QTouchEvent*
///
void q_3dscatter_touch_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QTouchEvent*
///
void q_3dscatter_super_touch_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QTouchEvent* event)
///
void q_3dscatter_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_mouse_press_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_super_mouse_press_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMouseEvent* event)
///
void q_3dscatter_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_mouse_release_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_super_mouse_release_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMouseEvent* event)
///
void q_3dscatter_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_mouse_move_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QMouseEvent*
///
void q_3dscatter_super_mouse_move_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMouseEvent* event)
///
void q_3dscatter_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QWheelEvent*
///
void q_3dscatter_wheel_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QWheelEvent*
///
void q_3dscatter_super_wheel_event(void* self, void* event);

/// Inherited from QAbstract3DGraph
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QWheelEvent* event)
///
void q_3dscatter_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_3dscatter_surface_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_3dscatter_super_surface_type(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback int32_t func(Q3DScatter* self)
///
void q_3dscatter_on_surface_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
QSurfaceFormat* q_3dscatter_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
QSurfaceFormat* q_3dscatter_super_format(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback QSurfaceFormat* func(Q3DScatter* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_3dscatter_on_format(void* self, QSurfaceFormat* (*callback)(const void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
QSize* q_3dscatter_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
QSize* q_3dscatter_super_size(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback QSize* func(Q3DScatter* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_3dscatter_on_size(void* self, QSize* (*callback)(const void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
QAccessibleInterface* q_3dscatter_accessible_root(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
QAccessibleInterface* q_3dscatter_super_accessible_root(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback QAccessibleInterface* func(Q3DScatter* self)
///
void q_3dscatter_on_accessible_root(void* self, QAccessibleInterface* (*callback)(const void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
QObject* q_3dscatter_focus_object(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
QObject* q_3dscatter_super_focus_object(const void* self);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback QObject* func(Q3DScatter* self)
///
void q_3dscatter_on_focus_object(void* self, QObject* (*callback)(const void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QPaintEvent*
///
void q_3dscatter_paint_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QPaintEvent*
///
void q_3dscatter_super_paint_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QPaintEvent* param1)
///
void q_3dscatter_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QMoveEvent*
///
void q_3dscatter_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QMoveEvent*
///
void q_3dscatter_super_move_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMoveEvent* param1)
///
void q_3dscatter_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QFocusEvent*
///
void q_3dscatter_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QFocusEvent*
///
void q_3dscatter_super_focus_in_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QFocusEvent* param1)
///
void q_3dscatter_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QFocusEvent*
///
void q_3dscatter_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QFocusEvent*
///
void q_3dscatter_super_focus_out_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QFocusEvent* param1)
///
void q_3dscatter_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QShowEvent*
///
void q_3dscatter_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QShowEvent*
///
void q_3dscatter_super_show_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QShowEvent* param1)
///
void q_3dscatter_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QHideEvent*
///
void q_3dscatter_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QHideEvent*
///
void q_3dscatter_super_hide_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QHideEvent* param1)
///
void q_3dscatter_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QCloseEvent*
///
void q_3dscatter_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QCloseEvent*
///
void q_3dscatter_super_close_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QCloseEvent* param1)
///
void q_3dscatter_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QKeyEvent*
///
void q_3dscatter_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QKeyEvent*
///
void q_3dscatter_super_key_press_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QKeyEvent* param1)
///
void q_3dscatter_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QKeyEvent*
///
void q_3dscatter_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QKeyEvent*
///
void q_3dscatter_super_key_release_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QKeyEvent* param1)
///
void q_3dscatter_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QTabletEvent*
///
void q_3dscatter_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param param1 QTabletEvent*
///
void q_3dscatter_super_tablet_event(void* self, void* param1);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QTabletEvent* param1)
///
void q_3dscatter_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_3dscatter_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_3dscatter_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback bool func(Q3DScatter* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_3dscatter_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dscatter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dscatter_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback bool func(Q3DScatter* self, QObject* watched, QEvent* event)
///
void q_3dscatter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QTimerEvent*
///
void q_3dscatter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QTimerEvent*
///
void q_3dscatter_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QTimerEvent* event)
///
void q_3dscatter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QChildEvent*
///
void q_3dscatter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QChildEvent*
///
void q_3dscatter_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QChildEvent* event)
///
void q_3dscatter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QEvent*
///
void q_3dscatter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param event QEvent*
///
void q_3dscatter_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QEvent* event)
///
void q_3dscatter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param signal QMetaMethod*
///
void q_3dscatter_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param signal QMetaMethod*
///
void q_3dscatter_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMetaMethod* signal)
///
void q_3dscatter_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DScatter*
/// @param signal QMetaMethod*
///
void q_3dscatter_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param signal QMetaMethod*
///
void q_3dscatter_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, QMetaMethod* signal)
///
void q_3dscatter_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
/// @param name const char*
/// @param revision int
///
void* q_3dscatter_resolve_interface(const void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
/// @param name const char*
/// @param revision int
///
void* q_3dscatter_super_resolve_interface(const void* self, const char* name, int revision);

/// Inherited from QWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback void* func(Q3DScatter* self, const char* name, int revision)
///
void q_3dscatter_on_resolve_interface(void* self, void* (*callback)(const void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
QObject* q_3dscatter_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
QObject* q_3dscatter_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback QObject* func(Q3DScatter* self)
///
void q_3dscatter_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
///
int32_t q_3dscatter_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback int32_t func(Q3DScatter* self)
///
void q_3dscatter_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
/// @param signal const char*
///
int32_t q_3dscatter_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
/// @param signal const char*
///
int32_t q_3dscatter_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback int32_t func(Q3DScatter* self, const char* signal)
///
void q_3dscatter_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DScatter*
/// @param signal QMetaMethod*
///
bool q_3dscatter_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DScatter*
/// @param signal QMetaMethod*
///
bool q_3dscatter_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DScatter*
/// @param callback bool func(Q3DScatter* self, QMetaMethod* signal)
///
void q_3dscatter_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Q3DScatter*
/// @param callback void func(Q3DScatter* self, const char* objectName)
///
void q_3dscatter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dscatter-qtdatavis.html#dtor.Q3DScatter)
///
/// Delete this object from C++ memory.
///
/// @param self Q3DScatter*
///
void q_3dscatter_delete(void* self);

#endif
