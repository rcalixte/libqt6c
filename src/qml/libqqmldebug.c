#include "../libqvariant.hpp"
#include "libqqmldebug.hpp"
#include "libqqmldebug.h"

QQmlDebuggingEnabler* q_qmldebuggingenabler_new(void* other) {
    return QQmlDebuggingEnabler_New((QQmlDebuggingEnabler*)other);
}

QQmlDebuggingEnabler* q_qmldebuggingenabler_new2(void* other) {
    return QQmlDebuggingEnabler_New2((QQmlDebuggingEnabler*)other);
}

QQmlDebuggingEnabler* q_qmldebuggingenabler_new3() {
    return QQmlDebuggingEnabler_New3();
}

QQmlDebuggingEnabler* q_qmldebuggingenabler_new4(bool printWarning) {
    return QQmlDebuggingEnabler_New4(printWarning);
}

void q_qmldebuggingenabler_copy_assign(void* self, void* other) {
    QQmlDebuggingEnabler_CopyAssign((QQmlDebuggingEnabler*)self, (QQmlDebuggingEnabler*)other);
}

void q_qmldebuggingenabler_move_assign(void* self, void* other) {
    QQmlDebuggingEnabler_MoveAssign((QQmlDebuggingEnabler*)self, (QQmlDebuggingEnabler*)other);
}

void q_qmldebuggingenabler_enable_debugging(bool printWarning) {
    QQmlDebuggingEnabler_EnableDebugging(printWarning);
}

const char** q_qmldebuggingenabler_debugger_services() {
    libqt_list _arr = QQmlDebuggingEnabler_DebuggerServices();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmldebuggingenabler_debugger_services\n");
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

const char** q_qmldebuggingenabler_inspector_services() {
    libqt_list _arr = QQmlDebuggingEnabler_InspectorServices();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmldebuggingenabler_inspector_services\n");
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

const char** q_qmldebuggingenabler_profiler_services() {
    libqt_list _arr = QQmlDebuggingEnabler_ProfilerServices();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmldebuggingenabler_profiler_services\n");
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

const char** q_qmldebuggingenabler_native_debugger_services() {
    libqt_list _arr = QQmlDebuggingEnabler_NativeDebuggerServices();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmldebuggingenabler_native_debugger_services\n");
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

void q_qmldebuggingenabler_set_services(const char* services[static 1]) {
    size_t services_len = libqt_strv_length(services);
    libqt_string* services_qstr = (libqt_string*)malloc(services_len * sizeof(libqt_string));
    if (services_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmldebuggingenabler_set_services\n");
        abort();
    }
    for (size_t i = 0; i < services_len; ++i)
        services_qstr[i] = qstring(services[i]);
    libqt_list services_list = qlist(services_qstr, services_len);
    QQmlDebuggingEnabler_SetServices(services_list);
    free(services_qstr);
}

bool q_qmldebuggingenabler_start_tcp_debug_server(int port) {
    return QQmlDebuggingEnabler_StartTcpDebugServer(port);
}

bool q_qmldebuggingenabler_connect_to_local_debugger(const char* socketFileName) {
    return QQmlDebuggingEnabler_ConnectToLocalDebugger(qstring(socketFileName));
}

bool q_qmldebuggingenabler_start_debug_connector(const char* pluginName) {
    return QQmlDebuggingEnabler_StartDebugConnector(qstring(pluginName));
}

bool q_qmldebuggingenabler_start_tcp_debug_server2(int port, int32_t mode) {
    return QQmlDebuggingEnabler_StartTcpDebugServer2(port, mode);
}

bool q_qmldebuggingenabler_start_tcp_debug_server3(int port, int32_t mode, const char* hostName) {
    return QQmlDebuggingEnabler_StartTcpDebugServer3(port, mode, qstring(hostName));
}

bool q_qmldebuggingenabler_connect_to_local_debugger2(const char* socketFileName, int32_t mode) {
    return QQmlDebuggingEnabler_ConnectToLocalDebugger2(qstring(socketFileName), mode);
}

bool q_qmldebuggingenabler_start_debug_connector2(const char* pluginName, libqt_map /* of const char* to QVariant* */ configuration) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map configuration_ret;
    configuration_ret.len = configuration.len;
    configuration_ret.keys = (libqt_string*)malloc(configuration_ret.len * sizeof(libqt_string));
    if (configuration_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmldebuggingenabler_start_debug_connector2\n");
        abort();
    }
    configuration_ret.values = (QVariant**)malloc(configuration_ret.len * sizeof(QVariant*));
    if (configuration_ret.values == NULL) {
        free(configuration_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmldebuggingenabler_start_debug_connector2\n");
        abort();
    }
    const char** configuration_karr = (const char**)configuration.keys;
    libqt_string* configuration_kdest = (libqt_string*)configuration_ret.keys;
    QVariant** configuration_varr = (QVariant**)configuration.values;
    QVariant** configuration_vdest = (QVariant**)configuration_ret.values;
    for (size_t i = 0; i < configuration_ret.len; ++i) {
        configuration_kdest[i] = qstring(configuration_karr[i]);
        configuration_vdest[i] = configuration_varr[i];
    }
    bool _out = QQmlDebuggingEnabler_StartDebugConnector2(qstring(pluginName), configuration_ret);
    free(configuration_ret.keys);
    free(configuration_ret.values);
    return _out;
}

void q_qmldebuggingenabler_delete(void* self) {
    QQmlDebuggingEnabler_Delete((QQmlDebuggingEnabler*)(self));
}
