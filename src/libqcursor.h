#pragma once
#ifndef SRCQT6C_LIBQCURSOR_H
#define SRCQT6C_LIBQCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbitmap.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqscreen.h"
#include "libqvariant.h"

QCursor* q_cursor_new();
QCursor* q_cursor_new2(int64_t shape);
QCursor* q_cursor_new3(void* bitmap, void* mask);
QCursor* q_cursor_new4(void* pixmap);
QCursor* q_cursor_new5(void* cursor);
QCursor* q_cursor_new6(void* bitmap, void* mask, int hotX);
QCursor* q_cursor_new7(void* bitmap, void* mask, int hotX, int hotY);
QCursor* q_cursor_new8(void* pixmap, int hotX);
QCursor* q_cursor_new9(void* pixmap, int hotX, int hotY);
void q_cursor_operator_assign(void* self, void* cursor);
void q_cursor_swap(void* self, void* other);
QVariant* q_cursor_to_q_variant(void* self);
int64_t q_cursor_shape(void* self);
void q_cursor_set_shape(void* self, int64_t newShape);
QBitmap* q_cursor_bitmap(void* self, int64_t param1);
QBitmap* q_cursor_mask(void* self, int64_t param1);
QBitmap* q_cursor_bitmap2(void* self);
QBitmap* q_cursor_mask2(void* self);
QPixmap* q_cursor_pixmap(void* self);
QPoint* q_cursor_hot_spot(void* self);
QPoint* q_cursor_pos();
QPoint* q_cursor_pos_with_screen(void* screen);
void q_cursor_set_pos(int x, int y);
void q_cursor_set_pos2(void* screen, int x, int y);
void q_cursor_set_pos_with_q_point(void* p);
void q_cursor_set_pos3(void* screen, void* p);
void q_cursor_delete(void* self);

#endif
