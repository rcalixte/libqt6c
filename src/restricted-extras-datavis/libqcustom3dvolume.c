#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "libqcustom3ditem.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include "../libqvectornd.hpp"
#include "libqcustom3dvolume.hpp"
#include "libqcustom3dvolume.h"

QCustom3DVolume* q_custom3dvolume_new() {
    return QCustom3DVolume_New();
}

QCustom3DVolume* q_custom3dvolume_new2(const void* position, const void* scaling, const void* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list /* of unsigned char */ textureData, int32_t textureFormat, libqt_list /* of uint32_t */ colorTable) {
    return QCustom3DVolume_New2((QVector3D*)position, (QVector3D*)scaling, (QQuaternion*)rotation, textureWidth, textureHeight, textureDepth, textureData, textureFormat, colorTable);
}

QCustom3DVolume* q_custom3dvolume_new3(void* parent) {
    return QCustom3DVolume_New3((QObject*)parent);
}

QCustom3DVolume* q_custom3dvolume_new4(const void* position, const void* scaling, const void* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list /* of unsigned char */ textureData, int32_t textureFormat, libqt_list /* of uint32_t */ colorTable, void* parent) {
    return QCustom3DVolume_New4((QVector3D*)position, (QVector3D*)scaling, (QQuaternion*)rotation, textureWidth, textureHeight, textureDepth, textureData, textureFormat, colorTable, (QObject*)parent);
}

const QMetaObject* q_custom3dvolume_meta_object(const void* self) {
    return QCustom3DVolume_MetaObject((QCustom3DVolume*)self);
}

void q_custom3dvolume_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QCustom3DVolume_OnMetaObject((QCustom3DVolume*)self, (intptr_t)callback);
}

const QMetaObject* q_custom3dvolume_super_meta_object(const void* self) {
    return QCustom3DVolume_SuperMetaObject((QCustom3DVolume*)self);
}

void* q_custom3dvolume_metacast(void* self, const char* param1) {
    return QCustom3DVolume_Metacast((QCustom3DVolume*)self, param1);
}

void q_custom3dvolume_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCustom3DVolume_OnMetacast((QCustom3DVolume*)self, (intptr_t)callback);
}

void* q_custom3dvolume_super_metacast(void* self, const char* param1) {
    return QCustom3DVolume_SuperMetacast((QCustom3DVolume*)self, param1);
}

int32_t q_custom3dvolume_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCustom3DVolume_Metacall((QCustom3DVolume*)self, param1, param2, param3);
}

void q_custom3dvolume_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCustom3DVolume_OnMetacall((QCustom3DVolume*)self, (intptr_t)callback);
}

int32_t q_custom3dvolume_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCustom3DVolume_SuperMetacall((QCustom3DVolume*)self, param1, param2, param3);
}

const char* q_custom3dvolume_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dvolume_set_texture_width(void* self, int value) {
    QCustom3DVolume_SetTextureWidth((QCustom3DVolume*)self, value);
}

