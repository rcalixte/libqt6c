#pragma once
#ifndef QML_LIBQQMLERROR_H
#define QML_LIBQQMLERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html)

/// q_qmlerror_new constructs a new QQmlError object.
///
QQmlError* q_qmlerror_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html)

/// q_qmlerror_new2 constructs a new QQmlError object.
///
/// @param param1 QQmlError*
///
QQmlError* q_qmlerror_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#operator-eq)
///
/// @param self QQmlError*
/// @param param1 QQmlError*
///
void q_qmlerror_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#swap)
///
/// @param self QQmlError*
/// @param other QQmlError*
///
void q_qmlerror_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#isValid)
///
/// @param self QQmlError*
///
bool q_qmlerror_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#url)
///
/// @param self QQmlError*
///
QUrl* q_qmlerror_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setUrl)
///
/// @param self QQmlError*
/// @param url QUrl*
///
void q_qmlerror_set_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlError*
///
const char* q_qmlerror_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setDescription)
///
/// @param self QQmlError*
/// @param description const char*
///
void q_qmlerror_set_description(void* self, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#line)
///
/// @param self QQmlError*
///
int32_t q_qmlerror_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setLine)
///
/// @param self QQmlError*
/// @param line int
///
void q_qmlerror_set_line(void* self, int line);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#column)
///
/// @param self QQmlError*
///
int32_t q_qmlerror_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setColumn)
///
/// @param self QQmlError*
/// @param column int
///
void q_qmlerror_set_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#object)
///
/// @param self QQmlError*
///
QObject* q_qmlerror_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#setObject)
///
/// @param self QQmlError*
/// @param object QObject*
///
void q_qmlerror_set_object(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlError*
///
const char* q_qmlerror_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlerror.html#dtor.QQmlError)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlError*
///
void q_qmlerror_delete(void* self);

#endif
