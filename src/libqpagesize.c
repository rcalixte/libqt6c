#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqpagesize.hpp"
#include "libqpagesize.h"

/// https://doc.qt.io/qt-6/qpagesize.html

/// q_pagesize_new constructs a new QPageSize object.
///
///
QPageSize* q_pagesize_new() {
    return QPageSize_new();
}

/// q_pagesize_new2 constructs a new QPageSize object.
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
QPageSize* q_pagesize_new2(int64_t pageSizeId) {
    return QPageSize_new2(pageSizeId);
}

/// q_pagesize_new3 constructs a new QPageSize object.
///
/// ``` QSize* pointSize ```
QPageSize* q_pagesize_new3(void* pointSize) {
    return QPageSize_new3((QSize*)pointSize);
}

/// q_pagesize_new4 constructs a new QPageSize object.
///
/// ``` QSizeF* size, enum QPageSize__Unit units ```
QPageSize* q_pagesize_new4(void* size, int64_t units) {
    return QPageSize_new4((QSizeF*)size, units);
}

/// q_pagesize_new5 constructs a new QPageSize object.
///
/// ``` QPageSize* other ```
QPageSize* q_pagesize_new5(void* other) {
    return QPageSize_new5((QPageSize*)other);
}

/// q_pagesize_new6 constructs a new QPageSize object.
///
/// ``` QSize* pointSize, const char* name ```
QPageSize* q_pagesize_new6(void* pointSize, const char* name) {
    return QPageSize_new6((QSize*)pointSize, qstring(name));
}

/// q_pagesize_new7 constructs a new QPageSize object.
///
/// ``` QSize* pointSize, const char* name, enum QPageSize__SizeMatchPolicy matchPolicy ```
QPageSize* q_pagesize_new7(void* pointSize, const char* name, int64_t matchPolicy) {
    return QPageSize_new7((QSize*)pointSize, qstring(name), matchPolicy);
}

/// q_pagesize_new8 constructs a new QPageSize object.
///
/// ``` QSizeF* size, enum QPageSize__Unit units, const char* name ```
QPageSize* q_pagesize_new8(void* size, int64_t units, const char* name) {
    return QPageSize_new8((QSizeF*)size, units, qstring(name));
}

