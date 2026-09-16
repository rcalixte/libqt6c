#include "libqsgmaterial.hpp"
#include "libqsgmaterialshader.hpp"
#include "libqsgvertexcolormaterial.hpp"
#include "libqsgvertexcolormaterial.h"

QSGVertexColorMaterial* q_sgvertexcolormaterial_new() {
    return QSGVertexColorMaterial_New();
}

int32_t q_sgvertexcolormaterial_compare(void* self, void* other) {
    return QSGVertexColorMaterial_Compare((QSGVertexColorMaterial*)self, (QSGMaterial*)other);
}

void q_sgvertexcolormaterial_on_compare(void* self, int32_t (*callback)(void*, void*)) {
    QSGVertexColorMaterial_OnCompare((QSGVertexColorMaterial*)self, (intptr_t)callback);
}

int32_t q_sgvertexcolormaterial_super_compare(void* self, void* other) {
    return QSGVertexColorMaterial_SuperCompare((QSGVertexColorMaterial*)self, (QSGMaterial*)other);
}

QSGMaterialType* q_sgvertexcolormaterial_type(void* self) {
    return QSGVertexColorMaterial_Type((QSGVertexColorMaterial*)self);
}

void q_sgvertexcolormaterial_on_type(void* self, QSGMaterialType* (*callback)()) {
    QSGVertexColorMaterial_OnType((QSGVertexColorMaterial*)self, (intptr_t)callback);
}

QSGMaterialType* q_sgvertexcolormaterial_super_type(void* self) {
    return QSGVertexColorMaterial_SuperType((QSGVertexColorMaterial*)self);
}

QSGMaterialShader* q_sgvertexcolormaterial_create_shader(void* self, int32_t renderMode) {
    return QSGVertexColorMaterial_CreateShader((QSGVertexColorMaterial*)self, renderMode);
}

void q_sgvertexcolormaterial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t)) {
    QSGVertexColorMaterial_OnCreateShader((QSGVertexColorMaterial*)self, (intptr_t)callback);
}

QSGMaterialShader* q_sgvertexcolormaterial_super_create_shader(void* self, int32_t renderMode) {
    return QSGVertexColorMaterial_SuperCreateShader((QSGVertexColorMaterial*)self, renderMode);
}

int32_t q_sgvertexcolormaterial_flags(void* self) {
    return QSGMaterial_Flags((QSGMaterial*)self);
}

void q_sgvertexcolormaterial_set_flag(void* self, int32_t flags) {
    QSGMaterial_SetFlag((QSGMaterial*)self, flags);
}

int32_t q_sgvertexcolormaterial_view_count(void* self) {
    return QSGMaterial_ViewCount((QSGMaterial*)self);
}

void q_sgvertexcolormaterial_set_flag2(void* self, int32_t flags, bool on) {
    QSGMaterial_SetFlag2((QSGMaterial*)self, flags, on);
}

void q_sgvertexcolormaterial_delete(void* self) {
    QSGVertexColorMaterial_Delete((QSGVertexColorMaterial*)(self));
}
