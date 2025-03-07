#include "libqsize.hpp"
#include "libqsurfaceformat.hpp"
#include "libqsurface.hpp"
#include "libqsurface.h"

/// https://doc.qt.io/qt-6/qsurface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QSurface* self ```
int64_t q_surface_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#format)
///
/// ``` QSurface* self ```
QSurfaceFormat* q_surface_format(void* self) {
    return QSurface_Format((QSurface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
///
/// ``` QSurface* self ```
int64_t q_surface_surface_type(void* self) {
    return QSurface_SurfaceType((QSurface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QSurface* self ```
bool q_surface_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#size)
///
/// ``` QSurface* self ```
QSize* q_surface_size(void* self) {
    return QSurface_Size((QSurface*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSurface* self ```
void q_surface_delete(void* self) {
    QSurface_Delete((QSurface*)(self));
}