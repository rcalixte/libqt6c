#include "libqbitmap.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqscreen.hpp"
#include "libqvariant.hpp"
#include "libqcursor.hpp"
#include "libqcursor.h"

QCursor* q_cursor_new() {
    return QCursor_New();
}

QCursor* q_cursor_new2(int32_t shape) {
    return QCursor_New2(shape);
}

QCursor* q_cursor_new3(const void* bitmap, const void* mask) {
    return QCursor_New3((QBitmap*)bitmap, (QBitmap*)mask);
}

QCursor* q_cursor_new4(const void* pixmap) {
    return QCursor_New4((QPixmap*)pixmap);
}

QCursor* q_cursor_new5(const void* cursor) {
    return QCursor_New5((QCursor*)cursor);
}

QCursor* q_cursor_new6(const void* bitmap, const void* mask, int hotX) {
    return QCursor_New6((QBitmap*)bitmap, (QBitmap*)mask, hotX);
}

QCursor* q_cursor_new7(const void* bitmap, const void* mask, int hotX, int hotY) {
    return QCursor_New7((QBitmap*)bitmap, (QBitmap*)mask, hotX, hotY);
}

QCursor* q_cursor_new8(const void* pixmap, int hotX) {
    return QCursor_New8((QPixmap*)pixmap, hotX);
}

QCursor* q_cursor_new9(const void* pixmap, int hotX, int hotY) {
    return QCursor_New9((QPixmap*)pixmap, hotX, hotY);
}

void q_cursor_operator_assign(void* self, const void* cursor) {
    QCursor_OperatorAssign((QCursor*)self, (QCursor*)cursor);
}

void q_cursor_swap(void* self, void* other) {
    QCursor_Swap((QCursor*)self, (QCursor*)other);
}

QVariant* q_cursor_to_q_variant(const void* self) {
    return QCursor_ToQVariant((QCursor*)self);
}

int32_t q_cursor_shape(const void* self) {
    return QCursor_Shape((QCursor*)self);
}

void q_cursor_set_shape(void* self, int32_t newShape) {
    QCursor_SetShape((QCursor*)self, newShape);
}

QBitmap* q_cursor_bitmap(const void* self, int32_t param1) {
    return QCursor_Bitmap((QCursor*)self, param1);
}

QBitmap* q_cursor_mask(const void* self, int32_t param1) {
    return QCursor_Mask((QCursor*)self, param1);
}

QBitmap* q_cursor_bitmap2(const void* self) {
    return QCursor_Bitmap2((QCursor*)self);
}

QBitmap* q_cursor_mask2(const void* self) {
    return QCursor_Mask2((QCursor*)self);
}

QPixmap* q_cursor_pixmap(const void* self) {
    return QCursor_Pixmap((QCursor*)self);
}

QPoint* q_cursor_hot_spot(const void* self) {
    return QCursor_HotSpot((QCursor*)self);
}

QPoint* q_cursor_pos() {
    return QCursor_Pos();
}

QPoint* q_cursor_pos2(const void* screen) {
    return QCursor_Pos2((QScreen*)screen);
}

void q_cursor_set_pos(int x, int y) {
    QCursor_SetPos(x, y);
}

void q_cursor_set_pos2(void* screen, int x, int y) {
    QCursor_SetPos2((QScreen*)screen, x, y);
}

void q_cursor_set_pos3(const void* p) {
    QCursor_SetPos3((QPoint*)p);
}

void q_cursor_set_pos4(void* screen, const void* p) {
    QCursor_SetPos4((QScreen*)screen, (QPoint*)p);
}

void q_cursor_delete(void* self) {
    QCursor_Delete((QCursor*)(self));
}
