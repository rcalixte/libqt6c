#pragma once
#ifndef LIBQCURSOR_H
#define LIBQCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new constructs a new QCursor object.
///
QCursor* q_cursor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new2 constructs a new QCursor object.
///
/// @param shape enum Qt__CursorShape
///
QCursor* q_cursor_new2(int32_t shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new3 constructs a new QCursor object.
///
/// @param bitmap QBitmap*
/// @param mask QBitmap*
///
QCursor* q_cursor_new3(const void* bitmap, const void* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new4 constructs a new QCursor object.
///
/// @param pixmap QPixmap*
///
QCursor* q_cursor_new4(const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new5 constructs a new QCursor object.
///
/// @param cursor QCursor*
///
QCursor* q_cursor_new5(const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new6 constructs a new QCursor object.
///
/// @param bitmap QBitmap*
/// @param mask QBitmap*
/// @param hotX int
///
QCursor* q_cursor_new6(const void* bitmap, const void* mask, int hotX);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new7 constructs a new QCursor object.
///
/// @param bitmap QBitmap*
/// @param mask QBitmap*
/// @param hotX int
/// @param hotY int
///
QCursor* q_cursor_new7(const void* bitmap, const void* mask, int hotX, int hotY);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new8 constructs a new QCursor object.
///
/// @param pixmap QPixmap*
/// @param hotX int
///
QCursor* q_cursor_new8(const void* pixmap, int hotX);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html)

/// q_cursor_new9 constructs a new QCursor object.
///
/// @param pixmap QPixmap*
/// @param hotX int
/// @param hotY int
///
QCursor* q_cursor_new9(const void* pixmap, int hotX, int hotY);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#operator-eq)
///
/// @param self QCursor*
/// @param cursor QCursor*
///
void q_cursor_operator_assign(void* self, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#swap)
///
/// @param self QCursor*
/// @param other QCursor*
///
void q_cursor_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#operator-QVariant)
///
/// @param self const QCursor*
///
QVariant* q_cursor_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#shape)
///
/// @param self const QCursor*
///
/// @return enum Qt__CursorShape
///
int32_t q_cursor_shape(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setShape)
///
/// @param self QCursor*
/// @param newShape enum Qt__CursorShape
///
void q_cursor_set_shape(void* self, int32_t newShape);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// @param self const QCursor*
/// @param param1 enum Qt__ReturnByValueConstant
///
QBitmap* q_cursor_bitmap(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// @param self const QCursor*
/// @param param1 enum Qt__ReturnByValueConstant
///
QBitmap* q_cursor_mask(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// @param self const QCursor*
///
QBitmap* q_cursor_bitmap2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// @param self const QCursor*
///
QBitmap* q_cursor_mask2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pixmap)
///
/// @param self const QCursor*
///
QPixmap* q_cursor_pixmap(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
///
/// @param self const QCursor*
///
QPoint* q_cursor_hot_spot(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pos)
///
QPoint* q_cursor_pos();

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#pos)
///
/// @param screen QScreen*
///
QPoint* q_cursor_pos2(const void* screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param x int
/// @param y int
///
void q_cursor_set_pos(int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param screen QScreen*
/// @param x int
/// @param y int
///
void q_cursor_set_pos2(void* screen, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param p QPoint*
///
void q_cursor_set_pos3(const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// @param screen QScreen*
/// @param p QPoint*
///
void q_cursor_set_pos4(void* screen, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qcursor.html#dtor.QCursor)
///
/// Delete this object from C++ memory.
///
/// @param self QCursor*
///
void q_cursor_delete(void* self);

#endif
