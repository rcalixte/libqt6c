#pragma once
#ifndef SRCQT6C_LIBQPAGERANGES_H
#define SRCQT6C_LIBQPAGERANGES_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpageranges.html

/// q_pageranges_new constructs a new QPageRanges object.
///
QPageRanges* q_pageranges_new();

/// q_pageranges_new2 constructs a new QPageRanges object.
///
/// @param other QPageRanges*
QPageRanges* q_pageranges_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#operator-eq)
///
/// @param self QPageRanges*
/// @param other QPageRanges*
void q_pageranges_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#swap)
///
/// @param self QPageRanges*
/// @param other QPageRanges*
void q_pageranges_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#addPage)
///
/// @param self QPageRanges*
/// @param pageNumber int
void q_pageranges_add_page(void* self, int pageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#addRange)
///
/// @param self QPageRanges*
/// @param from int
/// @param to int
void q_pageranges_add_range(void* self, int from, int to);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#toRangeList)
///
/// @param self QPageRanges*
libqt_list /* of QPageRanges__Range* */ q_pageranges_to_range_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#clear)
///
/// @param self QPageRanges*
void q_pageranges_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPageRanges*
const char* q_pageranges_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#fromString)
///
/// @param ranges const char*
QPageRanges* q_pageranges_from_string(const char* ranges);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#contains)
///
/// @param self QPageRanges*
/// @param pageNumber int
bool q_pageranges_contains(void* self, int pageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#isEmpty)
///
/// @param self QPageRanges*
bool q_pageranges_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#firstPage)
///
/// @param self QPageRanges*
int32_t q_pageranges_first_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#lastPage)
///
/// @param self QPageRanges*
int32_t q_pageranges_last_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#detach)
///
/// @param self QPageRanges*
void q_pageranges_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#dtor.QPageRanges)
///
/// Delete this object from C++ memory.
///
/// @param self QPageRanges*
void q_pageranges_delete(void* self);

/// https://doc.qt.io/qt-6/qpageranges-range.html

/// q_pageranges__range_new constructs a new QPageRanges::Range object.
///
/// @param other QPageRanges__Range*
QPageRanges__Range* q_pageranges__range_new(void* other);

/// q_pageranges__range_new2 constructs a new QPageRanges::Range object and invalidates the source QPageRanges::Range object.
///
/// @param other QPageRanges__Range*
QPageRanges__Range* q_pageranges__range_new2(void* other);

/// q_pageranges__range_new3 constructs a new QPageRanges::Range object.
///
QPageRanges__Range* q_pageranges__range_new3();

/// q_pageranges__range_new4 constructs a new QPageRanges::Range object.
///
/// @param param1 QPageRanges__Range*
QPageRanges__Range* q_pageranges__range_new4(void* param1);

/// q_pageranges__range_copy_assign shallow copies `other` into `self`.
///
/// @param self QPageRanges__Range*
/// @param other QPageRanges__Range*
void q_pageranges__range_copy_assign(void* self, void* other);

/// q_pageranges__range_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPageRanges__Range*
/// @param other QPageRanges__Range*
void q_pageranges__range_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges-range.html#contains)
///
/// @param self QPageRanges__Range*
/// @param pageNumber int
bool q_pageranges__range_contains(void* self, int pageNumber);

/// Delete this object from C++ memory.
///
/// @param self QPageRanges__Range*
void q_pageranges__range_delete(void* self);

#endif
