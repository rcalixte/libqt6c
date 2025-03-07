#pragma once
#ifndef SRCQT6C_LIBQCOLORTRANSFORM_H
#define SRCQT6C_LIBQCOLORTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolor.h"
#include "libqrgba64.h"

QColorTransform* q_colortransform_new();
QColorTransform* q_colortransform_new2(void* colorTransform);
void q_colortransform_operator_assign(void* self, void* other);
void q_colortransform_swap(void* self, void* other);
bool q_colortransform_is_identity(void* self);
uint32_t q_colortransform_map(void* self, uint32_t argb);
QRgba64* q_colortransform_map_with_rgba64(void* self, void* rgba64);
QColor* q_colortransform_map_with_color(void* self, void* color);
void q_colortransform_delete(void* self);

#endif
