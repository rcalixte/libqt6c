#include <string.h>
#include "libqpageranges.hpp"
#include "libqpageranges.h"

/// https://doc.qt.io/qt-6/qpageranges.html

/// q_pageranges_new constructs a new QPageRanges object.
///
///
QPageRanges* q_pageranges_new() {
    return QPageRanges_new();
}

/// q_pageranges_new2 constructs a new QPageRanges object.
///
/// ``` QPageRanges* other ```
QPageRanges* q_pageranges_new2(void* other) {
    return QPageRanges_new2((QPageRanges*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#operator=)
///
/// ``` QPageRanges* self, QPageRanges* other ```
void q_pageranges_operator_assign(void* self, void* other) {
    QPageRanges_OperatorAssign((QPageRanges*)self, (QPageRanges*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#swap)
///
/// ``` QPageRanges* self, QPageRanges* other ```
void q_pageranges_swap(void* self, void* other) {
    QPageRanges_Swap((QPageRanges*)self, (QPageRanges*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#addPage)
///
/// ``` QPageRanges* self, int pageNumber ```
void q_pageranges_add_page(void* self, int pageNumber) {
    QPageRanges_AddPage((QPageRanges*)self, pageNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#addRange)
///
/// ``` QPageRanges* self, int from, int to ```
void q_pageranges_add_range(void* self, int from, int to) {
    QPageRanges_AddRange((QPageRanges*)self, from, to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#toRangeList)
///
/// ``` QPageRanges* self ```
libqt_list /* of QPageRanges__Range* */ q_pageranges_to_range_list(void* self) {
    libqt_list _arr = QPageRanges_ToRangeList((QPageRanges*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#clear)
///
/// ``` QPageRanges* self ```
void q_pageranges_clear(void* self) {
    QPageRanges_Clear((QPageRanges*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#toString)
///
/// ``` QPageRanges* self ```
const char* q_pageranges_to_string(void* self) {
    libqt_string _str = QPageRanges_ToString((QPageRanges*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#fromString)
///
/// ``` const char* ranges ```
QPageRanges* q_pageranges_from_string(const char* ranges) {
    return QPageRanges_FromString(qstring(ranges));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#contains)
///
/// ``` QPageRanges* self, int pageNumber ```
bool q_pageranges_contains(void* self, int pageNumber) {
    return QPageRanges_Contains((QPageRanges*)self, pageNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#isEmpty)
///
/// ``` QPageRanges* self ```
bool q_pageranges_is_empty(void* self) {
    return QPageRanges_IsEmpty((QPageRanges*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#firstPage)
///
/// ``` QPageRanges* self ```
int32_t q_pageranges_first_page(void* self) {
    return QPageRanges_FirstPage((QPageRanges*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#lastPage)
///
/// ``` QPageRanges* self ```
int32_t q_pageranges_last_page(void* self) {
    return QPageRanges_LastPage((QPageRanges*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges.html#detach)
///
/// ``` QPageRanges* self ```
void q_pageranges_detach(void* self) {
    QPageRanges_Detach((QPageRanges*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPageRanges* self ```
void q_pageranges_delete(void* self) {
    QPageRanges_Delete((QPageRanges*)(self));
}

/// https://doc.qt.io/qt-6/qpageranges-range.html

/// q_pageranges__range_new constructs a new QPageRanges::Range object.
///
/// ``` QPageRanges__Range* other ```
QPageRanges__Range* q_pageranges__range_new(void* other) {
    return QPageRanges__Range_new((QPageRanges__Range*)other);
}

/// q_pageranges__range_new2 constructs a new QPageRanges::Range object and invalidates the source QPageRanges::Range object.
///
/// ``` QPageRanges__Range* other ```
QPageRanges__Range* q_pageranges__range_new2(void* other) {
    return QPageRanges__Range_new2((QPageRanges__Range*)other);
}

/// q_pageranges__range_new3 constructs a new QPageRanges::Range object.
///
///
QPageRanges__Range* q_pageranges__range_new3() {
    return QPageRanges__Range_new3();
}

/// q_pageranges__range_new4 constructs a new QPageRanges::Range object.
///
/// ``` QPageRanges__Range* param1 ```
QPageRanges__Range* q_pageranges__range_new4(void* param1) {
    return QPageRanges__Range_new4((QPageRanges__Range*)param1);
}

/// q_pageranges__range_copy_assign shallow copies `other` into `self`.
///
/// ``` QPageRanges__Range* self, QPageRanges__Range* other ```
void q_pageranges__range_copy_assign(void* self, void* other) {
    QPageRanges__Range_CopyAssign((QPageRanges__Range*)self, (QPageRanges__Range*)other);
}

/// q_pageranges__range_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPageRanges__Range* self, QPageRanges__Range* other ```
void q_pageranges__range_move_assign(void* self, void* other) {
    QPageRanges__Range_MoveAssign((QPageRanges__Range*)self, (QPageRanges__Range*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpageranges__range.html#contains)
///
/// ``` QPageRanges__Range* self, int pageNumber ```
bool q_pageranges__range_contains(void* self, int pageNumber) {
    return QPageRanges__Range_Contains((QPageRanges__Range*)self, pageNumber);
}

/// Delete this object from C++ memory.
///
/// ``` QPageRanges__Range* self ```
void q_pageranges__range_delete(void* self) {
    QPageRanges__Range_Delete((QPageRanges__Range*)(self));
}