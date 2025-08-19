#include "libqcolor.hpp"
#include "libqcolormap.hpp"
#include "libqcolormap.h"

QColormap* q_colormap_new(void* colormap) {
    return QColormap_new((QColormap*)colormap);
}

void q_colormap_initialize() {
    QColormap_Initialize();
}

void q_colormap_cleanup() {
    QColormap_Cleanup();
}

QColormap* q_colormap_instance() {
    return QColormap_Instance();
}

void q_colormap_operator_assign(void* self, void* colormap) {
    QColormap_OperatorAssign((QColormap*)self, (QColormap*)colormap);
}

int32_t q_colormap_mode(void* self) {
    return QColormap_Mode((QColormap*)self);
}

int32_t q_colormap_depth(void* self) {
    return QColormap_Depth((QColormap*)self);
}

int32_t q_colormap_size(void* self) {
    return QColormap_Size((QColormap*)self);
}

uint32_t q_colormap_pixel(void* self, void* color) {
    return QColormap_Pixel((QColormap*)self, (QColor*)color);
}

const QColor* q_colormap_color_at(void* self, uint32_t pixel) {
    return QColormap_ColorAt((QColormap*)self, pixel);
}

libqt_list /* of QColor* */ q_colormap_colormap(void* self) {
    libqt_list _arr = QColormap_Colormap((QColormap*)self);
    return _arr;
}

QColormap* q_colormap_instance1(int screen) {
    return QColormap_Instance1(screen);
}

void q_colormap_delete(void* self) {
    QColormap_Delete((QColormap*)(self));
}
