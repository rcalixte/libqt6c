#include <qfloat16.h>
#include "libqfloat16.hpp"
#include "libqfloat16.hxx"

qfloat16* qfloat16_new() {
    return new qfloat16();
}

qfloat16* qfloat16_new2(int param1) {
    return new qfloat16(static_cast<Qt::Initialization>(param1));
}

qfloat16* qfloat16_new3(float f) {
    return new qfloat16(static_cast<float>(f));
}

void qfloat16_CopyAssign(qfloat16* self, qfloat16* other) {
    *self = *other;
}

void qfloat16_MoveAssign(qfloat16* self, qfloat16* other) {
    *self = std::move(*other);
}

float qfloat16_ToFloat(const qfloat16* self) {
    return self->operator float();
}

bool qfloat16_IsInf(const qfloat16* self) {
    return self->isInf();
}

bool qfloat16_IsNaN(const qfloat16* self) {
    return self->isNaN();
}

bool qfloat16_IsFinite(const qfloat16* self) {
    return self->isFinite();
}

int qfloat16_FpClassify(const qfloat16* self) {
    return self->fpClassify();
}

bool qfloat16_IsNormal(const qfloat16* self) {
    return self->isNormal();
}

void qfloat16_Delete(qfloat16* self) {
    delete self;
}
