#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINESCRIPT_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINESCRIPT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html)

/// q_webenginescript_new constructs a new QWebEngineScript object.
///
QWebEngineScript* q_webenginescript_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html)

/// q_webenginescript_new2 constructs a new QWebEngineScript object.
///
/// @param other QWebEngineScript*
///
QWebEngineScript* q_webenginescript_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq)
///
/// @param self QWebEngineScript*
/// @param other QWebEngineScript*
///
void q_webenginescript_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineScript*
///
const char* q_webenginescript_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setName)
///
/// @param self QWebEngineScript*
/// @param name const char*
///
void q_webenginescript_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceUrl)
///
/// @param self QWebEngineScript*
///
QUrl* q_webenginescript_source_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceUrl)
///
/// @param self QWebEngineScript*
/// @param url QUrl*
///
void q_webenginescript_set_source_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineScript*
///
const char* q_webenginescript_source_code(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceCode)
///
/// @param self QWebEngineScript*
/// @param sourceCode const char*
///
void q_webenginescript_set_source_code(void* self, const char* sourceCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#injectionPoint)
///
/// @param self QWebEngineScript*
///
/// @return enum QWebEngineScript__InjectionPoint
///
int32_t q_webenginescript_injection_point(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setInjectionPoint)
///
/// @param self QWebEngineScript*
/// @param injectionPoint enum QWebEngineScript__InjectionPoint
///
void q_webenginescript_set_injection_point(void* self, int32_t injectionPoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#worldId)
///
/// @param self QWebEngineScript*
///
uint32_t q_webenginescript_world_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setWorldId)
///
/// @param self QWebEngineScript*
/// @param worldId uint32_t
///
void q_webenginescript_set_world_id(void* self, uint32_t worldId);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#runsOnSubFrames)
///
/// @param self QWebEngineScript*
///
bool q_webenginescript_runs_on_sub_frames(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setRunsOnSubFrames)
///
/// @param self QWebEngineScript*
/// @param on bool
///
void q_webenginescript_set_runs_on_sub_frames(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq-eq)
///
/// @param self QWebEngineScript*
/// @param other QWebEngineScript*
///
bool q_webenginescript_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-not-eq)
///
/// @param self QWebEngineScript*
/// @param other QWebEngineScript*
///
bool q_webenginescript_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#swap)
///
/// @param self QWebEngineScript*
/// @param other QWebEngineScript*
///
void q_webenginescript_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#dtor.QWebEngineScript)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineScript*
///
void q_webenginescript_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#public-types)

typedef enum {
    QWEBENGINESCRIPT_INJECTIONPOINT_DEFERRED = 0,
    QWEBENGINESCRIPT_INJECTIONPOINT_DOCUMENTREADY = 1,
    QWEBENGINESCRIPT_INJECTIONPOINT_DOCUMENTCREATION = 2
} QWebEngineScript__InjectionPoint;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#public-types)

typedef enum {
    QWEBENGINESCRIPT_SCRIPTWORLDID_MAINWORLD = 0,
    QWEBENGINESCRIPT_SCRIPTWORLDID_APPLICATIONWORLD = 1,
    QWEBENGINESCRIPT_SCRIPTWORLDID_USERWORLD = 2
} QWebEngineScript__ScriptWorldId;

#endif
