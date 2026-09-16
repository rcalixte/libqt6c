#include "../libqcolor.hpp"
#include "libqsgmaterial.hpp"
#include "libqsgmaterialshader.hpp"
#include "libqsgflatcolormaterial.hpp"
#include "libqsgflatcolormaterial.h"

QSGFlatColorMaterial* q_sgflatcolormaterial_new() {
    return QSGFlatColorMaterial_New();
}

QSGMaterialType* q_sgflatcolormaterial_type(void* self) {
    return QSGFlatColorMaterial_Type((QSGFlatColorMaterial*)self);
}

void q_sgflatcolormaterial_on_type(void* self, QSGMaterialType* (*callback)()) {
    QSGFlatColorMaterial_OnType((QSGFlatColorMaterial*)self, (intptr_t)callback);
}

QSGMaterialType* q_sgflatcolormaterial_super_type(void* self) {
    return QSGFlatColorMaterial_SuperType((QSGFlatColorMaterial*)self);
}

QSGMaterialShader* q_sgflatcolormaterial_create_shader(void* self, int32_t renderMode) {
    return QSGFlatColorMaterial_CreateShader((QSGFlatColorMaterial*)self, renderMode);
}

void q_sgflatcolormaterial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t)) {
    QSGFlatColorMaterial_OnCreateShader((QSGFlatColorMaterial*)self, (intptr_t)callback);
}

QSGMaterialShader* q_sgflatcolormaterial_super_create_shader(void* self, int32_t renderMode) {
    return QSGFlatColorMaterial_SuperCreateShader((QSGFlatColorMaterial*)self, renderMode);
}

void q_sgflatcolormaterial_set_color(void* self, void* color) {
    QSGFlatColorMaterial_SetColor((QSGFlatColorMaterial*)self, (QColor*)color);
}

const QColor* q_sgflatcolormaterial_color(void* self) {
    return QSGFlatColorMaterial_Color((QSGFlatColorMaterial*)self);
}

int32_t q_sgflatcolormaterial_compare(void* self, void* other) {
    return QSGFlatColorMaterial_Compare((QSGFlatColorMaterial*)self, (QSGMaterial*)other);
}

void q_sgflatcolormaterial_on_compare(void* self, int32_t (*callback)(void*, void*)) {
    QSGFlatColorMaterial_OnCompare((QSGFlatColorMaterial*)self, (intptr_t)callback);
}

int32_t q_sgflatcolormaterial_super_compare(void* self, void* other) {
    return QSGFlatColorMaterial_SuperCompare((QSGFlatColorMaterial*)self, (QSGMaterial*)other);
}

int32_t q_sgflatcolormaterial_flags(void* self) {
    return QSGMaterial_Flags((QSGMaterial*)self);
}

void q_sgflatcolormaterial_set_flag(void* self, int32_t flags) {
    QSGMaterial_SetFlag((QSGMaterial*)self, flags);
}

int32_t q_sgflatcolormaterial_view_count(void* self) {
    return QSGMaterial_ViewCount((QSGMaterial*)self);
}

void q_sgflatcolormaterial_set_flag2(void* self, int32_t flags, bool on) {
    QSGMaterial_SetFlag2((QSGMaterial*)self, flags, on);
}

void q_sgflatcolormaterial_delete(void* self) {
    QSGFlatColorMaterial_Delete((QSGFlatColorMaterial*)(self));
}
