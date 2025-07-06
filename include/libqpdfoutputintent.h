#pragma once
#ifndef SRCQT6C_LIBQPDFOUTPUTINTENT_H
#define SRCQT6C_LIBQPDFOUTPUTINTENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfoutputintent.html

/// q_pdfoutputintent_new constructs a new QPdfOutputIntent object.
///
///
QPdfOutputIntent* q_pdfoutputintent_new();

/// q_pdfoutputintent_new2 constructs a new QPdfOutputIntent object.
///
/// ``` QPdfOutputIntent* other ```
QPdfOutputIntent* q_pdfoutputintent_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#operator=)
///
/// ``` QPdfOutputIntent* self, QPdfOutputIntent* other ```
void q_pdfoutputintent_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#swap)
///
/// ``` QPdfOutputIntent* self, QPdfOutputIntent* other ```
void q_pdfoutputintent_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputConditionIdentifier)
///
/// ``` QPdfOutputIntent* self ```
const char* q_pdfoutputintent_output_condition_identifier(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputConditionIdentifier)
///
/// ``` QPdfOutputIntent* self, const char* identifier ```
void q_pdfoutputintent_set_output_condition_identifier(void* self, const char* identifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputCondition)
///
/// ``` QPdfOutputIntent* self ```
const char* q_pdfoutputintent_output_condition(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputCondition)
///
/// ``` QPdfOutputIntent* self, const char* condition ```
void q_pdfoutputintent_set_output_condition(void* self, const char* condition);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#registryName)
///
/// ``` QPdfOutputIntent* self ```
QUrl* q_pdfoutputintent_registry_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setRegistryName)
///
/// ``` QPdfOutputIntent* self, QUrl* name ```
void q_pdfoutputintent_set_registry_name(void* self, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#outputProfile)
///
/// ``` QPdfOutputIntent* self ```
QColorSpace* q_pdfoutputintent_output_profile(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#setOutputProfile)
///
/// ``` QPdfOutputIntent* self, QColorSpace* profile ```
void q_pdfoutputintent_set_output_profile(void* self, void* profile);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfoutputintent.html#dtor.QPdfOutputIntent)
///
/// Delete this object from C++ memory.
///
/// ``` QPdfOutputIntent* self ```
void q_pdfoutputintent_delete(void* self);

#endif
