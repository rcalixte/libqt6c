#include "libqsize.hpp"
#include "libqsurfaceformat.hpp"
#include "libqsurface.hpp"
#include "libqsurface.h"

int32_t q_surface_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

QSurfaceFormat* q_surface_format(void* self) {
    return QSurface_Format((QSurface*)self);
}

int32_t q_surface_surface_type(void* self) {
    return QSurface_SurfaceType((QSurface*)self);
}

bool q_surface_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

QSize* q_surface_size(void* self) {
    return QSurface_Size((QSurface*)self);
}

void q_surface_delete(void* self) {
    QSurface_Delete((QSurface*)(self));
}
