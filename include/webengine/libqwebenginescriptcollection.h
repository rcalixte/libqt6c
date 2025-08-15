#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPTCOLLECTION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPTCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginescriptcollection.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#isEmpty)
///
/// @param self QWebEngineScriptCollection*
bool q_webenginescriptcollection_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#count)
///
/// @param self QWebEngineScriptCollection*
int32_t q_webenginescriptcollection_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#contains)
///
/// @param self QWebEngineScriptCollection*
/// @param value QWebEngineScript*
bool q_webenginescriptcollection_contains(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#find)
///
/// @param self QWebEngineScriptCollection*
/// @param name const char*
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_find(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// @param self QWebEngineScriptCollection*
/// @param param1 QWebEngineScript*
void q_webenginescriptcollection_insert(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// @param self QWebEngineScriptCollection*
/// @param list libqt_list /* of QWebEngineScript* */
void q_webenginescriptcollection_insert2(void* self, libqt_list list);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#remove)
///
/// @param self QWebEngineScriptCollection*
/// @param param1 QWebEngineScript*
bool q_webenginescriptcollection_remove(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#clear)
///
/// @param self QWebEngineScriptCollection*
void q_webenginescriptcollection_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#toList)
///
/// @param self QWebEngineScriptCollection*
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_to_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#dtor.QWebEngineScriptCollection)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineScriptCollection*
void q_webenginescriptcollection_delete(void* self);

#endif
