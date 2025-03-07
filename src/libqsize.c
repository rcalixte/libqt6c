#include "libqmargins.hpp"
#include "libqsize.hpp"
#include "libqsize.h"

/// https://doc.qt.io/qt-6/qsize.html

/// q_size_new constructs a new QSize object.
///
/// ``` QSize* other ```
QSize* q_size_new(void* other) {
    return QSize_new((QSize*)other);
}

/// q_size_new2 constructs a new QSize object and invalidates the source QSize object.
///
/// ``` QSize* other ```
QSize* q_size_new2(void* other) {
    return QSize_new2((QSize*)other);
}

/// q_size_new3 constructs a new QSize object.
///
///
QSize* q_size_new3() {
    return QSize_new3();
}

/// q_size_new4 constructs a new QSize object.
///
/// ``` int w, int h ```
QSize* q_size_new4(int w, int h) {
    return QSize_new4(w, h);
}

/// q_size_new5 constructs a new QSize object.
///
/// ``` QSize* param1 ```
QSize* q_size_new5(void* param1) {
    return QSize_new5((QSize*)param1);
}

/// q_size_copy_assign shallow copies `other` into `self`.
///
/// ``` QSize* self, QSize* other ```
void q_size_copy_assign(void* self, void* other) {
    QSize_CopyAssign((QSize*)self, (QSize*)other);
}

