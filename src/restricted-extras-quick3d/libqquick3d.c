#include "../libqsurfaceformat.hpp"
#include "libqquick3d.hpp"
#include "libqquick3d.h"

QQuick3D* q_quick3d_new(void* other) {
    return QQuick3D_New((QQuick3D*)other);
}

QQuick3D* q_quick3d_new2(void* other) {
    return QQuick3D_New2((QQuick3D*)other);
}

void q_quick3d_copy_assign(void* self, void* other) {
    QQuick3D_CopyAssign((QQuick3D*)self, (QQuick3D*)other);
}

void q_quick3d_move_assign(void* self, void* other) {
    QQuick3D_MoveAssign((QQuick3D*)self, (QQuick3D*)other);
}

QSurfaceFormat* q_quick3d_ideal_surface_format() {
    return QQuick3D_IdealSurfaceFormat();
}

QSurfaceFormat* q_quick3d_ideal_surface_format1(int samples) {
    return QQuick3D_IdealSurfaceFormat1(samples);
}

void q_quick3d_delete(void* self) {
    QQuick3D_Delete((QQuick3D*)(self));
}
