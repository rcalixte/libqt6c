#include "libqcolor.hpp"
#include "libqcolormap.hpp"
#include "libqcolormap.h"

/// https://doc.qt.io/qt-6/qcolormap.html

/// q_colormap_new constructs a new QColormap object.
///
/// ``` QColormap* colormap ```
QColormap* q_colormap_new(void* colormap) {
    return QColormap_new((QColormap*)colormap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#initialize)
///
///
void q_colormap_initialize() {
    QColormap_Initialize();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#cleanup)
///
///
void q_colormap_cleanup() {
    QColormap_Cleanup();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#instance)
///
///
QColormap* q_colormap_instance() {
    return QColormap_Instance();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#operator=)
///
/// ``` QColormap* self, QColormap* colormap ```
void q_colormap_operator_assign(void* self, void* colormap) {
    QColormap_OperatorAssign((QColormap*)self, (QColormap*)colormap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#mode)
///
/// ``` QColormap* self ```
int64_t q_colormap_mode(void* self) {
    return QColormap_Mode((QColormap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#depth)
///
/// ``` QColormap* self ```
int32_t q_colormap_depth(void* self) {
    return QColormap_Depth((QColormap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#size)
///
/// ``` QColormap* self ```
int32_t q_colormap_size(void* self) {
    return QColormap_Size((QColormap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#pixel)
///
/// ``` QColormap* self, QColor* color ```
uint32_t q_colormap_pixel(void* self, void* color) {
    return QColormap_Pixel((QColormap*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#colorAt)
///
/// ``` QColormap* self, uint32_t pixel ```
QColor* q_colormap_color_at(void* self, uint32_t pixel) {
    return QColormap_ColorAt((QColormap*)self, pixel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#colormap)
///
/// ``` QColormap* self ```
libqt_list /* of QColor* */ q_colormap_colormap(void* self) {
    libqt_list _arr = QColormap_Colormap((QColormap*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#instance)
///
/// ``` int screen ```
QColormap* q_colormap_instance1(int screen) {
    return QColormap_Instance1(screen);
}

/// Delete this object from C++ memory.
///
/// ``` QColormap* self ```
void q_colormap_delete(void* self) {
    QColormap_Delete((QColormap*)(self));
}