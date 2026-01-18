#pragma once
#ifndef SRC_PDF_QT6C_LIBQPDFLINK_H
#define SRC_PDF_QT6C_LIBQPDFLINK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html)

/// q_pdflink_new constructs a new QPdfLink object.
///
QPdfLink* q_pdflink_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html)

/// q_pdflink_new2 constructs a new QPdfLink object.
///
/// @param other QPdfLink*
///
QPdfLink* q_pdflink_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#operator-eq)
///
/// @param self QPdfLink*
/// @param other QPdfLink*
///
void q_pdflink_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#swap)
///
/// @param self QPdfLink*
/// @param other QPdfLink*
///
void q_pdflink_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#isValid)
///
/// @param self QPdfLink*
///
bool q_pdflink_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#page)
///
/// @param self QPdfLink*
///
int32_t q_pdflink_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#location)
///
/// @param self QPdfLink*
///
QPointF* q_pdflink_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#zoom)
///
/// @param self QPdfLink*
///
double q_pdflink_zoom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#url)
///
/// @param self QPdfLink*
///
QUrl* q_pdflink_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfLink*
///
const char* q_pdflink_context_before(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfLink*
///
const char* q_pdflink_context_after(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
///
/// @param self QPdfLink*
///
/// @return libqt_list of QRectF*
///
libqt_list q_pdflink_rectangles(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfLink*
///
const char* q_pdflink_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
///
/// @param self QPdfLink*
///
void q_pdflink_copy_to_clipboard(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
///
/// @param self QPdfLink*
/// @param mode enum QClipboard__Mode
///
void q_pdflink_copy_to_clipboard1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#dtor.QPdfLink)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfLink*
///
void q_pdflink_delete(void* self);

#endif
