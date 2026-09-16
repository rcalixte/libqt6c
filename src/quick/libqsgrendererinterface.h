#pragma once
#ifndef QUICK_LIBQSGRENDERERINTERFACE_H
#define QUICK_LIBQSGRENDERERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#graphicsApi)
///
/// @param self QSGRendererInterface*
///
/// @return enum QSGRendererInterface__GraphicsApi
///
int32_t q_sgrendererinterface_graphics_api(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#getResource)
///
/// @param self QSGRendererInterface*
/// @param window QQuickWindow*
/// @param resource enum QSGRendererInterface__Resource
///
void* q_sgrendererinterface_get_resource(void* self, void* window, int32_t resource);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#getResource)
///
/// @param self QSGRendererInterface*
/// @param window QQuickWindow*
/// @param resource const char*
///
void* q_sgrendererinterface_get_resource2(void* self, void* window, const char* resource);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#shaderType)
///
/// @param self QSGRendererInterface*
///
/// @return enum QSGRendererInterface__ShaderType
///
int32_t q_sgrendererinterface_shader_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#shaderCompilationType)
///
/// @param self QSGRendererInterface*
///
/// @return flag of enum QSGRendererInterface__ShaderCompilationType
///
int32_t q_sgrendererinterface_shader_compilation_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#shaderSourceType)
///
/// @param self QSGRendererInterface*
///
/// @return flag of enum QSGRendererInterface__ShaderSourceType
///
int32_t q_sgrendererinterface_shader_source_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#isApiRhiBased)
///
/// @param api enum QSGRendererInterface__GraphicsApi
///
bool q_sgrendererinterface_is_api_rhi_based(int32_t api);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#operator-eq)
///
/// @param self QSGRendererInterface*
/// @param param1 QSGRendererInterface*
///
void q_sgrendererinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#dtor.QSGRendererInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QSGRendererInterface*
///
void q_sgrendererinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)

typedef enum {
    QSGRENDERERINTERFACE_GRAPHICSAPI_UNKNOWN = 0,
    QSGRENDERERINTERFACE_GRAPHICSAPI_SOFTWARE = 1,
    QSGRENDERERINTERFACE_GRAPHICSAPI_OPENVG = 2,
    QSGRENDERERINTERFACE_GRAPHICSAPI_OPENGL = 3,
    QSGRENDERERINTERFACE_GRAPHICSAPI_DIRECT3D11 = 4,
    QSGRENDERERINTERFACE_GRAPHICSAPI_VULKAN = 5,
    QSGRENDERERINTERFACE_GRAPHICSAPI_METAL = 6,
    QSGRENDERERINTERFACE_GRAPHICSAPI_NULL = 7,
    QSGRENDERERINTERFACE_GRAPHICSAPI_DIRECT3D12 = 8,
    QSGRENDERERINTERFACE_GRAPHICSAPI_OPENGLRHI = 3,
    QSGRENDERERINTERFACE_GRAPHICSAPI_DIRECT3D11RHI = 4,
    QSGRENDERERINTERFACE_GRAPHICSAPI_VULKANRHI = 5,
    QSGRENDERERINTERFACE_GRAPHICSAPI_METALRHI = 6,
    QSGRENDERERINTERFACE_GRAPHICSAPI_NULLRHI = 7
} QSGRendererInterface__GraphicsApi;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)

typedef enum {
    QSGRENDERERINTERFACE_RESOURCE_DEVICERESOURCE = 0,
    QSGRENDERERINTERFACE_RESOURCE_COMMANDQUEUERESOURCE = 1,
    QSGRENDERERINTERFACE_RESOURCE_COMMANDLISTRESOURCE = 2,
    QSGRENDERERINTERFACE_RESOURCE_PAINTERRESOURCE = 3,
    QSGRENDERERINTERFACE_RESOURCE_RHIRESOURCE = 4,
    QSGRENDERERINTERFACE_RESOURCE_RHISWAPCHAINRESOURCE = 5,
    QSGRENDERERINTERFACE_RESOURCE_RHIREDIRECTCOMMANDBUFFER = 6,
    QSGRENDERERINTERFACE_RESOURCE_RHIREDIRECTRENDERTARGET = 7,
    QSGRENDERERINTERFACE_RESOURCE_PHYSICALDEVICERESOURCE = 8,
    QSGRENDERERINTERFACE_RESOURCE_OPENGLCONTEXTRESOURCE = 9,
    QSGRENDERERINTERFACE_RESOURCE_DEVICECONTEXTRESOURCE = 10,
    QSGRENDERERINTERFACE_RESOURCE_COMMANDENCODERRESOURCE = 11,
    QSGRENDERERINTERFACE_RESOURCE_VULKANINSTANCERESOURCE = 12,
    QSGRENDERERINTERFACE_RESOURCE_RENDERPASSRESOURCE = 13,
    QSGRENDERERINTERFACE_RESOURCE_REDIRECTPAINTDEVICE = 14,
    QSGRENDERERINTERFACE_RESOURCE_GRAPHICSQUEUEFAMILYINDEXRESOURCE = 15,
    QSGRENDERERINTERFACE_RESOURCE_GRAPHICSQUEUEINDEXRESOURCE = 16
} QSGRendererInterface__Resource;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)

typedef enum {
    QSGRENDERERINTERFACE_SHADERTYPE_UNKNOWNSHADINGLANGUAGE = 0,
    QSGRENDERERINTERFACE_SHADERTYPE_GLSL = 1,
    QSGRENDERERINTERFACE_SHADERTYPE_HLSL = 2,
    QSGRENDERERINTERFACE_SHADERTYPE_RHISHADER = 3
} QSGRendererInterface__ShaderType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)

typedef enum {
    QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_RUNTIMECOMPILATION = 1,
    QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_OFFLINECOMPILATION = 2
} QSGRendererInterface__ShaderCompilationType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)

typedef enum {
    QSGRENDERERINTERFACE_SHADERSOURCETYPE_SHADERSOURCESTRING = 1,
    QSGRENDERERINTERFACE_SHADERSOURCETYPE_SHADERSOURCEFILE = 2,
    QSGRENDERERINTERFACE_SHADERSOURCETYPE_SHADERBYTECODE = 4
} QSGRendererInterface__ShaderSourceType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgrendererinterface.html#public-types)

typedef enum {
    QSGRENDERERINTERFACE_RENDERMODE_RENDERMODE2D = 0,
    QSGRENDERERINTERFACE_RENDERMODE_RENDERMODE2DNODEPTHBUFFER = 1,
    QSGRENDERERINTERFACE_RENDERMODE_RENDERMODE3D = 2
} QSGRendererInterface__RenderMode;

#endif
