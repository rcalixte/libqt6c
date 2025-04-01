#include "libqfloat16.hpp"
#include "libqfloat16.h"

qfloat16* q_qfloat16_new() {
    return qfloat16_new();
}

qfloat16* q_qfloat16_new2(int64_t param1) {
    return qfloat16_new2(param1);
}

qfloat16* q_qfloat16_new3(float f) {
    return qfloat16_new3(f);
}

void q_qfloat16_copy_assign(void* self, void* other) {
    qfloat16_CopyAssign((qfloat16*)self, (qfloat16*)other);
}

void q_qfloat16_move_assign(void* self, void* other) {
    qfloat16_MoveAssign((qfloat16*)self, (qfloat16*)other);
}

float q_qfloat16_to_float(void* self) {
    return qfloat16_ToFloat((qfloat16*)self);
}

bool q_qfloat16_is_inf(void* self) {
    return qfloat16_IsInf((qfloat16*)self);
}

bool q_qfloat16_is_na_n(void* self) {
    return qfloat16_IsNaN((qfloat16*)self);
}

bool q_qfloat16_is_finite(void* self) {
    return qfloat16_IsFinite((qfloat16*)self);
}

int32_t q_qfloat16_fp_classify(void* self) {
    return qfloat16_FpClassify((qfloat16*)self);
}

bool q_qfloat16_is_normal(void* self) {
    return qfloat16_IsNormal((qfloat16*)self);
}

void q_qfloat16_delete(void* self) {
    qfloat16_Delete((qfloat16*)(self));
}
