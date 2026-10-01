#pragma once
#ifndef WEBENGINE_LIBQWEBENGINESCRIPTCOLLECTION_H
#define WEBENGINE_LIBQWEBENGINESCRIPTCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#isEmpty)
///
/// @param self const QWebEngineScriptCollection*
///
bool q_webenginescriptcollection_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#count)
///
/// @param self const QWebEngineScriptCollection*
///
int32_t q_webenginescriptcollection_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#contains)
///
/// @param self const QWebEngineScriptCollection*
/// @param value QWebEngineScript*
///
bool q_webenginescriptcollection_contains(const void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#find)
///
/// @param self const QWebEngineScriptCollection*
/// @param name const char*
///
/// @return libqt_list of QWebEngineScript*
///
libqt_list q_webenginescriptcollection_find(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// @param self QWebEngineScriptCollection*
/// @param param1 QWebEngineScript*
///
void q_webenginescriptcollection_insert(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// @param self QWebEngineScriptCollection*
/// @param list libqt_list of QWebEngineScript*
///
void q_webenginescriptcollection_insert2(void* self, libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#remove)
///
/// @param self QWebEngineScriptCollection*
/// @param param1 QWebEngineScript*
///
bool q_webenginescriptcollection_remove(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#clear)
///
/// @param self QWebEngineScriptCollection*
///
void q_webenginescriptcollection_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#toList)
///
/// @param self const QWebEngineScriptCollection*
///
/// @return libqt_list of QWebEngineScript*
///
libqt_list q_webenginescriptcollection_to_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#dtor.QWebEngineScriptCollection)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineScriptCollection*
///
void q_webenginescriptcollection_delete(void* self);

#endif
