#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFSELECTION_H
#define SRC_PDFQT6C_LIBQPDFSELECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqrect.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qpdfselection.html

/// q_pdfselection_new constructs a new QPdfSelection object.
///
/// ``` QPdfSelection* other ```
QPdfSelection* q_pdfselection_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#operator=)
///
/// ``` QPdfSelection* self, QPdfSelection* other ```
void q_pdfselection_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#swap)
///
/// ``` QPdfSelection* self, QPdfSelection* other ```
void q_pdfselection_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
///
/// ``` QPdfSelection* self ```
bool q_pdfselection_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#text)
///
/// ``` QPdfSelection* self ```
const char* q_pdfselection_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
///
/// ``` QPdfSelection* self ```
QRectF* q_pdfselection_bounding_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
///
/// ``` QPdfSelection* self ```
int32_t q_pdfselection_start_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
///
/// ``` QPdfSelection* self ```
int32_t q_pdfselection_end_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
///
/// ``` QPdfSelection* self ```
void q_pdfselection_copy_to_clipboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
///
/// ``` QPdfSelection* self, enum QClipboard__Mode mode ```
void q_pdfselection_copy_to_clipboard1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#dtor.QPdfSelection)
///
/// Delete this object from C++ memory.
///
/// ``` QPdfSelection* self ```
void q_pdfselection_delete(void* self);

#endif
