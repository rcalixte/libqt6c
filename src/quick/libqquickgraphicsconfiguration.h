#pragma once
#ifndef QUICK_LIBQQUICKGRAPHICSCONFIGURATION_H
#define QUICK_LIBQQUICKGRAPHICSCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html)

/// q_quickgraphicsconfiguration_new constructs a new QQuickGraphicsConfiguration object.
///
QQuickGraphicsConfiguration* q_quickgraphicsconfiguration_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html)

/// q_quickgraphicsconfiguration_new2 constructs a new QQuickGraphicsConfiguration object.
///
/// @param other QQuickGraphicsConfiguration*
///
QQuickGraphicsConfiguration* q_quickgraphicsconfiguration_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#operator-eq)
///
/// @param self QQuickGraphicsConfiguration*
/// @param other QQuickGraphicsConfiguration*
///
void q_quickgraphicsconfiguration_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#preferredInstanceExtensions)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_quickgraphicsconfiguration_preferred_instance_extensions();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDeviceExtensions)
///
/// @param self QQuickGraphicsConfiguration*
/// @param extensions const char**
///
void q_quickgraphicsconfiguration_set_device_extensions(void* self, const char* extensions[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#deviceExtensions)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickGraphicsConfiguration*
///
const char** q_quickgraphicsconfiguration_device_extensions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDepthBufferFor2D)
///
/// @param self QQuickGraphicsConfiguration*
/// @param enable bool
///
void q_quickgraphicsconfiguration_set_depth_buffer_for2_d(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isDepthBufferEnabledFor2D)
///
/// @param self QQuickGraphicsConfiguration*
///
bool q_quickgraphicsconfiguration_is_depth_buffer_enabled_for2_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDebugLayer)
///
/// @param self QQuickGraphicsConfiguration*
/// @param enable bool
///
void q_quickgraphicsconfiguration_set_debug_layer(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isDebugLayerEnabled)
///
/// @param self QQuickGraphicsConfiguration*
///
bool q_quickgraphicsconfiguration_is_debug_layer_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setDebugMarkers)
///
/// @param self QQuickGraphicsConfiguration*
/// @param enable bool
///
void q_quickgraphicsconfiguration_set_debug_markers(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isDebugMarkersEnabled)
///
/// @param self QQuickGraphicsConfiguration*
///
bool q_quickgraphicsconfiguration_is_debug_markers_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setTimestamps)
///
/// @param self QQuickGraphicsConfiguration*
/// @param enable bool
///
void q_quickgraphicsconfiguration_set_timestamps(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#timestampsEnabled)
///
/// @param self QQuickGraphicsConfiguration*
///
bool q_quickgraphicsconfiguration_timestamps_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setPreferSoftwareDevice)
///
/// @param self QQuickGraphicsConfiguration*
/// @param enable bool
///
void q_quickgraphicsconfiguration_set_prefer_software_device(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#prefersSoftwareDevice)
///
/// @param self QQuickGraphicsConfiguration*
///
bool q_quickgraphicsconfiguration_prefers_software_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setAutomaticPipelineCache)
///
/// @param self QQuickGraphicsConfiguration*
/// @param enable bool
///
void q_quickgraphicsconfiguration_set_automatic_pipeline_cache(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#isAutomaticPipelineCacheEnabled)
///
/// @param self QQuickGraphicsConfiguration*
///
bool q_quickgraphicsconfiguration_is_automatic_pipeline_cache_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setPipelineCacheSaveFile)
///
/// @param self QQuickGraphicsConfiguration*
/// @param filename const char*
///
void q_quickgraphicsconfiguration_set_pipeline_cache_save_file(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#pipelineCacheSaveFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickGraphicsConfiguration*
///
const char* q_quickgraphicsconfiguration_pipeline_cache_save_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#setPipelineCacheLoadFile)
///
/// @param self QQuickGraphicsConfiguration*
/// @param filename const char*
///
void q_quickgraphicsconfiguration_set_pipeline_cache_load_file(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#pipelineCacheLoadFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickGraphicsConfiguration*
///
const char* q_quickgraphicsconfiguration_pipeline_cache_load_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsconfiguration.html#dtor.QQuickGraphicsConfiguration)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickGraphicsConfiguration*
///
void q_quickgraphicsconfiguration_delete(void* self);

#endif