/// q_size_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSize* self, QSize* other ```
void q_size_move_assign(void* self, void* other) {
    QSize_MoveAssign((QSize*)self, (QSize*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#isNull)
///
/// ``` QSize* self ```
bool q_size_is_null(void* self) {
    return QSize_IsNull((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#isEmpty)
///
/// ``` QSize* self ```
bool q_size_is_empty(void* self) {
    return QSize_IsEmpty((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#isValid)
///
/// ``` QSize* self ```
bool q_size_is_valid(void* self) {
    return QSize_IsValid((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#width)
///
/// ``` QSize* self ```
int32_t q_size_width(void* self) {
    return QSize_Width((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#height)
///
/// ``` QSize* self ```
int32_t q_size_height(void* self) {
    return QSize_Height((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#setWidth)
///
/// ``` QSize* self, int w ```
void q_size_set_width(void* self, int w) {
    QSize_SetWidth((QSize*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#setHeight)
///
/// ``` QSize* self, int h ```
void q_size_set_height(void* self, int h) {
    QSize_SetHeight((QSize*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#transpose)
///
/// ``` QSize* self ```
void q_size_transpose(void* self) {
    QSize_Transpose((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#transposed)
///
/// ``` QSize* self ```
QSize* q_size_transposed(void* self) {
    return QSize_Transposed((QSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scale)
///
/// ``` QSize* self, int w, int h, enum Qt__AspectRatioMode mode ```
void q_size_scale(void* self, int w, int h, int64_t mode) {
    QSize_Scale((QSize*)self, w, h, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scale)
///
/// ``` QSize* self, QSize* s, enum Qt__AspectRatioMode mode ```
void q_size_scale2(void* self, void* s, int64_t mode) {
    QSize_Scale2((QSize*)self, (QSize*)s, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scaled)
///
/// ``` QSize* self, int w, int h, enum Qt__AspectRatioMode mode ```
QSize* q_size_scaled(void* self, int w, int h, int64_t mode) {
    return QSize_Scaled((QSize*)self, w, h, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#scaled)
///
/// ``` QSize* self, QSize* s, enum Qt__AspectRatioMode mode ```
QSize* q_size_scaled2(void* self, void* s, int64_t mode) {
    return QSize_Scaled2((QSize*)self, (QSize*)s, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#expandedTo)
///
/// ``` QSize* self, QSize* param1 ```
QSize* q_size_expanded_to(void* self, void* param1) {
    return QSize_ExpandedTo((QSize*)self, (QSize*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#boundedTo)
///
/// ``` QSize* self, QSize* param1 ```
QSize* q_size_bounded_to(void* self, void* param1) {
    return QSize_BoundedTo((QSize*)self, (QSize*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#grownBy)
///
/// ``` QSize* self, QMargins* m ```
QSize* q_size_grown_by(void* self, void* m) {
    return QSize_GrownBy((QSize*)self, (QMargins*)m);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
///
/// ``` QSize* self, QMargins* m ```
QSize* q_size_shrunk_by(void* self, void* m) {
    return QSize_ShrunkBy((QSize*)self, (QMargins*)m);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator+=)
///
/// ``` QSize* self, QSize* param1 ```
QSize* q_size_operator_plus_assign(void* self, void* param1) {
    return QSize_OperatorPlusAssign((QSize*)self, (QSize*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator-=)
///
/// ``` QSize* self, QSize* param1 ```
QSize* q_size_operator_minus_assign(void* self, void* param1) {
    return QSize_OperatorMinusAssign((QSize*)self, (QSize*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator*=)
///
/// ``` QSize* self, double c ```
QSize* q_size_operator_multiply_assign(void* self, double c) {
    return QSize_OperatorMultiplyAssign((QSize*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#operator/=)
///
/// ``` QSize* self, double c ```
QSize* q_size_operator_divide_assign(void* self, double c) {
    return QSize_OperatorDivideAssign((QSize*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsize.html#toSizeF)
///
/// ``` QSize* self ```
QSizeF* q_size_to_size_f(void* self) {
    return QSize_ToSizeF((QSize*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSize* self ```
void q_size_delete(void* self) {
    QSize_Delete((QSize*)(self));
}

/// https://doc.qt.io/qt-6/qsizef.html

/// q_sizef_new constructs a new QSizeF object.
///
/// ``` QSizeF* other ```
QSizeF* q_sizef_new(void* other) {
    return QSizeF_new((QSizeF*)other);
}

/// q_sizef_new2 constructs a new QSizeF object and invalidates the source QSizeF object.
///
/// ``` QSizeF* other ```
QSizeF* q_sizef_new2(void* other) {
    return QSizeF_new2((QSizeF*)other);
}

/// q_sizef_new3 constructs a new QSizeF object.
///
///
QSizeF* q_sizef_new3() {
    return QSizeF_new3();
}

/// q_sizef_new4 constructs a new QSizeF object.
///
/// ``` QSize* sz ```
QSizeF* q_sizef_new4(void* sz) {
    return QSizeF_new4((QSize*)sz);
}

/// q_sizef_new5 constructs a new QSizeF object.
///
/// ``` double w, double h ```
QSizeF* q_sizef_new5(double w, double h) {
    return QSizeF_new5(w, h);
}

/// q_sizef_new6 constructs a new QSizeF object.
///
/// ``` QSizeF* param1 ```
QSizeF* q_sizef_new6(void* param1) {
    return QSizeF_new6((QSizeF*)param1);
}

/// q_sizef_copy_assign shallow copies `other` into `self`.
///
/// ``` QSizeF* self, QSizeF* other ```
void q_sizef_copy_assign(void* self, void* other) {
    QSizeF_CopyAssign((QSizeF*)self, (QSizeF*)other);
}

/// q_sizef_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSizeF* self, QSizeF* other ```
void q_sizef_move_assign(void* self, void* other) {
    QSizeF_MoveAssign((QSizeF*)self, (QSizeF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#isNull)
///
/// ``` QSizeF* self ```
bool q_sizef_is_null(void* self) {
    return QSizeF_IsNull((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
///
/// ``` QSizeF* self ```
bool q_sizef_is_empty(void* self) {
    return QSizeF_IsEmpty((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#isValid)
///
/// ``` QSizeF* self ```
bool q_sizef_is_valid(void* self) {
    return QSizeF_IsValid((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#width)
///
/// ``` QSizeF* self ```
double q_sizef_width(void* self) {
    return QSizeF_Width((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#height)
///
/// ``` QSizeF* self ```
double q_sizef_height(void* self) {
    return QSizeF_Height((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#setWidth)
///
/// ``` QSizeF* self, double w ```
void q_sizef_set_width(void* self, double w) {
    QSizeF_SetWidth((QSizeF*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#setHeight)
///
/// ``` QSizeF* self, double h ```
void q_sizef_set_height(void* self, double h) {
    QSizeF_SetHeight((QSizeF*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#transpose)
///
/// ``` QSizeF* self ```
void q_sizef_transpose(void* self) {
    QSizeF_Transpose((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#transposed)
///
/// ``` QSizeF* self ```
QSizeF* q_sizef_transposed(void* self) {
    return QSizeF_Transposed((QSizeF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scale)
///
/// ``` QSizeF* self, double w, double h, enum Qt__AspectRatioMode mode ```
void q_sizef_scale(void* self, double w, double h, int64_t mode) {
    QSizeF_Scale((QSizeF*)self, w, h, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scale)
///
/// ``` QSizeF* self, QSizeF* s, enum Qt__AspectRatioMode mode ```
void q_sizef_scale2(void* self, void* s, int64_t mode) {
    QSizeF_Scale2((QSizeF*)self, (QSizeF*)s, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scaled)
///
/// ``` QSizeF* self, double w, double h, enum Qt__AspectRatioMode mode ```
QSizeF* q_sizef_scaled(void* self, double w, double h, int64_t mode) {
    return QSizeF_Scaled((QSizeF*)self, w, h, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#scaled)
///
/// ``` QSizeF* self, QSizeF* s, enum Qt__AspectRatioMode mode ```
QSizeF* q_sizef_scaled2(void* self, void* s, int64_t mode) {
    return QSizeF_Scaled2((QSizeF*)self, (QSizeF*)s, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
///
/// ``` QSizeF* self, QSizeF* param1 ```
QSizeF* q_sizef_expanded_to(void* self, void* param1) {
    return QSizeF_ExpandedTo((QSizeF*)self, (QSizeF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
///
/// ``` QSizeF* self, QSizeF* param1 ```
QSizeF* q_sizef_bounded_to(void* self, void* param1) {
    return QSizeF_BoundedTo((QSizeF*)self, (QSizeF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#grownBy)
///
/// ``` QSizeF* self, QMarginsF* m ```
QSizeF* q_sizef_grown_by(void* self, void* m) {
    return QSizeF_GrownBy((QSizeF*)self, (QMarginsF*)m);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
///
/// ``` QSizeF* self, QMarginsF* m ```
QSizeF* q_sizef_shrunk_by(void* self, void* m) {
    return QSizeF_ShrunkBy((QSizeF*)self, (QMarginsF*)m);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator+=)
///
/// ``` QSizeF* self, QSizeF* param1 ```
QSizeF* q_sizef_operator_plus_assign(void* self, void* param1) {
    return QSizeF_OperatorPlusAssign((QSizeF*)self, (QSizeF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator-=)
///
/// ``` QSizeF* self, QSizeF* param1 ```
QSizeF* q_sizef_operator_minus_assign(void* self, void* param1) {
    return QSizeF_OperatorMinusAssign((QSizeF*)self, (QSizeF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator*=)
///
/// ``` QSizeF* self, double c ```
QSizeF* q_sizef_operator_multiply_assign(void* self, double c) {
    return QSizeF_OperatorMultiplyAssign((QSizeF*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#operator/=)
///
/// ``` QSizeF* self, double c ```
QSizeF* q_sizef_operator_divide_assign(void* self, double c) {
    return QSizeF_OperatorDivideAssign((QSizeF*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizef.html#toSize)
///
/// ``` QSizeF* self ```
QSize* q_sizef_to_size(void* self) {
    return QSizeF_ToSize((QSizeF*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSizeF* self ```
void q_sizef_delete(void* self) {
    QSizeF_Delete((QSizeF*)(self));
}