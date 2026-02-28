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

pair_int_int /* tuple of int and int */ q_openglversionstatus_version(void* self) {
    return QOpenGLVersionStatus_Version((QOpenGLVersionStatus*)self);
}

void q_openglversionstatus_set_version(void* self, pair_int_int /* tuple of int and int */ version) {
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

QOpenGLVersionFunctionsBackend** q_openglversionfunctionsstorage_backends(void* self) {
    return QOpenGLVersionFunctionsStorage_Backends((QOpenGLVersionFunctionsStorage*)self);
}

void q_openglversionfunctionsstorage_set_backends(void* self, void** backends) {
    QOpenGLVersionFunctionsStorage_SetBackends((QOpenGLVersionFunctionsStorage*)self, (QOpenGLVersionFunctionsBackend**)backends);
}

void q_openglversionfunctionsstorage_delete(void* self) {
    QOpenGLVersionFunctionsStorage_Delete((QOpenGLVersionFunctionsStorage*)(self));
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

GLboolean__GLenum__Function q_openglfunctions_1_0_corebackend__functions_is_enabled(void* self) {
    return (GLboolean__GLenum__Function)QOpenGLFunctions_1_0_CoreBackend__Functions_IsEnabled((QOpenGLFunctions_1_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_1_0_corebackend__functions_set_is_enabled(void* self, uint8_t (*isEnabled)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_0_CoreBackend__Functions_SetIsEnabled((QOpenGLFunctions_1_0_CoreBackend__Functions*)self, (intptr_t)isEnabled);
}

void q_openglfunctions_1_0_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_1_0_CoreBackend__Functions_Delete((QOpenGLFunctions_1_0_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_1_1_corebackend__functions_is_texture(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_1_1_CoreBackend__Functions_IsTexture((QOpenGLFunctions_1_1_CoreBackend__Functions*)self);
}

void q_openglfunctions_1_1_corebackend__functions_set_is_texture(void* self, uint8_t (*isTexture)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_1_CoreBackend__Functions_SetIsTexture((QOpenGLFunctions_1_1_CoreBackend__Functions*)self, (intptr_t)isTexture);
}

void q_openglfunctions_1_1_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_1_1_CoreBackend__Functions_Delete((QOpenGLFunctions_1_1_CoreBackend__Functions*)(self));
}

GLboolean__GLenum__Function q_openglfunctions_1_5_corebackend__functions_unmap_buffer(void* self) {
    return (GLboolean__GLenum__Function)QOpenGLFunctions_1_5_CoreBackend__Functions_UnmapBuffer((QOpenGLFunctions_1_5_CoreBackend__Functions*)self);
}

void q_openglfunctions_1_5_corebackend__functions_set_unmap_buffer(void* self, uint8_t (*unmapBuffer)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_5_CoreBackend__Functions_SetUnmapBuffer((QOpenGLFunctions_1_5_CoreBackend__Functions*)self, (intptr_t)unmapBuffer);
}

GLboolean__GLuint__Function q_openglfunctions_1_5_corebackend__functions_is_buffer(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_1_5_CoreBackend__Functions_IsBuffer((QOpenGLFunctions_1_5_CoreBackend__Functions*)self);
}

void q_openglfunctions_1_5_corebackend__functions_set_is_buffer(void* self, uint8_t (*isBuffer)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsBuffer((QOpenGLFunctions_1_5_CoreBackend__Functions*)self, (intptr_t)isBuffer);
}

GLboolean__GLuint__Function q_openglfunctions_1_5_corebackend__functions_is_query(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_1_5_CoreBackend__Functions_IsQuery((QOpenGLFunctions_1_5_CoreBackend__Functions*)self);
}

void q_openglfunctions_1_5_corebackend__functions_set_is_query(void* self, uint8_t (*isQuery)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsQuery((QOpenGLFunctions_1_5_CoreBackend__Functions*)self, (intptr_t)isQuery);
}

void q_openglfunctions_1_5_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_1_5_CoreBackend__Functions_Delete((QOpenGLFunctions_1_5_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_2_0_corebackend__functions_is_shader(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_2_0_CoreBackend__Functions_IsShader((QOpenGLFunctions_2_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_2_0_corebackend__functions_set_is_shader(void* self, uint8_t (*isShader)(uint32_t funcparam1)) {
    QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsShader((QOpenGLFunctions_2_0_CoreBackend__Functions*)self, (intptr_t)isShader);
}

GLboolean__GLuint__Function q_openglfunctions_2_0_corebackend__functions_is_program(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_2_0_CoreBackend__Functions_IsProgram((QOpenGLFunctions_2_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_2_0_corebackend__functions_set_is_program(void* self, uint8_t (*isProgram)(uint32_t funcparam1)) {
    QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsProgram((QOpenGLFunctions_2_0_CoreBackend__Functions*)self, (intptr_t)isProgram);
}

GLuint__GLenum__Function q_openglfunctions_2_0_corebackend__functions_create_shader(void* self) {
    return (GLuint__GLenum__Function)QOpenGLFunctions_2_0_CoreBackend__Functions_CreateShader((QOpenGLFunctions_2_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_2_0_corebackend__functions_set_create_shader(void* self, uint32_t (*createShader)(uint32_t funcparam1)) {
    QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateShader((QOpenGLFunctions_2_0_CoreBackend__Functions*)self, (intptr_t)createShader);
}

GLuint__void__Function q_openglfunctions_2_0_corebackend__functions_create_program(void* self) {
    return (GLuint__void__Function)QOpenGLFunctions_2_0_CoreBackend__Functions_CreateProgram((QOpenGLFunctions_2_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_2_0_corebackend__functions_set_create_program(void* self, uint32_t (*createProgram)()) {
    QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateProgram((QOpenGLFunctions_2_0_CoreBackend__Functions*)self, (intptr_t)createProgram);
}

void q_openglfunctions_2_0_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_2_0_CoreBackend__Functions_Delete((QOpenGLFunctions_2_0_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_vertex_array(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_3_0_CoreBackend__Functions_IsVertexArray((QOpenGLFunctions_3_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_3_0_corebackend__functions_set_is_vertex_array(void* self, uint8_t (*isVertexArray)(uint32_t funcparam1)) {
    QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsVertexArray((QOpenGLFunctions_3_0_CoreBackend__Functions*)self, (intptr_t)isVertexArray);
}

GLboolean__GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_framebuffer(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_3_0_CoreBackend__Functions_IsFramebuffer((QOpenGLFunctions_3_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_3_0_corebackend__functions_set_is_framebuffer(void* self, uint8_t (*isFramebuffer)(uint32_t funcparam1)) {
    QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsFramebuffer((QOpenGLFunctions_3_0_CoreBackend__Functions*)self, (intptr_t)isFramebuffer);
}

GLboolean__GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_renderbuffer(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_3_0_CoreBackend__Functions_IsRenderbuffer((QOpenGLFunctions_3_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_3_0_corebackend__functions_set_is_renderbuffer(void* self, uint8_t (*isRenderbuffer)(uint32_t funcparam1)) {
    QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsRenderbuffer((QOpenGLFunctions_3_0_CoreBackend__Functions*)self, (intptr_t)isRenderbuffer);
}

GLboolean__GLenum_GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_enabledi(void* self) {
    return (GLboolean__GLenum_GLuint__Function)QOpenGLFunctions_3_0_CoreBackend__Functions_IsEnabledi((QOpenGLFunctions_3_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_3_0_corebackend__functions_set_is_enabledi(void* self, uint8_t (*isEnabledi)(uint32_t funcparam1, uint32_t funcparam2)) {
    QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsEnabledi((QOpenGLFunctions_3_0_CoreBackend__Functions*)self, (intptr_t)isEnabledi);
}

void q_openglfunctions_3_0_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_3_0_CoreBackend__Functions_Delete((QOpenGLFunctions_3_0_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_3_3_corebackend__functions_is_sampler(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_3_3_CoreBackend__Functions_IsSampler((QOpenGLFunctions_3_3_CoreBackend__Functions*)self);
}

void q_openglfunctions_3_3_corebackend__functions_set_is_sampler(void* self, uint8_t (*isSampler)(uint32_t funcparam1)) {
    QOpenGLFunctions_3_3_CoreBackend__Functions_SetIsSampler((QOpenGLFunctions_3_3_CoreBackend__Functions*)self, (intptr_t)isSampler);
}

void q_openglfunctions_3_3_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_3_3_CoreBackend__Functions_Delete((QOpenGLFunctions_3_3_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_4_0_corebackend__functions_is_transform_feedback(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_4_0_CoreBackend__Functions_IsTransformFeedback((QOpenGLFunctions_4_0_CoreBackend__Functions*)self);
}

void q_openglfunctions_4_0_corebackend__functions_set_is_transform_feedback(void* self, uint8_t (*isTransformFeedback)(uint32_t funcparam1)) {
    QOpenGLFunctions_4_0_CoreBackend__Functions_SetIsTransformFeedback((QOpenGLFunctions_4_0_CoreBackend__Functions*)self, (intptr_t)isTransformFeedback);
}

void q_openglfunctions_4_0_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_4_0_CoreBackend__Functions_Delete((QOpenGLFunctions_4_0_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_4_1_corebackend__functions_is_program_pipeline(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_4_1_CoreBackend__Functions_IsProgramPipeline((QOpenGLFunctions_4_1_CoreBackend__Functions*)self);
}

void q_openglfunctions_4_1_corebackend__functions_set_is_program_pipeline(void* self, uint8_t (*isProgramPipeline)(uint32_t funcparam1)) {
    QOpenGLFunctions_4_1_CoreBackend__Functions_SetIsProgramPipeline((QOpenGLFunctions_4_1_CoreBackend__Functions*)self, (intptr_t)isProgramPipeline);
}

void q_openglfunctions_4_1_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_4_1_CoreBackend__Functions_Delete((QOpenGLFunctions_4_1_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_4_5_corebackend__functions_unmap_named_buffer(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_4_5_CoreBackend__Functions_UnmapNamedBuffer((QOpenGLFunctions_4_5_CoreBackend__Functions*)self);
}

void q_openglfunctions_4_5_corebackend__functions_set_unmap_named_buffer(void* self, uint8_t (*unmapNamedBuffer)(uint32_t funcparam1)) {
    QOpenGLFunctions_4_5_CoreBackend__Functions_SetUnmapNamedBuffer((QOpenGLFunctions_4_5_CoreBackend__Functions*)self, (intptr_t)unmapNamedBuffer);
}

void q_openglfunctions_4_5_corebackend__functions_delete(void* self) {
    QOpenGLFunctions_4_5_CoreBackend__Functions_Delete((QOpenGLFunctions_4_5_CoreBackend__Functions*)(self));
}

GLboolean__GLuint__Function q_openglfunctions_1_0_deprecatedbackend__functions_is_list(void* self) {
    return (GLboolean__GLuint__Function)QOpenGLFunctions_1_0_DeprecatedBackend__Functions_IsList((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)self);
}

void q_openglfunctions_1_0_deprecatedbackend__functions_set_is_list(void* self, uint8_t (*isList)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetIsList((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)self, (intptr_t)isList);
}

GLint__GLenum__Function q_openglfunctions_1_0_deprecatedbackend__functions_render_mode(void* self) {
    return (GLint__GLenum__Function)QOpenGLFunctions_1_0_DeprecatedBackend__Functions_RenderMode((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)self);
}

void q_openglfunctions_1_0_deprecatedbackend__functions_set_render_mode(void* self, int32_t (*renderMode)(uint32_t funcparam1)) {
    QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetRenderMode((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)self, (intptr_t)renderMode);
}

GLuint__GLsizei__Function q_openglfunctions_1_0_deprecatedbackend__functions_gen_lists(void* self) {
    return (GLuint__GLsizei__Function)QOpenGLFunctions_1_0_DeprecatedBackend__Functions_GenLists((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)self);
}

void q_openglfunctions_1_0_deprecatedbackend__functions_set_gen_lists(void* self, uint32_t (*genLists)(int32_t funcparam1)) {
    QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetGenLists((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)self, (intptr_t)genLists);
}

void q_openglfunctions_1_0_deprecatedbackend__functions_delete(void* self) {
    QOpenGLFunctions_1_0_DeprecatedBackend__Functions_Delete((QOpenGLFunctions_1_0_DeprecatedBackend__Functions*)(self));
}
