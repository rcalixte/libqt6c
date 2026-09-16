#include "../libqopenglcontext.hpp"
#include "libqquickgraphicsdevice.hpp"
#include "libqquickgraphicsdevice.h"

QQuickGraphicsDevice* q_quickgraphicsdevice_new() {
    return QQuickGraphicsDevice_New();
}

QQuickGraphicsDevice* q_quickgraphicsdevice_new2(void* other) {
    return QQuickGraphicsDevice_New2((QQuickGraphicsDevice*)other);
}

void q_quickgraphicsdevice_operator_assign(void* self, void* other) {
    QQuickGraphicsDevice_OperatorAssign((QQuickGraphicsDevice*)self, (QQuickGraphicsDevice*)other);
}

bool q_quickgraphicsdevice_is_null(void* self) {
    return QQuickGraphicsDevice_IsNull((QQuickGraphicsDevice*)self);
}

QQuickGraphicsDevice* q_quickgraphicsdevice_from_open_g_l_context(void* context) {
    return QQuickGraphicsDevice_FromOpenGLContext((QOpenGLContext*)context);
}

void q_quickgraphicsdevice_delete(void* self) {
    QQuickGraphicsDevice_Delete((QQuickGraphicsDevice*)(self));
}
