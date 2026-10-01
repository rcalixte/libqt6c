#pragma once
#ifndef LIBQPDFOUTPUTINTENT_H
#define LIBQPDFOUTPUTINTENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html)

/// q_pdfoutputintent_new constructs a new QPdfOutputIntent object.
///
QPdfOutputIntent* q_pdfoutputintent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html)

/// q_pdfoutputintent_new2 constructs a new QPdfOutputIntent object.
///
/// @param other QPdfOutputIntent*
///
QPdfOutputIntent* q_pdfoutputintent_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator-eq)
///
/// @param self QPdfOutputIntent*
/// @param other QPdfOutputIntent*
///
void q_pdfoutputintent_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
///
/// @param self QPdfOutputIntent*
/// @param other QPdfOutputIntent*
///
void q_pdfoutputintent_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPdfOutputIntent*
///
const char* q_pdfoutputintent_output_condition_identifier(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
///
/// @param self QPdfOutputIntent*
/// @param identifier const char*
///
void q_pdfoutputintent_set_output_condition_identifier(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPdfOutputIntent*
///
const char* q_pdfoutputintent_output_condition(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
///
/// @param self QPdfOutputIntent*
/// @param condition const char*
///
void q_pdfoutputintent_set_output_condition(void* self, const char* condition);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
///
/// @param self const QPdfOutputIntent*
///
QUrl* q_pdfoutputintent_registry_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
///
/// @param self QPdfOutputIntent*
/// @param name QUrl*
///
void q_pdfoutputintent_set_registry_name(void* self, const void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
///
/// @param self const QPdfOutputIntent*
///
QColorSpace* q_pdfoutputintent_output_profile(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
///
/// @param self QPdfOutputIntent*
/// @param profile QColorSpace*
///
void q_pdfoutputintent_set_output_profile(void* self, const void* profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#dtor.QPdfOutputIntent)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfOutputIntent*
///
void q_pdfoutputintent_delete(void* self);

#endif
