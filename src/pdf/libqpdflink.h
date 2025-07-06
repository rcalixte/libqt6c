#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFLINK_H
#define SRC_PDFQT6C_LIBQPDFLINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdflink.html

/// q_pdflink_new constructs a new QPdfLink object.
///
///
QPdfLink* q_pdflink_new();

/// q_pdflink_new2 constructs a new QPdfLink object.
///
/// ``` QPdfLink* other ```
QPdfLink* q_pdflink_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#operator=)
///
/// ``` QPdfLink* self, QPdfLink* other ```
void q_pdflink_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#swap)
///
/// ``` QPdfLink* self, QPdfLink* other ```
void q_pdflink_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#isValid)
///
/// ``` QPdfLink* self ```
bool q_pdflink_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#page)
///
/// ``` QPdfLink* self ```
int32_t q_pdflink_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#location)
///
/// ``` QPdfLink* self ```
QPointF* q_pdflink_location(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#zoom)
///
/// ``` QPdfLink* self ```
double q_pdflink_zoom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#url)
///
/// ``` QPdfLink* self ```
QUrl* q_pdflink_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#contextBefore)
///
/// ``` QPdfLink* self ```
const char* q_pdflink_context_before(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#contextAfter)
///
/// ``` QPdfLink* self ```
const char* q_pdflink_context_after(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#rectangles)
///
/// ``` QPdfLink* self ```
libqt_list /* of QRectF* */ q_pdflink_rectangles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#toString)
///
/// ``` QPdfLink* self ```
const char* q_pdflink_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
///
/// ``` QPdfLink* self ```
void q_pdflink_copy_to_clipboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#copyToClipboard)
///
/// ``` QPdfLink* self, enum QClipboard__Mode mode ```
void q_pdflink_copy_to_clipboard1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdflink.html#dtor.QPdfLink)
///
/// Delete this object from C++ memory.
///
/// ``` QPdfLink* self ```
void q_pdflink_delete(void* self);

#endif
