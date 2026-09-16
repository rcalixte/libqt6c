#include "libqsgmaterial.hpp"
#include "libqsgmaterialshader.hpp"
#include "libqsgtexture.hpp"
#include "libqsgtexturematerial.hpp"
#include "libqsgtexturematerial.h"

QSGOpaqueTextureMaterial* q_sgopaquetexturematerial_new() {
    return QSGOpaqueTextureMaterial_New();
}

QSGMaterialType* q_sgopaquetexturematerial_type(void* self) {
    return QSGOpaqueTextureMaterial_Type((QSGOpaqueTextureMaterial*)self);
}

void q_sgopaquetexturematerial_on_type(void* self, QSGMaterialType* (*callback)()) {
    QSGOpaqueTextureMaterial_OnType((QSGOpaqueTextureMaterial*)self, (intptr_t)callback);
}

QSGMaterialType* q_sgopaquetexturematerial_super_type(void* self) {
    return QSGOpaqueTextureMaterial_SuperType((QSGOpaqueTextureMaterial*)self);
}

QSGMaterialShader* q_sgopaquetexturematerial_create_shader(void* self, int32_t renderMode) {
    return QSGOpaqueTextureMaterial_CreateShader((QSGOpaqueTextureMaterial*)self, renderMode);
}

void q_sgopaquetexturematerial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t)) {
    QSGOpaqueTextureMaterial_OnCreateShader((QSGOpaqueTextureMaterial*)self, (intptr_t)callback);
}

QSGMaterialShader* q_sgopaquetexturematerial_super_create_shader(void* self, int32_t renderMode) {
    return QSGOpaqueTextureMaterial_SuperCreateShader((QSGOpaqueTextureMaterial*)self, renderMode);
}

int32_t q_sgopaquetexturematerial_compare(void* self, void* other) {
    return QSGOpaqueTextureMaterial_Compare((QSGOpaqueTextureMaterial*)self, (QSGMaterial*)other);
}

void q_sgopaquetexturematerial_on_compare(void* self, int32_t (*callback)(void*, void*)) {
    QSGOpaqueTextureMaterial_OnCompare((QSGOpaqueTextureMaterial*)self, (intptr_t)callback);
}

int32_t q_sgopaquetexturematerial_super_compare(void* self, void* other) {
    return QSGOpaqueTextureMaterial_SuperCompare((QSGOpaqueTextureMaterial*)self, (QSGMaterial*)other);
}

void q_sgopaquetexturematerial_set_texture(void* self, void* texture) {
    QSGOpaqueTextureMaterial_SetTexture((QSGOpaqueTextureMaterial*)self, (QSGTexture*)texture);
}

QSGTexture* q_sgopaquetexturematerial_texture(void* self) {
    return QSGOpaqueTextureMaterial_Texture((QSGOpaqueTextureMaterial*)self);
}

void q_sgopaquetexturematerial_set_mipmap_filtering(void* self, int32_t filteringType) {
    QSGOpaqueTextureMaterial_SetMipmapFiltering((QSGOpaqueTextureMaterial*)self, filteringType);
}

int32_t q_sgopaquetexturematerial_mipmap_filtering(void* self) {
    return QSGOpaqueTextureMaterial_MipmapFiltering((QSGOpaqueTextureMaterial*)self);
}

void q_sgopaquetexturematerial_set_filtering(void* self, int32_t filteringType) {
    QSGOpaqueTextureMaterial_SetFiltering((QSGOpaqueTextureMaterial*)self, filteringType);
}

int32_t q_sgopaquetexturematerial_filtering(void* self) {
    return QSGOpaqueTextureMaterial_Filtering((QSGOpaqueTextureMaterial*)self);
}

void q_sgopaquetexturematerial_set_horizontal_wrap_mode(void* self, int32_t mode) {
    QSGOpaqueTextureMaterial_SetHorizontalWrapMode((QSGOpaqueTextureMaterial*)self, mode);
}

int32_t q_sgopaquetexturematerial_horizontal_wrap_mode(void* self) {
    return QSGOpaqueTextureMaterial_HorizontalWrapMode((QSGOpaqueTextureMaterial*)self);
}

void q_sgopaquetexturematerial_set_vertical_wrap_mode(void* self, int32_t mode) {
    QSGOpaqueTextureMaterial_SetVerticalWrapMode((QSGOpaqueTextureMaterial*)self, mode);
}

int32_t q_sgopaquetexturematerial_vertical_wrap_mode(void* self) {
    return QSGOpaqueTextureMaterial_VerticalWrapMode((QSGOpaqueTextureMaterial*)self);
}

void q_sgopaquetexturematerial_set_anisotropy_level(void* self, int32_t level) {
    QSGOpaqueTextureMaterial_SetAnisotropyLevel((QSGOpaqueTextureMaterial*)self, level);
}

int32_t q_sgopaquetexturematerial_anisotropy_level(void* self) {
    return QSGOpaqueTextureMaterial_AnisotropyLevel((QSGOpaqueTextureMaterial*)self);
}

int32_t q_sgopaquetexturematerial_flags(void* self) {
    return QSGMaterial_Flags((QSGMaterial*)self);
}

void q_sgopaquetexturematerial_set_flag(void* self, int32_t flags) {
    QSGMaterial_SetFlag((QSGMaterial*)self, flags);
}

int32_t q_sgopaquetexturematerial_view_count(void* self) {
    return QSGMaterial_ViewCount((QSGMaterial*)self);
}

