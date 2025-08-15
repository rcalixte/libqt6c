#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFSELECTION_H
#define SRC_PDFQT6C_LIBQPDFSELECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfselection.html

/// q_pdfselection_new constructs a new QPdfSelection object.
///
/// @param other QPdfSelection*
QPdfSelection* q_pdfselection_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#operator-eq)
///
/// @param self QPdfSelection*
/// @param other QPdfSelection*
void q_pdfselection_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#swap)
///
/// @param self QPdfSelection*
/// @param other QPdfSelection*
void q_pdfselection_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
///
/// @param self QPdfSelection*
bool q_pdfselection_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfSelection*
const char* q_pdfselection_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
///
/// @param self QPdfSelection*
QRectF* q_pdfselection_bounding_rectangle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
///
/// @param self QPdfSelection*
int32_t q_pdfselection_start_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
///
/// @param self QPdfSelection*
int32_t q_pdfselection_end_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
///
/// @param self QPdfSelection*
void q_pdfselection_copy_to_clipboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
///
/// @param self QPdfSelection*
/// @param mode enum QClipboard__Mode
void q_pdfselection_copy_to_clipboard1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfselection.html#dtor.QPdfSelection)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfSelection*
void q_pdfselection_delete(void* self);

#endif
