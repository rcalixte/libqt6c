#include "libqquickgraphicsconfiguration.hpp"
#include "libqquickgraphicsconfiguration.h"

QQuickGraphicsConfiguration* q_quickgraphicsconfiguration_new() {
    return QQuickGraphicsConfiguration_New();
}

QQuickGraphicsConfiguration* q_quickgraphicsconfiguration_new2(void* other) {
    return QQuickGraphicsConfiguration_New2((QQuickGraphicsConfiguration*)other);
}

void q_quickgraphicsconfiguration_operator_assign(void* self, void* other) {
    QQuickGraphicsConfiguration_OperatorAssign((QQuickGraphicsConfiguration*)self, (QQuickGraphicsConfiguration*)other);
}

const char** q_quickgraphicsconfiguration_preferred_instance_extensions() {
    libqt_list _arr = QQuickGraphicsConfiguration_PreferredInstanceExtensions();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickgraphicsconfiguration_preferred_instance_extensions\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_quickgraphicsconfiguration_set_device_extensions(void* self, const char* extensions[static 1]) {
    size_t extensions_len = libqt_strv_length(extensions);
    libqt_string* extensions_qstr = (libqt_string*)malloc(extensions_len * sizeof(libqt_string));
    if (extensions_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickgraphicsconfiguration_set_device_extensions\n");
        abort();
    }
    for (size_t i = 0; i < extensions_len; ++i)
        extensions_qstr[i] = qstring(extensions[i]);
    libqt_list extensions_list = qlist(extensions_qstr, extensions_len);
    QQuickGraphicsConfiguration_SetDeviceExtensions((QQuickGraphicsConfiguration*)self, extensions_list);
    free(extensions_qstr);
}

const char** q_quickgraphicsconfiguration_device_extensions(void* self) {
    libqt_list _arr = QQuickGraphicsConfiguration_DeviceExtensions((QQuickGraphicsConfiguration*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickgraphicsconfiguration_device_extensions\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_quickgraphicsconfiguration_set_depth_buffer_for2_d(void* self, bool enable) {
    QQuickGraphicsConfiguration_SetDepthBufferFor2D((QQuickGraphicsConfiguration*)self, enable);
}

bool q_quickgraphicsconfiguration_is_depth_buffer_enabled_for2_d(void* self) {
    return QQuickGraphicsConfiguration_IsDepthBufferEnabledFor2D((QQuickGraphicsConfiguration*)self);
}

void q_quickgraphicsconfiguration_set_debug_layer(void* self, bool enable) {
    QQuickGraphicsConfiguration_SetDebugLayer((QQuickGraphicsConfiguration*)self, enable);
}

bool q_quickgraphicsconfiguration_is_debug_layer_enabled(void* self) {
    return QQuickGraphicsConfiguration_IsDebugLayerEnabled((QQuickGraphicsConfiguration*)self);
}

void q_quickgraphicsconfiguration_set_debug_markers(void* self, bool enable) {
    QQuickGraphicsConfiguration_SetDebugMarkers((QQuickGraphicsConfiguration*)self, enable);
}

bool q_quickgraphicsconfiguration_is_debug_markers_enabled(void* self) {
    return QQuickGraphicsConfiguration_IsDebugMarkersEnabled((QQuickGraphicsConfiguration*)self);
}

void q_quickgraphicsconfiguration_set_timestamps(void* self, bool enable) {
    QQuickGraphicsConfiguration_SetTimestamps((QQuickGraphicsConfiguration*)self, enable);
}

bool q_quickgraphicsconfiguration_timestamps_enabled(void* self) {
    return QQuickGraphicsConfiguration_TimestampsEnabled((QQuickGraphicsConfiguration*)self);
}

void q_quickgraphicsconfiguration_set_prefer_software_device(void* self, bool enable) {
    QQuickGraphicsConfiguration_SetPreferSoftwareDevice((QQuickGraphicsConfiguration*)self, enable);
}

bool q_quickgraphicsconfiguration_prefers_software_device(void* self) {
    return QQuickGraphicsConfiguration_PrefersSoftwareDevice((QQuickGraphicsConfiguration*)self);
}

void q_quickgraphicsconfiguration_set_automatic_pipeline_cache(void* self, bool enable) {
    QQuickGraphicsConfiguration_SetAutomaticPipelineCache((QQuickGraphicsConfiguration*)self, enable);
}

bool q_quickgraphicsconfiguration_is_automatic_pipeline_cache_enabled(void* self) {
    return QQuickGraphicsConfiguration_IsAutomaticPipelineCacheEnabled((QQuickGraphicsConfiguration*)self);
}

void q_quickgraphicsconfiguration_set_pipeline_cache_save_file(void* self, const char* filename) {
    QQuickGraphicsConfiguration_SetPipelineCacheSaveFile((QQuickGraphicsConfiguration*)self, qstring(filename));
}

const char* q_quickgraphicsconfiguration_pipeline_cache_save_file(void* self) {
    libqt_string _str = QQuickGraphicsConfiguration_PipelineCacheSaveFile((QQuickGraphicsConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickgraphicsconfiguration_set_pipeline_cache_load_file(void* self, const char* filename) {
    QQuickGraphicsConfiguration_SetPipelineCacheLoadFile((QQuickGraphicsConfiguration*)self, qstring(filename));
}

const char* q_quickgraphicsconfiguration_pipeline_cache_load_file(void* self) {
    libqt_string _str = QQuickGraphicsConfiguration_PipelineCacheLoadFile((QQuickGraphicsConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickgraphicsconfiguration_delete(void* self) {
    QQuickGraphicsConfiguration_Delete((QQuickGraphicsConfiguration*)(self));
}
