#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DSERIES_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACT3DSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstract3DSeries*
///
const QMetaObject* q_abstract3dseries_meta_object(const void* self);

/// @param self QAbstract3DSeries*
/// @param param1 const char*
///
void* q_abstract3dseries_metacast(void* self, const char* param1);

/// @param self QAbstract3DSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstract3dseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstract3dseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#type)
///
/// @param self const QAbstract3DSeries*
///
/// @return enum QAbstract3DSeries__SeriesType
///
int32_t q_abstract3dseries_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setItemLabelFormat)
///
/// @param self QAbstract3DSeries*
/// @param format const char*
///
void q_abstract3dseries_set_item_label_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DSeries*
///
const char* q_abstract3dseries_item_label_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setVisible)
///
/// @param self QAbstract3DSeries*
/// @param visible bool
///
void q_abstract3dseries_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#isVisible)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_is_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMesh)
///
/// @param self QAbstract3DSeries*
/// @param mesh enum QAbstract3DSeries__Mesh
///
void q_abstract3dseries_set_mesh(void* self, int32_t mesh);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#mesh)
///
/// @param self const QAbstract3DSeries*
///
/// @return enum QAbstract3DSeries__Mesh
///
int32_t q_abstract3dseries_mesh(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMeshSmooth)
///
/// @param self QAbstract3DSeries*
/// @param enable bool
///
void q_abstract3dseries_set_mesh_smooth(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#isMeshSmooth)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_is_mesh_smooth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMeshRotation)
///
/// @param self QAbstract3DSeries*
/// @param rotation QQuaternion*
///
void q_abstract3dseries_set_mesh_rotation(void* self, const void* rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshRotation)
///
/// @param self const QAbstract3DSeries*
///
QQuaternion* q_abstract3dseries_mesh_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMeshAxisAndAngle)
///
/// @param self QAbstract3DSeries*
/// @param axis QVector3D*
/// @param angle float
///
void q_abstract3dseries_set_mesh_axis_and_angle(void* self, const void* axis, float angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setUserDefinedMesh)
///
/// @param self QAbstract3DSeries*
/// @param fileName const char*
///
void q_abstract3dseries_set_user_defined_mesh(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#userDefinedMesh)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DSeries*
///
const char* q_abstract3dseries_user_defined_mesh(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setColorStyle)
///
/// @param self QAbstract3DSeries*
/// @param style enum Q3DTheme__ColorStyle
///
void q_abstract3dseries_set_color_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#colorStyle)
///
/// @param self const QAbstract3DSeries*
///
/// @return enum Q3DTheme__ColorStyle
///
int32_t q_abstract3dseries_color_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setBaseColor)
///
/// @param self QAbstract3DSeries*
/// @param color QColor*
///
void q_abstract3dseries_set_base_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseColor)
///
/// @param self const QAbstract3DSeries*
///
QColor* q_abstract3dseries_base_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setBaseGradient)
///
/// @param self QAbstract3DSeries*
/// @param gradient QLinearGradient*
///
void q_abstract3dseries_set_base_gradient(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseGradient)
///
/// @param self const QAbstract3DSeries*
///
QLinearGradient* q_abstract3dseries_base_gradient(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setSingleHighlightColor)
///
/// @param self QAbstract3DSeries*
/// @param color QColor*
///
void q_abstract3dseries_set_single_highlight_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightColor)
///
/// @param self const QAbstract3DSeries*
///
QColor* q_abstract3dseries_single_highlight_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setSingleHighlightGradient)
///
/// @param self QAbstract3DSeries*
/// @param gradient QLinearGradient*
///
void q_abstract3dseries_set_single_highlight_gradient(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightGradient)
///
/// @param self const QAbstract3DSeries*
///
QLinearGradient* q_abstract3dseries_single_highlight_gradient(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMultiHighlightColor)
///
/// @param self QAbstract3DSeries*
/// @param color QColor*
///
void q_abstract3dseries_set_multi_highlight_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightColor)
///
/// @param self const QAbstract3DSeries*
///
QColor* q_abstract3dseries_multi_highlight_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setMultiHighlightGradient)
///
/// @param self QAbstract3DSeries*
/// @param gradient QLinearGradient*
///
void q_abstract3dseries_set_multi_highlight_gradient(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightGradient)
///
/// @param self const QAbstract3DSeries*
///
QLinearGradient* q_abstract3dseries_multi_highlight_gradient(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setName)
///
/// @param self QAbstract3DSeries*
/// @param name const char*
///
void q_abstract3dseries_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DSeries*
///
const char* q_abstract3dseries_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabel)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DSeries*
///
const char* q_abstract3dseries_item_label(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#setItemLabelVisible)
///
/// @param self QAbstract3DSeries*
/// @param visible bool
///
void q_abstract3dseries_set_item_label_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#isItemLabelVisible)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_is_item_label_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelFormatChanged)
///
/// @param self QAbstract3DSeries*
/// @param format const char*
///
void q_abstract3dseries_item_label_format_changed(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelFormatChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, const char* format)
///
void q_abstract3dseries_on_item_label_format_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#visibilityChanged)
///
/// @param self QAbstract3DSeries*
/// @param visible bool
///
void q_abstract3dseries_visibility_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#visibilityChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, bool visible)
///
void q_abstract3dseries_on_visibility_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshChanged)
///
/// @param self QAbstract3DSeries*
/// @param mesh enum QAbstract3DSeries__Mesh
///
void q_abstract3dseries_mesh_changed(void* self, int32_t mesh);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, enum QAbstract3DSeries__Mesh mesh)
///
void q_abstract3dseries_on_mesh_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshSmoothChanged)
///
/// @param self QAbstract3DSeries*
/// @param enabled bool
///
void q_abstract3dseries_mesh_smooth_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshSmoothChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, bool enabled)
///
void q_abstract3dseries_on_mesh_smooth_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshRotationChanged)
///
/// @param self QAbstract3DSeries*
/// @param rotation QQuaternion*
///
void q_abstract3dseries_mesh_rotation_changed(void* self, const void* rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#meshRotationChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QQuaternion* rotation)
///
void q_abstract3dseries_on_mesh_rotation_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#userDefinedMeshChanged)
///
/// @param self QAbstract3DSeries*
/// @param fileName const char*
///
void q_abstract3dseries_user_defined_mesh_changed(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#userDefinedMeshChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, const char* fileName)
///
void q_abstract3dseries_on_user_defined_mesh_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#colorStyleChanged)
///
/// @param self QAbstract3DSeries*
/// @param style enum Q3DTheme__ColorStyle
///
void q_abstract3dseries_color_style_changed(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#colorStyleChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, enum Q3DTheme__ColorStyle style)
///
void q_abstract3dseries_on_color_style_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseColorChanged)
///
/// @param self QAbstract3DSeries*
/// @param color QColor*
///
void q_abstract3dseries_base_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseColorChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QColor* color)
///
void q_abstract3dseries_on_base_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseGradientChanged)
///
/// @param self QAbstract3DSeries*
/// @param gradient QLinearGradient*
///
void q_abstract3dseries_base_gradient_changed(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#baseGradientChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QLinearGradient* gradient)
///
void q_abstract3dseries_on_base_gradient_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightColorChanged)
///
/// @param self QAbstract3DSeries*
/// @param color QColor*
///
void q_abstract3dseries_single_highlight_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightColorChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QColor* color)
///
void q_abstract3dseries_on_single_highlight_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightGradientChanged)
///
/// @param self QAbstract3DSeries*
/// @param gradient QLinearGradient*
///
void q_abstract3dseries_single_highlight_gradient_changed(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#singleHighlightGradientChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QLinearGradient* gradient)
///
void q_abstract3dseries_on_single_highlight_gradient_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightColorChanged)
///
/// @param self QAbstract3DSeries*
/// @param color QColor*
///
void q_abstract3dseries_multi_highlight_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightColorChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QColor* color)
///
void q_abstract3dseries_on_multi_highlight_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightGradientChanged)
///
/// @param self QAbstract3DSeries*
/// @param gradient QLinearGradient*
///
void q_abstract3dseries_multi_highlight_gradient_changed(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#multiHighlightGradientChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QLinearGradient* gradient)
///
void q_abstract3dseries_on_multi_highlight_gradient_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#nameChanged)
///
/// @param self QAbstract3DSeries*
/// @param name const char*
///
void q_abstract3dseries_name_changed(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#nameChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, const char* name)
///
void q_abstract3dseries_on_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelChanged)
///
/// @param self QAbstract3DSeries*
/// @param label const char*
///
void q_abstract3dseries_item_label_changed(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, const char* label)
///
void q_abstract3dseries_on_item_label_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelVisibilityChanged)
///
/// @param self QAbstract3DSeries*
/// @param visible bool
///
void q_abstract3dseries_item_label_visibility_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#itemLabelVisibilityChanged)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, bool visible)
///
void q_abstract3dseries_on_item_label_visibility_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstract3dseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstract3dseries_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstract3DSeries*
/// @param event QEvent*
///
bool q_abstract3dseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstract3DSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstract3dseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstract3DSeries*
///
const char* q_abstract3dseries_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstract3DSeries*
/// @param name const char*
///
void q_abstract3dseries_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstract3DSeries*
/// @param b bool
///
bool q_abstract3dseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstract3DSeries*
///
QThread* q_abstract3dseries_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstract3DSeries*
/// @param thread QThread*
///
bool q_abstract3dseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DSeries*
/// @param interval int
///
int32_t q_abstract3dseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_abstract3dseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DSeries*
/// @param id int
///
void q_abstract3dseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstract3DSeries*
/// @param id enum Qt__TimerId
///
void q_abstract3dseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstract3DSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstract3dseries_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstract3DSeries*
/// @param parent QObject*
///
void q_abstract3dseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstract3DSeries*
/// @param filterObj QObject*
///
void q_abstract3dseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstract3DSeries*
/// @param obj QObject*
///
void q_abstract3dseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3dseries_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstract3dseries_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstract3dseries_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dseries_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstract3dseries_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DSeries*
///
bool q_abstract3dseries_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DSeries*
/// @param receiver QObject*
///
bool q_abstract3dseries_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstract3dseries_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstract3DSeries*
///
void q_abstract3dseries_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstract3DSeries*
///
void q_abstract3dseries_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstract3DSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstract3dseries_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstract3DSeries*
/// @param name const char*
///
QVariant* q_abstract3dseries_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstract3DSeries*
///
const char** q_abstract3dseries_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstract3DSeries*
///
QBindingStorage* q_abstract3dseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstract3DSeries*
///
const QBindingStorage* q_abstract3dseries_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DSeries*
///
void q_abstract3dseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self)
///
void q_abstract3dseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstract3DSeries*
///
QObject* q_abstract3dseries_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstract3DSeries*
/// @param classname const char*
///
bool q_abstract3dseries_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstract3DSeries*
///
void q_abstract3dseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3dseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstract3DSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstract3dseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstract3dseries_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstract3dseries_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstract3DSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstract3dseries_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DSeries*
/// @param signal const char*
///
bool q_abstract3dseries_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DSeries*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstract3dseries_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DSeries*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dseries_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstract3DSeries*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstract3dseries_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DSeries*
/// @param param1 QObject*
///
void q_abstract3dseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, QObject* param1)
///
void q_abstract3dseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstract3DSeries*
/// @param callback void func(QAbstract3DSeries* self, const char* objectName)
///
void q_abstract3dseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#dtor.QAbstract3DSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstract3DSeries*
///
void q_abstract3dseries_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DSERIES_SERIESTYPE_SERIESTYPENONE = 0,
    QABSTRACT3DSERIES_SERIESTYPE_SERIESTYPEBAR = 1,
    QABSTRACT3DSERIES_SERIESTYPE_SERIESTYPESCATTER = 2,
    QABSTRACT3DSERIES_SERIESTYPE_SERIESTYPESURFACE = 4
} QAbstract3DSeries__SeriesType;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries-qtdatavis.html#public-types)

typedef enum {
    QABSTRACT3DSERIES_MESH_MESHUSERDEFINED = 0,
    QABSTRACT3DSERIES_MESH_MESHBAR = 1,
    QABSTRACT3DSERIES_MESH_MESHCUBE = 2,
    QABSTRACT3DSERIES_MESH_MESHPYRAMID = 3,
    QABSTRACT3DSERIES_MESH_MESHCONE = 4,
    QABSTRACT3DSERIES_MESH_MESHCYLINDER = 5,
    QABSTRACT3DSERIES_MESH_MESHBEVELBAR = 6,
    QABSTRACT3DSERIES_MESH_MESHBEVELCUBE = 7,
    QABSTRACT3DSERIES_MESH_MESHSPHERE = 8,
    QABSTRACT3DSERIES_MESH_MESHMINIMAL = 9,
    QABSTRACT3DSERIES_MESH_MESHARROW = 10,
    QABSTRACT3DSERIES_MESH_MESHPOINT = 11
} QAbstract3DSeries__Mesh;

#endif
