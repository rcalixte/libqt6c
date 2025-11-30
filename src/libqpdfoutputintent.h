#pragma once
#ifndef SRC_QT6C_LIBQPDFOUTPUTINTENT_H
#define SRC_QT6C_LIBQPDFOUTPUTINTENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfoutputintent.html

/// q_pdfoutputintent_new constructs a new QPdfOutputIntent object.
///
QPdfOutputIntent* q_pdfoutputintent_new();

/// q_pdfoutputintent_new2 constructs a new QPdfOutputIntent object.
///
/// @param other QPdfOutputIntent*
QPdfOutputIntent* q_pdfoutputintent_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator-eq)
///
/// @param self QPdfOutputIntent*
/// @param other QPdfOutputIntent*
void q_pdfoutputintent_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
///
/// @param self QPdfOutputIntent*
/// @param other QPdfOutputIntent*
void q_pdfoutputintent_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfOutputIntent*
const char* q_pdfoutputintent_output_condition_identifier(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
///
/// @param self QPdfOutputIntent*
/// @param identifier const char*
void q_pdfoutputintent_set_output_condition_identifier(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfOutputIntent*
const char* q_pdfoutputintent_output_condition(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
///
/// @param self QPdfOutputIntent*
/// @param condition const char*
void q_pdfoutputintent_set_output_condition(void* self, const char* condition);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
///
/// @param self QPdfOutputIntent*
QUrl* q_pdfoutputintent_registry_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
///
/// @param self QPdfOutputIntent*
/// @param name QUrl*
void q_pdfoutputintent_set_registry_name(void* self, void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
///
/// @param self QPdfOutputIntent*
QColorSpace* q_pdfoutputintent_output_profile(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
///
/// @param self QPdfOutputIntent*
/// @param profile QColorSpace*
void q_pdfoutputintent_set_output_profile(void* self, void* profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfoutputintent.html#dtor.QPdfOutputIntent)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfOutputIntent*
void q_pdfoutputintent_delete(void* self);

#endif
