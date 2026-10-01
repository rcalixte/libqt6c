#pragma once
#ifndef PDF_LIBQPDFLINK_H
#define PDF_LIBQPDFLINK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QPdfLink* q_pdflink_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#operator-eq)
///
/// @param self QPdfLink*
/// @param other QPdfLink*
///
void q_pdflink_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#swap)
///
/// @param self QPdfLink*
/// @param other QPdfLink*
///
void q_pdflink_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#isValid)
///
/// @param self const QPdfLink*
///
bool q_pdflink_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#page)
///
/// @param self const QPdfLink*
///
int32_t q_pdflink_page(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#location)
///
/// @param self const QPdfLink*
///
QPointF* q_pdflink_location(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#zoom)
///
/// @param self const QPdfLink*
///
double q_pdflink_zoom(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#url)
///
/// @param self const QPdfLink*
///
QUrl* q_pdflink_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPdfLink*
///
const char* q_pdflink_context_before(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPdfLink*
///
const char* q_pdflink_context_after(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
///
/// @param self const QPdfLink*
///
/// @return libqt_list of QRectF*
///
libqt_list q_pdflink_rectangles(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPdfLink*
///
const char* q_pdflink_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
///
/// @param self const QPdfLink*
///
void q_pdflink_copy_to_clipboard(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
///
/// @param self const QPdfLink*
/// @param mode enum QClipboard__Mode
///
void q_pdflink_copy_to_clipboard1(const void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdflink.html#dtor.QPdfLink)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfLink*
///
void q_pdflink_delete(void* self);

#endif
