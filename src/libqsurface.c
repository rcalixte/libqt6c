#include "libqsize.hpp"
#include "libqsurfaceformat.hpp"
#include "libqsurface.hpp"
#include "libqsurface.h"

int32_t q_surface_surface_class(const void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

QSurfaceFormat* q_surface_format(const void* self) {
    return QSurface_Format((QSurface*)self);
}

int32_t q_surface_surface_type(const void* self) {
    return QSurface_SurfaceType((QSurface*)self);
}

bool q_surface_supports_open_g_l(const void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

QSize* q_surface_size(const void* self) {
    return QSurface_Size((QSurface*)self);
}

void q_surface_operator_assign(void* self, const void* param1) {
    QSurface_OperatorAssign((QSurface*)self, (QSurface*)param1);
}

void q_surface_delete(void* self) {
    QSurface_Delete((QSurface*)(self));
}
