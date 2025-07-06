#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPT_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginescript.html

/// q_webenginescript_new constructs a new QWebEngineScript object.
///
///
QWebEngineScript* q_webenginescript_new();

/// q_webenginescript_new2 constructs a new QWebEngineScript object.
///
/// ``` QWebEngineScript* other ```
QWebEngineScript* q_webenginescript_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#operator=)
///
/// ``` QWebEngineScript* self, QWebEngineScript* other ```
void q_webenginescript_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#name)
///
/// ``` QWebEngineScript* self ```
const char* q_webenginescript_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#setName)
///
/// ``` QWebEngineScript* self, const char* name ```
void q_webenginescript_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#sourceUrl)
///
/// ``` QWebEngineScript* self ```
QUrl* q_webenginescript_source_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceUrl)
///
/// ``` QWebEngineScript* self, QUrl* url ```
void q_webenginescript_set_source_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#sourceCode)
///
/// ``` QWebEngineScript* self ```
const char* q_webenginescript_source_code(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceCode)
///
/// ``` QWebEngineScript* self, const char* sourceCode ```
void q_webenginescript_set_source_code(void* self, const char* sourceCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#injectionPoint)
///
/// ``` QWebEngineScript* self ```
int64_t q_webenginescript_injection_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#setInjectionPoint)
///
/// ``` QWebEngineScript* self, enum QWebEngineScript__InjectionPoint injectionPoint ```
void q_webenginescript_set_injection_point(void* self, int64_t injectionPoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#worldId)
///
/// ``` QWebEngineScript* self ```
uint32_t q_webenginescript_world_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#setWorldId)
///
/// ``` QWebEngineScript* self, uint32_t worldId ```
void q_webenginescript_set_world_id(void* self, uint32_t worldId);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#runsOnSubFrames)
///
/// ``` QWebEngineScript* self ```
bool q_webenginescript_runs_on_sub_frames(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#setRunsOnSubFrames)
///
/// ``` QWebEngineScript* self, bool on ```
void q_webenginescript_set_runs_on_sub_frames(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#operator==)
///
/// ``` QWebEngineScript* self, QWebEngineScript* other ```
bool q_webenginescript_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#operator!=)
///
/// ``` QWebEngineScript* self, QWebEngineScript* other ```
bool q_webenginescript_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#swap)
///
/// ``` QWebEngineScript* self, QWebEngineScript* other ```
void q_webenginescript_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescript.html#dtor.QWebEngineScript)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineScript* self ```
void q_webenginescript_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginescript.html#types

typedef enum {
    QWEBENGINESCRIPT_INJECTIONPOINT_DEFERRED = 0,
    QWEBENGINESCRIPT_INJECTIONPOINT_DOCUMENTREADY = 1,
    QWEBENGINESCRIPT_INJECTIONPOINT_DOCUMENTCREATION = 2
} QWebEngineScript__InjectionPoint;

typedef enum {
    QWEBENGINESCRIPT_SCRIPTWORLDID_MAINWORLD = 0,
    QWEBENGINESCRIPT_SCRIPTWORLDID_APPLICATIONWORLD = 1,
    QWEBENGINESCRIPT_SCRIPTWORLDID_USERWORLD = 2
} QWebEngineScript__ScriptWorldId;

#endif
