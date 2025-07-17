#pragma once
#ifndef SRCQT6C_LIBQCURSOR_H
#define SRCQT6C_LIBQCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcursor.html

/// q_cursor_new constructs a new QCursor object.
///
///
QCursor* q_cursor_new();

/// q_cursor_new2 constructs a new QCursor object.
///
/// ``` enum Qt__CursorShape shape ```
QCursor* q_cursor_new2(int64_t shape);

/// q_cursor_new3 constructs a new QCursor object.
///
/// ``` QBitmap* bitmap, QBitmap* mask ```
QCursor* q_cursor_new3(void* bitmap, void* mask);

/// q_cursor_new4 constructs a new QCursor object.
///
/// ``` QPixmap* pixmap ```
QCursor* q_cursor_new4(void* pixmap);

/// q_cursor_new5 constructs a new QCursor object.
///
/// ``` QCursor* cursor ```
QCursor* q_cursor_new5(void* cursor);

/// q_cursor_new6 constructs a new QCursor object.
///
/// ``` QBitmap* bitmap, QBitmap* mask, int hotX ```
QCursor* q_cursor_new6(void* bitmap, void* mask, int hotX);

/// q_cursor_new7 constructs a new QCursor object.
///
/// ``` QBitmap* bitmap, QBitmap* mask, int hotX, int hotY ```
QCursor* q_cursor_new7(void* bitmap, void* mask, int hotX, int hotY);

/// q_cursor_new8 constructs a new QCursor object.
///
/// ``` QPixmap* pixmap, int hotX ```
QCursor* q_cursor_new8(void* pixmap, int hotX);

/// q_cursor_new9 constructs a new QCursor object.
///
/// ``` QPixmap* pixmap, int hotX, int hotY ```
QCursor* q_cursor_new9(void* pixmap, int hotX, int hotY);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator-eq)
///
/// ``` QCursor* self, QCursor* cursor ```
void q_cursor_operator_assign(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#swap)
///
/// ``` QCursor* self, QCursor* other ```
void q_cursor_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator)
///
/// ``` QCursor* self ```
QVariant* q_cursor_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#shape)
///
/// ``` QCursor* self ```
int64_t q_cursor_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setShape)
///
/// ``` QCursor* self, enum Qt__CursorShape newShape ```
void q_cursor_set_shape(void* self, int64_t newShape);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// ``` QCursor* self, enum Qt__ReturnByValueConstant param1 ```
QBitmap* q_cursor_bitmap(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// ``` QCursor* self, enum Qt__ReturnByValueConstant param1 ```
QBitmap* q_cursor_mask(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// ``` QCursor* self ```
QBitmap* q_cursor_bitmap2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// ``` QCursor* self ```
QBitmap* q_cursor_mask2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pixmap)
///
/// ``` QCursor* self ```
QPixmap* q_cursor_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
///
/// ``` QCursor* self ```
QPoint* q_cursor_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
///
///
QPoint* q_cursor_pos();

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
///
/// ``` QScreen* screen ```
QPoint* q_cursor_pos2(void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` int x, int y ```
void q_cursor_set_pos(int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` QScreen* screen, int x, int y ```
void q_cursor_set_pos2(void* screen, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` QPoint* p ```
void q_cursor_set_pos3(void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` QScreen* screen, QPoint* p ```
void q_cursor_set_pos4(void* screen, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#dtor.QCursor)
///
/// Delete this object from C++ memory.
///
/// ``` QCursor* self ```
void q_cursor_delete(void* self);

#endif
