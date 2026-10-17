#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DLABEL_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DLABEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html)

/// q_custom3dlabel_new constructs a new QCustom3DLabel object.
///
QCustom3DLabel* q_custom3dlabel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html)

/// q_custom3dlabel_new2 constructs a new QCustom3DLabel object.
///
/// @param text const char*
/// @param font QFont*
/// @param position QVector3D*
/// @param scaling QVector3D*
/// @param rotation QQuaternion*
///
QCustom3DLabel* q_custom3dlabel_new2(const char* text, const void* font, const void* position, const void* scaling, const void* rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html)

/// q_custom3dlabel_new3 constructs a new QCustom3DLabel object.
///
/// @param parent QObject*
///
QCustom3DLabel* q_custom3dlabel_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html)

/// q_custom3dlabel_new4 constructs a new QCustom3DLabel object.
///
/// @param text const char*
/// @param font QFont*
/// @param position QVector3D*
/// @param scaling QVector3D*
/// @param rotation QQuaternion*
/// @param parent QObject*
///
QCustom3DLabel* q_custom3dlabel_new4(const char* text, const void* font, const void* position, const void* scaling, const void* rotation, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCustom3DLabel*
///
const QMetaObject* q_custom3dlabel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCustom3DLabel*
/// @param callback const QMetaObject* func(const QCustom3DLabel* self)
///
void q_custom3dlabel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCustom3DLabel*
///
const QMetaObject* q_custom3dlabel_super_meta_object(const void* self);

/// @param self QCustom3DLabel*
/// @param param1 const char*
///
void* q_custom3dlabel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCustom3DLabel*
/// @param callback void* func(QCustom3DLabel* self, const char* param1)
///
void q_custom3dlabel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCustom3DLabel*
/// @param param1 const char*
///
void* q_custom3dlabel_super_metacast(void* self, const char* param1);

/// @param self QCustom3DLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_custom3dlabel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCustom3DLabel*
/// @param callback int32_t func(QCustom3DLabel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_custom3dlabel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCustom3DLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_custom3dlabel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_custom3dlabel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setText)
///
/// @param self QCustom3DLabel*
/// @param text const char*
///
void q_custom3dlabel_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DLabel*
///
const char* q_custom3dlabel_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setFont)
///
/// @param self QCustom3DLabel*
/// @param font QFont*
///
void q_custom3dlabel_set_font(void* self, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#font)
///
/// @param self const QCustom3DLabel*
///
QFont* q_custom3dlabel_font(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setTextColor)
///
/// @param self QCustom3DLabel*
/// @param color QColor*
///
void q_custom3dlabel_set_text_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#textColor)
///
/// @param self const QCustom3DLabel*
///
QColor* q_custom3dlabel_text_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setBackgroundColor)
///
/// @param self QCustom3DLabel*
/// @param color QColor*
///
void q_custom3dlabel_set_background_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#backgroundColor)
///
/// @param self const QCustom3DLabel*
///
QColor* q_custom3dlabel_background_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setBorderEnabled)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_set_border_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#isBorderEnabled)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_border_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setBackgroundEnabled)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_set_background_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#isBackgroundEnabled)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_background_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#setFacingCamera)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_set_facing_camera(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#isFacingCamera)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_facing_camera(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#textChanged)
///
/// @param self QCustom3DLabel*
/// @param text const char*
///
void q_custom3dlabel_text_changed(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#textChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, const char* text)
///
void q_custom3dlabel_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#fontChanged)
///
/// @param self QCustom3DLabel*
/// @param font QFont*
///
void q_custom3dlabel_font_changed(void* self, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#fontChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QFont* font)
///
void q_custom3dlabel_on_font_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#textColorChanged)
///
/// @param self QCustom3DLabel*
/// @param color QColor*
///
void q_custom3dlabel_text_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#textColorChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QColor* color)
///
void q_custom3dlabel_on_text_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#backgroundColorChanged)
///
/// @param self QCustom3DLabel*
/// @param color QColor*
///
void q_custom3dlabel_background_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#backgroundColorChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QColor* color)
///
void q_custom3dlabel_on_background_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#borderEnabledChanged)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_border_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#borderEnabledChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool enabled)
///
void q_custom3dlabel_on_border_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#backgroundEnabledChanged)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_background_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#backgroundEnabledChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool enabled)
///
void q_custom3dlabel_on_background_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#facingCameraChanged)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_facing_camera_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#facingCameraChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool enabled)
///
void q_custom3dlabel_on_facing_camera_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_custom3dlabel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_custom3dlabel_tr3(const char* s, const char* c, int n);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setMeshFile)
///
/// @param self QCustom3DLabel*
/// @param meshFile const char*
///
void q_custom3dlabel_set_mesh_file(void* self, const char* meshFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DLabel*
///
const char* q_custom3dlabel_mesh_file(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setTextureFile)
///
/// @param self QCustom3DLabel*
/// @param textureFile const char*
///
void q_custom3dlabel_set_texture_file(void* self, const char* textureFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DLabel*
///
const char* q_custom3dlabel_texture_file(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setPosition)
///
/// @param self QCustom3DLabel*
/// @param position QVector3D*
///
void q_custom3dlabel_set_position(void* self, const void* position);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#position)
///
/// @param self const QCustom3DLabel*
///
QVector3D* q_custom3dlabel_position(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setPositionAbsolute)
///
/// @param self QCustom3DLabel*
/// @param positionAbsolute bool
///
void q_custom3dlabel_set_position_absolute(void* self, bool positionAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isPositionAbsolute)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_position_absolute(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setScaling)
///
/// @param self QCustom3DLabel*
/// @param scaling QVector3D*
///
void q_custom3dlabel_set_scaling(void* self, const void* scaling);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scaling)
///
/// @param self const QCustom3DLabel*
///
QVector3D* q_custom3dlabel_scaling(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setScalingAbsolute)
///
/// @param self QCustom3DLabel*
/// @param scalingAbsolute bool
///
void q_custom3dlabel_set_scaling_absolute(void* self, bool scalingAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isScalingAbsolute)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_scaling_absolute(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setRotation)
///
/// @param self QCustom3DLabel*
/// @param rotation QQuaternion*
///
void q_custom3dlabel_set_rotation(void* self, const void* rotation);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotation)
///
/// @param self QCustom3DLabel*
///
QQuaternion* q_custom3dlabel_rotation(void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setVisible)
///
/// @param self QCustom3DLabel*
/// @param visible bool
///
void q_custom3dlabel_set_visible(void* self, bool visible);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isVisible)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_visible(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setShadowCasting)
///
/// @param self QCustom3DLabel*
/// @param enabled bool
///
void q_custom3dlabel_set_shadow_casting(void* self, bool enabled);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isShadowCasting)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_shadow_casting(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setRotationAxisAndAngle)
///
/// @param self QCustom3DLabel*
/// @param axis QVector3D*
/// @param angle float
///
void q_custom3dlabel_set_rotation_axis_and_angle(void* self, const void* axis, float angle);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setTextureImage)
///
/// @param self QCustom3DLabel*
/// @param textureImage QImage*
///
void q_custom3dlabel_set_texture_image(void* self, const void* textureImage);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFileChanged)
///
/// @param self QCustom3DLabel*
/// @param meshFile const char*
///
void q_custom3dlabel_mesh_file_changed(void* self, const char* meshFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFileChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, const char* meshFile)
///
void q_custom3dlabel_on_mesh_file_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFileChanged)
///
/// @param self QCustom3DLabel*
/// @param textureFile const char*
///
void q_custom3dlabel_texture_file_changed(void* self, const char* textureFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFileChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, const char* textureFile)
///
void q_custom3dlabel_on_texture_file_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionChanged)
///
/// @param self QCustom3DLabel*
/// @param position QVector3D*
///
void q_custom3dlabel_position_changed(void* self, const void* position);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QVector3D* position)
///
void q_custom3dlabel_on_position_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionAbsoluteChanged)
///
/// @param self QCustom3DLabel*
/// @param positionAbsolute bool
///
void q_custom3dlabel_position_absolute_changed(void* self, bool positionAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionAbsoluteChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool positionAbsolute)
///
void q_custom3dlabel_on_position_absolute_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingChanged)
///
/// @param self QCustom3DLabel*
/// @param scaling QVector3D*
///
void q_custom3dlabel_scaling_changed(void* self, const void* scaling);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QVector3D* scaling)
///
void q_custom3dlabel_on_scaling_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotationChanged)
///
/// @param self QCustom3DLabel*
/// @param rotation QQuaternion*
///
void q_custom3dlabel_rotation_changed(void* self, const void* rotation);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotationChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QQuaternion* rotation)
///
void q_custom3dlabel_on_rotation_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#visibleChanged)
///
/// @param self QCustom3DLabel*
/// @param visible bool
///
void q_custom3dlabel_visible_changed(void* self, bool visible);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#visibleChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool visible)
///
void q_custom3dlabel_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#shadowCastingChanged)
///
/// @param self QCustom3DLabel*
/// @param shadowCasting bool
///
void q_custom3dlabel_shadow_casting_changed(void* self, bool shadowCasting);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#shadowCastingChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool shadowCasting)
///
void q_custom3dlabel_on_shadow_casting_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingAbsoluteChanged)
///
/// @param self QCustom3DLabel*
/// @param scalingAbsolute bool
///
void q_custom3dlabel_scaling_absolute_changed(void* self, bool scalingAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingAbsoluteChanged)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, bool scalingAbsolute)
///
void q_custom3dlabel_on_scaling_absolute_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DLabel*
///
const char* q_custom3dlabel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCustom3DLabel*
/// @param name const char*
///
void q_custom3dlabel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCustom3DLabel*
/// @param b bool
///
bool q_custom3dlabel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCustom3DLabel*
///
QThread* q_custom3dlabel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCustom3DLabel*
/// @param thread QThread*
///
bool q_custom3dlabel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DLabel*
/// @param interval int
///
int32_t q_custom3dlabel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DLabel*
/// @param time int64_t of nanoseconds
///
int32_t q_custom3dlabel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCustom3DLabel*
/// @param id int
///
void q_custom3dlabel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCustom3DLabel*
/// @param id enum Qt__TimerId
///
void q_custom3dlabel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCustom3DLabel*
///
/// @return libqt_list of QObject*
///
libqt_list q_custom3dlabel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCustom3DLabel*
/// @param parent QObject*
///
void q_custom3dlabel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCustom3DLabel*
/// @param filterObj QObject*
///
void q_custom3dlabel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCustom3DLabel*
/// @param obj QObject*
///
void q_custom3dlabel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_custom3dlabel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_custom3dlabel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCustom3DLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_custom3dlabel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3dlabel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_custom3dlabel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DLabel*
///
bool q_custom3dlabel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DLabel*
/// @param receiver QObject*
///
bool q_custom3dlabel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_custom3dlabel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCustom3DLabel*
///
void q_custom3dlabel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCustom3DLabel*
///
void q_custom3dlabel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCustom3DLabel*
/// @param name const char*
/// @param value QVariant*
///
bool q_custom3dlabel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCustom3DLabel*
/// @param name const char*
///
QVariant* q_custom3dlabel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCustom3DLabel*
///
const char** q_custom3dlabel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCustom3DLabel*
///
QBindingStorage* q_custom3dlabel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCustom3DLabel*
///
const QBindingStorage* q_custom3dlabel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DLabel*
///
void q_custom3dlabel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self)
///
void q_custom3dlabel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCustom3DLabel*
///
QObject* q_custom3dlabel_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCustom3DLabel*
/// @param classname const char*
///
bool q_custom3dlabel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCustom3DLabel*
///
void q_custom3dlabel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DLabel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_custom3dlabel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DLabel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_custom3dlabel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_custom3dlabel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_custom3dlabel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCustom3DLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_custom3dlabel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DLabel*
/// @param signal const char*
///
bool q_custom3dlabel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DLabel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_custom3dlabel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DLabel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3dlabel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DLabel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3dlabel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DLabel*
/// @param param1 QObject*
///
void q_custom3dlabel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QObject* param1)
///
void q_custom3dlabel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QEvent*
///
bool q_custom3dlabel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QEvent*
///
bool q_custom3dlabel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback bool func(QCustom3DLabel* self, QEvent* event)
///
void q_custom3dlabel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_custom3dlabel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_custom3dlabel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback bool func(QCustom3DLabel* self, QObject* watched, QEvent* event)
///
void q_custom3dlabel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QTimerEvent*
///
void q_custom3dlabel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QTimerEvent*
///
void q_custom3dlabel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QTimerEvent* event)
///
void q_custom3dlabel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QChildEvent*
///
void q_custom3dlabel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QChildEvent*
///
void q_custom3dlabel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QChildEvent* event)
///
void q_custom3dlabel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QEvent*
///
void q_custom3dlabel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param event QEvent*
///
void q_custom3dlabel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QEvent* event)
///
void q_custom3dlabel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param signal QMetaMethod*
///
void q_custom3dlabel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param signal QMetaMethod*
///
void q_custom3dlabel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QMetaMethod* signal)
///
void q_custom3dlabel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param signal QMetaMethod*
///
void q_custom3dlabel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param signal QMetaMethod*
///
void q_custom3dlabel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, QMetaMethod* signal)
///
void q_custom3dlabel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DLabel*
///
QObject* q_custom3dlabel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DLabel*
///
QObject* q_custom3dlabel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback QObject* func(QCustom3DLabel* self)
///
void q_custom3dlabel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DLabel*
///
int32_t q_custom3dlabel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DLabel*
///
int32_t q_custom3dlabel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback int32_t func(QCustom3DLabel* self)
///
void q_custom3dlabel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DLabel*
/// @param signal const char*
///
int32_t q_custom3dlabel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DLabel*
/// @param signal const char*
///
int32_t q_custom3dlabel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback int32_t func(QCustom3DLabel* self, const char* signal)
///
void q_custom3dlabel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DLabel*
/// @param signal QMetaMethod*
///
bool q_custom3dlabel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DLabel*
/// @param signal QMetaMethod*
///
bool q_custom3dlabel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DLabel*
/// @param callback bool func(QCustom3DLabel* self, QMetaMethod* signal)
///
void q_custom3dlabel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCustom3DLabel*
/// @param callback void func(QCustom3DLabel* self, const char* objectName)
///
void q_custom3dlabel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dlabel-qtdatavis.html#dtor.QCustom3DLabel)
///
/// Delete this object from C++ memory.
///
/// @param self QCustom3DLabel*
///
void q_custom3dlabel_delete(void* self);

#endif
