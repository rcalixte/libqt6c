#pragma once
#ifndef PDF_LIBQPDFSELECTION_H
#define PDF_LIBQPDFSELECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html)

/// q_pdfselection_new constructs a new QPdfSelection object.
///
/// @param other QPdfSelection*
///
QPdfSelection* q_pdfselection_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#operator-eq)
///
/// @param self QPdfSelection*
/// @param other QPdfSelection*
///
void q_pdfselection_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#swap)
///
/// @param self QPdfSelection*
/// @param other QPdfSelection*
///
void q_pdfselection_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#isValid)
///
/// @param self const QPdfSelection*
///
bool q_pdfselection_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#bounds)
///
/// @param self const QPdfSelection*
///
/// @return libqt_list of QPolygonF*
///
libqt_list q_pdfselection_bounds(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPdfSelection*
///
const char* q_pdfselection_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#boundingRectangle)
///
/// @param self const QPdfSelection*
///
QRectF* q_pdfselection_bounding_rectangle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#startIndex)
///
/// @param self const QPdfSelection*
///
int32_t q_pdfselection_start_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#endIndex)
///
/// @param self const QPdfSelection*
///
int32_t q_pdfselection_end_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
///
/// @param self const QPdfSelection*
///
void q_pdfselection_copy_to_clipboard(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#copyToClipboard)
///
/// @param self const QPdfSelection*
/// @param mode enum QClipboard__Mode
///
void q_pdfselection_copy_to_clipboard1(const void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfselection.html#dtor.QPdfSelection)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfSelection*
///
void q_pdfselection_delete(void* self);

#endif
