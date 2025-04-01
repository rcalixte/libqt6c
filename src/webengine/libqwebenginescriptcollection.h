#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPTCOLLECTION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPTCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "libqwebenginescript.h"

/// https://doc.qt.io/qt-6/qwebenginescriptcollection.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#isEmpty)
///
/// ``` QWebEngineScriptCollection* self ```
bool q_webenginescriptcollection_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#count)
///
/// ``` QWebEngineScriptCollection* self ```
int32_t q_webenginescriptcollection_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#contains)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* value ```
bool q_webenginescriptcollection_contains(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#find)
///
/// ``` QWebEngineScriptCollection* self, const char* name ```
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_find(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* param1 ```
void q_webenginescriptcollection_insert(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* list[] ```
void q_webenginescriptcollection_insert_with_list(void* self, void* list[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#remove)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* param1 ```
bool q_webenginescriptcollection_remove(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#clear)
///
/// ``` QWebEngineScriptCollection* self ```
void q_webenginescriptcollection_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#toList)
///
/// ``` QWebEngineScriptCollection* self ```
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_to_list(void* self);

/// Delete this object from C++ memory.
///
/// ``` QWebEngineScriptCollection* self ```
void q_webenginescriptcollection_delete(void* self);

#endif
