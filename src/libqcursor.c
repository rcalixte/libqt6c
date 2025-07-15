#include "libqbitmap.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqscreen.hpp"
#include "libqvariant.hpp"
#include "libqcursor.hpp"
#include "libqcursor.h"

QCursor* q_cursor_new() {
    return QCursor_new();
}

QCursor* q_cursor_new2(int64_t shape) {
    return QCursor_new2(shape);
}

QCursor* q_cursor_new3(void* bitmap, void* mask) {
    return QCursor_new3((QBitmap*)bitmap, (QBitmap*)mask);
}

QCursor* q_cursor_new4(void* pixmap) {
    return QCursor_new4((QPixmap*)pixmap);
}

QCursor* q_cursor_new5(void* cursor) {
    return QCursor_new5((QCursor*)cursor);
}

QCursor* q_cursor_new6(void* bitmap, void* mask, int hotX) {
    return QCursor_new6((QBitmap*)bitmap, (QBitmap*)mask, hotX);
}

QCursor* q_cursor_new7(void* bitmap, void* mask, int hotX, int hotY) {
    return QCursor_new7((QBitmap*)bitmap, (QBitmap*)mask, hotX, hotY);
}

QCursor* q_cursor_new8(void* pixmap, int hotX) {
    return QCursor_new8((QPixmap*)pixmap, hotX);
}

QCursor* q_cursor_new9(void* pixmap, int hotX, int hotY) {
    return QCursor_new9((QPixmap*)pixmap, hotX, hotY);
}

void q_cursor_operator_assign(void* self, void* cursor) {
    QCursor_OperatorAssign((QCursor*)self, (QCursor*)cursor);
}

void q_cursor_swap(void* self, void* other) {
    QCursor_Swap((QCursor*)self, (QCursor*)other);
}

QVariant* q_cursor_to_q_variant(void* self) {
    return QCursor_ToQVariant((QCursor*)self);
}

int64_t q_cursor_shape(void* self) {
    return QCursor_Shape((QCursor*)self);
}

void q_cursor_set_shape(void* self, int64_t newShape) {
    QCursor_SetShape((QCursor*)self, newShape);
}

QBitmap* q_cursor_bitmap(void* self, int64_t param1) {
    return QCursor_Bitmap((QCursor*)self, param1);
}

QBitmap* q_cursor_mask(void* self, int64_t param1) {
    return QCursor_Mask((QCursor*)self, param1);
}

QBitmap* q_cursor_bitmap2(void* self) {
    return QCursor_Bitmap2((QCursor*)self);
}

QBitmap* q_cursor_mask2(void* self) {
    return QCursor_Mask2((QCursor*)self);
}

QPixmap* q_cursor_pixmap(void* self) {
    return QCursor_Pixmap((QCursor*)self);
}

QPoint* q_cursor_hot_spot(void* self) {
    return QCursor_HotSpot((QCursor*)self);
}

QPoint* q_cursor_pos() {
    return QCursor_Pos();
}

QPoint* q_cursor_pos2(void* screen) {
    return QCursor_Pos2((QScreen*)screen);
}

void q_cursor_set_pos(int x, int y) {
    QCursor_SetPos(x, y);
}

void q_cursor_set_pos2(void* screen, int x, int y) {
    QCursor_SetPos2((QScreen*)screen, x, y);
}

void q_cursor_set_pos3(void* p) {
    QCursor_SetPos3((QPoint*)p);
}

void q_cursor_set_pos4(void* screen, void* p) {
    QCursor_SetPos4((QScreen*)screen, (QPoint*)p);
}

void q_cursor_delete(void* self) {
    QCursor_Delete((QCursor*)(self));
}
