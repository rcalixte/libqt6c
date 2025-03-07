#pragma once
#ifndef SRCQT6C_LIBQBACKINGSTORE_H
#define SRCQT6C_LIBQBACKINGSTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpaintdevice.h"
#include "libqpoint.h"
#include "libqregion.h"
#include "libqsize.h"
#include "libqwindow.h"

QBackingStore* q_backingstore_new(void* window);
QWindow* q_backingstore_window(void* self);
QPaintDevice* q_backingstore_paint_device(void* self);
void q_backingstore_flush(void* self, void* region);
void q_backingstore_resize(void* self, void* size);
QSize* q_backingstore_size(void* self);
bool q_backingstore_scroll(void* self, void* area, int dx, int dy);
void q_backingstore_begin_paint(void* self, void* param1);
void q_backingstore_end_paint(void* self);
void q_backingstore_set_static_contents(void* self, void* region);
QRegion* q_backingstore_static_contents(void* self);
bool q_backingstore_has_static_contents(void* self);
void q_backingstore_flush2(void* self, void* region, void* window);
void q_backingstore_flush3(void* self, void* region, void* window, void* offset);
void q_backingstore_delete(void* self);

#endif