void q_sgopaquetexturematerial_set_flag2(void* self, int32_t flags, bool on) {
    QSGMaterial_SetFlag2((QSGMaterial*)self, flags, on);
}

void q_sgopaquetexturematerial_delete(void* self) {
    QSGOpaqueTextureMaterial_Delete((QSGOpaqueTextureMaterial*)(self));
}

QSGTextureMaterial* q_sgtexturematerial_new() {
    return QSGTextureMaterial_New();
}

QSGMaterialType* q_sgtexturematerial_type(void* self) {
    return QSGTextureMaterial_Type((QSGTextureMaterial*)self);
}

void q_sgtexturematerial_on_type(void* self, QSGMaterialType* (*callback)()) {
    QSGTextureMaterial_OnType((QSGTextureMaterial*)self, (intptr_t)callback);
}

QSGMaterialType* q_sgtexturematerial_super_type(void* self) {
    return QSGTextureMaterial_SuperType((QSGTextureMaterial*)self);
}

QSGMaterialShader* q_sgtexturematerial_create_shader(void* self, int32_t renderMode) {
    return QSGTextureMaterial_CreateShader((QSGTextureMaterial*)self, renderMode);
}

void q_sgtexturematerial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t)) {
    QSGTextureMaterial_OnCreateShader((QSGTextureMaterial*)self, (intptr_t)callback);
}

QSGMaterialShader* q_sgtexturematerial_super_create_shader(void* self, int32_t renderMode) {
    return QSGTextureMaterial_SuperCreateShader((QSGTextureMaterial*)self, renderMode);
}

void q_sgtexturematerial_set_texture(void* self, void* texture) {
    QSGOpaqueTextureMaterial_SetTexture((QSGOpaqueTextureMaterial*)self, (QSGTexture*)texture);
}

QSGTexture* q_sgtexturematerial_texture(void* self) {
    return QSGOpaqueTextureMaterial_Texture((QSGOpaqueTextureMaterial*)self);
}

void q_sgtexturematerial_set_mipmap_filtering(void* self, int32_t filteringType) {
    QSGOpaqueTextureMaterial_SetMipmapFiltering((QSGOpaqueTextureMaterial*)self, filteringType);
}

int32_t q_sgtexturematerial_mipmap_filtering(void* self) {
    return QSGOpaqueTextureMaterial_MipmapFiltering((QSGOpaqueTextureMaterial*)self);
}

void q_sgtexturematerial_set_filtering(void* self, int32_t filteringType) {
    QSGOpaqueTextureMaterial_SetFiltering((QSGOpaqueTextureMaterial*)self, filteringType);
}

int32_t q_sgtexturematerial_filtering(void* self) {
    return QSGOpaqueTextureMaterial_Filtering((QSGOpaqueTextureMaterial*)self);
}

void q_sgtexturematerial_set_horizontal_wrap_mode(void* self, int32_t mode) {
    QSGOpaqueTextureMaterial_SetHorizontalWrapMode((QSGOpaqueTextureMaterial*)self, mode);
}

int32_t q_sgtexturematerial_horizontal_wrap_mode(void* self) {
    return QSGOpaqueTextureMaterial_HorizontalWrapMode((QSGOpaqueTextureMaterial*)self);
}

void q_sgtexturematerial_set_vertical_wrap_mode(void* self, int32_t mode) {
    QSGOpaqueTextureMaterial_SetVerticalWrapMode((QSGOpaqueTextureMaterial*)self, mode);
}

int32_t q_sgtexturematerial_vertical_wrap_mode(void* self) {
    return QSGOpaqueTextureMaterial_VerticalWrapMode((QSGOpaqueTextureMaterial*)self);
}

void q_sgtexturematerial_set_anisotropy_level(void* self, int32_t level) {
    QSGOpaqueTextureMaterial_SetAnisotropyLevel((QSGOpaqueTextureMaterial*)self, level);
}

int32_t q_sgtexturematerial_anisotropy_level(void* self) {
    return QSGOpaqueTextureMaterial_AnisotropyLevel((QSGOpaqueTextureMaterial*)self);
}

int32_t q_sgtexturematerial_flags(void* self) {
    return QSGMaterial_Flags((QSGMaterial*)self);
}

void q_sgtexturematerial_set_flag(void* self, int32_t flags) {
    QSGMaterial_SetFlag((QSGMaterial*)self, flags);
}

int32_t q_sgtexturematerial_view_count(void* self) {
    return QSGMaterial_ViewCount((QSGMaterial*)self);
}

void q_sgtexturematerial_set_flag2(void* self, int32_t flags, bool on) {
    QSGMaterial_SetFlag2((QSGMaterial*)self, flags, on);
}

int32_t q_sgtexturematerial_compare(void* self, void* other) {
    return QSGTextureMaterial_Compare((QSGTextureMaterial*)self, (QSGMaterial*)other);
}

int32_t q_sgtexturematerial_super_compare(void* self, void* other) {
    return QSGTextureMaterial_SuperCompare((QSGTextureMaterial*)self, (QSGMaterial*)other);
}

void q_sgtexturematerial_on_compare(void* self, int32_t (*callback)(void*, void*)) {
    QSGTextureMaterial_OnCompare((QSGTextureMaterial*)self, (intptr_t)callback);
}

void q_sgtexturematerial_delete(void* self) {
    QSGTextureMaterial_Delete((QSGTextureMaterial*)(self));
}
