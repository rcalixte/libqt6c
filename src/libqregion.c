#include "libqbitmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqvariant.hpp"
#include "libqregion.hpp"
#include "libqregion.h"

/// https://doc.qt.io/qt-6/qregion.html

/// q_region_new constructs a new QRegion object.
///
///
QRegion* q_region_new() {
    return QRegion_new();
}

/// q_region_new2 constructs a new QRegion object.
///
/// ``` int x, int y, int w, int h ```
QRegion* q_region_new2(int x, int y, int w, int h) {
    return QRegion_new2(x, y, w, h);
}

/// q_region_new3 constructs a new QRegion object.
///
/// ``` QRect* r ```
QRegion* q_region_new3(void* r) {
    return QRegion_new3((QRect*)r);
}

/// q_region_new4 constructs a new QRegion object.
///
/// ``` QRegion* region ```
QRegion* q_region_new4(void* region) {
    return QRegion_new4((QRegion*)region);
}

/// q_region_new5 constructs a new QRegion object.
///
/// ``` QBitmap* bitmap ```
QRegion* q_region_new5(void* bitmap) {
    return QRegion_new5((QBitmap*)bitmap);
}

/// q_region_new6 constructs a new QRegion object.
///
/// ``` int x, int y, int w, int h, enum QRegion__RegionType t ```
QRegion* q_region_new6(int x, int y, int w, int h, int64_t t) {
    return QRegion_new6(x, y, w, h, t);
}

/// q_region_new7 constructs a new QRegion object.
///
/// ``` QRect* r, enum QRegion__RegionType t ```
QRegion* q_region_new7(void* r, int64_t t) {
    return QRegion_new7((QRect*)r, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator=)
///
/// ``` QRegion* self, QRegion* param1 ```
void q_region_operator_assign(void* self, void* param1) {
    QRegion_OperatorAssign((QRegion*)self, (QRegion*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#swap)
///
/// ``` QRegion* self, QRegion* other ```
void q_region_swap(void* self, void* other) {
    QRegion_Swap((QRegion*)self, (QRegion*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#isEmpty)
///
/// ``` QRegion* self ```
bool q_region_is_empty(void* self) {
    return QRegion_IsEmpty((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#isNull)
///
/// ``` QRegion* self ```
bool q_region_is_null(void* self) {
    return QRegion_IsNull((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#begin)
///
/// ``` QRegion* self ```
QRect* q_region_begin(void* self) {
    return QRegion_Begin((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#cbegin)
///
/// ``` QRegion* self ```
QRect* q_region_cbegin(void* self) {
    return QRegion_Cbegin((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#end)
///
/// ``` QRegion* self ```
QRect* q_region_end(void* self) {
    return QRegion_End((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#cend)
///
/// ``` QRegion* self ```
QRect* q_region_cend(void* self) {
    return QRegion_Cend((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#contains)
///
/// ``` QRegion* self, QPoint* p ```
bool q_region_contains(void* self, void* p) {
    return QRegion_Contains((QRegion*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#contains)
///
/// ``` QRegion* self, QRect* r ```
bool q_region_contains_with_q_rect(void* self, void* r) {
    return QRegion_ContainsWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translate)
///
/// ``` QRegion* self, int dx, int dy ```
void q_region_translate(void* self, int dx, int dy) {
    QRegion_Translate((QRegion*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translate)
///
/// ``` QRegion* self, QPoint* p ```
void q_region_translate_with_q_point(void* self, void* p) {
    QRegion_TranslateWithQPoint((QRegion*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translated)
///
/// ``` QRegion* self, int dx, int dy ```
QRegion* q_region_translated(void* self, int dx, int dy) {
    return QRegion_Translated((QRegion*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translated)
///
/// ``` QRegion* self, QPoint* p ```
QRegion* q_region_translated_with_q_point(void* self, void* p) {
    return QRegion_TranslatedWithQPoint((QRegion*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#united)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_united(void* self, void* r) {
    return QRegion_United((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#united)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_united_with_q_rect(void* self, void* r) {
    return QRegion_UnitedWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersected)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_intersected(void* self, void* r) {
    return QRegion_Intersected((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersected)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_intersected_with_q_rect(void* self, void* r) {
    return QRegion_IntersectedWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#subtracted)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_subtracted(void* self, void* r) {
    return QRegion_Subtracted((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#xored)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_xored(void* self, void* r) {
    return QRegion_Xored((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersects)
///
/// ``` QRegion* self, QRegion* r ```
bool q_region_intersects(void* self, void* r) {
    return QRegion_Intersects((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersects)
///
/// ``` QRegion* self, QRect* r ```
bool q_region_intersects_with_q_rect(void* self, void* r) {
    return QRegion_IntersectsWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#boundingRect)
///
/// ``` QRegion* self ```
QRect* q_region_bounding_rect(void* self) {
    return QRegion_BoundingRect((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#setRects)
///
/// ``` QRegion* self, QRect* rect, int num ```
void q_region_set_rects(void* self, void* rect, int num) {
    QRegion_SetRects((QRegion*)self, (QRect*)rect, num);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#rectCount)
///
/// ``` QRegion* self ```
int32_t q_region_rect_count(void* self) {
    return QRegion_RectCount((QRegion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator|)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_bitwise_or(void* self, void* r) {
    return QRegion_OperatorBitwiseOr((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_plus(void* self, void* r) {
    return QRegion_OperatorPlus((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_operator_plus_with_q_rect(void* self, void* r) {
    return QRegion_OperatorPlusWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_bitwise_and(void* self, void* r) {
    return QRegion_OperatorBitwiseAnd((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_operator_bitwise_and_with_q_rect(void* self, void* r) {
    return QRegion_OperatorBitwiseAndWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator-)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_minus(void* self, void* r) {
    return QRegion_OperatorMinus((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator^)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_bitwise_not(void* self, void* r) {
    return QRegion_OperatorBitwiseNot((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator|=)
///
/// ``` QRegion* self, QRegion* r ```
void q_region_operator_bitwise_or_assign(void* self, void* r) {
    QRegion_OperatorBitwiseOrAssign((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+=)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_plus_assign(void* self, void* r) {
    return QRegion_OperatorPlusAssign((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+=)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_operator_plus_assign_with_q_rect(void* self, void* r) {
    return QRegion_OperatorPlusAssignWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&=)
///
/// ``` QRegion* self, QRegion* r ```
void q_region_operator_bitwise_and_assign(void* self, void* r) {
    QRegion_OperatorBitwiseAndAssign((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&=)
///
/// ``` QRegion* self, QRect* r ```
void q_region_operator_bitwise_and_assign_with_q_rect(void* self, void* r) {
    QRegion_OperatorBitwiseAndAssignWithQRect((QRegion*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator-=)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_minus_assign(void* self, void* r) {
    return QRegion_OperatorMinusAssign((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator^=)
///
/// ``` QRegion* self, QRegion* r ```
void q_region_operator_bitwise_not_assign(void* self, void* r) {
    QRegion_OperatorBitwiseNotAssign((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator==)
///
/// ``` QRegion* self, QRegion* r ```
bool q_region_operator_equal(void* self, void* r) {
    return QRegion_OperatorEqual((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator!=)
///
/// ``` QRegion* self, QRegion* r ```
bool q_region_operator_not_equal(void* self, void* r) {
    return QRegion_OperatorNotEqual((QRegion*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator QVariant)
///
/// ``` QRegion* self ```
QVariant* q_region_to_q_variant(void* self) {
    return QRegion_ToQVariant((QRegion*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QRegion* self ```
void q_region_delete(void* self) {
    QRegion_Delete((QRegion*)(self));
}