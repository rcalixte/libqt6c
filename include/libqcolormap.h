#pragma once
#ifndef SRCQT6C_LIBQCOLORMAP_H
#define SRCQT6C_LIBQCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolor.h"

QColormap* q_colormap_new(void* colormap);
void q_colormap_initialize();
void q_colormap_cleanup();
QColormap* q_colormap_instance();
void q_colormap_operator_assign(void* self, void* colormap);
int64_t q_colormap_mode(void* self);
int32_t q_colormap_depth(void* self);
int32_t q_colormap_size(void* self);
uint32_t q_colormap_pixel(void* self, void* color);
QColor* q_colormap_color_at(void* self, uint32_t pixel);
libqt_list /* of QColor* */ q_colormap_colormap(void* self);
QColormap* q_colormap_instance1(int screen);
void q_colormap_delete(void* self);

/// https://doc.qt.io/qt-6/qcolormap.html#types

typedef enum {
    QCOLORMAP_MODE_DIRECT = 0,
    QCOLORMAP_MODE_INDEXED = 1,
    QCOLORMAP_MODE_GRAY = 2
} QColormap__Mode;

#endif
