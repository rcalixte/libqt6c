#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTER3DSERIES_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTER3DSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html)

/// q_scatter3dseries_new constructs a new QScatter3DSeries object.
///
QScatter3DSeries* q_scatter3dseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html)

/// q_scatter3dseries_new2 constructs a new QScatter3DSeries object.
///
/// @param dataProxy QScatterDataProxy*
///
QScatter3DSeries* q_scatter3dseries_new2(void* dataProxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html)

/// q_scatter3dseries_new3 constructs a new QScatter3DSeries object.
///
/// @param parent QObject*
///
QScatter3DSeries* q_scatter3dseries_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html)

/// q_scatter3dseries_new4 constructs a new QScatter3DSeries object.
///
/// @param dataProxy QScatterDataProxy*
/// @param parent QObject*
///
QScatter3DSeries* q_scatter3dseries_new4(void* dataProxy, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QScatter3DSeries*
///
const QMetaObject* q_scatter3dseries_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QScatter3DSeries*
/// @param callback const QMetaObject* func(const QScatter3DSeries* self)
///
void q_scatter3dseries_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QScatter3DSeries*
///
const QMetaObject* q_scatter3dseries_super_meta_object(const void* self);

/// @param self QScatter3DSeries*
/// @param param1 const char*
///
void* q_scatter3dseries_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QScatter3DSeries*
/// @param callback void* func(QScatter3DSeries* self, const char* param1)
///
void q_scatter3dseries_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QScatter3DSeries*
/// @param param1 const char*
///
void* q_scatter3dseries_super_metacast(void* self, const char* param1);

/// @param self QScatter3DSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scatter3dseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QScatter3DSeries*
/// @param callback int32_t func(QScatter3DSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scatter3dseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QScatter3DSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scatter3dseries_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scatter3dseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#setDataProxy)
///
/// @param self QScatter3DSeries*
/// @param proxy QScatterDataProxy*
///
void q_scatter3dseries_set_data_proxy(void* self, void* proxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#dataProxy)
///
/// @param self const QScatter3DSeries*
///
QScatterDataProxy* q_scatter3dseries_data_proxy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#setSelectedItem)
///
/// @param self QScatter3DSeries*
/// @param index int
///
void q_scatter3dseries_set_selected_item(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#selectedItem)
///
/// @param self const QScatter3DSeries*
///
int32_t q_scatter3dseries_selected_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#invalidSelectionIndex)
///
int32_t q_scatter3dseries_invalid_selection_index();

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#setItemSize)
///
/// @param self QScatter3DSeries*
/// @param size float
///
void q_scatter3dseries_set_item_size(void* self, float size);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#itemSize)
///
/// @param self const QScatter3DSeries*
///
float q_scatter3dseries_item_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#dataProxyChanged)
///
/// @param self QScatter3DSeries*
/// @param proxy QScatterDataProxy*
///
void q_scatter3dseries_data_proxy_changed(void* self, void* proxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#dataProxyChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QScatterDataProxy* proxy)
///
void q_scatter3dseries_on_data_proxy_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#selectedItemChanged)
///
/// @param self QScatter3DSeries*
/// @param index int
///
void q_scatter3dseries_selected_item_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#selectedItemChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, int index)
///
void q_scatter3dseries_on_selected_item_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#itemSizeChanged)
///
/// @param self QScatter3DSeries*
/// @param size float
///
void q_scatter3dseries_item_size_changed(void* self, float size);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#itemSizeChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, float size)
///
void q_scatter3dseries_on_item_size_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scatter3dseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scatter3dseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#type)
///
/// @param self const QScatter3DSeries*
///
/// @return enum QAbstract3DSeries__SeriesType
///
int32_t q_scatter3dseries_type(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setItemLabelFormat)
///
/// @param self QScatter3DSeries*
/// @param format const char*
///
void q_scatter3dseries_set_item_label_format(void* self, const char* format);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScatter3DSeries*
///
const char* q_scatter3dseries_item_label_format(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setVisible)
///
/// @param self QScatter3DSeries*
/// @param visible bool
///
void q_scatter3dseries_set_visible(void* self, bool visible);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#isVisible)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_is_visible(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMesh)
///
/// @param self QScatter3DSeries*
/// @param mesh enum QAbstract3DSeries__Mesh
///
void q_scatter3dseries_set_mesh(void* self, int32_t mesh);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#mesh)
///
/// @param self const QScatter3DSeries*
///
/// @return enum QAbstract3DSeries__Mesh
///
int32_t q_scatter3dseries_mesh(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMeshSmooth)
///
/// @param self QScatter3DSeries*
/// @param enable bool
///
void q_scatter3dseries_set_mesh_smooth(void* self, bool enable);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#isMeshSmooth)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_is_mesh_smooth(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMeshRotation)
///
/// @param self QScatter3DSeries*
/// @param rotation QQuaternion*
///
void q_scatter3dseries_set_mesh_rotation(void* self, const void* rotation);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshRotation)
///
/// @param self const QScatter3DSeries*
///
QQuaternion* q_scatter3dseries_mesh_rotation(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMeshAxisAndAngle)
///
/// @param self QScatter3DSeries*
/// @param axis QVector3D*
/// @param angle float
///
void q_scatter3dseries_set_mesh_axis_and_angle(void* self, const void* axis, float angle);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setUserDefinedMesh)
///
/// @param self QScatter3DSeries*
/// @param fileName const char*
///
void q_scatter3dseries_set_user_defined_mesh(void* self, const char* fileName);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#userDefinedMesh)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScatter3DSeries*
///
const char* q_scatter3dseries_user_defined_mesh(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setColorStyle)
///
/// @param self QScatter3DSeries*
/// @param style enum Q3DTheme__ColorStyle
///
void q_scatter3dseries_set_color_style(void* self, int32_t style);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#colorStyle)
///
/// @param self const QScatter3DSeries*
///
/// @return enum Q3DTheme__ColorStyle
///
int32_t q_scatter3dseries_color_style(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setBaseColor)
///
/// @param self QScatter3DSeries*
/// @param color QColor*
///
void q_scatter3dseries_set_base_color(void* self, const void* color);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseColor)
///
/// @param self const QScatter3DSeries*
///
QColor* q_scatter3dseries_base_color(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setBaseGradient)
///
/// @param self QScatter3DSeries*
/// @param gradient QLinearGradient*
///
void q_scatter3dseries_set_base_gradient(void* self, const void* gradient);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseGradient)
///
/// @param self const QScatter3DSeries*
///
QLinearGradient* q_scatter3dseries_base_gradient(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setSingleHighlightColor)
///
/// @param self QScatter3DSeries*
/// @param color QColor*
///
void q_scatter3dseries_set_single_highlight_color(void* self, const void* color);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightColor)
///
/// @param self const QScatter3DSeries*
///
QColor* q_scatter3dseries_single_highlight_color(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setSingleHighlightGradient)
///
/// @param self QScatter3DSeries*
/// @param gradient QLinearGradient*
///
void q_scatter3dseries_set_single_highlight_gradient(void* self, const void* gradient);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightGradient)
///
/// @param self const QScatter3DSeries*
///
QLinearGradient* q_scatter3dseries_single_highlight_gradient(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMultiHighlightColor)
///
/// @param self QScatter3DSeries*
/// @param color QColor*
///
void q_scatter3dseries_set_multi_highlight_color(void* self, const void* color);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightColor)
///
/// @param self const QScatter3DSeries*
///
QColor* q_scatter3dseries_multi_highlight_color(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMultiHighlightGradient)
///
/// @param self QScatter3DSeries*
/// @param gradient QLinearGradient*
///
void q_scatter3dseries_set_multi_highlight_gradient(void* self, const void* gradient);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightGradient)
///
/// @param self const QScatter3DSeries*
///
QLinearGradient* q_scatter3dseries_multi_highlight_gradient(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setName)
///
/// @param self QScatter3DSeries*
/// @param name const char*
///
void q_scatter3dseries_set_name(void* self, const char* name);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScatter3DSeries*
///
const char* q_scatter3dseries_name(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabel)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScatter3DSeries*
///
const char* q_scatter3dseries_item_label(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setItemLabelVisible)
///
/// @param self QScatter3DSeries*
/// @param visible bool
///
void q_scatter3dseries_set_item_label_visible(void* self, bool visible);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#isItemLabelVisible)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_is_item_label_visible(const void* self);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelFormatChanged)
///
/// @param self QScatter3DSeries*
/// @param format const char*
///
void q_scatter3dseries_item_label_format_changed(void* self, const char* format);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelFormatChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, const char* format)
///
void q_scatter3dseries_on_item_label_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#visibilityChanged)
///
/// @param self QScatter3DSeries*
/// @param visible bool
///
void q_scatter3dseries_visibility_changed(void* self, bool visible);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#visibilityChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, bool visible)
///
void q_scatter3dseries_on_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshChanged)
///
/// @param self QScatter3DSeries*
/// @param mesh enum QAbstract3DSeries__Mesh
///
void q_scatter3dseries_mesh_changed(void* self, int32_t mesh);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, enum QAbstract3DSeries__Mesh mesh)
///
void q_scatter3dseries_on_mesh_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshSmoothChanged)
///
/// @param self QScatter3DSeries*
/// @param enabled bool
///
void q_scatter3dseries_mesh_smooth_changed(void* self, bool enabled);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshSmoothChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, bool enabled)
///
void q_scatter3dseries_on_mesh_smooth_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshRotationChanged)
///
/// @param self QScatter3DSeries*
/// @param rotation QQuaternion*
///
void q_scatter3dseries_mesh_rotation_changed(void* self, const void* rotation);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshRotationChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QQuaternion* rotation)
///
void q_scatter3dseries_on_mesh_rotation_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#userDefinedMeshChanged)
///
/// @param self QScatter3DSeries*
/// @param fileName const char*
///
void q_scatter3dseries_user_defined_mesh_changed(void* self, const char* fileName);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#userDefinedMeshChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, const char* fileName)
///
void q_scatter3dseries_on_user_defined_mesh_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#colorStyleChanged)
///
/// @param self QScatter3DSeries*
/// @param style enum Q3DTheme__ColorStyle
///
void q_scatter3dseries_color_style_changed(void* self, int32_t style);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#colorStyleChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, enum Q3DTheme__ColorStyle style)
///
void q_scatter3dseries_on_color_style_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseColorChanged)
///
/// @param self QScatter3DSeries*
/// @param color QColor*
///
void q_scatter3dseries_base_color_changed(void* self, const void* color);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseColorChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QColor* color)
///
void q_scatter3dseries_on_base_color_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseGradientChanged)
///
/// @param self QScatter3DSeries*
/// @param gradient QLinearGradient*
///
void q_scatter3dseries_base_gradient_changed(void* self, const void* gradient);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseGradientChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QLinearGradient* gradient)
///
void q_scatter3dseries_on_base_gradient_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightColorChanged)
///
/// @param self QScatter3DSeries*
/// @param color QColor*
///
void q_scatter3dseries_single_highlight_color_changed(void* self, const void* color);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightColorChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QColor* color)
///
void q_scatter3dseries_on_single_highlight_color_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightGradientChanged)
///
/// @param self QScatter3DSeries*
/// @param gradient QLinearGradient*
///
void q_scatter3dseries_single_highlight_gradient_changed(void* self, const void* gradient);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightGradientChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QLinearGradient* gradient)
///
void q_scatter3dseries_on_single_highlight_gradient_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightColorChanged)
///
/// @param self QScatter3DSeries*
/// @param color QColor*
///
void q_scatter3dseries_multi_highlight_color_changed(void* self, const void* color);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightColorChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QColor* color)
///
void q_scatter3dseries_on_multi_highlight_color_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightGradientChanged)
///
/// @param self QScatter3DSeries*
/// @param gradient QLinearGradient*
///
void q_scatter3dseries_multi_highlight_gradient_changed(void* self, const void* gradient);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightGradientChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QLinearGradient* gradient)
///
void q_scatter3dseries_on_multi_highlight_gradient_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#nameChanged)
///
/// @param self QScatter3DSeries*
/// @param name const char*
///
void q_scatter3dseries_name_changed(void* self, const char* name);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#nameChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, const char* name)
///
void q_scatter3dseries_on_name_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelChanged)
///
/// @param self QScatter3DSeries*
/// @param label const char*
///
void q_scatter3dseries_item_label_changed(void* self, const char* label);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, const char* label)
///
void q_scatter3dseries_on_item_label_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelVisibilityChanged)
///
/// @param self QScatter3DSeries*
/// @param visible bool
///
void q_scatter3dseries_item_label_visibility_changed(void* self, bool visible);

