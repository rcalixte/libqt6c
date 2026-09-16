#include "libqsgmaterialshader.hpp"
#include "libqsgmaterial.hpp"
#include "libqsgmaterial.h"

QSGMaterial* q_sgmaterial_new() {
    return QSGMaterial_New();
}

QSGMaterialType* q_sgmaterial_type(void* self) {
    return QSGMaterial_Type((QSGMaterial*)self);
}

void q_sgmaterial_on_type(void* self, QSGMaterialType* (*callback)()) {
    QSGMaterial_OnType((QSGMaterial*)self, (intptr_t)callback);
}

QSGMaterialType* q_sgmaterial_super_type(void* self) {
    return QSGMaterial_SuperType((QSGMaterial*)self);
}

QSGMaterialShader* q_sgmaterial_create_shader(void* self, int32_t renderMode) {
    return QSGMaterial_CreateShader((QSGMaterial*)self, renderMode);
}

void q_sgmaterial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t)) {
    QSGMaterial_OnCreateShader((QSGMaterial*)self, (intptr_t)callback);
}

QSGMaterialShader* q_sgmaterial_super_create_shader(void* self, int32_t renderMode) {
    return QSGMaterial_SuperCreateShader((QSGMaterial*)self, renderMode);
}

int32_t q_sgmaterial_compare(void* self, void* other) {
    return QSGMaterial_Compare((QSGMaterial*)self, (QSGMaterial*)other);
}

void q_sgmaterial_on_compare(void* self, int32_t (*callback)(void*, void*)) {
    QSGMaterial_OnCompare((QSGMaterial*)self, (intptr_t)callback);
}

int32_t q_sgmaterial_super_compare(void* self, void* other) {
    return QSGMaterial_SuperCompare((QSGMaterial*)self, (QSGMaterial*)other);
}

int32_t q_sgmaterial_flags(void* self) {
    return QSGMaterial_Flags((QSGMaterial*)self);
}

void q_sgmaterial_set_flag(void* self, int32_t flags) {
    QSGMaterial_SetFlag((QSGMaterial*)self, flags);
}

int32_t q_sgmaterial_view_count(void* self) {
    return QSGMaterial_ViewCount((QSGMaterial*)self);
}

void q_sgmaterial_set_flag2(void* self, int32_t flags, bool on) {
    QSGMaterial_SetFlag2((QSGMaterial*)self, flags, on);
}

void q_sgmaterial_delete(void* self) {
    QSGMaterial_Delete((QSGMaterial*)(self));
}