int32_t q_custom3dvolume_texture_width(const void* self) {
    return QCustom3DVolume_TextureWidth((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_texture_height(void* self, int value) {
    QCustom3DVolume_SetTextureHeight((QCustom3DVolume*)self, value);
}

int32_t q_custom3dvolume_texture_height(const void* self) {
    return QCustom3DVolume_TextureHeight((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_texture_depth(void* self, int value) {
    QCustom3DVolume_SetTextureDepth((QCustom3DVolume*)self, value);
}

int32_t q_custom3dvolume_texture_depth(const void* self) {
    return QCustom3DVolume_TextureDepth((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_texture_dimensions(void* self, int width, int height, int depth) {
    QCustom3DVolume_SetTextureDimensions((QCustom3DVolume*)self, width, height, depth);
}

int32_t q_custom3dvolume_texture_data_width(const void* self) {
    return QCustom3DVolume_TextureDataWidth((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_index_x(void* self, int value) {
    QCustom3DVolume_SetSliceIndexX((QCustom3DVolume*)self, value);
}

int32_t q_custom3dvolume_slice_index_x(const void* self) {
    return QCustom3DVolume_SliceIndexX((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_index_y(void* self, int value) {
    QCustom3DVolume_SetSliceIndexY((QCustom3DVolume*)self, value);
}

int32_t q_custom3dvolume_slice_index_y(const void* self) {
    return QCustom3DVolume_SliceIndexY((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_index_z(void* self, int value) {
    QCustom3DVolume_SetSliceIndexZ((QCustom3DVolume*)self, value);
}

int32_t q_custom3dvolume_slice_index_z(const void* self) {
    return QCustom3DVolume_SliceIndexZ((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_indices(void* self, int x, int y, int z) {
    QCustom3DVolume_SetSliceIndices((QCustom3DVolume*)self, x, y, z);
}

void q_custom3dvolume_set_color_table(void* self, libqt_list /* of uint32_t */ colors) {
    QCustom3DVolume_SetColorTable((QCustom3DVolume*)self, colors);
}

libqt_list /* of uint32_t */ q_custom3dvolume_color_table(const void* self) {
    libqt_list _arr = QCustom3DVolume_ColorTable((QCustom3DVolume*)self);
    return _arr;
}

void q_custom3dvolume_set_texture_data(void* self, libqt_list /* of unsigned char */ data) {
    QCustom3DVolume_SetTextureData((QCustom3DVolume*)self, data);
}

libqt_list /* of unsigned char */ q_custom3dvolume_create_texture_data(void* self, libqt_list /* of QImage* */ images) {
    libqt_list _arr = QCustom3DVolume_CreateTextureData((QCustom3DVolume*)self, images);
    return _arr;
}

libqt_list /* of unsigned char */ q_custom3dvolume_texture_data(const void* self) {
    libqt_list _arr = QCustom3DVolume_TextureData((QCustom3DVolume*)self);
    return _arr;
}

void q_custom3dvolume_set_sub_texture_data(void* self, int32_t axis, int index, unsigned char* data) {
    QCustom3DVolume_SetSubTextureData((QCustom3DVolume*)self, axis, index, data);
}

void q_custom3dvolume_set_sub_texture_data2(void* self, int32_t axis, int index, const void* image) {
    QCustom3DVolume_SetSubTextureData2((QCustom3DVolume*)self, axis, index, (QImage*)image);
}

void q_custom3dvolume_set_texture_format(void* self, int32_t format) {
    QCustom3DVolume_SetTextureFormat((QCustom3DVolume*)self, format);
}

int32_t q_custom3dvolume_texture_format(const void* self) {
    return QCustom3DVolume_TextureFormat((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_alpha_multiplier(void* self, float mult) {
    QCustom3DVolume_SetAlphaMultiplier((QCustom3DVolume*)self, mult);
}

float q_custom3dvolume_alpha_multiplier(const void* self) {
    return QCustom3DVolume_AlphaMultiplier((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_preserve_opacity(void* self, bool enable) {
    QCustom3DVolume_SetPreserveOpacity((QCustom3DVolume*)self, enable);
}

bool q_custom3dvolume_preserve_opacity(const void* self) {
    return QCustom3DVolume_PreserveOpacity((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_use_high_def_shader(void* self, bool enable) {
    QCustom3DVolume_SetUseHighDefShader((QCustom3DVolume*)self, enable);
}

bool q_custom3dvolume_use_high_def_shader(const void* self) {
    return QCustom3DVolume_UseHighDefShader((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_draw_slices(void* self, bool enable) {
    QCustom3DVolume_SetDrawSlices((QCustom3DVolume*)self, enable);
}

bool q_custom3dvolume_draw_slices(const void* self) {
    return QCustom3DVolume_DrawSlices((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_draw_slice_frames(void* self, bool enable) {
    QCustom3DVolume_SetDrawSliceFrames((QCustom3DVolume*)self, enable);
}

bool q_custom3dvolume_draw_slice_frames(const void* self) {
    return QCustom3DVolume_DrawSliceFrames((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_frame_color(void* self, const void* color) {
    QCustom3DVolume_SetSliceFrameColor((QCustom3DVolume*)self, (QColor*)color);
}

QColor* q_custom3dvolume_slice_frame_color(const void* self) {
    return QCustom3DVolume_SliceFrameColor((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_frame_widths(void* self, const void* values) {
    QCustom3DVolume_SetSliceFrameWidths((QCustom3DVolume*)self, (QVector3D*)values);
}

QVector3D* q_custom3dvolume_slice_frame_widths(const void* self) {
    return QCustom3DVolume_SliceFrameWidths((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_frame_gaps(void* self, const void* values) {
    QCustom3DVolume_SetSliceFrameGaps((QCustom3DVolume*)self, (QVector3D*)values);
}

QVector3D* q_custom3dvolume_slice_frame_gaps(const void* self) {
    return QCustom3DVolume_SliceFrameGaps((QCustom3DVolume*)self);
}

void q_custom3dvolume_set_slice_frame_thicknesses(void* self, const void* values) {
    QCustom3DVolume_SetSliceFrameThicknesses((QCustom3DVolume*)self, (QVector3D*)values);
}

QVector3D* q_custom3dvolume_slice_frame_thicknesses(const void* self) {
    return QCustom3DVolume_SliceFrameThicknesses((QCustom3DVolume*)self);
}

QImage* q_custom3dvolume_render_slice(void* self, int32_t axis, int index) {
    return QCustom3DVolume_RenderSlice((QCustom3DVolume*)self, axis, index);
}

void q_custom3dvolume_texture_width_changed(void* self, int value) {
    QCustom3DVolume_TextureWidthChanged((QCustom3DVolume*)self, value);
}

void q_custom3dvolume_on_texture_width_changed(void* self, void (*callback)(void*, int)) {
    QCustom3DVolume_Connect_TextureWidthChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_texture_height_changed(void* self, int value) {
    QCustom3DVolume_TextureHeightChanged((QCustom3DVolume*)self, value);
}

void q_custom3dvolume_on_texture_height_changed(void* self, void (*callback)(void*, int)) {
    QCustom3DVolume_Connect_TextureHeightChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_texture_depth_changed(void* self, int value) {
    QCustom3DVolume_TextureDepthChanged((QCustom3DVolume*)self, value);
}

void q_custom3dvolume_on_texture_depth_changed(void* self, void (*callback)(void*, int)) {
    QCustom3DVolume_Connect_TextureDepthChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_index_x_changed(void* self, int value) {
    QCustom3DVolume_SliceIndexXChanged((QCustom3DVolume*)self, value);
}

void q_custom3dvolume_on_slice_index_x_changed(void* self, void (*callback)(void*, int)) {
    QCustom3DVolume_Connect_SliceIndexXChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_index_y_changed(void* self, int value) {
    QCustom3DVolume_SliceIndexYChanged((QCustom3DVolume*)self, value);
}

void q_custom3dvolume_on_slice_index_y_changed(void* self, void (*callback)(void*, int)) {
    QCustom3DVolume_Connect_SliceIndexYChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_index_z_changed(void* self, int value) {
    QCustom3DVolume_SliceIndexZChanged((QCustom3DVolume*)self, value);
}

void q_custom3dvolume_on_slice_index_z_changed(void* self, void (*callback)(void*, int)) {
    QCustom3DVolume_Connect_SliceIndexZChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_color_table_changed(void* self) {
    QCustom3DVolume_ColorTableChanged((QCustom3DVolume*)self);
}

void q_custom3dvolume_on_color_table_changed(void* self, void (*callback)(void*)) {
    QCustom3DVolume_Connect_ColorTableChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_texture_data_changed(void* self, libqt_list /* of unsigned char */ data) {
    QCustom3DVolume_TextureDataChanged((QCustom3DVolume*)self, data);
}

void q_custom3dvolume_on_texture_data_changed(void* self, void (*callback)(void*, libqt_list /* of unsigned char */)) {
    QCustom3DVolume_Connect_TextureDataChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_texture_format_changed(void* self, int32_t format) {
    QCustom3DVolume_TextureFormatChanged((QCustom3DVolume*)self, format);
}

void q_custom3dvolume_on_texture_format_changed(void* self, void (*callback)(void*, int32_t)) {
    QCustom3DVolume_Connect_TextureFormatChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_alpha_multiplier_changed(void* self, float mult) {
    QCustom3DVolume_AlphaMultiplierChanged((QCustom3DVolume*)self, mult);
}

void q_custom3dvolume_on_alpha_multiplier_changed(void* self, void (*callback)(void*, float)) {
    QCustom3DVolume_Connect_AlphaMultiplierChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_preserve_opacity_changed(void* self, bool enabled) {
    QCustom3DVolume_PreserveOpacityChanged((QCustom3DVolume*)self, enabled);
}

void q_custom3dvolume_on_preserve_opacity_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DVolume_Connect_PreserveOpacityChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_use_high_def_shader_changed(void* self, bool enabled) {
    QCustom3DVolume_UseHighDefShaderChanged((QCustom3DVolume*)self, enabled);
}

void q_custom3dvolume_on_use_high_def_shader_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DVolume_Connect_UseHighDefShaderChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_draw_slices_changed(void* self, bool enabled) {
    QCustom3DVolume_DrawSlicesChanged((QCustom3DVolume*)self, enabled);
}

void q_custom3dvolume_on_draw_slices_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DVolume_Connect_DrawSlicesChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_draw_slice_frames_changed(void* self, bool enabled) {
    QCustom3DVolume_DrawSliceFramesChanged((QCustom3DVolume*)self, enabled);
}

void q_custom3dvolume_on_draw_slice_frames_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DVolume_Connect_DrawSliceFramesChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_frame_color_changed(void* self, const void* color) {
    QCustom3DVolume_SliceFrameColorChanged((QCustom3DVolume*)self, (QColor*)color);
}

void q_custom3dvolume_on_slice_frame_color_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DVolume_Connect_SliceFrameColorChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_frame_widths_changed(void* self, const void* values) {
    QCustom3DVolume_SliceFrameWidthsChanged((QCustom3DVolume*)self, (QVector3D*)values);
}

void q_custom3dvolume_on_slice_frame_widths_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DVolume_Connect_SliceFrameWidthsChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_frame_gaps_changed(void* self, const void* values) {
    QCustom3DVolume_SliceFrameGapsChanged((QCustom3DVolume*)self, (QVector3D*)values);
}

void q_custom3dvolume_on_slice_frame_gaps_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DVolume_Connect_SliceFrameGapsChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_slice_frame_thicknesses_changed(void* self, const void* values) {
    QCustom3DVolume_SliceFrameThicknessesChanged((QCustom3DVolume*)self, (QVector3D*)values);
}

void q_custom3dvolume_on_slice_frame_thicknesses_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DVolume_Connect_SliceFrameThicknessesChanged((QCustom3DVolume*)self, (intptr_t)callback);
}

const char* q_custom3dvolume_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_custom3dvolume_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dvolume_set_mesh_file(void* self, const char* meshFile) {
    QCustom3DItem_SetMeshFile((QCustom3DItem*)self, qstring(meshFile));
}

const char* q_custom3dvolume_mesh_file(const void* self) {
    libqt_string _str = QCustom3DItem_MeshFile((QCustom3DItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dvolume_set_texture_file(void* self, const char* textureFile) {
    QCustom3DItem_SetTextureFile((QCustom3DItem*)self, qstring(textureFile));
}

const char* q_custom3dvolume_texture_file(const void* self) {
    libqt_string _str = QCustom3DItem_TextureFile((QCustom3DItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dvolume_set_position(void* self, const void* position) {
    QCustom3DItem_SetPosition((QCustom3DItem*)self, (QVector3D*)position);
}

QVector3D* q_custom3dvolume_position(const void* self) {
    return QCustom3DItem_Position((QCustom3DItem*)self);
}

void q_custom3dvolume_set_position_absolute(void* self, bool positionAbsolute) {
    QCustom3DItem_SetPositionAbsolute((QCustom3DItem*)self, positionAbsolute);
}

bool q_custom3dvolume_is_position_absolute(const void* self) {
    return QCustom3DItem_IsPositionAbsolute((QCustom3DItem*)self);
}

void q_custom3dvolume_set_scaling(void* self, const void* scaling) {
    QCustom3DItem_SetScaling((QCustom3DItem*)self, (QVector3D*)scaling);
}

QVector3D* q_custom3dvolume_scaling(const void* self) {
    return QCustom3DItem_Scaling((QCustom3DItem*)self);
}

void q_custom3dvolume_set_scaling_absolute(void* self, bool scalingAbsolute) {
    QCustom3DItem_SetScalingAbsolute((QCustom3DItem*)self, scalingAbsolute);
}

bool q_custom3dvolume_is_scaling_absolute(const void* self) {
    return QCustom3DItem_IsScalingAbsolute((QCustom3DItem*)self);
}

void q_custom3dvolume_set_rotation(void* self, const void* rotation) {
    QCustom3DItem_SetRotation((QCustom3DItem*)self, (QQuaternion*)rotation);
}

QQuaternion* q_custom3dvolume_rotation(void* self) {
    return QCustom3DItem_Rotation((QCustom3DItem*)self);
}

void q_custom3dvolume_set_visible(void* self, bool visible) {
    QCustom3DItem_SetVisible((QCustom3DItem*)self, visible);
}

bool q_custom3dvolume_is_visible(const void* self) {
    return QCustom3DItem_IsVisible((QCustom3DItem*)self);
}

void q_custom3dvolume_set_shadow_casting(void* self, bool enabled) {
    QCustom3DItem_SetShadowCasting((QCustom3DItem*)self, enabled);
}

bool q_custom3dvolume_is_shadow_casting(const void* self) {
    return QCustom3DItem_IsShadowCasting((QCustom3DItem*)self);
}

void q_custom3dvolume_set_rotation_axis_and_angle(void* self, const void* axis, float angle) {
    QCustom3DItem_SetRotationAxisAndAngle((QCustom3DItem*)self, (QVector3D*)axis, angle);
}

void q_custom3dvolume_set_texture_image(void* self, const void* textureImage) {
    QCustom3DItem_SetTextureImage((QCustom3DItem*)self, (QImage*)textureImage);
}

void q_custom3dvolume_mesh_file_changed(void* self, const char* meshFile) {
    QCustom3DItem_MeshFileChanged((QCustom3DItem*)self, qstring(meshFile));
}

void q_custom3dvolume_on_mesh_file_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DItem_Connect_MeshFileChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_texture_file_changed(void* self, const char* textureFile) {
    QCustom3DItem_TextureFileChanged((QCustom3DItem*)self, qstring(textureFile));
}

void q_custom3dvolume_on_texture_file_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DItem_Connect_TextureFileChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_position_changed(void* self, const void* position) {
    QCustom3DItem_PositionChanged((QCustom3DItem*)self, (QVector3D*)position);
}

void q_custom3dvolume_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_PositionChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_position_absolute_changed(void* self, bool positionAbsolute) {
    QCustom3DItem_PositionAbsoluteChanged((QCustom3DItem*)self, positionAbsolute);
}

void q_custom3dvolume_on_position_absolute_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_PositionAbsoluteChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_scaling_changed(void* self, const void* scaling) {
    QCustom3DItem_ScalingChanged((QCustom3DItem*)self, (QVector3D*)scaling);
}

void q_custom3dvolume_on_scaling_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_ScalingChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_rotation_changed(void* self, const void* rotation) {
    QCustom3DItem_RotationChanged((QCustom3DItem*)self, (QQuaternion*)rotation);
}

void q_custom3dvolume_on_rotation_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_RotationChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_visible_changed(void* self, bool visible) {
    QCustom3DItem_VisibleChanged((QCustom3DItem*)self, visible);
}

void q_custom3dvolume_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_VisibleChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_shadow_casting_changed(void* self, bool shadowCasting) {
    QCustom3DItem_ShadowCastingChanged((QCustom3DItem*)self, shadowCasting);
}

void q_custom3dvolume_on_shadow_casting_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_ShadowCastingChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dvolume_scaling_absolute_changed(void* self, bool scalingAbsolute) {
    QCustom3DItem_ScalingAbsoluteChanged((QCustom3DItem*)self, scalingAbsolute);
}

void q_custom3dvolume_on_scaling_absolute_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_ScalingAbsoluteChanged((QCustom3DItem*)self, (intptr_t)callback);
}

const char* q_custom3dvolume_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dvolume_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_custom3dvolume_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_custom3dvolume_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_custom3dvolume_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_custom3dvolume_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_custom3dvolume_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_custom3dvolume_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_custom3dvolume_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_custom3dvolume_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_custom3dvolume_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_custom3dvolume_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_custom3dvolume_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_custom3dvolume_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_custom3dvolume_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_custom3dvolume_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_custom3dvolume_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_custom3dvolume_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_custom3dvolume_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_custom3dvolume_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_custom3dvolume_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_custom3dvolume_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_custom3dvolume_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_custom3dvolume_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_custom3dvolume_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_custom3dvolume_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_custom3dvolume_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_custom3dvolume_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_custom3dvolume_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_custom3dvolume_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_custom3dvolume_dynamic_property_names\n");
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

QBindingStorage* q_custom3dvolume_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_custom3dvolume_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_custom3dvolume_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_custom3dvolume_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_custom3dvolume_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_custom3dvolume_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_custom3dvolume_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_custom3dvolume_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_custom3dvolume_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_custom3dvolume_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_custom3dvolume_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_custom3dvolume_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_custom3dvolume_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_custom3dvolume_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_custom3dvolume_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_custom3dvolume_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_custom3dvolume_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_custom3dvolume_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_custom3dvolume_event(void* self, void* event) {
    return QCustom3DVolume_Event((QCustom3DVolume*)self, (QEvent*)event);
}

bool q_custom3dvolume_super_event(void* self, void* event) {
    return QCustom3DVolume_SuperEvent((QCustom3DVolume*)self, (QEvent*)event);
}

void q_custom3dvolume_on_event(void* self, bool (*callback)(void*, void*)) {
    QCustom3DVolume_OnEvent((QCustom3DVolume*)self, (intptr_t)callback);
}

bool q_custom3dvolume_event_filter(void* self, void* watched, void* event) {
    return QCustom3DVolume_EventFilter((QCustom3DVolume*)self, (QObject*)watched, (QEvent*)event);
}

bool q_custom3dvolume_super_event_filter(void* self, void* watched, void* event) {
    return QCustom3DVolume_SuperEventFilter((QCustom3DVolume*)self, (QObject*)watched, (QEvent*)event);
}

void q_custom3dvolume_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCustom3DVolume_OnEventFilter((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_timer_event(void* self, void* event) {
    QCustom3DVolume_TimerEvent((QCustom3DVolume*)self, (QTimerEvent*)event);
}

void q_custom3dvolume_super_timer_event(void* self, void* event) {
    QCustom3DVolume_SuperTimerEvent((QCustom3DVolume*)self, (QTimerEvent*)event);
}

void q_custom3dvolume_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DVolume_OnTimerEvent((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_child_event(void* self, void* event) {
    QCustom3DVolume_ChildEvent((QCustom3DVolume*)self, (QChildEvent*)event);
}

void q_custom3dvolume_super_child_event(void* self, void* event) {
    QCustom3DVolume_SuperChildEvent((QCustom3DVolume*)self, (QChildEvent*)event);
}

void q_custom3dvolume_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DVolume_OnChildEvent((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_custom_event(void* self, void* event) {
    QCustom3DVolume_CustomEvent((QCustom3DVolume*)self, (QEvent*)event);
}

void q_custom3dvolume_super_custom_event(void* self, void* event) {
    QCustom3DVolume_SuperCustomEvent((QCustom3DVolume*)self, (QEvent*)event);
}

void q_custom3dvolume_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DVolume_OnCustomEvent((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_connect_notify(void* self, const void* signal) {
    QCustom3DVolume_ConnectNotify((QCustom3DVolume*)self, (QMetaMethod*)signal);
}

void q_custom3dvolume_super_connect_notify(void* self, const void* signal) {
    QCustom3DVolume_SuperConnectNotify((QCustom3DVolume*)self, (QMetaMethod*)signal);
}

void q_custom3dvolume_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QCustom3DVolume_OnConnectNotify((QCustom3DVolume*)self, (intptr_t)callback);
}

void q_custom3dvolume_disconnect_notify(void* self, const void* signal) {
    QCustom3DVolume_DisconnectNotify((QCustom3DVolume*)self, (QMetaMethod*)signal);
}

void q_custom3dvolume_super_disconnect_notify(void* self, const void* signal) {
    QCustom3DVolume_SuperDisconnectNotify((QCustom3DVolume*)self, (QMetaMethod*)signal);
}

void q_custom3dvolume_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QCustom3DVolume_OnDisconnectNotify((QCustom3DVolume*)self, (intptr_t)callback);
}

QObject* q_custom3dvolume_sender(const void* self) {
    return QCustom3DVolume_Sender((QCustom3DVolume*)self);
}

int32_t q_custom3dvolume_sender_signal_index(const void* self) {
    return QCustom3DVolume_SenderSignalIndex((QCustom3DVolume*)self);
}

int32_t q_custom3dvolume_receivers(const void* self, const char* signal) {
    return QCustom3DVolume_Receivers((QCustom3DVolume*)self, signal);
}

bool q_custom3dvolume_is_signal_connected(const void* self, const void* signal) {
    return QCustom3DVolume_IsSignalConnected((QCustom3DVolume*)self, (QMetaMethod*)signal);
}

void q_custom3dvolume_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_custom3dvolume_delete(void* self) {
    QCustom3DVolume_Delete((QCustom3DVolume*)(self));
}
