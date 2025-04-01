#include "libqcolor.hpp"
#include "libqrgba64.hpp"
#include "libqcolortransform.hpp"
#include "libqcolortransform.h"

QColorTransform* q_colortransform_new() {
    return QColorTransform_new();
}

QColorTransform* q_colortransform_new2(void* colorTransform) {
    return QColorTransform_new2((QColorTransform*)colorTransform);
}

void q_colortransform_operator_assign(void* self, void* other) {
    QColorTransform_OperatorAssign((QColorTransform*)self, (QColorTransform*)other);
}

void q_colortransform_swap(void* self, void* other) {
    QColorTransform_Swap((QColorTransform*)self, (QColorTransform*)other);
}

bool q_colortransform_is_identity(void* self) {
    return QColorTransform_IsIdentity((QColorTransform*)self);
}

uint32_t q_colortransform_map(void* self, uint32_t argb) {
    return QColorTransform_Map((QColorTransform*)self, argb);
}

QRgba64* q_colortransform_map_with_rgba64(void* self, void* rgba64) {
    return QColorTransform_MapWithRgba64((QColorTransform*)self, (QRgba64*)rgba64);
}

QColor* q_colortransform_map_with_color(void* self, void* color) {
    return QColorTransform_MapWithColor((QColorTransform*)self, (QColor*)color);
}

void q_colortransform_delete(void* self) {
    QColorTransform_Delete((QColorTransform*)(self));
}
