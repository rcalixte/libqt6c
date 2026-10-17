#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DVOLUME_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DVOLUME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html)

/// q_custom3dvolume_new constructs a new QCustom3DVolume object.
///
QCustom3DVolume* q_custom3dvolume_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html)

/// q_custom3dvolume_new2 constructs a new QCustom3DVolume object.
///
/// @param position QVector3D*
/// @param scaling QVector3D*
/// @param rotation QQuaternion*
/// @param textureWidth int
/// @param textureHeight int
/// @param textureDepth int
/// @param textureData libqt_list of unsigned char
/// @param textureFormat enum QImage__Format
/// @param colorTable libqt_list of uint32_t
///
QCustom3DVolume* q_custom3dvolume_new2(const void* position, const void* scaling, const void* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list textureData, int32_t textureFormat, libqt_list colorTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html)

/// q_custom3dvolume_new3 constructs a new QCustom3DVolume object.
///
/// @param parent QObject*
///
QCustom3DVolume* q_custom3dvolume_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html)

/// q_custom3dvolume_new4 constructs a new QCustom3DVolume object.
///
/// @param position QVector3D*
/// @param scaling QVector3D*
/// @param rotation QQuaternion*
/// @param textureWidth int
/// @param textureHeight int
/// @param textureDepth int
/// @param textureData libqt_list of unsigned char
/// @param textureFormat enum QImage__Format
/// @param colorTable libqt_list of uint32_t
/// @param parent QObject*
///
QCustom3DVolume* q_custom3dvolume_new4(const void* position, const void* scaling, const void* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list textureData, int32_t textureFormat, libqt_list colorTable, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCustom3DVolume*
///
const QMetaObject* q_custom3dvolume_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCustom3DVolume*
/// @param callback const QMetaObject* func(const QCustom3DVolume* self)
///
void q_custom3dvolume_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCustom3DVolume*
///
const QMetaObject* q_custom3dvolume_super_meta_object(const void* self);

/// @param self QCustom3DVolume*
/// @param param1 const char*
///
void* q_custom3dvolume_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCustom3DVolume*
/// @param callback void* func(QCustom3DVolume* self, const char* param1)
///
void q_custom3dvolume_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCustom3DVolume*
/// @param param1 const char*
///
void* q_custom3dvolume_super_metacast(void* self, const char* param1);

/// @param self QCustom3DVolume*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_custom3dvolume_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCustom3DVolume*
/// @param callback int32_t func(QCustom3DVolume* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_custom3dvolume_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCustom3DVolume*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_custom3dvolume_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_custom3dvolume_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureWidth)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_set_texture_width(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureWidth)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_texture_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureHeight)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_set_texture_height(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureHeight)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_texture_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureDepth)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_set_texture_depth(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDepth)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_texture_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureDimensions)
///
/// @param self QCustom3DVolume*
/// @param width int
/// @param height int
/// @param depth int
///
void q_custom3dvolume_set_texture_dimensions(void* self, int width, int height, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDataWidth)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_texture_data_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndexX)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_set_slice_index_x(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexX)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_slice_index_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndexY)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_set_slice_index_y(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexY)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_slice_index_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndexZ)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_set_slice_index_z(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexZ)
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_slice_index_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceIndices)
///
/// @param self QCustom3DVolume*
/// @param x int
/// @param y int
/// @param z int
///
void q_custom3dvolume_set_slice_indices(void* self, int x, int y, int z);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setColorTable)
///
/// @param self QCustom3DVolume*
/// @param colors libqt_list of uint32_t
///
void q_custom3dvolume_set_color_table(void* self, libqt_list colors);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#colorTable)
///
/// @param self const QCustom3DVolume*
///
/// @return libqt_list of uint32_t
///
libqt_list q_custom3dvolume_color_table(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureData)
///
/// @param self QCustom3DVolume*
/// @param data libqt_list of unsigned char
///
void q_custom3dvolume_set_texture_data(void* self, libqt_list data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#createTextureData)
///
/// @param self QCustom3DVolume*
/// @param images libqt_list of QImage*
///
/// @return libqt_list of unsigned char
///
libqt_list q_custom3dvolume_create_texture_data(void* self, libqt_list images);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureData)
///
/// @param self const QCustom3DVolume*
///
/// @return libqt_list of unsigned char
///
libqt_list q_custom3dvolume_texture_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSubTextureData)
///
/// @param self QCustom3DVolume*
/// @param axis enum Qt__Axis
/// @param index int
/// @param data unsigned char*
///
void q_custom3dvolume_set_sub_texture_data(void* self, int32_t axis, int index, unsigned char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSubTextureData)
///
/// @param self QCustom3DVolume*
/// @param axis enum Qt__Axis
/// @param index int
/// @param image QImage*
///
void q_custom3dvolume_set_sub_texture_data2(void* self, int32_t axis, int index, const void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setTextureFormat)
///
/// @param self QCustom3DVolume*
/// @param format enum QImage__Format
///
void q_custom3dvolume_set_texture_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureFormat)
///
/// @param self const QCustom3DVolume*
///
/// @return enum QImage__Format
///
int32_t q_custom3dvolume_texture_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setAlphaMultiplier)
///
/// @param self QCustom3DVolume*
/// @param mult float
///
void q_custom3dvolume_set_alpha_multiplier(void* self, float mult);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#alphaMultiplier)
///
/// @param self const QCustom3DVolume*
///
float q_custom3dvolume_alpha_multiplier(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setPreserveOpacity)
///
/// @param self QCustom3DVolume*
/// @param enable bool
///
void q_custom3dvolume_set_preserve_opacity(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#preserveOpacity)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_preserve_opacity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setUseHighDefShader)
///
/// @param self QCustom3DVolume*
/// @param enable bool
///
void q_custom3dvolume_set_use_high_def_shader(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#useHighDefShader)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_use_high_def_shader(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setDrawSlices)
///
/// @param self QCustom3DVolume*
/// @param enable bool
///
void q_custom3dvolume_set_draw_slices(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSlices)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_draw_slices(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setDrawSliceFrames)
///
/// @param self QCustom3DVolume*
/// @param enable bool
///
void q_custom3dvolume_set_draw_slice_frames(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSliceFrames)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_draw_slice_frames(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameColor)
///
/// @param self QCustom3DVolume*
/// @param color QColor*
///
void q_custom3dvolume_set_slice_frame_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameColor)
///
/// @param self const QCustom3DVolume*
///
QColor* q_custom3dvolume_slice_frame_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameWidths)
///
/// @param self QCustom3DVolume*
/// @param values QVector3D*
///
void q_custom3dvolume_set_slice_frame_widths(void* self, const void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameWidths)
///
/// @param self const QCustom3DVolume*
///
QVector3D* q_custom3dvolume_slice_frame_widths(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameGaps)
///
/// @param self QCustom3DVolume*
/// @param values QVector3D*
///
void q_custom3dvolume_set_slice_frame_gaps(void* self, const void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameGaps)
///
/// @param self const QCustom3DVolume*
///
QVector3D* q_custom3dvolume_slice_frame_gaps(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#setSliceFrameThicknesses)
///
/// @param self QCustom3DVolume*
/// @param values QVector3D*
///
void q_custom3dvolume_set_slice_frame_thicknesses(void* self, const void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameThicknesses)
///
/// @param self const QCustom3DVolume*
///
QVector3D* q_custom3dvolume_slice_frame_thicknesses(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#renderSlice)
///
/// @param self QCustom3DVolume*
/// @param axis enum Qt__Axis
/// @param index int
///
QImage* q_custom3dvolume_render_slice(void* self, int32_t axis, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureWidthChanged)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_texture_width_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureWidthChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, int value)
///
void q_custom3dvolume_on_texture_width_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureHeightChanged)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_texture_height_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureHeightChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, int value)
///
void q_custom3dvolume_on_texture_height_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDepthChanged)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_texture_depth_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDepthChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, int value)
///
void q_custom3dvolume_on_texture_depth_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexXChanged)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_slice_index_x_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexXChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, int value)
///
void q_custom3dvolume_on_slice_index_x_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexYChanged)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_slice_index_y_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexYChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, int value)
///
void q_custom3dvolume_on_slice_index_y_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexZChanged)
///
/// @param self QCustom3DVolume*
/// @param value int
///
void q_custom3dvolume_slice_index_z_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceIndexZChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, int value)
///
void q_custom3dvolume_on_slice_index_z_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#colorTableChanged)
///
/// @param self QCustom3DVolume*
///
void q_custom3dvolume_color_table_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#colorTableChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self)
///
void q_custom3dvolume_on_color_table_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDataChanged)
///
/// @param self QCustom3DVolume*
/// @param data libqt_list of unsigned char
///
void q_custom3dvolume_texture_data_changed(void* self, libqt_list data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureDataChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, libqt_list of unsigned char data)
///
void q_custom3dvolume_on_texture_data_changed(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureFormatChanged)
///
/// @param self QCustom3DVolume*
/// @param format enum QImage__Format
///
void q_custom3dvolume_texture_format_changed(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#textureFormatChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, enum QImage__Format format)
///
void q_custom3dvolume_on_texture_format_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#alphaMultiplierChanged)
///
/// @param self QCustom3DVolume*
/// @param mult float
///
void q_custom3dvolume_alpha_multiplier_changed(void* self, float mult);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#alphaMultiplierChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, float mult)
///
void q_custom3dvolume_on_alpha_multiplier_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#preserveOpacityChanged)
///
/// @param self QCustom3DVolume*
/// @param enabled bool
///
void q_custom3dvolume_preserve_opacity_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#preserveOpacityChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool enabled)
///
void q_custom3dvolume_on_preserve_opacity_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#useHighDefShaderChanged)
///
/// @param self QCustom3DVolume*
/// @param enabled bool
///
void q_custom3dvolume_use_high_def_shader_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#useHighDefShaderChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool enabled)
///
void q_custom3dvolume_on_use_high_def_shader_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSlicesChanged)
///
/// @param self QCustom3DVolume*
/// @param enabled bool
///
void q_custom3dvolume_draw_slices_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSlicesChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool enabled)
///
void q_custom3dvolume_on_draw_slices_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSliceFramesChanged)
///
/// @param self QCustom3DVolume*
/// @param enabled bool
///
void q_custom3dvolume_draw_slice_frames_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#drawSliceFramesChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool enabled)
///
void q_custom3dvolume_on_draw_slice_frames_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameColorChanged)
///
/// @param self QCustom3DVolume*
/// @param color QColor*
///
void q_custom3dvolume_slice_frame_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameColorChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QColor* color)
///
void q_custom3dvolume_on_slice_frame_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameWidthsChanged)
///
/// @param self QCustom3DVolume*
/// @param values QVector3D*
///
void q_custom3dvolume_slice_frame_widths_changed(void* self, const void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameWidthsChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QVector3D* values)
///
void q_custom3dvolume_on_slice_frame_widths_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameGapsChanged)
///
/// @param self QCustom3DVolume*
/// @param values QVector3D*
///
void q_custom3dvolume_slice_frame_gaps_changed(void* self, const void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameGapsChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QVector3D* values)
///
void q_custom3dvolume_on_slice_frame_gaps_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameThicknessesChanged)
///
/// @param self QCustom3DVolume*
/// @param values QVector3D*
///
void q_custom3dvolume_slice_frame_thicknesses_changed(void* self, const void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#sliceFrameThicknessesChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QVector3D* values)
///
void q_custom3dvolume_on_slice_frame_thicknesses_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_custom3dvolume_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_custom3dvolume_tr3(const char* s, const char* c, int n);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setMeshFile)
///
/// @param self QCustom3DVolume*
/// @param meshFile const char*
///
void q_custom3dvolume_set_mesh_file(void* self, const char* meshFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DVolume*
///
const char* q_custom3dvolume_mesh_file(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setTextureFile)
///
/// @param self QCustom3DVolume*
/// @param textureFile const char*
///
void q_custom3dvolume_set_texture_file(void* self, const char* textureFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DVolume*
///
const char* q_custom3dvolume_texture_file(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setPosition)
///
/// @param self QCustom3DVolume*
/// @param position QVector3D*
///
void q_custom3dvolume_set_position(void* self, const void* position);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#position)
///
/// @param self const QCustom3DVolume*
///
QVector3D* q_custom3dvolume_position(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setPositionAbsolute)
///
/// @param self QCustom3DVolume*
/// @param positionAbsolute bool
///
void q_custom3dvolume_set_position_absolute(void* self, bool positionAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isPositionAbsolute)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_position_absolute(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setScaling)
///
/// @param self QCustom3DVolume*
/// @param scaling QVector3D*
///
void q_custom3dvolume_set_scaling(void* self, const void* scaling);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scaling)
///
/// @param self const QCustom3DVolume*
///
QVector3D* q_custom3dvolume_scaling(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setScalingAbsolute)
///
/// @param self QCustom3DVolume*
/// @param scalingAbsolute bool
///
void q_custom3dvolume_set_scaling_absolute(void* self, bool scalingAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isScalingAbsolute)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_scaling_absolute(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setRotation)
///
/// @param self QCustom3DVolume*
/// @param rotation QQuaternion*
///
void q_custom3dvolume_set_rotation(void* self, const void* rotation);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotation)
///
/// @param self QCustom3DVolume*
///
QQuaternion* q_custom3dvolume_rotation(void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setVisible)
///
/// @param self QCustom3DVolume*
/// @param visible bool
///
void q_custom3dvolume_set_visible(void* self, bool visible);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isVisible)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_visible(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setShadowCasting)
///
/// @param self QCustom3DVolume*
/// @param enabled bool
///
void q_custom3dvolume_set_shadow_casting(void* self, bool enabled);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#isShadowCasting)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_shadow_casting(const void* self);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setRotationAxisAndAngle)
///
/// @param self QCustom3DVolume*
/// @param axis QVector3D*
/// @param angle float
///
void q_custom3dvolume_set_rotation_axis_and_angle(void* self, const void* axis, float angle);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#setTextureImage)
///
/// @param self QCustom3DVolume*
/// @param textureImage QImage*
///
void q_custom3dvolume_set_texture_image(void* self, const void* textureImage);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFileChanged)
///
/// @param self QCustom3DVolume*
/// @param meshFile const char*
///
void q_custom3dvolume_mesh_file_changed(void* self, const char* meshFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#meshFileChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, const char* meshFile)
///
void q_custom3dvolume_on_mesh_file_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFileChanged)
///
/// @param self QCustom3DVolume*
/// @param textureFile const char*
///
void q_custom3dvolume_texture_file_changed(void* self, const char* textureFile);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#textureFileChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, const char* textureFile)
///
void q_custom3dvolume_on_texture_file_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionChanged)
///
/// @param self QCustom3DVolume*
/// @param position QVector3D*
///
void q_custom3dvolume_position_changed(void* self, const void* position);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QVector3D* position)
///
void q_custom3dvolume_on_position_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionAbsoluteChanged)
///
/// @param self QCustom3DVolume*
/// @param positionAbsolute bool
///
void q_custom3dvolume_position_absolute_changed(void* self, bool positionAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#positionAbsoluteChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool positionAbsolute)
///
void q_custom3dvolume_on_position_absolute_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingChanged)
///
/// @param self QCustom3DVolume*
/// @param scaling QVector3D*
///
void q_custom3dvolume_scaling_changed(void* self, const void* scaling);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QVector3D* scaling)
///
void q_custom3dvolume_on_scaling_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotationChanged)
///
/// @param self QCustom3DVolume*
/// @param rotation QQuaternion*
///
void q_custom3dvolume_rotation_changed(void* self, const void* rotation);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#rotationChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QQuaternion* rotation)
///
void q_custom3dvolume_on_rotation_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#visibleChanged)
///
/// @param self QCustom3DVolume*
/// @param visible bool
///
void q_custom3dvolume_visible_changed(void* self, bool visible);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#visibleChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool visible)
///
void q_custom3dvolume_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#shadowCastingChanged)
///
/// @param self QCustom3DVolume*
/// @param shadowCasting bool
///
void q_custom3dvolume_shadow_casting_changed(void* self, bool shadowCasting);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#shadowCastingChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool shadowCasting)
///
void q_custom3dvolume_on_shadow_casting_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingAbsoluteChanged)
///
/// @param self QCustom3DVolume*
/// @param scalingAbsolute bool
///
void q_custom3dvolume_scaling_absolute_changed(void* self, bool scalingAbsolute);

