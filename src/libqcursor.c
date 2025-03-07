#include "libqbitmap.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqscreen.hpp"
#include "libqvariant.hpp"
#include "libqcursor.hpp"
#include "libqcursor.h"

/// https://doc.qt.io/qt-6/qcursor.html

/// q_cursor_new constructs a new QCursor object.
///
///
QCursor* q_cursor_new() {
    return QCursor_new();
}

/// q_cursor_new2 constructs a new QCursor object.
///
/// ``` enum Qt__CursorShape shape ```
QCursor* q_cursor_new2(int64_t shape) {
    return QCursor_new2(shape);
}

/// q_cursor_new3 constructs a new QCursor object.
///
/// ``` QBitmap* bitmap, QBitmap* mask ```
QCursor* q_cursor_new3(void* bitmap, void* mask) {
    return QCursor_new3((QBitmap*)bitmap, (QBitmap*)mask);
}

/// q_cursor_new4 constructs a new QCursor object.
///
/// ``` QPixmap* pixmap ```
QCursor* q_cursor_new4(void* pixmap) {
    return QCursor_new4((QPixmap*)pixmap);
}

/// q_cursor_new5 constructs a new QCursor object.
///
/// ``` QCursor* cursor ```
QCursor* q_cursor_new5(void* cursor) {
    return QCursor_new5((QCursor*)cursor);
}

/// q_cursor_new6 constructs a new QCursor object.
///
/// ``` QBitmap* bitmap, QBitmap* mask, int hotX ```
QCursor* q_cursor_new6(void* bitmap, void* mask, int hotX) {
    return QCursor_new6((QBitmap*)bitmap, (QBitmap*)mask, hotX);
}

/// q_cursor_new7 constructs a new QCursor object.
///
/// ``` QBitmap* bitmap, QBitmap* mask, int hotX, int hotY ```
QCursor* q_cursor_new7(void* bitmap, void* mask, int hotX, int hotY) {
    return QCursor_new7((QBitmap*)bitmap, (QBitmap*)mask, hotX, hotY);
}

/// q_cursor_new8 constructs a new QCursor object.
///
/// ``` QPixmap* pixmap, int hotX ```
QCursor* q_cursor_new8(void* pixmap, int hotX) {
    return QCursor_new8((QPixmap*)pixmap, hotX);
}

/// q_cursor_new9 constructs a new QCursor object.
///
/// ``` QPixmap* pixmap, int hotX, int hotY ```
QCursor* q_cursor_new9(void* pixmap, int hotX, int hotY) {
    return QCursor_new9((QPixmap*)pixmap, hotX, hotY);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator=)
///
/// ``` QCursor* self, QCursor* cursor ```
void q_cursor_operator_assign(void* self, void* cursor) {
    QCursor_OperatorAssign((QCursor*)self, (QCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#swap)
///
/// ``` QCursor* self, QCursor* other ```
void q_cursor_swap(void* self, void* other) {
    QCursor_Swap((QCursor*)self, (QCursor*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#operator QVariant)
///
/// ``` QCursor* self ```
QVariant* q_cursor_to_q_variant(void* self) {
    return QCursor_ToQVariant((QCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#shape)
///
/// ``` QCursor* self ```
int64_t q_cursor_shape(void* self) {
    return QCursor_Shape((QCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setShape)
///
/// ``` QCursor* self, enum Qt__CursorShape newShape ```
void q_cursor_set_shape(void* self, int64_t newShape) {
    QCursor_SetShape((QCursor*)self, newShape);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// ``` QCursor* self, enum Qt__ReturnByValueConstant param1 ```
QBitmap* q_cursor_bitmap(void* self, int64_t param1) {
    return QCursor_Bitmap((QCursor*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// ``` QCursor* self, enum Qt__ReturnByValueConstant param1 ```
QBitmap* q_cursor_mask(void* self, int64_t param1) {
    return QCursor_Mask((QCursor*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#bitmap)
///
/// ``` QCursor* self ```
QBitmap* q_cursor_bitmap2(void* self) {
    return QCursor_Bitmap2((QCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#mask)
///
/// ``` QCursor* self ```
QBitmap* q_cursor_mask2(void* self) {
    return QCursor_Mask2((QCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pixmap)
///
/// ``` QCursor* self ```
QPixmap* q_cursor_pixmap(void* self) {
    return QCursor_Pixmap((QCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#hotSpot)
///
/// ``` QCursor* self ```
QPoint* q_cursor_hot_spot(void* self) {
    return QCursor_HotSpot((QCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
///
///
QPoint* q_cursor_pos() {
    return QCursor_Pos();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#pos)
///
/// ``` QScreen* screen ```
QPoint* q_cursor_pos_with_screen(void* screen) {
    return QCursor_PosWithScreen((QScreen*)screen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` int x, int y ```
void q_cursor_set_pos(int x, int y) {
    QCursor_SetPos(x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` QScreen* screen, int x, int y ```
void q_cursor_set_pos2(void* screen, int x, int y) {
    QCursor_SetPos2((QScreen*)screen, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` QPoint* p ```
void q_cursor_set_pos_with_q_point(void* p) {
    QCursor_SetPosWithQPoint((QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcursor.html#setPos)
///
/// ``` QScreen* screen, QPoint* p ```
void q_cursor_set_pos3(void* screen, void* p) {
    QCursor_SetPos3((QScreen*)screen, (QPoint*)p);
}

/// Delete this object from C++ memory.
///
/// ``` QCursor* self ```
void q_cursor_delete(void* self) {
    QCursor_Delete((QCursor*)(self));
}