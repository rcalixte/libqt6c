#pragma once
#ifndef SRCQT6C_LIBQFONTINFO_H
#define SRCQT6C_LIBQFONTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfont.h"
#include <string.h>

QFontInfo* q_fontinfo_new(void* param1);
QFontInfo* q_fontinfo_new2(void* param1);
void q_fontinfo_operator_assign(void* self, void* param1);
void q_fontinfo_swap(void* self, void* other);
const char* q_fontinfo_family(void* self);
const char* q_fontinfo_style_name(void* self);
int32_t q_fontinfo_pixel_size(void* self);
int32_t q_fontinfo_point_size(void* self);
double q_fontinfo_point_size_f(void* self);
bool q_fontinfo_italic(void* self);
int64_t q_fontinfo_style(void* self);
int32_t q_fontinfo_weight(void* self);
bool q_fontinfo_bold(void* self);
bool q_fontinfo_underline(void* self);
bool q_fontinfo_overline(void* self);
bool q_fontinfo_strike_out(void* self);
bool q_fontinfo_fixed_pitch(void* self);
int64_t q_fontinfo_style_hint(void* self);
int32_t q_fontinfo_legacy_weight(void* self);
bool q_fontinfo_exact_match(void* self);
void q_fontinfo_delete(void* self);

#endif