/// Inherited from QCustom3DItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3ditem.html#scalingAbsoluteChanged)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, bool scalingAbsolute)
///
void q_custom3dvolume_on_scaling_absolute_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCustom3DVolume*
///
const char* q_custom3dvolume_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCustom3DVolume*
/// @param name const char*
///
void q_custom3dvolume_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCustom3DVolume*
/// @param b bool
///
bool q_custom3dvolume_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCustom3DVolume*
///
QThread* q_custom3dvolume_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCustom3DVolume*
/// @param thread QThread*
///
bool q_custom3dvolume_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DVolume*
/// @param interval int
///
int32_t q_custom3dvolume_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DVolume*
/// @param time int64_t of nanoseconds
///
int32_t q_custom3dvolume_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCustom3DVolume*
/// @param id int
///
void q_custom3dvolume_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCustom3DVolume*
/// @param id enum Qt__TimerId
///
void q_custom3dvolume_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCustom3DVolume*
///
/// @return libqt_list of QObject*
///
libqt_list q_custom3dvolume_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCustom3DVolume*
/// @param parent QObject*
///
void q_custom3dvolume_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCustom3DVolume*
/// @param filterObj QObject*
///
void q_custom3dvolume_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCustom3DVolume*
/// @param obj QObject*
///
void q_custom3dvolume_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_custom3dvolume_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_custom3dvolume_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCustom3DVolume*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_custom3dvolume_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3dvolume_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_custom3dvolume_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DVolume*
///
bool q_custom3dvolume_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DVolume*
/// @param receiver QObject*
///
bool q_custom3dvolume_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_custom3dvolume_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCustom3DVolume*
///
void q_custom3dvolume_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCustom3DVolume*
///
void q_custom3dvolume_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCustom3DVolume*
/// @param name const char*
/// @param value QVariant*
///
bool q_custom3dvolume_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCustom3DVolume*
/// @param name const char*
///
QVariant* q_custom3dvolume_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCustom3DVolume*
///
const char** q_custom3dvolume_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCustom3DVolume*
///
QBindingStorage* q_custom3dvolume_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCustom3DVolume*
///
const QBindingStorage* q_custom3dvolume_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DVolume*
///
void q_custom3dvolume_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self)
///
void q_custom3dvolume_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCustom3DVolume*
///
QObject* q_custom3dvolume_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCustom3DVolume*
/// @param classname const char*
///
bool q_custom3dvolume_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCustom3DVolume*
///
void q_custom3dvolume_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DVolume*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_custom3dvolume_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCustom3DVolume*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_custom3dvolume_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_custom3dvolume_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_custom3dvolume_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCustom3DVolume*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_custom3dvolume_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DVolume*
/// @param signal const char*
///
bool q_custom3dvolume_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DVolume*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_custom3dvolume_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DVolume*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3dvolume_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCustom3DVolume*
/// @param receiver QObject*
/// @param member const char*
///
bool q_custom3dvolume_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DVolume*
/// @param param1 QObject*
///
void q_custom3dvolume_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QObject* param1)
///
void q_custom3dvolume_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QEvent*
///
bool q_custom3dvolume_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QEvent*
///
bool q_custom3dvolume_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback bool func(QCustom3DVolume* self, QEvent* event)
///
void q_custom3dvolume_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_custom3dvolume_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_custom3dvolume_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback bool func(QCustom3DVolume* self, QObject* watched, QEvent* event)
///
void q_custom3dvolume_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QTimerEvent*
///
void q_custom3dvolume_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QTimerEvent*
///
void q_custom3dvolume_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QTimerEvent* event)
///
void q_custom3dvolume_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QChildEvent*
///
void q_custom3dvolume_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QChildEvent*
///
void q_custom3dvolume_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QChildEvent* event)
///
void q_custom3dvolume_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QEvent*
///
void q_custom3dvolume_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param event QEvent*
///
void q_custom3dvolume_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QEvent* event)
///
void q_custom3dvolume_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param signal QMetaMethod*
///
void q_custom3dvolume_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param signal QMetaMethod*
///
void q_custom3dvolume_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QMetaMethod* signal)
///
void q_custom3dvolume_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param signal QMetaMethod*
///
void q_custom3dvolume_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param signal QMetaMethod*
///
void q_custom3dvolume_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, QMetaMethod* signal)
///
void q_custom3dvolume_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DVolume*
///
QObject* q_custom3dvolume_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DVolume*
///
QObject* q_custom3dvolume_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback QObject* func(QCustom3DVolume* self)
///
void q_custom3dvolume_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DVolume*
///
int32_t q_custom3dvolume_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback int32_t func(QCustom3DVolume* self)
///
void q_custom3dvolume_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DVolume*
/// @param signal const char*
///
int32_t q_custom3dvolume_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DVolume*
/// @param signal const char*
///
int32_t q_custom3dvolume_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback int32_t func(QCustom3DVolume* self, const char* signal)
///
void q_custom3dvolume_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCustom3DVolume*
/// @param signal QMetaMethod*
///
bool q_custom3dvolume_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCustom3DVolume*
/// @param signal QMetaMethod*
///
bool q_custom3dvolume_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCustom3DVolume*
/// @param callback bool func(QCustom3DVolume* self, QMetaMethod* signal)
///
void q_custom3dvolume_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCustom3DVolume*
/// @param callback void func(QCustom3DVolume* self, const char* objectName)
///
void q_custom3dvolume_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcustom3dvolume-qtdatavis.html#dtor.QCustom3DVolume)
///
/// Delete this object from C++ memory.
///
/// @param self QCustom3DVolume*
///
void q_custom3dvolume_delete(void* self);

#endif
