#include "../libqopenglcontext.hpp"
#include "libqopenglversionfunctions.hpp"
#include "libqopenglversionfunctions.h"

QOpenGLVersionStatus* q_openglversionstatus_new(void* other) {
    return QOpenGLVersionStatus_new((QOpenGLVersionStatus*)other);
}

QOpenGLVersionStatus* q_openglversionstatus_new2(void* other) {
    return QOpenGLVersionStatus_new2((QOpenGLVersionStatus*)other);
}

QOpenGLVersionStatus* q_openglversionstatus_new3() {
    return QOpenGLVersionStatus_new3();
}

QOpenGLVersionStatus* q_openglversionstatus_new4(int majorVersion, int minorVersion, int32_t functionStatus) {
    return QOpenGLVersionStatus_new4(majorVersion, minorVersion, functionStatus);
}

QOpenGLVersionStatus* q_openglversionstatus_new5(void* param1) {
    return QOpenGLVersionStatus_new5((QOpenGLVersionStatus*)param1);
}

libqt_pair /* tuple of int and int */ q_openglversionstatus_version(void* self) {
    return QOpenGLVersionStatus_Version((QOpenGLVersionStatus*)self);
}

void q_openglversionstatus_set_version(void* self, libqt_pair /* tuple of int and int */ version) {
    QOpenGLVersionStatus_SetVersion((QOpenGLVersionStatus*)self, version);
}

int32_t q_openglversionstatus_status(void* self) {
    return QOpenGLVersionStatus_Status((QOpenGLVersionStatus*)self);
}

void q_openglversionstatus_set_status(void* self, int32_t status) {
    QOpenGLVersionStatus_SetStatus((QOpenGLVersionStatus*)self, status);
}

void q_openglversionstatus_operator_assign(void* self, void* param1) {
    QOpenGLVersionStatus_OperatorAssign((QOpenGLVersionStatus*)self, (QOpenGLVersionStatus*)param1);
}

void q_openglversionstatus_delete(void* self) {
    QOpenGLVersionStatus_Delete((QOpenGLVersionStatus*)(self));
}

QOpenGLContext* q_openglversionfunctionsbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglversionfunctionsbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

void q_openglversionfunctionsbackend_delete(void* self) {
    QOpenGLVersionFunctionsBackend_Delete((QOpenGLVersionFunctionsBackend*)(self));
}

bool q_abstractopenglfunctions_initialize_open_g_l_functions(void* self) {
    return QAbstractOpenGLFunctions_InitializeOpenGLFunctions((QAbstractOpenGLFunctions*)self);
}

void q_abstractopenglfunctions_delete(void* self) {
    QAbstractOpenGLFunctions_Delete((QAbstractOpenGLFunctions*)(self));
}

QOpenGLContext* q_openglfunctions_1_0_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_0_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_1_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_1_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_2_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_2_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_3_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_3_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_4_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_4_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_5_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_5_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_2_0_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_2_0_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_2_1_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_2_1_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_3_0_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_3_0_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_3_1_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_3_1_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_3_2_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_3_2_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_3_3_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_3_3_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_0_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_0_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_1_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_1_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_2_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_2_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_3_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_3_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_4_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_4_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_5_corebackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_5_corebackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_0_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_0_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_1_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_1_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_2_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_2_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_3_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_3_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_1_4_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_1_4_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_2_0_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_2_0_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_3_0_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_3_0_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_3_3_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_3_3_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}

QOpenGLContext* q_openglfunctions_4_5_deprecatedbackend_context(void* self) {
    return QOpenGLVersionFunctionsBackend_Context((QOpenGLVersionFunctionsBackend*)self);
}

void q_openglfunctions_4_5_deprecatedbackend_set_context(void* self, void* context) {
    QOpenGLVersionFunctionsBackend_SetContext((QOpenGLVersionFunctionsBackend*)self, (QOpenGLContext*)context);
}
