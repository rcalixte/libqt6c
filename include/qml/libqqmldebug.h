#pragma once
#ifndef QML_LIBQQMLDEBUG_H
#define QML_LIBQQMLDEBUG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html)

/// q_qmldebuggingenabler_new constructs a new QQmlDebuggingEnabler object.
///
/// @param other QQmlDebuggingEnabler*
///
QQmlDebuggingEnabler* q_qmldebuggingenabler_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html)

/// q_qmldebuggingenabler_new2 constructs a new QQmlDebuggingEnabler object and invalidates the source QQmlDebuggingEnabler object.
///
/// @param other QQmlDebuggingEnabler*
///
QQmlDebuggingEnabler* q_qmldebuggingenabler_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html)

/// q_qmldebuggingenabler_new3 constructs a new QQmlDebuggingEnabler object.
///
QQmlDebuggingEnabler* q_qmldebuggingenabler_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html)

/// q_qmldebuggingenabler_new4 constructs a new QQmlDebuggingEnabler object.
///
/// @param printWarning bool
///
QQmlDebuggingEnabler* q_qmldebuggingenabler_new4(bool printWarning);

/// q_qmldebuggingenabler_copy_assign shallow copies `other` into `self`.
///
/// @param self QQmlDebuggingEnabler*
/// @param other QQmlDebuggingEnabler*
///
void q_qmldebuggingenabler_copy_assign(void* self, void* other);

/// q_qmldebuggingenabler_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQmlDebuggingEnabler*
/// @param other QQmlDebuggingEnabler*
///
void q_qmldebuggingenabler_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#enableDebugging)
///
/// @param printWarning bool
///
void q_qmldebuggingenabler_enable_debugging(bool printWarning);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#debuggerServices)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_qmldebuggingenabler_debugger_services();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#inspectorServices)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_qmldebuggingenabler_inspector_services();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#profilerServices)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_qmldebuggingenabler_profiler_services();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#nativeDebuggerServices)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_qmldebuggingenabler_native_debugger_services();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#setServices)
///
/// @param services const char**
///
void q_qmldebuggingenabler_set_services(const char* services[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startTcpDebugServer)
///
/// @param port int
///
bool q_qmldebuggingenabler_start_tcp_debug_server(int port);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#connectToLocalDebugger)
///
/// @param socketFileName const char*
///
bool q_qmldebuggingenabler_connect_to_local_debugger(const char* socketFileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startDebugConnector)
///
/// @param pluginName const char*
///
bool q_qmldebuggingenabler_start_debug_connector(const char* pluginName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startTcpDebugServer)
///
/// @param port int
/// @param mode enum QQmlDebuggingEnabler__StartMode
///
bool q_qmldebuggingenabler_start_tcp_debug_server2(int port, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startTcpDebugServer)
///
/// @param port int
/// @param mode enum QQmlDebuggingEnabler__StartMode
/// @param hostName const char*
///
bool q_qmldebuggingenabler_start_tcp_debug_server3(int port, int32_t mode, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#connectToLocalDebugger)
///
/// @param socketFileName const char*
/// @param mode enum QQmlDebuggingEnabler__StartMode
///
bool q_qmldebuggingenabler_connect_to_local_debugger2(const char* socketFileName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startDebugConnector)
///
/// @param pluginName const char*
/// @param configuration libqt_map of const char* to QVariant*
///
bool q_qmldebuggingenabler_start_debug_connector2(const char* pluginName, libqt_map configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#dtor.QQmlDebuggingEnabler)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlDebuggingEnabler*
///
void q_qmldebuggingenabler_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmldebug.html#public-types)

typedef enum {
    QQMLDEBUGGINGENABLER_STARTMODE_DONOTWAITFORCLIENT = 0,
    QQMLDEBUGGINGENABLER_STARTMODE_WAITFORCLIENT = 1
} QQmlDebuggingEnabler__StartMode;

#endif