/// Inherited from QAbstract3DSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelVisibilityChanged)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, bool visible)
///
void q_scatter3dseries_on_item_label_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QScatter3DSeries*
///
const char* q_scatter3dseries_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QScatter3DSeries*
/// @param name const char*
///
void q_scatter3dseries_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QScatter3DSeries*
/// @param b bool
///
bool q_scatter3dseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QScatter3DSeries*
///
QThread* q_scatter3dseries_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QScatter3DSeries*
/// @param thread QThread*
///
bool q_scatter3dseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatter3DSeries*
/// @param interval int
///
int32_t q_scatter3dseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatter3DSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_scatter3dseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScatter3DSeries*
/// @param id int
///
void q_scatter3dseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QScatter3DSeries*
/// @param id enum Qt__TimerId
///
void q_scatter3dseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QScatter3DSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_scatter3dseries_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QScatter3DSeries*
/// @param parent QObject*
///
void q_scatter3dseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QScatter3DSeries*
/// @param filterObj QObject*
///
void q_scatter3dseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QScatter3DSeries*
/// @param obj QObject*
///
void q_scatter3dseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scatter3dseries_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scatter3dseries_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QScatter3DSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scatter3dseries_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scatter3dseries_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scatter3dseries_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatter3DSeries*
///
bool q_scatter3dseries_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatter3DSeries*
/// @param receiver QObject*
///
bool q_scatter3dseries_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scatter3dseries_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QScatter3DSeries*
///
void q_scatter3dseries_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QScatter3DSeries*
///
void q_scatter3dseries_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QScatter3DSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_scatter3dseries_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QScatter3DSeries*
/// @param name const char*
///
QVariant* q_scatter3dseries_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QScatter3DSeries*
///
const char** q_scatter3dseries_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QScatter3DSeries*
///
QBindingStorage* q_scatter3dseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QScatter3DSeries*
///
const QBindingStorage* q_scatter3dseries_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatter3DSeries*
///
void q_scatter3dseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self)
///
void q_scatter3dseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QScatter3DSeries*
///
QObject* q_scatter3dseries_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QScatter3DSeries*
/// @param classname const char*
///
bool q_scatter3dseries_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QScatter3DSeries*
///
void q_scatter3dseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatter3DSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scatter3dseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QScatter3DSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scatter3dseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scatter3dseries_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scatter3dseries_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QScatter3DSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scatter3dseries_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatter3DSeries*
/// @param signal const char*
///
bool q_scatter3dseries_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatter3DSeries*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scatter3dseries_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatter3DSeries*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scatter3dseries_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QScatter3DSeries*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scatter3dseries_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatter3DSeries*
/// @param param1 QObject*
///
void q_scatter3dseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QObject* param1)
///
void q_scatter3dseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QEvent*
///
bool q_scatter3dseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QEvent*
///
bool q_scatter3dseries_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback bool func(QScatter3DSeries* self, QEvent* event)
///
void q_scatter3dseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scatter3dseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scatter3dseries_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback bool func(QScatter3DSeries* self, QObject* watched, QEvent* event)
///
void q_scatter3dseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QTimerEvent*
///
void q_scatter3dseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QTimerEvent*
///
void q_scatter3dseries_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QTimerEvent* event)
///
void q_scatter3dseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QChildEvent*
///
void q_scatter3dseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QChildEvent*
///
void q_scatter3dseries_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QChildEvent* event)
///
void q_scatter3dseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QEvent*
///
void q_scatter3dseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param event QEvent*
///
void q_scatter3dseries_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QEvent* event)
///
void q_scatter3dseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param signal QMetaMethod*
///
void q_scatter3dseries_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param signal QMetaMethod*
///
void q_scatter3dseries_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QMetaMethod* signal)
///
void q_scatter3dseries_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param signal QMetaMethod*
///
void q_scatter3dseries_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param signal QMetaMethod*
///
void q_scatter3dseries_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, QMetaMethod* signal)
///
void q_scatter3dseries_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatter3DSeries*
///
QObject* q_scatter3dseries_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatter3DSeries*
///
QObject* q_scatter3dseries_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback QObject* func(QScatter3DSeries* self)
///
void q_scatter3dseries_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatter3DSeries*
///
int32_t q_scatter3dseries_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatter3DSeries*
///
int32_t q_scatter3dseries_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback int32_t func(QScatter3DSeries* self)
///
void q_scatter3dseries_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatter3DSeries*
/// @param signal const char*
///
int32_t q_scatter3dseries_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatter3DSeries*
/// @param signal const char*
///
int32_t q_scatter3dseries_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback int32_t func(QScatter3DSeries* self, const char* signal)
///
void q_scatter3dseries_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QScatter3DSeries*
/// @param signal QMetaMethod*
///
bool q_scatter3dseries_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QScatter3DSeries*
/// @param signal QMetaMethod*
///
bool q_scatter3dseries_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScatter3DSeries*
/// @param callback bool func(QScatter3DSeries* self, QMetaMethod* signal)
///
void q_scatter3dseries_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QScatter3DSeries*
/// @param callback void func(QScatter3DSeries* self, const char* objectName)
///
void q_scatter3dseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscatter3dseries-qtdatavis.html#dtor.QScatter3DSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QScatter3DSeries*
///
void q_scatter3dseries_delete(void* self);

#endif
