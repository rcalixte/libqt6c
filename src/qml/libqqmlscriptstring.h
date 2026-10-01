#pragma once
#ifndef QML_LIBQQMLSCRIPTSTRING_H
#define QML_LIBQQMLSCRIPTSTRING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html)

/// q_qmlscriptstring_new constructs a new QQmlScriptString object.
///
QQmlScriptString* q_qmlscriptstring_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html)

/// q_qmlscriptstring_new2 constructs a new QQmlScriptString object.
///
/// @param param1 QQmlScriptString*
///
QQmlScriptString* q_qmlscriptstring_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#operator-eq)
///
/// @param self QQmlScriptString*
/// @param param1 QQmlScriptString*
///
void q_qmlscriptstring_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#operator-eq-eq)
///
/// @param self const QQmlScriptString*
/// @param param1 QQmlScriptString*
///
bool q_qmlscriptstring_operator_equal(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#operator-not-eq)
///
/// @param self const QQmlScriptString*
/// @param param1 QQmlScriptString*
///
bool q_qmlscriptstring_operator_not_equal(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#isEmpty)
///
/// @param self const QQmlScriptString*
///
bool q_qmlscriptstring_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#isUndefinedLiteral)
///
/// @param self const QQmlScriptString*
///
bool q_qmlscriptstring_is_undefined_literal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#isNullLiteral)
///
/// @param self const QQmlScriptString*
///
bool q_qmlscriptstring_is_null_literal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#stringLiteral)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlScriptString*
///
const char* q_qmlscriptstring_string_literal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#numberLiteral)
///
/// @param self const QQmlScriptString*
/// @param ok bool*
///
double q_qmlscriptstring_number_literal(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#booleanLiteral)
///
/// @param self const QQmlScriptString*
/// @param ok bool*
///
bool q_qmlscriptstring_boolean_literal(const void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlscriptstring.html#dtor.QQmlScriptString)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlScriptString*
///
void q_qmlscriptstring_delete(void* self);

#endif
