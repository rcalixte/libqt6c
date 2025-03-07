#pragma once
#ifndef SRCQT6C_LIBQFLOAT16_H
#define SRCQT6C_LIBQFLOAT16_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

qfloat16* q_qfloat16_new();
qfloat16* q_qfloat16_new2(int64_t param1);
qfloat16* q_qfloat16_new3(float f);
void q_qfloat16_copy_assign(void* self, void* other);
void q_qfloat16_move_assign(void* self, void* other);
float q_qfloat16_to_float(void* self);
bool q_qfloat16_is_inf(void* self);
bool q_qfloat16_is_na_n(void* self);
bool q_qfloat16_is_finite(void* self);
int32_t q_qfloat16_fp_classify(void* self);
bool q_qfloat16_is_normal(void* self);
void q_qfloat16_delete(void* self);

#endif