/// q_pagesize_new9 constructs a new QPageSize object.
///
/// ``` QSizeF* size, enum QPageSize__Unit units, const char* name, enum QPageSize__SizeMatchPolicy matchPolicy ```
QPageSize* q_pagesize_new9(void* size, int64_t units, const char* name, int64_t matchPolicy) {
    return QPageSize_new9((QSizeF*)size, units, qstring(name), matchPolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#operator=)
///
/// ``` QPageSize* self, QPageSize* other ```
void q_pagesize_operator_assign(void* self, void* other) {
    QPageSize_OperatorAssign((QPageSize*)self, (QPageSize*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#swap)
///
/// ``` QPageSize* self, QPageSize* other ```
void q_pagesize_swap(void* self, void* other) {
    QPageSize_Swap((QPageSize*)self, (QPageSize*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#isEquivalentTo)
///
/// ``` QPageSize* self, QPageSize* other ```
bool q_pagesize_is_equivalent_to(void* self, void* other) {
    return QPageSize_IsEquivalentTo((QPageSize*)self, (QPageSize*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#isValid)
///
/// ``` QPageSize* self ```
bool q_pagesize_is_valid(void* self) {
    return QPageSize_IsValid((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#key)
///
/// ``` QPageSize* self ```
const char* q_pagesize_key(void* self) {
    libqt_string _str = QPageSize_Key((QPageSize*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#name)
///
/// ``` QPageSize* self ```
const char* q_pagesize_name(void* self) {
    libqt_string _str = QPageSize_Name((QPageSize*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QPageSize* self ```
int64_t q_pagesize_id(void* self) {
    return QPageSize_Id((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
///
/// ``` QPageSize* self ```
int32_t q_pagesize_windows_id(void* self) {
    return QPageSize_WindowsId((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
///
/// ``` QPageSize* self ```
QSizeF* q_pagesize_definition_size(void* self) {
    return QPageSize_DefinitionSize((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
///
/// ``` QPageSize* self ```
int64_t q_pagesize_definition_units(void* self) {
    return QPageSize_DefinitionUnits((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#size)
///
/// ``` QPageSize* self, enum QPageSize__Unit units ```
QSizeF* q_pagesize_size(void* self, int64_t units) {
    return QPageSize_Size((QPageSize*)self, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
///
/// ``` QPageSize* self ```
QSize* q_pagesize_size_points(void* self) {
    return QPageSize_SizePoints((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
///
/// ``` QPageSize* self, int resolution ```
QSize* q_pagesize_size_pixels(void* self, int resolution) {
    return QPageSize_SizePixels((QPageSize*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rect)
///
/// ``` QPageSize* self, enum QPageSize__Unit units ```
QRectF* q_pagesize_rect(void* self, int64_t units) {
    return QPageSize_Rect((QPageSize*)self, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rectPoints)
///
/// ``` QPageSize* self ```
QRect* q_pagesize_rect_points(void* self) {
    return QPageSize_RectPoints((QPageSize*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rectPixels)
///
/// ``` QPageSize* self, int resolution ```
QRect* q_pagesize_rect_pixels(void* self, int resolution) {
    return QPageSize_RectPixels((QPageSize*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#key)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
const char* q_pagesize_key_with_page_size_id(int64_t pageSizeId) {
    libqt_string _str = QPageSize_KeyWithPageSizeId(pageSizeId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#name)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
const char* q_pagesize_name_with_page_size_id(int64_t pageSizeId) {
    libqt_string _str = QPageSize_NameWithPageSizeId(pageSizeId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSize* pointSize ```
int64_t q_pagesize_id_with_point_size(void* pointSize) {
    return QPageSize_IdWithPointSize((QSize*)pointSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSizeF* size, enum QPageSize__Unit units ```
int64_t q_pagesize_id2(void* size, int64_t units) {
    return QPageSize_Id2((QSizeF*)size, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` int windowsId ```
int64_t q_pagesize_id_with_windows_id(int windowsId) {
    return QPageSize_IdWithWindowsId(windowsId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
int32_t q_pagesize_windows_id_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_WindowsIdWithPageSizeId(pageSizeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
QSizeF* q_pagesize_definition_size_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_DefinitionSizeWithPageSizeId(pageSizeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
int64_t q_pagesize_definition_units_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_DefinitionUnitsWithPageSizeId(pageSizeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#size)
///
/// ``` enum QPageSize__PageSizeId pageSizeId, enum QPageSize__Unit units ```
QSizeF* q_pagesize_size2(int64_t pageSizeId, int64_t units) {
    return QPageSize_Size2(pageSizeId, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
///
/// ``` enum QPageSize__PageSizeId pageSizeId ```
QSize* q_pagesize_size_points_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_SizePointsWithPageSizeId(pageSizeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
///
/// ``` enum QPageSize__PageSizeId pageSizeId, int resolution ```
QSize* q_pagesize_size_pixels2(int64_t pageSizeId, int resolution) {
    return QPageSize_SizePixels2(pageSizeId, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSize* pointSize, enum QPageSize__SizeMatchPolicy matchPolicy ```
int64_t q_pagesize_id22(void* pointSize, int64_t matchPolicy) {
    return QPageSize_Id22((QSize*)pointSize, matchPolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
///
/// ``` QSizeF* size, enum QPageSize__Unit units, enum QPageSize__SizeMatchPolicy matchPolicy ```
int64_t q_pagesize_id3(void* size, int64_t units, int64_t matchPolicy) {
    return QPageSize_Id3((QSizeF*)size, units, matchPolicy);
}

/// Delete this object from C++ memory.
///
/// ``` QPageSize* self ```
void q_pagesize_delete(void* self) {
    QPageSize_Delete((QPageSize*)(self));
}