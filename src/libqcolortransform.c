#include "libqcolor.hpp"
#include "libqrgba64.hpp"
#include "libqcolortransform.hpp"
#include "libqcolortransform.h"

/// https://doc.qt.io/qt-6/qcolortransform.html

/// q_colortransform_new constructs a new QColorTransform object.
///
///
QColorTransform* q_colortransform_new() {
    return QColorTransform_new();
}

/// q_colortransform_new2 constructs a new QColorTransform object.
///
/// ``` QColorTransform* colorTransform ```
QColorTransform* q_colortransform_new2(void* colorTransform) {
    return QColorTransform_new2((QColorTransform*)colorTransform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#operator=)
///
/// ``` QColorTransform* self, QColorTransform* other ```
void q_colortransform_operator_assign(void* self, void* other) {
    QColorTransform_OperatorAssign((QColorTransform*)self, (QColorTransform*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#swap)
///
/// ``` QColorTransform* self, QColorTransform* other ```
void q_colortransform_swap(void* self, void* other) {
    QColorTransform_Swap((QColorTransform*)self, (QColorTransform*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#isIdentity)
///
/// ``` QColorTransform* self ```
bool q_colortransform_is_identity(void* self) {
    return QColorTransform_IsIdentity((QColorTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// ``` QColorTransform* self, uint32_t argb ```
uint32_t q_colortransform_map(void* self, uint32_t argb) {
    return QColorTransform_Map((QColorTransform*)self, argb);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// ``` QColorTransform* self, QRgba64* rgba64 ```
QRgba64* q_colortransform_map_with_rgba64(void* self, void* rgba64) {
    return QColorTransform_MapWithRgba64((QColorTransform*)self, (QRgba64*)rgba64);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// ``` QColorTransform* self, QColor* color ```
QColor* q_colortransform_map_with_color(void* self, void* color) {
    return QColorTransform_MapWithColor((QColorTransform*)self, (QColor*)color);
}

/// Delete this object from C++ memory.
///
/// ``` QColorTransform* self ```
void q_colortransform_delete(void* self) {
    QColorTransform_Delete((QColorTransform*)(self));
}