#include "../libqopenglcontext.hpp"
#include "libqopenglversionprofile.hpp"
#include "libqopenglversionfunctionsfactory.hpp"
#include "libqopenglversionfunctionsfactory.h"

QOpenGLVersionFunctionsFactory* q_openglversionfunctionsfactory_new(void* other) {
    return QOpenGLVersionFunctionsFactory_new((QOpenGLVersionFunctionsFactory*)other);
}

QOpenGLVersionFunctionsFactory* q_openglversionfunctionsfactory_new2(void* other) {
    return QOpenGLVersionFunctionsFactory_new2((QOpenGLVersionFunctionsFactory*)other);
}

void q_openglversionfunctionsfactory_copy_assign(void* self, void* other) {
    QOpenGLVersionFunctionsFactory_CopyAssign((QOpenGLVersionFunctionsFactory*)self, (QOpenGLVersionFunctionsFactory*)other);
}

void q_openglversionfunctionsfactory_move_assign(void* self, void* other) {
    QOpenGLVersionFunctionsFactory_MoveAssign((QOpenGLVersionFunctionsFactory*)self, (QOpenGLVersionFunctionsFactory*)other);
}

QAbstractOpenGLFunctions* q_openglversionfunctionsfactory_get() {
    return QOpenGLVersionFunctionsFactory_Get();
}

QAbstractOpenGLFunctions* q_openglversionfunctionsfactory_get1(void* versionProfile) {
    return QOpenGLVersionFunctionsFactory_Get1((QOpenGLVersionProfile*)versionProfile);
}

QAbstractOpenGLFunctions* q_openglversionfunctionsfactory_get2(void* versionProfile, void* context) {
    return QOpenGLVersionFunctionsFactory_Get2((QOpenGLVersionProfile*)versionProfile, (QOpenGLContext*)context);
}

void q_openglversionfunctionsfactory_delete(void* self) {
    QOpenGLVersionFunctionsFactory_Delete((QOpenGLVersionFunctionsFactory*)(self));
}
