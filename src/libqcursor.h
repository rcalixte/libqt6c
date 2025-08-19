#pragma once
#ifndef SRCQT6C_LIBQCURSOR_H
#define SRCQT6C_LIBQCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcursor.html

/// q_cursor_new constructs a new QCursor object.
///
QCursor* q_cursor_new();

/// q_cursor_new2 constructs a new QCursor object.
///
/// @param shape enum Qt__CursorShape
QCursor* q_cursor_new2(int32_t shape);

/// q_cursor_new3 constructs a new QCursor object.
///
/// @param bitmap QBitmap*
/// @param mask QBitmap*
QCursor* q_cursor_new3(void* bitmap, void* mask);

/// q_cursor_new4 constructs a new QCursor object.
///
/// @param pixmap QPixmap*
QCursor* q_cursor_new4(void* pixmap);

/// q_cursor_new5 constructs a new QCursor object.
///
/// @param cursor QCursor*
QCursor* q_cursor_new5(void* cursor);

/// q_cursor_new6 constructs a new QCursor object.
///
/// @param bitmap QBitmap*
/// @param mask QBitmap*
/// @param hotX int
QCursor* q_cursor_new6(void* bitmap, void* mask, int hotX);

/// q_cursor_new7 constructs a new QCursor object.
///
/// @param bitmap QBitmap*
/// @param mask QBitmap*
/// @param hotX int
/// @param hotY int
QCursor* q_cursor_new7(void* bitmap, void* mask, int hotX, int hotY);

/// q_cursor_new8 constructs a new QCursor object.
///
/// @param pixmap QPixmap*
/// @param hotX int
QCursor* q_cursor_new8(void* pixmap, int hotX);

/// q_cursor_new9 constructs a new QCursor object.
///
/// @param pixmap QPixmap*
/// @param hotX int
/// @param hotY int
QCursor* q_cursor_new9(void* pixmap, int hotX, int hotY);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator-eq)
///
/// @param self QCursor*
/// @param cursor QCursor*
void q_cursor_operator_assign(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#swap)
///
/// @param self QCursor*
/// @param other QCursor*
void q_cursor_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator)
///
/// @param self QCursor*
QVariant* q_cursor_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#shape)
///
/// @param self QCursor*
///
/// @return enum Qt__CursorShape
int32_t q_cursor_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setShape)
///
/// @param self QCursor*
/// @param newShape enum Qt__CursorShape
void q_cursor_set_shape(void* self, int32_t newShape);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// @param self QCursor*
/// @param param1 enum Qt__ReturnByValueConstant
QBitmap* q_cursor_bitmap(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// @param self QCursor*
/// @param param1 enum Qt__ReturnByValueConstant
QBitmap* q_cursor_mask(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// @param self QCursor*
QBitmap* q_cursor_bitmap2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// @param self QCursor*
QBitmap* q_cursor_mask2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pixmap)
///
/// @param self QCursor*
QPixmap* q_cursor_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
///
/// @param self QCursor*
QPoint* q_cursor_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
///
QPoint* q_cursor_pos();

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
///
/// @param screen QScreen*
QPoint* q_cursor_pos2(void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param x int
/// @param y int
void q_cursor_set_pos(int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param screen QScreen*
/// @param x int
/// @param y int
void q_cursor_set_pos2(void* screen, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param p QPoint*
void q_cursor_set_pos3(void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param screen QScreen*
/// @param p QPoint*
void q_cursor_set_pos4(void* screen, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#dtor.QCursor)
///
/// Delete this object from C++ memory.
///
/// @param self QCursor*
void q_cursor_delete(void* self);

#endif
