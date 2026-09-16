#include "libqquickwindow.hpp"
#include "libqsgrendererinterface.hpp"
#include "libqsgrendererinterface.h"

int32_t q_sgrendererinterface_graphics_api(void* self) {
    return QSGRendererInterface_GraphicsApi((QSGRendererInterface*)self);
}

void* q_sgrendererinterface_get_resource(void* self, void* window, int32_t resource) {
    return QSGRendererInterface_GetResource((QSGRendererInterface*)self, (QQuickWindow*)window, resource);
}

void* q_sgrendererinterface_get_resource2(void* self, void* window, const char* resource) {
    return QSGRendererInterface_GetResource2((QSGRendererInterface*)self, (QQuickWindow*)window, resource);
}

int32_t q_sgrendererinterface_shader_type(void* self) {
    return QSGRendererInterface_ShaderType((QSGRendererInterface*)self);
}

int32_t q_sgrendererinterface_shader_compilation_type(void* self) {
    return QSGRendererInterface_ShaderCompilationType((QSGRendererInterface*)self);
}

int32_t q_sgrendererinterface_shader_source_type(void* self) {
    return QSGRendererInterface_ShaderSourceType((QSGRendererInterface*)self);
}

bool q_sgrendererinterface_is_api_rhi_based(int32_t api) {
    return QSGRendererInterface_IsApiRhiBased(api);
}

void q_sgrendererinterface_operator_assign(void* self, void* param1) {
    QSGRendererInterface_OperatorAssign((QSGRendererInterface*)self, (QSGRendererInterface*)param1);
}

void q_sgrendererinterface_delete(void* self) {
    QSGRendererInterface_Delete((QSGRendererInterface*)(self));
}
